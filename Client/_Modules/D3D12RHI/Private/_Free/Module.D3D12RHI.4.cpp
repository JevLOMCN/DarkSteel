// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 440

// DXGIBackBufferLock'' @ 14104a7d0

void __cdecl `dynamic_initializer_for_'FD3D12Viewport::DXGIBackBufferLock__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FD3D12Viewport::DXGIBackBufferLock,4000);
  atexit(`dynamic_atexit_destructor_for_'FD3D12Viewport::DXGIBackBufferLock__);
  return;
}

// `dynamic_initializer_for_'CVarAutoAttachPIX'' @ 14104a800

void __cdecl _dynamic_initializer_for__CVarAutoAttachPIX__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoAttachPIX,L"r.D3D12.AutoAttachPIX",&GAutoAttachPIX,
             L"Automatically attach PIX on startup",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAutoAttachPIX__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12AllowDiscardResources'' @ 14104a850

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

// `dynamic_initializer_for_'CVarD3D12BatchResourceBarriers'' @ 14104a8a0

void __cdecl _dynamic_initializer_for__CVarD3D12BatchResourceBarriers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12BatchResourceBarriers,L"d3d12.BatchResourceBarriers",
             &GD3D12BatchResourceBarriers,L"Whether to allow batching resource barriers",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12NumViewportBuffers'' @ 14104a8f0

void __cdecl D3D12RHI::_dynamic_initializer_for__CVarD3D12NumViewportBuffers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12NumViewportBuffers,L"r.D3D12.NumViewportBuffers",&GD3D12NumViewportBuffers,
             L"The number of viewport buffers to allocate for the RHI viewport.",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12NumViewportBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarD3DUseAllowTearing'' @ 14104a940

void __cdecl _dynamic_initializer_for__CVarD3DUseAllowTearing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3DUseAllowTearing,L"r.D3D12.UseAllowTearing",&GD3D12UseAllowTearing,
             L"Enable new dxgi flip mode with d3d12",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarD3DUseAllowTearing__);
  return;
}

// `dynamic_initializer_for_'CVarDevDisableD3DRuntimeBackgroundThreads'' @ 14104a990

void __cdecl _dynamic_initializer_for__CVarDevDisableD3DRuntimeBackgroundThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDevDisableD3DRuntimeBackgroundThreads,
             L"r.D3D12.DevDisableD3DRuntimeBackgroundThreads",
             &GDevDisableD3DRuntimeBackgroundThreads,
             L"If > 0, disables the background threads created by the D3D runtime for background shader optimization. Only available when Windows developer mode is enabled. (default = 0)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDevDisableD3DRuntimeBackgroundThreads__);
  return;
}

// `dynamic_initializer_for_'CVarDisableDiscardOfDepthResources'' @ 14104a9e0

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

// `dynamic_initializer_for_'CVarDriverOptimizedPipelineStateDiskCache'' @ 14104aa30

void __cdecl _dynamic_initializer_for__CVarDriverOptimizedPipelineStateDiskCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDriverOptimizedPipelineStateDiskCache,L"D3D12.PSO.DriverOptimizedDiskCache",
             local_res8,
             L"Enables a disk cache for driver-optimized Pipeline State Objects (PSOs).\nPSO descs are cached to disk so subsequent runs can create PSOs at load-time instead of at run-time.\nThis cache contains data specific to the hardware, driver, and machine that it was created on.\n0 to disable the driver-optimized pipeline state disk cache\n1 to enable the driver-optimized pipeline state disk cache\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDriverOptimizedPipelineStateDiskCache__);
  return;
}

// `dynamic_initializer_for_'CVarExperimentalShaderModels'' @ 14104aa80

void __cdecl _dynamic_initializer_for__CVarExperimentalShaderModels__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarExperimentalShaderModels,L"r.D3D12.ExperimentalShaderModels",local_res8,
             L"Controls whether D3D12 experimental shader models should be allowed. Not available in shipping builds. (default = 0)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarExperimentalShaderModels__);
  return;
}

// `dynamic_initializer_for_'CVarLogViewportEvents'' @ 14104aad0

void __cdecl D3D12RHI::RHIConsoleVariables::_dynamic_initializer_for__CVarLogViewportEvents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogViewportEvents,L"D3D12.LogViewportEvents",&LogViewportEvents,
             L"Log all the viewport events.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLogViewportEvents__);
  return;
}

// `dynamic_initializer_for_'CVarMinBuildVersionForRayTracing'' @ 14104ab20

void __cdecl _dynamic_initializer_for__CVarMinBuildVersionForRayTracing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinBuildVersionForRayTracing,L"r.D3D12.DXR.MinimumWindowsBuildVersion",
             &GMinimumWindowsBuildVersionForRayTracing,
             L"Sets the minimum Windows build version required to enable ray tracing.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMinBuildVersionForRayTracing__);
  return;
}

// `dynamic_initializer_for_'CVarMinDriverVersionForRayTracingAMD'' @ 14104ab70

void __cdecl _dynamic_initializer_for__CVarMinDriverVersionForRayTracingAMD__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinDriverVersionForRayTracingAMD,L"r.D3D12.DXR.MinimumDriverVersionAMD",
             &GMinimumDriverVersionForRayTracingAMD,
             L"Sets the minimum driver version required to enable ray tracing on AMD GPUs.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMinDriverVersionForRayTracingAMD__);
  return;
}

// `dynamic_initializer_for_'CVarMinDriverVersionForRayTracingNVIDIA'' @ 14104abc0

void __cdecl _dynamic_initializer_for__CVarMinDriverVersionForRayTracingNVIDIA__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinDriverVersionForRayTracingNVIDIA,L"r.D3D12.DXR.MinimumDriverVersionNVIDIA",
             &GMinimumDriverVersionForRayTracingNVIDIA,
             L"Sets the minimum driver version required to enable ray tracing on NVIDIA GPUs.",0x24)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarMinDriverVersionForRayTracingNVIDIA__);
  return;
}

// `dynamic_initializer_for_'CVarPipelineStateDiskCache'' @ 14104ac10

void __cdecl _dynamic_initializer_for__CVarPipelineStateDiskCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPipelineStateDiskCache,L"D3D12.PSO.DiskCache",local_res8,
             L"Enables a disk cache for Pipeline State Objects (PSOs).\nPSO descs are cached to disk so subsequent runs can create PSOs at load-time instead of at run-time.\nThis cache contains data that is independent of hardware, driver, or machine that it was created on. It can be distributed with shipping content.\n0 to disable the pipeline state disk cache\n1 to enable the pipeline state disk cache (default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPipelineStateDiskCache__);
  return;
}

// `dynamic_initializer_for_'CVarShaderBundleSkipDispatch'' @ 14104ac60

void __cdecl _dynamic_initializer_for__CVarShaderBundleSkipDispatch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderBundleSkipDispatch,L"wg.ShaderBundle.SkipDispatch",
             &GShaderBundleSkipDispatch,
             L"Whether to dispatch the built shader bundle pipeline (for debugging)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarShaderBundleSkipDispatch__);
  return;
}

// `dynamic_initializer_for_'GD3DCallFailedCS'' @ 14104acb0

void __cdecl _dynamic_initializer_for__GD3DCallFailedCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GD3DCallFailedCS,4000);
  atexit(_dynamic_atexit_destructor_for__GD3DCallFailedCS__);
  return;
}

// `dynamic_initializer_for_'GVertexDeclarationCache'' @ 14104ace0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__GVertexDeclarationCache__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GVertexDeclarationCache,4000);
  GVertexDeclarationCache.Cache._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GVertexDeclarationCache.Cache._48_8_ = _UNK_150631d98;
  GVertexDeclarationCache.Cache._0_8_ = 0;
  GVertexDeclarationCache.Cache._8_8_ = 0;
  GVertexDeclarationCache.Cache._32_8_ = 0;
  GVertexDeclarationCache.Cache._64_8_ = 0;
  GVertexDeclarationCache.Cache._72_4_ = 0;
  atexit(_dynamic_atexit_destructor_for__GVertexDeclarationCache__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantD3D12RHI'' @ 14104ad40

void __cdecl _dynamic_initializer_for__ModuleRegistrantD3D12RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "D3D12RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"D3D12RHI",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FD3D12DynamicRHIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateFindPSOTime'' @ 14104ad90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateFindPSOTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateFindPSOTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateFindPSOTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateFindPSOTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateFindPSOTime,*pFVar1,
               L"ApplyState: Find PSO time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateRebuildPSOTime'' @ 14104ae20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateRebuildPSOTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateRebuildPSOTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateRebuildPSOTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateRebuildPSOTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateRebuildPSOTime,*pFVar1,
               L"ApplyState: Rebuild PSO time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateSetConstantBufferTime'' @ 14104aeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateSetConstantBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateSetConstantBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetConstantBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateSetConstantBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateSetConstantBufferTime,
               *pFVar1,L"ApplyState: Set CBV time","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateSetSRVTime'' @ 14104af40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateSetSRVTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateSetSRVTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetSRVTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateSetSRVTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateSetSRVTime,*pFVar1,
               L"ApplyState: Set SRV time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateSetUAVTime'' @ 14104afd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateSetUAVTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateSetUAVTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetUAVTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateSetUAVTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateSetUAVTime,*pFVar1,
               L"ApplyState: Set UAV time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateSetVertexBufferTime'' @ 14104b060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateSetVertexBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateSetVertexBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateSetVertexBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateSetVertexBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateSetVertexBufferTime,*pFVar1
               ,L"ApplyState: Set Vertex Buffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ApplyStateTime'' @ 14104b0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ApplyStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ApplyStateTime == (FThreadSafeStaticStat<FStat_STAT_D3D12ApplyStateTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ApplyStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ApplyStateTime,*pFVar1,
               L"ApplyState time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized'' @ 14104b180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsInitialized>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceDescriptorsInitialized");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized,*pFVar1,
               L"Resource Descriptors Initialized","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated'' @ 14104b210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsUpdated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceDescriptorsUpdated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated,
               *pFVar1,L"Resource Descriptors Updated","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied'' @ 14104b2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceGPUDescriptorsCopied");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied,
               *pFVar1,L"Resource GPU Descriptors Copied","STATGROUP_D3D12Bindless",
               "STATCAT_Advanced",L"D3D12RHI: Bindless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage'' @ 14104b330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceHeapGPUMemoryUsage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage,
               *pFVar1,L"Resource Heaps GPU Memory Usage","STATGROUP_D3D12Bindless",
               "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Physical
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceHeapsActive'' @ 14104b3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceHeapsActive__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceHeapsActive ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceHeapsActive");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsActive,*pFVar1,
               L"Resource Heaps Active","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceHeapsAllocated'' @ 14104b450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceHeapsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceHeapsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceHeapsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsAllocated,
               *pFVar1,L"Resource Heaps Allocated","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU'' @ 14104b4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceHeapsInUseByGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU,
               *pFVar1,L"Resource Heaps in use by GPU","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BindlessResourceHeapsVersioned'' @ 14104b570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BindlessResourceHeapsVersioned__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BindlessResourceHeapsVersioned ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsVersioned>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BindlessResourceHeapsVersioned");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsVersioned,
               *pFVar1,L"Resource Heaps Versioned","STATGROUP_D3D12Bindless","STATCAT_Advanced",
               L"D3D12RHI: Bindless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12Buffer'' @ 14104b600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12Buffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12Buffer == (FThreadSafeStaticStat<FStat_STAT_D3D12Buffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12Buffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12Buffer,*pFVar1,L"Buffers",
               "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolAlignmentWaste'' @ 14104b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolAlignmentWaste__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolAlignmentWaste ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolAlignmentWaste>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolAlignmentWaste");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolAlignmentWaste,*pFVar1,
               L"BufferPool Memory Alignment Waste","STATGROUP_D3D12BufferDetails",
               "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,
               MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolFragmentation'' @ 14104b720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolFragmentation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolFragmentation ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolFragmentation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolFragmentation,*pFVar1,
               L"Bufferool Fragmentation","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolFragmentationPercentage'' @ 14104b7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolFragmentationPercentage__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolFragmentationPercentage ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentationPercentage>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolFragmentationPercentage");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolFragmentationPercentage,
               *pFVar1,L"Bufferool Fragmentation Percentage","STATGROUP_D3D12BufferDetails",
               "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,NumBits,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolFullPages'' @ 14104b840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolFullPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolFullPages ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFullPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolFullPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolFullPages,*pFVar1,
               L"BufferPool Full Pages","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolMemoryAllocated'' @ 14104b8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolMemoryAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolMemoryAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolMemoryAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryAllocated,*pFVar1,
               L"BufferPool Memory Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolMemoryFree'' @ 14104b960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolMemoryFree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolMemoryFree ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryFree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolMemoryFree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryFree,*pFVar1,
               L"BufferPool Memory Free","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolMemoryUsed'' @ 14104b9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolMemoryUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolMemoryUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryUsed,*pFVar1,
               L"BufferPool Memory Used","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferPoolPageCount'' @ 14104ba80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferPoolPageCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferPoolPageCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolPageCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferPoolPageCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolPageCount,*pFVar1,
               L"BufferPool Page Count","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferStandAloneAllocated'' @ 14104bb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferStandAloneAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferStandAloneAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferStandAloneAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferStandAloneAllocated,*pFVar1,
               L"Buffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BufferStandAloneCount'' @ 14104bba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BufferStandAloneCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BufferStandAloneCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferStandAloneCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BufferStandAloneCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferStandAloneCount,*pFVar1,
               L"Buffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ClearMRT'' @ 14104bc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ClearMRT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ClearMRT == (FThreadSafeStaticStat<FStat_STAT_D3D12ClearMRT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ClearMRT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ClearMRT,*pFVar1,L"Clear MRT time",
               "STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ClearShaderResourceViewsTime'' @ 14104bcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ClearShaderResourceViewsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ClearShaderResourceViewsTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ClearShaderResourceViewsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ClearShaderResourceViewsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ClearShaderResourceViewsTime,*pFVar1,
               L"Clear SRVs time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CommitComputeConstants'' @ 14104bd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CommitComputeConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CommitComputeConstants ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CommitComputeConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CommitComputeConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CommitComputeConstants,*pFVar1,
               L"Commit compute constants (Set CBV time)","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CommitGraphicsConstants'' @ 14104bde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CommitGraphicsConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CommitGraphicsConstants ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CommitGraphicsConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CommitGraphicsConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CommitGraphicsConstants,*pFVar1,
               L"Commit graphics constants (Set CBV time)","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CommitResourceTables'' @ 14104be70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CommitResourceTables__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CommitResourceTables ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CommitResourceTables>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CommitResourceTables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CommitResourceTables,*pFVar1,
               L"Commit resource tables","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CommitTransientResourceTime'' @ 14104bf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CommitTransientResourceTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CommitTransientResourceTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CommitTransientResourceTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CommitTransientResourceTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CommitTransientResourceTime,*pFVar1,
               L"Commit transient resource time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CopyToStagingBufferTime'' @ 14104bf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CopyToStagingBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CopyToStagingBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CopyToStagingBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CopyToStagingBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CopyToStagingBufferTime,*pFVar1,
               L"CopyToStagingBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CreateBoundShaderStateTime'' @ 14104c020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CreateBoundShaderStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CreateBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateBoundShaderStateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CreateBoundShaderStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateBoundShaderStateTime,*pFVar1,
               L"CreateBoundShaderState time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CreateBufferTime'' @ 14104c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CreateBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CreateBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CreateBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateBufferTime,*pFVar1,
               L"CreateBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CreateTextureTime'' @ 14104c140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CreateTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CreateTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CreateTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateTextureTime,*pFVar1,
               L"CreateTexture time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CustomPresentTime'' @ 14104c1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CustomPresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CustomPresentTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CustomPresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CustomPresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CustomPresentTime,*pFVar1,
               L"CustomPresent time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12DecommitTransientResourceTime'' @ 14104c260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12DecommitTransientResourceTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12DecommitTransientResourceTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12DecommitTransientResourceTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12DecommitTransientResourceTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DecommitTransientResourceTime,*pFVar1
               ,L"Decommit transient resource time","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12DispatchShaderBundle'' @ 14104c2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12DispatchShaderBundle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12DispatchShaderBundle ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12DispatchShaderBundle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DispatchShaderBundle,*pFVar1,
               L"Dispatch shader bundle time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ExecuteCommandListTime'' @ 14104c380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ExecuteCommandListTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ExecuteCommandListTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ExecuteCommandListTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ExecuteCommandListTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ExecuteCommandListTime,*pFVar1,
               L"ExecuteCommandList time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ExecutedCommandListBatches'' @ 14104c410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ExecutedCommandListBatches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ExecutedCommandListBatches ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ExecutedCommandListBatches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ExecutedCommandListBatches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ExecutedCommandListBatches,*pFVar1,
               L"Executed Command List Batches","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ExecutedCommandLists'' @ 14104c4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ExecutedCommandLists__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ExecutedCommandLists ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ExecutedCommandLists>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ExecutedCommandLists");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ExecutedCommandLists,*pFVar1,
               L"Executed Command Lists","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12LockBufferTime'' @ 14104c530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12LockBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12LockBufferTime == (FThreadSafeStaticStat<FStat_STAT_D3D12LockBufferTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12LockBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12LockBufferTime,*pFVar1,
               L"LockBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12LockTextureTime'' @ 14104c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12LockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12LockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12LockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12LockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12LockTextureTime,*pFVar1,
               L"LockTexture time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12MemoryCurrentTotal'' @ 14104c650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12MemoryCurrentTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12MemoryCurrentTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,*pFVar1,L"TOTAL",
               "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NewBoundShaderStateTime'' @ 14104c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NewBoundShaderStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NewBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NewBoundShaderStateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NewBoundShaderStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NewBoundShaderStateTime,*pFVar1,
               L"New bound shader state time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NumBoundShaderState'' @ 14104c770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NumBoundShaderState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NumBoundShaderState ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumBoundShaderState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NumBoundShaderState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumBoundShaderState,*pFVar1,
               L"Num bound shader states","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NumCommandAllocators'' @ 14104c800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NumCommandAllocators__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NumCommandAllocators ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NumCommandAllocators");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandAllocators,*pFVar1,
               L"Num command allocators (3D, Compute, Copy)","STATGROUP_D3D12RHI","STATCAT_Advanced"
               ,L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NumCommandLists'' @ 14104c890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NumCommandLists__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NumCommandLists ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NumCommandLists");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandLists,*pFVar1,
               L"Num command lists (3D, Compute, Copy)","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NumPSOs'' @ 14104c920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NumPSOs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NumPSOs == (FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NumPSOs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumPSOs,*pFVar1,
               L"Num pipeline state objects (PSOs)","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12NumQueryHeaps'' @ 14104c9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12NumQueryHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12NumQueryHeaps == (FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12NumQueryHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumQueryHeaps,*pFVar1,
               L"Num Query Heaps","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12PresentTime'' @ 14104ca40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12PresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12PresentTime == (FThreadSafeStaticStat<FStat_STAT_D3D12PresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12PresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12PresentTime,*pFVar1,L"Present time",
               "STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RTBuffers'' @ 14104cad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RTBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RTBuffers == (FThreadSafeStaticStat<FStat_STAT_D3D12RTBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RTBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RTBuffers,*pFVar1,
               L"RayTracing Buffers","STATGROUP_D3D12Resources","STATCAT_Advanced",
               L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RenderTargetStandAloneAllocated'' @ 14104cb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RenderTargetStandAloneAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RenderTargetStandAloneAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RenderTargetStandAloneAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RenderTargetStandAloneAllocated,
               *pFVar1,L"RenderTarget StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
               "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
               MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RenderTargetStandAloneCount'' @ 14104cbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RenderTargetStandAloneCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RenderTargetStandAloneCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargetStandAloneCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RenderTargetStandAloneCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RenderTargetStandAloneCount,*pFVar1,
               L"RenderTarget StandAlone Allocated","STATGROUP_D3D12MemoryDetails",
               "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RenderTargets'' @ 14104cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RenderTargets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RenderTargets == (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargets>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RenderTargets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RenderTargets,*pFVar1,
               L"Render Targets","STATGROUP_D3D12Resources","STATCAT_Advanced",
               L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ReservedResourcePhysical'' @ 14104cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ReservedResourcePhysical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ReservedResourcePhysical ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ReservedResourcePhysical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ReservedResourcePhysical,*pFVar1,
               L"Reserved Resource Physical Memory","STATGROUP_D3D12MemoryDetails",
               "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
               MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetBoundShaderState'' @ 14104cda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetBoundShaderState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetBoundShaderState ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetBoundShaderState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetBoundShaderState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetBoundShaderState,*pFVar1,
               L"Set bound shader state","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetShaderResourceViewTime'' @ 14104ce30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetShaderResourceViewTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetShaderResourceViewTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetShaderResourceViewTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetShaderResourceViewTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetShaderResourceViewTime,*pFVar1,
               L"Set SRV time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetShaderUniformBuffer'' @ 14104cec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetShaderUniformBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetShaderUniformBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetShaderUniformBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetShaderUniformBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetShaderUniformBuffer,*pFVar1,
               L"Set shader uniform buffer (Set CBV time)","STATGROUP_D3D12RHI","STATCAT_Advanced",
               L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetTextureInTableCalls'' @ 14104cf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetTextureInTableCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetTextureInTableCalls ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetTextureInTableCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetTextureInTableCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetTextureInTableCalls,*pFVar1,
               L"Num textures in tables","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetUnorderedAccessViewTime'' @ 14104cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetUnorderedAccessViewTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetUnorderedAccessViewTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetUnorderedAccessViewTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetUnorderedAccessViewTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetUnorderedAccessViewTime,*pFVar1,
               L"Set UAV time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TextureAllocatorAllocated'' @ 14104d070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TextureAllocatorAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TextureAllocatorAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TextureAllocatorAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureAllocatorAllocated,*pFVar1,
               L"Texture Allocator Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TextureAllocatorCount'' @ 14104d100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TextureAllocatorCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TextureAllocatorCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TextureAllocatorCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureAllocatorCount,*pFVar1,
               L"Texture Allocator Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TextureAllocatorUnused'' @ 14104d190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TextureAllocatorUnused__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TextureAllocatorUnused ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureAllocatorUnused>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TextureAllocatorUnused");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureAllocatorUnused,*pFVar1,
               L"Texture Allocator Unused","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TextureStandAloneAllocated'' @ 14104d220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TextureStandAloneAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TextureStandAloneAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TextureStandAloneAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureStandAloneAllocated,*pFVar1,
               L"Texture StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TextureStandAloneCount'' @ 14104d2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TextureStandAloneCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TextureStandAloneCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TextureStandAloneCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TextureStandAloneCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TextureStandAloneCount,*pFVar1,
               L"Texture StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12Textures'' @ 14104d340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12Textures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12Textures == (FThreadSafeStaticStat<FStat_STAT_D3D12Textures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12Textures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12Textures,*pFVar1,L"Textures",
               "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TexturesAllocated'' @ 14104d3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TexturesAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TexturesAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TexturesAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TexturesAllocated,*pFVar1,
               L"Textures Allocated","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TexturesReleased'' @ 14104d460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TexturesReleased__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TexturesReleased ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesReleased>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TexturesReleased");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TexturesReleased,*pFVar1,
               L"Textures Released","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12TransientHeaps'' @ 14104d4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12TransientHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12TransientHeaps == (FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12TransientHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TransientHeaps,*pFVar1,
               L"Transient Heaps","STATGROUP_D3D12Resources","STATCAT_Advanced",
               L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVBarriers'' @ 14104d580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVBarriers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVBarriers == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBarriers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVBarriers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBarriers,*pFVar1,L"UAV Barriers",
               "STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVBufferStandAloneAllocated'' @ 14104d610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVBufferStandAloneAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVBufferStandAloneAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVBufferStandAloneAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBufferStandAloneAllocated,*pFVar1,
               L"UAVBuffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVBufferStandAloneCount'' @ 14104d6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVBufferStandAloneCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVBufferStandAloneCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBufferStandAloneCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVBufferStandAloneCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBufferStandAloneCount,*pFVar1,
               L"UAVBuffer StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVBuffers'' @ 14104d730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVBuffers == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVBuffers,*pFVar1,L"UAV Buffers",
               "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVTextureStandAloneAllocated'' @ 14104d7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVTextureStandAloneAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVTextureStandAloneAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVTextureStandAloneAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVTextureStandAloneAllocated,*pFVar1
               ,L"UAVTexture StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced"
               ,L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVTextureStandAloneCount'' @ 14104d850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVTextureStandAloneCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVTextureStandAloneCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextureStandAloneCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVTextureStandAloneCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVTextureStandAloneCount,*pFVar1,
               L"UAVTexture StandAlone Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UAVTextures'' @ 14104d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UAVTextures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UAVTextures == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UAVTextures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UAVTextures,*pFVar1,L"UAV Textures",
               "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UnlockBufferTime'' @ 14104d970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UnlockBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UnlockBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UnlockBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UnlockBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UnlockBufferTime,*pFVar1,
               L"UnlockBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UnlockTextureTime'' @ 14104da00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UnlockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UnlockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UnlockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UnlockTextureTime,*pFVar1,
               L"UnlockTexture time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UpdateUniformBufferTime'' @ 14104da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UpdateUniformBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UpdateUniformBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UpdateUniformBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UpdateUniformBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UpdateUniformBufferTime,*pFVar1,
               L"Update uniform buffer","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolAlignmentWaste'' @ 14104db20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolAlignmentWaste__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolAlignmentWaste ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolAlignmentWaste>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolAlignmentWaste");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolAlignmentWaste,*pFVar1,
               L"UploadPool Memory Alignment Waste","STATGROUP_D3D12BufferDetails",
               "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,
               MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolFullPages'' @ 14104dbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolFullPages__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolFullPages ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolFullPages>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolFullPages");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolFullPages,*pFVar1,
               L"UploadPool Full Pages","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolMemoryAllocated'' @ 14104dc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolMemoryAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolMemoryAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolMemoryAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryAllocated,*pFVar1,
               L"UploadPool Memory Allocated","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolMemoryFree'' @ 14104dcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolMemoryFree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolMemoryFree ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryFree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolMemoryFree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryFree,*pFVar1,
               L"UploadPool Memory Free","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolMemoryUsed'' @ 14104dd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolMemoryUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolMemoryUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolMemoryUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolMemoryUsed,*pFVar1,
               L"UploadPool Memory Used","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12UploadPoolPageCount'' @ 14104ddf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12UploadPoolPageCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12UploadPoolPageCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12UploadPoolPageCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12UploadPoolPageCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12UploadPoolPageCount,*pFVar1,
               L"UploadPool Page Count","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
               L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12WaitForFenceTime'' @ 14104de80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12WaitForFenceTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12WaitForFenceTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12WaitForFenceTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12WaitForFenceTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12WaitForFenceTime,*pFVar1,
               L"WaitForFence time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors'' @ 14104df10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitMaxUsedSamplerDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitMaxUsedSamplerDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors,*pFVar1,
               L"Max used explicit sampler descriptors in a single heap",
               "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitSamplerDescriptorHeaps'' @ 14104dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitSamplerDescriptorHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitSamplerDescriptorHeaps ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitSamplerDescriptorHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitSamplerDescriptorHeaps,*pFVar1,
               L"Explicit sampler descriptor heaps","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitSamplerDescriptors'' @ 14104e030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitSamplerDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitSamplerDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitSamplerDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitSamplerDescriptors,*pFVar1,
               L"Explicit sampler descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitUsedSamplerDescriptors'' @ 14104e0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitUsedSamplerDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitUsedSamplerDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedSamplerDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitUsedSamplerDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitUsedSamplerDescriptors,*pFVar1,
               L"Used explicit sampler descriptors (per frame)","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitUsedViewDescriptors'' @ 14104e150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitUsedViewDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitUsedViewDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedViewDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitUsedViewDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitUsedViewDescriptors,*pFVar1,
               L"Used explicit view descriptors (per frame)","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitViewDescriptorHeaps'' @ 14104e1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitViewDescriptorHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitViewDescriptorHeaps ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitViewDescriptorHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptorHeaps,*pFVar1,
               L"Explicit view descriptor heaps","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitViewDescriptors'' @ 14104e270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitViewDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitViewDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitViewDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptors,*pFVar1,
               L"Explicit view descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GlobalViewHeapBlockAllocations'' @ 14104e300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GlobalViewHeapBlockAllocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GlobalViewHeapBlockAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapBlockAllocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GlobalViewHeapBlockAllocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapBlockAllocations,*pFVar1,
               L"View Global: Block Allocations","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GlobalViewHeapFreeDescriptors'' @ 14104e390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GlobalViewHeapFreeDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GlobalViewHeapFreeDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GlobalViewHeapFreeDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapFreeDescriptors,*pFVar1,
               L"View Global: Free Descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GlobalViewHeapReservedDescriptors'' @ 14104e420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GlobalViewHeapReservedDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GlobalViewHeapReservedDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GlobalViewHeapReservedDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapReservedDescriptors,*pFVar1,
               L"View Global: Reserved Descriptors","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GlobalViewHeapUsedDescriptors'' @ 14104e4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GlobalViewHeapUsedDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GlobalViewHeapUsedDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GlobalViewHeapUsedDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapUsedDescriptors,*pFVar1,
               L"View Global: Used Descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GlobalViewHeapWastedDescriptors'' @ 14104e540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GlobalViewHeapWastedDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GlobalViewHeapWastedDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GlobalViewHeapWastedDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapWastedDescriptors,*pFVar1,
               L"View Global: Wasted Descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced"
               ,L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReservedSamplerOnlineDescriptors'' @ 14104e5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReservedSamplerOnlineDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReservedSamplerOnlineDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReservedSamplerOnlineDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReservedSamplerOnlineDescriptors,
               *pFVar1,L"Sampler: Num reserved descriptors","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReservedViewOnlineDescriptors'' @ 14104e660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReservedViewOnlineDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReservedViewOnlineDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_NumReservedViewOnlineDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReservedViewOnlineDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReservedViewOnlineDescriptors,*pFVar1,
               L"View: Num reserved descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables'' @ 14104e6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables ==
      (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptorTables>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReuseableSamplerOnlineDescriptorTables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables,
               *pFVar1,L"Sampler: Num reusable unique descriptor table entries",
               "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReuseableSamplerOnlineDescriptors'' @ 14104e780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReuseableSamplerOnlineDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReuseableSamplerOnlineDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReuseableSamplerOnlineDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReuseableSamplerOnlineDescriptors,
               *pFVar1,L"Sampler: Num reusable unique descriptors","STATGROUP_D3D12DescriptorHeap",
               "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReusedSamplerOnlineDescriptors'' @ 14104e810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReusedSamplerOnlineDescriptors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReusedSamplerOnlineDescriptors ==
      (FThreadSafeStaticStat<FStat_STAT_NumReusedSamplerOnlineDescriptors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReusedSamplerOnlineDescriptors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReusedSamplerOnlineDescriptors,*pFVar1,
               L"Sampler: Num reused descriptors","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced"
               ,L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumSamplerOnlineDescriptorHeaps'' @ 14104e8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumSamplerOnlineDescriptorHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumSamplerOnlineDescriptorHeaps ==
      (FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumSamplerOnlineDescriptorHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumSamplerOnlineDescriptorHeaps,*pFVar1,
               L"Sampler: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumViewOnlineDescriptorHeaps'' @ 14104e930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumViewOnlineDescriptorHeaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumViewOnlineDescriptorHeaps ==
      (FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumViewOnlineDescriptorHeaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumViewOnlineDescriptorHeaps,*pFVar1,
               L"View: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheHit'' @ 14104e9c0

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheMiss'' @ 14104ea50

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeNumLowlevelCacheEntries'' @ 14104eae0

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOCreateTime'' @ 14104eb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOCreateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOCreateTime == (FThreadSafeStaticStat<FStat_STAT_PSOCreateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOCreateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOCreateTime,*pFVar1,L"Create time",
               "STATGROUP_D3D12PipelineState","STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheHit'' @ 14104ec00

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheMiss'' @ 14104ec90

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries'' @ 14104ed20

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

// `dynamic_initializer_for_'StatPtr_STAT_SamplerHeapChanged'' @ 14104edb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SamplerHeapChanged__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SamplerHeapChanged == (FThreadSafeStaticStat<FStat_STAT_SamplerHeapChanged>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SamplerHeapChanged");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SamplerHeapChanged,*pFVar1,
               L"Sampler: Heap changed","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SamplerOnlineDescriptorHeapMemory'' @ 14104ee40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SamplerOnlineDescriptorHeapMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SamplerOnlineDescriptorHeapMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SamplerOnlineDescriptorHeapMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SamplerOnlineDescriptorHeapMemory,*pFVar1,
               L"Sampler DescriptorHeap Memory","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
               L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_GPUSystem);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UniqueSamplers'' @ 14104eed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UniqueSamplers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UniqueSamplers == (FThreadSafeStaticStat<FStat_STAT_UniqueSamplers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UniqueSamplers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniqueSamplers,*pFVar1,L"Unique Samplers",
               "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ViewHeapChanged'' @ 14104ef60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ViewHeapChanged__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ViewHeapChanged == (FThreadSafeStaticStat<FStat_STAT_ViewHeapChanged>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ViewHeapChanged");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewHeapChanged,*pFVar1,
               L"View: Heap changed","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
               L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ViewOnlineDescriptorHeapMemory'' @ 14104eff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ViewOnlineDescriptorHeapMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ViewOnlineDescriptorHeapMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ViewOnlineDescriptorHeapMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewOnlineDescriptorHeapMemory,*pFVar1,
               L"View DescriptorHeap Memory (SRV, CBV, UAV)","STATGROUP_D3D12MemoryDetails",
               "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
               MCR_GPUSystem);
  }
  return;
}

// `scalar_deleting_destructor' @ 145a84470

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
FD3D12DynamicRHIModule::_scalar_deleting_destructor_(FD3D12DynamicRHIModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FD3D12DynamicRHIModule__6B_;
  DestructItems<TSharedPtr<FD3D12Adapter,1>,int>
            ((TSharedPtr<FD3D12Adapter,1> *)(this->ChosenAdapters).AllocatorInstance.Data,
             (this->ChosenAdapters).ArrayNum);
  pFVar1 = (this->ChosenAdapters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// operator()<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l47::<lambda_1>_> @ 145a84650

void __thiscall
`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l47::<lambda_1>::
operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l47::<lambda_1>_>
          (void *this,FBreadcrumbNode *param_1,<lambda_1> *param_2)

{
  FBreadcrumbNode *pFVar1;
  int iVar2;
  FSerializer *this_00;
  code *pcVar3;
  bool bVar4;
  FBreadcrumbNode *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = *(FSerializer **)this;
  if ((param_1->State).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FGPUBreadcrumbCrashData::FSerializer::BeginNode
            (this_00,&param_1->Name,(param_1->State).TypedValue);
  iVar2 = (param_1->Children).ArrayNum;
  pFVar5 = (FBreadcrumbNode *)(param_1->Children).AllocatorInstance.Data;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l47::<lambda_1>_>
              (param_2,pFVar5,param_2);
    pFVar5 = pFVar5 + 1;
  }
  FGPUBreadcrumbCrashData::FSerializer::EndNode(*(FSerializer **)this);
  return;
}

// operator()<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l47::<lambda_1>_> @ 145a84720

void __thiscall
`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l47::<lambda_1>::
operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l47::<lambda_1>_>
          (void *this,FBreadcrumbNode *param_1,<lambda_1> *param_2)

{
  FBreadcrumbNode *pFVar1;
  int iVar2;
  FSerializer *this_00;
  code *pcVar3;
  bool bVar4;
  FBreadcrumbNode *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = *(FSerializer **)this;
  if ((param_1->State).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FGPUBreadcrumbCrashData::FSerializer::BeginNode
            (this_00,&param_1->Name,(param_1->State).TypedValue);
  iVar2 = (param_1->Children).ArrayNum;
  pFVar5 = (FBreadcrumbNode *)(param_1->Children).AllocatorInstance.Data;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l47::<lambda_1>_>
              (param_2,pFVar5,param_2);
    pFVar5 = pFVar5 + 1;
  }
  FGPUBreadcrumbCrashData::FSerializer::EndNode(*(FSerializer **)this);
  return;
}

// ApplyStaticUniformBuffers<`RecordBindings'::__l2::<lambda_1>_> @ 145a84a10

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
UE::RHICore::ApplyStaticUniformBuffers<_RecordBindings_::__l2::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  FRHIUniformBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  uVar10 = uVar7;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar7;
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar2 = *(byte *)(uVar10 + param_1->_padding_);
      if (bVar2 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar2 * 8);
        uVar6 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar3,bVar2,*(uint *)(param_1->_padding_ + uVar10 * 4));
        if (pFVar3 != (FRHIUniformBuffer *)0x0) {
          puVar1 = &param_3->Context->field_0x2f8;
          uVar6 = 0;
          bVar5 = *(int *)puVar1 != 0;
          if (bVar5) {
            for (; (*(uint *)puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          uVar7 = 0x20;
          if (bVar5) {
            uVar7 = (ulonglong)uVar6;
          }
          (*param_3->BundleUniformBuffers)[uVar10] =
               (FD3D12UniformBuffer *)(&pFVar3[1]._padding_)[uVar7];
        }
      }
      iVar8 = (int)param_1->_padding_;
      uVar7 = (ulonglong)(uVar9 + 1);
      uVar10 = uVar10 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1> @ 145a84c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FQueueData * __cdecl
CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>
          (FQueueData *__return_storage_ptr__,D3D12_AUTO_BREADCRUMB_NODE1 *param_1)

{
  FString *this;
  undefined2 *puVar1;
  byte *pbVar2;
  FBreadcrumbNode *pFVar3;
  FBreadcrumbNode *pFVar4;
  D3D12_AUTO_BREADCRUMB_OP DVar5;
  longlong lVar6;
  char *pcVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FQueueData *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  D3D12_AUTO_BREADCRUMB_OP *pDVar18;
  ForElementType<FSetElementId> FVar19;
  wchar_t *pwVar20;
  undefined4 uVar21;
  D3D12_DRED_BREADCRUMB_CONTEXT *pDVar22;
  FBreadcrumbNode *pFVar23;
  ForAnyElementType FVar24;
  D3D12_DRED_BREADCRUMB_CONTEXT *pDVar25;
  int *piVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2d8;
  int local_2d0;
  int local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined2 local_2c6;
  char local_2c4;
  byte local_2c3 [3];
  undefined2 *local_2c0;
  longlong local_2b8;
  FString local_2b0;
  uint local_2a0;
  <lambda_1> local_298;
  undefined2 local_290;
  void *local_288;
  undefined8 local_280;
  FBreadcrumbNode *local_278;
  ulonglong local_270;
  FQueueData *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&> local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  FQueueData local_230;
  TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,0>,FDefaultSetAllocator>
  local_1f8;
  FSerializer local_1a8;
  FQueueData local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_268 = __return_storage_ptr__;
  local_250.Value = (wchar_t **)param_1;
  if (((param_1 == (D3D12_AUTO_BREADCRUMB_NODE1 *)0x0) ||
      (param_1->pLastBreadcrumbValue == (uint *)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("DredNode && DredNode->pLastBreadcrumbValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                         ,0x152,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FQueueData *)(*pcVar8)();
    return pFVar13;
  }
  uVar30 = *param_1->pLastBreadcrumbValue;
  if ((uVar30 == param_1->BreadcrumbCount) || (uVar30 == 0)) {
    (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = 0;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FullHash).Hash[0] = '\0';
    (__return_storage_ptr__->FullHash).Hash[1] = '\0';
    (__return_storage_ptr__->FullHash).Hash[2] = '\0';
    (__return_storage_ptr__->FullHash).Hash[3] = '\0';
    (__return_storage_ptr__->FullHash).Hash[4] = '\0';
    (__return_storage_ptr__->FullHash).Hash[5] = '\0';
    (__return_storage_ptr__->FullHash).Hash[6] = '\0';
    (__return_storage_ptr__->FullHash).Hash[7] = '\0';
    (__return_storage_ptr__->FullHash).Hash[8] = '\0';
    (__return_storage_ptr__->FullHash).Hash[9] = '\0';
    (__return_storage_ptr__->FullHash).Hash[10] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xb] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xc] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xd] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xe] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xf] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x10] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x11] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x12] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x13] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[1] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[2] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[3] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[4] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[5] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[6] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[7] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[8] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[9] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[10] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xb] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xc] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xd] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xe] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xf] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x10] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x11] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x12] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x13] = '\0';
  }
  else {
    uVar10 = param_1->BreadcrumbContextsCount;
    FVar24.Data = (FScriptContainerElement *)0x0;
    uVar28 = 0;
    pDVar22 = param_1->pBreadcrumbContexts;
    local_1f8.Elements._0_8_ = 0;
    local_1f8.Elements._8_8_ = 0;
    local_1f8.Elements._32_8_ = 0;
    local_1f8.Elements._40_4_ = 0;
    local_1f8.Elements._44_4_ = 0x80;
    local_1f8.Elements._48_4_ = 0xffffffff;
    local_1f8.Elements._52_4_ = 0;
    local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1f8.HashSize = 0;
    local_2a0 = uVar30;
    if (((int)uVar10 < 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FQueueData *)(*pcVar8)();
      return pFVar13;
    }
    pDVar25 = pDVar22 + (int)uVar10;
    for (; pDVar22 != pDVar25; pDVar22 = pDVar22 + 1) {
      uStack_258 = &pDVar22->pContextString;
      local_260 = pDVar22;
      TSet<TTuple<unsigned_int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,wchar_t_const_*_const_&>_>
                (&local_1f8,&local_250,(bool *)&local_260);
    }
    local_290._1_1_ = 0;
    local_288 = (void *)0x0;
    local_280 = 0;
    local_278 = (FBreadcrumbNode *)0x0;
    local_270 = 0;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 1;
    local_240 = &local_290;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_2d8,1,&local_2cc);
    *(undefined2 **)local_2d8.Data = &local_290;
    if (param_1->BreadcrumbCount != 0) {
      pDVar18 = param_1->pCommandHistory;
      uVar27 = (ulonglong)param_1->BreadcrumbCount;
      pFVar14 = FVar24.Data;
      pFVar16 = FVar24.Data;
      do {
        if (*pDVar18 == D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT) {
          pFVar14 = (FScriptContainerElement *)(ulonglong)((int)pFVar14 + 1);
        }
        else if (*pDVar18 == D3D12_AUTO_BREADCRUMB_OP_ENDEVENT) {
          pFVar14 = (FScriptContainerElement *)(ulonglong)((int)pFVar14 - 1);
        }
        if ((int)pFVar14 < (int)pFVar16) {
          pFVar16 = pFVar14;
        }
        uVar28 = (uint)pFVar16;
        pDVar18 = pDVar18 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    uVar10 = -uVar28;
    if ((int)-uVar28 < 0) {
      uVar10 = uVar28;
    }
    if (uVar10 != 0) {
      uVar27 = (ulonglong)uVar10;
      do {
        uVar10 = 0;
        if ((int)(local_2d0 - 1U) < local_2d0) {
          uVar10 = ~(local_2d0 - 1U) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FQueueData *)(*pcVar8)();
          return pFVar13;
        }
        lVar6 = *(longlong *)(local_2d8.Data + (longlong)(local_2d0 + -1) * 8);
        iVar11 = *(int *)(lVar6 + 0x20);
        if (iVar11 == *(int *)(lVar6 + 0x24)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
        }
        lVar15 = (longlong)iVar11;
        *(int *)(lVar6 + 0x20) = iVar11 + 1;
        lVar6 = *(longlong *)(lVar6 + 0x18);
        *(undefined2 *)(lVar6 + lVar15 * 0x28) = 0;
        *(undefined4 *)(lVar6 + 2 + lVar15 * 0x28) = 0;
        *(undefined2 *)(lVar6 + 6 + lVar15 * 0x28) = 0;
        puVar1 = (undefined2 *)(lVar6 + lVar15 * 0x28);
        *(undefined8 *)(puVar1 + 8) = 0;
        (((FString *)(puVar1 + 4))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)(puVar1 + 0xc) = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        FString::operator=((FString *)(puVar1 + 4),L"Unknown event");
        if (&local_2c6 != puVar1) {
          *puVar1 = 0x101;
        }
        local_2c0 = puVar1;
        if (((local_2d8.Data <= (FScriptContainerElement *)&local_2c0) &&
            ((FScriptContainerElement *)&local_2c0 < local_2d8.Data + (longlong)local_2cc * 8)) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FQueueData *)(*pcVar8)();
          return pFVar13;
        }
        if (local_2d0 == local_2cc) {
          local_2d0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_2d8,&local_2cc);
        }
        iVar11 = local_2d0 + 1;
        *(undefined2 **)(local_2d8.Data + (longlong)local_2d0 * 8) = local_2c0;
        uVar27 = uVar27 - 1;
        local_2d0 = iVar11;
      } while (uVar27 != 0);
    }
    uVar10 = 0;
    pFVar14 = FVar24.Data;
    if (param_1->BreadcrumbCount != 0) {
      do {
        uVar28 = (uint)pFVar14;
        DVar5 = param_1->pCommandHistory[(longlong)pFVar14];
        pFVar16 = FVar24.Data;
        if (local_1f8.Elements._8_4_ != local_1f8.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_1f8.Hash;
          if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_1f8.Hash.SecondaryData;
          }
          iVar11 = *(int *)((longlong)FVar19 +
                           ((ulonglong)(local_1f8.HashSize - 1) & (ulonglong)pFVar14) * 4);
          while ((pFVar16 = FVar24.Data, iVar11 != -1 &&
                 (pFVar16 = (FScriptContainerElement *)
                            (local_1f8.Elements._0_8_ + (longlong)iVar11 * 0x18),
                 *(uint *)(local_1f8.Elements._0_8_ + (longlong)iVar11 * 0x18) != uVar28))) {
            iVar11 = *(int *)(pFVar16 + 0x10);
          }
        }
        pFVar14 = pFVar16 + 8;
        if (pFVar16 == (FScriptContainerElement *)0x0) {
          pFVar14 = FVar24.Data;
        }
        if (DVar5 == D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT) {
          uVar12 = uVar10;
          if ((int)(local_2d0 - 1U) < local_2d0) {
            uVar12 = ~(local_2d0 - 1U) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FQueueData *)(*pcVar8)();
            return pFVar13;
          }
          lVar6 = *(longlong *)(local_2d8.Data + (longlong)(local_2d0 + -1) * 8);
          iVar11 = *(int *)(lVar6 + 0x20);
          if (iVar11 == *(int *)(lVar6 + 0x24)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
          }
          lVar15 = (longlong)iVar11;
          *(int *)(lVar6 + 0x20) = iVar11 + 1;
          lVar6 = *(longlong *)(lVar6 + 0x18);
          *(undefined2 *)(lVar6 + lVar15 * 0x28) = 0;
          *(undefined4 *)(lVar6 + 2 + lVar15 * 0x28) = 0;
          *(undefined2 *)(lVar6 + 6 + lVar15 * 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x18 + lVar15 * 0x28) = 0;
          lVar6 = lVar6 + lVar15 * 0x28;
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          if (pFVar14 == (FScriptContainerElement *)0x0) {
            pwVar20 = L"Unknown event";
          }
          else {
            pwVar20 = *(wchar_t **)pFVar14;
          }
          FString::operator=((FString *)(lVar6 + 8),pwVar20);
          if ((longlong)&local_2c6 + 1 != lVar6) {
            *(bool *)lVar6 = uVar28 < uVar30;
            *(undefined1 *)(lVar6 + 1) = 1;
          }
          local_2b8 = lVar6;
          if (((local_2d8.Data <= (FScriptContainerElement *)&local_2b8) &&
              ((FScriptContainerElement *)&local_2b8 < local_2d8.Data + (longlong)local_2cc * 8)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FQueueData *)(*pcVar8)();
            return pFVar13;
          }
          if (local_2d0 == local_2cc) {
            local_2d0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_2d8,&local_2cc);
          }
          *(longlong *)(local_2d8.Data + (longlong)local_2d0 * 8) = local_2b8;
          local_2d0 = local_2d0 + 1;
        }
        else if (DVar5 == D3D12_AUTO_BREADCRUMB_OP_ENDEVENT) {
          if ((local_2d0 < 1) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FQueueData *)(*pcVar8)();
            return pFVar13;
          }
          iVar17 = local_2d0 + -1;
          pcVar7 = *(char **)(local_2d8.Data + (longlong)iVar17 * 8);
          iVar11 = (local_2d0 - iVar17) + -1;
          if (iVar11 != 0) {
            memmove(local_2d8.Data + (longlong)iVar17 * 8,local_2d8.Data + (longlong)iVar17 * 8 + 8,
                    (longlong)iVar11 << 3);
          }
          local_2d0 = local_2d0 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_2d8,local_2d0,&local_2cc);
          if (pcVar7[1] == '\0') {
            (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = 0;
            (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = 0;
            (__return_storage_ptr__->FullHash).Hash[0] = '\0';
            (__return_storage_ptr__->FullHash).Hash[1] = '\0';
            (__return_storage_ptr__->FullHash).Hash[2] = '\0';
            (__return_storage_ptr__->FullHash).Hash[3] = '\0';
            (__return_storage_ptr__->FullHash).Hash[4] = '\0';
            (__return_storage_ptr__->FullHash).Hash[5] = '\0';
            (__return_storage_ptr__->FullHash).Hash[6] = '\0';
            (__return_storage_ptr__->FullHash).Hash[7] = '\0';
            (__return_storage_ptr__->FullHash).Hash[8] = '\0';
            (__return_storage_ptr__->FullHash).Hash[9] = '\0';
            (__return_storage_ptr__->FullHash).Hash[10] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xb] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xc] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xd] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xe] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xf] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x10] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x11] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x12] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x13] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[1] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[2] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[3] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[4] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[5] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[6] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[7] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[8] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[9] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[10] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xb] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xc] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xd] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xe] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xf] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x10] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x11] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x12] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x13] = '\0';
            goto LAB_145a85611;
          }
          if ((((uVar28 < uVar30) && (pcVar7[1] == '\x01')) && (*pcVar7 == '\x01')) &&
             (&local_2c4 != pcVar7)) {
            pcVar7[0] = '\x02';
            pcVar7[1] = '\x01';
          }
        }
        else {
          if (DVar5 < (D3D12_AUTO_BREADCRUMB_OP_SETPROGRAM|D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT)) {
            pwVar20 = BreadcrumbOpNames[(int)DVar5];
          }
          else {
            pwVar20 = L"Unknown Op";
          }
          uVar30 = uVar10;
          if ((int)(local_2d0 - 1U) < local_2d0) {
            uVar30 = ~(local_2d0 - 1U) >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FQueueData *)(*pcVar8)();
            return pFVar13;
          }
          lVar6 = *(longlong *)(local_2d8.Data + (longlong)(local_2d0 + -1) * 8);
          iVar11 = *(int *)(lVar6 + 0x20);
          if (iVar11 == *(int *)(lVar6 + 0x24)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
          }
          lVar15 = (longlong)iVar11;
          *(int *)(lVar6 + 0x20) = iVar11 + 1;
          lVar6 = *(longlong *)(lVar6 + 0x18);
          *(undefined2 *)(lVar6 + lVar15 * 0x28) = 0;
          *(undefined4 *)(lVar6 + 2 + lVar15 * 0x28) = 0;
          *(undefined2 *)(lVar6 + 6 + lVar15 * 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x10 + lVar15 * 0x28) = 0;
          pbVar2 = (byte *)(lVar6 + lVar15 * 0x28);
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          this = (FString *)(pbVar2 + 8);
          pbVar2[0x18] = 0;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          pbVar2[0x1c] = 0;
          pbVar2[0x1d] = 0;
          pbVar2[0x1e] = 0;
          pbVar2[0x1f] = 0;
          pbVar2[0x20] = 0;
          pbVar2[0x21] = 0;
          pbVar2[0x22] = 0;
          pbVar2[0x23] = 0;
          pbVar2[0x24] = 0;
          pbVar2[0x25] = 0;
          pbVar2[0x26] = 0;
          pbVar2[0x27] = 0;
          if (pFVar14 == (FScriptContainerElement *)0x0) {
            FString::operator=(this,pwVar20);
          }
          else {
            FString::PrintfImpl(&local_2b0,L"%s [%s]");
            if (this != &local_2b0) {
              pFVar14 = (this->Data).AllocatorInstance.Data;
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar14);
              }
              (this->Data).AllocatorInstance.Data = local_2b0.Data.AllocatorInstance.Data;
              *(int *)(pbVar2 + 0x10) = local_2b0.Data.ArrayNum;
              *(int *)(pbVar2 + 0x14) = local_2b0.Data.ArrayMax;
              local_2b0.Data.ArrayNum = 0;
              local_2b0.Data.ArrayMax = 0;
              local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
          }
          uVar30 = local_2a0;
          if (local_2c3 != pbVar2) {
            *pbVar2 = -(uVar28 < local_2a0) & 2;
            pbVar2[1] = 1;
          }
        }
        pFVar14 = (FScriptContainerElement *)(ulonglong)(uVar28 + 1);
        param_1 = (D3D12_AUTO_BREADCRUMB_NODE1 *)local_250.Value;
      } while (uVar28 + 1 < *(uint *)((longlong)local_250.Value + 0x30));
    }
    uVar29 = 0;
    local_230.BreadcrumbString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar21 = 0;
    local_230.BreadcrumbString.Data.ArrayNum = 0;
    local_230.BreadcrumbString.Data.ArrayMax = 0;
    local_230.FullHash.Hash[0x10] = '\0';
    local_230.FullHash.Hash[0x11] = '\0';
    local_230.FullHash.Hash[0x12] = '\0';
    local_230.FullHash.Hash[0x13] = '\0';
    local_230.FullHash.Hash[0] = '\0';
    local_230.FullHash.Hash[1] = '\0';
    local_230.FullHash.Hash[2] = '\0';
    local_230.FullHash.Hash[3] = '\0';
    local_230.FullHash.Hash[4] = '\0';
    local_230.FullHash.Hash[5] = '\0';
    local_230.FullHash.Hash[6] = '\0';
    local_230.FullHash.Hash[7] = '\0';
    local_230.FullHash.Hash[8] = '\0';
    local_230.FullHash.Hash[9] = '\0';
    local_230.FullHash.Hash[10] = '\0';
    local_230.FullHash.Hash[0xb] = '\0';
    local_230.FullHash.Hash[0xc] = '\0';
    local_230.FullHash.Hash[0xd] = '\0';
    local_230.FullHash.Hash[0xe] = '\0';
    local_230.FullHash.Hash[0xf] = '\0';
    local_230.ActiveHash.Hash[0x10] = '\0';
    local_230.ActiveHash.Hash[0x11] = '\0';
    local_230.ActiveHash.Hash[0x12] = '\0';
    local_230.ActiveHash.Hash[0x13] = '\0';
    local_230.ActiveHash.Hash[0] = '\0';
    local_230.ActiveHash.Hash[1] = '\0';
    local_230.ActiveHash.Hash[2] = '\0';
    local_230.ActiveHash.Hash[3] = '\0';
    local_230.ActiveHash.Hash[4] = '\0';
    local_230.ActiveHash.Hash[5] = '\0';
    local_230.ActiveHash.Hash[6] = '\0';
    local_230.ActiveHash.Hash[7] = '\0';
    local_230.ActiveHash.Hash[8] = '\0';
    local_230.ActiveHash.Hash[9] = '\0';
    local_230.ActiveHash.Hash[10] = '\0';
    local_230.ActiveHash.Hash[0xb] = '\0';
    local_230.ActiveHash.Hash[0xc] = '\0';
    local_230.ActiveHash.Hash[0xd] = '\0';
    local_230.ActiveHash.Hash[0xe] = '\0';
    local_230.ActiveHash.Hash[0xf] = '\0';
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar30 = uVar10;
    if ((int)local_270 != 0) {
      local_1a8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.String.Data.ArrayNum = 0;
      local_1a8.String.Data.ArrayMax = 0;
      FSHA1::FSHA1(&local_1a8.FullHash);
      FSHA1::FSHA1(&local_1a8.ActiveHash);
      iVar11 = (int)local_270;
      uVar27 = (ulonglong)(int)local_270;
      local_1a8.ChildStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ChildStack.ArrayNum = 0;
      local_1a8.ChildStack.ArrayMax = 0;
      pFVar3 = local_278 + uVar27;
      piVar26 = &(local_278->Children).ArrayNum;
      while( true ) {
        if ((int)uVar27 != iVar11) {
          local_2c8 = 0;
          `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2c8);
        }
        if ((FBreadcrumbNode *)(piVar26 + -8) == pFVar3) break;
        local_298.Serializer = &local_1a8;
        if ((*(char *)((longlong)piVar26 + -0x1f) == '\0') &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FQueueData *)(*pcVar8)();
          return pFVar13;
        }
        FGPUBreadcrumbCrashData::FSerializer::BeginNode
                  (&local_1a8,(FString *)(piVar26 + -6),
                   (((FBreadcrumbNode *)(piVar26 + -8))->State).TypedValue);
        iVar17 = *piVar26;
        pFVar23 = (FBreadcrumbNode *)
                  (((TArray<_FGPUBreadcrumbCrashData::FQueueData___cdecl_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>(D3D12_AUTO_BREADCRUMB_NODE1_const_*)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                     *)(piVar26 + -2))->AllocatorInstance).Data;
        pFVar4 = pFVar23 + iVar17;
        while( true ) {
          if (*piVar26 != iVar17) {
            local_2c7 = 0;
            `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_2c7);
          }
          if (pFVar23 == pFVar4) break;
          `CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l47::<lambda_1>::
          operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l47::<lambda_1>_>
                    (&local_298,pFVar23,&local_298);
          pFVar23 = pFVar23 + 1;
        }
        FGPUBreadcrumbCrashData::FSerializer::EndNode(local_298.Serializer);
        uVar27 = local_270 & 0xffffffff;
        piVar26 = piVar26 + 10;
      }
      pFVar13 = FGPUBreadcrumbCrashData::FSerializer::GetResult(&local_1a8,&local_78);
      if (&local_230 == pFVar13) {
        FVar24.Data = local_230.BreadcrumbString.Data.AllocatorInstance.Data;
        uVar10 = local_230.BreadcrumbString.Data.ArrayNum;
        uVar30 = local_230.BreadcrumbString.Data.ArrayMax;
      }
      else {
        if (local_230.BreadcrumbString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_230.BreadcrumbString.Data.AllocatorInstance.Data);
        }
        FVar24.Data = (pFVar13->BreadcrumbString).Data.AllocatorInstance.Data;
        (pFVar13->BreadcrumbString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar10 = (pFVar13->BreadcrumbString).Data.ArrayNum;
        uVar30 = (pFVar13->BreadcrumbString).Data.ArrayMax;
        (pFVar13->BreadcrumbString).Data.ArrayNum = 0;
        (pFVar13->BreadcrumbString).Data.ArrayMax = 0;
      }
      local_260 = *(D3D12_DRED_BREADCRUMB_CONTEXT **)(pFVar13->FullHash).Hash;
      uStack_258 = *(wchar_t ***)((pFVar13->FullHash).Hash + 8);
      uVar29 = *(undefined4 *)((pFVar13->FullHash).Hash + 0x10);
      local_240 = *(undefined2 **)(pFVar13->ActiveHash).Hash;
      uStack_238 = *(undefined8 *)((pFVar13->ActiveHash).Hash + 8);
      uVar21 = *(undefined4 *)((pFVar13->ActiveHash).Hash + 0x10);
      if (local_78.BreadcrumbString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.BreadcrumbString.Data.AllocatorInstance.Data);
      }
      if (local_1a8.ChildStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.ChildStack.AllocatorInstance.Data);
      }
      FSHA1::~FSHA1(&local_1a8.ActiveHash);
      FSHA1::~FSHA1(&local_1a8.FullHash);
      if (local_1a8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.String.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__ = local_268;
      uVar31 = (undefined4)local_260;
      uVar32 = local_260._4_4_;
      uVar33 = (undefined4)uStack_258;
      uVar34 = uStack_258._4_4_;
      uVar35 = (undefined4)local_240;
      uVar36 = local_240._4_4_;
      uVar37 = (undefined4)uStack_238;
      uVar38 = uStack_238._4_4_;
    }
    (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data = FVar24.Data;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = uVar10;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = uVar30;
    *(undefined4 *)(__return_storage_ptr__->FullHash).Hash = uVar31;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 4) = uVar32;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 8) = uVar33;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 0xc) = uVar34;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 0x10) = uVar29;
    *(undefined4 *)(__return_storage_ptr__->ActiveHash).Hash = uVar35;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 4) = uVar36;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 8) = uVar37;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 0xc) = uVar38;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 0x10) = uVar21;
LAB_145a85611:
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
    DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l2::FBreadcrumbNode,int>
              (local_278,(int)local_270);
    if (local_278 != (FBreadcrumbNode *)0x0) {
      FMemory::Free(local_278);
    }
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    local_1f8.HashSize = 0;
    if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1f8.Elements);
  }
  return __return_storage_ptr__;
}

// CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE> @ 145a856d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FQueueData * __cdecl
CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>
          (FQueueData *__return_storage_ptr__,D3D12_AUTO_BREADCRUMB_NODE *param_1)

{
  FString *this;
  undefined2 *puVar1;
  byte *pbVar2;
  FBreadcrumbNode *pFVar3;
  FBreadcrumbNode *pFVar4;
  D3D12_AUTO_BREADCRUMB_OP DVar5;
  longlong lVar6;
  char *pcVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FQueueData *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  D3D12_AUTO_BREADCRUMB_OP *pDVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  undefined4 uVar20;
  FBreadcrumbNode *pFVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  int *piVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_318 [32];
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8;
  undefined1 local_2b7 [3];
  uint local_2b4;
  undefined2 local_2b0;
  char local_2ae;
  byte local_2ad [5];
  undefined2 *local_2a8;
  longlong local_2a0;
  FString local_298;
  <lambda_1> local_288;
  undefined2 local_280;
  void *local_278;
  undefined8 local_270;
  FBreadcrumbNode *local_268;
  ulonglong local_260;
  FQueueData *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  FQueueData local_230;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1f8;
  undefined1 local_1c0 [8];
  undefined1 *local_1b8;
  int local_1b0;
  FSerializer local_1a8;
  FQueueData local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_258 = __return_storage_ptr__;
  local_250 = param_1;
  if (((param_1 == (D3D12_AUTO_BREADCRUMB_NODE *)0x0) ||
      (param_1->pLastBreadcrumbValue == (uint *)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("DredNode && DredNode->pLastBreadcrumbValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                         ,0x152,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FQueueData *)(*pcVar8)();
    return pFVar12;
  }
  uVar23 = *param_1->pLastBreadcrumbValue;
  if ((uVar23 == param_1->BreadcrumbCount) || (uVar23 == 0)) {
    (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = 0;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FullHash).Hash[0] = '\0';
    (__return_storage_ptr__->FullHash).Hash[1] = '\0';
    (__return_storage_ptr__->FullHash).Hash[2] = '\0';
    (__return_storage_ptr__->FullHash).Hash[3] = '\0';
    (__return_storage_ptr__->FullHash).Hash[4] = '\0';
    (__return_storage_ptr__->FullHash).Hash[5] = '\0';
    (__return_storage_ptr__->FullHash).Hash[6] = '\0';
    (__return_storage_ptr__->FullHash).Hash[7] = '\0';
    (__return_storage_ptr__->FullHash).Hash[8] = '\0';
    (__return_storage_ptr__->FullHash).Hash[9] = '\0';
    (__return_storage_ptr__->FullHash).Hash[10] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xb] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xc] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xd] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xe] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0xf] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x10] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x11] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x12] = '\0';
    (__return_storage_ptr__->FullHash).Hash[0x13] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[1] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[2] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[3] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[4] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[5] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[6] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[7] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[8] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[9] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[10] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xb] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xc] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xd] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xe] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0xf] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x10] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x11] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x12] = '\0';
    (__return_storage_ptr__->ActiveHash).Hash[0x13] = '\0';
  }
  else {
    FVar22.Data = (FScriptContainerElement *)0x0;
    uVar28 = 0;
    local_1f8._0_8_ = 0;
    local_1f8._8_8_ = 0;
    local_1f8._32_8_ = 0;
    local_1f8._40_4_ = 0;
    local_1f8._44_4_ = 0x80;
    local_1f8._48_4_ = 0xffffffff;
    local_1f8._52_4_ = 0;
    local_1b8 = (undefined1 *)0x0;
    local_1b0 = 0;
    local_280._1_1_ = 0;
    local_278 = (void *)0x0;
    local_270 = 0;
    local_268 = (FBreadcrumbNode *)0x0;
    local_260 = 0;
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0 = 1;
    local_2b4 = uVar23;
    local_240 = &local_280;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_2c8,1,&local_2bc);
    *(undefined2 **)local_2c8.Data = &local_280;
    if (param_1->BreadcrumbCount != 0) {
      pDVar17 = param_1->pCommandHistory;
      uVar25 = (ulonglong)param_1->BreadcrumbCount;
      pFVar13 = FVar22.Data;
      pFVar15 = FVar22.Data;
      do {
        if (*pDVar17 == D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT) {
          pFVar13 = (FScriptContainerElement *)(ulonglong)((int)pFVar13 + 1);
        }
        else if (*pDVar17 == D3D12_AUTO_BREADCRUMB_OP_ENDEVENT) {
          pFVar13 = (FScriptContainerElement *)(ulonglong)((int)pFVar13 - 1);
        }
        if ((int)pFVar13 < (int)pFVar15) {
          pFVar15 = pFVar13;
        }
        uVar28 = (uint)pFVar15;
        pDVar17 = pDVar17 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    uVar26 = -uVar28;
    if ((int)-uVar28 < 0) {
      uVar26 = uVar28;
    }
    if (uVar26 != 0) {
      uVar25 = (ulonglong)uVar26;
      do {
        uVar23 = 0;
        if ((int)(local_2c0 - 1U) < local_2c0) {
          uVar23 = ~(local_2c0 - 1U) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FQueueData *)(*pcVar8)();
          return pFVar12;
        }
        lVar6 = *(longlong *)(local_2c8.Data + (longlong)(local_2c0 + -1) * 8);
        iVar10 = *(int *)(lVar6 + 0x20);
        if (iVar10 == *(int *)(lVar6 + 0x24)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
        }
        lVar14 = (longlong)iVar10;
        *(int *)(lVar6 + 0x20) = iVar10 + 1;
        lVar6 = *(longlong *)(lVar6 + 0x18);
        *(undefined2 *)(lVar6 + lVar14 * 0x28) = 0;
        *(undefined4 *)(lVar6 + 2 + lVar14 * 0x28) = 0;
        *(undefined2 *)(lVar6 + 6 + lVar14 * 0x28) = 0;
        puVar1 = (undefined2 *)(lVar6 + lVar14 * 0x28);
        *(undefined8 *)(puVar1 + 8) = 0;
        (((FString *)(puVar1 + 4))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)(puVar1 + 0xc) = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        FString::operator=((FString *)(puVar1 + 4),L"Unknown event");
        if (&local_2b0 != puVar1) {
          *puVar1 = 0x101;
        }
        local_2a8 = puVar1;
        if (((local_2c8.Data <= (FScriptContainerElement *)&local_2a8) &&
            ((FScriptContainerElement *)&local_2a8 < local_2c8.Data + (longlong)local_2bc * 8)) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FQueueData *)(*pcVar8)();
          return pFVar12;
        }
        if (local_2c0 == local_2bc) {
          local_2c0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_2c8,&local_2bc);
        }
        iVar10 = local_2c0 + 1;
        *(undefined2 **)(local_2c8.Data + (longlong)local_2c0 * 8) = local_2a8;
        uVar25 = uVar25 - 1;
        uVar23 = local_2b4;
        local_2c0 = iVar10;
      } while (uVar25 != 0);
    }
    uVar28 = 0;
    pFVar13 = FVar22.Data;
    if (param_1->BreadcrumbCount != 0) {
      do {
        uVar26 = (uint)pFVar13;
        DVar5 = param_1->pCommandHistory[(longlong)pFVar13];
        pFVar15 = FVar22.Data;
        if (local_1f8._8_4_ != local_1f8._52_4_) {
          puVar18 = local_1c0;
          if (local_1b8 != (undefined1 *)0x0) {
            puVar18 = local_1b8;
          }
          iVar10 = *(int *)(puVar18 + ((ulonglong)(local_1b0 - 1) & (ulonglong)pFVar13) * 4);
          while ((pFVar15 = FVar22.Data, iVar10 != -1 &&
                 (pFVar15 = (FScriptContainerElement *)(local_1f8._0_8_ + (longlong)iVar10 * 0x18),
                 *(uint *)(local_1f8._0_8_ + (longlong)iVar10 * 0x18) != uVar26))) {
            iVar10 = *(int *)(pFVar15 + 0x10);
          }
        }
        pFVar13 = pFVar15 + 8;
        if (pFVar15 == (FScriptContainerElement *)0x0) {
          pFVar13 = FVar22.Data;
        }
        if (DVar5 == D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT) {
          uVar11 = uVar28;
          if ((int)(local_2c0 - 1U) < local_2c0) {
            uVar11 = ~(local_2c0 - 1U) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FQueueData *)(*pcVar8)();
            return pFVar12;
          }
          lVar6 = *(longlong *)(local_2c8.Data + (longlong)(local_2c0 + -1) * 8);
          iVar10 = *(int *)(lVar6 + 0x20);
          if (iVar10 == *(int *)(lVar6 + 0x24)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
          }
          lVar14 = (longlong)iVar10;
          *(int *)(lVar6 + 0x20) = iVar10 + 1;
          lVar6 = *(longlong *)(lVar6 + 0x18);
          *(undefined2 *)(lVar6 + lVar14 * 0x28) = 0;
          *(undefined4 *)(lVar6 + 2 + lVar14 * 0x28) = 0;
          *(undefined2 *)(lVar6 + 6 + lVar14 * 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x18 + lVar14 * 0x28) = 0;
          lVar6 = lVar6 + lVar14 * 0x28;
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          if (pFVar13 == (FScriptContainerElement *)0x0) {
            pwVar19 = L"Unknown event";
          }
          else {
            pwVar19 = *(wchar_t **)pFVar13;
          }
          FString::operator=((FString *)(lVar6 + 8),pwVar19);
          if ((longlong)&local_2b0 + 1 != lVar6) {
            *(bool *)lVar6 = uVar26 < uVar23;
            *(undefined1 *)(lVar6 + 1) = 1;
          }
          local_2a0 = lVar6;
          if (((local_2c8.Data <= (FScriptContainerElement *)&local_2a0) &&
              ((FScriptContainerElement *)&local_2a0 < local_2c8.Data + (longlong)local_2bc * 8)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FQueueData *)(*pcVar8)();
            return pFVar12;
          }
          if (local_2c0 == local_2bc) {
            local_2c0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_2c8,&local_2bc);
          }
          *(longlong *)(local_2c8.Data + (longlong)local_2c0 * 8) = local_2a0;
          local_2c0 = local_2c0 + 1;
        }
        else if (DVar5 == D3D12_AUTO_BREADCRUMB_OP_ENDEVENT) {
          if ((local_2c0 < 1) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FQueueData *)(*pcVar8)();
            return pFVar12;
          }
          iVar16 = local_2c0 + -1;
          pcVar7 = *(char **)(local_2c8.Data + (longlong)iVar16 * 8);
          iVar10 = (local_2c0 - iVar16) + -1;
          if (iVar10 != 0) {
            memmove(local_2c8.Data + (longlong)iVar16 * 8,local_2c8.Data + (longlong)iVar16 * 8 + 8,
                    (longlong)iVar10 << 3);
          }
          local_2c0 = local_2c0 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_2c8,local_2c0,&local_2bc);
          if (pcVar7[1] == '\0') {
            (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = 0;
            (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = 0;
            (__return_storage_ptr__->FullHash).Hash[0] = '\0';
            (__return_storage_ptr__->FullHash).Hash[1] = '\0';
            (__return_storage_ptr__->FullHash).Hash[2] = '\0';
            (__return_storage_ptr__->FullHash).Hash[3] = '\0';
            (__return_storage_ptr__->FullHash).Hash[4] = '\0';
            (__return_storage_ptr__->FullHash).Hash[5] = '\0';
            (__return_storage_ptr__->FullHash).Hash[6] = '\0';
            (__return_storage_ptr__->FullHash).Hash[7] = '\0';
            (__return_storage_ptr__->FullHash).Hash[8] = '\0';
            (__return_storage_ptr__->FullHash).Hash[9] = '\0';
            (__return_storage_ptr__->FullHash).Hash[10] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xb] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xc] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xd] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xe] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0xf] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x10] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x11] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x12] = '\0';
            (__return_storage_ptr__->FullHash).Hash[0x13] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[1] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[2] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[3] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[4] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[5] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[6] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[7] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[8] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[9] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[10] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xb] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xc] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xd] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xe] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0xf] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x10] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x11] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x12] = '\0';
            (__return_storage_ptr__->ActiveHash).Hash[0x13] = '\0';
            goto LAB_145a8604b;
          }
          if ((((uVar26 < uVar23) && (pcVar7[1] == '\x01')) && (*pcVar7 == '\x01')) &&
             (&local_2ae != pcVar7)) {
            pcVar7[0] = '\x02';
            pcVar7[1] = '\x01';
          }
        }
        else {
          if (DVar5 < (D3D12_AUTO_BREADCRUMB_OP_SETPROGRAM|D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT)) {
            pwVar19 = BreadcrumbOpNames[(int)DVar5];
          }
          else {
            pwVar19 = L"Unknown Op";
          }
          uVar23 = uVar28;
          if ((int)(local_2c0 - 1U) < local_2c0) {
            uVar23 = ~(local_2c0 - 1U) >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FQueueData *)(*pcVar8)();
            return pFVar12;
          }
          lVar6 = *(longlong *)(local_2c8.Data + (longlong)(local_2c0 + -1) * 8);
          iVar10 = *(int *)(lVar6 + 0x20);
          if (iVar10 == *(int *)(lVar6 + 0x24)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
          }
          lVar14 = (longlong)iVar10;
          *(int *)(lVar6 + 0x20) = iVar10 + 1;
          lVar6 = *(longlong *)(lVar6 + 0x18);
          *(undefined2 *)(lVar6 + lVar14 * 0x28) = 0;
          *(undefined4 *)(lVar6 + 2 + lVar14 * 0x28) = 0;
          *(undefined2 *)(lVar6 + 6 + lVar14 * 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x10 + lVar14 * 0x28) = 0;
          pbVar2 = (byte *)(lVar6 + lVar14 * 0x28);
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          this = (FString *)(pbVar2 + 8);
          pbVar2[0x18] = 0;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          pbVar2[0x1c] = 0;
          pbVar2[0x1d] = 0;
          pbVar2[0x1e] = 0;
          pbVar2[0x1f] = 0;
          pbVar2[0x20] = 0;
          pbVar2[0x21] = 0;
          pbVar2[0x22] = 0;
          pbVar2[0x23] = 0;
          pbVar2[0x24] = 0;
          pbVar2[0x25] = 0;
          pbVar2[0x26] = 0;
          pbVar2[0x27] = 0;
          if (pFVar13 == (FScriptContainerElement *)0x0) {
            FString::operator=(this,pwVar19);
          }
          else {
            FString::PrintfImpl(&local_298,L"%s [%s]");
            if (this != &local_298) {
              pFVar13 = (this->Data).AllocatorInstance.Data;
              if (pFVar13 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar13);
              }
              (this->Data).AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
              *(int *)(pbVar2 + 0x10) = local_298.Data.ArrayNum;
              *(int *)(pbVar2 + 0x14) = local_298.Data.ArrayMax;
              local_298.Data.ArrayNum = 0;
              local_298.Data.ArrayMax = 0;
              local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
          }
          uVar23 = local_2b4;
          if (local_2ad != pbVar2) {
            *pbVar2 = -(uVar26 < local_2b4) & 2;
            pbVar2[1] = 1;
          }
        }
        pFVar13 = (FScriptContainerElement *)(ulonglong)(uVar26 + 1);
        param_1 = local_250;
      } while (uVar26 + 1 < local_250->BreadcrumbCount);
    }
    uVar27 = 0;
    local_230.BreadcrumbString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar20 = 0;
    local_230.BreadcrumbString.Data.ArrayNum = 0;
    local_230.BreadcrumbString.Data.ArrayMax = 0;
    local_230.FullHash.Hash[0x10] = '\0';
    local_230.FullHash.Hash[0x11] = '\0';
    local_230.FullHash.Hash[0x12] = '\0';
    local_230.FullHash.Hash[0x13] = '\0';
    local_230.FullHash.Hash[0] = '\0';
    local_230.FullHash.Hash[1] = '\0';
    local_230.FullHash.Hash[2] = '\0';
    local_230.FullHash.Hash[3] = '\0';
    local_230.FullHash.Hash[4] = '\0';
    local_230.FullHash.Hash[5] = '\0';
    local_230.FullHash.Hash[6] = '\0';
    local_230.FullHash.Hash[7] = '\0';
    local_230.FullHash.Hash[8] = '\0';
    local_230.FullHash.Hash[9] = '\0';
    local_230.FullHash.Hash[10] = '\0';
    local_230.FullHash.Hash[0xb] = '\0';
    local_230.FullHash.Hash[0xc] = '\0';
    local_230.FullHash.Hash[0xd] = '\0';
    local_230.FullHash.Hash[0xe] = '\0';
    local_230.FullHash.Hash[0xf] = '\0';
    local_230.ActiveHash.Hash[0x10] = '\0';
    local_230.ActiveHash.Hash[0x11] = '\0';
    local_230.ActiveHash.Hash[0x12] = '\0';
    local_230.ActiveHash.Hash[0x13] = '\0';
    local_230.ActiveHash.Hash[0] = '\0';
    local_230.ActiveHash.Hash[1] = '\0';
    local_230.ActiveHash.Hash[2] = '\0';
    local_230.ActiveHash.Hash[3] = '\0';
    local_230.ActiveHash.Hash[4] = '\0';
    local_230.ActiveHash.Hash[5] = '\0';
    local_230.ActiveHash.Hash[6] = '\0';
    local_230.ActiveHash.Hash[7] = '\0';
    local_230.ActiveHash.Hash[8] = '\0';
    local_230.ActiveHash.Hash[9] = '\0';
    local_230.ActiveHash.Hash[10] = '\0';
    local_230.ActiveHash.Hash[0xb] = '\0';
    local_230.ActiveHash.Hash[0xc] = '\0';
    local_230.ActiveHash.Hash[0xd] = '\0';
    local_230.ActiveHash.Hash[0xe] = '\0';
    local_230.ActiveHash.Hash[0xf] = '\0';
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar23 = uVar28;
    if ((int)local_260 != 0) {
      local_1a8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.String.Data.ArrayNum = 0;
      local_1a8.String.Data.ArrayMax = 0;
      FSHA1::FSHA1(&local_1a8.FullHash);
      FSHA1::FSHA1(&local_1a8.ActiveHash);
      iVar10 = (int)local_260;
      uVar25 = (ulonglong)(int)local_260;
      local_1a8.ChildStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ChildStack.ArrayNum = 0;
      local_1a8.ChildStack.ArrayMax = 0;
      pFVar3 = local_268 + uVar25;
      piVar24 = &(local_268->Children).ArrayNum;
      while( true ) {
        if ((int)uVar25 != iVar10) {
          local_2b8 = 0;
          `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
        }
        if ((FBreadcrumbNode *)(piVar24 + -8) == pFVar3) break;
        local_288.Serializer = &local_1a8;
        if ((*(char *)((longlong)piVar24 + -0x1f) == '\0') &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FQueueData *)(*pcVar8)();
          return pFVar12;
        }
        FGPUBreadcrumbCrashData::FSerializer::BeginNode
                  (&local_1a8,(FString *)(piVar24 + -6),
                   (((FBreadcrumbNode *)(piVar24 + -8))->State).TypedValue);
        iVar16 = *piVar24;
        pFVar21 = (FBreadcrumbNode *)
                  (((TArray<_FGPUBreadcrumbCrashData::FQueueData___cdecl_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>(D3D12_AUTO_BREADCRUMB_NODE_const_*)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                     *)(piVar24 + -2))->AllocatorInstance).Data;
        pFVar4 = pFVar21 + iVar16;
        while( true ) {
          if (*piVar24 != iVar16) {
            local_2b7[0] = 0;
            `TCheckedPointerIterator<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_2b7);
          }
          if (pFVar21 == pFVar4) break;
          `CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l47::<lambda_1>::
          operator()<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l47::<lambda_1>_>
                    (&local_288,pFVar21,&local_288);
          pFVar21 = pFVar21 + 1;
        }
        FGPUBreadcrumbCrashData::FSerializer::EndNode(local_288.Serializer);
        uVar25 = local_260 & 0xffffffff;
        piVar24 = piVar24 + 10;
      }
      pFVar12 = FGPUBreadcrumbCrashData::FSerializer::GetResult(&local_1a8,&local_78);
      if (&local_230 == pFVar12) {
        FVar22.Data = local_230.BreadcrumbString.Data.AllocatorInstance.Data;
        uVar28 = local_230.BreadcrumbString.Data.ArrayNum;
        uVar23 = local_230.BreadcrumbString.Data.ArrayMax;
      }
      else {
        if (local_230.BreadcrumbString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_230.BreadcrumbString.Data.AllocatorInstance.Data);
        }
        FVar22.Data = (pFVar12->BreadcrumbString).Data.AllocatorInstance.Data;
        (pFVar12->BreadcrumbString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar28 = (pFVar12->BreadcrumbString).Data.ArrayNum;
        uVar23 = (pFVar12->BreadcrumbString).Data.ArrayMax;
        (pFVar12->BreadcrumbString).Data.ArrayNum = 0;
        (pFVar12->BreadcrumbString).Data.ArrayMax = 0;
      }
      local_240 = *(undefined2 **)(pFVar12->FullHash).Hash;
      uStack_238 = *(undefined8 *)((pFVar12->FullHash).Hash + 8);
      uVar27 = *(undefined4 *)((pFVar12->FullHash).Hash + 0x10);
      local_250 = *(D3D12_AUTO_BREADCRUMB_NODE **)(pFVar12->ActiveHash).Hash;
      uStack_248 = *(undefined8 *)((pFVar12->ActiveHash).Hash + 8);
      uVar20 = *(undefined4 *)((pFVar12->ActiveHash).Hash + 0x10);
      if (local_78.BreadcrumbString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.BreadcrumbString.Data.AllocatorInstance.Data);
      }
      if (local_1a8.ChildStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.ChildStack.AllocatorInstance.Data);
      }
      FSHA1::~FSHA1(&local_1a8.ActiveHash);
      FSHA1::~FSHA1(&local_1a8.FullHash);
      if (local_1a8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.String.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__ = local_258;
      uVar29 = (undefined4)local_240;
      uVar30 = local_240._4_4_;
      uVar31 = (undefined4)uStack_238;
      uVar32 = uStack_238._4_4_;
      uVar33 = (undefined4)local_250;
      uVar34 = local_250._4_4_;
      uVar35 = (undefined4)uStack_248;
      uVar36 = uStack_248._4_4_;
    }
    (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data = FVar22.Data;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = uVar28;
    (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = uVar23;
    *(undefined4 *)(__return_storage_ptr__->FullHash).Hash = uVar29;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 4) = uVar30;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 8) = uVar31;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 0xc) = uVar32;
    *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 0x10) = uVar27;
    *(undefined4 *)(__return_storage_ptr__->ActiveHash).Hash = uVar33;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 4) = uVar34;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 8) = uVar35;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 0xc) = uVar36;
    *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 0x10) = uVar20;
LAB_145a8604b:
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l2::FBreadcrumbNode,int>
              (local_268,(int)local_260);
    if (local_268 != (FBreadcrumbNode *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_278 != (void *)0x0) {
      FMemory::Free(local_278);
    }
    local_1b0 = 0;
    if (local_1b8 != (undefined1 *)0x0) {
      FMemory::Free(local_1b8);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1f8);
  }
  return __return_storage_ptr__;
}

// ConstructItems<FWorkGraphPipelineStateInitializer::FNameMap,FWorkGraphPipelineStateInitializer::FNameMap,int> @ 145a86110

void __cdecl
ConstructItems<FWorkGraphPipelineStateInitializer::FNameMap,FWorkGraphPipelineStateInitializer::FNameMap,int>
          (void *param_1,FNameMap *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    puVar3 = &param_2->ExportNameHash;
    puVar2 = (uint *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(puVar2 + -8),
                       (FString *)
                       ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)puVar2));
      FString::FString((FString *)(puVar2 + -4),(FString *)(puVar3 + -4));
      uVar1 = *puVar3;
      puVar3 = puVar3 + 10;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLinkedObjects<FD3D12RHITextureReference,`FD3D12DynamicRHI::RHICreateTextureReference'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12RHITextureReference,`FD3D12DynamicRHI::RHICreateTextureReference'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86190

/* WARNING: Removing unreachable block (ram,0x000145a861ce) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12RHITextureReference * __cdecl
FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::
CreateLinkedObjects<FD3D12RHITextureReference,_FD3D12DynamicRHI::RHICreateTextureReference_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12RHITextureReference,_FD3D12DynamicRHI::RHICreateTextureReference_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FD3D12View *pFVar3;
  undefined4 uVar5;
  void *pvVar4;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  FD3D12RHITextureReference *pFVar17;
  FD3D12RHITextureReference *this;
  FRHIDescriptorHandle FVar18;
  byte bVar19;
  FD3D12RHITextureReference *pFVar20;
  FRHITexture *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FRHIGPUMask FVar24;
  
  uVar6 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  pFVar17 = (FD3D12RHITextureReference *)0x0;
  pFVar20 = pFVar17;
  FVar24.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar6) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FD3D12RHITextureReference *)(*pcVar8)();
        return pFVar17;
      }
      lVar2 = *(longlong *)(lVar2 + 0x800 + (ulonglong)uVar6 * 8);
      this = ::operator_new(0x1e0);
      if (this == (FD3D12RHITextureReference *)0x0) {
        this = (FD3D12RHITextureReference *)0x0;
      }
      else {
        if (param_3->ReferencedTexture == (FRHITexture *)0x0) {
          pFVar21 = (FRHITexture *)0x0;
        }
        else {
          pFVar21 = *(FRHITexture **)
                     ((longlong)
                      (&param_3->ReferencedTexture[1].TextureDesc.AliasableFormats.AllocatorInstance
                      + -5) + (ulonglong)*(uint *)(lVar2 + 8) * 8);
        }
        this->_padding_ = lVar2;
        if (pFVar20 == (FD3D12RHITextureReference *)0x0) {
          FVar18 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                             (*(FD3D12BindlessDescriptorAllocator **)(lVar2 + 0x728),0x9c);
        }
        else {
          FVar18 = (FRHIDescriptorHandle)&pFVar20->_padding_;
        }
        FRHITextureReference::FRHITextureReference
                  ((FRHITextureReference *)this,pFVar21,*(FRHIDescriptorHandle *)FVar18);
        *(undefined4 *)&this->_padding_ = 1;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ =
             (longlong)&FD3D12RHITextureReference::_vftable__for__FRHIViewableResource__;
        this->_padding_ =
             (longlong)&FD3D12RHITextureReference::_vftable__for__RHIValidation__FTextureResource__;
        this->_padding_ = (longlong)&___7FD3D12RHITextureReference__6B_;
        this->ReferencedDescriptorVersion = 0;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&this->TextureReplaceListenersCS,4000);
        (this->TextureReplaceListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->TextureReplaceListeners).ArrayNum = 0;
        (this->TextureReplaceListeners).ArrayMax = 0;
        if ((((FRHIDescriptorHandle *)&this->_padding_)->Index != 0xffffffff) &&
           (((FRHIDescriptorHandle *)&this->_padding_)->Type != Invalid)) {
          FD3D12BaseShaderResource::AddRenameListener
                    ((FD3D12BaseShaderResource *)(pFVar21 + 1),
                     (FD3D12ShaderResourceRenameListener *)&this->_padding_);
          pFVar3 = *(FD3D12View **)&pFVar21[1].TextureDesc.Extent.field0_0x0._s_0.Y;
          if (((pFVar3->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar16)) {
            pcVar8 = (code *)swi(3);
            pFVar17 = (FD3D12RHITextureReference *)(*pcVar8)();
            return pFVar17;
          }
          uVar5 = (pFVar3->OfflineCpuHandle).Version;
          this->ReferencedDescriptorVersion = uVar5;
          FD3D12BindlessDescriptorManager::InitializeDescriptor
                    ((FD3D12BindlessDescriptorManager *)(lVar2 + 0x730),
                     *(FRHIDescriptorHandle *)&this->_padding_,pFVar3);
        }
      }
      pFVar17 = this;
      if (pFVar20 != (FD3D12RHITextureReference *)0x0) {
        LOCK();
        plVar1 = &this->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
        if (((int)(uint)lVar2 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar16)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FD3D12RHITextureReference *)(*pcVar8)();
          return pFVar17;
        }
        pFVar17 = pFVar20;
        if ((0x3ffffffe < ((uint)lVar2 & 0x3fffffff) + 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar16)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FD3D12RHITextureReference *)(*pcVar8)();
          return pFVar17;
        }
      }
      (pFVar17->TextureReplaceListenersCS).CriticalSection.Opaque1[(ulonglong)uVar6 - 9] = this;
      FVar24.GPUMask = FVar24.GPUMask & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      if (FVar24.GPUMask != 0) {
        for (; (FVar24.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      pFVar20 = pFVar17;
    } while (FVar24.GPUMask != 0);
    if (pFVar17 != (FD3D12RHITextureReference *)0x0) {
      iVar7 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      *(uint *)&pFVar17->_padding_ = param_1.GPUMask;
      bVar19 = 0;
      if (param_1.GPUMask != 0) {
        bVar19 = (byte)iVar7;
      }
      uVar22 = ~(1 << (bVar19 & 0x1f)) & param_1.GPUMask;
      uVar6 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar22 != 0) {
        uVar23 = (ulonglong)uVar6;
        do {
          lVar9 = pFVar17->_padding_;
          lVar10 = pFVar17->_padding_;
          lVar11 = pFVar17->_padding_;
          lVar12 = pFVar17->_padding_;
          lVar13 = pFVar17->_padding_;
          pvVar4 = (pFVar17->TextureReplaceListenersCS).CriticalSection.Opaque1[uVar23 - 9];
          lVar14 = pFVar17->_padding_;
          lVar15 = pFVar17->_padding_;
          lVar2 = pFVar17->_padding_;
          *(longlong *)((longlong)pvVar4 + 0x158) = pFVar17->_padding_;
          *(longlong *)((longlong)pvVar4 + 0x160) = lVar9;
          uVar22 = uVar22 & ~(1 << ((byte)uVar23 & 0x1f));
          *(longlong *)((longlong)pvVar4 + 0x168) = lVar10;
          *(longlong *)((longlong)pvVar4 + 0x170) = lVar11;
          uVar6 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          *(longlong *)((longlong)pvVar4 + 0x178) = lVar12;
          *(longlong *)((longlong)pvVar4 + 0x180) = lVar13;
          uVar23 = 0x20;
          if (uVar22 != 0) {
            uVar23 = (ulonglong)uVar6;
          }
          *(longlong *)((longlong)pvVar4 + 0x188) = lVar14;
          *(longlong *)((longlong)pvVar4 + 400) = lVar15;
          *(longlong *)((longlong)pvVar4 + 0x198) = lVar2;
        } while (uVar22 != 0);
      }
    }
  }
  return pFVar17;
}

// CreateLinkedObjects<FD3D12Texture,`FD3D12Viewport::CreateDummyBackBufferTextures'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`FD3D12Viewport::CreateDummyBackBufferTextures'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86560

/* WARNING: Removing unreachable block (ram,0x000145a8659e) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_FD3D12Viewport::CreateDummyBackBufferTextures_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FD3D12Device *pFVar3;
  FD3D12Viewport *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  FD3D12Texture *pFVar17;
  FD3D12Texture *this;
  byte bVar18;
  FRHIGPUMask FVar19;
  uint uVar20;
  ulonglong uVar21;
  FD3D12Texture *pFVar22;
  undefined1 local_60 [4];
  uint local_5c;
  
  uVar6 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  pFVar17 = (FD3D12Texture *)0x0;
  pFVar22 = pFVar17;
  FVar19.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar6) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FD3D12Texture *)(*pcVar8)();
        return pFVar17;
      }
      pFVar3 = *(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar6 * 8);
      this = ::operator_new(800);
      if (this == (FD3D12Texture *)0x0) {
        this = (FD3D12Texture *)0x0;
      }
      else {
        pFVar4 = param_3->__this;
        FRHITexture::FRHITexture((FRHITexture *)this,param_3->CreateDesc);
        this->_padding_ = (longlong)pFVar3;
        plVar1 = &this->_padding_;
        *plVar1 = (longlong)&___7FD3D12BaseShaderResource__6B_;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
        this->_padding_ = 0;
        this->_padding_ = 0;
        FD3D12ResourceLocation::FD3D12ResourceLocation
                  ((FD3D12ResourceLocation *)&this->_padding_,pFVar3);
        this->_padding_ = (longlong)plVar1;
        *(undefined4 *)&this->_padding_ = 1;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        (this->ShaderResourceView).Object = (FD3D12ShaderResourceView *)0x0;
        (this->ShaderResourceView).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined8 *)&(this->RenderTargetViews).AllocatorInstance.SecondaryData.field_0x0 = 0;
        this->bCreatedRTVsPerSlice = false;
        this->RTVArraySizePerMip = 0;
        (this->RenderTargetViews).ArrayNum = 0;
        (this->RenderTargetViews).ArrayMax = 1;
        this->DepthStencilViews[0].Object = (FD3D12DepthStencilView *)0x0;
        this->DepthStencilViews[0].SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        this->DepthStencilViews[1].Object = (FD3D12DepthStencilView *)0x0;
        this->DepthStencilViews[1].SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        this->DepthStencilViews[2].Object = (FD3D12DepthStencilView *)0x0;
        this->DepthStencilViews[2].SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        this->DepthStencilViews[3].Object = (FD3D12DepthStencilView *)0x0;
        this->DepthStencilViews[3].SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined8 *)&this->LockedMap = 0;
        *(undefined8 *)&(this->LockedMap).field_0x8 = 0;
        *(undefined8 *)&(this->LockedMap).field_0x20 = 0;
        *(undefined4 *)&(this->LockedMap).field_0x28 = 0;
        *(undefined4 *)&(this->LockedMap).field_0x2c = 0x80;
        *(undefined4 *)&(this->LockedMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->LockedMap).field_0x34 = 0;
        *(undefined8 *)&(this->LockedMap).field_0x40 = 0;
        *(undefined4 *)&(this->LockedMap).field_0x48 = 0;
        this->_padding_ =
             (longlong)&FD3D12BackBufferReferenceTexture2D::_vftable__for__FRHIViewableResource__;
        this->_padding_ =
             (longlong)
             &FD3D12BackBufferReferenceTexture2D::_vftable__for__RHIValidation__FTextureResource__;
        *plVar1 = (longlong)&___7FD3D12BackBufferReferenceTexture2D__6B_;
        this[1]._padding_ = (longlong)pFVar4;
        (this->FirstSubresourceFootprint).Ptr = (D3D12_PLACED_SUBRESOURCE_FOOTPRINT *)0x0;
        (this->AliasingSourceTexture).Reference = (FRHITexture *)0x0;
      }
      pFVar17 = this;
      if (pFVar22 != (FD3D12Texture *)0x0) {
        (**(code **)(this->_padding_ + 8))(&this->_padding_,local_60);
        pFVar17 = pFVar22;
      }
      *(FD3D12Texture **)
       ((pFVar17->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar6 * 8 + -0x58) =
           this;
      FVar19.GPUMask = FVar19.GPUMask & ~(1 << ((byte)uVar6 & 0x1f));
      local_5c = 0;
      if (FVar19.GPUMask != 0) {
        for (; (FVar19.GPUMask >> local_5c & 1) == 0; local_5c = local_5c + 1) {
        }
      }
      pFVar22 = pFVar17;
      uVar6 = local_5c;
    } while (FVar19.GPUMask != 0);
    if (pFVar17 != (FD3D12Texture *)0x0) {
      iVar7 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      *(uint *)&pFVar17->_padding_ = param_1.GPUMask;
      bVar18 = 0;
      if (param_1.GPUMask != 0) {
        bVar18 = (byte)iVar7;
      }
      uVar20 = ~(1 << (bVar18 & 0x1f)) & param_1.GPUMask;
      uVar6 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar20 != 0) {
        uVar21 = (ulonglong)uVar6;
        do {
          lVar9 = pFVar17->_padding_;
          lVar10 = pFVar17->_padding_;
          lVar11 = pFVar17->_padding_;
          lVar12 = pFVar17->_padding_;
          lVar13 = pFVar17->_padding_;
          lVar5 = *(longlong *)
                   ((pFVar17->RenderTargetViews).AllocatorInstance.InlineData + uVar21 * 8 + -0x58);
          lVar14 = pFVar17->_padding_;
          lVar15 = pFVar17->_padding_;
          lVar2 = pFVar17->_padding_;
          *(longlong *)(lVar5 + 0x1f8) = pFVar17->_padding_;
          *(longlong *)(lVar5 + 0x200) = lVar9;
          uVar20 = uVar20 & ~(1 << ((byte)uVar21 & 0x1f));
          *(longlong *)(lVar5 + 0x208) = lVar10;
          *(longlong *)(lVar5 + 0x210) = lVar11;
          uVar6 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          *(longlong *)(lVar5 + 0x218) = lVar12;
          *(longlong *)(lVar5 + 0x220) = lVar13;
          uVar21 = 0x20;
          if (uVar20 != 0) {
            uVar21 = (ulonglong)uVar6;
          }
          *(longlong *)(lVar5 + 0x228) = lVar14;
          *(longlong *)(lVar5 + 0x230) = lVar15;
          *(longlong *)(lVar5 + 0x238) = lVar2;
        } while (uVar20 != 0);
      }
    }
  }
  return pFVar17;
}

// CreateLinkedObjects<FD3D12Texture,`GetSwapChainSurface'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Texture,`GetSwapChainSurface'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86910

/* WARNING: Removing unreachable block (ram,0x000145a86940) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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

FD3D12Texture * __cdecl
FD3D12LinkedAdapterObject<FD3D12Texture>::
CreateLinkedObjects<FD3D12Texture,_GetSwapChainSurface_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_GetSwapChainSurface_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FD3D12Texture *pFVar14;
  FD3D12Texture *pFVar15;
  byte bVar16;
  ulonglong uVar17;
  FD3D12Texture *pFVar18;
  uint uVar19;
  FRHIGPUMask FVar20;
  undefined1 local_44 [4];
  uint local_40;
  
  pFVar14 = (FD3D12Texture *)0x0;
  uVar3 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  pFVar18 = pFVar14;
  FVar20.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FD3D12Texture *)(*pcVar5)();
        return pFVar14;
      }
      pFVar15 = `GetSwapChainSurface'::__l2::<lambda_1>::operator()
                          (param_3,*(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar3 * 8),pFVar18)
      ;
      pFVar14 = pFVar15;
      if (pFVar18 != (FD3D12Texture *)0x0) {
        (**(code **)(pFVar15->_padding_ + 8))(&pFVar15->_padding_,local_44);
        pFVar14 = pFVar18;
      }
      *(FD3D12Texture **)
       ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + (ulonglong)uVar3 * 8 + -0x58) =
           pFVar15;
      FVar20.GPUMask = FVar20.GPUMask & ~(1 << ((byte)uVar3 & 0x1f));
      local_40 = 0;
      if (FVar20.GPUMask != 0) {
        for (; (FVar20.GPUMask >> local_40 & 1) == 0; local_40 = local_40 + 1) {
        }
      }
      pFVar18 = pFVar14;
      uVar3 = local_40;
    } while (FVar20.GPUMask != 0);
    if (pFVar14 != (FD3D12Texture *)0x0) {
      iVar4 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      *(uint *)&pFVar14->_padding_ = param_1.GPUMask;
      bVar16 = 0;
      if (param_1.GPUMask != 0) {
        bVar16 = (byte)iVar4;
      }
      uVar19 = ~(1 << (bVar16 & 0x1f)) & param_1.GPUMask;
      uVar3 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar17 = (ulonglong)uVar3;
        do {
          lVar6 = pFVar14->_padding_;
          lVar7 = pFVar14->_padding_;
          lVar8 = pFVar14->_padding_;
          lVar9 = pFVar14->_padding_;
          lVar10 = pFVar14->_padding_;
          lVar2 = *(longlong *)
                   ((pFVar14->RenderTargetViews).AllocatorInstance.InlineData + uVar17 * 8 + -0x58);
          lVar11 = pFVar14->_padding_;
          lVar12 = pFVar14->_padding_;
          lVar1 = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x1f8) = pFVar14->_padding_;
          *(longlong *)(lVar2 + 0x200) = lVar6;
          uVar19 = uVar19 & ~(1 << ((byte)uVar17 & 0x1f));
          uVar3 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          *(longlong *)(lVar2 + 0x208) = lVar7;
          *(longlong *)(lVar2 + 0x210) = lVar8;
          uVar17 = 0x20;
          if (uVar19 != 0) {
            uVar17 = (ulonglong)uVar3;
          }
          *(longlong *)(lVar2 + 0x218) = lVar9;
          *(longlong *)(lVar2 + 0x220) = lVar10;
          *(longlong *)(lVar2 + 0x228) = lVar11;
          *(longlong *)(lVar2 + 0x230) = lVar12;
          *(longlong *)(lVar2 + 0x238) = lVar1;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar14;
}

// CreateLinkedObjects<FD3D12TransientHeap,`FD3D12TransientHeapCache::CreateHeap'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12TransientHeap,`FD3D12TransientHeapCache::CreateHeap'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86ae0

/* WARNING: Removing unreachable block (ram,0x000145a86b12) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12TransientHeap * __cdecl
FD3D12LinkedAdapterObject<FD3D12TransientHeap>::
CreateLinkedObjects<FD3D12TransientHeap,_FD3D12TransientHeapCache::CreateHeap_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12TransientHeap,_FD3D12TransientHeapCache::CreateHeap_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  FRHIGPUMask FVar1;
  longlong lVar2;
  FD3D12Device *pFVar3;
  FD3D12TransientHeapCache *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  FD3D12TransientHeap *pFVar17;
  FD3D12TransientHeap *pFVar18;
  byte bVar19;
  FD3D12TransientHeap *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  FRHIGPUMask FVar23;
  
  pFVar17 = (FD3D12TransientHeap *)0x0;
  uVar6 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  pFVar20 = pFVar17;
  FVar23.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      pFVar18 = (FD3D12TransientHeap *)0x0;
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar6) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FD3D12TransientHeap *)(*pcVar8)();
        return pFVar17;
      }
      pFVar3 = *(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar6 * 8);
      pFVar17 = ::operator_new(0x1a0);
      if (pFVar17 != (FD3D12TransientHeap *)0x0) {
        pFVar4 = param_3->__this;
        FVar1.GPUMask = param_3->VisibleNodeMask->GPUMask;
        if ((*(longlong *)&pFVar4->field_0xc0 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParentAdapter != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                ,0x41,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FD3D12TransientHeap *)(*pcVar8)();
          return pFVar17;
        }
        pFVar18 = FD3D12TransientHeap::FD3D12TransientHeap
                            (pFVar17,param_3->HeapInitializer,*(FD3D12Adapter **)&pFVar4->field_0xc0
                             ,pFVar3,FVar1);
      }
      pFVar17 = pFVar18;
      if (pFVar20 != (FD3D12TransientHeap *)0x0) {
        LOCK();
        *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
        UNLOCK();
        pFVar17 = pFVar20;
      }
      (&pFVar17->_padding_)[uVar6] = (longlong)pFVar18;
      FVar23.GPUMask = FVar23.GPUMask & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      if (FVar23.GPUMask != 0) {
        for (; (FVar23.GPUMask >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      pFVar20 = pFVar17;
    } while (FVar23.GPUMask != 0);
    if (pFVar17 != (FD3D12TransientHeap *)0x0) {
      iVar7 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      *(uint *)&pFVar17->_padding_ = param_1.GPUMask;
      bVar19 = 0;
      if (param_1.GPUMask != 0) {
        bVar19 = (byte)iVar7;
      }
      uVar21 = ~(1 << (bVar19 & 0x1f)) & param_1.GPUMask;
      uVar6 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar21 != 0) {
        uVar22 = (ulonglong)uVar6;
        do {
          lVar9 = pFVar17->_padding_;
          lVar10 = pFVar17->_padding_;
          lVar11 = pFVar17->_padding_;
          lVar12 = pFVar17->_padding_;
          lVar13 = pFVar17->_padding_;
          lVar5 = (&pFVar17->_padding_)[uVar22];
          lVar14 = pFVar17->_padding_;
          lVar15 = pFVar17->_padding_;
          lVar2 = pFVar17->_padding_;
          *(longlong *)(lVar5 + 0x150) = pFVar17->_padding_;
          *(longlong *)(lVar5 + 0x158) = lVar9;
          uVar21 = uVar21 & ~(1 << ((byte)uVar22 & 0x1f));
          *(longlong *)(lVar5 + 0x160) = lVar10;
          *(longlong *)(lVar5 + 0x168) = lVar11;
          uVar6 = 0;
          if (uVar21 != 0) {
            for (; (uVar21 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          *(longlong *)(lVar5 + 0x170) = lVar12;
          *(longlong *)(lVar5 + 0x178) = lVar13;
          uVar22 = 0x20;
          if (uVar21 != 0) {
            uVar22 = (ulonglong)uVar6;
          }
          *(longlong *)(lVar5 + 0x180) = lVar14;
          *(longlong *)(lVar5 + 0x188) = lVar15;
          *(longlong *)(lVar5 + 400) = lVar2;
        } while (uVar21 != 0);
      }
    }
  }
  return pFVar17;
}

// CreateLinkedObjects<FD3D12UniformBuffer,`FD3D12DynamicRHI::RHICreateUniformBuffer'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12UniformBuffer,`FD3D12DynamicRHI::RHICreateUniformBuffer'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86d20

/* WARNING: Removing unreachable block (ram,0x000145a86d4d) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12UniformBuffer * __cdecl
FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::
CreateLinkedObjects<FD3D12UniformBuffer,_FD3D12DynamicRHI::RHICreateUniformBuffer_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12UniformBuffer,_FD3D12DynamicRHI::RHICreateUniformBuffer_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
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
  FD3D12UniformBuffer *pFVar15;
  FD3D12UniformBuffer *pFVar16;
  byte bVar17;
  FD3D12UniformBuffer *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  FRHIGPUMask FVar21;
  
  pFVar15 = (FD3D12UniformBuffer *)0x0;
  uVar4 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  pFVar18 = pFVar15;
  FVar21.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar2 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FD3D12UniformBuffer *)(*pcVar6)();
        return pFVar15;
      }
      pFVar16 = `FD3D12DynamicRHI::RHICreateUniformBuffer'::__l2::<lambda_1>::operator()
                          (param_3,*(FD3D12Device **)(lVar2 + 0x800 + (ulonglong)uVar4 * 8),pFVar18)
      ;
      pFVar15 = pFVar16;
      if (pFVar18 != (FD3D12UniformBuffer *)0x0) {
        LOCK();
        plVar1 = &pFVar16->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
        if (((int)(uint)lVar2 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FD3D12UniformBuffer *)(*pcVar6)();
          return pFVar15;
        }
        pFVar15 = pFVar18;
        if ((0x3ffffffe < ((uint)lVar2 & 0x3fffffff) + 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FD3D12UniformBuffer *)(*pcVar6)();
          return pFVar15;
        }
      }
      (pFVar15->UpdateListenersCS).CriticalSection.Opaque1[(ulonglong)uVar4 - 8] = pFVar16;
      FVar21.GPUMask = FVar21.GPUMask & ~(1 << ((byte)uVar4 & 0x1f));
      uVar4 = 0;
      if (FVar21.GPUMask != 0) {
        for (; (FVar21.GPUMask >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      pFVar18 = pFVar15;
    } while (FVar21.GPUMask != 0);
    if (pFVar15 != (FD3D12UniformBuffer *)0x0) {
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
      uVar19 = ~(1 << (bVar17 & 0x1f)) & param_1.GPUMask;
      uVar4 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (uVar19 != 0) {
        uVar20 = (ulonglong)uVar4;
        do {
          lVar7 = pFVar15->_padding_;
          lVar8 = pFVar15->_padding_;
          lVar9 = pFVar15->_padding_;
          lVar10 = pFVar15->_padding_;
          lVar11 = pFVar15->_padding_;
          pvVar3 = (pFVar15->UpdateListenersCS).CriticalSection.Opaque1[uVar20 - 8];
          lVar12 = pFVar15->_padding_;
          lVar13 = pFVar15->_padding_;
          lVar2 = pFVar15->_padding_;
          *(longlong *)((longlong)pvVar3 + 0x58) = pFVar15->_padding_;
          *(longlong *)((longlong)pvVar3 + 0x60) = lVar7;
          uVar19 = uVar19 & ~(1 << ((byte)uVar20 & 0x1f));
          *(longlong *)((longlong)pvVar3 + 0x68) = lVar8;
          *(longlong *)((longlong)pvVar3 + 0x70) = lVar9;
          uVar4 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          *(longlong *)((longlong)pvVar3 + 0x78) = lVar10;
          *(longlong *)((longlong)pvVar3 + 0x80) = lVar11;
          uVar20 = 0x20;
          if (uVar19 != 0) {
            uVar20 = (ulonglong)uVar4;
          }
          *(longlong *)((longlong)pvVar3 + 0x88) = lVar12;
          *(longlong *)((longlong)pvVar3 + 0x90) = lVar13;
          *(longlong *)((longlong)pvVar3 + 0x98) = lVar2;
        } while (uVar19 != 0);
      }
    }
  }
  return pFVar15;
}

// CreateLinkedObjects<FD3D12UnorderedAccessView_RHI,`FD3D12DynamicRHI::RHICreateUnorderedAccessView'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12UnorderedAccessView_RHI,`FD3D12DynamicRHI::RHICreateUnorderedAccessView'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 145a86f40

/* WARNING: Removing unreachable block (ram,0x000145a86f74) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12UnorderedAccessView_RHI * __cdecl
FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::
CreateLinkedObjects<FD3D12UnorderedAccessView_RHI,_FD3D12DynamicRHI::RHICreateUnorderedAccessView_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12UnorderedAccessView_RHI,_FD3D12DynamicRHI::RHICreateUnorderedAccessView_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  EViewType EVar3;
  char cVar4;
  longlong lVar5;
  FD3D12Device *pFVar6;
  FRHIViewDesc *pFVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  FName FVar13;
  longlong lVar14;
  undefined8 uVar15;
  FName FVar16;
  bool bVar17;
  FD3D12UnorderedAccessView_RHI *pFVar18;
  FName FVar19;
  byte bVar20;
  FName FVar21;
  FName FVar22;
  FRHITrackedAccess this;
  uint uVar23;
  FD3D12UnorderedAccessView *pFVar24;
  ERHIDescriptorType EVar25;
  ulonglong uVar26;
  uint local_res20;
  
  FVar22.ComparisonIndex.Value = 0;
  FVar22.Number = 0;
  uVar8 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  FVar21 = FVar22;
  local_res20 = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar5 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar8) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FD3D12UnorderedAccessView_RHI *)(*pcVar10)();
        return pFVar18;
      }
      this.Access = None;
      this.Pipelines = None;
      this._5_3_ = 0;
      pFVar6 = *(FD3D12Device **)(lVar5 + 0x800 + (ulonglong)uVar8 * 8);
      EVar3 = (param_3->ViewDesc->field0_0x0).Common.ViewType;
      if ((EVar3 == BufferSRV) || (EVar3 == BufferUAV)) {
        if (*param_3->Resource != (FRHIViewableResource *)0x0) {
          this = (&(*param_3->Resource)[10].TrackedAccess)[*(uint *)&pFVar6->field_0x8];
        }
      }
      else if (*param_3->Resource != (FRHIViewableResource *)0x0) {
        this = (&(*param_3->Resource)[0xc].TrackedAccess)[*(uint *)&pFVar6->field_0x8];
      }
      FVar19 = (FName)::operator_new(0x110);
      if (FVar19 == (FName)0x0) {
        FVar19.ComparisonIndex.Value = 0;
        FVar19.Number = 0;
      }
      else {
        pFVar7 = param_3->ViewDesc;
        FRHIResource::FRHIResource((FRHIResource *)FVar19,RRT_UnorderedAccessView);
        *(undefined ***)FVar19 = &___7FRHIView__6B_;
        ((FRHIResource *)((longlong)FVar19 + 0x18))->_padding_ = (longlong)this;
        if (this != (FRHITrackedAccess)0x0) {
          FRHIResource::AddRef((FRHIResource *)this);
        }
        uVar11 = *(undefined8 *)((longlong)&pFVar7->field0_0x0 + 8);
        *(undefined8 *)((longlong)FVar19 + 0x20) = *(undefined8 *)&pFVar7->field0_0x0;
        *(undefined8 *)((longlong)FVar19 + 0x28) = uVar11;
        if ((this == (FRHITrackedAccess)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InResource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0xcae,L"Cannot create a view of a nullptr resource."), bVar17)) {
          pcVar10 = (code *)swi(3);
          pFVar18 = (FD3D12UnorderedAccessView_RHI *)(*pcVar10)();
          return pFVar18;
        }
        *(undefined ***)FVar19 = &___7FRHIUnorderedAccessView__6B_;
        cVar4 = *(char *)&((FAtomicFlags *)((longlong)FVar19 + 0x20))->Packed;
        if (((cVar4 == '\0') || (cVar4 == '\x02')) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ViewDesc.IsUAV()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0xce3,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          pFVar18 = (FD3D12UnorderedAccessView_RHI *)(*pcVar10)();
          return pFVar18;
        }
        EVar3 = (pFVar7->field0_0x0).Common.ViewType;
        if (EVar3 == BufferSRV) {
LAB_145a870fa:
          EVar25 = BufferSRV;
        }
        else if (EVar3 == BufferUAV) {
          EVar25 = BufferUAV;
        }
        else if (EVar3 == TextureSRV) {
          EVar25 = TextureSRV;
        }
        else {
          if (EVar3 != TextureUAV) goto LAB_145a870fa;
          EVar25 = TextureUAV;
        }
        pFVar24 = (FD3D12UnorderedAccessView *)((longlong)FVar21 + 0x30);
        if (FVar21 == (FName)0x0) {
          pFVar24 = (FD3D12UnorderedAccessView *)0x0;
        }
        FD3D12UnorderedAccessView::FD3D12UnorderedAccessView
                  ((FD3D12UnorderedAccessView *)((longlong)FVar19 + 0x30),pFVar6,pFVar24,EVar25);
        *(atomic<unsigned_int> *)((longlong)FVar19 + 200) = (atomic<unsigned_int>)0x1;
        ((FName *)((longlong)FVar19 + 0xd0))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar19 + 0xd0))->Number = 0;
        ((FRHIResource *)((longlong)FVar19 + 0xd8))->_padding_ = 0;
        *(undefined8 *)((longlong)FVar19 + 0xe0) = 0;
        ((FName *)((longlong)FVar19 + 0xe8))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar19 + 0xe8))->Number = 0;
        ((FRHIResource *)((longlong)FVar19 + 0xf0))->_padding_ = 0;
        *(undefined8 *)((longlong)FVar19 + 0xf8) = 0;
        ((FName *)((longlong)FVar19 + 0x100))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar19 + 0x100))->Number = 0;
        ((FRHIResource *)((longlong)FVar19 + 0x108))->_padding_ = 0;
        *(undefined ***)FVar19 =
             &FD3D12UnorderedAccessView_RHI::_vftable__for__FRHIUnorderedAccessView__;
        ((FRHIResource *)((longlong)FVar19 + 0x30))->_padding_ =
             (longlong)&FD3D12UnorderedAccessView_RHI::_vftable__for__FD3D12UnorderedAccessView__;
      }
      FVar22 = FVar19;
      if (FVar21 != (FName)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned_int> *)((longlong)FVar19 + 8);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if (((int)aVar2 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar17)) {
          pcVar10 = (code *)swi(3);
          pFVar18 = (FD3D12UnorderedAccessView_RHI *)(*pcVar10)();
          return pFVar18;
        }
        FVar22 = FVar21;
        if ((0x3ffffffe < ((uint)aVar2 & 0x3fffffff) + 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar17)) {
          pcVar10 = (code *)swi(3);
          pFVar18 = (FD3D12UnorderedAccessView_RHI *)(*pcVar10)();
          return pFVar18;
        }
      }
      ((FName *)((longlong)FVar22 + 0xd0))[uVar8] = FVar19;
      local_res20 = local_res20 & ~(1 << ((byte)uVar8 & 0x1f));
      uVar8 = 0;
      if (local_res20 != 0) {
        for (; (local_res20 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      FVar21 = FVar22;
    } while (local_res20 != 0);
    if (FVar22 != (FName)0x0) {
      iVar9 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
        }
      }
      ((FAtomicFlags *)((longlong)FVar22 + 200))->Packed = (atomic<unsigned_int>)param_1.GPUMask;
      bVar20 = 0;
      if (param_1.GPUMask != 0) {
        bVar20 = (byte)iVar9;
      }
      uVar23 = ~(1 << (bVar20 & 0x1f)) & param_1.GPUMask;
      uVar8 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      if (uVar23 != 0) {
        uVar26 = (ulonglong)uVar8;
        do {
          FVar19 = *(FName *)((longlong)FVar22 + 0xd0);
          lVar12 = ((FRHIResource *)((longlong)FVar22 + 0xd8))->_padding_;
          uVar11 = *(undefined8 *)((longlong)FVar22 + 0xe0);
          FVar13 = *(FName *)((longlong)FVar22 + 0xe8);
          lVar14 = ((FRHIResource *)((longlong)FVar22 + 0xf0))->_padding_;
          FVar21 = ((FName *)((longlong)FVar22 + 0xd0))[uVar26];
          uVar15 = *(undefined8 *)((longlong)FVar22 + 0xf8);
          FVar16 = *(FName *)((longlong)FVar22 + 0x100);
          lVar5 = ((FRHIResource *)((longlong)FVar22 + 0x108))->_padding_;
          *(undefined8 *)((longlong)FVar21 + 200) = *(undefined8 *)((longlong)FVar22 + 200);
          *(FName *)((longlong)FVar21 + 0xd0) = FVar19;
          uVar23 = uVar23 & ~(1 << ((byte)uVar26 & 0x1f));
          *(longlong *)((longlong)FVar21 + 0xd8) = lVar12;
          *(undefined8 *)((longlong)FVar21 + 0xe0) = uVar11;
          uVar8 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          *(FName *)((longlong)FVar21 + 0xe8) = FVar13;
          *(longlong *)((longlong)FVar21 + 0xf0) = lVar14;
          uVar26 = 0x20;
          if (uVar23 != 0) {
            uVar26 = (ulonglong)uVar8;
          }
          *(undefined8 *)((longlong)FVar21 + 0xf8) = uVar15;
          *(FName *)((longlong)FVar21 + 0x100) = FVar16;
          *(longlong *)((longlong)FVar21 + 0x108) = lVar5;
        } while (uVar23 != 0);
      }
    }
  }
  return (FD3D12UnorderedAccessView_RHI *)FVar22;
}

// CreateTransientResource<FRHITransientBuffer,``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHIBufferCreateDesc> @ 145a87330

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FRHITransientResourceHeapAllocator::
CreateTransientResource<FRHITransientBuffer,__FD3D12TransientResourceHeapAllocator::CreateBuffer_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHIBufferCreateDesc>
          (FRHITransientResourceHeapAllocator *this,<lambda_1> *param_1,ulong64 param_2,
          ulong64 param_3,FRHIBufferCreateDesc *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FRHIResource *pFVar9;
  FD3D12TransientHeap *pFVar10;
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar11;
  ulong64 uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  bool bVar15;
  TTask<FRHITransientResource::FResourceTaskResult> TVar16;
  TTask<FRHITransientResource::FResourceTaskResult> this_00;
  FRHITransientBuffer *pFVar17;
  FTask *pFVar18;
  TTask<FRHITransientResource::FResourceTaskResult> this_01;
  TTask<FRHITransientResource::FResourceTaskResult> local_res8;
  FResourceTaskResult local_48;
  
  this_01 = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
  local_res8 = (TTask<FRHITransientResource::FResourceTaskResult>)
               ((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->CreateMode == Inline) {
    ``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()(param_1,&local_48);
    TVar16 = (TTask<FRHITransientResource::FResourceTaskResult>)::operator_new(0x110);
    if (TVar16 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
      FRHITransientResource::FRHITransientResource
                ((FRHITransientResource *)TVar16,local_48.Resource.Reference,
                 local_48.GpuVirtualAddress,param_2,param_3,Heap,Buffer);
      *(undefined ***)TVar16 = &___7FRHITransientBuffer__6B_;
      pFVar9 = (FRHIResource *)param_4->_padding_;
      ((FRHITransientResource *)((longlong)TVar16 + 0xb0))->_padding_ = param_4->_padding_;
      ((TRefCountPtr<FRHIResource> *)((longlong)TVar16 + 0xb8))->Reference = pFVar9;
      *(ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> *)
       ((longlong)TVar16 + 0xd0) =
           (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
           0x0;
      *(undefined4 *)((longlong)TVar16 + 0xd8) = 0;
      *(int *)((longlong)TVar16 + 0xdc) = 1;
      *(ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> *)
       ((longlong)TVar16 + 0x100) =
           (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)
           0x0;
      *(undefined4 *)((longlong)TVar16 + 0x108) = 0;
      *(int *)((longlong)TVar16 + 0x10c) = 1;
      this_01 = TVar16;
    }
    if (local_48.Resource.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release(local_48.Resource.Reference);
    }
    return (FRHITransientBuffer *)this_01;
  }
  this_00 = (TTask<FRHITransientResource::FResourceTaskResult>)::operator_new(0x110);
  TVar16 = this_01;
  if (this_00 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
    local_res8 = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
    TVar16 = (TTask<FRHITransientResource::FResourceTaskResult>)FMemory::Malloc(0x1c0,0x40);
    if (TVar16 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar16,2,true);
      *(undefined ***)TVar16 =
           &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_
      ;
      uVar4._0_4_ = ((FRHIBufferDesc *)((longlong)TVar16 + 0xb0))->Size;
      uVar4._4_4_ = ((FRHIBufferDesc *)((longlong)TVar16 + 0xb0))->Stride;
      if (((uVar4 & 0x20) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsCompleted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                              ,0x1dd,L"State: %d"), bVar15)) {
        pcVar5 = (code *)swi(3);
        pFVar17 = (FRHITransientBuffer *)(*pcVar5)();
        return pFVar17;
      }
      (**(code **)(*(longlong *)((longlong)TVar16 + 0xa0) + 0x18))
                ((longlong *)((longlong)TVar16 + 0xa0),(longlong *)((longlong)TVar16 + 0x78));
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar16 + 0x78) = TVar16;
      *(undefined ***)((longlong)TVar16 + 0xa0) =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar16 + 0x80) = TVar16;
      pFVar18 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar18 != (FTask *)0x0) {
        this_01 = *(TTask<FRHITransientResource::FResourceTaskResult> *)&pFVar18->field_0x30;
      }
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar16 + 0xa8) = this_01;
      ((FRHIBufferDesc *)((longlong)TVar16 + 0xb0))->Size = 0x4274a400;
      ((FRHIBufferDesc *)((longlong)TVar16 + 0xb0))->Stride = 0xc0000054;
      *(undefined1 *)((longlong)TVar16 + 0x44) = 0;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)((longlong)TVar16 + 8));
      *(undefined ***)TVar16 =
           &UE::Tasks::Private::
            TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
            ::_vftable_;
      pFVar10 = param_1->Heap;
      *(FD3D12Adapter **)((longlong)TVar16 + 0xe8) = param_1->Adapter;
      *(FD3D12TransientHeap **)((longlong)TVar16 + 0xf0) = pFVar10;
      FVar11 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )(param_1->Allocation).Size;
      *(FRHITransientHeap **)((longlong)TVar16 + 0xf8) = (param_1->Allocation).Heap;
      *(ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> *)
       ((longlong)TVar16 + 0x100) = FVar11;
      lVar14 = *(longlong *)&(param_1->Allocation).AlignmentPad;
      *(ulong64 *)((longlong)TVar16 + 0x108) = (param_1->Allocation).Offset;
      ((FRHITransientBuffer *)((longlong)TVar16 + 0x110))->_padding_ = lVar14;
      uVar12 = (param_1->Desc).Alignment;
      *(longlong *)((longlong)TVar16 + 0x118) = *(longlong *)&param_1->Desc;
      *(ulong64 *)((longlong)TVar16 + 0x120) = uVar12;
      lVar14 = *(longlong *)&(param_1->Desc).Height;
      *(ulong64 *)((longlong)TVar16 + 0x128) = (param_1->Desc).Width;
      *(longlong *)((longlong)TVar16 + 0x130) = lVar14;
      lVar14 = *(longlong *)&(param_1->Desc).SampleDesc.Quality;
      *(longlong *)((longlong)TVar16 + 0x138) = *(longlong *)&(param_1->Desc).Format;
      *(longlong *)((longlong)TVar16 + 0x140) = lVar14;
      lVar14 = (param_1->CreateDesc)._padding_;
      *(longlong *)((longlong)TVar16 + 0x148) = *(longlong *)&(param_1->Desc).Flags;
      *(longlong *)((longlong)TVar16 + 0x150) = lVar14;
      pwVar13 = (param_1->CreateDesc).DebugName;
      *(longlong *)((longlong)TVar16 + 0x158) = (param_1->CreateDesc)._padding_;
      *(wchar_t **)((longlong)TVar16 + 0x160) = pwVar13;
      lVar14 = *(longlong *)&(param_1->CreateDesc).InitialState;
      *(FResourceArrayUploadInterface **)((longlong)TVar16 + 0x168) =
           (param_1->CreateDesc).InitialData;
      *(longlong *)((longlong)TVar16 + 0x170) = lVar14;
      uVar6 = (param_1->CreateDesc).ClassName.Number;
      uVar7 = (param_1->CreateDesc).OwnerName.ComparisonIndex.Value;
      uVar8 = (param_1->CreateDesc).OwnerName.Number;
      *(uint *)((longlong)TVar16 + 0x178) = (param_1->CreateDesc).ClassName.ComparisonIndex.Value;
      *(uint *)((longlong)TVar16 + 0x17c) = uVar6;
      *(uint *)((longlong)TVar16 + 0x180) = uVar7;
      *(uint *)((longlong)TVar16 + 0x184) = uVar8;
      *(wchar_t **)((longlong)TVar16 + 0x188) = param_1->InDebugName;
      *(undefined ***)TVar16 =
           &UE::Tasks::Private::
            TExecutableTask<``FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
            ::_vftable_;
      this_01 = TVar16;
    }
    if (local_res8 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_res8)(local_res8,1);
      }
    }
    local_res8 = this_01;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x1c0);
    FRHITransientResource::FRHITransientResource
              ((FRHITransientResource *)this_00,&local_res8,param_2,param_3,Heap,Buffer);
    *(undefined ***)this_00 = &___7FRHITransientBuffer__6B_;
    uVar6 = *(uint *)((longlong)&param_4->_padding_ + 4);
    lVar14 = param_4->_padding_;
    uVar7 = *(uint *)((longlong)&param_4->_padding_ + 4);
    ((FRHIBufferDesc *)((longlong)this_00 + 0xb0))->Size = (uint)param_4->_padding_;
    *(uint *)((longlong)this_00 + 0xb4) = uVar6;
    *(EBufferUsageFlags *)((longlong)this_00 + 0xb8) = (EBufferUsageFlags)lVar14;
    ((FRHIGPUMask *)((longlong)this_00 + 0xbc))->GPUMask = uVar7;
    *(ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> *)
     ((longlong)this_00 + 0xd0) =
         (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
         0x0;
    *(int *)((longlong)this_00 + 0xd8) = 0;
    *(int *)((longlong)this_00 + 0xdc) = 1;
    *(ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> *)
     ((longlong)this_00 + 0x100) =
         (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0
    ;
    *(int *)((longlong)this_00 + 0x108) = 0;
    *(int *)((longlong)this_00 + 0x10c) = 1;
    this_01 = this_00;
    TVar16 = (TTask<FRHITransientResource::FResourceTaskResult>)0x1;
  }
  if ((TVar16 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) &&
     (local_res8 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0)) {
    LOCK();
    plVar2 = (longlong *)((longlong)local_res8 + 0x30);
    iVar3 = *(int *)plVar2;
    *(int *)plVar2 = *(int *)plVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_res8)(local_res8,1);
    }
  }
  return (FRHITransientBuffer *)this_01;
}

// CreateTransientResource<FRHITransientTexture,``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHITextureDesc> @ 145a876d0

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

FRHITransientTexture * __thiscall
FRHITransientResourceHeapAllocator::
CreateTransientResource<FRHITransientTexture,__FD3D12TransientResourceHeapAllocator::CreateTexture_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHITextureDesc>
          (FRHITransientResourceHeapAllocator *this,<lambda_1> *param_1,ulong64 param_2,
          ulong64 param_3,FRHITextureDesc *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  ulong64 uVar5;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar6;
  longlong lVar7;
  bool bVar8;
  FRHITransientTexture *pFVar9;
  TTask<FRHITransientResource::FResourceTaskResult> this_00;
  TTask<FRHITransientResource::FResourceTaskResult> TVar10;
  FTask *pFVar11;
  TTask<FRHITransientResource::FResourceTaskResult> local_res8;
  FResourceTaskResult local_48;
  
  this_00 = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
  local_res8 = (TTask<FRHITransientResource::FResourceTaskResult>)
               ((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->CreateMode == Inline) {
    ``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()(param_1,&local_48);
    pFVar9 = ::operator_new(0x150);
    if (pFVar9 != (FRHITransientTexture *)0x0) {
      this_00 = (TTask<FRHITransientResource::FResourceTaskResult>)
                FRHITransientTexture::FRHITransientTexture
                          (pFVar9,local_48.Resource.Reference,local_48.GpuVirtualAddress,param_2,
                           param_3,Heap,param_4);
    }
    if (local_48.Resource.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release(local_48.Resource.Reference);
    }
    return (FRHITransientTexture *)this_00;
  }
  pFVar9 = ::operator_new(0x150);
  TVar10 = this_00;
  if (pFVar9 != (FRHITransientTexture *)0x0) {
    local_res8 = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
    TVar10 = (TTask<FRHITransientResource::FResourceTaskResult>)FMemory::Malloc(0x1c0,0x40);
    if (TVar10 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)TVar10,2,true);
      *(undefined ***)TVar10 =
           &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_
      ;
      if (((((FRHITextureDesc *)((longlong)TVar10 + 0xb0))->Flags & CPUWritable) == None) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FRHITransientTexture *)(*pcVar4)();
        return pFVar9;
      }
      (**(code **)(*(longlong *)((longlong)TVar10 + 0xa0) + 0x18))
                ((longlong *)((longlong)TVar10 + 0xa0),(longlong *)((longlong)TVar10 + 0x78));
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar10 + 0x78) = TVar10;
      *(undefined ***)((longlong)TVar10 + 0xa0) =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar10 + 0x80) = TVar10;
      pFVar11 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar11 != (FTask *)0x0) {
        this_00 = *(TTask<FRHITransientResource::FResourceTaskResult> *)&pFVar11->field_0x30;
      }
      *(TTask<FRHITransientResource::FResourceTaskResult> *)((longlong)TVar10 + 0xa8) = this_00;
      ((FRHITextureDesc *)((longlong)TVar10 + 0xb0))->Flags = 0xc00000544274a400;
      *(undefined1 *)((longlong)TVar10 + 0x44) = 0;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)((longlong)TVar10 + 8));
      *(undefined ***)TVar10 =
           &UE::Tasks::Private::
            TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
            ::_vftable_;
      *(FD3D12DynamicRHI **)
       &((TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
        ((longlong)TVar10 + 0xe8))->AllocatorInstance = param_1->DynamicRHI;
      *(FD3D12Adapter **)((longlong)TVar10 + 0xf0) = param_1->Adapter;
      *(FD3D12TransientHeap **)((longlong)TVar10 + 0xf8) = param_1->Heap;
      uVar5 = (param_1->Allocation).Size;
      *(FRHITransientHeap **)
       (((FRHITextureViewCache *)((longlong)TVar10 + 0x100))->UAVs).AllocatorInstance.InlineData =
           (param_1->Allocation).Heap;
      *(ulong64 *)((longlong)TVar10 + 0x108) = uVar5;
      FVar6 = *(ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                *)&(param_1->Allocation).AlignmentPad;
      *(ulong64 *)((longlong)TVar10 + 0x110) = (param_1->Allocation).Offset;
      *(ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> *)
       ((longlong)TVar10 + 0x118) = FVar6;
      lVar7 = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x120) = (param_1->Desc)._padding_;
      *(longlong *)
       (((TArray<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)((longlong)TVar10 + 0x128))->AllocatorInstance).InlineData = lVar7;
      lVar7 = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x130) = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x138) = lVar7;
      lVar7 = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x140) = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x148) = lVar7;
      lVar7 = *(longlong *)&(param_1->Desc).PixelFormat;
      ((FRHITransientTexture *)((longlong)TVar10 + 0x150))->_padding_ = (param_1->Desc)._padding_;
      *(longlong *)((longlong)TVar10 + 0x158) = lVar7;
      FRHITextureDesc::FRHITextureDesc
                ((FRHITextureDesc *)((longlong)TVar10 + 0x160),&param_1->InCreateInfo);
      *(wchar_t **)((longlong)TVar10 + 0x1b0) = param_1->InDebugName;
      *(undefined ***)TVar10 =
           &UE::Tasks::Private::
            TExecutableTask<``FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
            ::_vftable_;
      this_00 = TVar10;
    }
    if (local_res8 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_res8)(local_res8,1);
      }
    }
    local_res8 = this_00;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x1c0);
    this_00 = (TTask<FRHITransientResource::FResourceTaskResult>)
              FRHITransientTexture::FRHITransientTexture
                        (pFVar9,&local_res8,param_2,param_3,Heap,param_4);
    TVar10 = (TTask<FRHITransientResource::FResourceTaskResult>)0x1;
  }
  if ((TVar10 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) &&
     (local_res8 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0)) {
    LOCK();
    plVar2 = (longlong *)((longlong)local_res8 + 0x30);
    iVar3 = *(int *)plVar2;
    *(int *)plVar2 = *(int *)plVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_res8)(local_res8,1);
    }
  }
  return (FRHITransientTexture *)this_00;
}

// DefaultConstructItems<FD3D12Viewport::FBackBufferData,int> @ 145a879f0

void __cdecl DefaultConstructItems<FD3D12Viewport::FBackBufferData,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FShaderBundleBinderOps,int> @ 145a87a20

void __cdecl DefaultConstructItems<FShaderBundleBinderOps,int>(void *param_1,int param_2)

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
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 145a87a90

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 145a87ae0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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

// DestructItems<FD3D12Viewport::FBackBufferData,int> @ 145a87b30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
DestructItems<FD3D12Viewport::FBackBufferData,int>(FBackBufferData *param_1,int param_2)

{
  FD3D12Texture *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Texture).Reference;
    if (pFVar1 != (FD3D12Texture *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode,int> @ 145a87b80

void __cdecl
DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l2::FBreadcrumbNode,int>
          (FBreadcrumbNode *param_1,int param_2)

{
  FString *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Name;
    TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
    ::
    ~TArray<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
              ((TArray<_FGPUBreadcrumbCrashData::FQueueData___cdecl_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>(D3D12_AUTO_BREADCRUMB_NODE1_const_*)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                *)(this + 1));
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&this->Data);
    param_1 = (FBreadcrumbNode *)(this + 2);
  }
  return;
}

// DestructItems<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode,int> @ 145a87bc0

void __cdecl
DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l2::FBreadcrumbNode,int>
          (FBreadcrumbNode *param_1,int param_2)

{
  FString *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Name;
    TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
    ::
    ~TArray<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
              ((TArray<_FGPUBreadcrumbCrashData::FQueueData___cdecl_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>(D3D12_AUTO_BREADCRUMB_NODE_const_*)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                *)(this + 1));
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&this->Data);
    param_1 = (FBreadcrumbNode *)(this + 2);
  }
  return;
}

// DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int> @ 145a87c00

void __cdecl
DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>(FNameMap *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NodeName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ExportName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FShaderBundleBinderOps,int> @ 145a87c50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl DestructItems<FShaderBundleBinderOps,int>(FShaderBundleBinderOps *param_1,int param_2)

{
  FD3D12View ***pppFVar1;
  
  if (param_2 != 0) {
    pppFVar1 = &(param_1->TransitionClearSet).Table.CurrentData.Keys;
    do {
      if (pppFVar1[8] != (void *)0x0) {
        FMemory::Free(pppFVar1[8]);
      }
      if (pppFVar1[6] != (void *)0x0) {
        FMemory::Free(pppFVar1[6]);
      }
      if (pppFVar1[4] != (void *)0x0) {
        FMemory::Free(pppFVar1[4]);
      }
      if (pppFVar1[-1] != (FD3D12View **)0x0) {
        FMemory::Free(pppFVar1[-1]);
        FMemory::Free(*pppFVar1);
        FMemory::Free((FNoopStruct *)pppFVar1[1]);
      }
      *(undefined4 *)(pppFVar1 + 2) = 0;
      *(undefined1 *)((longlong)pppFVar1 + 0x14) = 0;
      *(undefined8 *)(pppFVar1 + -2) = 0;
      pppFVar1[-1] = (FD3D12View **)0x0;
      *(undefined4 *)(pppFVar1 + 3) = 0;
      *pppFVar1 = (FD3D12View **)0x0;
      pppFVar1[1] = (FD3D12View **)0x0;
      if (pppFVar1[-7] != (void *)0x0) {
        FMemory::Free(pppFVar1[-7]);
        FMemory::Free(pppFVar1[-6]);
        FMemory::Free(pppFVar1[-5]);
      }
      *(undefined4 *)(pppFVar1 + -4) = 0;
      *(undefined1 *)((longlong)pppFVar1 + -0x1c) = 0;
      pppFVar1[-8] = (FD3D12View **)0x0;
      pppFVar1[-7] = (FD3D12View **)0x0;
      *(undefined4 *)(pppFVar1 + -3) = 0;
      pppFVar1[-6] = (FD3D12View **)0x0;
      pppFVar1[-5] = (FD3D12View **)0x0;
      pppFVar1 = pppFVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 145a87d60

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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

// DestructItems<TRefCountPtr<IDXGIAdapter>,int> @ 145a87de0

void __cdecl
DestructItems<TRefCountPtr<IDXGIAdapter>,int>(TRefCountPtr<IDXGIAdapter> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (IDXGIAdapter *)0x0) {
      (**(code **)((longlong)*param_1->Reference + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FRHIShader>,int> @ 145a87e20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FRHIShader>,int>(TRefCountPtr<FRHIShader> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FRHIShader *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// EnqueueLambdaMultiPipe<`FD3D12DynamicRHI::RHIUpdateTextureReference'::__l2::<lambda_1>_> @ 145a88830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FD3D12DynamicRHI::RHIUpdateTextureReference_::__l2::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  longlong *plVar6;
  bool bVar7;
  FRHICommandBase *pFVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *local_res8;
  FD3D12ContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&this->MemManager,0x30,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar8;
    this->CommandLink = &pFVar8->Next;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8[1]._padding_ = 0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::RHIUpdateTextureReference'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1]._padding_ = (longlong)(param_4->TextureReference).Reference;
    (param_4->TextureReference).Reference = (FD3D12RHITextureReference *)0x0;
    pFVar8[1].Next = (FRHICommandBase *)param_4->NewTexture;
    pFVar8[2]._padding_ = (longlong)param_3;
    *(ERHIPipeline *)&pFVar8[2].Next = param_1;
  }
  else {
    plVar11 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar12 = *(longlong **)&this->Contexts;
        plVar9 = plVar12;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar11 = plVar12, plVar12 = plVar6, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar9 = plVar6;
        }
      }
      else {
        plVar9 = *(longlong **)&(this->Contexts).field_0x8;
        plVar12 = plVar9;
      }
      if ((plVar9 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = plVar12;
    }
    uVar10 = 0;
    local_38._0_8_ = uVar10;
    if (plVar11 != (longlong *)0x0) {
      local_38._0_8_ = (**(code **)(*plVar11 + 0x148))(plVar11);
    }
    if (plVar6 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
    }
    local_38._8_8_ = uVar10;
    `FD3D12DynamicRHI::RHIUpdateTextureReference'::__l2::<lambda_1>::operator()(param_4,&local_38);
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

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>'::__l4::<lambda_2>_> @ 145a88ab0

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
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_2>_>
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
      FWorkGraphShaderBundleBinder::SetSRV(param_4->Binder,pFVar5,uVar8 & 0xff);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>'::__l4::<lambda_1>_> @ 145a88d20

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
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_1>_>
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
      FWorkGraphShaderBundleBinder::SetTexture(param_4->Binder,pFVar4,uVar10 & 0xff);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIUnorderedAccessView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>'::__l4::<lambda_5>_> @ 145a88fc0

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
EnumerateUniformBufferResources<FRHIUnorderedAccessView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>_::__l4::<lambda_5>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_5> *param_4)

{
  EShaderFrequency EVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FRHIUnorderedAccessView *pFVar4;
  FWorkGraphShaderBundleBinder *pFVar5;
  code *pcVar6;
  bool bVar7;
  FD3D12UnorderedAccessView *pFVar8;
  FRHIUnorderedAccessView **ppFVar9;
  uint uVar10;
  FD3D12UnorderedAccessView *pFVar11;
  ulonglong uVar12;
  uint *puVar13;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar2 = param_3[param_2];
  if (uVar2 != 0) {
    uVar10 = param_3[uVar2];
    puVar13 = param_3 + (ulonglong)uVar2 + 1;
    do {
      pFVar11 = (FD3D12UnorderedAccessView *)0x0;
      pFVar4 = *(FRHIUnorderedAccessView **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHIUnorderedAccessView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*param_4->Tracker != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) ||
           ((EVar1 == SF_RayHitGroup || (pFVar8 = pFVar11, EVar1 == SF_RayCallable)))) {
          pFVar8 = (FD3D12UnorderedAccessView *)&DAT_00000010;
        }
        ppFVar9 = RHIValidation::FTracker::FUAVTracker::operator[]
                            ((FUAVTracker *)
                             ((longlong)&pFVar8->_padding_ + (longlong)*param_4->Tracker),
                             uVar10 & 0xff);
        *ppFVar9 = pFVar4;
      }
      pFVar5 = param_4->Binder;
      pFVar8 = pFVar11;
      if (pFVar4 == (FRHIUnorderedAccessView *)0x0) {
LAB_145a890f9:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UAV != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                           ,0x195,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pFVar8 = (FD3D12UnorderedAccessView *)
                 (*(longlong *)(&pFVar4[4].field_0x10 + (ulonglong)pFVar5->GPUIndex * 8) + 0x30);
        if (*(longlong *)(&pFVar4[4].field_0x10 + (ulonglong)pFVar5->GPUIndex * 8) == 0) {
          pFVar8 = pFVar11;
        }
        if (pFVar8 == (FD3D12UnorderedAccessView *)0x0) goto LAB_145a890f9;
      }
      if (pFVar5->bBindlessResources == false) {
        if ((pFVar8->_padding_ == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar2 = *(uint *)((longlong)&pFVar8->_padding_ + 4);
        uVar12 = (ulonglong)(uVar10 & 0xff);
        pFVar5->LocalUAVs[uVar12].ptr = pFVar8->_padding_;
        pFVar5->UAVVersions[uVar12] = uVar2;
        pFVar5->BoundUAVMask = pFVar5->BoundUAVMask | 1L << (uVar12 & 0x3f);
      }
      FShaderBundleBinderOps::AddResourceTransition(pFVar5->BinderOps,pFVar8);
      uVar10 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// ForEachDevice<`FD3D12DynamicRHI::TerminateOnOutOfMemory'::__l2::<lambda_1>_> @ 145a89290

/* WARNING: Removing unreachable block (ram,0x000145a89383) */
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

void __thiscall
FD3D12DynamicRHI::ForEachDevice<_FD3D12DynamicRHI::TerminateOnOutOfMemory_::__l2::<lambda_1>_>
          (FD3D12DynamicRHI *this,ID3D12Device *param_1,<lambda_1> *param_2)

{
  longlong lVar1;
  FD3D12Device *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ID3D12Device *pIVar5;
  ID3D12Device *pIVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if ((this->ChosenAdapters).ArrayNum != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->ChosenAdapters).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->ChosenAdapters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)pFVar7;
      uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar4 = 0;
      bVar3 = uVar9 != 0;
      if (bVar3) {
        for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      while (bVar3) {
        if ((GNumExplicitGPUsForRendering <= uVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar4 * 8);
        if (((param_1 == (ID3D12Device *)0x0) ||
            (pIVar5 = FD3D12Device::GetDevice(this_00), pIVar5 == param_1)) &&
           (pIVar5 = *param_2->InDevice, pIVar6 = FD3D12Device::GetDevice(this_00), pIVar5 == pIVar6
           )) {
          if ((*(longlong *)&this_00->field_0x10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParentAdapter != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                 ,0x41,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *param_2->Adapter = *(FD3D12Adapter **)&this_00->field_0x10;
        }
        uVar9 = uVar9 & ~(1 << ((byte)uVar4 & 0x1f));
        uVar4 = 0;
        bVar3 = uVar9 != 0;
        if (bVar3) {
          for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(this->ChosenAdapters).ArrayNum);
  }
  return;
}

// ForEachDevice<`FD3D12DynamicRHI::TerminateOnOutOfMemory'::__l2::<lambda_2>_> @ 145a89490

/* WARNING: Removing unreachable block (ram,0x000145a8957c) */
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

void __thiscall
FD3D12DynamicRHI::ForEachDevice<_FD3D12DynamicRHI::TerminateOnOutOfMemory_::__l2::<lambda_2>_>
          (FD3D12DynamicRHI *this,ID3D12Device *param_1,<lambda_2> *param_2)

{
  longlong lVar1;
  FD3D12Device *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ID3D12Device *pIVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((this->ChosenAdapters).ArrayNum != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->ChosenAdapters).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->ChosenAdapters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)pFVar6;
      uVar7 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar4 = 0;
      bVar3 = uVar7 != 0;
      if (bVar3) {
        for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      while (bVar3) {
        if ((GNumExplicitGPUsForRendering <= uVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar4 * 8);
        if ((param_1 == (ID3D12Device *)0x0) ||
           (pIVar5 = FD3D12Device::GetDevice(this_00), pIVar5 == param_1)) {
          if ((*(longlong *)&this_00->field_0x10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParentAdapter != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                 ,0x41,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          LogMemoryStats(*(FD3D12Adapter **)&this_00->field_0x10);
        }
        uVar7 = uVar7 & ~(1 << ((byte)uVar4 & 0x1f));
        uVar4 = 0;
        bVar3 = uVar7 != 0;
        if (bVar3) {
          for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(this->ChosenAdapters).ArrayNum);
  }
  return;
}

// ForEachDevice<`FD3D12DynamicRHI::OutputGPUCrashReport'::__l57::<lambda_2>_> @ 145a89670

/* WARNING: Removing unreachable block (ram,0x000145a89760) */
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

void __thiscall
FD3D12DynamicRHI::ForEachDevice<_FD3D12DynamicRHI::OutputGPUCrashReport_::__l57::<lambda_2>_>
          (FD3D12DynamicRHI *this,ID3D12Device *param_1,<lambda_2> *param_2)

{
  longlong lVar1;
  FD3D12Device *this_00;
  FCrashResult *pFVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ID3D12Device *pIVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((this->ChosenAdapters).ArrayNum != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ChosenAdapters).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (this->ChosenAdapters).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
      if ((*(longlong *)pFVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = *(longlong *)pFVar8;
      uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar6 = 0;
      bVar5 = uVar9 != 0;
      if (bVar5) {
        for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      while (bVar5) {
        if ((GNumExplicitGPUsForRendering <= uVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar6 * 8);
        if ((param_1 == (ID3D12Device *)0x0) ||
           (pIVar7 = FD3D12Device::GetDevice(this_00), pIVar7 == param_1)) {
          pFVar2 = param_2->AftermathResult;
          if (((pFVar2->GPUFaultAddress).bIsSet == false) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = (pFVar2->GPUFaultAddress).TypedValue;
          if ((*(longlong *)&this_00->field_0x10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParentAdapter != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                 ,0x41,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          D3D12RHI::LogPageFaultData(*(FD3D12Adapter **)&this_00->field_0x10,this_00,uVar3);
        }
        uVar9 = uVar9 & ~(1 << ((byte)uVar6 & 0x1f));
        uVar6 = 0;
        bVar5 = uVar9 != 0;
        if (bVar5) {
          for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(this->ChosenAdapters).ArrayNum);
  }
  return;
}

// ForEachDevice<`FD3D12DynamicRHI::OutputGPUCrashReport'::__l2::<lambda_3>_> @ 145a898b0

/* WARNING: Removing unreachable block (ram,0x000145a8999c) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DynamicRHI::ForEachDevice<_FD3D12DynamicRHI::OutputGPUCrashReport_::__l2::<lambda_3>_>
          (FD3D12DynamicRHI *this,ID3D12Device *param_1,<lambda_3> *param_2)

{
  longlong lVar1;
  FD3D12Device *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ID3D12Device *pIVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((this->ChosenAdapters).ArrayNum != 0) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->ChosenAdapters).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->ChosenAdapters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)pFVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)pFVar6;
      uVar7 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar4 = 0;
      bVar3 = uVar7 != 0;
      if (bVar3) {
        for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      while (bVar3) {
        if ((GNumExplicitGPUsForRendering <= uVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GPUIndex < GNumExplicitGPUsForRendering",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                               ,0x103,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar4 * 8);
        if ((param_1 == (ID3D12Device *)0x0) ||
           (pIVar5 = FD3D12Device::GetDevice(this_00), pIVar5 == param_1)) {
          `FD3D12DynamicRHI::OutputGPUCrashReport'::__l2::<lambda_3>::operator()(param_2,this_00);
        }
        uVar7 = uVar7 & ~(1 << ((byte)uVar4 & 0x1f));
        uVar4 = 0;
        bVar3 = uVar7 != 0;
        if (bVar3) {
          for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(this->ChosenAdapters).ArrayNum);
  }
  return;
}

// HeapSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,`FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey'::__l2::FCompareDesc> @ 145a89b60

void __cdecl
AlgoImpl::
HeapSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>
          (D3D12_INPUT_ELEMENT_DESC *param_1,int param_2,FIdentityFunctor param_3,
          FCompareDesc param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DXGI_FORMAT DVar7;
  D3D12_INPUT_CLASSIFICATION DVar8;
  uint uVar9;
  uint uVar10;
  DXGI_FORMAT DVar11;
  uint uVar12;
  uint uVar13;
  D3D12_INPUT_CLASSIFICATION DVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  D3D12_INPUT_ELEMENT_DESC *pDVar18;
  int iVar19;
  D3D12_INPUT_ELEMENT_DESC *pDVar20;
  int iVar21;
  D3D12_INPUT_ELEMENT_DESC *pDVar22;
  longlong lVar23;
  FCompareDesc local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,TReversePredicate<_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>_>
            (param_1,param_2,param_3,local_res20);
  iVar21 = param_2 + -1;
  lVar23 = (longlong)iVar21;
  if (0 < iVar21) {
    pDVar20 = param_1 + lVar23;
    do {
      uVar6 = pDVar20->SemanticIndex;
      DVar7 = pDVar20->Format;
      pcVar5 = param_1->SemanticName;
      uVar10 = param_1->SemanticIndex;
      DVar11 = param_1->Format;
      uVar12 = param_1->InputSlot;
      uVar13 = param_1->AlignedByteOffset;
      DVar14 = param_1->InputSlotClass;
      uVar15 = param_1->InstanceDataStepRate;
      param_1->SemanticName = pDVar20->SemanticName;
      param_1->SemanticIndex = uVar6;
      param_1->Format = DVar7;
      uVar6 = pDVar20->AlignedByteOffset;
      DVar8 = pDVar20->InputSlotClass;
      uVar9 = pDVar20->InstanceDataStepRate;
      param_1->InputSlot = pDVar20->InputSlot;
      param_1->AlignedByteOffset = uVar6;
      param_1->InputSlotClass = DVar8;
      param_1->InstanceDataStepRate = uVar9;
      pDVar20->SemanticName = pcVar5;
      pDVar20->SemanticIndex = uVar10;
      pDVar20->Format = DVar11;
      pDVar20->InputSlot = uVar12;
      pDVar20->AlignedByteOffset = uVar13;
      pDVar20->InputSlotClass = DVar14;
      pDVar20->InstanceDataStepRate = uVar15;
      iVar19 = 0;
      if (1 < iVar21) {
        do {
          iVar4 = iVar19 * 2;
          iVar17 = iVar4 + 1;
          if (iVar4 + 2 < iVar21) {
            lVar1 = (longlong)iVar4 + 2;
            lVar2 = (longlong)iVar4 + 1;
            bVar16 = param_1[lVar1].InputSlot < param_1[lVar2].InputSlot;
            if ((param_1[lVar1].InputSlot == param_1[lVar2].InputSlot) &&
               (bVar16 = param_1[lVar1].AlignedByteOffset < param_1[lVar2].AlignedByteOffset,
               param_1[lVar1].AlignedByteOffset == param_1[lVar2].AlignedByteOffset)) {
              bVar16 = param_1[lVar1].SemanticIndex < param_1[lVar2].SemanticIndex;
            }
            if (bVar16) {
              iVar17 = iVar4;
            }
            iVar17 = iVar17 + 1;
          }
          pDVar18 = param_1 + iVar17;
          pDVar22 = param_1 + iVar19;
          bVar16 = pDVar22->InputSlot < pDVar18->InputSlot;
          if ((pDVar22->InputSlot == pDVar18->InputSlot) &&
             (bVar16 = pDVar22->AlignedByteOffset < pDVar18->AlignedByteOffset,
             pDVar22->AlignedByteOffset == pDVar18->AlignedByteOffset)) {
            bVar16 = pDVar22->SemanticIndex < pDVar18->SemanticIndex;
          }
          if (!bVar16) break;
          uVar6 = pDVar18->SemanticIndex;
          DVar7 = pDVar18->Format;
          pcVar5 = pDVar22->SemanticName;
          uVar10 = pDVar22->SemanticIndex;
          DVar11 = pDVar22->Format;
          uVar12 = pDVar22->InputSlot;
          uVar13 = pDVar22->AlignedByteOffset;
          DVar14 = pDVar22->InputSlotClass;
          uVar15 = pDVar22->InstanceDataStepRate;
          pDVar22->SemanticName = pDVar18->SemanticName;
          pDVar22->SemanticIndex = uVar6;
          pDVar22->Format = DVar7;
          uVar6 = pDVar18->AlignedByteOffset;
          DVar8 = pDVar18->InputSlotClass;
          uVar9 = pDVar18->InstanceDataStepRate;
          pDVar22->InputSlot = pDVar18->InputSlot;
          pDVar22->AlignedByteOffset = uVar6;
          pDVar22->InputSlotClass = DVar8;
          pDVar22->InstanceDataStepRate = uVar9;
          pDVar18->SemanticName = pcVar5;
          pDVar18->SemanticIndex = uVar10;
          pDVar18->Format = DVar11;
          pDVar18->InputSlot = uVar12;
          pDVar18->AlignedByteOffset = uVar13;
          pDVar18->InputSlotClass = DVar14;
          pDVar18->InstanceDataStepRate = uVar15;
          iVar19 = iVar17;
        } while (iVar17 * 2 + 1 < iVar21);
      }
      iVar21 = iVar21 + -1;
      lVar23 = lVar23 + -1;
      pDVar20 = pDVar20 + -1;
    } while (0 < lVar23);
  }
  return;
}

// HeapifyInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,TReversePredicate<`FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey'::__l2::FCompareDesc>_> @ 145a89d00

void __cdecl
AlgoImpl::
HeapifyInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,TReversePredicate<_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>_>
          (D3D12_INPUT_ELEMENT_DESC *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:___cdecl_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey(TArray<FVertexElement,TFixedAllocator<17>_>_const_&)_::_2_::FCompareDesc>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DXGI_FORMAT DVar7;
  D3D12_INPUT_CLASSIFICATION DVar8;
  uint uVar9;
  uint uVar10;
  DXGI_FORMAT DVar11;
  uint uVar12;
  uint uVar13;
  D3D12_INPUT_CLASSIFICATION DVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  D3D12_INPUT_ELEMENT_DESC *pDVar20;
  int iVar21;
  D3D12_INPUT_ELEMENT_DESC *pDVar22;
  
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  iVar19 = iVar17 * 2 + 1;
  iVar4 = iVar19;
  iVar21 = iVar17;
  do {
    while (param_2 <= iVar19) {
LAB_145a89e2c:
      if (iVar21 == 0) {
        return;
      }
      iVar17 = iVar21 + -1;
      iVar19 = iVar4 + -2;
      iVar4 = iVar19;
      iVar21 = iVar17;
    }
    iVar19 = iVar17 * 2;
    iVar18 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      lVar1 = (longlong)iVar19 + 2;
      lVar2 = (longlong)iVar19 + 1;
      bVar16 = param_1[lVar1].InputSlot < param_1[lVar2].InputSlot;
      if ((param_1[lVar1].InputSlot == param_1[lVar2].InputSlot) &&
         (bVar16 = param_1[lVar1].AlignedByteOffset < param_1[lVar2].AlignedByteOffset,
         param_1[lVar1].AlignedByteOffset == param_1[lVar2].AlignedByteOffset)) {
        bVar16 = param_1[lVar1].SemanticIndex < param_1[lVar2].SemanticIndex;
      }
      if (bVar16) {
        iVar18 = iVar19;
      }
      iVar18 = iVar18 + 1;
    }
    pDVar20 = param_1 + iVar18;
    pDVar22 = param_1 + iVar17;
    bVar16 = pDVar22->InputSlot < pDVar20->InputSlot;
    if ((pDVar22->InputSlot == pDVar20->InputSlot) &&
       (bVar16 = pDVar22->AlignedByteOffset < pDVar20->AlignedByteOffset,
       pDVar22->AlignedByteOffset == pDVar20->AlignedByteOffset)) {
      bVar16 = pDVar22->SemanticIndex < pDVar20->SemanticIndex;
    }
    if (!bVar16) goto LAB_145a89e2c;
    uVar6 = pDVar20->SemanticIndex;
    DVar7 = pDVar20->Format;
    iVar19 = iVar18 * 2 + 1;
    pcVar5 = pDVar22->SemanticName;
    uVar10 = pDVar22->SemanticIndex;
    DVar11 = pDVar22->Format;
    uVar12 = pDVar22->InputSlot;
    uVar13 = pDVar22->AlignedByteOffset;
    DVar14 = pDVar22->InputSlotClass;
    uVar15 = pDVar22->InstanceDataStepRate;
    pDVar22->SemanticName = pDVar20->SemanticName;
    pDVar22->SemanticIndex = uVar6;
    pDVar22->Format = DVar7;
    uVar6 = pDVar20->AlignedByteOffset;
    DVar8 = pDVar20->InputSlotClass;
    uVar9 = pDVar20->InstanceDataStepRate;
    pDVar22->InputSlot = pDVar20->InputSlot;
    pDVar22->AlignedByteOffset = uVar6;
    pDVar22->InputSlotClass = DVar8;
    pDVar22->InstanceDataStepRate = uVar9;
    pDVar20->SemanticName = pcVar5;
    pDVar20->SemanticIndex = uVar10;
    pDVar20->Format = DVar11;
    pDVar20->InputSlot = uVar12;
    pDVar20->AlignedByteOffset = uVar13;
    pDVar20->InputSlotClass = DVar14;
    pDVar20->InstanceDataStepRate = uVar15;
    iVar17 = iVar18;
  } while( true );
}

// IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedData1> @ 145a89e60

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedData1>(ID3D12DeviceRemovedExtendedData1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedData> @ 145a89e70

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedData>(ID3D12DeviceRemovedExtendedData **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12PipelineLibrary> @ 145a89e80

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12PipelineLibrary>(ID3D12PipelineLibrary **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12PipelineState> @ 145a89e90

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12PipelineState>(ID3D12PipelineState **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12StateObjectProperties1> @ 145a89ea0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12StateObjectProperties1>(ID3D12StateObjectProperties1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12WorkGraphProperties> @ 145a89eb0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12WorkGraphProperties>(ID3D12WorkGraphProperties **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGISwapChain2> @ 145a89ec0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGISwapChain2>(IDXGISwapChain2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGISwapChain4> @ 145a89ed0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGISwapChain4>(IDXGISwapChain4 **param_1)

{
  return param_1;
}

// InternalGetDefaultObject<TResourceArray<unsigned_int,0>_> @ 145a89ee0

TResourceArray<unsigned_int,0> * __cdecl
InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
          ::__l3::Default;
}

// IntrinsicAppendHash<unsigned_int,TMemoryImageAllocator<0>_> @ 145a89f80

uint __cdecl
Freeze::IntrinsicAppendHash<unsigned_int,TMemoryImageAllocator<0>_>
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<unsigned_int,TMemoryImageAllocator<0>_> @ 145a89fa0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<unsigned_int,TMemoryImageAllocator<0>_>
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<unsigned_int,TMemoryImageAllocator<0>_> @ 145a89fc0

void __cdecl
Freeze::IntrinsicToString<unsigned_int,TMemoryImageAllocator<0>_>
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<unsigned_int,TMemoryImageAllocator<0>_> @ 145a8a030

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<unsigned_int,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  ulonglong uVar3;
  void *pvVar4;
  uint uVar5;
  
  *(undefined8 *)param_3 = 0;
  *(int *)((longlong)param_3 + 8) = 0;
  *(int *)((longlong)param_3 + 0xc) = 0;
  uVar5 = param_2->ArrayNum;
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar1 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,uVar5,param_3,(int *)((longlong)param_3 + 8),
                       (int *)((longlong)param_3 + 0xc));
    uVar3 = *(ulonglong *)param_3;
    if ((uVar3 & 1) != 0) {
      uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)param_3;
    }
    memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)uVar5 << 2);
    uVar5 = param_2->ArrayNum;
  }
  pvVar4 = *(void **)param_3;
  if (((ulonglong)pvVar4 & 1) != 0) {
    pvVar4 = (void *)(((longlong)pvVar4 >> 0x18) + (longlong)param_3);
  }
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,uVar5,pvVar4);
  return 0x10;
}

// IntrinsicWriteMemoryImage<unsigned_int,TMemoryImageAllocator<0>_> @ 145a8a110

void __cdecl
Freeze::IntrinsicWriteMemoryImage<unsigned_int,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_int>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntroSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,`FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey'::__l2::FCompareDesc> @ 145a8a190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>
          (D3D12_INPUT_ELEMENT_DESC *param_1,int param_2,FIdentityFunctor param_3,
          FCompareDesc param_4)

{
  D3D12_INPUT_ELEMENT_DESC *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  DXGI_FORMAT DVar6;
  D3D12_INPUT_CLASSIFICATION DVar7;
  uint uVar8;
  uint uVar9;
  DXGI_FORMAT DVar10;
  uint uVar11;
  uint uVar12;
  D3D12_INPUT_CLASSIFICATION DVar13;
  uint uVar14;
  int iVar15;
  D3D12_INPUT_ELEMENT_DESC *pDVar16;
  D3D12_INPUT_ELEMENT_DESC *pDVar17;
  D3D12_INPUT_ELEMENT_DESC *pDVar18;
  D3D12_INPUT_ELEMENT_DESC *pDVar19;
  D3D12_INPUT_ELEMENT_DESC *pDVar20;
  D3D12_INPUT_ELEMENT_DESC *pDVar21;
  D3D12_INPUT_ELEMENT_DESC **ppDVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  D3D12_INPUT_ELEMENT_DESC *local_348;
  D3D12_INPUT_ELEMENT_DESC *local_338;
  D3D12_INPUT_ELEMENT_DESC *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppDVar22 = &local_338;
    do {
      pDVar21 = ppDVar22[1];
      pDVar20 = *ppDVar22;
      pDVar1 = ppDVar22[2];
      iVar15 = (int)((longlong)pDVar21 - (longlong)pDVar20 >> 5) + 1;
      local_348._0_4_ = (int)pDVar1;
      pDVar19 = pDVar20;
      if ((int)local_348 != 0) {
LAB_145a8a240:
        if (8 < iVar15) {
          uVar5 = pDVar19->SemanticIndex;
          DVar6 = pDVar19->Format;
          pDVar17 = pDVar21 + 1;
          pDVar20 = pDVar19 + iVar15 / 2;
          pcVar4 = pDVar20->SemanticName;
          uVar9 = pDVar20->SemanticIndex;
          DVar10 = pDVar20->Format;
          uVar11 = pDVar20->InputSlot;
          uVar12 = pDVar20->AlignedByteOffset;
          DVar13 = pDVar20->InputSlotClass;
          uVar14 = pDVar20->InstanceDataStepRate;
          pDVar20->SemanticName = pDVar19->SemanticName;
          pDVar20->SemanticIndex = uVar5;
          pDVar20->Format = DVar6;
          uVar5 = pDVar19->AlignedByteOffset;
          DVar7 = pDVar19->InputSlotClass;
          uVar8 = pDVar19->InstanceDataStepRate;
          pDVar20->InputSlot = pDVar19->InputSlot;
          pDVar20->AlignedByteOffset = uVar5;
          pDVar20->InputSlotClass = DVar7;
          pDVar20->InstanceDataStepRate = uVar8;
          pDVar19->SemanticName = pcVar4;
          pDVar19->SemanticIndex = uVar9;
          pDVar19->Format = DVar10;
          pDVar19->InputSlot = uVar11;
          pDVar19->AlignedByteOffset = uVar12;
          pDVar19->InputSlotClass = DVar13;
          pDVar19->InstanceDataStepRate = uVar14;
          pDVar20 = pDVar19;
LAB_145a8a280:
          pDVar16 = pDVar20;
          pDVar20 = pDVar16 + 1;
          if (pDVar20 <= pDVar21) goto code_r0x000145a8a28c;
          goto LAB_145a8a2b0;
        }
        for (; pDVar20 = pDVar19, pDVar1 = pDVar19, pDVar19 < pDVar21; pDVar21 = pDVar21 + -1) {
          while (pDVar17 = pDVar20, pDVar1 = pDVar1 + 1, pDVar1 <= pDVar21) {
            bVar23 = pDVar17->InputSlot < pDVar1->InputSlot;
            if ((pDVar17->InputSlot == pDVar1->InputSlot) &&
               (bVar23 = pDVar17->AlignedByteOffset < pDVar1->AlignedByteOffset,
               pDVar17->AlignedByteOffset == pDVar1->AlignedByteOffset)) {
              bVar23 = pDVar17->SemanticIndex < pDVar1->SemanticIndex;
            }
            pDVar20 = pDVar1;
            if (!bVar23) {
              pDVar20 = pDVar17;
            }
          }
          pcVar4 = pDVar17->SemanticName;
          uVar9 = pDVar17->SemanticIndex;
          DVar10 = pDVar17->Format;
          uVar11 = pDVar17->InputSlot;
          uVar12 = pDVar17->AlignedByteOffset;
          DVar13 = pDVar17->InputSlotClass;
          uVar14 = pDVar17->InstanceDataStepRate;
          uVar5 = pDVar21->SemanticIndex;
          DVar6 = pDVar21->Format;
          pDVar17->SemanticName = pDVar21->SemanticName;
          pDVar17->SemanticIndex = uVar5;
          pDVar17->Format = DVar6;
          uVar5 = pDVar21->AlignedByteOffset;
          DVar7 = pDVar21->InputSlotClass;
          uVar8 = pDVar21->InstanceDataStepRate;
          pDVar17->InputSlot = pDVar21->InputSlot;
          pDVar17->AlignedByteOffset = uVar5;
          pDVar17->InputSlotClass = DVar7;
          pDVar17->InstanceDataStepRate = uVar8;
          pDVar21->SemanticName = pcVar4;
          pDVar21->SemanticIndex = uVar9;
          pDVar21->Format = DVar10;
          pDVar21->InputSlot = uVar11;
          pDVar21->AlignedByteOffset = uVar12;
          pDVar21->InputSlotClass = DVar13;
          pDVar21->InstanceDataStepRate = uVar14;
        }
        goto LAB_145a8a3b2;
      }
LAB_145a8a3a0:
      local_348 = pDVar1;
      HeapSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>
                (pDVar20,iVar15,param_3,param_4);
LAB_145a8a3b2:
      ppDVar22 = ppDVar22 + -3;
    } while (&local_338 <= ppDVar22);
  }
  return;
code_r0x000145a8a28c:
  bVar23 = pDVar19->InputSlot < pDVar16[1].InputSlot;
  if ((pDVar19->InputSlot == pDVar16[1].InputSlot) &&
     (bVar23 = pDVar19->AlignedByteOffset < pDVar16[1].AlignedByteOffset,
     pDVar19->AlignedByteOffset == pDVar16[1].AlignedByteOffset)) {
    bVar23 = pDVar19->SemanticIndex < pDVar16[1].SemanticIndex;
  }
  if (!bVar23) goto LAB_145a8a280;
LAB_145a8a2b0:
  do {
    pDVar18 = pDVar17;
    pDVar17 = pDVar18 + -1;
    if (pDVar17 <= pDVar19) break;
    bVar23 = pDVar18[-1].InputSlot < pDVar19->InputSlot;
    if ((pDVar18[-1].InputSlot == pDVar19->InputSlot) &&
       (bVar23 = pDVar18[-1].AlignedByteOffset < pDVar19->AlignedByteOffset,
       pDVar18[-1].AlignedByteOffset == pDVar19->AlignedByteOffset)) {
      bVar23 = pDVar18[-1].SemanticIndex < pDVar19->SemanticIndex;
    }
  } while (!bVar23);
  uVar2 = pDVar18[-1].SemanticIndex;
  uVar3 = pDVar18[-1].Format;
  if (pDVar20 <= pDVar17) {
    pcVar4 = pDVar20->SemanticName;
    uVar9 = pDVar16[1].SemanticIndex;
    DVar6 = pDVar16[1].Format;
    uVar11 = pDVar16[1].InputSlot;
    uVar12 = pDVar16[1].AlignedByteOffset;
    DVar13 = pDVar16[1].InputSlotClass;
    uVar14 = pDVar16[1].InstanceDataStepRate;
    pDVar20->SemanticName = pDVar17->SemanticName;
    pDVar16[1].SemanticIndex = uVar2;
    pDVar16[1].Format = uVar3;
    uVar5 = pDVar18[-1].AlignedByteOffset;
    DVar7 = pDVar18[-1].InputSlotClass;
    uVar8 = pDVar18[-1].InstanceDataStepRate;
    pDVar16[1].InputSlot = pDVar18[-1].InputSlot;
    pDVar16[1].AlignedByteOffset = uVar5;
    pDVar16[1].InputSlotClass = DVar7;
    pDVar16[1].InstanceDataStepRate = uVar8;
    pDVar17->SemanticName = pcVar4;
    pDVar18[-1].SemanticIndex = uVar9;
    pDVar18[-1].Format = DVar6;
    pDVar18[-1].InputSlot = uVar11;
    pDVar18[-1].AlignedByteOffset = uVar12;
    pDVar18[-1].InputSlotClass = DVar13;
    pDVar18[-1].InstanceDataStepRate = uVar14;
    goto LAB_145a8a280;
  }
  pcVar4 = pDVar19->SemanticName;
  uVar9 = pDVar19->SemanticIndex;
  DVar6 = pDVar19->Format;
  uVar11 = pDVar19->InputSlot;
  uVar12 = pDVar19->AlignedByteOffset;
  DVar13 = pDVar19->InputSlotClass;
  uVar14 = pDVar19->InstanceDataStepRate;
  pDVar19->SemanticName = pDVar17->SemanticName;
  pDVar19->SemanticIndex = uVar2;
  pDVar19->Format = uVar3;
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = pDVar18[-1].AlignedByteOffset;
  DVar7 = pDVar18[-1].InputSlotClass;
  uVar8 = pDVar18[-1].InstanceDataStepRate;
  pDVar19->InputSlot = pDVar18[-1].InputSlot;
  pDVar19->AlignedByteOffset = uVar5;
  pDVar19->InputSlotClass = DVar7;
  pDVar19->InstanceDataStepRate = uVar8;
  pDVar17->SemanticName = pcVar4;
  pDVar18[-1].SemanticIndex = uVar9;
  pDVar18[-1].Format = DVar6;
  pDVar18[-1].InputSlot = uVar11;
  pDVar18[-1].AlignedByteOffset = uVar12;
  pDVar18[-1].InputSlotClass = DVar13;
  pDVar18[-1].InstanceDataStepRate = uVar14;
  if ((longlong)((longlong)pDVar17 + (-0x20 - (longlong)pDVar19) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pDVar21 - (longlong)pDVar20 & 0xffffffffffffffe0U)) {
    if (pDVar20 < pDVar21) {
      *ppDVar22 = pDVar20;
      ppDVar22[1] = pDVar21;
      *(int *)(ppDVar22 + 2) = (int)local_348;
      ppDVar22 = ppDVar22 + 3;
    }
    if (pDVar17 <= pDVar19 + 1) goto LAB_145a8a3b2;
    pDVar21 = pDVar18 + -2;
    pDVar20 = pDVar19;
  }
  else {
    if (pDVar19 + 1 < pDVar17) {
      *ppDVar22 = pDVar19;
      ppDVar22[1] = pDVar18 + -2;
      *(int *)(ppDVar22 + 2) = (int)local_348;
      ppDVar22 = ppDVar22 + 3;
    }
    if (pDVar21 <= pDVar20) goto LAB_145a8a3b2;
  }
  iVar15 = (int)((longlong)pDVar21 - (longlong)pDVar20 >> 5) + 1;
  pDVar19 = pDVar20;
  if ((int)local_348 == 0) goto LAB_145a8a3a0;
  goto LAB_145a8a240;
}

// LogDREDData<FDred_1_1> @ 145a8a480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl LogDREDData<FDred_1_1>(ID3D12Device *param_1,bool param_2,ulong64 *param_3)

{
  longlong lVar1;
  int iVar2;
  D3D12_AUTO_BREADCRUMB_NODE *pDVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ForElementType<FSetElementId> FVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStackY_1f8 [32];
  FString local_1c0;
  int local_1b0;
  FString local_1a8;
  longlong *local_198;
  D3D12_AUTO_BREADCRUMB_NODE *pDStack_190;
  undefined1 local_188 [16];
  FString local_178;
  D3D12_AUTO_BREADCRUMB_NODE *local_168;
  ulong64 *local_160;
  ulong64 local_158;
  longlong local_150;
  longlong local_148;
  TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
  local_138;
  undefined1 local_e8 [64];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  FString local_98;
  FString local_88;
  FQueueData local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar9 = false;
  local_198 = (longlong *)0x0;
  pDStack_190 = (D3D12_AUTO_BREADCRUMB_NODE *)0x0;
  local_160 = param_3;
  iVar4 = (**(code **)*param_1)(0,&_GUID_98931d33_5ae8_4791_aa3c_1a73a2934e71);
  if ((-1 < iVar4) && (iVar4 = (**(code **)(*local_198 + 0x18))(local_198,&local_168), -1 < iVar4))
  {
    pDStack_190 = local_168;
  }
  if (local_198 == (longlong *)0x0) {
    bVar9 = false;
  }
  else {
    if (pDStack_190 == (D3D12_AUTO_BREADCRUMB_NODE *)0x0) {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_e8._32_8_ = 0;
      iVar4 = 0;
      local_e8._40_4_ = 0;
      local_e8._44_4_ = 0x80;
      local_e8._48_4_ = 0xffffffff;
      local_e8._52_4_ = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      FString::FString(&local_98,L"DRED");
      FString::FString(&local_88,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      local_138.Elements._32_8_ = 0;
      local_138.Elements._40_4_ = 0;
      local_138.Elements._44_4_ = 0x80;
      local_138.Elements._48_4_ = 0xffffffff;
      local_138.Elements._52_4_ = 0;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_138.HashSize = 0;
      for (pDVar3 = pDStack_190; pDVar3 != (D3D12_AUTO_BREADCRUMB_NODE *)0x0; pDVar3 = pDVar3->pNext
          ) {
        uVar12 = 0;
        if (pDVar3->pLastBreadcrumbValue == (uint *)0x0) break;
        uVar5 = *pDVar3->pLastBreadcrumbValue;
        if ((uVar5 != pDVar3->BreadcrumbCount) && (uVar5 != 0)) {
          bVar9 = true;
          if (1 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          local_1b0 = iVar4 + 1;
          if (0 < (int)(uVar5 - 100)) {
            uVar12 = (ulonglong)(uVar5 - 100);
          }
          iVar4 = pDVar3->BreadcrumbCount - 1;
          if ((int)(uVar5 + 0x14) < iVar4) {
            iVar4 = uVar5 + 0x14;
          }
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
            ::UnhashElements(&local_138);
            bVar14 = (longlong)local_138.Elements._8_8_ < 0;
            local_138.Elements._8_8_ = local_138.Elements._8_8_ & 0xffffffff00000000;
            if (bVar14) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)&local_138,0,
                         (int *)&local_138.Elements.field_0xc);
            }
            local_138.Elements._48_4_ = 0xffffffff;
            local_138.Elements._52_4_ = 0;
            local_138.Elements._40_4_ = 0;
          }
          for (lVar11 = (longlong)(int)uVar12; lVar11 <= iVar4; lVar11 = lVar11 + 1) {
            if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
              FVar7 = (ForElementType<FSetElementId>)&local_138.Hash;
              if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar7 = local_138.Hash.SecondaryData;
              }
              iVar2 = *(int *)((longlong)FVar7 + (local_138.HashSize - 1 & uVar12) * 4);
              while (iVar2 != -1) {
                lVar1 = local_138.Elements._0_8_ + (longlong)iVar2 * 0x18;
                if (*(int *)(local_138.Elements._0_8_ + (longlong)iVar2 * 0x18) == (int)uVar12) {
                  puVar10 = (undefined8 *)(lVar1 + 8);
                  if (lVar1 == 0) {
                    puVar10 = (undefined8 *)0x0;
                  }
                  if (puVar10 != (undefined8 *)0x0) {
                    FString::FString(&local_178," [");
                    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                    }
                    local_1c0.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
                    local_1c0.Data.ArrayNum = local_178.Data.ArrayNum;
                    local_1c0.Data.ArrayMax = local_178.Data.ArrayMax;
                    local_178.Data.ArrayNum = 0;
                    local_178.Data.ArrayMax = 0;
                    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    sVar6 = wcslen((wchar_t *)*puVar10);
                    FString::AppendChars(&local_1c0,(wchar_t *)*puVar10,(int)sVar6);
                    FString::AppendChars(&local_1c0,"]",1);
                    goto LAB_145a8a729;
                  }
                  break;
                }
                iVar2 = *(int *)(lVar1 + 0x10);
              }
            }
            FString::Reset(&local_1c0,0);
LAB_145a8a729:
            if (1 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            }
            uVar12 = (ulonglong)((int)uVar12 + 1);
          }
          CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>(&local_78,pDVar3);
          if (1 < local_78.BreadcrumbString.Data.ArrayNum) {
            FString::FString(&local_1a8,pDVar3->pCommandQueueDebugNameW);
            if (local_1a8.Data.ArrayNum == 0) {
              pwVar8 = L"";
              iVar4 = 0;
            }
            else {
              iVar4 = local_1a8.Data.ArrayNum + -1;
              pwVar8 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
            }
            uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
            iVar4 = TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                                *)local_e8,uVar5,&local_1a8);
            if ((iVar4 == -1) || ((longlong)iVar4 * 0x50 + local_e8._0_8_ == 0)) {
              local_188._0_8_ = &local_1a8;
              local_188._8_8_ = &local_78;
              TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&>_>
                        ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                          *)local_e8,(uint)&local_168,
                         (TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&> *)
                         (ulonglong)uVar5,(bool *)local_188);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
          }
          iVar4 = local_1b0;
          if (local_78.BreadcrumbString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.BreadcrumbString.Data.AllocatorInstance.Data);
            iVar4 = local_1b0;
          }
        }
      }
      if (local_e8._8_4_ != local_e8._52_4_) {
        FGenericCrashContext::SetGPUBreadcrumbs((FGPUBreadcrumbCrashData *)local_e8);
      }
      if ((iVar4 == 0) && (1 < (byte)LogD3D12RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      param_3 = local_160;
    }
    pwVar13 = L"false";
    pwVar8 = L"false";
    if (bVar9) {
      pwVar8 = L"true";
    }
    FString::FString(&local_1a8,pwVar8);
    FString::FString((FString *)local_188,L"RHI.DREDHasBreadcrumbData");
    FGenericCrashContext::SetEngineData((FString *)local_188,&local_1a8);
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    iVar4 = (**(code **)(*local_198 + 0x20))(local_198,&local_158);
    if ((iVar4 < 0) || (local_158 == 0)) {
      bVar9 = false;
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      *param_3 = local_158;
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_150 != 0) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        do {
          if (((!param_2) || (*(longlong *)(local_150 + 8) != 0)) && (1 < (byte)LogD3D12RHI._0_1_))
          {
            UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          local_150 = *(longlong *)(local_150 + 0x18);
        } while (local_150 != 0);
      }
      if (local_148 != 0) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        do {
          if (((!param_2) || (*(longlong *)(local_148 + 8) != 0)) && (1 < (byte)LogD3D12RHI._0_1_))
          {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u__Name___s__Type_15109dda8,
                       (FLogCategoryBase *)&LogD3D12RHI);
          }
          local_148 = *(longlong *)(local_148 + 0x18);
        } while (local_148 != 0);
      }
      bVar9 = true;
    }
    if (bVar9) {
      pwVar13 = L"true";
    }
    FString::FString(&local_1a8,pwVar13);
    FString::FString((FString *)local_188,L"RHI.DREDHasPageFaultData");
    FGenericCrashContext::SetEngineData((FString *)local_188,&local_1a8);
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    bVar9 = true;
  }
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))();
  }
  return bVar9;
}

// LogDREDData<FDred_1_2> @ 145a8ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl LogDREDData<FDred_1_2>(ID3D12Device *param_1,bool param_2,ulong64 *param_3)

{
  longlong lVar1;
  int iVar2;
  D3D12_AUTO_BREADCRUMB_NODE1 *pDVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  ForElementType<FSetElementId> FVar9;
  wchar_t *pwVar10;
  bool bVar11;
  D3D12_DRED_BREADCRUMB_CONTEXT *pDVar12;
  undefined8 *puVar13;
  D3D12_DRED_BREADCRUMB_CONTEXT *pDVar14;
  longlong lVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined1 auStackY_258 [32];
  FString local_220;
  int local_210;
  longlong *local_208;
  D3D12_AUTO_BREADCRUMB_NODE1 *pDStack_200;
  uint local_1f8 [2];
  FString local_1f0;
  FString local_1e0;
  TPairInitializer<int_&&,wchar_t_const_*_const_&> local_1d0;
  ulong64 *local_1c0;
  uint *local_1b8;
  wchar_t **local_1b0;
  FString *local_1a8;
  FQueueData *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  ulong64 local_158;
  longlong local_150;
  longlong local_148;
  TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
  local_138;
  undefined1 local_e8 [64];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  FString local_98;
  FString local_88;
  FQueueData local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar11 = false;
  local_208 = (longlong *)0x0;
  pDStack_200 = (D3D12_AUTO_BREADCRUMB_NODE1 *)0x0;
  local_1c0 = param_3;
  iVar6 = (**(code **)*param_1)(0,&_GUID_9727a022_cf1d_4dda_9eba_effa653fc506);
  if ((-1 < iVar6) &&
     (iVar6 = (**(code **)(*local_208 + 0x28))(local_208,&local_1d0.Value), -1 < iVar6)) {
    pDStack_200 = (D3D12_AUTO_BREADCRUMB_NODE1 *)local_1d0.Value;
  }
  if (local_208 == (longlong *)0x0) {
    bVar11 = false;
  }
  else {
    if (pDStack_200 == (D3D12_AUTO_BREADCRUMB_NODE1 *)0x0) {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_e8._32_8_ = 0;
      iVar6 = 0;
      local_e8._40_4_ = 0;
      local_e8._44_4_ = 0x80;
      local_e8._48_4_ = 0xffffffff;
      local_e8._52_4_ = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      FString::FString(&local_98,L"DRED");
      FString::FString(&local_88,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      local_138.Elements._32_8_ = 0;
      local_138.Elements._40_4_ = 0;
      local_138.Elements._44_4_ = 0x80;
      local_138.Elements._48_4_ = 0xffffffff;
      local_138.Elements._52_4_ = 0;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_138.HashSize = 0;
      for (pDVar3 = pDStack_200; pDVar3 != (D3D12_AUTO_BREADCRUMB_NODE1 *)0x0;
          pDVar3 = pDVar3->pNext) {
        uVar16 = 0;
        if (pDVar3->pLastBreadcrumbValue == (uint *)0x0) break;
        uVar7 = *pDVar3->pLastBreadcrumbValue;
        if ((uVar7 != pDVar3->BreadcrumbCount) && (uVar7 != 0)) {
          bVar11 = true;
          if (1 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          local_210 = iVar6 + 1;
          if (0 < (int)(uVar7 - 100)) {
            uVar16 = (ulonglong)(uVar7 - 100);
          }
          iVar6 = pDVar3->BreadcrumbCount - 1;
          if ((int)(uVar7 + 0x14) < iVar6) {
            iVar6 = uVar7 + 0x14;
          }
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
            ::UnhashElements(&local_138);
            bVar18 = (longlong)local_138.Elements._8_8_ < 0;
            local_138.Elements._8_8_ = local_138.Elements._8_8_ & 0xffffffff00000000;
            if (bVar18) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)&local_138,0,
                         (int *)&local_138.Elements.field_0xc);
            }
            local_138.Elements._48_4_ = 0xffffffff;
            local_138.Elements._52_4_ = 0;
            local_138.Elements._40_4_ = 0;
          }
          uVar7 = pDVar3->BreadcrumbContextsCount;
          pDVar12 = pDVar3->pBreadcrumbContexts;
          if (((int)uVar7 < 0) &&
             (bVar18 = FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar18)) {
            pcVar4 = (code *)swi(3);
            uVar5 = (*pcVar4)();
            return (bool)uVar5;
          }
          pDVar14 = pDVar12 + (int)uVar7;
          if (pDVar12 != pDVar14) {
            local_1b8 = local_1f8;
            do {
              local_1f8[0] = pDVar12->BreadcrumbIndex;
              local_1b0 = &pDVar12->pContextString;
              TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_&&,wchar_t_const_*_const_&>_>
                        (&local_138,&local_1d0,(bool *)&local_1b8);
              pDVar12 = pDVar12 + 1;
            } while (pDVar12 != pDVar14);
          }
          for (lVar15 = (longlong)(int)uVar16; lVar15 <= iVar6; lVar15 = lVar15 + 1) {
            if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
              FVar9 = (ForElementType<FSetElementId>)&local_138.Hash;
              if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar9 = local_138.Hash.SecondaryData;
              }
              iVar2 = *(int *)((longlong)FVar9 + (local_138.HashSize - 1 & uVar16) * 4);
              while (iVar2 != -1) {
                lVar1 = local_138.Elements._0_8_ + (longlong)iVar2 * 0x18;
                if (*(int *)(local_138.Elements._0_8_ + (longlong)iVar2 * 0x18) == (int)uVar16) {
                  puVar13 = (undefined8 *)(lVar1 + 8);
                  if (lVar1 == 0) {
                    puVar13 = (undefined8 *)0x0;
                  }
                  if (puVar13 != (undefined8 *)0x0) {
                    FString::FString(&local_1f0," [");
                    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_220.Data.AllocatorInstance.Data);
                    }
                    local_220.Data.AllocatorInstance.Data = local_1f0.Data.AllocatorInstance.Data;
                    local_220.Data.ArrayNum = local_1f0.Data.ArrayNum;
                    local_220.Data.ArrayMax = local_1f0.Data.ArrayMax;
                    local_1f0.Data.ArrayNum = 0;
                    local_1f0.Data.ArrayMax = 0;
                    local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    sVar8 = wcslen((wchar_t *)*puVar13);
                    FString::AppendChars(&local_220,(wchar_t *)*puVar13,(int)sVar8);
                    FString::AppendChars(&local_220,"]",1);
                    goto LAB_145a8af99;
                  }
                  break;
                }
                iVar2 = *(int *)(lVar1 + 0x10);
              }
            }
            FString::Reset(&local_220,0);
LAB_145a8af99:
            if (1 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            }
            uVar16 = (ulonglong)((int)uVar16 + 1);
          }
          CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>(&local_78,pDVar3);
          if (1 < local_78.BreadcrumbString.Data.ArrayNum) {
            FString::FString(&local_1e0,pDVar3->pCommandQueueDebugNameW);
            if (local_1e0.Data.ArrayNum == 0) {
              pwVar10 = L"";
              iVar6 = 0;
            }
            else {
              iVar6 = local_1e0.Data.ArrayNum + -1;
              pwVar10 = (wchar_t *)local_1e0.Data.AllocatorInstance.Data;
            }
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
            iVar6 = TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                                *)local_e8,uVar7,&local_1e0);
            if ((iVar6 == -1) || ((longlong)iVar6 * 0x50 + local_e8._0_8_ == 0)) {
              local_1a8 = &local_1e0;
              local_1a0 = &local_78;
              TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&>_>
                        ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                          *)local_e8,(int)&local_1d0 + 4,
                         (TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&> *)
                         (ulonglong)uVar7,(bool *)&local_1a8);
            }
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
          }
          iVar6 = local_210;
          if (local_78.BreadcrumbString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.BreadcrumbString.Data.AllocatorInstance.Data);
            iVar6 = local_210;
          }
        }
      }
      if (local_e8._8_4_ != local_e8._52_4_) {
        FGenericCrashContext::SetGPUBreadcrumbs((FGPUBreadcrumbCrashData *)local_e8);
      }
      if ((iVar6 == 0) && (1 < (byte)LogD3D12RHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      param_3 = local_1c0;
    }
    pwVar17 = L"false";
    pwVar10 = L"false";
    if (bVar11) {
      pwVar10 = L"true";
    }
    FString::FString(&local_188,pwVar10);
    FString::FString(&local_198,L"RHI.DREDHasBreadcrumbData");
    FGenericCrashContext::SetEngineData(&local_198,&local_188);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    iVar6 = (**(code **)(*local_208 + 0x20))(local_208,&local_158);
    if ((iVar6 < 0) || (local_158 == 0)) {
      bVar11 = false;
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      *param_3 = local_158;
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_150 != 0) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        do {
          if (((!param_2) || (*(longlong *)(local_150 + 8) != 0)) && (1 < (byte)LogD3D12RHI._0_1_))
          {
            UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          local_150 = *(longlong *)(local_150 + 0x18);
        } while (local_150 != 0);
      }
      if (local_148 != 0) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        do {
          if (((!param_2) || (*(longlong *)(local_148 + 8) != 0)) && (1 < (byte)LogD3D12RHI._0_1_))
          {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u__Name___s__Type_15109db30,
                       (FLogCategoryBase *)&LogD3D12RHI);
          }
          local_148 = *(longlong *)(local_148 + 0x18);
        } while (local_148 != 0);
      }
      bVar11 = true;
    }
    if (bVar11) {
      pwVar17 = L"true";
    }
    FString::FString(&local_168,pwVar17);
    FString::FString(&local_178,L"RHI.DREDHasPageFaultData");
    FGenericCrashContext::SetEngineData(&local_178,&local_168);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    bVar11 = true;
  }
  if (local_208 != (longlong *)0x0) {
    (**(code **)(*local_208 + 0x10))();
  }
  return bVar11;
}

// ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext> @ 145a8b4d0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>
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
LAB_145a8b634:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a8b634;
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
  iVar17 = *(int *)(param_7 + 8);
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((*(int *)(param_7 + 8) < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>::operator()
                  (param_4,*(FTaskContext **)param_7,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_145a8ba5f;
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
    if ((param_6 & BackgroundPriority) != None) goto LAB_145a8b7ae;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_145a8b7ae:
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
          ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext>'
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
    *(TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = ___ae21ee466d92934cf23b039872f10433_
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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
    ___a834c30b0d341b72fe7b406991e1a185_
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
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
          ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
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
      ___a834c30b0d341b72fe7b406991e1a185_
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
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
LAB_145a8ba5f:
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

// ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext> @ 145a8bad0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1>_conflict *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>
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
LAB_145a8bc34:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a8bc34;
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
  iVar17 = *(int *)(param_7 + 8);
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((*(int *)(param_7 + 8) < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>::operator()
                  (param_4,*(FTaskContext **)param_7,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_145a8c05f;
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
    if ((param_6 & BackgroundPriority) != None) goto LAB_145a8bdae;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_145a8bdae:
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
          ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(<lambda_1>_conflict **)((longlong)FVar14 + 0x60) = param_4;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = ___7315bebb5964f325c3324f92a017f06a_
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
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
          ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
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
      ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
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
LAB_145a8c05f:
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

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>_> @ 145a8c1a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>_> @ 145a8c260

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReleaseBackBufferResource<FD3D12Texture,FD3D12Texture> @ 145a8cda0

/* WARNING: Removing unreachable block (ram,0x000145a8ce5c) */
/* WARNING: Removing unreachable block (ram,0x000145a8ceb2) */
/* WARNING: Removing unreachable block (ram,0x000145a8ce6a) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ReleaseBackBufferResource<FD3D12Texture,FD3D12Texture>
          (TRefCountPtr<FD3D12Texture> *param_1,wchar_t *param_2,uint param_3)

{
  FD3D12Texture *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000084;
  longlong *plVar11;
  wchar_t *pwVar10;
  
  pFVar1 = param_1->Reference;
  pwVar10 = (wchar_t *)0x0;
  if (pFVar1 != (FD3D12Texture *)0x0) {
    iVar6 = (**(code **)(pFVar1->_padding_ + 0x18))
                      (&pFVar1->_padding_,param_2,CONCAT44(in_register_00000084,param_3));
    if ((iVar6 != 1) && (4 < (byte)LogD3D12RHI._0_1_)) {
      (**(code **)(param_1->Reference->_padding_ + 0x18))();
      UE::Logging::Private::BasicLog<5>
                (&`bool___cdecl_ReleaseBackBufferResource<FD3D12Texture,FD3D12Texture>(TRefCountPtr<FD3D12Texture>&___ptr64,wchar_t_const*___ptr64,unsigned_int)'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    iVar6 = (**(code **)(param_1->Reference->_padding_ + 0x18))();
    if ((iVar6 != 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Resource->GetRefCount() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                           ,0x116,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar8 = 0;
    plVar11 = &param_1->Reference->_padding_;
    param_2 = pwVar10;
    if (plVar11 != (longlong *)0x0) {
      uVar2 = (uint)*plVar11;
      uVar9 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      uVar7 = 0x20;
      if (uVar2 != 0) {
        uVar7 = uVar9;
      }
      pwVar10 = (wchar_t *)(ulonglong)uVar2;
      uVar8 = (ulonglong)uVar7;
      param_2 = *(wchar_t **)
                 ((param_1->Reference->RenderTargetViews).AllocatorInstance.InlineData +
                 (ulonglong)uVar7 * 8 + -0x58);
    }
    for (; param_2 != (wchar_t *)0x0; param_2 = *(wchar_t **)(param_2 + uVar8 * 4 + 0x100)) {
      *(byte *)(*(longlong *)(param_2 + 200) + 0xab) =
           *(byte *)(*(longlong *)(param_2 + 200) + 0xab) & 0xf7;
      uVar9 = (uint)pwVar10 & ~(1 << ((byte)uVar8 & 0x1f));
      pwVar10 = (wchar_t *)(ulonglong)uVar9;
      uVar2 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      if (uVar9 == 0) break;
      uVar8 = (ulonglong)uVar2;
    }
  }
  if (param_1->Reference != (FD3D12Texture *)0x0) {
    plVar11 = &param_1->Reference->_padding_;
    param_1->Reference = (FD3D12Texture *)0x0;
    (**(code **)(*plVar11 + 0x10))(plVar11,param_2);
  }
  if ((param_1->Reference != (FD3D12Texture *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Resource == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                         ,0x11f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return pFVar1 != (FD3D12Texture *)0x0;
}

// _Construct<1,wchar_t_const_*> @ 145a8d7d0

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Construct<1,wchar_t_const_*>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  wchar_t *_Dst;
  ulonglong uVar2;
  
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  if (param_2 < 8) {
    (this->_Mypair)._Myval2._Mysize = param_2;
    (this->_Mypair)._Myval2._Myres = 7;
    memcpy(this,param_1,param_2 * 2);
    (this->_Mypair)._Myval2._Bx._Buf[param_2] = L'\0';
  }
  else {
    uVar1 = param_2 | 7;
    if (uVar1 < 0x7fffffffffffffff) {
      if (uVar1 < 10) {
        uVar1 = 10;
      }
      uVar2 = uVar1 + 1;
      if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    else {
      uVar2 = 0x7fffffffffffffff;
      uVar1 = 0x7ffffffffffffffe;
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar2 * 2);
    (this->_Mypair)._Myval2._Mysize = param_2;
    (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
    (this->_Mypair)._Myval2._Myres = uVar1;
    memcpy(_Dst,param_1,param_2 * 2);
    _Dst[param_2] = L'\0';
  }
  return;
}

// _Copy_memmove<D3D12_STATE_SUBOBJECT_const_*_*,D3D12_STATE_SUBOBJECT_const_*_*> @ 145a8d8c0

D3D12_STATE_SUBOBJECT ** __cdecl
std::_Copy_memmove<D3D12_STATE_SUBOBJECT_const_*_*,D3D12_STATE_SUBOBJECT_const_*_*>
          (D3D12_STATE_SUBOBJECT **param_1,D3D12_STATE_SUBOBJECT **param_2,
          D3D12_STATE_SUBOBJECT **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (D3D12_STATE_SUBOBJECT **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<wchar_t_const_*_*,wchar_t_const_*_*> @ 145a8d900

wchar_t ** __cdecl
std::_Copy_memmove<wchar_t_const_*_*,wchar_t_const_*_*>
          (wchar_t **param_1,wchar_t **param_2,wchar_t **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<D3D12_EXPORT_DESC_*,D3D12_EXPORT_DESC_*> @ 145a8d940

D3D12_EXPORT_DESC * __cdecl
std::_Copy_memmove<D3D12_EXPORT_DESC_*,D3D12_EXPORT_DESC_*>
          (D3D12_EXPORT_DESC *param_1,D3D12_EXPORT_DESC *param_2,D3D12_EXPORT_DESC *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (D3D12_EXPORT_DESC *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<D3D12_NODE_*,D3D12_NODE_*> @ 145a8d980

D3D12_NODE * __cdecl
std::_Copy_memmove<D3D12_NODE_*,D3D12_NODE_*>
          (D3D12_NODE *param_1,D3D12_NODE *param_2,D3D12_NODE *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (D3D12_NODE *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<D3D12_NODE_ID_*,D3D12_NODE_ID_*> @ 145a8d9c0

D3D12_NODE_ID * __cdecl
std::_Copy_memmove<D3D12_NODE_ID_*,D3D12_NODE_ID_*>
          (D3D12_NODE_ID *param_1,D3D12_NODE_ID *param_2,D3D12_NODE_ID *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (D3D12_NODE_ID *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<D3D12_STATE_SUBOBJECT_*,D3D12_STATE_SUBOBJECT_*> @ 145a8da00

D3D12_STATE_SUBOBJECT * __cdecl
std::_Copy_memmove<D3D12_STATE_SUBOBJECT_*,D3D12_STATE_SUBOBJECT_*>
          (D3D12_STATE_SUBOBJECT *param_1,D3D12_STATE_SUBOBJECT *param_2,
          D3D12_STATE_SUBOBJECT *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (D3D12_STATE_SUBOBJECT *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<D3D12_STATE_SUBOBJECT_const_*_*> @ 145a8da40

D3D12_STATE_SUBOBJECT ** __cdecl
std::_Copy_memmove_tail<D3D12_STATE_SUBOBJECT_const_*_*>
          (char *param_1,D3D12_STATE_SUBOBJECT **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (D3D12_STATE_SUBOBJECT **)((longlong)param_2 + param_3);
}

// _Copy_memmove_tail<wchar_t_const_*_*> @ 145a8da70

wchar_t ** __cdecl
std::_Copy_memmove_tail<wchar_t_const_*_*>
          (char *param_1,wchar_t **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (wchar_t **)((longlong)param_2 + param_3);
}

// _Copy_memmove_tail<D3D12_EXPORT_DESC_*> @ 145a8daa0

D3D12_EXPORT_DESC * __cdecl
std::_Copy_memmove_tail<D3D12_EXPORT_DESC_*>
          (char *param_1,D3D12_EXPORT_DESC *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (D3D12_EXPORT_DESC *)((longlong)&param_2->Name + param_3);
}

// _Copy_memmove_tail<D3D12_NODE_*> @ 145a8dad0

D3D12_NODE * __cdecl
std::_Copy_memmove_tail<D3D12_NODE_*>
          (char *param_1,D3D12_NODE *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (D3D12_NODE *)((longlong)&param_2->NodeType + param_3);
}

// _Copy_memmove_tail<D3D12_NODE_ID_*> @ 145a8db00

D3D12_NODE_ID * __cdecl
std::_Copy_memmove_tail<D3D12_NODE_ID_*>
          (char *param_1,D3D12_NODE_ID *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (D3D12_NODE_ID *)((longlong)&param_2->Name + param_3);
}

// _Copy_memmove_tail<D3D12_STATE_SUBOBJECT_*> @ 145a8db30

D3D12_STATE_SUBOBJECT * __cdecl
std::_Copy_memmove_tail<D3D12_STATE_SUBOBJECT_*>
          (char *param_1,D3D12_STATE_SUBOBJECT *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (D3D12_STATE_SUBOBJECT *)((longlong)&param_2->Type + param_3);
}

// _Emplace_reallocate<CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES_*_&> @ 145a8db60

unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_> *
__thiscall
std::
vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
::_Emplace_reallocate<CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES_*_&>
          (vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
           *this,unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                 *param_1,CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES **param_2)

{
  ulonglong uVar1;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar2;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar3;
  CD3DX12_NODE_HELPER_BASE *pCVar4;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar5;
  longlong lVar6;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar7;
  ulonglong uVar8;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  _Reallocation_guard local_48;
  
  puVar2 = (this->_Mypair)._Myval2._Myfirst;
  lVar10 = (longlong)param_1 - (longlong)puVar2 >> 3;
  lVar6 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar2 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar8 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar2 >> 3;
  uVar1 = lVar6 + 1;
  if (0x1fffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar11 = 0x1fffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x1fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  puVar7 = _Allocate<16,std::_Default_allocate_traits>(uVar11 * 8);
  puVar7[lVar10]._Mypair._Myval2 = (CD3DX12_NODE_HELPER_BASE *)*param_2;
  puVar3 = (this->_Mypair)._Myval2._Mylast;
  puVar9 = (this->_Mypair)._Myval2._Myfirst;
  puVar2 = puVar7 + lVar10;
  local_48._Constructed_last = puVar2 + 1;
  puVar5 = puVar7;
  if (param_1 == puVar3) {
    for (; local_48._Constructed_first = puVar2, puVar9 != puVar3; puVar9 = puVar9 + 1) {
      pCVar4 = (puVar9->_Mypair)._Myval2;
      (puVar9->_Mypair)._Myval2 = (CD3DX12_NODE_HELPER_BASE *)0x0;
      (puVar5->_Mypair)._Myval2 = pCVar4;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    for (; puVar9 != param_1; puVar9 = puVar9 + 1) {
      pCVar4 = (puVar9->_Mypair)._Myval2;
      (puVar9->_Mypair)._Myval2 = (CD3DX12_NODE_HELPER_BASE *)0x0;
      (puVar5->_Mypair)._Myval2 = pCVar4;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (this->_Mypair)._Myval2._Mylast;
    puVar9 = local_48._Constructed_last;
    for (; local_48._Constructed_first = puVar7, param_1 != puVar3; param_1 = param_1 + 1) {
      pCVar4 = (param_1->_Mypair)._Myval2;
      (param_1->_Mypair)._Myval2 = (CD3DX12_NODE_HELPER_BASE *)0x0;
      (puVar9->_Mypair)._Myval2 = pCVar4;
      puVar9 = puVar9 + 1;
    }
  }
  local_48._New_begin =
       (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
        *)0x0;
  local_48._Al = (allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>
                  *)this;
  local_48._New_capacity = uVar11;
  _Change_array(this,puVar7,uVar1,uVar11);
  _Reallocation_guard::~_Reallocation_guard(&local_48);
  return puVar2;
}

// _Emplace_reallocate<D3D12_EXPORT_DESC_const_&> @ 145a8dd10

D3D12_EXPORT_DESC * __thiscall
std::vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>::
_Emplace_reallocate<D3D12_EXPORT_DESC_const_&>
          (vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_> *this,
          D3D12_EXPORT_DESC *param_1,D3D12_EXPORT_DESC *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  D3D12_EXPORT_DESC *pDVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  D3D12_EXPORT_DESC *_Dst;
  ulonglong uVar7;
  D3D12_EXPORT_DESC *pDVar8;
  longlong lVar9;
  ulong64 uVar10;
  size_t _Size;
  D3D12_EXPORT_DESC *pDVar11;
  
  pDVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar9 = ((longlong)param_1 - (longlong)pDVar3) / 6 +
          ((longlong)param_1 - (longlong)pDVar3 >> 0x3f);
  lVar4 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pDVar3) / 0x18;
  if (lVar4 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar3) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar7 * 0x18);
  pwVar5 = param_2->ExportToRename;
  pDVar3 = _Dst + ((lVar9 >> 2) - (lVar9 >> 0x3f));
  pDVar3->Name = param_2->Name;
  pDVar3->ExportToRename = pwVar5;
  uVar6 = *(undefined4 *)&param_2->field_0x14;
  pDVar3->Flags = param_2->Flags;
  *(undefined4 *)&pDVar3->field_0x14 = uVar6;
  pDVar8 = (this->_Mypair)._Myval2._Mylast;
  pDVar11 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pDVar8) {
    _Size = (longlong)pDVar8 - (longlong)pDVar11;
    pDVar8 = _Dst;
    param_1 = pDVar11;
  }
  else {
    memmove(_Dst,pDVar11,(longlong)param_1 - (longlong)pDVar11);
    pDVar8 = pDVar3 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pDVar8,param_1,_Size);
  pDVar8 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar8 != (D3D12_EXPORT_DESC *)0x0) {
    uVar10 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar8) / 0x18) * 0x18;
    pDVar11 = pDVar8;
    if (0xfff < uVar10) {
      pDVar11 = *(D3D12_EXPORT_DESC **)&pDVar8[-1].Flags;
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar8 + (-8 - (longlong)pDVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar11,uVar10);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar7;
  return pDVar3;
}

// _Emplace_reallocate<wchar_t_const_*> @ 145a8df00

wchar_t ** __thiscall
std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::_Emplace_reallocate<wchar_t_const_*>
          (vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_> *this,wchar_t **param_1,
          wchar_t **param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  wchar_t **_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  ulong64 uVar7;
  longlong lVar8;
  size_t _Size;
  
  ppwVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)ppwVar5 >> 3;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)ppwVar5 >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppwVar5 >> 3;
  uVar1 = lVar2 + 1;
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 8);
  _Dst[lVar8] = *param_2;
  ppwVar5 = (this->_Mypair)._Myval2._Mylast;
  ppwVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == ppwVar5) {
    _Size = (longlong)ppwVar5 - (longlong)ppwVar6;
    ppwVar5 = _Dst;
    param_1 = ppwVar6;
  }
  else {
    memmove(_Dst,ppwVar6,(longlong)param_1 - (longlong)ppwVar6);
    ppwVar5 = _Dst + lVar8 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(ppwVar5,param_1,_Size);
  ppwVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (ppwVar5 != (wchar_t **)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppwVar5 & 0xfffffffffffffff8;
    ppwVar6 = ppwVar5;
    if (0xfff < uVar7) {
      ppwVar6 = (wchar_t **)ppwVar5[-1];
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppwVar5 + (-8 - (longlong)ppwVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppwVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar8;
}

// _Emplace_reallocate<D3D12_NODE> @ 145a8e080

/* WARNING: Type propagation algorithm not settling */

D3D12_NODE * __thiscall
std::vector<D3D12_NODE,std::allocator<D3D12_NODE>_>::_Emplace_reallocate<D3D12_NODE>
          (vector<D3D12_NODE,std::allocator<D3D12_NODE>_> *this,D3D12_NODE *param_1,
          D3D12_NODE *param_2)

{
  wchar_t *pwVar1;
  D3D12_SHADER_NODE_u_16 DVar2;
  undefined4 uVar3;
  D3D12_NODE *_Dst;
  ulonglong uVar4;
  D3D12_NODE *pDVar5;
  D3D12_NODE *pDVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  size_t _Size;
  ulonglong uVar10;
  D3D12_NODE *pDVar11;
  
  pDVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pDVar5 >> 5;
  if (lVar8 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar9 = lVar8 + 1;
  uVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar5 >> 5;
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar10 = 0x7ffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar9;
    if (uVar9 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0x7ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x20);
  uVar3 = *(undefined4 *)&param_2->field_0x4;
  pwVar1 = (param_2->Shader).Shader;
  pDVar11 = (D3D12_NODE *)
            ((longlong)&_Dst->NodeType +
            ((longlong)param_1 - (longlong)pDVar5 & 0xffffffffffffffe0U));
  pDVar11->NodeType = param_2->NodeType;
  *(undefined4 *)&pDVar11->field_0x4 = uVar3;
  (pDVar11->Shader).Shader = pwVar1;
  uVar3 = *(undefined4 *)&(param_2->Shader).field_0xc;
  DVar2 = (param_2->Shader).field2_0x10;
  (pDVar11->Shader).OverridesType = (param_2->Shader).OverridesType;
  *(undefined4 *)&(pDVar11->Shader).field_0xc = uVar3;
  (pDVar11->Shader).field2_0x10 = DVar2;
  pDVar5 = (this->_Mypair)._Myval2._Mylast;
  pDVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pDVar5) {
    _Size = (longlong)pDVar5 - (longlong)pDVar6;
    pDVar5 = _Dst;
    param_1 = pDVar6;
  }
  else {
    memmove(_Dst,pDVar6,(longlong)param_1 - (longlong)pDVar6);
    pDVar5 = pDVar11 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pDVar5,param_1,_Size);
  pDVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar5 != (D3D12_NODE *)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar5 & 0xffffffffffffffe0;
    pDVar6 = pDVar5;
    if (0xfff < uVar7) {
      pDVar6 = (D3D12_NODE *)
               pDVar5[0xffffffffffffffff].Shader.field2_0x10.pBroadcastingLaunchOverrides;
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar5 + (-8 - (longlong)pDVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar9;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar10;
  return pDVar11;
}

// _Emplace_reallocate<D3D12_NODE_ID> @ 145a8e200

D3D12_NODE_ID * __thiscall
std::vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>::_Emplace_reallocate<D3D12_NODE_ID>
          (vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_> *this,D3D12_NODE_ID *param_1,
          D3D12_NODE_ID *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  D3D12_NODE_ID *_Dst;
  ulonglong uVar3;
  D3D12_NODE_ID *pDVar4;
  D3D12_NODE_ID *pDVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  size_t _Size;
  ulonglong uVar9;
  D3D12_NODE_ID *pDVar10;
  
  pDVar4 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pDVar4 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar8 = lVar7 + 1;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar4 >> 4;
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar9 = 0xfffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar8;
    if (uVar8 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0xfffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x10);
  uVar1 = param_2->ArrayIndex;
  uVar2 = *(undefined4 *)&param_2->field_0xc;
  pDVar10 = (D3D12_NODE_ID *)
            ((longlong)&_Dst->Name + ((longlong)param_1 - (longlong)pDVar4 & 0xfffffffffffffff0U));
  pDVar10->Name = param_2->Name;
  pDVar10->ArrayIndex = uVar1;
  *(undefined4 *)&pDVar10->field_0xc = uVar2;
  pDVar4 = (this->_Mypair)._Myval2._Mylast;
  pDVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pDVar4) {
    _Size = (longlong)pDVar4 - (longlong)pDVar5;
    pDVar4 = _Dst;
    param_1 = pDVar5;
  }
  else {
    memmove(_Dst,pDVar5,(longlong)param_1 - (longlong)pDVar5);
    pDVar4 = pDVar10 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pDVar4,param_1,_Size);
  pDVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar4 != (D3D12_NODE_ID *)0x0) {
    uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar4 & 0xfffffffffffffff0;
    pDVar5 = pDVar4;
    if (0xfff < uVar6) {
      pDVar5 = *(D3D12_NODE_ID **)&pDVar4[-1].ArrayIndex;
      uVar6 = uVar6 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar4 + (-8 - (longlong)pDVar5))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar5,uVar6);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar8;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar9;
  return pDVar10;
}

// _Zero_range<D3D12_STATE_SUBOBJECT_const_*_*> @ 145a8e380

D3D12_STATE_SUBOBJECT ** __cdecl
std::_Zero_range<D3D12_STATE_SUBOBJECT_const_*_*>
          (D3D12_STATE_SUBOBJECT **param_1,D3D12_STATE_SUBOBJECT **param_2)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// emplace_back<CD3DX12_DXIL_LIBRARY_SUBOBJECT_*_&> @ 145a8e3b0

unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
* __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::emplace_back<CD3DX12_DXIL_LIBRARY_SUBOBJECT_*_&>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this,CD3DX12_DXIL_LIBRARY_SUBOBJECT **param_1)

{
  ulong64 *puVar1;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var4;
  unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
  *extraout_RAX;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    p_Var4 = ::operator_new(0x18);
    (p_Var4->_Myval)._Mypair._Myval2 = (SUBOBJECT_HELPER_BASE *)*param_1;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var4->_Next = p_Var2;
    p_Var4->_Prev = p_Var3;
    p_Var2->_Prev = p_Var4;
    p_Var3->_Next = p_Var4;
    return &p_Var4->_Myval;
  }
  _Xlength_error("list too long");
  return extraout_RAX;
}

// emplace_back<CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT_*_&> @ 145a8e430

unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
* __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::emplace_back<CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT_*_&>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this,CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT **param_1)

{
  ulong64 *puVar1;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var4;
  unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
  *extraout_RAX;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    p_Var4 = ::operator_new(0x18);
    (p_Var4->_Myval)._Mypair._Myval2 = (SUBOBJECT_HELPER_BASE *)*param_1;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var4->_Next = p_Var2;
    p_Var4->_Prev = p_Var3;
    p_Var2->_Prev = p_Var4;
    p_Var3->_Next = p_Var4;
    return &p_Var4->_Myval;
  }
  _Xlength_error("list too long");
  return extraout_RAX;
}

// emplace_back<CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT_*_&> @ 145a8e4b0

unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
* __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::emplace_back<CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT_*_&>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this,CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT **param_1)

{
  ulong64 *puVar1;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var4;
  unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
  *extraout_RAX;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    p_Var4 = ::operator_new(0x18);
    (p_Var4->_Myval)._Mypair._Myval2 = (SUBOBJECT_HELPER_BASE *)*param_1;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var4->_Next = p_Var2;
    p_Var4->_Prev = p_Var3;
    p_Var2->_Prev = p_Var4;
    p_Var3->_Next = p_Var4;
    return &p_Var4->_Myval;
  }
  _Xlength_error("list too long");
  return extraout_RAX;
}

// emplace_back<CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT_*_&> @ 145a8e530

unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
* __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::emplace_back<CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT_*_&>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this,CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT **param_1)

{
  ulong64 *puVar1;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var4;
  unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
  *extraout_RAX;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    p_Var4 = ::operator_new(0x18);
    (p_Var4->_Myval)._Mypair._Myval2 = (SUBOBJECT_HELPER_BASE *)*param_1;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var4->_Next = p_Var2;
    p_Var4->_Prev = p_Var3;
    p_Var2->_Prev = p_Var4;
    p_Var3->_Next = p_Var4;
    return &p_Var4->_Myval;
  }
  _Xlength_error("list too long");
  return extraout_RAX;
}

// emplace_back<CD3DX12_WORK_GRAPH_SUBOBJECT_*_&> @ 145a8e5b0

unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
* __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::emplace_back<CD3DX12_WORK_GRAPH_SUBOBJECT_*_&>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this,CD3DX12_WORK_GRAPH_SUBOBJECT **param_1)

{
  ulong64 *puVar1;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var4;
  unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>
  *extraout_RAX;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    p_Var4 = ::operator_new(0x18);
    (p_Var4->_Myval)._Mypair._Myval2 = (SUBOBJECT_HELPER_BASE *)*param_1;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var4->_Next = p_Var2;
    p_Var4->_Prev = p_Var3;
    p_Var2->_Prev = p_Var4;
    p_Var3->_Next = p_Var4;
    return &p_Var4->_Myval;
  }
  _Xlength_error("list too long");
  return extraout_RAX;
}

// CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT> @ 145a8e630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT> * __thiscall
CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>::
CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>
          (CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  uVar5 = _UNK_151084ee8;
  uVar4 = ___xmm_00000001000000020000000000000000;
  uVar3 = _UNK_151084ed8;
  uVar2 = ___xmm_00000001000000010000000200000001;
  *(undefined4 *)&(this->pssInner).field_0x4 = 0;
  *(undefined8 *)this = 8;
  *(undefined8 *)&(this->pssInner).field_0x8 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x10 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0x30 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x38 = uVar5;
  uStack_14 = CONCAT31(uStack_14._1_3_,0xf);
  uVar1 = CONCAT44(uStack_14,4);
  *(undefined8 *)&(this->pssInner).field_0x58 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x60 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0x80 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x88 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0xa8 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0xb0 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0xd0 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0xd8 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0xf8 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x100 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0x120 = uVar4;
  *(undefined8 *)&(this->pssInner).field_0x128 = uVar5;
  *(undefined8 *)&(this->pssInner).field_0x18 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x20 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x40 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x48 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x68 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x70 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x90 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x98 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0xb8 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0xc0 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0xe0 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0xe8 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x108 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x110 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x130 = uVar2;
  *(undefined8 *)&(this->pssInner).field_0x138 = uVar3;
  *(undefined8 *)&(this->pssInner).field_0x28 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0x50 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0x78 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0xa0 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0xc8 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0xf0 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0x118 = uVar1;
  *(undefined8 *)&(this->pssInner).field_0x140 = uVar1;
  return this;
}

// FThreadSafeStaticStat<`FD3D12PipelineStateWorker::GetStatId'::__l2::FStat_FD3D12PipelineStateWorker> @ 145a8e710

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const_::_2_::FStat_FD3D12PipelineStateWorker>
* __thiscall
FThreadSafeStaticStat<`FD3D12PipelineStateWorker::GetStatId'::__l2::FStat_FD3D12PipelineStateWorker>
::
FThreadSafeStaticStat<_FD3D12PipelineStateWorker::GetStatId_::__l2::FStat_FD3D12PipelineStateWorker>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FD3D12PipelineStateWorker");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FD3D12PipelineStateWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 145a8e7a0

StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
* __thiscall
CD3DX12_STATE_OBJECT_DESC::
StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
::
StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  
  (this->m_Strings)._Mypair._Myval2._Myhead =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)0x0;
  (this->m_Strings)._Mypair._Myval2._Mysize = 0;
  p_Var1 = ::operator_new(0x30);
  p_Var1->_Next = p_Var1;
  p_Var1->_Prev = p_Var1;
  (this->m_Strings)._Mypair._Myval2._Myhead = p_Var1;
  return this;
}

// CD3DX12_NODE_OUTPUT_OVERRIDES @ 145a8e7e0

CD3DX12_NODE_OUTPUT_OVERRIDES * __thiscall
CD3DX12_NODE_OUTPUT_OVERRIDES::CD3DX12_NODE_OUTPUT_OVERRIDES
          (CD3DX12_NODE_OUTPUT_OVERRIDES *this,D3D12_NODE_OUTPUT_OVERRIDES **param_1,uint *param_2)

{
  D3D12_NODE_OUTPUT_OVERRIDES *pDVar1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  
  (this->m_Desc)._Mypair._Myval2._Myfirst = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
  (this->m_Desc)._Mypair._Myval2._Mylast = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
  (this->m_Desc)._Mypair._Myval2._Myend = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
  (this->m_Strings).m_Strings._Mypair._Myval2._Myhead =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)0x0;
  (this->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
  p_Var2 = ::operator_new(0x30);
  p_Var2->_Next = p_Var2;
  p_Var2->_Prev = p_Var2;
  (this->m_Strings).m_Strings._Mypair._Myval2._Myhead = p_Var2;
  (this->m_UINTs)._Mypair._Myval2._Myhead = (_Flist_node<unsigned_int,void_*> *)0x0;
  (this->m_NodeIDs)._Mypair._Myval2._Myhead = (_Flist_node<D3D12_NODE_ID,void_*> *)0x0;
  pDVar1 = (this->m_Desc)._Mypair._Myval2._Myfirst;
  if (pDVar1 != (this->m_Desc)._Mypair._Myval2._Mylast) {
    (this->m_Desc)._Mypair._Myval2._Mylast = pDVar1;
  }
  this->m_ppOwner = param_1;
  *param_1 = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
  this->m_pNumOutputOverrides = param_2;
  *param_2 = 0;
  return this;
}

// CD3DX12_STATE_OBJECT_DESC @ 145a8e870

CD3DX12_STATE_OBJECT_DESC * __thiscall
CD3DX12_STATE_OBJECT_DESC::CD3DX12_STATE_OBJECT_DESC
          (CD3DX12_STATE_OBJECT_DESC *this,D3D12_STATE_OBJECT_TYPE param_1)

{
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var1;
  D3D12_STATE_SUBOBJECT *pDVar2;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var3;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var4;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var5;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var6;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var7;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var8;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var9;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var10;
  
  (this->m_SubobjectList)._Mypair._Myval2._Myhead =
       (_List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *)0x0;
  (this->m_SubobjectList)._Mypair._Myval2._Mysize = 0;
  p_Var6 = ::operator_new(0x28);
  p_Var6->_Next = p_Var6;
  p_Var6->_Prev = p_Var6;
  (this->m_SubobjectList)._Mypair._Myval2._Myhead = p_Var6;
  (this->m_SubobjectArray)._Mypair._Myval2._Myfirst = (D3D12_STATE_SUBOBJECT *)0x0;
  (this->m_SubobjectArray)._Mypair._Myval2._Mylast = (D3D12_STATE_SUBOBJECT *)0x0;
  (this->m_SubobjectArray)._Mypair._Myval2._Myend = (D3D12_STATE_SUBOBJECT *)0x0;
  (this->m_RepointedAssociations)._Mypair._Myval2._Myhead =
       (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0;
  (this->m_RepointedAssociations)._Mypair._Myval2._Mysize = 0;
  p_Var7 = ::operator_new(0x28);
  p_Var7->_Next = p_Var7;
  p_Var7->_Prev = p_Var7;
  (this->m_RepointedAssociations)._Mypair._Myval2._Myhead = p_Var7;
  (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead =
       (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
        *)0x0;
  (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Mysize = 0;
  p_Var8 = ::operator_new(0x28);
  p_Var8->_Next = p_Var8;
  p_Var8->_Prev = p_Var8;
  (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead = p_Var8;
  (this->m_RepointedPrograms)._Mypair._Myval2._Myhead =
       (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0;
  (this->m_RepointedPrograms)._Mypair._Myval2._Mysize = 0;
  p_Var9 = ::operator_new(0x38);
  p_Var9->_Next = p_Var9;
  p_Var9->_Prev = p_Var9;
  (this->m_RepointedPrograms)._Mypair._Myval2._Myhead = p_Var9;
  (this->m_OwnedSubobjectHelpers)._Mypair._Myval2._Myhead =
       (_List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
        *)0x0;
  (this->m_OwnedSubobjectHelpers)._Mypair._Myval2._Mysize = 0;
  p_Var10 = ::operator_new(0x18);
  p_Var10->_Next = p_Var10;
  p_Var10->_Prev = p_Var10;
  (this->m_OwnedSubobjectHelpers)._Mypair._Myval2._Myhead = p_Var10;
  (this->m_Desc).Type = param_1;
  (this->m_Desc).pSubobjects = (D3D12_STATE_SUBOBJECT *)0x0;
  (this->m_Desc).NumSubobjects = 0;
  p_Var6 = (this->m_SubobjectList)._Mypair._Myval2._Myhead;
  p_Var6->_Prev->_Next = (_List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *)0x0;
  p_Var6 = p_Var6->_Next;
  while (p_Var6 != (_List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *)0x0) {
    p_Var1 = p_Var6->_Next;
    ::operator_delete(p_Var6,0x28);
    p_Var6 = p_Var1;
  }
  p_Var6 = (this->m_SubobjectList)._Mypair._Myval2._Myhead;
  p_Var6->_Next = p_Var6;
  p_Var6 = (this->m_SubobjectList)._Mypair._Myval2._Myhead;
  p_Var6->_Prev = p_Var6;
  (this->m_SubobjectList)._Mypair._Myval2._Mysize = 0;
  pDVar2 = (this->m_SubobjectArray)._Mypair._Myval2._Myfirst;
  if (pDVar2 != (this->m_SubobjectArray)._Mypair._Myval2._Mylast) {
    (this->m_SubobjectArray)._Mypair._Myval2._Mylast = pDVar2;
  }
  p_Var7 = (this->m_RepointedAssociations)._Mypair._Myval2._Myhead;
  p_Var7->_Prev->_Next = (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0;
  p_Var7 = p_Var7->_Next;
  while (p_Var7 != (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0) {
    p_Var3 = p_Var7->_Next;
    ::operator_delete(p_Var7,0x28);
    p_Var7 = p_Var3;
  }
  p_Var7 = (this->m_RepointedAssociations)._Mypair._Myval2._Myhead;
  p_Var7->_Next = p_Var7;
  p_Var7 = (this->m_RepointedAssociations)._Mypair._Myval2._Myhead;
  p_Var7->_Prev = p_Var7;
  (this->m_RepointedAssociations)._Mypair._Myval2._Mysize = 0;
  p_Var8 = (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead;
  p_Var8->_Prev->_Next =
       (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
        *)0x0;
  p_Var8 = p_Var8->_Next;
  while (p_Var8 != (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
                    *)0x0) {
    p_Var4 = p_Var8->_Next;
    std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
    ~vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
              (&p_Var8->_Myval);
    ::operator_delete(p_Var8,0x28);
    p_Var8 = p_Var4;
  }
  p_Var8 = (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead;
  p_Var8->_Next = p_Var8;
  p_Var8 = (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead;
  p_Var8->_Prev = p_Var8;
  (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Mysize = 0;
  p_Var9 = (this->m_RepointedPrograms)._Mypair._Myval2._Myhead;
  p_Var9->_Prev->_Next = (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0;
  p_Var9 = p_Var9->_Next;
  while (p_Var9 != (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0) {
    p_Var5 = p_Var9->_Next;
    ::operator_delete(p_Var9,0x38);
    p_Var9 = p_Var5;
  }
  p_Var9 = (this->m_RepointedPrograms)._Mypair._Myval2._Myhead;
  p_Var9->_Next = p_Var9;
  p_Var9 = (this->m_RepointedPrograms)._Mypair._Myval2._Myhead;
  p_Var9->_Prev = p_Var9;
  (this->m_RepointedPrograms)._Mypair._Myval2._Mysize = 0;
  return this;
}

// ~StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 145a93d10

/* WARNING: Type propagation algorithm not settling */

void __thiscall
CD3DX12_STATE_OBJECT_DESC::
StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
::
~StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  
  p_Var1 = (this->m_Strings)._Mypair._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0) {
    p_Var2 = p_Var1->_Next;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&p_Var1->_Myval);
    ::operator_delete(p_Var1,0x30);
    p_Var1 = p_Var2;
  }
  ::operator_delete((this->m_Strings)._Mypair._Myval2._Myhead,0x30);
  return;
}

// ~TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_> @ 145a93d20

void __thiscall
TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
::
~TArray<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
          (void *this)

{
  DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE1>_::__l2::FBreadcrumbNode,int>
            (*(FBreadcrumbNode **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_> @ 145a93d60

void __thiscall
TArray<`CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
::
~TArray<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
          (void *this)

{
  DestructItems<_CollectDREDBreadcrumbNodes<D3D12_AUTO_BREADCRUMB_NODE>_::__l2::FBreadcrumbNode,int>
            (*(FBreadcrumbNode **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1> @ 145a93da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FD3D12TransientResourceHeapAllocator::CreateBuffer_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1> @ 145a93dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FD3D12TransientResourceHeapAllocator::CreateTexture_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0> @ 145a93de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FD3D12PipelineStateCache::RebuildFromDiskCache_::__l61::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`61'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0> @ 145a93e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FD3D12PipelineStateCache::RebuildFromDiskCache_::__l120::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`120'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 145a94270

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  
  uVar4 = (this->_Mypair)._Myval2._Myres;
  if (7 < uVar4) {
    pwVar2 = (this->_Mypair)._Myval2._Bx._Ptr;
    lVar1 = uVar4 * 2;
    uVar4 = lVar1 + 2;
    pwVar3 = pwVar2;
    if (0xfff < uVar4) {
      pwVar3 = *(wchar_t **)(pwVar2 + -4);
      uVar4 = lVar1 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pwVar3,uVar4);
  }
  (this->_Mypair)._Myval2._Myres = 7;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  return;
}

// ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 145a942f0

void __thiscall
std::
list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0) {
    p_Var2 = p_Var1->_Next;
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&p_Var1->_Myval);
    ::operator_delete(p_Var1,0x30);
    p_Var1 = p_Var2;
  }
  ::operator_delete((this->_Mypair)._Myval2._Myhead,0x30);
  return;
}

// ~list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_> @ 145a94370

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
::
~list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
          (list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
           *this)

{
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var1;
  SUBOBJECT_HELPER_BASE *pSVar2;
  _List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
  *p_Var3;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,void_*>
                    *)0x0) {
    pSVar2 = (p_Var1->_Myval)._Mypair._Myval2;
    p_Var3 = p_Var1->_Next;
    if (pSVar2 != (SUBOBJECT_HELPER_BASE *)0x0) {
      (**(code **)pSVar2->_padding_)(pSVar2,1);
    }
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var3;
  }
  ::operator_delete((this->_Mypair)._Myval2._Myhead,0x18);
  return;
}

// ~list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_> @ 145a943f0

void __thiscall
std::
list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
::
~list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
          (list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
           *this)

{
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var1;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
                    *)0x0) {
    p_Var2 = p_Var1->_Next;
    vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
    ~vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
              (&p_Var1->_Myval);
    ::operator_delete(p_Var1,0x28);
    p_Var1 = p_Var2;
  }
  ::operator_delete((this->_Mypair)._Myval2._Myhead,0x28);
  return;
}

// ~vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_> @ 145a94470

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
~vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
          (vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
           *this)

{
  D3D12_STATE_SUBOBJECT **ppDVar1;
  D3D12_STATE_SUBOBJECT **ppDVar2;
  ulong64 uVar3;
  
  ppDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppDVar1 != (D3D12_STATE_SUBOBJECT **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppDVar1 & 0xfffffffffffffff8;
    ppDVar2 = ppDVar1;
    if (0xfff < uVar3) {
      ppDVar2 = (D3D12_STATE_SUBOBJECT **)ppDVar1[0xffffffffffffffff];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppDVar1 + (-8 - (longlong)ppDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_STATE_SUBOBJECT **)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_STATE_SUBOBJECT **)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_STATE_SUBOBJECT **)0x0;
  }
  return;
}

// ~vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_> @ 145a944f0

void __thiscall
std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::
~vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>
          (vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_> *this)

{
  wchar_t **ppwVar1;
  wchar_t **ppwVar2;
  ulong64 uVar3;
  
  ppwVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppwVar1 != (wchar_t **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppwVar1 & 0xfffffffffffffff8;
    ppwVar2 = ppwVar1;
    if (0xfff < uVar3) {
      ppwVar2 = (wchar_t **)ppwVar1[-1];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppwVar1 + (-8 - (longlong)ppwVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppwVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (wchar_t **)0x0;
    (this->_Mypair)._Myval2._Mylast = (wchar_t **)0x0;
    (this->_Mypair)._Myval2._Myend = (wchar_t **)0x0;
  }
  return;
}

// ~vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_> @ 145a94570

void __thiscall
std::vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>::
~vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>
          (vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_> *this)

{
  D3D12_EXPORT_DESC *pDVar1;
  D3D12_EXPORT_DESC *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_EXPORT_DESC *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1) / 0x18) * 0x18;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = *(D3D12_EXPORT_DESC **)&pDVar1[-1].Flags;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_EXPORT_DESC *)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_EXPORT_DESC *)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_EXPORT_DESC *)0x0;
  }
  return;
}

// ~vector<D3D12_NODE,std::allocator<D3D12_NODE>_> @ 145a94610

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::vector<D3D12_NODE,std::allocator<D3D12_NODE>_>::~vector<D3D12_NODE,std::allocator<D3D12_NODE>_>
          (vector<D3D12_NODE,std::allocator<D3D12_NODE>_> *this)

{
  D3D12_NODE *pDVar1;
  D3D12_NODE *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_NODE *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1 & 0xffffffffffffffe0;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = (D3D12_NODE *)
               pDVar1[0xffffffffffffffff].Shader.field2_0x10.pBroadcastingLaunchOverrides;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_NODE *)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_NODE *)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_NODE *)0x0;
  }
  return;
}

// ~vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_> @ 145a94690

void __thiscall
std::vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>::
~vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>
          (vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_> *this)

{
  D3D12_NODE_ID *pDVar1;
  D3D12_NODE_ID *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_NODE_ID *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1 & 0xfffffffffffffff0;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = *(D3D12_NODE_ID **)&pDVar1[-1].ArrayIndex;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_NODE_ID *)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_NODE_ID *)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_NODE_ID *)0x0;
  }
  return;
}

// ~vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_> @ 145a94710

void __thiscall
std::vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_>::
~vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_>
          (vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_> *this)

{
  D3D12_NODE_OUTPUT_OVERRIDES *pDVar1;
  D3D12_NODE_OUTPUT_OVERRIDES *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_NODE_OUTPUT_OVERRIDES *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1) / 0x28) * 0x28;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = (D3D12_NODE_OUTPUT_OVERRIDES *)pDVar1[-1].pMaxRecordsSharedWithOutputIndex;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
  }
  return;
}

// ~vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_> @ 145a947b0

void __thiscall
std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::
~vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>
          (vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_> *this)

{
  D3D12_STATE_SUBOBJECT *pDVar1;
  D3D12_STATE_SUBOBJECT *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_STATE_SUBOBJECT *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1 & 0xfffffffffffffff0;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = pDVar1[-1].pDesc;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (D3D12_STATE_SUBOBJECT *)0x0;
    (this->_Mypair)._Myval2._Mylast = (D3D12_STATE_SUBOBJECT *)0x0;
    (this->_Mypair)._Myval2._Myend = (D3D12_STATE_SUBOBJECT *)0x0;
  }
  return;
}

// ~vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_> @ 145a94830

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
::
~vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
          (vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
           *this)

{
  CD3DX12_NODE_HELPER_BASE *pCVar1;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar2;
  ulong64 uVar3;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar4;
  
  puVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar4 != (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                 *)0x0) {
    puVar2 = (this->_Mypair)._Myval2._Mylast;
    for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
      pCVar1 = (puVar4->_Mypair)._Myval2;
      if (pCVar1 != (CD3DX12_NODE_HELPER_BASE *)0x0) {
        (**(code **)pCVar1->_padding_)(pCVar1,1);
      }
    }
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar4 & 0xfffffffffffffff8;
    puVar2 = puVar4;
    if (0xfff < uVar3) {
      puVar2 = *(unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                 **)(puVar4 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
  }
  return;
}

// ~CD3DX12_NODE_HELPER_BASE @ 145a948e0

void __thiscall CD3DX12_NODE_HELPER_BASE::~CD3DX12_NODE_HELPER_BASE(CD3DX12_NODE_HELPER_BASE *this)

{
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  return;
}

// ~CD3DX12_NODE_OUTPUT_OVERRIDES @ 145a948f0

void __thiscall
CD3DX12_NODE_OUTPUT_OVERRIDES::~CD3DX12_NODE_OUTPUT_OVERRIDES(CD3DX12_NODE_OUTPUT_OVERRIDES *this)

{
  _Flist_node<D3D12_NODE_ID,void_*> *p_Var1;
  _Flist_node<D3D12_NODE_ID,void_*> *p_Var2;
  _Flist_node<unsigned_int,void_*> *p_Var3;
  _Flist_node<unsigned_int,void_*> *p_Var4;
  
  p_Var1 = (this->m_NodeIDs)._Mypair._Myval2._Myhead;
  (this->m_NodeIDs)._Mypair._Myval2._Myhead = (_Flist_node<D3D12_NODE_ID,void_*> *)0x0;
  while (p_Var1 != (_Flist_node<D3D12_NODE_ID,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var2;
  }
  p_Var3 = (this->m_UINTs)._Mypair._Myval2._Myhead;
  (this->m_UINTs)._Mypair._Myval2._Myhead = (_Flist_node<unsigned_int,void_*> *)0x0;
  while (p_Var3 != (_Flist_node<unsigned_int,void_*> *)0x0) {
    p_Var4 = p_Var3->_Next;
    ::operator_delete(p_Var3,0x10);
    p_Var3 = p_Var4;
  }
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  std::vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_>::
  ~vector<D3D12_NODE_OUTPUT_OVERRIDES,std::allocator<D3D12_NODE_OUTPUT_OVERRIDES>_>(&this->m_Desc);
  return;
}

// ~_Reallocation_guard @ 145a959a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
::_Reallocation_guard::~_Reallocation_guard(_Reallocation_guard *this)

{
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar1;
  CD3DX12_NODE_HELPER_BASE *pCVar2;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  uVar3;
  ulong64 uVar4;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar5;
  
  if (this->_New_begin ==
      (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
       *)0x0) {
    return;
  }
  puVar1 = this->_Constructed_last;
  for (puVar5 = this->_Constructed_first; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    pCVar2 = (puVar5->_Mypair)._Myval2;
    if (pCVar2 != (CD3DX12_NODE_HELPER_BASE *)0x0) {
      (**(code **)pCVar2->_padding_)(pCVar2,1);
    }
  }
  pCVar2 = (CD3DX12_NODE_HELPER_BASE *)this->_New_begin;
  uVar4 = this->_New_capacity * 8;
  uVar3._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>,CD3DX12_NODE_HELPER_BASE_const_*,1>
        )(_Compressed_pair<std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>,CD3DX12_NODE_HELPER_BASE_const_*,1>
          )pCVar2;
  if (0xfff < uVar4) {
    uVar3._Mypair._Myval2 =
         ((unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
           *)&pCVar2[0xffffffffffffffff].m_Strings.m_Strings._Mypair._Myval2._Mysize)->_Mypair;
    uVar4 = uVar4 + 0x27;
    if (0x1f < (ulonglong)((longlong)pCVar2 + (-8 - (longlong)uVar3._Mypair._Myval2))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)uVar3._Mypair._Myval2,uVar4);
  return;
}

// operator== @ 145a95bb0

bool __cdecl operator==(FD3D12VertexDeclarationKey *param_1,FD3D12VertexDeclarationKey *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->VertexElements).ArrayNum;
  if (iVar1 == (param_2->VertexElements).ArrayNum) {
    if ((iVar1 != 0) && (iVar1 = memcmp(param_1,param_2,(longlong)iVar1 << 5), iVar1 != 0)) {
      return false;
    }
    iVar1 = memcmp(param_1->StreamStrides,param_2->StreamStrides,0x22);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// ??@09b5d6189d18b8deba04a082348c102b@ @ 145a95c20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___09b5d6189d18b8deba04a082348c102b_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    ___a834c30b0d341b72fe7b406991e1a185_(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145a95c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@1071ef7655574e2d3461f59f9d88e7c0@ @ 145a95c80

bool __thiscall ___1071ef7655574e2d3461f59f9d88e7c0_(void *this)

{
  return true;
}

// ??@1bc6ceb5ce7c657cf99696e5e82dd0dd@ @ 145a95c90

void __thiscall
___1bc6ceb5ce7c657cf99696e5e82dd0dd_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_099d8f77b63bc5d61381a80fe18f5335_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@260570d250db4912249508c44b598d72@ @ 145a95cc0

void __thiscall
___260570d250db4912249508c44b598d72_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_71bfac194d931bab18246cdb8d9be217_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_4c34103ec3874403901fb5a8cbc2c173_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@31bdec67a97003b7e72699bdb0f08ac4@ @ 145a95d80

bool __thiscall ___31bdec67a97003b7e72699bdb0f08ac4_(void *this)

{
  return true;
}

// ??@3e6b88d36453d63cd3684847a96b5cbb@ @ 145a95d90

FTask * __thiscall ___3e6b88d36453d63cd3684847a96b5cbb_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@406726288a428bcef3ad0ddb92a5260c@ @ 145a95dc0

FTask * __thiscall
___406726288a428bcef3ad0ddb92a5260c_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___6a292d4db520ab79dc60d922be9cfd73_(&local_28);
  return (FTask *)0x0;
}

// ??@47522cd3ca324c4c8714780dd6452009@ @ 145a95e10

void __thiscall
___47522cd3ca324c4c8714780dd6452009_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_35cb5777293fde09d5b462c1be89ad56_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_099d8f77b63bc5d61381a80fe18f5335_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@5ec4e7310ae7ede94aa710f21eaae8a1@ @ 145a95ed0

uint __thiscall ___5ec4e7310ae7ede94aa710f21eaae8a1_(void *this)

{
  return 0x10;
}

// ??@69147047673e9dced1fe792e74b44b05@ @ 145a95ee0

FTask * __thiscall ___69147047673e9dced1fe792e74b44b05_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@6a292d4db520ab79dc60d922be9cfd73@ @ 145a95f10

void __thiscall ___6a292d4db520ab79dc60d922be9cfd73_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _099d8f77b63bc5d61381a80fe18f5335_;
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
    puVar2[5] = _35cb5777293fde09d5b462c1be89ad56_;
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

// ??@6a9fb48a5cb6644ca55fd2cbd46e2a34@ @ 145a95fc0

void __thiscall ___6a9fb48a5cb6644ca55fd2cbd46e2a34_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _4c34103ec3874403901fb5a8cbc2c173_;
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
    puVar2[5] = _71bfac194d931bab18246cdb8d9be217_;
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

// ??@6c20947c5c5d1720cde89c4dfe2bad98@ @ 145a96070

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___6c20947c5c5d1720cde89c4dfe2bad98_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// ??@7315bebb5964f325c3324f92a017f06a@ @ 145a960d0

int __cdecl
___7315bebb5964f325c3324f92a017f06a_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  void *_Dst;
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
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
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
    else if (iVar4 < 0) goto LAB_145a961e6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_145a961e6:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (void *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = *(void **)param_4;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (void *)0x0) &&
         (uVar3 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    *(void **)param_4 = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@75f1f33ee47d83b515b7d8f0882c80dc@ @ 145a96200

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___75f1f33ee47d83b515b7d8f0882c80dc_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145a9624f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@795be151c7d3a38d4130af17ce49dfda@ @ 145a96260

FTask * __thiscall
___795be151c7d3a38d4130af17ce49dfda_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___6a9fb48a5cb6644ca55fd2cbd46e2a34_(&local_28);
  return (FTask *)0x0;
}

// ??@9207a150e2373e9f7cae4bee23bff555@ @ 145a962b0

bool __thiscall ___9207a150e2373e9f7cae4bee23bff555_(void *this)

{
  return true;
}

// ??@928a250b3efafd8a598b461e7f893314@ @ 145a962c0

void __thiscall
___928a250b3efafd8a598b461e7f893314_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_4c34103ec3874403901fb5a8cbc2c173_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@9995d3fd4495f814bc0f200e5956ce67@ @ 145a962f0

FTask * __thiscall ___9995d3fd4495f814bc0f200e5956ce67_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@9c783ec49a9f7fb9756cdb0104bc29d9@ @ 145a96320

uint __thiscall ___9c783ec49a9f7fb9756cdb0104bc29d9_(void *this)

{
  return 0x10;
}

// ??@a834c30b0d341b72fe7b406991e1a185@ @ 145a96330

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
___a834c30b0d341b72fe7b406991e1a185_
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(_func___cdecl_void ***)&pFVar1->field_0x28 = _71bfac194d931bab18246cdb8d9be217_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  `ParallelForImpl::
  ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  `ParallelForImpl::
  ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ??@a9a98bb62f349e2a9664e6bd49dda4c1@ @ 145a965a0

FTask * __thiscall ___a9a98bb62f349e2a9664e6bd49dda4c1_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@ae21ee466d92934cf23b039872f10433@ @ 145a965d0

int __cdecl
___ae21ee466d92934cf23b039872f10433_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  void *_Dst;
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
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
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
    else if (iVar4 < 0) goto LAB_145a966e6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_145a966e6:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (void *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = *(void **)param_4;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (void *)0x0) &&
         (uVar3 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    *(void **)param_4 = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@b0f7e652a12d6aa67ae529fdcdef462f@ @ 145a96700

bool __thiscall ___b0f7e652a12d6aa67ae529fdcdef462f_(void *this)

{
  return false;
}

// ??@b2a6824312e044bdd0aa8564db3f7954@ @ 145a96710

FTask * __thiscall
___b2a6824312e044bdd0aa8564db3f7954_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_099d8f77b63bc5d61381a80fe18f5335_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@b46f3bad0a733863af183fc5ecd8db38@ @ 145a96770

void __cdecl ___b46f3bad0a733863af183fc5ecd8db38_(FTracedTask *param_1,int param_2)

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

// ??@b8e3d6e5461172f5ef1ab55eaa95ddf1@ @ 145a967f0

FTask * __thiscall
___b8e3d6e5461172f5ef1ab55eaa95ddf1_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_4c34103ec3874403901fb5a8cbc2c173_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@d08681268c1d54ed8a10724f25087397@ @ 145a96850

uint __thiscall ___d08681268c1d54ed8a10724f25087397_(void *this)

{
  return 0x10;
}

// ??@db7b12359a5b68a4c74a7fbc9611f53d@ @ 145a96860

bool __thiscall ___db7b12359a5b68a4c74a7fbc9611f53d_(void *this)

{
  return true;
}

// ??@dcb5b3eab3803ed15d09a274fb23bb22@ @ 145a96870

bool __thiscall ___dcb5b3eab3803ed15d09a274fb23bb22_(void *this)

{
  return true;
}

// ??@e069a90f32873731453718fc46382584@ @ 145a96880

uint __thiscall ___e069a90f32873731453718fc46382584_(void *this)

{
  return 0x10;
}

// ??@ee5b17c4ba1fd58b70c121c094778239@ @ 145a96890

bool __thiscall ___ee5b17c4ba1fd58b70c121c094778239_(void *this)

{
  return false;
}

// ??@f206e26b711f45fb90474809769176b7@ @ 145a968a0

bool __thiscall ___f206e26b711f45fb90474809769176b7_(void *this)

{
  return true;
}

// ??@ffb6a3dc73417356aa5d14001b65c0fc@ @ 145a968b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___ffb6a3dc73417356aa5d14001b65c0fc_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>,int,int,_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    ___a834c30b0d341b72fe7b406991e1a185_(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// operator_D3D12_STATE_OBJECT_DESC_const_& @ 145a96a90

/* WARNING: Type propagation algorithm not settling */

D3D12_STATE_OBJECT_DESC * __thiscall
CD3DX12_STATE_OBJECT_DESC::operator_D3D12_STATE_OBJECT_DESC_const__(CD3DX12_STATE_OBJECT_DESC *this)

{
  ulong64 *puVar1;
  wchar_t **ppwVar2;
  uint uVar3;
  D3D12_STATE_SUBOBJECT *pDVar4;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var5;
  longlong *plVar6;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var7;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var8;
  undefined8 *puVar9;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var10;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var11;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var12;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var13;
  void *pvVar14;
  wchar_t *pwVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  D3D12_STATE_SUBOBJECT *pDVar19;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var20;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var21;
  D3D12_STATE_SUBOBJECT **ppDVar22;
  D3D12_STATE_SUBOBJECT **ppDVar23;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var24;
  D3D12_STATE_OBJECT_DESC *extraout_RAX;
  ulonglong uVar25;
  D3D12_STATE_SUBOBJECT *pDVar26;
  ulonglong uVar27;
  D3D12_STATE_SUBOBJECT *pDVar28;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var29;
  vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_> *pvVar30;
  size_t _Size;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  D3D12_STATE_SUBOBJECT **local_res10;
  
  std::
  list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
  ::clear(&this->m_RepointedSubobjectVectors);
  std::list<D3D12_GENERIC_PROGRAM_DESC,std::allocator<D3D12_GENERIC_PROGRAM_DESC>_>::clear
            (&this->m_RepointedPrograms);
  std::
  list<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,std::allocator<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION>_>
  ::clear(&this->m_RepointedAssociations);
  pDVar26 = (this->m_SubobjectArray)._Mypair._Myval2._Mylast;
  pvVar30 = &this->m_SubobjectArray;
  pDVar28 = (pvVar30->_Mypair)._Myval2._Myfirst;
  if (pDVar28 != pDVar26) {
    (this->m_SubobjectArray)._Mypair._Myval2._Mylast = pDVar28;
    pDVar26 = pDVar28;
  }
  uVar32 = (this->m_Desc).NumSubobjects;
  if ((ulonglong)
      ((longlong)(this->m_SubobjectArray)._Mypair._Myval2._Myend - (longlong)pDVar28 >> 4) <
      (ulonglong)uVar32) {
    pDVar19 = std::_Allocate<16,std::_Default_allocate_traits>((ulonglong)uVar32 << 4);
    pDVar4 = (pvVar30->_Mypair)._Myval2._Myfirst;
    memmove(pDVar19,pDVar4,
            (longlong)(this->m_SubobjectArray)._Mypair._Myval2._Mylast - (longlong)pDVar4);
    std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::_Change_array
              (pvVar30,pDVar19,(longlong)pDVar26 - (longlong)pDVar28 >> 4,(ulonglong)uVar32);
  }
  p_Var5 = (this->m_SubobjectList)._Mypair._Myval2._Myhead;
  p_Var29 = p_Var5->_Next;
  if (p_Var29 != p_Var5) {
    do {
      pDVar26 = (this->m_SubobjectArray)._Mypair._Myval2._Myend;
      pDVar28 = (this->m_SubobjectArray)._Mypair._Myval2._Mylast;
      if (pDVar28 == pDVar26) {
        pDVar4 = (pvVar30->_Mypair)._Myval2._Myfirst;
        lVar33 = (longlong)pDVar28 - (longlong)pDVar4 >> 4;
        if (lVar33 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::_Xlength();
        }
        uVar31 = lVar33 + 1;
        uVar25 = (longlong)pDVar26 - (longlong)pDVar4 >> 4;
        if (0xfffffffffffffff - (uVar25 >> 1) < uVar25) {
          uVar27 = 0xfffffffffffffff;
        }
        else {
          uVar25 = (uVar25 >> 1) + uVar25;
          uVar27 = uVar31;
          if (uVar31 <= uVar25) {
            uVar27 = uVar25;
          }
          if (0xfffffffffffffff < uVar27) goto LAB_145a96fb6;
        }
        pDVar19 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27 << 4);
        pvVar14 = (void *)(p_Var29->_Myval)._padding_;
        *(longlong *)(pDVar19 + lVar33) = (p_Var29->_Myval)._padding_;
        pDVar19[lVar33].pDesc = pvVar14;
        pDVar26 = (this->m_SubobjectArray)._Mypair._Myval2._Mylast;
        pDVar4 = (pvVar30->_Mypair)._Myval2._Myfirst;
        if (pDVar28 == pDVar26) {
          _Size = (longlong)pDVar26 - (longlong)pDVar4;
          pDVar26 = pDVar19;
          pDVar28 = pDVar4;
        }
        else {
          memmove(pDVar19,pDVar4,(longlong)pDVar28 - (longlong)pDVar4);
          _Size = (longlong)(this->m_SubobjectArray)._Mypair._Myval2._Mylast - (longlong)pDVar28;
          pDVar26 = pDVar19 + lVar33 + 1;
        }
        memmove(pDVar26,pDVar28,_Size);
        std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::_Change_array
                  (pvVar30,pDVar19,uVar31,uVar27);
      }
      else {
        pvVar14 = (void *)(p_Var29->_Myval)._padding_;
        *(longlong *)pDVar28 = (p_Var29->_Myval)._padding_;
        pDVar28->pDesc = pvVar14;
        ppDVar23 = &(this->m_SubobjectArray)._Mypair._Myval2._Mylast;
        *ppDVar23 = *ppDVar23 + 1;
      }
      (p_Var29->_Myval).pSubobjectArrayLocation =
           (this->m_SubobjectArray)._Mypair._Myval2._Mylast + -1;
      p_Var29 = p_Var29->_Next;
    } while (p_Var29 != (this->m_SubobjectList)._Mypair._Myval2._Myhead);
  }
  pvVar30 = &this->m_SubobjectArray;
  pDVar26 = (D3D12_STATE_SUBOBJECT *)0x0;
  uVar32 = 0;
  pDVar28 = pDVar26;
  if ((this->m_Desc).NumSubobjects != 0) {
    do {
      pDVar26 = (pvVar30->_Mypair)._Myval2._Myfirst;
      uVar18 = (uint)pDVar28;
      if (pDVar26[(longlong)pDVar28].Type ==
          D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION) {
        plVar6 = pDVar26[(longlong)pDVar28].pDesc;
        p_Var7 = (this->m_RepointedAssociations)._Mypair._Myval2._Myhead;
        lVar33 = plVar6[1];
        ppwVar2 = (wchar_t **)plVar6[2];
        pDVar26 = *(D3D12_STATE_SUBOBJECT **)(*plVar6 + 0x10);
        if ((this->m_RepointedAssociations)._Mypair._Myval2._Mysize == 0x666666666666666)
        goto LAB_145a96fa3;
        p_Var20 = ::operator_new(0x28);
        (p_Var20->_Myval).pSubobjectToAssociate = pDVar26;
        *(longlong *)&(p_Var20->_Myval).NumExports = lVar33;
        (p_Var20->_Myval).pExports = ppwVar2;
        puVar1 = &(this->m_RepointedAssociations)._Mypair._Myval2._Mysize;
        *puVar1 = *puVar1 + 1;
        p_Var8 = p_Var7->_Prev;
        p_Var20->_Prev = p_Var8;
        p_Var20->_Next = p_Var7;
        p_Var7->_Prev = p_Var20;
        p_Var8->_Next = p_Var20;
        (pvVar30->_Mypair)._Myval2._Myfirst[(longlong)pDVar28].pDesc =
             &((this->m_RepointedAssociations)._Mypair._Myval2._Myhead)->_Prev->_Myval;
      }
      else if (pDVar26[(longlong)pDVar28].Type == D3D12_STATE_SUBOBJECT_TYPE_GENERIC_PROGRAM) {
        puVar9 = pDVar26[(longlong)pDVar28].pDesc;
        pwVar15 = (wchar_t *)*puVar9;
        uVar16 = puVar9[1];
        ppwVar2 = (wchar_t **)puVar9[2];
        uVar17 = puVar9[3];
        local_res10 = (D3D12_STATE_SUBOBJECT **)puVar9[4];
        if (*(int *)(puVar9 + 3) != 0) {
          p_Var10 = (this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead;
          if ((this->m_RepointedSubobjectVectors)._Mypair._Myval2._Mysize == 0x666666666666666)
          goto LAB_145a96fa3;
          p_Var21 = ::operator_new(0x28);
          (p_Var21->_Myval)._Mypair._Myval2._Myfirst = (D3D12_STATE_SUBOBJECT **)0x0;
          (p_Var21->_Myval)._Mypair._Myval2._Mylast = (D3D12_STATE_SUBOBJECT **)0x0;
          (p_Var21->_Myval)._Mypair._Myval2._Myend = (D3D12_STATE_SUBOBJECT **)0x0;
          puVar1 = &(this->m_RepointedSubobjectVectors)._Mypair._Myval2._Mysize;
          *puVar1 = *puVar1 + 1;
          p_Var11 = p_Var10->_Prev;
          p_Var21->_Next = p_Var10;
          p_Var21->_Prev = p_Var11;
          p_Var10->_Prev = p_Var21;
          p_Var11->_Next = p_Var21;
          uVar25 = (ulonglong)*(uint *)(puVar9 + 3);
          p_Var10 = ((this->m_RepointedSubobjectVectors)._Mypair._Myval2._Myhead)->_Prev;
          ppDVar23 = (p_Var10->_Myval)._Mypair._Myval2._Mylast;
          ppDVar22 = (p_Var10->_Myval)._Mypair._Myval2._Myfirst;
          uVar31 = (longlong)ppDVar23 - (longlong)ppDVar22 >> 3;
          if (uVar25 < uVar31) {
            ppDVar23 = ppDVar22 + uVar25;
LAB_145a96e7b:
            (p_Var10->_Myval)._Mypair._Myval2._Mylast = ppDVar23;
          }
          else if (uVar31 < uVar25) {
            uVar27 = (longlong)(p_Var10->_Myval)._Mypair._Myval2._Myend - (longlong)ppDVar22 >> 3;
            if (uVar25 <= uVar27) {
              memset(ppDVar23,0,(uVar25 - uVar31) * 8);
              ppDVar23 = ppDVar23 + (uVar25 - uVar31);
              goto LAB_145a96e7b;
            }
            if (0x1fffffffffffffff - (uVar27 >> 1) < uVar27) {
              uVar27 = 0x1fffffffffffffff;
            }
            else {
              uVar27 = (uVar27 >> 1) + uVar27;
              if (uVar27 < uVar25) {
                uVar27 = uVar25;
              }
              if (0x1fffffffffffffff < uVar27) {
LAB_145a96fb6:
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            ppDVar22 = std::_Allocate<16,std::_Default_allocate_traits>(uVar27 * 8);
            memset(ppDVar22 + uVar31,0,(uVar25 - uVar31) * 8);
            ppDVar23 = (p_Var10->_Myval)._Mypair._Myval2._Myfirst;
            memmove(ppDVar22,ppDVar23,
                    (longlong)(p_Var10->_Myval)._Mypair._Myval2._Mylast - (longlong)ppDVar23);
            std::
            vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
            _Change_array(&p_Var10->_Myval,ppDVar22,uVar25,uVar27);
          }
          uVar31 = 0;
          if (*(int *)(puVar9 + 3) != 0) {
            do {
              uVar18 = (int)uVar31 + 1;
              (p_Var10->_Myval)._Mypair._Myval2._Myfirst[uVar31] =
                   *(D3D12_STATE_SUBOBJECT **)(*(longlong *)(uVar31 * 8 + puVar9[4]) + 0x10);
              uVar31 = (ulonglong)uVar18;
            } while (uVar18 < *(uint *)(puVar9 + 3));
          }
          local_res10 = (p_Var10->_Myval)._Mypair._Myval2._Myfirst;
          uVar18 = uVar32;
        }
        p_Var12 = (this->m_RepointedPrograms)._Mypair._Myval2._Myhead;
        if ((this->m_RepointedPrograms)._Mypair._Myval2._Mysize == 0x492492492492492) {
LAB_145a96fa3:
          std::_Xlength_error("list too long");
          return extraout_RAX;
        }
        p_Var24 = ::operator_new(0x38);
        (p_Var24->_Myval).ProgramName = pwVar15;
        *(undefined8 *)&(p_Var24->_Myval).NumExports = uVar16;
        (p_Var24->_Myval).pExports = ppwVar2;
        *(undefined8 *)&(p_Var24->_Myval).NumSubobjects = uVar17;
        (p_Var24->_Myval).ppSubobjects = local_res10;
        puVar1 = &(this->m_RepointedPrograms)._Mypair._Myval2._Mysize;
        *puVar1 = *puVar1 + 1;
        p_Var13 = p_Var12->_Prev;
        p_Var24->_Prev = p_Var13;
        p_Var24->_Next = p_Var12;
        p_Var12->_Prev = p_Var24;
        p_Var13->_Next = p_Var24;
        (pvVar30->_Mypair)._Myval2._Myfirst[(longlong)pDVar28].pDesc =
             &((this->m_RepointedPrograms)._Mypair._Myval2._Myhead)->_Prev->_Myval;
      }
      pDVar26 = (D3D12_STATE_SUBOBJECT *)0x0;
      uVar3 = (this->m_Desc).NumSubobjects;
      uVar32 = uVar18 + 1;
      pDVar28 = (D3D12_STATE_SUBOBJECT *)(ulonglong)uVar32;
    } while (uVar32 < uVar3);
    if (uVar3 != 0) {
      pDVar26 = (this->m_SubobjectArray)._Mypair._Myval2._Myfirst;
    }
  }
  (this->m_Desc).pSubobjects = pDVar26;
  return &this->m_Desc;
}

// operator() @ 145a96fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FResourceTaskResult * __thiscall
``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,FResourceTaskResult *__return_storage_ptr__)

{
  bool bVar1;
  undefined1 auStackY_b8 [32];
  FCreateBufferInternalResult local_88;
  ID3D12ResourceAllocator local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulong64 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId238,"AllocatePlacedBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
               ,0xee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
  }
  local_70 = *(undefined8 *)this;
  local_58 = *(undefined8 *)((longlong)this + 0x30);
  uStack_50 = *(undefined8 *)((longlong)this + 0x38);
  local_48 = *(undefined8 *)((longlong)this + 0x40);
  uStack_40 = *(undefined8 *)((longlong)this + 0x48);
  local_38 = *(undefined8 *)((longlong)this + 0x50);
  uStack_30 = *(undefined8 *)((longlong)this + 0x58);
  local_78 = (ID3D12ResourceAllocator)
             &___7FResourceAllocatorAdapter_FD3D12TransientResourceHeapAllocator__6B_;
  local_68 = *(undefined8 *)((longlong)this + 8);
  local_60 = (longlong)this + 0x10;
  local_28 = *(undefined8 *)((longlong)this + 0x60);
  local_20 = 0;
  FD3D12DynamicRHI::CreateBufferInternal
            (FD3D12DynamicRHI::SingleD3DRHI,&local_88,
             (FRHIBufferCreateDesc *)((longlong)this + 0x68),false,&local_78);
  (__return_storage_ptr__->Resource).Reference = (FRHIResource *)local_88.Buffer;
  if (local_88.Buffer != (FD3D12Buffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_88.Buffer);
  }
  __return_storage_ptr__->GpuVirtualAddress = local_20;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// operator() @ 145a97120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResourceTaskResult * __thiscall
``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,FResourceTaskResult *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_148 [32];
  TRefCountPtr<FRHIResource> local_128 [2];
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulong64 local_c0;
  FRHITextureDesc local_b8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId156,"AllocatePlacedTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
               ,0x9c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId156);
  }
  local_110 = *(undefined8 *)((longlong)this + 8);
  local_f8 = *(undefined8 *)((longlong)this + 0x38);
  uStack_f0 = *(undefined8 *)((longlong)this + 0x40);
  uVar1 = *(undefined8 *)((longlong)this + 200);
  local_e8 = *(undefined8 *)((longlong)this + 0x48);
  uStack_e0 = *(undefined8 *)((longlong)this + 0x50);
  local_d8 = *(undefined8 *)((longlong)this + 0x58);
  uStack_d0 = *(undefined8 *)((longlong)this + 0x60);
  local_118 = &___7FResourceAllocatorAdapter_FD3D12TransientResourceHeapAllocator__6B_;
  local_108 = *(undefined8 *)((longlong)this + 0x10);
  local_100 = (longlong)this + 0x18;
  local_c8 = *(undefined8 *)((longlong)this + 0x68);
  local_c0 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_b8,(FRHITextureDesc *)((longlong)this + 0x78));
  local_60 = 0x40000;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = uVar1;
  (**(code **)(**(longlong **)this + 0x600))(*(longlong **)this,local_128,&local_b8,&local_118);
  (__return_storage_ptr__->Resource).Reference = local_128[0].Reference;
  if (local_128[0].Reference != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_128[0].Reference);
  }
  __return_storage_ptr__->GpuVirtualAddress = local_c0;
  if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// operator() @ 145a97e80

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

FD3D12Texture * __thiscall
`GetSwapChainSurface'::__l2::<lambda_1>::operator()
          (void *this,FD3D12Device *param_1,FD3D12Texture *param_2)

{
  FD3D12Texture *this_00;
  FD3D12Resource *this_01;
  FD3D12Resource *pFVar1;
  FD3D12BaseShaderResource *pFVar2;
  wchar_t *pwVar3;
  bool bVar4;
  D3D12_RENDER_TARGET_VIEW_DESC local_78;
  D3D12_RENDER_TARGET_VIEW_DESC local_60;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_48;
  
  this_00 = (FD3D12Texture *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0x608))
                      ((longlong *)**(undefined8 **)this,*(undefined8 *)((longlong)this + 8),param_1
                      );
  if (*(int *)&param_1->field_0x8 == *(int *)(**(longlong **)((longlong)this + 0x10) + 8)) {
    this_01 = ::operator_new(0xb8);
    pFVar1 = (FD3D12Resource *)0x0;
    if (this_01 != (FD3D12Resource *)0x0) {
      pFVar1 = FD3D12Resource::FD3D12Resource
                         (this_01,param_1,
                          (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                          (ID3D12Resource *)**(undefined8 **)((longlong)this + 0x18),Common,
                          *(FD3D12ResourceDesc **)((longlong)this + 0x20),(FD3D12Heap *)0x0,
                          D3D12_HEAP_TYPE_DEFAULT);
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
    FD3D12ResourceLocation::AsStandAlone
              ((FD3D12ResourceLocation *)&this_00->_padding_,pFVar1,0,false,
               (D3D12_HEAP_PROPERTIES *)0x0);
  }
  else {
    if (*(int *)(*(undefined8 **)((longlong)this + 0x38) + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)**(undefined8 **)((longlong)this + 0x38);
    }
    pFVar2 = (FD3D12BaseShaderResource *)&this_00->_padding_;
    if (this_00 == (FD3D12Texture *)0x0) {
      pFVar2 = (FD3D12BaseShaderResource *)0x0;
    }
    SafeCreateTexture2D(param_1,(FD3D12Adapter *)**(undefined8 **)((longlong)this + 0x28),
                        *(FD3D12ResourceDesc **)((longlong)this + 0x20),(D3D12_CLEAR_VALUE *)0x0,
                        (FD3D12ResourceLocation *)&this_00->_padding_,pFVar2,
                        **(EPixelFormat **)((longlong)this + 0x30),
                        Presentable|ShaderResource|RenderTargetable,Common,Common,pwVar3);
  }
  bVar4 = bIsQuadBufferStereoEnabled == false;
  local_60.Format = *(DXGI_FORMAT *)(*(longlong *)((longlong)this + 0x20) + 0x20);
  if (bVar4) {
    local_60.field2_0x8.Texture1DArray.FirstArraySlice = 0;
    local_60.field2_0x8.Buffer.NumElements = 0;
    local_60.field2_0x8.Texture2DArray.PlaneSlice = 0;
    local_60._4_8_ = 4;
    FD3D12Texture::SetNumRTVs(this_00,1);
  }
  else {
    local_78.field2_0x8._8_8_ = 1;
    local_78._4_8_ = 5;
    local_78.field2_0x8.Texture1DArray.FirstArraySlice = 0;
    local_60.field2_0x8.Buffer.NumElements = 1;
    local_60.field2_0x8.Texture2DArray.PlaneSlice = 0;
    local_60._4_8_ = 5;
    local_60.field2_0x8.Texture1DArray.FirstArraySlice = 1;
    local_78.Format = local_60.Format;
    FD3D12Texture::SetNumRTVs(this_00,2);
    FD3D12Texture::EmplaceRTV(this_00,&local_78,0,param_2);
  }
  FD3D12Texture::EmplaceRTV(this_00,&local_60,(uint)!bVar4,param_2);
  local_48.Shader4ComponentMapping = 0x1688;
  local_48._12_4_ = 0;
  local_48.field3_0x10._8_8_ = 0;
  local_48.field3_0x10._16_8_ = 0;
  local_48.Format = *(DXGI_FORMAT *)(*(longlong *)((longlong)this + 0x20) + 0x20);
  local_48.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
  local_48.field3_0x10.Texture1D.MostDetailedMip = 0;
  local_48.field3_0x10.Texture1D.MipLevels = 1;
  FD3D12Texture::EmplaceSRV(this_00,&local_48,param_2);
  return this_00;
}

// operator() @ 145a98830

void __thiscall
`ClearPSODriverCache'::__l5::<lambda_2>::operator()(void *this,FString *param_1,wchar_t *param_2)

{
  int iVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res10 [8];
  FString *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_38 = (FString *)0x0;
  local_30 = 0;
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,&local_38,pwVar6,param_2);
  iVar1 = (int)local_30;
  pFVar5 = local_38 + (int)local_30;
  pFVar4 = local_38;
  while( true ) {
    if ((int)local_30 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar5) break;
    ::FString::PrintfImpl(&local_28,L"%s\\%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,FVar3.Data,0,1,1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  DestructItems<FString,int>(local_38,(int)local_30);
  if (local_38 != (FString *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{312}' @ 145a9a50c

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12BackBufferReferenceTexture2D::`vector
   deleting destructor'`adjustor{312}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12BackBufferReferenceTexture2D::_vector_deleting_destructor__adjustor_312__
          (FD3D12BackBufferReferenceTexture2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12BackBufferReferenceTexture2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145a9a520

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12BackBufferReferenceTexture2D::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12BackBufferReferenceTexture2D::_vector_deleting_destructor__adjustor_40__
          (FD3D12BackBufferReferenceTexture2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12BackBufferReferenceTexture2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145a9a530

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12RHITextureReference::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12RHITextureReference::_vector_deleting_destructor__adjustor_40__
          (FD3D12RHITextureReference *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12RHITextureReference *)
                      this[-1].TextureReplaceListenersCS.CriticalSection.Opaque3,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{320}' @ 145a9a540

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12TransientHeap::`vector deleting
   destructor'`adjustor{320}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12TransientHeap::_vector_deleting_destructor__adjustor_320__
          (FD3D12TransientHeap *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D12TransientHeap *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 145a9a554

/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12UnorderedAccessView_RHI::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12UnorderedAccessView_RHI::_vector_deleting_destructor__adjustor_48__
          (FD3D12UnorderedAccessView_RHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12UnorderedAccessView_RHI *)&this[-1].field_0xe0,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145a9a570

void * __thiscall
FAsyncTask<FD3D12PipelineStateWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FD3D12PipelineStateWorker> *this,uint param_1)

{
  ID3D12PipelineState *pIVar1;
  
  pIVar1 = (this->Task).PSO.Reference;
  if (pIVar1 != (ID3D12PipelineState *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a5c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
TD3D12View<FD3D12ConstantBufferView,D3D12_CONSTANT_BUFFER_VIEW_DESC>::_scalar_deleting_destructor_
          (TD3D12View<FD3D12ConstantBufferView,D3D12_CONSTANT_BUFFER_VIEW_DESC> *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a600

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
TD3D12View<FD3D12DepthStencilView,D3D12_DEPTH_STENCIL_VIEW_DESC>::_scalar_deleting_destructor_
          (TD3D12View<FD3D12DepthStencilView,D3D12_DEPTH_STENCIL_VIEW_DESC> *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a640

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
TD3D12View<FD3D12RenderTargetView,D3D12_RENDER_TARGET_VIEW_DESC>::_scalar_deleting_destructor_
          (TD3D12View<FD3D12RenderTargetView,D3D12_RENDER_TARGET_VIEW_DESC> *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a680

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
TD3D12View<FD3D12UnorderedAccessView,D3D12_UNORDERED_ACCESS_VIEW_DESC>::_scalar_deleting_destructor_
          (TD3D12View<FD3D12UnorderedAccessView,D3D12_UNORDERED_ACCESS_VIEW_DESC> *this,uint param_1
          )

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a6c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  if (*(FRHIResource **)((longlong)this + 0xd8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0xd8));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x1c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a740

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  if (*(FRHIResource **)((longlong)this + 0xd8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0xd8));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x1c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a7c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  if (*(FRHIResource **)((longlong)this + 0xd8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0xd8));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a820

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRHITransientResource::FResourceTaskResult,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  if (*(FRHIResource **)((longlong)this + 0xd8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0xd8));
  }
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`61'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`120'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a980

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsD3D12Adapter,SharedPointerInternals::DefaultDeleter<FWindowsD3D12Adapter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWindowsD3D12Adapter,SharedPointerInternals::DefaultDeleter<FWindowsD3D12Adapter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9a9c0

void * __thiscall
TResourceArray<unsigned_int,0>::_scalar_deleting_destructor_
          (TResourceArray<unsigned_int,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9aa10

void * __thiscall
UE::Tasks::Private::TTaskWithResult<FRHITransientResource::FResourceTaskResult>::
_scalar_deleting_destructor_
          (TTaskWithResult<FRHITransientResource::FResourceTaskResult> *this,uint param_1)

{
  FRHIResource *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_UFResourceTaskResult_FRHITransientResource___Private_Tasks_UE__6B_;
  this_00 = *(FRHIResource **)(this->ResultStorage).Pad;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9aa70

void * __thiscall
CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES::_scalar_deleting_destructor_
          (CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *this,uint param_1)

{
  _Flist_node<D3D12_NODE_ID,void_*> *p_Var1;
  _Flist_node<D3D12_NODE_ID,void_*> *p_Var2;
  _Flist_node<unsigned_int,void_*> *p_Var3;
  _Flist_node<unsigned_int,void_*> *p_Var4;
  
  CD3DX12_NODE_OUTPUT_OVERRIDES::~CD3DX12_NODE_OUTPUT_OVERRIDES(&this->m_NodeOutputOverrides);
  p_Var1 = (this->m_NodeIDs)._Mypair._Myval2._Myhead;
  (this->m_NodeIDs)._Mypair._Myval2._Myhead = (_Flist_node<D3D12_NODE_ID,void_*> *)0x0;
  while (p_Var1 != (_Flist_node<D3D12_NODE_ID,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var2;
  }
  p_Var3 = (this->m_UINTs)._Mypair._Myval2._Myhead;
  (this->m_UINTs)._Mypair._Myval2._Myhead = (_Flist_node<unsigned_int,void_*> *)0x0;
  while (p_Var3 != (_Flist_node<unsigned_int,void_*> *)0x0) {
    p_Var4 = p_Var3->_Next;
    ::operator_delete(p_Var3,0x10);
    p_Var3 = p_Var4;
  }
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            ((list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ab20

void * __thiscall
CD3DX12_DXIL_LIBRARY_SUBOBJECT::_scalar_deleting_destructor_
          (CD3DX12_DXIL_LIBRARY_SUBOBJECT *this,uint param_1)

{
  std::vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>::
  ~vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>(&this->m_Exports);
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ab70

void * __thiscall
CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT::_scalar_deleting_destructor_
          (CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *this,uint param_1)

{
  ID3D12RootSignature *pIVar1;
  
  pIVar1 = (this->m_pRootSig).ptr_;
  if (pIVar1 != (ID3D12RootSignature *)0x0) {
    (this->m_pRootSig).ptr_ = (ID3D12RootSignature *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9abc0

void * __thiscall
CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT::_scalar_deleting_destructor_
          (CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *this,uint param_1)

{
  ID3D12RootSignature *pIVar1;
  
  pIVar1 = (this->m_pRootSig).ptr_;
  if (pIVar1 != (ID3D12RootSignature *)0x0) {
    (this->m_pRootSig).ptr_ = (ID3D12RootSignature *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ac10

void * __thiscall
CD3DX12_NODE_HELPER_BASE::_scalar_deleting_destructor_(CD3DX12_NODE_HELPER_BASE *this,uint param_1)

{
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ac50

void * __thiscall
CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT::_scalar_deleting_destructor_
          (CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *this,uint param_1)

{
  std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::
  ~vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>(&this->m_Exports);
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9aca0

void * __thiscall
CD3DX12_WORK_GRAPH_SUBOBJECT::_scalar_deleting_destructor_
          (CD3DX12_WORK_GRAPH_SUBOBJECT *this,uint param_1)

{
  std::
  vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
  ::
  ~vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
            (&this->m_OwnedNodeHelpers);
  std::
  list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  ::
  ~list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (&(this->m_Strings).m_Strings);
  std::vector<D3D12_NODE,std::allocator<D3D12_NODE>_>::
  ~vector<D3D12_NODE,std::allocator<D3D12_NODE>_>(&this->m_NodeDescs);
  std::vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>::
  ~vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>(&this->m_Entrypoints);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ad00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12BackBufferReferenceTexture2D::_scalar_deleting_destructor_
          (FD3D12BackBufferReferenceTexture2D *this,uint param_1)

{
  FD3D12Texture::~FD3D12Texture((FD3D12Texture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ad40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12ConstantBufferView::_scalar_deleting_destructor_(FD3D12ConstantBufferView *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ad80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12DepthStencilView::_scalar_deleting_destructor_(FD3D12DepthStencilView *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9adc0

void * __thiscall
FD3D12PipelineStateCache::_scalar_deleting_destructor_(FD3D12PipelineStateCache *this,uint param_1)

{
  ID3D12PipelineLibrary *pIVar1;
  
  this->_padding_ = (longlong)&___7FD3D12PipelineStateCache__6B_;
  pIVar1 = (this->PipelineLibrary).Reference;
  if (pIVar1 != (ID3D12PipelineLibrary *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FDiskCacheInterface::~FDiskCacheInterface(&this->DiskBinaryCache);
  FD3D12PipelineStateCacheBase::~FD3D12PipelineStateCacheBase((FD3D12PipelineStateCacheBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9ae30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12RHITextureReference::_scalar_deleting_destructor_
          (FD3D12RHITextureReference *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  lpCriticalSection = &this->TextureReplaceListenersCS;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&___7FD3D12RHITextureReference__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->TextureReplaceListeners).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((iVar2 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasListeners()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TextureReference.cpp"
                         ,0x1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    FD3D12BaseShaderResource::RemoveRenameListener
              ((FD3D12BaseShaderResource *)(this->_padding_ + 0x138),
               (FD3D12ShaderResourceRenameListener *)&this->_padding_);
    plVar1 = &this->_padding_;
    uVar4 = 0;
    bVar6 = (int)*plVar1 != 0;
    if (bVar6) {
      for (; ((uint)*plVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar8 = 0x20;
    if (bVar6) {
      uVar8 = (ulonglong)uVar4;
    }
    pvVar7 = (this->TextureReplaceListenersCS).CriticalSection.Opaque1[uVar8 - 9];
    puVar9 = (undefined1 *)((longlong)pvVar7 + 0x158);
    if (pvVar7 == (void *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    if ((longlong *)puVar9 == plVar1) {
      if ((this->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar5)();
        return pvVar7;
      }
      FD3D12BindlessDescriptorManager::DeferredFreeFromDestructor
                ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),
                 (FRHIDescriptorHandle)this->_padding_);
    }
  }
  pFVar3 = (this->TextureReplaceListeners).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::
  ~FD3D12LinkedAdapterObject<FD3D12RHITextureReference>
            ((FD3D12LinkedAdapterObject<FD3D12RHITextureReference> *)&this->_padding_);
  FRHITextureReference::~FRHITextureReference((FRHITextureReference *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9afe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12RenderTargetView::_scalar_deleting_destructor_(FD3D12RenderTargetView *this,uint param_1)

{
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b020

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void * __thiscall
FD3D12TransientHeap::_scalar_deleting_destructor_(FD3D12TransientHeap *this,uint param_1)

{
  ~FD3D12TransientHeap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b060

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12TransientResourceHeapAllocator::_scalar_deleting_destructor_
          (FD3D12TransientResourceHeapAllocator *this,uint param_1)

{
  FRHITransientResourceHeapAllocator::~FRHITransientResourceHeapAllocator
            ((FRHITransientResourceHeapAllocator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b0a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12UniformBuffer::_scalar_deleting_destructor_(FD3D12UniformBuffer *this,uint param_1)

{
  ~FD3D12UniformBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b0e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12UnorderedAccessView::_scalar_deleting_destructor_
          (FD3D12UnorderedAccessView *this,uint param_1)

{
  longlong *plVar1;
  FD3D12Resource *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->CounterResource).Reference;
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
  FD3D12View::~FD3D12View((FD3D12View *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b150

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12UnorderedAccessView_RHI::_scalar_deleting_destructor_
          (FD3D12UnorderedAccessView_RHI *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::
  ~FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>
            ((FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)&this->field_0xc8);
  puVar3 = *(undefined8 **)&this->field_0xb0;
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
  FD3D12View::~FD3D12View((FD3D12View *)&this->field_0x30);
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b1f0

void * __thiscall
FD3D12VertexDeclaration::_scalar_deleting_destructor_(FD3D12VertexDeclaration *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12View::_scalar_deleting_destructor_(FD3D12View *this,uint param_1)

{
  ~FD3D12View(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b270

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Viewport::_scalar_deleting_destructor_(FD3D12Viewport *this,uint param_1)

{
  ~FD3D12Viewport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b2b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FD3D12WorkGraphPipelineState::_scalar_deleting_destructor_
          (FD3D12WorkGraphPipelineState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ID3D12StateObject *pIVar3;
  ID3D12RootSignature *pIVar4;
  
  DestructItems<TRefCountPtr<FRHIShader>,int>
            ((TRefCountPtr<FRHIShader> *)(this->Shaders).AllocatorInstance.Data,
             (this->Shaders).ArrayNum);
  pFVar1 = (this->Shaders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NodeCountPerName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NodeCountPerName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeCountPerName);
  pFVar1 = (this->RootArgOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->StateObject).Reference;
  if (pIVar3 != (ID3D12StateObject *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->RootSignature).Reference;
  if (pIVar4 != (ID3D12RootSignature *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b370

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
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
       &ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  ___b46f3bad0a733863af183fc5ecd8db38_
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

// `scalar_deleting_destructor' @ 145a9b480

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'
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
       &ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::`2'::FTaskContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::FTaskContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_::__l2::FTracedTask,int>
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

// `scalar_deleting_destructor' @ 145a9b590

void * __thiscall
FRHITransientHeap::_scalar_deleting_destructor_(FRHITransientHeap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
            (&this->Buffers);
  TRHITransientResourceCache<FRHITransientTexture>::
  ~TRHITransientResourceCache<FRHITransientTexture>(&this->Textures);
  pFVar1 = (this->AliasingOverlaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocator).Ranges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocator).RangeFreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b610

void * __thiscall
FRHIWorkGraphPipelineState::_scalar_deleting_destructor_
          (FRHIWorkGraphPipelineState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b650

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
FWindowsD3D12Adapter::_scalar_deleting_destructor_(FWindowsD3D12Adapter *this,uint param_1)

{
  FD3D12Adapter::~FD3D12Adapter((FD3D12Adapter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x898);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b690

void * __thiscall
IRHITransientMemoryCache::_scalar_deleting_destructor_(IRHITransientMemoryCache *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145a9b6c0

void * __thiscall
CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::_scalar_deleting_destructor_
          (SUBOBJECT_HELPER_BASE *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ClearPSODriverCache @ 145a9d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ClearPSODriverCache(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  FString local_e0;
  FString local_d0;
  TStringView<wchar_t> local_c0;
  wchar_t *local_b0;
  undefined4 local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_d0,L"LOCALAPPDATA");
  if (local_d0.Data.ArrayNum < 2) {
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    bVar1 = IsRHIDeviceNVIDIA();
    if (bVar1) {
      local_98.DataPtr = L"";
      if (local_d0.Data.ArrayNum != 0) {
        local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
      }
      iVar7 = 0;
      local_98.Size = iVar7;
      if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
        sVar4 = wcslen(local_98.DataPtr);
        local_98.Size = (int)sVar4;
      }
      local_88 = L"NVIDIA";
      local_78 = L"DXCache";
      local_80 = 6;
      local_70 = 7;
      FPaths::CombineInternal((FString *)&local_c0,&local_98,3);
      `ClearPSODriverCache'::__l5::<lambda_2>::operator()
                (local_e8,(FString *)&local_c0,(wchar_t *)0x0);
      local_98.DataPtr = L"";
      if (local_d0.Data.ArrayNum != 0) {
        local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
      }
      if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
        sVar4 = wcslen(local_98.DataPtr);
        iVar7 = (int)sVar4;
      }
      local_58 = L"PerDriverVersion";
      local_88 = L"..";
      local_78 = L"LocalLow";
      local_80 = 2;
      local_70 = 8;
      local_68 = L"NVIDIA";
      local_60 = 6;
      local_50 = 0x10;
      local_48 = L"DXCache";
      local_40 = 7;
      local_98.Size = iVar7;
      FPaths::CombineInternal(&local_e0,&local_98,6);
      `ClearPSODriverCache'::__l5::<lambda_2>::operator()(local_e8,&local_e0,(wchar_t *)0x0);
      FVar6.Data = (FScriptContainerElement *)local_c0.DataPtr;
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        FVar6.Data = (FScriptContainerElement *)local_c0.DataPtr;
      }
    }
    else {
      bVar1 = IsRHIDeviceAMD();
      if (bVar1) {
        local_98.DataPtr = L"";
        if (local_d0.Data.ArrayNum != 0) {
          local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        }
        iVar7 = 0;
        local_98.Size = iVar7;
        if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
          sVar4 = wcslen(local_98.DataPtr);
          local_98.Size = (int)sVar4;
        }
        local_88 = L"AMD";
        local_78 = L"DxCache";
        local_80 = 3;
        local_70 = 7;
        FPaths::CombineInternal((FString *)&local_c0,&local_98,3);
        `ClearPSODriverCache'::__l5::<lambda_2>::operator()
                  (local_e8,(FString *)&local_c0,(wchar_t *)0x0);
        iVar2 = 0;
        local_98.DataPtr = L"";
        if (local_d0.Data.ArrayNum != 0) {
          local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        }
        iVar3 = iVar2;
        if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
          sVar4 = wcslen(local_98.DataPtr);
          iVar3 = (int)sVar4;
        }
        local_78 = L"DxcCache";
        local_88 = L"AMD";
        local_80 = 3;
        local_70 = 8;
        local_98.Size = iVar3;
        FPaths::CombineInternal(&local_e0,&local_98,3);
        if ((FScriptContainerElement *)local_c0.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.DataPtr);
        }
        local_c0.DataPtr = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
        local_c0.Size = local_e0.Data.ArrayNum;
        local_c0._12_4_ = local_e0.Data.ArrayMax;
        `ClearPSODriverCache'::__l5::<lambda_2>::operator()
                  (local_e8,(FString *)&local_c0,(wchar_t *)0x0);
        local_98.DataPtr = L"";
        if (local_d0.Data.ArrayNum != 0) {
          local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        }
        if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
          sVar4 = wcslen(local_98.DataPtr);
          iVar2 = (int)sVar4;
        }
        local_88 = L"..";
        local_78 = L"LocalLow";
        local_80 = 2;
        local_70 = 8;
        local_68 = L"AMD";
        local_60 = 3;
        local_58 = L"DxCache";
        local_50 = 7;
        local_98.Size = iVar2;
        FPaths::CombineInternal(&local_e0,&local_98,5);
        if ((FScriptContainerElement *)local_c0.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.DataPtr);
        }
        local_c0.DataPtr = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
        local_c0.Size = local_e0.Data.ArrayNum;
        local_c0._12_4_ = local_e0.Data.ArrayMax;
        `ClearPSODriverCache'::__l5::<lambda_2>::operator()
                  (local_e8,(FString *)&local_c0,(wchar_t *)0x0);
        local_98.DataPtr = L"";
        if (local_d0.Data.ArrayNum != 0) {
          local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        }
        if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
          sVar4 = wcslen(local_98.DataPtr);
          iVar7 = (int)sVar4;
        }
        local_88 = L"..";
        local_80 = 2;
        local_78 = L"LocalLow";
        local_70 = 8;
        local_68 = L"AMD";
        local_60 = 3;
        local_58 = L"DxcCache";
        local_50 = 8;
        local_98.Size = iVar7;
        FPaths::CombineInternal(&local_e0,&local_98,5);
        if ((FScriptContainerElement *)local_c0.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.DataPtr);
        }
        local_c0.DataPtr = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
        local_c0.Size = local_e0.Data.ArrayNum;
        local_c0._12_4_ = local_e0.Data.ArrayMax;
        `ClearPSODriverCache'::__l5::<lambda_2>::operator()
                  (local_e8,(FString *)&local_c0,(wchar_t *)0x0);
        FVar6.Data = (FScriptContainerElement *)local_c0.DataPtr;
      }
      else {
        bVar1 = IsRHIDeviceIntel();
        if (bVar1) {
          local_98.DataPtr = L"";
          if (local_d0.Data.ArrayNum != 0) {
            local_98.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          }
          local_98.Size = 0;
          if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
            sVar4 = wcslen(local_98.DataPtr);
            local_98.Size = (int)sVar4;
          }
          local_68 = L"Intel";
          local_88 = L"..";
          local_58 = L"ShaderCache";
          local_80 = 2;
          local_78 = L"LocalLow";
          local_70 = 8;
          local_60 = 5;
          local_50 = 0xb;
          FPaths::CombineInternal(&local_e0,&local_98,5);
          `ClearPSODriverCache'::__l5::<lambda_2>::operator()(local_e8,&local_e0,(wchar_t *)0x0);
          FVar6.Data = local_e0.Data.AllocatorInstance.Data;
        }
        else {
          bVar1 = IsRHIDeviceQualcomm();
          if (!bVar1) goto LAB_145a9d635;
          local_c0.DataPtr = L"";
          if (local_d0.Data.ArrayNum != 0) {
            local_c0.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          }
          local_c0.Size = 0;
          if ((FScriptContainerElement *)local_c0.DataPtr != (FScriptContainerElement *)0x0) {
            sVar4 = wcslen(local_c0.DataPtr);
            local_c0.Size = (int)sVar4;
          }
          local_b0 = L"D3DSCache";
          local_a8 = 9;
          FPaths::CombineInternal(&local_e0,&local_c0,2);
          pIVar5 = IFileManager::Get();
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar6.Data = local_e0.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,FVar6.Data,0,1);
          FVar6.Data = local_e0.Data.AllocatorInstance.Data;
        }
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
LAB_145a9d635:
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateCommonComputeNodeOverrides @ 145a9ede0

/* WARNING: Type propagation algorithm not settling */

CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES * __thiscall
CD3DX12_WORK_GRAPH_SUBOBJECT::CreateCommonComputeNodeOverrides
          (CD3DX12_WORK_GRAPH_SUBOBJECT *this,wchar_t *param_1)

{
  D3D12_NODE **ppDVar1;
  uint *puVar2;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  **ppuVar3;
  uint uVar4;
  D3D12_NODE *pDVar5;
  CD3DX12_WORK_GRAPH_SUBOBJECT *pCVar6;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar7;
  CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *pCVar8;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var9;
  wchar_t *pwVar10;
  CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *pCVar11;
  D3D12_NODE local_38;
  
  pDVar5 = (this->m_NodeDescs)._Mypair._Myval2._Mylast;
  local_38._0_8_ = (CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *)0x0;
  local_38.Shader.Shader = (wchar_t *)0x0;
  local_38.Shader.OverridesType = D3D12_NODE_OVERRIDES_TYPE_NONE;
  local_38.Shader._12_4_ = 0;
  local_38.Shader.field2_0x10.pBroadcastingLaunchOverrides =
       (D3D12_BROADCASTING_LAUNCH_OVERRIDES *)0x0;
  if (pDVar5 == (this->m_NodeDescs)._Mypair._Myval2._Myend) {
    std::vector<D3D12_NODE,std::allocator<D3D12_NODE>_>::_Emplace_reallocate<D3D12_NODE>
              (&this->m_NodeDescs,pDVar5,&local_38);
  }
  else {
    *(undefined8 *)pDVar5 = 0;
    (pDVar5->Shader).Shader = (wchar_t *)0x0;
    *(undefined8 *)&(pDVar5->Shader).OverridesType = 0;
    (pDVar5->Shader).field2_0x10.pBroadcastingLaunchOverrides =
         (D3D12_BROADCASTING_LAUNCH_OVERRIDES *)0x0;
    ppDVar1 = &(this->m_NodeDescs)._Mypair._Myval2._Mylast;
    *ppDVar1 = *ppDVar1 + 1;
  }
  pDVar5 = (this->m_NodeDescs)._Mypair._Myval2._Myfirst;
  puVar2 = &(this->m_Desc).NumExplicitlyDefinedNodes;
  *puVar2 = *puVar2 + 1;
  (this->m_Desc).pExplicitlyDefinedNodes = pDVar5;
  pCVar8 = ::operator_new(0xb0);
  pCVar11 = (CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *)0x0;
  if (pCVar8 != (CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *)0x0) {
    local_38.Shader.Shader =
         (wchar_t *)
         CONCAT44(local_38.Shader.Shader._4_4_,
                  (int)((longlong)(this->m_NodeDescs)._Mypair._Myval2._Mylast -
                        (longlong)(this->m_NodeDescs)._Mypair._Myval2._Myfirst >> 5) + -1);
    pCVar8->_padding_ = (longlong)&___7CD3DX12_NODE_HELPER_BASE__6B_;
    ((Backreference *)&pCVar8->_padding_)->m_pGraph = this;
    pCVar8->_padding_ = (longlong)local_38.Shader.Shader;
    (((StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
       *)&pCVar8->_padding_)->m_Strings)._Mypair._Myval2._Myhead =
         (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
          *)0x0;
    pCVar8->_padding_ = 0;
    local_38._0_8_ = this;
    p_Var9 = ::operator_new(0x30);
    p_Var9->_Next = p_Var9;
    p_Var9->_Prev = p_Var9;
    (((StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
       *)&pCVar8->_padding_)->m_Strings)._Mypair._Myval2._Myhead = p_Var9;
    pCVar8->_padding_ = (longlong)&___7CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES__6B_;
    (pCVar8->m_UINTs)._Mypair._Myval2._Myhead = (_Flist_node<unsigned_int,void_*> *)0x0;
    (pCVar8->m_NodeIDs)._Mypair._Myval2._Myhead = (_Flist_node<D3D12_NODE_ID,void_*> *)0x0;
    CD3DX12_NODE_OUTPUT_OVERRIDES::CD3DX12_NODE_OUTPUT_OVERRIDES
              (&pCVar8->m_NodeOutputOverrides,&(pCVar8->Overrides).pOutputOverrides,
               &(pCVar8->Overrides).NumOutputOverrides);
    pCVar6 = ((Backreference *)&pCVar8->_padding_)->m_pGraph;
    uVar4 = *(uint *)&pCVar8->_padding_;
    (pCVar8->Overrides).pLocalRootArgumentsTableIndex = (uint *)0x0;
    (pCVar8->Overrides).pProgramEntry = (int *)0x0;
    (pCVar8->Overrides).pNewName = (D3D12_NODE_ID *)0x0;
    (pCVar8->Overrides).pShareInputOf = (D3D12_NODE_ID *)0x0;
    *(undefined8 *)&(pCVar8->Overrides).NumOutputOverrides = 0;
    (pCVar8->Overrides).pOutputOverrides = (D3D12_NODE_OUTPUT_OVERRIDES *)0x0;
    pDVar5 = (pCVar6->m_NodeDescs)._Mypair._Myval2._Myfirst;
    pDVar5[uVar4].NodeType = D3D12_NODE_TYPE_SHADER;
    pDVar5[uVar4].Shader.OverridesType = D3D12_NODE_OVERRIDES_TYPE_COMMON_COMPUTE;
    pDVar5[uVar4].Shader.field2_0x10.pBroadcastingLaunchOverrides =
         (D3D12_BROADCASTING_LAUNCH_OVERRIDES *)&pCVar8->Overrides;
    (((Backreference *)&pCVar8->_padding_)->m_pGraph->m_NodeDescs)._Mypair._Myval2._Myfirst
    [*(uint *)&pCVar8->_padding_].Shader.Shader = (wchar_t *)0x0;
    pCVar11 = pCVar8;
  }
  puVar7 = (this->m_OwnedNodeHelpers)._Mypair._Myval2._Mylast;
  local_38._0_8_ = pCVar11;
  if (puVar7 == (this->m_OwnedNodeHelpers)._Mypair._Myval2._Myend) {
    std::
    vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
    ::_Emplace_reallocate<CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES_*_&>
              (&this->m_OwnedNodeHelpers,puVar7,(CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES **)&local_38)
    ;
  }
  else {
    (puVar7->_Mypair)._Myval2 = (CD3DX12_NODE_HELPER_BASE *)pCVar11;
    ppuVar3 = &(this->m_OwnedNodeHelpers)._Mypair._Myval2._Mylast;
    *ppuVar3 = *ppuVar3 + 1;
  }
  pwVar10 = CD3DX12_STATE_OBJECT_DESC::
            StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
            ::LocalCopy((StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                         *)&pCVar11->_padding_,param_1,false);
  (((Backreference *)&pCVar11->_padding_)->m_pGraph->m_NodeDescs)._Mypair._Myval2._Myfirst
  [*(uint *)&pCVar11->_padding_].Shader.Shader = pwVar10;
  return pCVar11;
}

// CreateComputePipelineState @ 145a9ef80

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

void __cdecl
CreateComputePipelineState
          (ID3D12PipelineState **param_1,FD3D12Adapter *param_2,
          ComputePipelineCreationArgs_POD *param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar2 = (param_3->Desc).Extensions;
  if (pTVar2 == (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_145a9f0dd:
    CreatePipelineStateWrapper(param_1,param_2,param_3);
  }
  else {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    iVar5 = pTVar2->ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = pFVar6 + (longlong)iVar5 * 0xc;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 0xc) {
      iVar5 = *(int *)pFVar6;
      if (iVar5 == 0x10de) {
        if (pFVar6[10] == (FScriptContainerElement)0x4) {
          iVar5 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread
                            ((param_2->RootDevice).Reference,*(undefined2 *)(pFVar6 + 6),0);
          if ((iVar5 != 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("NvStatus == NVAPI_OK",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                                 ,0x387,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          CreatePipelineStateWrapper(param_1,param_2,param_3);
          iVar5 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread
                            ((param_2->RootDevice).Reference,0xffffffff,0);
          if (iVar5 == 0) {
            return;
          }
          bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("NvStatus == NVAPI_OK",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                             ,0x391,L"");
          if (!bVar4) {
            return;
          }
          goto code_r0x000145a9f0da;
        }
      }
      else if ((iVar5 == 0x1002) || (iVar5 == 0x8086)) goto LAB_145a9f0dd;
    }
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3a7,L"");
    if (bVar4) {
code_r0x000145a9f0da:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// CreateGraphicsPipelineState @ 145a9f2b0

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

void __cdecl
CreateGraphicsPipelineState
          (ID3D12PipelineState **param_1,FD3D12Adapter *param_2,
          GraphicsPipelineCreationArgs_POD *param_3)

{
  FShaderCodeVendorExtension *pFVar1;
  ForElementType<FShaderCodeVendorExtension> FVar2;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FShaderCodeVendorExtension *pFVar7;
  ForElementType<FShaderCodeVendorExtension> FVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74 [4];
  TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar3 = (param_3->Desc).VSExtensions;
  if ((((pTVar3 == (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) &&
       ((param_3->Desc).MSExtensions ==
        (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0)) &&
      ((param_3->Desc).ASExtensions ==
       (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (((param_3->Desc).PSExtensions ==
       (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0 &&
      ((param_3->Desc).GSExtensions ==
       (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0)))) {
    CreatePipelineStateWrapper(param_1,param_2,param_3);
  }
  else {
    local_70.AllocatorInstance.SecondaryData = (ForElementType<FShaderCodeVendorExtension>)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 2;
    if (pTVar3 != (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = pTVar3->ArrayNum;
      pFVar7 = (FShaderCodeVendorExtension *)(pTVar3->AllocatorInstance).Data;
      pFVar1 = pFVar7 + iVar6;
      while( true ) {
        if (pTVar3->ArrayNum != iVar6) {
          local_78 = 0;
          `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_78);
        }
        if (pFVar7 == pFVar1) break;
        TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FShaderCodeVendorExtension_const_&>(&local_70,pFVar7);
        pFVar7 = pFVar7 + 1;
      }
    }
    pTVar3 = (param_3->Desc).MSExtensions;
    if (pTVar3 != (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = pTVar3->ArrayNum;
      pFVar7 = (FShaderCodeVendorExtension *)(pTVar3->AllocatorInstance).Data;
      pFVar1 = pFVar7 + iVar6;
      while( true ) {
        if (pTVar3->ArrayNum != iVar6) {
          local_77 = 0;
          `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_77);
        }
        if (pFVar7 == pFVar1) break;
        TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FShaderCodeVendorExtension_const_&>(&local_70,pFVar7);
        pFVar7 = pFVar7 + 1;
      }
    }
    pTVar3 = (param_3->Desc).ASExtensions;
    if (pTVar3 != (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = pTVar3->ArrayNum;
      pFVar7 = (FShaderCodeVendorExtension *)(pTVar3->AllocatorInstance).Data;
      pFVar1 = pFVar7 + iVar6;
      while( true ) {
        if (pTVar3->ArrayNum != iVar6) {
          local_76 = 0;
          `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_76);
        }
        if (pFVar7 == pFVar1) break;
        TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FShaderCodeVendorExtension_const_&>(&local_70,pFVar7);
        pFVar7 = pFVar7 + 1;
      }
    }
    pTVar3 = (param_3->Desc).PSExtensions;
    if (pTVar3 != (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = pTVar3->ArrayNum;
      pFVar7 = (FShaderCodeVendorExtension *)(pTVar3->AllocatorInstance).Data;
      pFVar1 = pFVar7 + iVar6;
      while( true ) {
        if (pTVar3->ArrayNum != iVar6) {
          local_75 = 0;
          `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_75);
        }
        if (pFVar7 == pFVar1) break;
        TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FShaderCodeVendorExtension_const_&>(&local_70,pFVar7);
        pFVar7 = pFVar7 + 1;
      }
    }
    pTVar3 = (param_3->Desc).GSExtensions;
    if (pTVar3 != (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar6 = pTVar3->ArrayNum;
      pFVar7 = (FShaderCodeVendorExtension *)(pTVar3->AllocatorInstance).Data;
      pFVar1 = pFVar7 + iVar6;
      while( true ) {
        if (pTVar3->ArrayNum != iVar6) {
          local_74[0] = 0;
          `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_74);
        }
        if (pFVar7 == pFVar1) break;
        TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FShaderCodeVendorExtension_const_&>(&local_70,pFVar7);
        pFVar7 = pFVar7 + 1;
      }
    }
    lVar9 = (longlong)local_70.ArrayNum;
    FVar8 = (ForElementType<FShaderCodeVendorExtension>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<FShaderCodeVendorExtension>)0x0)
    {
      FVar8 = local_70.AllocatorInstance.SecondaryData;
    }
    if ((local_70.ArrayNum < 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (ForElementType<FShaderCodeVendorExtension>)((longlong)FVar8 + lVar9 * 0xc);
    for (; FVar8 != FVar2;
        FVar8 = (ForElementType<FShaderCodeVendorExtension>)((longlong)FVar8 + 0xc)) {
      iVar6 = *(int *)FVar8;
      if (iVar6 == 0x10de) {
        if (*(uchar *)((longlong)FVar8 + 10) == '\x04') {
          iVar6 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread
                            ((param_2->RootDevice).Reference,*(undefined2 *)((longlong)FVar8 + 6),0)
          ;
          if ((iVar6 != 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("NvStatus == NVAPI_OK",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                                 ,0x387,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          CreatePipelineStateWrapper(param_1,param_2,param_3);
          iVar6 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread
                            ((param_2->RootDevice).Reference,0xffffffff,0);
          if ((iVar6 == 0) ||
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("NvStatus == NVAPI_OK",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                                 ,0x391,L""), !bVar5)) goto LAB_145a9f5cb;
          goto code_r0x000145a9f5ca;
        }
      }
      else if ((iVar6 == 0x1002) || (iVar6 == 0x8086)) {
        CreatePipelineStateWrapper(param_1,param_2,param_3);
        goto LAB_145a9f5cb;
      }
    }
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3a7,L"");
    if (bVar5) {
code_r0x000145a9f5ca:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_145a9f5cb:
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<FShaderCodeVendorExtension>)0x0)
    {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// CreateIntelExtensionsContext @ 145a9f6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

INTCExtensionContext * __cdecl
CreateIntelExtensionsContext(ID3D12Device *param_1,INTCExtensionInfo *param_2,uint param_3)

{
  INTCExtensionVersion *pIVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  ulong64 _Size;
  void *_Dst;
  INTCExtensionAppInfo1 *pIVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_a8 [2];
  INTCExtensionContext *local_a0;
  INTCExtensionContext *local_98;
  INTCExtensionAppInfo1 local_90;
  wchar_t *local_60;
  undefined8 uStack_58;
  uint local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar4 = INTC_LoadExtensionsLibrary(0,0x8086,param_3);
  if (iVar4 < 0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    local_a8[0] = 0;
    iVar4 = INTC_D3D12_GetSupportedVersions(param_1,0,local_a8);
    if (-1 < iVar4) {
      uVar7 = CONCAT44(0,local_a8[0]);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7;
      _Size = SUB168(ZEXT816(0xc) * auVar2,0);
      if (SUB168(ZEXT816(0xc) * auVar2,8) != 0) {
        _Size = 0xffffffffffffffff;
      }
      _Dst = operator_new__(_Size);
      if (_Dst == (void *)0x0) {
        INTC_D3D12_GetSupportedVersions(param_1,0,local_a8);
      }
      else {
        memset(_Dst,0,_Size);
        if (uVar7 != 0) {
          memset(_Dst,0,uVar7 * 0xc);
        }
        iVar4 = INTC_D3D12_GetSupportedVersions(param_1,_Dst,local_a8);
        if ((-1 < iVar4) && (uVar7 = 0, local_a8[0] != 0)) {
          do {
            pIVar1 = (INTCExtensionVersion *)((longlong)_Dst + uVar7 * 0xc);
            bVar3 = MatchIntelExtensionVersion(pIVar1);
            if (bVar3) {
              uVar6 = pIVar1->APIVersion;
              (param_2->RequestedExtensionVersion).HWFeatureLevel = pIVar1->HWFeatureLevel;
              (param_2->RequestedExtensionVersion).APIVersion = uVar6;
              (param_2->RequestedExtensionVersion).Revision = pIVar1->Revision;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < local_a8[0]);
        }
        operator_delete__(_Dst);
      }
    }
    if (((param_2->RequestedExtensionVersion).HWFeatureLevel == 0) &&
       ((param_2->RequestedExtensionVersion).APIVersion == 0)) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else {
      local_a0 = (INTCExtensionContext *)0x0;
      pIVar5 = GetIntelApplicationInfo(&local_90);
      local_60 = pIVar5->pApplicationName;
      uStack_58 = *(undefined8 *)&(pIVar5->ApplicationVersion).field0_0x0;
      local_50 = (pIVar5->ApplicationVersion).field0_0x0._s_0.patch;
      uStack_4c = (pIVar5->ApplicationVersion).field0_0x0._s_0.reserved;
      uStack_48 = *(undefined4 *)&pIVar5->pEngineName;
      uStack_44 = *(undefined4 *)((longlong)&pIVar5->pEngineName + 4);
      local_40 = (pIVar5->EngineVersion).field0_0x0._s_0.major;
      uStack_3c = (pIVar5->EngineVersion).field0_0x0._s_0.minor;
      uStack_38 = (pIVar5->EngineVersion).field0_0x0._s_0.patch;
      uStack_34 = (pIVar5->EngineVersion).field0_0x0._s_0.reserved;
      iVar4 = INTC_D3D12_CreateDeviceExtensionContext1(param_1,&local_a0,param_2,&local_60);
      if (-1 < iVar4) {
        if ((byte)LogD3D12RHI._0_1_ < 5) {
          return local_a0;
        }
        local_b8 = (param_2->RequestedExtensionVersion).Revision;
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        return local_a0;
      }
      if (iVar4 == -0x7fffbffe) {
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else if (iVar4 == -0x7ff8ffa9) {
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_a0 == (INTCExtensionContext *)0x0) {
        return (INTCExtensionContext *)0x0;
      }
      local_98 = local_a0;
      iVar4 = INTC_DestroyDeviceExtensionContext(&local_98);
      if (iVar4 < 0) {
        if (4 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      else if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
  }
  return (INTCExtensionContext *)0x0;
}

// CreatePipelineStateFromStream @ 145a9f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __cdecl
CreatePipelineStateFromStream
          (ID3D12PipelineState **param_1,ID3D12Device2 *param_2,
          D3D12_PIPELINE_STATE_STREAM_DESC *param_3,ID3D12PipelineLibrary1 *param_4,wchar_t *param_5
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PSOCreateTime> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  uint uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  bool bVar16;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FColor_u_0 local_b8;
  uint uStack_b4;
  FName local_b0;
  FColor_u_0 local_a0;
  uint local_9c;
  FColor_u_0 local_98;
  uint local_94;
  FName local_90;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  if (param_4 != (ID3D12PipelineLibrary1 *)0x0) {
    iVar5 = (**(code **)((longlong)*param_4 + 0x68))
                      (param_4,param_5,param_3,&_GUID_765a30f3_f624_4c6f_a828_ace948622445,param_1);
    if (iVar5 != -0x7ff8ffa9) {
      return iVar5;
    }
    FVar8 = StatPtr_STAT_PSOCreateTime;
    if (StatPtr_STAT_PSOCreateTime == (FThreadSafeStaticStat<FStat_STAT_PSOCreateTime>)0x0) {
      pFVar7 = FName::FName(&local_50,"STAT_PSOCreateTime");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_PSOCreateTime>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOCreateTime,*pFVar7,
                         L"Create time","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
                         L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,true,false,MCR_Invalid
                        );
    }
    FVar14 = *(FName *)FVar8;
    bVar4 = false;
    bVar3 = false;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    FVar12.Bits = (uint)FVar14.ComparisonIndex.Value;
    uVar11 = FVar14.Number;
    if ((FVar12.Bits == 0) && (uVar11 == 0)) {
      iVar5 = (**(code **)((longlong)*param_2 + 0x178))
                        (param_2,param_3,&_GUID_765a30f3_f624_4c6f_a828_ace948622445,param_1);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar4 = false;
        bVar3 = true;
        if (-1 < CpuChannel->Enabled) {
          local_a0.Bits = FVar12.Bits;
          local_9c = uVar11;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_a0._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                     ,0x2e8);
          bVar4 = true;
          bVar3 = true;
        }
      }
      bVar16 = FThreadStats::bPrimaryEnable != false;
      FVar13 = local_90;
      if (bVar16) {
        local_b8.Bits = FVar12.Bits;
        uStack_b4 = uVar11;
        FThreadStats::AddMessage(FVar14,CycleScopeStart);
        FVar13 = FVar14;
      }
      iVar5 = (**(code **)((longlong)*param_2 + 0x178))
                        (param_2,param_3,&_GUID_765a30f3_f624_4c6f_a828_ace948622445,param_1);
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar16) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
          local_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
          local_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_80);
          local_70.StatData.Pad[4] = '\0';
          local_70.StatData.Pad[5] = '\0';
          local_70.StatData.Pad[6] = '\0';
          local_70.StatData.Pad[7] = '\0';
          local_70.StatData.Pad[0] = local_80.s.LowPart._0_1_;
          local_70.StatData.Pad[1] = local_80.s.LowPart._1_1_;
          local_70.StatData.Pad[2] = local_80.s.LowPart._2_1_;
          local_70.StatData.Pad[3] = local_80.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar9,&local_70);
          piVar1 = &pFVar9->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar9,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar9,false,false);
          }
        }
      }
    }
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar5 = (**(code **)((longlong)*param_4 + 0x40))(param_4,param_5,*param_1);
    if (iVar5 != -0x7ff8ffa9) {
      return iVar5;
    }
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("hr != ((HRESULT)0x80070057L)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x2f0,L"");
    if (!bVar4) {
      return 0x80070057;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  FVar15.Value = 0;
  FVar8 = StatPtr_STAT_PSOCreateTime;
  if (StatPtr_STAT_PSOCreateTime == (FThreadSafeStaticStat<FStat_STAT_PSOCreateTime>)0x0) {
    pFVar7 = FName::FName(local_48,"STAT_PSOCreateTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PSOCreateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOCreateTime,*pFVar7,
                       L"Create time","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
                       L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar8;
  bVar4 = false;
  bVar3 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar12.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar12.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar12.Bits;
        local_94 = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                   ,0x2f6);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar12.Bits;
      uStackX_24 = uVar11;
      local_b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar16 = true;
      FVar15.Value = local_b0.ComparisonIndex.Value;
      goto LAB_145a9fd8b;
    }
  }
  bVar16 = false;
  FVar14 = local_b0;
LAB_145a9fd8b:
  iVar5 = (**(code **)((longlong)*param_2 + 0x178))
                    (param_2,param_3,&_GUID_765a30f3_f624_4c6f_a828_ace948622445,param_1);
  if ((iVar5 < 0) && (1 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    if (pFVar9->bWaitForExplicitFlush < pFVar9->ScopeCount) {
      local_60.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_78);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar9,&local_60);
      piVar1 = &pFVar9->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  return iVar5;
}

// CreatePipelineStateWrapper @ 145a9fec0

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

void __cdecl
CreatePipelineStateWrapper
          (ID3D12PipelineState **param_1,FD3D12Adapter *param_2,
          ComputePipelineCreationArgs_POD *param_3)

{
  ID3D12Device2 *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  D3D12_PIPELINE_STATE_STREAM_DESC local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  wchar_t local_70 [20];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pIVar1 = (param_2->RootDevice2).Reference;
  FastHashName(local_70,(param_3->Desc).CombinedHash);
  if ((pIVar1 == (ID3D12Device2 *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("pDevice2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                         ,0x34d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if ((*(int *)&(param_3->Desc).Desc.field_0x30 != 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("this->Flags == D3D12_PIPELINE_STATE_FLAG_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                         ,99,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b4 = *(undefined4 *)&(param_3->Desc).Desc.field_0x18;
  local_98 = *(undefined8 *)&(param_3->Desc).Desc.field_0x8;
  uStack_90 = *(undefined8 *)&(param_3->Desc).Desc.field_0x10;
  local_a8 = *(undefined8 *)&(param_3->Desc).Desc;
  local_c8.pPipelineStateSubobjectStream = &local_b8;
  local_80 = *(undefined8 *)&(param_3->Desc).Desc.field_0x20;
  uStack_78 = *(undefined8 *)&(param_3->Desc).Desc.field_0x28;
  local_b8 = 0x12;
  local_b0 = 0;
  local_a0 = 6;
  local_88 = 0x13;
  local_c8.SizeInBytes = 0x48;
  iVar4 = CreatePipelineStateFromStream
                    (param_1,pIVar1,&local_c8,(ID3D12PipelineLibrary1 *)param_3->Library,local_70);
  if (iVar4 < 0) {
    if (iVar4 + 0x7785fffbU < 2) {
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"hr",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                 ,0x358,(ID3D12Device *)pIVar1,&local_d8);
    }
    else {
      Counter = Counter + 1;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      if (Counter < 10) {
        DumpShaderAsm(&local_e8,(D3D12_SHADER_BYTECODE *)&(param_3->Desc).Desc.field_0x8);
      }
      if (2 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_creat_15109c6d8,
                   (FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreatePipelineStateWrapper @ 145aa00a0

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

void __cdecl
CreatePipelineStateWrapper
          (ID3D12PipelineState **param_1,FD3D12Adapter *param_2,
          GraphicsPipelineCreationArgs_POD *param_3)

{
  FD3D12_GRAPHICS_PIPELINE_STATE_DESC *this;
  ID3D12Device2 *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  uint uVar6;
  undefined1 auStackY_618 [32];
  FString local_5e8;
  FString local_5d8;
  D3D12_PIPELINE_STATE_STREAM_DESC local_5c8;
  D3D12_PIPELINE_STATE_STREAM_DESC local_5b8;
  FD3D12_MESH_PIPELINE_STATE_STREAM local_5a8;
  FD3D12_GRAPHICS_PIPELINE_STATE_STREAM local_320;
  wchar_t local_48 [20];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_618;
  pIVar1 = (param_2->RootDevice2).Reference;
  FastHashName(local_48,(param_3->Desc).CombinedHash);
  if ((pIVar1 == (ID3D12Device2 *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("pDevice2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                         ,0x319,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = &(param_3->Desc).Desc;
  if ((param_3->Desc).Desc.MS.BytecodeLength == 0) {
    FD3D12_GRAPHICS_PIPELINE_STATE_DESC::PipelineStateStream(this,&local_320);
    local_5b8.pPipelineStateSubobjectStream = &local_320;
    local_5b8.SizeInBytes = 0x2d8;
    iVar4 = CreatePipelineStateFromStream
                      (param_1,pIVar1,&local_5b8,(ID3D12PipelineLibrary1 *)param_3->Library,local_48
                      );
    if (-1 < iVar4) {
      return;
    }
    DumpGraphicsPSO(this,local_48);
    if (1 < iVar4 + 0x7785fffbU) {
      return;
    }
    pFVar5 = &local_5d8;
    local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar6 = 0x33b;
    local_5d8.Data.ArrayNum = 0;
    local_5d8.Data.ArrayMax = 0;
  }
  else {
    FD3D12_GRAPHICS_PIPELINE_STATE_DESC::MeshPipelineStateStream(this,&local_5a8);
    local_5c8.pPipelineStateSubobjectStream = &local_5a8;
    local_5c8.SizeInBytes = 0x288;
    iVar4 = CreatePipelineStateFromStream
                      (param_1,pIVar1,&local_5c8,(ID3D12PipelineLibrary1 *)param_3->Library,local_48
                      );
    if (-1 < iVar4) {
      return;
    }
    DumpGraphicsPSO(this,local_48);
    if (1 < iVar4 + 0x7785fffbU) {
      return;
    }
    pFVar5 = &local_5e8;
    local_5e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar6 = 0x329;
    local_5e8.Data.ArrayNum = 0;
    local_5e8.Data.ArrayMax = 0;
  }
  D3D12RHI::VerifyD3D12Result
            (iVar4,"hr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
             ,uVar6,(ID3D12Device *)pIVar1,pFVar5);
  return;
}

// D3D12RHI_IsRenderDocPresent @ 145aa0a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl D3D12RHI_IsRenderDocPresent(ID3D12Device *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  IID local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  HVar1 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_20);
  if (-1 < HVar1) {
    local_28 = (longlong *)0x0;
    iVar2 = (**(code **)*param_1)(param_1,&local_20,&local_28);
    if (-1 < iVar2) {
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))();
      }
      return true;
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return false;
}

// Data @ 145aa0aa0

void * __thiscall CD3DX12_DXIL_LIBRARY_SUBOBJECT::Data(CD3DX12_DXIL_LIBRARY_SUBOBJECT *this)

{
  return &this->m_Desc;
}

// Data @ 145aa0ab0

void * __thiscall
CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT::Data(CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *this)

{
  return &this->m_pRootSig;
}

// Data @ 145aa0ac0

void * __thiscall
CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT::Data(CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *this)

{
  return &this->m_pRootSig;
}

// Data @ 145aa0ad0

void * __thiscall
CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT::Data
          (CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *this)

{
  return &this->m_Desc;
}

// Data @ 145aa0ae0

void * __thiscall CD3DX12_WORK_GRAPH_SUBOBJECT::Data(CD3DX12_WORK_GRAPH_SUBOBJECT *this)

{
  return &this->m_Desc;
}

// Destroy @ 145aa0bc0

void __thiscall ComputePipelineCreationArgs_POD::Destroy(ComputePipelineCreationArgs_POD *this)

{
  FMemory::Free(*(void **)&(this->Desc).Desc.field_0x8);
  return;
}

// Destroy @ 145aa0bd0

void __thiscall GraphicsPipelineCreationArgs_POD::Destroy(GraphicsPipelineCreationArgs_POD *this)

{
  FMemory::Free((this->Desc).Desc.VS.pShaderBytecode);
  FMemory::Free((this->Desc).Desc.MS.pShaderBytecode);
  FMemory::Free((this->Desc).Desc.AS.pShaderBytecode);
  FMemory::Free((this->Desc).Desc.PS.pShaderBytecode);
  FMemory::Free((this->Desc).Desc.GS.pShaderBytecode);
  return;
}

// DestroyIntelExtensionsContext @ 145aa0e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestroyIntelExtensionsContext(INTCExtensionContext *param_1)

{
  int iVar1;
  INTCExtensionContext *local_res8 [4];
  
  if (param_1 != (INTCExtensionContext *)0x0) {
    local_res8[0] = param_1;
    iVar1 = INTC_DestroyDeviceExtensionContext(local_res8);
    if (iVar1 < 0) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    }
    else if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return;
    }
  }
  return;
}

// DumpGraphicsPSO @ 145aa5e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DumpGraphicsPSO(FD3D12_GRAPHICS_PIPELINE_STATE_DESC *param_1,wchar_t *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FString local_28;
  
  uVar1 = 0;
  Counter = Counter + 1;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (9 < Counter) goto LAB_145aa6343;
  FString::AppendfImpl(&local_28,L"AlphaToCoverageEnable = %u\n");
  FString::AppendfImpl(&local_28,L"IndependentBlendEnable = %u\n");
  uVar2 = uVar1;
  if ((param_1->BlendState).IndependentBlendEnable == 0) {
    uVar3 = 1;
LAB_145aa5f10:
    do {
      FString::AppendfImpl
                (&local_28,
                 L"RenderTarget[%u] = { %u, %u, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X }\n")
      ;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  else {
    uVar3 = (param_1->RTFormatArray).NumRenderTargets;
    if (uVar3 != 0) goto LAB_145aa5f10;
  }
  FString::AppendfImpl(&local_28,L"SampleMask = 0x%X\n");
  FString::AppendfImpl(&local_28,L"FillMode = %u\n");
  FString::AppendfImpl(&local_28,L"CullMode = %u\n");
  FString::AppendfImpl(&local_28,L"FrontCounterClockwise = %u\n");
  FString::AppendfImpl(&local_28,L"DepthBias = %d\n");
  FString::AppendfImpl(&local_28,L"DepthBiasClamp = %f\n");
  FString::AppendfImpl(&local_28,L"SlopeScaledDepthBias = %f\n");
  FString::AppendfImpl(&local_28,L"DepthClipEnable = %u\n");
  FString::AppendfImpl(&local_28,L"MultisampleEnable = %u\n");
  FString::AppendfImpl(&local_28,L"AntialiasedLineEnable = %u\n");
  FString::AppendfImpl(&local_28,L"ForcedSampleCount = %u\n");
  FString::AppendfImpl(&local_28,L"ConservativeRaster = %u\n");
  FString::AppendfImpl(&local_28,L"DepthEnable = %u\n");
  FString::AppendfImpl(&local_28,L"DepthWriteMask = %u\n");
  FString::AppendfImpl(&local_28,L"DepthFunc = %u\n");
  FString::AppendfImpl(&local_28,L"StencilEnable = %u\n");
  FString::AppendfImpl(&local_28,L"StencilReadMask = 0x%X\n");
  FString::AppendfImpl(&local_28,L"StencilWriteMask = 0x%X\n");
  FString::AppendfImpl(&local_28,L"FrontFace = { %u, %u, %u, %u }\n");
  FString::AppendfImpl(&local_28,L"BackFace  = { %u, %u, %u, %u }\n");
  FString::AppendfImpl(&local_28,L"InputLayout.NumElements = %u\n");
  uVar2 = uVar1;
  if ((param_1->InputLayout).NumElements != 0) {
    do {
      FString::AppendfImpl(&local_28,L"InputLayout[%u] = { \"%S\", %u, 0x%X, %u, %u, 0x%X, %u }\n");
      uVar2 = uVar2 + 1;
    } while (uVar2 < (param_1->InputLayout).NumElements);
  }
  FString::AppendfImpl(&local_28,L"IBStripCutValue = 0x%X\n");
  FString::AppendfImpl(&local_28,L"PrimitiveTopologyType = 0x%X\n");
  FString::AppendfImpl(&local_28,L"NumRenderTargets = %u\n");
  if ((param_1->RTFormatArray).NumRenderTargets != 0) {
    do {
      FString::AppendfImpl(&local_28,L"RTVFormats[%u] = 0x%X\n");
      uVar1 = uVar1 + 1;
    } while (uVar1 < (param_1->RTFormatArray).NumRenderTargets);
  }
  FString::AppendfImpl(&local_28,L"DSVFormat = 0x%X\n");
  FString::AppendfImpl(&local_28,L"SampleDesc = { %u, %u }\n");
  FString::AppendfImpl(&local_28,L"NodeMask = 0x%X\n");
  FString::AppendfImpl(&local_28,L"Flags = 0x%X\n");
  DumpShaderAsm(&local_28,&param_1->VS);
  DumpShaderAsm(&local_28,&param_1->MS);
  DumpShaderAsm(&local_28,&param_1->AS);
  DumpShaderAsm(&local_28,&param_1->GS);
  DumpShaderAsm(&local_28,&param_1->PS);
LAB_145aa6343:
  if (2 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpShaderAsm @ 145aa63a0

void __cdecl DumpShaderAsm(FString *param_1,D3D12_SHADER_BYTECODE *param_2)

{
  wchar_t *_Str;
  int iVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  size_t sVar3;
  int iVar4;
  ForAnyElementType lpLibFileName;
  ID3D10Blob *local_res10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  _Str = CompilerPath;
  if (param_2->pShaderBytecode == (void *)0x0) {
    return;
  }
  if (D3DDisasmFunc !=
      (_func___cdecl_T_HRESULT_void_ptr_ulong64_uint_char_ptr_ID3D10Blob_ptr_ptr *)0x0)
  goto LAB_145aa64c1;
  if (CompilerDLL == (HINSTANCE__ *)0x0) {
    pTVar2 = &FPaths::EngineDir(&local_28)->Data;
    sVar3 = wcslen(_Str);
    iVar1 = (int)sVar3;
    if ((pTVar2->ArrayNum != 0) || (iVar4 = 2, iVar1 == -1)) {
      iVar4 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_38,pTVar2,iVar4 + iVar1);
    FString::PathAppend((FString *)&local_38,_Str,iVar1);
    lpLibFileName.Data = (FScriptContainerElement *)L"";
    if (local_38.ArrayNum != 0) {
      lpLibFileName.Data = local_38.AllocatorInstance.Data;
    }
    CompilerDLL = (HINSTANCE__ *)LoadLibraryW((LPCWSTR)lpLibFileName.Data);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (CompilerDLL != (HINSTANCE__ *)0x0) goto LAB_145aa64a5;
  }
  else {
LAB_145aa64a5:
    D3DDisasmFunc =
         (_func___cdecl_T_HRESULT_void_ptr_ulong64_uint_char_ptr_ID3D10Blob_ptr_ptr *)
         GetProcAddress((HMODULE)CompilerDLL,"D3DDisassemble");
  }
  if (D3DDisasmFunc ==
      (_func___cdecl_T_HRESULT_void_ptr_ulong64_uint_char_ptr_ID3D10Blob_ptr_ptr *)0x0) {
    return;
  }
LAB_145aa64c1:
  local_res10 = (ID3D10Blob *)0x0;
  iVar1 = (*D3DDisasmFunc)(param_2->pShaderBytecode,param_2->BytecodeLength,0,"",&local_res10);
  if (-1 < iVar1) {
    (**(code **)((longlong)*local_res10 + 0x18))();
    (**(code **)((longlong)*local_res10 + 0x20))();
    FString::AppendfImpl(param_1,L"%.*hs\n");
    (**(code **)((longlong)*local_res10 + 0x10))();
  }
  return;
}

// EnableIntelAppDiscovery @ 145aa6600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl EnableIntelAppDiscovery(uint param_1)

{
  int iVar1;
  INTCExtensionAppInfo1 *pIVar2;
  undefined1 auStack_98 [32];
  INTCExtensionAppInfo1 local_78;
  wchar_t *local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar1 = INTC_LoadExtensionsLibrary(0,0x8086,param_1);
  if (iVar1 < 0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return;
    }
  }
  else {
    pIVar2 = GetIntelApplicationInfo(&local_78);
    local_48 = pIVar2->pApplicationName;
    uStack_40 = *(undefined8 *)&(pIVar2->ApplicationVersion).field0_0x0;
    local_38 = (pIVar2->ApplicationVersion).field0_0x0._s_0.patch;
    uStack_34 = (pIVar2->ApplicationVersion).field0_0x0._s_0.reserved;
    uStack_30 = *(undefined4 *)&pIVar2->pEngineName;
    uStack_2c = *(undefined4 *)((longlong)&pIVar2->pEngineName + 4);
    local_28 = (pIVar2->EngineVersion).field0_0x0._s_0.major;
    uStack_24 = (pIVar2->EngineVersion).field0_0x0._s_0.minor;
    uStack_20 = (pIVar2->EngineVersion).field0_0x0._s_0.patch;
    uStack_1c = (pIVar2->EngineVersion).field0_0x0._s_0.reserved;
    INTC_D3D12_SetApplicationInfo(&local_48);
  }
  return;
}

// EnableIntelAtomic64Support @ 145aa66b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl EnableIntelAtomic64Support(INTCExtensionContext *param_1,INTCExtensionInfo *param_2)

{
  int iVar1;
  FStaticBasicLogRecord *pFVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 == (INTCExtensionContext *)0x0) {
    return GDX12INTCAtomicUInt64Emulation;
  }
  iVar1 = INTC_D3D12_CheckFeatureSupport(param_1,0,local_20,0xc);
  if (iVar1 < 0) {
    if ((byte)LogD3D12RHI._0_1_ < 5) {
      return GDX12INTCAtomicUInt64Emulation;
    }
    pFVar2 = &LOG_Static;
  }
  else {
    if (local_18 == 0) {
      if ((byte)LogD3D12RHI._0_1_ < 5) {
        return GDX12INTCAtomicUInt64Emulation;
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return GDX12INTCAtomicUInt64Emulation;
    }
    local_28[0] = 1;
    iVar1 = INTC_D3D12_SetFeatureSupport(param_1,local_28);
    if (-1 < iVar1) {
      GDX12INTCAtomicUInt64Emulation = true;
      if ((byte)LogD3D12RHI._0_1_ < 5) {
        GDX12INTCAtomicUInt64Emulation = true;
        return true;
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      return GDX12INTCAtomicUInt64Emulation;
    }
    if ((byte)LogD3D12RHI._0_1_ < 5) {
      return GDX12INTCAtomicUInt64Emulation;
    }
    pFVar2 = &LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar2,(FLogCategoryBase *)&LogD3D12RHI);
  return GDX12INTCAtomicUInt64Emulation;
}

// ExecuteSubset @ 145aa70f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::ExecuteSubset
          (ResidencyManagerInternal *this,ID3D12CommandQueue *param_1,ID3D12CommandList **param_2,
          ResidencySet **param_3,uint param_4)

{
  CriticalSection *lpCriticalSection;
  ulong64 *puVar1;
  IDXGIAdapter3 *pIVar2;
  SyncManager *pSVar3;
  ManagedObject *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  int iVar8;
  T_HRESULT TVar9;
  ResidencySet *pRVar10;
  ulong64 uVar11;
  ManagedObject **ppMVar12;
  Fence *pFVar13;
  ResidencySet *pRVar14;
  uint uVar15;
  AsyncWorkload *pAVar16;
  Fence *pFVar17;
  ulonglong uVar18;
  Fence *pFVar19;
  AsyncWorkload *pAVar20;
  IDXGIAdapter3 *pIVar21;
  AsyncWorkload *pAVar22;
  ulonglong uVar23;
  undefined1 auStackY_108 [32];
  Fence *local_d8;
  ulonglong local_d0;
  ID3D12CommandList **local_c8;
  ResidencyManagerInternal *local_c0;
  ID3D12CommandQueue *local_b8;
  ResidencySet **local_b0;
  ulonglong local_a8 [13];
  
  local_a8[8] = __security_cookie.value ^ (ulonglong)auStackY_108;
  pIVar2 = this->Adapter;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  pIVar21 = (IDXGIAdapter3 *)0x0;
  local_c8 = param_2;
  local_c0 = this;
  local_b8 = param_1;
  local_b0 = param_3;
  if (pIVar2 != (IDXGIAdapter3 *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,this->NodeIndex,0,local_a8);
    pIVar21 = this->Adapter;
  }
  local_a8[4] = 0;
  local_a8[5] = 0;
  if (this->LocalMemoryBudgetLimit < local_a8[0]) {
    local_a8[0] = this->LocalMemoryBudgetLimit;
  }
  local_a8[6] = 0;
  local_a8[7] = 0;
  if (pIVar21 != (IDXGIAdapter3 *)0x0) {
    (**(code **)((longlong)*pIVar21 + 0x70))(pIVar21,this->NodeIndex,1,local_a8 + 4);
  }
  pFVar19 = (Fence *)0x0;
  local_d8 = (Fence *)0x0;
  iVar8 = 0;
  pFVar13 = pFVar19;
  pFVar17 = pFVar19;
  if (param_4 != 0) {
    do {
      pRVar10 = param_3[(longlong)pFVar13];
      if (pRVar10 != (ResidencySet *)0x0) {
        if (pRVar10->IsOpen != false) {
          return 0x80070057;
        }
        pFVar17 = (Fence *)(ulonglong)(uint)((int)pFVar17 + pRVar10->CurrentSetSize);
      }
      iVar8 = (int)pFVar17;
      uVar15 = (int)pFVar13 + 1;
      pFVar13 = (Fence *)(ulonglong)uVar15;
    } while (uVar15 < param_4);
  }
  pRVar10 = ::operator_new(0x28);
  if (pRVar10 != (ResidencySet *)0x0) {
    pRVar10->CommandListIndex = 0xffffffff;
    pRVar10->ppSet = (ManagedObject **)0x0;
    pRVar10->MaxResidencySetSize = 0;
    pRVar10->CurrentSetSize = 0;
    pRVar10->IsOpen = false;
    pRVar10->OutOfMemory = false;
    pRVar10->pSyncManager = (SyncManager *)0x0;
    pRVar10->pSyncManager = this->pSyncManager;
    pRVar10->MaxResidencySetSize = iVar8;
    if (iVar8 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)iVar8;
      uVar11 = SUB168(ZEXT816(8) * auVar5,0);
      if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      ppMVar12 = operator_new__(uVar11);
      pRVar10->ppSet = ppMVar12;
      if (ppMVar12 == (ManagedObject **)0x0) {
        return 0x8007000e;
      }
    }
    pSVar3 = pRVar10->pSyncManager;
    if (pSVar3 != (SyncManager *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pSVar3);
    }
    if (pRVar10->IsOpen != false) {
      if (pSVar3 != (SyncManager *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pSVar3);
      }
      return 0x80070057;
    }
    pFVar13 = pFVar19;
    do {
      if (*(char *)((longlong)&pFVar13[1].FenceValue + (longlong)pRVar10->pSyncManager) == '\0') {
        pRVar10->CommandListIndex = (uint)pFVar13;
        *(undefined1 *)((longlong)&pFVar13[1].FenceValue + (longlong)pRVar10->pSyncManager) = 1;
        pRVar10->CurrentSetSize = 0;
        pRVar10->IsOpen = true;
        pRVar10->OutOfMemory = false;
        if (pSVar3 != (SyncManager *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pSVar3);
        }
        fVar7 = __real_3fc00000;
        uVar18 = (ulonglong)param_4;
        if (param_4 != 0) {
          do {
            local_d0 = uVar18;
            uVar18 = 0;
            pRVar14 = *param_3;
            pFVar13 = local_d8;
            if ((pRVar14 != (ResidencySet *)0x0) && (uVar23 = uVar18, 0 < pRVar14->CurrentSetSize))
            {
              do {
                pMVar4 = *(ManagedObject **)(uVar18 + (longlong)pRVar14->ppSet);
                if (pMVar4->CommandListsUsedOn[pRVar10->CommandListIndex] == false) {
                  pMVar4->CommandListsUsedOn[pRVar10->CommandListIndex] = true;
                  ppMVar12 = pRVar10->ppSet;
                  if ((ppMVar12 == (ManagedObject **)0x0) ||
                     (pRVar10->MaxResidencySetSize <= pRVar10->CurrentSetSize)) {
                    if (pRVar10->MaxResidencySetSize == 0) {
                      iVar8 = 0x1000;
                    }
                    else {
                      iVar8 = (int)((float)pRVar10->MaxResidencySetSize * fVar7);
                    }
                    pRVar10->MaxResidencySetSize = iVar8;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = (longlong)iVar8;
                    uVar11 = SUB168(ZEXT816(8) * auVar6,0);
                    if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
                      uVar11 = 0xffffffffffffffff;
                    }
                    ppMVar12 = operator_new__(uVar11);
                    if ((pRVar10->ppSet != (ManagedObject **)0x0) &&
                       (ppMVar12 != (ManagedObject **)0x0)) {
                      memcpy(ppMVar12,pRVar10->ppSet,(longlong)pRVar10->CurrentSetSize << 3);
                      operator_delete__(pRVar10->ppSet);
                    }
                    pRVar10->ppSet = ppMVar12;
                  }
                  if (ppMVar12 == (ManagedObject **)0x0) {
                    pRVar10->OutOfMemory = true;
                  }
                  else {
                    ppMVar12[pRVar10->CurrentSetSize] = pMVar4;
                    pRVar10->CurrentSetSize = pRVar10->CurrentSetSize + 1;
                    pFVar19 = (Fence *)((longlong)&pFVar19->pFence +
                                       *(longlong *)
                                        (*(longlong *)((longlong)(*param_3)->ppSet + uVar18) + 0x10)
                                       );
                  }
                }
                pRVar14 = *param_3;
                uVar15 = (int)uVar23 + 1;
                uVar18 = uVar18 + 8;
                uVar23 = (ulonglong)uVar15;
                pFVar13 = pFVar19;
              } while ((int)uVar15 < pRVar14->CurrentSetSize);
            }
            local_d8 = pFVar13;
            param_3 = param_3 + 1;
            uVar18 = local_d0 - 1;
          } while (local_d0 - 1 != 0);
          local_d0 = 0;
          pFVar19 = local_d8;
          this = local_c0;
          param_1 = local_b8;
          param_3 = local_b0;
        }
        pAVar22 = (AsyncWorkload *)0x0;
        if (pRVar10->IsOpen == false) {
          return 0x80070057;
        }
        if (pRVar10->OutOfMemory == true) {
          return 0x8007000e;
        }
        pAVar16 = pAVar22;
        pAVar20 = pAVar22;
        if (0 < pRVar10->CurrentSetSize) {
          do {
            uVar15 = (int)pAVar16 + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)(pRVar10->ppSet + -1) + (longlong)&pAVar20->pMasterSet) + 0x28
             + (ulonglong)pRVar10->CommandListIndex) = 0;
            pAVar16 = (AsyncWorkload *)(ulonglong)uVar15;
            pAVar20 = (AsyncWorkload *)&pAVar20->pMasterSet;
          } while ((int)uVar15 < pRVar10->CurrentSetSize);
        }
        pSVar3 = pRVar10->pSyncManager;
        if (pSVar3 != (SyncManager *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pSVar3);
        }
        pRVar10->pSyncManager->AvailableCommandLists[pRVar10->CommandListIndex] = false;
        pRVar10->CommandListIndex = 0xffffffff;
        pRVar10->IsOpen = false;
        if (pSVar3 != (SyncManager *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pSVar3);
        }
        pRVar10->IsOpen = false;
        if ((1 < param_4) && ((Fence *)(local_a8[0] + local_a8[4]) < pFVar19)) {
          operator_delete__(pRVar10->ppSet);
          ::operator_delete(pRVar10,0x28);
          uVar15 = param_4 >> 1;
          iVar8 = ExecuteSubset(this,param_1,local_c8,param_3,uVar15);
          TVar9 = ExecuteSubset(this,param_1,local_c8 + uVar15,param_3 + uVar15,param_4 - uVar15);
          if (iVar8 != 0) {
            return iVar8;
          }
          return TVar9;
        }
        local_d8 = (Fence *)0x0;
        iVar8 = GetFence(this,param_1,&local_d8);
        if (iVar8 < 0) {
          return iVar8;
        }
        lpCriticalSection = &this->ExecutionCS;
        if (lpCriticalSection != (CriticalSection *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        iVar8 = EnqueueAsyncWork(this,pRVar10,(this->AsyncThreadFence).FenceValue,
                                 this->CurrentSyncPointGeneration);
        if (this->Device3 != (ID3D12Device3 *)0x0) {
          if (this->CurrentAsyncWorkloadHead != this->CurrentAsyncWorkloadTail) {
            pAVar22 = this->AsyncWorkQueue +
                      this->CurrentAsyncWorkloadHead % this->AsyncWorkQueueSize;
            this->CurrentAsyncWorkloadHead = this->CurrentAsyncWorkloadHead + 1;
          }
          ProcessPagingWork(this,pAVar22);
        }
        if ((-1 < iVar8) &&
           (iVar8 = (**(code **)((longlong)*param_1 + 0x78))
                              (param_1,(this->AsyncThreadFence).pFence,
                               (this->AsyncThreadFence).FenceValue),
           this->Device3 == (ID3D12Device3 *)0x0)) {
          puVar1 = &(this->AsyncThreadFence).FenceValue;
          *puVar1 = *puVar1 + 1;
        }
        (**(code **)((longlong)*param_1 + 0x50))(param_1,param_4,local_c8);
        if (-1 < iVar8) {
          iVar8 = SignalFence(this,param_1,local_d8);
        }
        if (lpCriticalSection != (CriticalSection *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return iVar8;
        }
        return iVar8;
      }
      uVar15 = (uint)pFVar13 + 1;
      pFVar13 = (Fence *)(ulonglong)uVar15;
    } while (uVar15 < 0x400);
    if (pSVar3 != (SyncManager *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pSVar3);
    }
  }
  return 0x8007000e;
}

// FastHashName @ 145aa76d0

void __cdecl FastHashName(wchar_t *param_1,ulong64 param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0x37;
  if (param_2 >> 0x3c < 10) {
    sVar1 = 0x30;
  }
  *param_1 = sVar1 + (ushort)(param_2 >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xfffffffffffffff) >> 0x38 < 10) {
    sVar1 = 0x30;
  }
  param_1[1] = sVar1 + (ushort)((param_2 << 4) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xffffffffffffff) >> 0x34 < 10) {
    sVar1 = 0x30;
  }
  param_1[2] = sVar1 + ((ushort)(param_2 >> 0x28) >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfffffffffffff) >> 0x30 < 10) {
    sVar1 = 0x30;
  }
  param_1[3] = sVar1 + (ushort)((param_2 << 0xc) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xffffffffffff) >> 0x2c < 10) {
    sVar1 = 0x30;
  }
  param_1[4] = sVar1 + ((ushort)(param_2 >> 0x20) >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfffffffffff) >> 0x28 < 10) {
    sVar1 = 0x30;
  }
  param_1[5] = sVar1 + (ushort)((param_2 << 0x14) >> 0x3c);
  sVar1 = 0x37;
  sVar2 = 0x30;
  if ((param_2 & 0xffffffffff) >> 0x24 < 10) {
    sVar1 = 0x30;
  }
  param_1[6] = sVar1 + ((ushort)(param_2 >> 0x18) >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfffffffff) >> 0x20 < 10) {
    sVar1 = 0x30;
  }
  param_1[7] = sVar1 + (ushort)((param_2 << 0x1c) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xffffffff) >> 0x1c < 10) {
    sVar1 = sVar2;
  }
  param_1[8] = sVar1 + ((ushort)(param_2 >> 0x10) >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfffffff) >> 0x18 < 10) {
    sVar1 = sVar2;
  }
  param_1[9] = sVar1 + (ushort)((param_2 << 0x24) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xffffff) >> 0x14 < 10) {
    sVar1 = sVar2;
  }
  param_1[10] = sVar1 + ((ushort)(param_2 >> 8) >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfffff) >> 0x10 < 10) {
    sVar1 = sVar2;
  }
  param_1[0xb] = sVar1 + (ushort)((param_2 << 0x2c) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xffff) >> 0xc < 10) {
    sVar1 = sVar2;
  }
  param_1[0xc] = sVar1 + ((ushort)param_2 >> 0xc);
  sVar1 = 0x37;
  if ((param_2 & 0xfff) >> 8 < 10) {
    sVar1 = sVar2;
  }
  param_1[0xd] = sVar1 + (ushort)((param_2 << 0x34) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xff) >> 4 < 10) {
    sVar1 = 0x30;
  }
  param_1[0xe] = sVar1 + (ushort)((param_2 << 0x38) >> 0x3c);
  sVar1 = 0x37;
  if ((param_2 & 0xf) < 10) {
    sVar1 = 0x30;
  }
  param_1[0xf] = sVar1 + (ushort)((param_2 << 0x3c) >> 0x3c);
  param_1[0x10] = L'\0';
  return;
}

// FindMaxRHIFeatureLevel @ 145aa8d60

/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
FindMaxRHIFeatureLevel
          (D3D_FEATURE_LEVEL param_1,D3D_SHADER_MODEL param_2,D3D12_RESOURCE_BINDING_TIER param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  ERHIBindlessConfiguration EVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
  if ((int)param_1 < 0xc000) {
    if ((int)param_1 < 0xb000) {
      return Num;
    }
  }
  else if (0x65 < (int)param_2) {
    EVar2 = RHIGetRuntimeBindlessConfiguration(SP_PCD3D_SM6);
    if ((int)EVar2 < 2) {
      bVar4 = SBORROW4(param_3,2);
      iVar1 = -2;
    }
    else {
      bVar4 = SBORROW4(param_3,3);
      iVar1 = -3;
    }
    if (((param_4) && (bVar4 == (int)(param_3 + iVar1) < 0)) && (param_5)) {
      pwVar3 = FCommandLine::Get();
      bVar4 = FParse::Param(pwVar3,L"ForceDisableSM6");
      if (!bVar4) {
        return SM6;
      }
      if (4 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`enum_ERHIFeatureLevel::Type___cdecl_FindMaxRHIFeatureLevel(D3D_FEATURE_LEVEL,D3D_SHADER_MODEL,D3D12_RESOURCE_BINDING_TIER,bool,bool)'
                    ::__l17::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        return SM5;
      }
    }
  }
  return SM5;
}

// GetD312ObjectName @ 145aa8f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetD312ObjectName(FString *__return_storage_ptr__,ID3D12Object *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  undefined1 auStack_448 [32];
  uint local_428 [4];
  wchar_t local_418 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_448;
  if (param_1 != (ID3D12Object *)0x0) {
    local_428[0] = 0x200;
    iVar3 = (**(code **)((longlong)*param_1 + 0x18))
                      (param_1,&WKPDID_D3DDebugObjectNameW,local_428,local_418);
    if ((0x200 < local_428[0]) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("size <= 512",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                           ,0x72,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    if (iVar3 == 0) {
      FString::FString(__return_storage_ptr__,local_418);
      return __return_storage_ptr__;
    }
  }
  FString::FString(__return_storage_ptr__,"Unknown Resource");
  return __return_storage_ptr__;
}

// GetD3D12DeviceHungErrorString @ 145aa9010

FString * __cdecl GetD3D12DeviceHungErrorString(FString *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 == -0x7785ffff) {
    FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_INVALID_CALL");
  }
  else {
    if (param_1 == -0x7785fffb) {
      FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DEVICE_REMOVED");
      return __return_storage_ptr__;
    }
    if (param_1 == -0x7785fffa) {
      FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DEVICE_HUNG");
      return __return_storage_ptr__;
    }
    if (param_1 == -0x7785fff9) {
      FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DEVICE_RESET");
      return __return_storage_ptr__;
    }
    if (param_1 == -0x7785ffe0) {
      FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DRIVER_INTERNAL_ERROR");
      return __return_storage_ptr__;
    }
    FString::PrintfImpl(&local_18,L"%08X");
    if (__return_storage_ptr__ != &local_18) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetD3D12ErrorString @ 145aa9160

FString * __cdecl
GetD3D12ErrorString(FString *__return_storage_ptr__,int param_1,ID3D12Device *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FString *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 < -0x7785fffe) {
    if (param_1 == -0x7785ffff) {
      pwVar5 = L"DXGI_ERROR_INVALID_CALL";
      goto LAB_145aa946b;
    }
    if (param_1 == -0x7fffbffe) {
      pwVar5 = L"E_NOINTERFACE";
      goto LAB_145aa946b;
    }
    if (param_1 == -0x7fffbffb) {
      pwVar5 = L"E_FAIL";
      goto LAB_145aa946b;
    }
    if (param_1 == -0x7ff8fff2) {
      pwVar5 = L"E_OUTOFMEMORY";
      goto LAB_145aa946b;
    }
    if (param_1 == -0x7ff8ffa9) {
      pwVar5 = L"E_INVALIDARG";
      goto LAB_145aa946b;
    }
  }
  else {
    if (param_1 < -0x7783fffe) {
      if (param_1 == -0x7783ffff) {
        pwVar5 = L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
        goto LAB_145aa946b;
      }
      switch(param_1) {
      case -0x7785fffd:
        pwVar5 = L"DXGI_ERROR_MORE_DATA";
        break;
      case -0x7785fffc:
        pwVar5 = L"DXGI_ERROR_UNSUPPORTED";
        break;
      case -0x7785fffb:
        FString::operator=(__return_storage_ptr__,L"DXGI_ERROR_DEVICE_REMOVED");
        goto LAB_145aa93cb;
      default:
        goto switchD_145aa922b_caseD_887a0006;
      case -0x7785fff6:
        pwVar5 = L"DXGI_ERROR_WAS_STILL_DRAWING";
        break;
      case -0x7785fff5:
        pwVar5 = L"DXGI_ERROR_FRAME_STATISTICS_DISJOINT";
        break;
      case -0x7785ffde:
        pwVar5 = L"DXGI_ERROR_NOT_CURRENTLY_AVAILABLE";
        break;
      case -0x7785ffdc:
        pwVar5 = L"DXGI_ERROR_REMOTE_OUTOFMEMORY";
        break;
      case -0x7785ffdb:
        pwVar5 = L"DXGI_ERROR_MODE_CHANGE_IN_PROGRESS";
        break;
      case -0x7785ffda:
        pwVar5 = L"DXGI_ERROR_ACCESS_LOST";
        break;
      case -0x7785ffd9:
        pwVar5 = L"DXGI_ERROR_WAIT_TIMEOUT";
        break;
      case -0x7785ffd8:
        pwVar5 = L"DXGI_ERROR_SESSION_DISCONNECTED";
        break;
      case -0x7785ffd5:
        pwVar5 = L"DXGI_ERROR_ACCESS_DENIED";
        break;
      case -0x7785ffd2:
        pwVar5 = L"DXGI_ERROR_NOT_CURRENT";
        break;
      case -0x7785ffcf:
        pwVar5 = L"DXGI_ERROR_DYNAMIC_CODE_POLICY_VIOLATION";
        break;
      case -0x7785ffce:
        pwVar5 = L"DXGI_ERROR_NON_COMPOSITED_UI";
        break;
      case -0x7785ffcd:
        pwVar5 = L"DXGI_ERROR_CACHE_CORRUPT";
        break;
      case -0x7785ffcc:
        pwVar5 = L"DXGI_ERROR_CACHE_FULL";
        break;
      case -0x7785ffca:
        pwVar5 = L"DXGI_ERROR_ALREADY_EXISTS";
      }
LAB_145aa946b:
      FString::operator=(__return_storage_ptr__,pwVar5);
      return __return_storage_ptr__;
    }
    if (param_1 == -0x7783fffe) {
      pwVar5 = L"D3D11_ERROR_FILE_NOT_FOUND";
      goto LAB_145aa946b;
    }
    if (param_1 == 0) {
      pwVar5 = L"S_OK";
      goto LAB_145aa946b;
    }
  }
switchD_145aa922b_caseD_887a0006:
  FString::PrintfImpl(&local_48,L"%08X");
  if (__return_storage_ptr__ != &local_48) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_1 != -0x7785fffb) {
    return __return_storage_ptr__;
  }
LAB_145aa93cb:
  if (param_2 == (ID3D12Device *)0x0) {
    return __return_storage_ptr__;
  }
  uVar2 = (**(code **)((longlong)*param_2 + 0x128))(param_2);
  pFVar3 = GetD3D12DeviceHungErrorString(&local_18,uVar2);
  pFVar4 = FString::FString(&local_28,L" with Reason: ");
  FString::ConcatFF(&local_38,pFVar4,pFVar3);
  iVar6 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetDefaultBackBufferPixelFormat @ 145aa95c0

EPixelFormat __cdecl GetDefaultBackBufferPixelFormat(void)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  Type TVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.DefaultBackBufferPixelFormat",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      CVarDefaultBackBufferPixelFormat = pTVar7;
      _Init_thread_footer(&_TSS0);
    }
  }
  pTVar7 = CVarDefaultBackBufferPixelFormat;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
  }
  TVar4 = EDefaultBackBufferPixelFormat::FromInt(pTVar7->ShadowedValue[0]);
  EVar3 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar4);
  return EVar3;
}

// GetFeatureLevelString @ 145aa96b0

wchar_t * __cdecl D3D12RHI::GetFeatureLevelString(D3D_FEATURE_LEVEL param_1)

{
  wchar_t *pwVar1;
  
  if (0xb000 < (int)param_1) {
    if (param_1 == D3D_FEATURE_LEVEL_11_1) {
      return L"11_1";
    }
    if (param_1 != D3D_FEATURE_LEVEL_12_0) {
      if (param_1 != D3D_FEATURE_LEVEL_12_1) {
        pwVar1 = L"12_2";
        if (param_1 != D3D_FEATURE_LEVEL_12_2) {
          pwVar1 = L"X_X";
        }
        return pwVar1;
      }
      return L"12_1";
    }
    return L"12_0";
  }
  if (param_1 == D3D_FEATURE_LEVEL_11_0) {
    return L"11_0";
  }
  if (param_1 != D3D_FEATURE_LEVEL_9_1) {
    if (param_1 == D3D_FEATURE_LEVEL_9_2) {
      return L"9_2";
    }
    if (param_1 != D3D_FEATURE_LEVEL_9_3) {
      if (param_1 != D3D_FEATURE_LEVEL_10_0) {
        pwVar1 = L"X_X";
        if (param_1 == D3D_FEATURE_LEVEL_10_1) {
          pwVar1 = L"10_1";
        }
        return pwVar1;
      }
      return L"10_0";
    }
    return L"9_3";
  }
  return L"9_1";
}

// GetIntelApplicationInfo @ 145aa9dc0

INTCExtensionAppInfo1 * __cdecl
GetIntelApplicationInfo(INTCExtensionAppInfo1 *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FEngineVersion *pFVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  wchar_t *pwVar8;
  
  pTVar7 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)
             (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.DisableEngineAndAppRegistration",1);
    pTVar6 = pTVar7;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    CVarDisableEngineAndAppRegistration = pTVar6;
    _Init_thread_footer(&_TSS0);
  }
  pTVar6 = CVarDisableEngineAndAppRegistration;
  __return_storage_ptr__->pApplicationName = (wchar_t *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->ApplicationVersion).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ApplicationVersion).field0_0x0 + 8) = 0;
  __return_storage_ptr__->pEngineName = (wchar_t *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->EngineVersion).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->EngineVersion).field0_0x0 + 8) = 0;
  if (pTVar6 != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar6->ShadowedValue + (longlong)pTVar7->ShadowedValue) != 0) {
      return __return_storage_ptr__;
    }
  }
  pwVar8 = GInternalProjectName;
  if ((GInternalProjectName[0] == L'\0') ||
     (iVar2 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    pwVar8 = L"";
  }
  __return_storage_ptr__->pEngineName = L"Unreal Engine";
  __return_storage_ptr__->pApplicationName = pwVar8;
  pFVar3 = FEngineVersion::Current();
  *(uint *)&(__return_storage_ptr__->EngineVersion).field0_0x0 = (uint)(ushort)pFVar3->_padding_;
  pFVar3 = FEngineVersion::Current();
  *(uint *)((longlong)&(__return_storage_ptr__->EngineVersion).field0_0x0 + 4) =
       (uint)*(ushort *)((longlong)&pFVar3->_padding_ + 2);
  pFVar3 = FEngineVersion::Current();
  *(uint *)((longlong)&(__return_storage_ptr__->EngineVersion).field0_0x0 + 8) =
       (uint)*(ushort *)((longlong)&pFVar3->_padding_ + 4);
  return __return_storage_ptr__;
}

// GetResourceTiers @ 145aaa400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
GetResourceTiers(ID3D12Device *param_1,D3D12_RESOURCE_BINDING_TIER *param_2,
                D3D12_RESOURCE_HEAP_TIER *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  D3D12_RESOURCE_HEAP_TIER local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)((longlong)*param_1 + 0x68))(0,0,&local_58,0x3c);
  *param_2 = (D3D12_RESOURCE_BINDING_TIER)local_48;
  *param_3 = local_20;
  return;
}

// GetSkipFastClearEliminateLayoutFlags @ 145aaaeb0

/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

D3D12_BARRIER_LAYOUT __cdecl GetSkipFastClearEliminateLayoutFlags(void)

{
  return D3D12_BARRIER_LAYOUT_COMMON;
}

// GetSkipFastClearEliminateStateFlags @ 145aaaec0

/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

D3D12_RESOURCE_STATES __cdecl GetSkipFastClearEliminateStateFlags(void)

{
  return D3D12_RESOURCE_STATE_COMMON;
}

// GetSupportsAtomic64 @ 145aaaf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl GetSupportsAtomic64(IDXGIAdapter *param_1,ID3D12Device *param_2)

{
  bool bVar1;
  EGpuVendorId EVar2;
  int iVar3;
  INTCExtensionContext *pIVar4;
  bool bVar5;
  undefined1 auStack_268 [32];
  INTCExtensionContext *local_248 [2];
  undefined1 local_238 [256];
  uint local_138;
  uint local_134;
  undefined1 local_108 [8];
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  INTCExtensionInfo local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  (**(code **)((longlong)*param_2 + 0x68))(param_2,0x25,&local_f8,0x18);
  if ((int)uStack_f0 == 0) {
    bVar5 = false;
    memset(local_238,0,0x130);
    (**(code **)((longlong)*param_1 + 0x40))(param_1);
    EVar2 = RHIConvertToGpuVendorId(local_138);
    if (EVar2 == Intel) {
      bVar1 = UE::RHICore::AllowVendorDevice();
      if (bVar1) {
        memset(&local_d8,0,0xc0);
        pIVar4 = CreateIntelExtensionsContext(param_2,&local_d8,local_134);
        if (pIVar4 != (INTCExtensionContext *)0x0) {
          iVar3 = INTC_D3D12_CheckFeatureSupport(pIVar4,0,local_108,0xc);
          if (iVar3 < 0) {
            if (4 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_Failed_to_check_151098610,
                         (FLogCategoryBase *)&LogD3D12RHI);
            }
          }
          else {
            bVar5 = local_100 != 0;
          }
          local_248[0] = pIVar4;
          iVar3 = INTC_DestroyDeviceExtensionContext(local_248);
          if (iVar3 < 0) {
            if (4 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            }
          }
          else if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          if (bVar5) goto LAB_145aab0e8;
        }
      }
    }
    bVar5 = false;
  }
  else {
LAB_145aab0e8:
    bVar5 = true;
  }
  return bVar5;
}

// GetSwapChainSurface @ 145aab1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12Texture * __cdecl
GetSwapChainSurface(FD3D12Device *param_1,EPixelFormat param_2,uint param_3,uint param_4,
                   IDXGISwapChain *param_5,uint param_6,TRefCountPtr<ID3D12Resource> param_7)

{
  ID3D12Resource IVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FD3D12Device *pFVar6;
  bool bVar7;
  int iVar8;
  FD3D12Texture *pFVar9;
  ID3D12Device *pIVar10;
  longlong *plVar11;
  FName *pFVar12;
  FRHITextureDesc *pFVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_3e8 [32];
  EPixelFormat local_3a8 [8];
  TRefCountPtr<ID3D12Resource> local_3a0;
  FD3D12Device *local_398;
  FString local_390;
  ID3D12Resource *local_380;
  FD3D12Adapter *local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  ulonglong local_360;
  uint uStack_358;
  undefined4 uStack_354;
  DXGI_FORMAT local_350;
  undefined8 uStack_34c;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  FD3D12DynamicRHI *local_338;
  FD3D12Adapter *local_330;
  FString local_328;
  FString local_318;
  <lambda_1> local_308;
  FName local_2c8 [2];
  FD3D12ResourceDesc local_2b8;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  FRHITextureDesc local_258;
  FScriptContainerElement *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FRHITextureDesc local_1d8;
  FScriptContainerElement *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  undefined8 uStack_140;
  DXGI_FORMAT local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined4 local_11e;
  undefined2 local_11a;
  longlong local_118 [2];
  FRHITextureCreateDesc local_108;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_3a0.Reference = local_3a0.Reference & 0xffffffff00000000;
  local_380 = param_7.Reference;
  local_3a8[0] = param_2;
  local_398 = param_1;
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FD3D12Texture *)(*pcVar3)();
    return pFVar9;
  }
  pFVar6 = local_398;
  local_378 = *(FD3D12Adapter **)&param_1->field_0x10;
  local_3a0.Reference = (ID3D12Resource *)0x0;
  if (param_5 == (IDXGISwapChain *)0x0) {
    IVar1 = *local_380;
    if (IVar1 == (ID3D12Resource)0x0) {
      local_268 = 1;
      if (GVirtualMGPU == 0) {
        local_268 = *(undefined4 *)local_398;
      }
      local_26c = *(undefined4 *)&local_398->field_0x8;
      local_278 = 1;
      local_270 = 0;
      local_370 = 3;
      uStack_368 = 0;
      uStack_354 = 0x10001;
      local_360 = (ulonglong)param_3;
      uStack_358 = param_4;
      local_350 = UE::DXGIUtilities::GetSwapChainFormat(local_3a8[0]);
      uStack_34c = 1;
      uStack_344 = 0;
      local_340 = 1;
      if ((*(longlong *)&pFVar6->field_0x10 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("ParentAdapter != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x41,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FD3D12Texture *)(*pcVar3)();
        return pFVar9;
      }
      local_158 = CONCAT44(uStack_36c,local_370);
      uStack_140 = CONCAT44(uStack_354,uStack_358);
      uStack_150 = uStack_368;
      local_148 = local_360;
      local_128 = CONCAT44(uStack_33c,local_340);
      local_138 = local_350;
      uStack_134 = (undefined4)uStack_34c;
      uStack_130 = uStack_34c._4_4_;
      uStack_12c = uStack_344;
      local_11a = 0;
      local_120 = 0;
      local_11e = 0;
      (**(code **)((longlong)*FD3D12Adapter::Barriers.Ptr + 0x30))
                (FD3D12Adapter::Barriers.Ptr,*(undefined8 *)&pFVar6->field_0x10,&local_278,0);
    }
    else {
      local_3a0.Reference = (ID3D12Resource *)IVar1;
      (**(code **)(*(longlong *)IVar1 + 8))();
    }
  }
  else {
    iVar8 = (**(code **)((longlong)*param_5 + 0x48))
                      (param_5,param_6,&_GUID_696442be_a72e_4059_bc79_5b5c98040fad,&local_3a0);
    if (iVar8 < 0) {
      local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.Data.ArrayNum = 0;
      local_328.Data.ArrayMax = 0;
      pIVar10 = FD3D12Device::GetDevice(local_398);
      D3D12RHI::VerifyD3D12Result
                (iVar8,
                 "SwapChain->GetBuffer(BackBufferIndex, IID_PPV_ARGS(BackBufferResource.GetInitReference()))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                 ,0x3e,pIVar10,&local_328);
    }
  }
  plVar11 = (longlong *)
            (**(code **)((longlong)*local_3a0.Reference + 0x50))(local_3a0.Reference,local_88);
  local_2b8._padding_ = *plVar11;
  local_2b8._padding_ = plVar11[1];
  local_2b8._padding_ = plVar11[2];
  local_2b8._padding_ = plVar11[3];
  local_2b8._padding_ = plVar11[4];
  local_2b8._padding_ = plVar11[5];
  local_2b8._padding_ = plVar11[6];
  local_2b8.PixelFormat = PF_Unknown;
  local_2b8.UAVPixelFormat = PF_Unknown;
  local_2b8._58_6_ = 4;
  FString::PrintfImpl(&local_390,L"BackBuffer%d");
  bVar7 = bIsQuadBufferStereoEnabled;
  if (bIsQuadBufferStereoEnabled == false) {
    pFVar13 = &local_258;
    local_258.Flags = None;
    bVar5 = false;
    bVar4 = true;
    local_208 = (FScriptContainerElement *)L"";
    if (local_390.Data.ArrayNum != 0) {
      local_208 = local_390.Data.AllocatorInstance.Data;
    }
    local_258.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_258.ClearValue._0_8_ = 1;
    local_258.ClearValue.Value._4_8_ = 0;
    local_258.ClearValue.Value.Color[3] = 0.0;
    local_258.ExtData = 0;
    local_258.Extent.field0_0x0._s_0.X = 1;
    local_258.Extent.field0_0x0._s_0.Y = 1;
    local_258.Depth = 1;
    local_258.ArraySize = 1;
    local_258.NumMips = '\x01';
    local_258.NumSamples = '\x01';
    local_258.Dimension = Texture2D;
    local_258.Format = PF_Unknown;
    local_258.UAVFormat = PF_Unknown;
    local_258.FastVRAMPercentage = 0xff;
    local_258.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_258.AliasableFormats.ArrayNum = 0;
    local_258.AliasableFormats.ArrayMax = 1;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
  }
  else {
    pFVar13 = &local_1d8;
    local_1d8.Flags = None;
    bVar5 = true;
    bVar4 = false;
    local_188 = (FScriptContainerElement *)L"";
    if (local_390.Data.ArrayNum != 0) {
      local_188 = local_390.Data.AllocatorInstance.Data;
    }
    local_1d8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_1d8.ClearValue._0_8_ = 1;
    local_1d8.ClearValue.Value._4_8_ = 0;
    local_1d8.ClearValue.Value.Color[3] = 0.0;
    local_1d8.ExtData = 0;
    local_1d8.Extent.field0_0x0._s_0.X = 1;
    local_1d8.Extent.field0_0x0._s_0.Y = 1;
    local_1d8.Depth = 1;
    local_1d8.ArraySize = 1;
    local_1d8.NumMips = '\x01';
    local_1d8.NumSamples = '\x01';
    local_1d8.Dimension = Texture2DArray;
    local_1d8.Format = PF_Unknown;
    local_1d8.UAVFormat = PF_Unknown;
    local_1d8.FastVRAMPercentage = 0xff;
    local_1d8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_1d8.AliasableFormats.ArrayNum = 0;
    local_1d8.AliasableFormats.ArrayMax = 1;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
  }
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_108,pFVar13);
  local_108.DebugName = (wchar_t *)pFVar13[1].Flags;
  local_108.InitialState = pFVar13[1].ClearValue.ColorBinding;
  local_108.InitAction = (ERHITextureInitAction)pFVar13[1].ClearValue.Value.Color[0];
  local_108.BulkData = *(FResourceBulkDataInterface **)((longlong)&pFVar13[1].ClearValue.Value + 4);
  local_108.ClassName = *(FName *)((longlong)&pFVar13[1].ClearValue.Value + 0xc);
  local_108.OwnerName = *(FName *)&pFVar13[1].ExtData;
  if ((bVar4) &&
     (local_258.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0)) {
    FMemory::Free((void *)local_258.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if ((bVar5) &&
     (local_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0)) {
    FMemory::Free((void *)local_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_108._padding_._4_4_ = (undefined4)local_2b8._padding_;
  local_108._padding_._0_4_ = (undefined4)local_2b8._padding_;
  local_108._padding_._3_1_ = local_3a8[0];
  local_108._padding_ = 0x40003;
  local_108.InitialState = Present;
  if (bVar7 != false) {
    local_108._padding_._6_2_ = 2;
  }
  local_338 = FD3D12DynamicRHI::SingleD3DRHI;
  local_308.DynamicRHI = &local_338;
  local_308.CreateDesc = &local_108;
  local_308.Parent = &local_398;
  local_308.BackBufferResource = &local_3a0;
  local_308.BackBufferDesc = &local_2b8;
  local_308.Adapter = &local_378;
  local_308.PixelFormat = local_3a8;
  local_308.Name = &local_390;
  local_330 = local_378;
  pFVar9 = FD3D12LinkedAdapterObject<FD3D12Texture>::
           CreateLinkedObjects<FD3D12Texture,_GetSwapChainSurface_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Texture,_GetSwapChainSurface_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                     ((FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),
                      (<lambda_1> *)&local_330,&local_308);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_390.Data.ArrayNum != 0) {
    FVar14.Data = local_390.Data.AllocatorInstance.Data;
  }
  lVar2 = pFVar9->_padding_;
  if ((lVar2 != 0) &&
     (bVar7 = FName::Equals(*(FName *)(lVar2 + 0x9c),(wchar_t *)FVar14.Data), !bVar7)) {
    pFVar12 = FName::FName(local_2c8,(wchar_t *)FVar14.Data);
    *(FName *)(lVar2 + 0x9c) = *pFVar12;
    plVar11 = *(longlong **)(lVar2 + 0x20);
    if ((plVar11 != (longlong *)0x0) &&
       ((FVar14.Data != (FScriptContainerElement *)0x0 &&
        (iVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,FVar14.Data), iVar8 < 0)))) {
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.Data.ArrayNum = 0;
      local_318.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar8,"Object->SetName(Name)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                 ,0x3e,(ID3D12Device *)0x0,&local_318);
    }
  }
  pIVar10 = FD3D12Device::GetDevice(local_398);
  (**(code **)((longlong)*pIVar10 + 200))(pIVar10,local_118,0,1);
  pFVar9->_padding_ = local_118[0];
  FD3D12TextureStats::D3D12TextureAllocated(pFVar9);
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if ((ID3D12Resource)local_3a0.Reference != (ID3D12Resource)0x0) {
    (**(code **)((longlong)*local_3a0.Reference + 0x10))();
  }
  if (*local_380 != (ID3D12Resource)0x0) {
    (**(code **)(*(longlong *)*local_380 + 0x10))();
  }
  return pFVar9;
}

// GetTypeHash @ 145aaba00

uint __cdecl GetTypeHash(FD3D12VertexDeclarationKey *param_1)

{
  return param_1->Hash;
}

// IsDeviceUMA @ 145aaeb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl IsDeviceUMA(ID3D12Device *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  iVar1 = (**(code **)((longlong)*param_1 + 0x68))(0,1,&local_28,0x10);
  if (-1 < iVar1) {
    return (int)uStack_20 != 0;
  }
  return false;
}

// LocalCopy @ 145aaf180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

wchar_t * __thiscall
CD3DX12_STATE_OBJECT_DESC::
StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
::LocalCopy(StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
            *this,wchar_t *param_1,bool param_2)

{
  longlong lVar1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  size_t sVar3;
  longlong lVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  if (param_2) {
    std::
    list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
    ::clear(&this->m_Strings);
    local_38._Ptr = (wchar_t *)0x0;
    local_38._8_8_ = 0;
    local_28 = 0;
    uStack_20 = 0;
    sVar3 = wcslen(param_1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_38
               ,param_1,sVar3);
    std::
    list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
    ::push_back(&this->m_Strings,
                (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                &local_38);
    if (uStack_20 < 8) goto LAB_145aaf22e;
    lVar1 = uStack_20 * 2;
    uVar7 = lVar1 + 2;
    uVar6 = local_38._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_38._Ptr + -4);
      lVar4 = (longlong)local_38._Ptr - uVar6;
joined_r0x000145aaf2b9:
      uVar7 = lVar1 + 0x29;
      if (0x1f < lVar4 - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    local_38._Ptr = (wchar_t *)0x0;
    local_38._8_8_ = 0;
    local_28 = 0;
    uStack_20 = 0;
    sVar3 = wcslen(param_1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_38
               ,param_1,sVar3);
    std::
    list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
    ::push_back(&this->m_Strings,
                (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                &local_38);
    if (uStack_20 < 8) goto LAB_145aaf22e;
    lVar1 = uStack_20 * 2;
    uVar7 = lVar1 + 2;
    uVar6 = local_38._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_38._Ptr + -4);
      lVar4 = (longlong)local_38._Ptr - uVar6;
      goto joined_r0x000145aaf2b9;
    }
  }
  ::operator_delete((void *)uVar6,uVar7);
LAB_145aaf22e:
  p_Var2 = ((this->m_Strings)._Mypair._Myval2._Myhead)->_Prev;
  pbVar5 = &p_Var2->_Myval;
  if (7 < (p_Var2->_Myval)._Mypair._Myval2._Myres) {
    pbVar5 = *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
              &(pbVar5->_Mypair)._Myval2._Bx;
  }
  return (wchar_t *)pbVar5;
}

// LogExecuteCommandLists @ 145aaf300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogExecuteCommandLists(uint param_1,ID3D12CommandList **param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      if (4 < (byte)LogD3D12RHI._0_1_) {
        GetCurrentThreadId();
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
    } while (uVar1 < param_1);
  }
  return;
}

// LogMemoryStats @ 145aaf380

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

void __cdecl LogMemoryStats(FD3D12Adapter *param_1)

{
  if (1 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if ((((1 < (byte)LogD3D12RHI._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
       1 < (byte)LogD3D12RHI._0_1_)) &&
      (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
      1 < (byte)LogD3D12RHI._0_1_)) &&
     (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
     1 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  return;
}

// LogPageFaultData @ 145aaf530

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
D3D12RHI::LogPageFaultData(FD3D12Adapter *param_1,FD3D12Device *param_2,ulong64 param_3)

{
  FD3D12ManualFence *this;
  longlong lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res20;
  TArray<FD3D12Heap_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<FD3D12Adapter::FReleasedAllocationData,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FD3D12Adapter::FAllocatedResourceResult,TSizedDefaultAllocator<32>_> local_e8;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_3 != 0) {
    if (((param_1->FrameFence).Ptr == (FD3D12ManualFence *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameFence",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0xff,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this = (param_1->FrameFence).Ptr;
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    FD3D12ManualFence::GetCompletedFenceValue(this,false);
    FD3D12ManualFence::GetCompletedFenceValue(this,true);
    if ((1 < (byte)LogD3D12RHI._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
       1 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FD3D12Adapter::FindResourcesNearGPUAddress(param_1,param_3,0x1000000,&local_e8);
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (0 < local_e8.ArrayNum) {
      uVar7 = 100;
      if (local_e8.ArrayNum < 100) {
        uVar7 = local_e8.ArrayNum;
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        while( true ) {
          uVar5 = 0;
          if ((int)uVar6 < local_e8.ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar8 = *(longlong *)
                   (*(longlong *)(local_e8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10) +
                   0x10);
          MakeResourceDescDebugString(&local_d0,(D3D12_RESOURCE_DESC *)(lVar8 + 0x50));
          if (1 < (byte)LogD3D12RHI._0_1_) {
            local_res20 = *(FName *)(lVar8 + 0x9c);
            ::FName::ToString(&local_res20,&local_b0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          uVar6 = uVar6 + 1;
          if (uVar7 <= uVar6) break;
        }
      }
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    FD3D12Adapter::FindHeapsContainingGPUAddress(param_1,param_3,&local_108);
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    uVar7 = 0;
    if (0 < local_108.ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < local_108.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)(local_108.AllocatorInstance.Data + lVar8);
        if (1 < (byte)LogD3D12RHI._0_1_) {
          local_d8 = *(FName *)(lVar1 + 0x28);
          ::FName::ToString(&local_d8,&local_a0);
          local_70 = *(undefined8 *)(lVar1 + 0x48);
          uStack_68 = *(undefined8 *)(lVar1 + 0x50);
          local_60 = *(undefined8 *)(lVar1 + 0x58);
          uStack_58 = *(undefined8 *)(lVar1 + 0x60);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < local_108.ArrayNum);
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    FD3D12Adapter::FindReleasedAllocationData(param_1,param_3,&local_f8);
    if (1 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_PageFault__Foun_151095e58,
                 (FLogCategoryBase *)&LogD3D12RHI);
    }
    if (0 < local_f8.ArrayNum) {
      uVar7 = 100;
      if (local_f8.ArrayNum < 100) {
        uVar7 = local_f8.ArrayNum;
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        while( true ) {
          uVar5 = 0;
          if ((int)uVar6 < local_f8.ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar3.Data = local_f8.AllocatorInstance.Data;
          MakeResourceDescDebugString
                    (&local_c0,
                     (D3D12_RESOURCE_DESC *)
                     (local_f8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x60 + 0x18));
          if (1 < (byte)LogD3D12RHI._0_1_) {
            ::FName::ToString((FName *)(FVar3.Data + (longlong)(int)uVar6 * 0x60 + 0x10),local_90);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            if (local_90[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90[0].Data.AllocatorInstance.Data);
            }
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          uVar6 = uVar6 + 1;
          if (uVar7 <= uVar6) break;
        }
      }
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return;
}

// MakeResourceDescDebugString @ 145aafc20

FString * __cdecl
D3D12RHI::MakeResourceDescDebugString(FString *__return_storage_ptr__,D3D12_RESOURCE_DESC *param_1)

{
  D3D12_RESOURCE_DIMENSION DVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  DVar1 = param_1->Dimension;
  if (DVar1 == D3D12_RESOURCE_DIMENSION_BUFFER) {
    ::FString::PrintfImpl(&local_18,L"Buffer %llu bytes");
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_18) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if (((DVar1 != D3D12_RESOURCE_DIMENSION_TEXTURE1D) &&
        (DVar1 != D3D12_RESOURCE_DIMENSION_TEXTURE2D)) &&
       (DVar1 != D3D12_RESOURCE_DIMENSION_TEXTURE3D)) {
      ::FString::operator=(__return_storage_ptr__,L"Unknown");
      return __return_storage_ptr__;
    }
    ::LexToString(param_1->Format);
    ::FString::PrintfImpl(&local_28,L"Texture %llux%dx%d %s");
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_28) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return __return_storage_ptr__;
}

// NeedsAgsIntrinsicsSpace @ 145ab01f0

bool __cdecl NeedsAgsIntrinsicsSpace(FD3D12ShaderData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->VendorExtensions).ArrayNum;
  pFVar3 = (param_1->VendorExtensions).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((param_1->VendorExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == 0x1002) {
      return true;
    }
    pFVar3 = pFVar3 + 0xc;
  }
  return false;
}

// QuantizeBoundShaderStateCommon @ 145ab1830

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
QuantizeBoundShaderStateCommon
          (FD3D12QuantizedBoundShaderState *param_1,FD3D12ShaderData *param_2,
          D3D12_RESOURCE_BINDING_TIER param_3,EShaderVisibility param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_2 != (FD3D12ShaderData *)0x0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              (param_3,&param_2->ResourceCounts,(param_1->RegisterCounts).Elements + param_4,param_5
              );
    iVar2 = (param_2->VendorExtensions).ArrayNum;
    pFVar4 = (param_2->VendorExtensions).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((param_2->VendorExtensions).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderCodeVendorExtension_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar1) {
        bVar3 = 0;
        goto LAB_145ab18b8;
      }
      if (*(int *)pFVar4 == 0x1002) break;
      pFVar4 = pFVar4 + 0xc;
    }
    bVar3 = 2;
LAB_145ab18b8:
    bVar3 = ((param_1->field3_0xec).Flags & 2 | bVar3) ^ (param_1->field3_0xec).Flags & 0xfd;
    (param_1->field3_0xec).Flags = bVar3;
    bVar3 = ((param_2->ResourceCounts).UsageFlags >> 4 | bVar3) & 4 ^ bVar3 & 0xfb;
    (param_1->field3_0xec).Flags = bVar3;
    bVar3 = ((param_2->ResourceCounts).UsageFlags << 2 | bVar3) & 8 ^ bVar3 & 0xf7;
    (param_1->field3_0xec).Flags = bVar3;
    bVar3 = ((param_2->ResourceCounts).UsageFlags << 2 | bVar3) & 0x10 ^ bVar3 & 0xef;
    (param_1->field3_0xec).Flags = bVar3;
    if (GRHIGlobals.SupportsShaderRootConstants != false) {
      (param_1->field3_0xec).Flags =
           ((param_2->ResourceCounts).UsageFlags << 2 | bVar3) & 0x20 ^ bVar3 & 0xdf;
    }
  }
  return;
}

// RecordBindings @ 145ab4af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
RecordBindings(FD3D12CommandContext *param_1,EShaderFrequency param_2,
              FD3D12ExplicitDescriptorCache *param_3,FShaderBundleBinderOps *param_4,uint param_5,
              FRHIShader *param_6,FD3D12ShaderData *param_7,FRHIBatchedShaderParameters *param_8,
              FD3D12RootSignature *param_9,FAllocatedConstantBuffer *param_10,
              TIntVector4<unsigned_int> *param_11,TArrayView<unsigned_int,int> *param_12)

{
  int *piVar1;
  EShaderResourceUsageFlags EVar2;
  FName FVar3;
  ulong64 uVar4;
  code *pcVar5;
  FAllocatedConstantBuffer *pFVar6;
  FD3D12ShaderData *pFVar7;
  FD3D12CommandContext *pFVar8;
  EShaderFrequency EVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulong64 *puVar15;
  byte bVar16;
  FRHIShaderParameterResource *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  FName FVar21;
  FD3D12UniformBuffer **ppFVar22;
  ulonglong uVar23;
  FRHIShaderParameterResource *pFVar24;
  TArrayView<unsigned_int,int> *this;
  FName FVar25;
  undefined1 auStackY_7d8 [32];
  uint local_798;
  uint local_794;
  uint local_790;
  uint local_78c;
  TArrayView<unsigned_int,int> *local_788;
  FAllocatedConstantBuffer *local_780;
  uint local_778;
  FD3D12RootSignature *local_770;
  FD3D12CommandContext *local_768;
  FRHIShader *local_760;
  FD3D12ShaderData *local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  <lambda_1> local_738;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  uint uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  uint uStack_70c;
  FWorkGraphShaderBundleBinder local_708;
  FD3D12UniformBuffer *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  FD3D12UniformBuffer *local_50;
  ulonglong local_48;
  uchar uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  local_760 = param_6;
  local_788 = param_12;
  local_790 = (uint)(param_7->ResourceCounts).NumSamplers;
  local_794 = (uint)(param_7->ResourceCounts).NumSRVs;
  uVar11 = (uint)(param_7->ResourceCounts).NumCBs;
  local_78c = (uint)(param_7->ResourceCounts).NumUAVs;
  local_780 = param_10;
  local_758 = param_7;
  local_770 = param_9;
  local_768 = param_1;
  if (((((param_7->ResourceCounts).UsageFlags & GlobalUniformBuffer) != None) &&
      (param_10->ConstantBuffer == (FD3D12ConstantBuffer *)0x0)) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!D3D12ShaderData->UsesGlobalUniformBuffer() || SharedConstantBuffer.ConstantBuffer != nullptr"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                          ,0x206,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_778 = 0;
  bVar10 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar10) {
    for (; (*(uint *)&param_1->field_0x2f8 >> local_778 & 1) == 0; local_778 = local_778 + 1) {
    }
  }
  local_708.GPUIndex = 0x20;
  if (bVar10) {
    local_708.GPUIndex = local_778;
  }
  EVar2 = (param_7->ResourceCounts).UsageFlags;
  FVar25.ComparisonIndex.Value = 0;
  FVar25.Number = 0;
  pFVar18 = (param_8->ResourceParameters).DataPtr;
  local_708.bBindlessResources = (bool)(EVar2 >> 1 & 1);
  local_708.bBindlessSamplers = (bool)(EVar2 >> 2 & 1);
  pFVar24 = pFVar18 + (param_8->ResourceParameters).ArrayNum;
  local_708.BoundCBVMask = 0;
  local_708.BoundSRVMask = 0;
  local_708.BoundUAVMask = 0;
  local_708.BoundSamplerMask = 0;
  local_c8 = (FD3D12UniformBuffer *)0x0;
  local_50 = (FD3D12UniformBuffer *)0x0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_708.Context = param_1;
  local_708.Frequency = param_2;
  local_708.BinderOps = param_4;
  for (; pFVar18 != pFVar24; pFVar18 = pFVar18 + 1) {
    switch(pFVar18->Type) {
    case Texture:
      FWorkGraphShaderBundleBinder::SetTexture
                (&local_708,(FRHITexture *)pFVar18->Resource,(uint)pFVar18->Index);
      break;
    case ResourceView:
      FWorkGraphShaderBundleBinder::SetSRV
                (&local_708,(FRHIShaderResourceView *)pFVar18->Resource,(uint)pFVar18->Index);
      break;
    case UnorderedAccessView:
      uVar19 = (ulonglong)pFVar18->Index;
      FVar21 = FVar25;
      if (pFVar18->Resource == (FRHIResource *)0x0) {
LAB_145ab4d09:
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("UAV != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x195,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FVar3 = (&pFVar18->Resource[8].OwnerName)[local_708.GPUIndex];
        FVar21 = (FName)((longlong)FVar3 + 0x30);
        if (FVar3 == (FName)0x0) {
          FVar21 = FVar25;
        }
        if (FVar21 == (FName)0x0) goto LAB_145ab4d09;
      }
      if (local_708.bBindlessResources == false) {
        if ((*(longlong *)((longlong)FVar21 + 0x18) == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0x103,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_728 = *(undefined4 *)((longlong)FVar21 + 0x38);
        uStack_724 = *(undefined4 *)((longlong)FVar21 + 0x3c);
        uStack_720 = *(undefined4 *)((longlong)FVar21 + 0x40);
        uStack_71c = *(uint *)((longlong)FVar21 + 0x44);
        local_708.LocalUAVs[uVar19].ptr = *(longlong *)((longlong)FVar21 + 0x38);
        local_708.UAVVersions[uVar19] = uStack_71c;
        local_708.BoundUAVMask = local_708.BoundUAVMask | 1L << (uVar19 & 0x3f);
      }
      FShaderBundleBinderOps::AddResourceTransition
                (local_708.BinderOps,(FD3D12UnorderedAccessView *)FVar21);
      break;
    case Sampler:
      uVar19 = (ulonglong)pFVar18->Index;
      FVar21 = FVar25;
      if (((pFVar18->Resource == (FRHIResource *)0x0) ||
          (FVar21 = (&pFVar18->Resource[1].OwnerName)[local_708.GPUIndex], FVar21 == (FName)0x0)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("Sampler != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                              ,0x1ca,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_708.bBindlessSamplers == false) {
        local_718 = *(undefined4 *)((longlong)FVar21 + 0x68);
        uStack_714 = *(undefined4 *)((longlong)FVar21 + 0x6c);
        uStack_710 = *(undefined4 *)((longlong)FVar21 + 0x70);
        uStack_70c = *(uint *)((longlong)FVar21 + 0x74);
        local_708.LocalSamplers[uVar19].ptr = *(longlong *)((longlong)FVar21 + 0x68);
        local_708.SamplerVersions[uVar19] = uStack_70c;
        local_708.BoundSamplerMask = local_708.BoundSamplerMask | 1L << (uVar19 & 0x3f);
      }
      break;
    case UniformBuffer:
      if (pFVar18->Resource == (FRHIResource *)0x0) {
        (&local_c8)[pFVar18->Index] = (FD3D12UniformBuffer *)0x0;
      }
      else {
        (&local_c8)[pFVar18->Index] = (FD3D12UniformBuffer *)pFVar18->Resource[4]._padding_;
      }
      break;
    case ResourceCollection:
      FVar21 = FVar25;
      if ((pFVar18->Resource != (FRHIResource *)0x0) &&
         (lVar20 = *(longlong *)
                    (&pFVar18->Resource[2].AtomicFlags + (ulonglong)local_708.GPUIndex * 2),
         lVar20 != 0)) {
        FVar21 = *(FName *)(lVar20 + 0x80);
      }
      if (local_708.bBindlessResources == false) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("bBindlessResources",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x1da,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_708.bBindlessResources == false) break;
      }
      EVar9 = local_708.Frequency;
      pFVar8 = local_708.Context;
      iVar12 = ((local_708.Context)->StateCache).PipelineState.Common.QueuedBindlessSRVs
               [local_708.Frequency].ArrayNum;
      piVar1 = &((local_708.Context)->StateCache).PipelineState.Common.QueuedBindlessSRVs
                [local_708.Frequency].ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&((local_708.Context)->StateCache).PipelineState.Common.
                                   QueuedBindlessSRVs[local_708.Frequency].AllocatorInstance,piVar1)
        ;
      }
      (pFVar8->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar9].ArrayNum = iVar12 + 1;
      *(FName *)((pFVar8->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar9].
                 AllocatorInstance.Data + (longlong)iVar12 * 8) = FVar21;
      break;
    default:
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                          ,0x228,L"Unhandled resource type?");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    param_1 = local_768;
    param_9 = local_770;
  }
  local_738.BundleUniformBuffers = (FD3D12UniformBuffer *(*) [16])&local_c8;
  local_738.Context = param_1;
  UE::RHICore::ApplyStaticUniformBuffers<_RecordBindings_::__l2::<lambda_1>_>
            (local_760,&param_1->StaticUniformBuffers,&local_738);
  local_798 = 0xffffffff;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FWorkGraphShaderBundleBinder_&,FD3D12UniformBuffer_*_[16],unsigned_int,0>
            (&local_708,local_760,&local_798,(FD3D12UniformBuffer *(*) [16])&local_c8,
             *(FTracker **)&param_1->field_0x1c8);
  if (local_780->ConstantBuffer != (FD3D12ConstantBuffer *)0x0) {
    if ((local_c8 != (FD3D12UniformBuffer *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("BundleUniformBuffers[0] == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x23d,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_708.BoundCBVMask = local_708.BoundCBVMask | 1;
  }
  pFVar7 = local_758;
  if (local_c8 != (FD3D12UniformBuffer *)0x0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 1;
  }
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 2;
  }
  if (CONCAT44(uStack_b4,uStack_b8) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 4;
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 8;
  }
  if (CONCAT44(uStack_a4,uStack_a8) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x10;
  }
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x20;
  }
  if (CONCAT44(uStack_94,uStack_98) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x40;
  }
  if (CONCAT44(uStack_8c,local_90) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x80;
  }
  if (CONCAT44(uStack_84,uStack_88) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x100;
  }
  if (CONCAT44(uStack_7c,local_80) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x200;
  }
  if (CONCAT44(uStack_74,uStack_78) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x400;
  }
  if (CONCAT44(uStack_6c,local_70) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x800;
  }
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x1000;
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x2000;
  }
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x4000;
  }
  if (local_50 != (FD3D12UniformBuffer *)0x0) {
    local_708.BoundCBVMask = local_708.BoundCBVMask | 0x8000;
  }
  uVar19 = 0xffffffffffffffff;
  bVar16 = (local_758->ResourceCounts).NumSRVs;
  if (bVar16 < 0x41) {
    if (bVar16 == 0x40) {
      uVar23 = 0xffffffffffffffff;
    }
    else {
      uVar23 = (1L << (bVar16 & 0x3f)) - 1;
    }
    if ((uVar23 & local_708.BoundSRVMask) != uVar23) goto LAB_145ab5177;
  }
  else {
LAB_145ab5177:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(D3D12ShaderData->ResourceCounts.NumSRVs, BundleBinder.BoundSRVMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x254,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar16 = (pFVar7->ResourceCounts).NumUAVs;
  if (bVar16 < 0x41) {
    if (bVar16 == 0x40) {
      uVar23 = 0xffffffffffffffff;
    }
    else {
      uVar23 = (1L << (bVar16 & 0x3f)) - 1;
    }
    if ((uVar23 & local_708.BoundUAVMask) != uVar23) goto LAB_145ab51cf;
  }
  else {
LAB_145ab51cf:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(D3D12ShaderData->ResourceCounts.NumUAVs, BundleBinder.BoundUAVMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x255,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar16 = (pFVar7->ResourceCounts).NumCBs;
  if (bVar16 < 0x41) {
    if (bVar16 == 0x40) {
      uVar23 = 0xffffffffffffffff;
    }
    else {
      uVar23 = (1L << (bVar16 & 0x3f)) - 1;
    }
    if ((uVar23 & local_708.BoundCBVMask) != uVar23) goto LAB_145ab5223;
  }
  else {
LAB_145ab5223:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(D3D12ShaderData->ResourceCounts.NumCBs, BundleBinder.BoundCBVMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x256,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar16 = (pFVar7->ResourceCounts).NumSamplers;
  if (bVar16 < 0x41) {
    if (bVar16 != 0x40) {
      uVar19 = (1L << (bVar16 & 0x3f)) - 1;
    }
    if ((uVar19 & local_708.BoundSamplerMask) != uVar19) goto LAB_145ab526e;
  }
  else {
LAB_145ab526e:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(D3D12ShaderData->ResourceCounts.NumSamplers, BundleBinder.BoundSamplerMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,599,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this = local_788;
  if (local_794 != 0) {
    iVar12 = FD3D12ExplicitDescriptorCache::Allocate
                       (param_3,local_708.LocalSRVs,local_794,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV
                        ,param_5);
    if ((iVar12 == -1) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("DescriptorTableBaseIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x25c,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = FD3D12RootSignature::SRVRDTBindSlot(param_9,param_2);
    if ((0x1f < (byte)uVar13) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar16 = param_9->BindSlotOffsetsInDWORDs[uVar13 & 0xff];
    FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(&param_3->ViewHeap,(uint)&local_750);
    this = local_788;
    puVar14 = TArrayView<unsigned_int,int>::operator[](local_788,(uint)bVar16);
    *(undefined8 *)puVar14 = local_750;
  }
  if (local_790 == 0) goto LAB_145ab548e;
  iVar12 = FD3D12ExplicitDescriptorCache::AllocateDeduplicated
                     (param_3,local_708.SamplerVersions,local_708.LocalSamplers,local_790,
                      D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER,param_5);
  if ((iVar12 == -1) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("DescriptorTableBaseIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                          ,0x268,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  switch(param_2) {
  case SF_Vertex:
    bVar16 = param_9->BindSlotMap[7];
    break;
  case SF_Mesh:
    bVar16 = param_9->BindSlotMap[0x10];
    break;
  case SF_Amplification:
    bVar16 = param_9->BindSlotMap[0x14];
    break;
  case SF_Pixel:
    bVar16 = param_9->BindSlotMap[3];
    break;
  case SF_Geometry:
    bVar16 = param_9->BindSlotMap[0xc];
    break;
  case SF_Compute:
    bVar16 = param_9->BindSlotMap[0x18];
    break;
  default:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                        ,0x79,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar16 = 0xff;
    goto LAB_145ab5436;
  }
  if (0x1f < bVar16) {
LAB_145ab5436:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                        ,0xde,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar16 = param_9->BindSlotOffsetsInDWORDs[bVar16];
  FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(&param_3->SamplerHeap,(uint)&local_748);
  puVar14 = TArrayView<unsigned_int,int>::operator[](this,(uint)bVar16);
  *(undefined8 *)puVar14 = local_748;
LAB_145ab548e:
  if (local_78c != 0) {
    iVar12 = FD3D12ExplicitDescriptorCache::AllocateDeduplicated
                       (param_3,local_708.UAVVersions,local_708.LocalUAVs,local_78c,
                        D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,param_5);
    if ((iVar12 == -1) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("DescriptorTableBaseIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x275,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar20 = 0x29;
    if (((SF_Compute < param_2) || ((0x29U >> (param_2 & 0x1f) & 1) == 0)) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("ShaderStage == SF_Pixel || ShaderStage == SF_Vertex || ShaderStage == SF_Compute"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xb8,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2 == SF_Vertex) {
      lVar20 = 0x18;
    }
    bVar16 = param_9->BindSlotMap[lVar20 + -0x10];
    if ((0x1f < bVar16) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar16 = param_9->BindSlotOffsetsInDWORDs[bVar16];
    FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(&param_3->ViewHeap,(uint)&local_740);
    puVar14 = TArrayView<unsigned_int,int>::operator[](this,(uint)bVar16);
    *(undefined8 *)puVar14 = local_740;
  }
  pFVar6 = local_780;
  if (local_780->ConstantBuffer != (FD3D12ConstantBuffer *)0x0) {
    uVar13 = FD3D12RootSignature::CBVRDBindSlot(param_9,param_2,0);
    if ((0x1f < (byte)uVar13) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = (pFVar6->ResourceLocation).GPUVirtualAddress;
    puVar15 = (ulong64 *)
              TArrayView<unsigned_int,int>::operator[]
                        (this,(uint)param_9->BindSlotOffsetsInDWORDs[uVar13 & 0xff]);
    *puVar15 = uVar4;
  }
  if (uVar11 != 0) {
    ppFVar22 = &local_c8;
    do {
      switch(param_2) {
      case SF_Vertex:
        uVar17 = param_9->BindSlotMap[6];
        break;
      case SF_Mesh:
        uVar17 = param_9->BindSlotMap[0xf];
        break;
      case SF_Amplification:
        uVar17 = param_9->BindSlotMap[0x13];
        break;
      case SF_Pixel:
        uVar17 = param_9->BindSlotMap[2];
        break;
      case SF_Geometry:
        uVar17 = param_9->BindSlotMap[0xb];
        break;
      case SF_Compute:
      case SF_NumFrequencies:
        uVar17 = param_9->BindSlotMap[0x17];
        break;
      default:
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xab,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = 0xff;
      }
      bVar16 = uVar17 + (char)FVar25.ComparisonIndex.Value;
      if ((0x1f < bVar16) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                              ,0xde,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar16 = param_9->BindSlotOffsetsInDWORDs[bVar16];
      if (*ppFVar22 != (FD3D12UniformBuffer *)0x0) {
        uVar4 = ((*ppFVar22)->ResourceLocation).GPUVirtualAddress;
        if ((this->ArrayNum <= (int)(uint)bVar16) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(ulong64 *)(this->DataPtr + bVar16) = uVar4;
      }
      FVar25.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value + 1;
      FVar25.Number = 0;
      ppFVar22 = ppFVar22 + 1;
    } while (FVar25.ComparisonIndex.Value < uVar11);
  }
  bVar16 = param_9->RootConstantsSlot;
  if (bVar16 != 0xff) {
    if ((0x1f < bVar16) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = (uint)param_9->BindSlotOffsetsInDWORDs[bVar16];
    uVar11 = (param_11->field0_0x0)._s_0.X;
    puVar14 = TArrayView<unsigned_int,int>::operator[](this,uVar13);
    *puVar14 = uVar11;
    uVar11 = (param_11->field0_0x0)._s_0.Y;
    puVar14 = TArrayView<unsigned_int,int>::operator[](this,uVar13 + 1);
    *puVar14 = uVar11;
    uVar11 = (param_11->field0_0x0)._s_0.Z;
    puVar14 = TArrayView<unsigned_int,int>::operator[](this,uVar13 + 2);
    *puVar14 = uVar11;
    uVar11 = (param_11->field0_0x0)._s_0.W;
    puVar14 = TArrayView<unsigned_int,int>::operator[](this,uVar13 + 3);
    *puVar14 = uVar11;
  }
  return;
}

// SafeCreateDXGIFactory @ 145ab8310

void __cdecl SafeCreateDXGIFactory(IDXGIFactory4 **param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = FCommandLine::Get();
  bIsQuadBufferStereoEnabled = FParse::Param(pwVar1,L"quad_buffer_stereo");
  CreateDXGIFactory(&_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a,param_1);
  return;
}

// SafeTestD3D12CreateDevice @ 145ab8350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SafeTestD3D12CreateDevice
          (IDXGIAdapter *param_1,D3D_FEATURE_LEVEL param_2,FD3D12DeviceBasicInfo *param_3)

{
  ID3D12Device *pIVar1;
  bool bVar2;
  int iVar3;
  D3D_SHADER_MODEL DVar4;
  uint uVar5;
  Type TVar6;
  undefined4 in_register_00000014;
  D3D_SHADER_MODEL *pDVar7;
  undefined1 auStack_d8 [32];
  ID3D12Device *local_a0;
  D3D_SHADER_MODEL local_98 [2];
  D3D_SHADER_MODEL *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  D3D_SHADER_MODEL local_60 [2];
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0 = (ID3D12Device *)0x0;
  iVar3 = D3D12CreateDevice(param_1,CONCAT44(in_register_00000014,param_2),
                            &_GUID_189819f1_1db6_4b57_be54_1821339b85f7,&local_a0);
  if (iVar3 < 0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    bVar2 = false;
  }
  else {
    local_48 = ___xmm_0000b1000000c0000000c1000000c200;
    uStack_40 = _UNK_15109e4e8;
    local_38 = 0xb000;
    local_50 = 0;
    puStack_58 = &local_48;
    local_60[0] = 5;
    local_60[1] = D3D_SHADER_MODEL_NONE;
    iVar3 = (**(code **)((longlong)*local_a0 + 0x68))(local_a0,2,local_60,0x18);
    pIVar1 = local_a0;
    if (-1 < iVar3) {
      param_2 = (D3D_FEATURE_LEVEL)local_50;
    }
    param_3->MaxFeatureLevel = param_2;
    local_80 = ___xmm_00000064000000650000006600000067;
    uStack_78 = _UNK_15109e4d8;
    local_70 = ___xmm_00000060000000610000006200000063;
    uStack_68 = _UNK_15109e4c8;
    local_98[0] = D3D_SHADER_MODEL_NONE;
    for (pDVar7 = (D3D_SHADER_MODEL *)&local_80; local_90 = pDVar7, pDVar7 != local_60;
        pDVar7 = pDVar7 + 1) {
      local_98[0] = *pDVar7;
      iVar3 = (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,7,local_98,4);
      DVar4 = local_98[0];
      if (-1 < iVar3) goto LAB_145ab8475;
    }
    DVar4 = D3D_SHADER_MODEL_5_1;
LAB_145ab8475:
    param_3->MaxShaderModel = DVar4;
    GetResourceTiers(local_a0,&param_3->ResourceBindingTier,&param_3->ResourceHeapTier);
    uVar5 = (**(code **)((longlong)*local_a0 + 0x38))();
    param_3->NumDeviceNodes = uVar5;
    local_60[0] = D3D_SHADER_MODEL_NONE;
    local_60[1] = D3D_SHADER_MODEL_NONE;
    puStack_58 = (undefined8 *)0x0;
    local_50 = 0;
    (**(code **)((longlong)*local_a0 + 0x68))(local_a0,8,local_60,0x18);
    param_3->bSupportsWaveOps = local_60[0] != D3D_SHADER_MODEL_NONE;
    bVar2 = GetSupportsAtomic64(param_1,local_a0);
    param_3->bSupportsAtomic64 = bVar2;
    TVar6 = FindMaxRHIFeatureLevel
                      (param_3->MaxFeatureLevel,param_3->MaxShaderModel,param_3->ResourceBindingTier
                       ,param_3->bSupportsWaveOps,bVar2);
    param_3->MaxRHIFeatureLevel = TVar6;
    bVar2 = IsDeviceUMA(local_a0);
    param_3->bUMA = bVar2;
    (**(code **)((longlong)*local_a0 + 0x10))();
    bVar2 = true;
  }
  return bVar2;
}

// SaveByteCode @ 145ab8560

void __cdecl SaveByteCode(D3D12_SHADER_BYTECODE *param_1)

{
  void *_Dst;
  
  if (param_1->pShaderBytecode != (void *)0x0) {
    _Dst = FMemory::Malloc(param_1->BytecodeLength,0);
    memcpy(_Dst,param_1->pShaderBytecode,param_1->BytecodeLength);
    param_1->pShaderBytecode = _Dst;
  }
  return;
}

// SetD3D12ObjectName @ 145ab8770

void __cdecl SetD3D12ObjectName(ID3D12Object *param_1,wchar_t *param_2)

{
  int iVar1;
  FString local_18;
  
  if ((param_1 != (ID3D12Object *)0x0) && (param_2 != (wchar_t *)0x0)) {
    iVar1 = (**(code **)((longlong)*param_1 + 0x30))();
    if (iVar1 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar1,"Object->SetName(Name)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                 ,0x3e,(ID3D12Device *)0x0,&local_18);
    }
  }
  return;
}

// SetD3D12ResourceName @ 145ab87d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl SetD3D12ResourceName(FD3D12ResourceLocation *param_1,wchar_t *param_2)

{
  FD3D12Resource *pFVar1;
  ID3D12Resource *pIVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName local_res8;
  FString local_18;
  
  pFVar1 = param_1->UnderlyingResource;
  if ((pFVar1 != (FD3D12Resource *)0x0) &&
     ((pFVar1->bRequiresResourceStateTracking || (param_1->Type == eStandAlone)))) {
    bVar3 = FName::Equals(pFVar1->DebugName,param_2);
    if (!bVar3) {
      pFVar5 = FName::FName(&local_res8,param_2);
      pFVar1->DebugName = *pFVar5;
      pIVar2 = (pFVar1->Resource).Reference;
      if ((pIVar2 != (ID3D12Resource *)0x0) && (param_2 != (wchar_t *)0x0)) {
        iVar4 = (**(code **)((longlong)*pIVar2 + 0x30))();
        if (iVar4 < 0) {
          local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_18.Data.ArrayNum = 0;
          local_18.Data.ArrayMax = 0;
          D3D12RHI::VerifyD3D12Result
                    (iVar4,"Object->SetName(Name)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                     ,0x3e,(ID3D12Device *)0x0,&local_18);
        }
      }
    }
  }
  return;
}

// SetD3D12ResourceName @ 145ab8890

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl SetD3D12ResourceName(FD3D12Buffer *param_1,wchar_t *param_2)

{
  if (param_1 != (FD3D12Buffer *)0x0) {
    SetD3D12ResourceName((FD3D12ResourceLocation *)&param_1->_padding_,param_2);
    return;
  }
  return;
}

// SetD3D12ResourceName @ 145ab88b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl SetD3D12ResourceName(FD3D12Resource *param_1,wchar_t *param_2)

{
  ID3D12Resource *pIVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res8;
  FString local_18;
  
  if ((param_1 != (FD3D12Resource *)0x0) &&
     (bVar2 = FName::Equals(param_1->DebugName,param_2), !bVar2)) {
    pFVar4 = FName::FName(&local_res8,param_2);
    param_1->DebugName = *pFVar4;
    pIVar1 = (param_1->Resource).Reference;
    if ((pIVar1 != (ID3D12Resource *)0x0) &&
       ((param_2 != (wchar_t *)0x0 && (iVar3 = (**(code **)((longlong)*pIVar1 + 0x30))(), iVar3 < 0)
        ))) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar3,"Object->SetName(Name)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                 ,0x3e,(ID3D12Device *)0x0,&local_18);
    }
  }
  return;
}

// SetD3D12ResourceName @ 145ab8960

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl SetD3D12ResourceName(FD3D12Texture *param_1,wchar_t *param_2)

{
  if (param_1 != (FD3D12Texture *)0x0) {
    SetD3D12ResourceName((FD3D12ResourceLocation *)&param_1->_padding_,param_2);
    return;
  }
  return;
}

// SetShaderBundleSharedBindlessConstants @ 145ab92f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SetShaderBundleSharedBindlessConstants
          (FD3D12CommandContext *param_1,TArrayView<FRHIShaderParameterResource_const_,int> *param_2
          ,FAllocatedConstantBuffer *param_3)

{
  EType EVar1;
  ushort uVar2;
  FRHIResourceCollection *pFVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  FRHIShaderParameterResource *pFVar10;
  uint uVar11;
  FRHIShaderParameterResource *pFVar12;
  bool bVar13;
  undefined1 local_58 [8];
  FD3D12BindlessConstantSetter local_50;
  
  if (param_2->ArrayNum != 0) {
    uVar11 = 0;
    bVar13 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar13) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    local_50.ConstantBuffer = param_1->StageConstantBuffers + 5;
    uVar8 = 0x20;
    if (bVar13) {
      uVar8 = uVar11;
    }
    pFVar10 = param_2->DataPtr;
    pFVar12 = pFVar10 + param_2->ArrayNum;
    local_50.Frequency = SF_Compute;
    local_50.Context = param_1;
    local_50.GpuIndex = uVar8;
    for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 1) {
      lVar9 = 0;
      pFVar3 = (FRHIResourceCollection *)pFVar10->Resource;
      if (pFVar3 != (FRHIResourceCollection *)0x0) {
        EVar1 = pFVar10->Type;
        if (EVar1 == Texture) {
          uVar2 = pFVar10->Index;
          lVar6 = (**(code **)(pFVar3->_padding_ + 0x48))(pFVar3);
          if ((lVar6 != 0) &&
             (lVar6 = *(longlong *)(lVar6 + 0x200 + (ulonglong)uVar8 * 8), lVar6 != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x240);
          }
          piVar7 = (int *)(**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,local_58);
          iVar5 = *piVar7;
          if ((iVar5 != -1) && ((char)piVar7[1] != '\t')) {
            uVar11 = uVar2 + 4;
            if ((uint)param_1->StageConstantBuffers[5].ShadowData.ArrayNum < uVar11) {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                        (&param_1->StageConstantBuffers[5].ShadowData,uVar2 + 0x203 & 0xfffffe00,
                         Default);
            }
            *(int *)(param_1->StageConstantBuffers[5].ShadowData.AllocatorInstance.Data + uVar2) =
                 iVar5;
            uVar4 = param_1->StageConstantBuffers[5].CurrentUpdateSize;
            param_1->StageConstantBuffers[5].bIsDirty = true;
            if (uVar4 < uVar11) {
              uVar4 = uVar11;
            }
            param_1->StageConstantBuffers[5].CurrentUpdateSize = uVar4;
          }
          iVar5 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum;
          piVar7 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayMax;
          if (iVar5 == *piVar7) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                      [5].AllocatorInstance,piVar7);
            (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum = iVar5;
          }
          (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum = iVar5 + 1;
          *(longlong *)
           ((param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].AllocatorInstance.Data
           + (longlong)iVar5 * 8) = lVar9;
        }
        else if (EVar1 == ResourceView) {
          uVar2 = pFVar10->Index;
          lVar6 = (&pFVar3[5]._padding_)[uVar8] + 0x30;
          if ((&pFVar3[5]._padding_)[uVar8] == 0) {
            lVar6 = lVar9;
          }
          iVar5 = (int)*(undefined8 *)(lVar6 + 0x48);
          if ((iVar5 != -1) && ((char)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20) != '\t')) {
            uVar11 = uVar2 + 4;
            if ((uint)param_1->StageConstantBuffers[5].ShadowData.ArrayNum < uVar11) {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                        (&param_1->StageConstantBuffers[5].ShadowData,uVar2 + 0x203 & 0xfffffe00,
                         Default);
            }
            *(int *)(param_1->StageConstantBuffers[5].ShadowData.AllocatorInstance.Data + uVar2) =
                 iVar5;
            uVar4 = param_1->StageConstantBuffers[5].CurrentUpdateSize;
            param_1->StageConstantBuffers[5].bIsDirty = true;
            if (uVar4 < uVar11) {
              uVar4 = uVar11;
            }
            param_1->StageConstantBuffers[5].CurrentUpdateSize = uVar4;
          }
          iVar5 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum;
          piVar7 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayMax;
          if (iVar5 == *piVar7) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                      [5].AllocatorInstance,piVar7);
            (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum = iVar5;
          }
          (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum = iVar5 + 1;
          *(longlong *)
           ((param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].AllocatorInstance.Data
           + (longlong)iVar5 * 8) = lVar6;
        }
        else if (EVar1 == UnorderedAccessView) {
          uVar2 = pFVar10->Index;
          lVar6 = (&pFVar3[5]._padding_)[uVar8] + 0x30;
          if ((&pFVar3[5]._padding_)[uVar8] == 0) {
            lVar6 = lVar9;
          }
          iVar5 = (int)*(undefined8 *)(lVar6 + 0x48);
          if ((iVar5 != -1) && ((char)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20) != '\t')) {
            uVar11 = uVar2 + 4;
            if ((uint)param_1->StageConstantBuffers[5].ShadowData.ArrayNum < uVar11) {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                        (&param_1->StageConstantBuffers[5].ShadowData,uVar2 + 0x203 & 0xfffffe00,
                         Default);
            }
            *(int *)(param_1->StageConstantBuffers[5].ShadowData.AllocatorInstance.Data + uVar2) =
                 iVar5;
            uVar4 = param_1->StageConstantBuffers[5].CurrentUpdateSize;
            param_1->StageConstantBuffers[5].bIsDirty = true;
            if (uVar4 < uVar11) {
              uVar4 = uVar11;
            }
            param_1->StageConstantBuffers[5].CurrentUpdateSize = uVar4;
          }
          iVar5 = (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[5].ArrayNum;
          piVar7 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[5].ArrayMax;
          if (iVar5 == *piVar7) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs
                                      [5].AllocatorInstance,piVar7);
            (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[5].ArrayNum = iVar5;
          }
          (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[5].ArrayNum = iVar5 + 1;
          *(longlong *)
           ((param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[5].AllocatorInstance.Data
           + (longlong)iVar5 * 8) = lVar6;
        }
        else if (EVar1 == ResourceCollection) {
          FD3D12BindlessConstantSetter::SetResourceCollection(&local_50,pFVar3,(uint)pFVar10->Index)
          ;
        }
      }
    }
    param_3->ConstantBuffer = local_50.ConstantBuffer;
    FD3D12ConstantBuffer::Version(local_50.ConstantBuffer,&param_3->ResourceLocation,false);
  }
  return;
}

// ShouldSetD3D12ResourceName @ 145ab9f90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __cdecl ShouldSetD3D12ResourceName(FD3D12ResourceLocation *param_1)

{
  if ((param_1->UnderlyingResource != (FD3D12Resource *)0x0) &&
     ((param_1->UnderlyingResource->bRequiresResourceStateTracking || (param_1->Type == eStandAlone)
      ))) {
    return true;
  }
  return false;
}

// TranslateDesc @ 145aba900

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

EFlags __cdecl
TranslateDesc(D3D12_UNORDERED_ACCESS_VIEW_DESC *param_1,FD3D12Buffer *param_2,FViewInfo *param_3)

{
  char cVar1;
  DXGI_FORMAT DVar2;
  code *pcVar3;
  bool bVar4;
  EFlags EVar5;
  DXGI_FORMAT DVar6;
  
  EVar5 = None;
  if (*(char *)((longlong)&param_3->_padding_ + 2) == '\0') {
    if ((param_3->bAppendBuffer != false) || (param_3->bAtomicCounter != false)) {
      EVar5 = NeedsCounter;
    }
    param_1->ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
    DVar2 = GPixelFormats[*(byte *)((longlong)&param_3->_padding_ + 1)].PlatformFormat;
    if (DVar2 == DXGI_FORMAT_R32G8X24_TYPELESS) {
      DVar6 = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
    }
    else if (DVar2 == DXGI_FORMAT_R8G8B8A8_TYPELESS) {
      DVar6 = DXGI_FORMAT_R8G8B8A8_UNORM;
    }
    else {
      DVar6 = DXGI_FORMAT_B8G8R8A8_UNORM;
      if (DVar2 != DXGI_FORMAT_B8G8R8A8_TYPELESS) {
        DVar6 = DVar2;
      }
    }
    param_1->Format = DVar6;
    (param_1->field2_0x8).Buffer.FirstElement =
         ((ulonglong)(uint)param_3->_padding_ + param_2->_padding_) /
         (ulonglong)*(uint *)((longlong)&param_3->_padding_ + 4);
    (param_1->field2_0x8).Buffer.NumElements = (uint)param_3->_padding_;
    cVar1 = (char)param_3->_padding_;
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        (param_1->field2_0x8).Buffer.StructureByteStride =
             *(uint *)((longlong)&param_3->_padding_ + 4);
      }
      else {
        if (cVar1 == '\x04') {
          param_1->Format = DXGI_FORMAT_R32_TYPELESS;
          (param_1->field2_0x8).Buffer.Flags = D3D12_BUFFER_UAV_FLAG_RAW;
          return EVar5;
        }
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                           ,0x91,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
    }
  }
  return EVar5;
}

// TranslateDesc @ 145abaa00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

EFlags __cdecl
TranslateDesc(D3D12_UNORDERED_ACCESS_VIEW_DESC *param_1,FD3D12Texture *param_2,FViewInfo *param_3)

{
  ETextureCreateFlags EVar1;
  code *pcVar2;
  bool bVar3;
  EFlags EVar4;
  EDimension EVar5;
  DXGI_FORMAT DVar6;
  uint uVar7;
  FRHITextureDesc *pFVar8;
  DXGI_FORMAT DVar9;
  DXGI_FORMAT DVar10;
  int iVar11;
  uint uVar12;
  
  pFVar8 = (FRHITextureDesc *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((pFVar8->NumSamples != '\x01') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("TextureDesc.NumSamples == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  DVar6 = GPixelFormats[(byte)param_3->field_0x5].PlatformFormat;
  if (DVar6 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    DVar10 = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
  }
  else if (DVar6 == DXGI_FORMAT_R8G8B8A8_TYPELESS) {
    DVar10 = DXGI_FORMAT_R8G8B8A8_UNORM;
  }
  else {
    DVar10 = DXGI_FORMAT_B8G8R8A8_UNORM;
    if (DVar6 != DXGI_FORMAT_B8G8R8A8_TYPELESS) {
      DVar10 = DVar6;
    }
  }
  EVar1 = pFVar8->Flags;
  DVar6 = GPixelFormats[pFVar8->Format].PlatformFormat;
  if ((EVar1 >> 0x19 & 1) == 0) {
    if ((EVar1 & DepthStencilTargetable) != None) {
      if (DVar6 == DXGI_FORMAT_R32_FLOAT) {
        DVar9 = DXGI_FORMAT_R32_TYPELESS;
      }
      else {
        DVar9 = DXGI_FORMAT_R16_TYPELESS;
        if (DVar6 != DXGI_FORMAT_R16_FLOAT) {
          DVar9 = DVar6;
        }
      }
      goto switchD_145abab41_caseD_5a;
    }
switchD_145ababa2_caseD_3:
    DVar9 = DVar6;
  }
  else if (DVar6 - DXGI_FORMAT_R8G8B8A8_TYPELESS < 0x47) {
    if ((EVar1 & SRGB) == None) {
      DVar9 = DXGI_FORMAT_B8G8R8A8_UNORM;
      switch(DVar6) {
      case DXGI_FORMAT_R8G8B8A8_TYPELESS:
        DVar9 = DXGI_FORMAT_R8G8B8A8_UNORM;
        break;
      default:
        goto code_r0x000145abab8c;
      case DXGI_FORMAT_BC1_TYPELESS:
        DVar9 = DXGI_FORMAT_BC1_UNORM;
        break;
      case DXGI_FORMAT_BC2_TYPELESS:
        DVar9 = DXGI_FORMAT_BC2_UNORM;
        break;
      case DXGI_FORMAT_BC3_TYPELESS:
        DVar9 = DXGI_FORMAT_BC3_UNORM;
        break;
      case DXGI_FORMAT_B8G8R8A8_TYPELESS:
        break;
      case DXGI_FORMAT_B8G8R8X8_TYPELESS:
        DVar9 = DXGI_FORMAT_B8G8R8X8_UNORM;
        break;
      case DXGI_FORMAT_BC7_TYPELESS:
        DVar9 = DXGI_FORMAT_BC7_UNORM;
      }
    }
    else {
      switch(DVar6) {
      case DXGI_FORMAT_R8G8B8A8_TYPELESS:
        DVar9 = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
        break;
      default:
        goto code_r0x000145abab8c;
      case DXGI_FORMAT_BC1_TYPELESS:
        DVar9 = DXGI_FORMAT_BC1_UNORM_SRGB;
        break;
      case DXGI_FORMAT_BC2_TYPELESS:
        DVar9 = DXGI_FORMAT_BC2_UNORM_SRGB;
        break;
      case DXGI_FORMAT_BC3_TYPELESS:
        DVar9 = DXGI_FORMAT_BC3_UNORM_SRGB;
        break;
      case DXGI_FORMAT_B8G8R8A8_TYPELESS:
        DVar9 = DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
        break;
      case DXGI_FORMAT_B8G8R8X8_TYPELESS:
        DVar9 = DXGI_FORMAT_B8G8R8X8_UNORM_SRGB;
        break;
      case DXGI_FORMAT_BC7_TYPELESS:
        DVar9 = DXGI_FORMAT_BC7_UNORM_SRGB;
      }
    }
  }
  else {
code_r0x000145abab8c:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(DVar6) {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      DVar9 = DXGI_FORMAT_R32G32B32A32_UINT;
      break;
    default:
      goto switchD_145ababa2_caseD_3;
    case DXGI_FORMAT_R32G32B32_FLOAT:
      DVar9 = DXGI_FORMAT_R32G32B32_UINT;
      break;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      DVar9 = DXGI_FORMAT_R16G16B16A16_UNORM;
      break;
    case DXGI_FORMAT_R32G32_FLOAT:
      DVar9 = DXGI_FORMAT_R32G32_UINT;
      break;
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      DVar9 = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
      break;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      DVar9 = DXGI_FORMAT_R10G10B10A2_UNORM;
    }
  }
switchD_145abab41_caseD_5a:
  param_1->Format = DVar10;
  DVar6 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat(DVar9);
  if (DVar6 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    iVar11 = DVar10 - DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
LAB_145abacc8:
    if ((iVar11 != 0) && (iVar11 == 1)) {
LAB_145abacce:
      uVar12 = 1;
      goto LAB_145abac5d;
    }
  }
  else {
    if (DVar6 == DXGI_FORMAT_R24G8_TYPELESS) {
      iVar11 = DVar10 - DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
      goto LAB_145abacc8;
    }
    if (DVar6 != DXGI_FORMAT_NV12) {
      if ((DVar6 != DXGI_FORMAT_P010) || (DVar10 != DXGI_FORMAT_R16G16_UNORM)) goto LAB_145abac5b;
      goto LAB_145abacce;
    }
    if (DVar10 == DXGI_FORMAT_R8G8_UNORM) goto LAB_145abacce;
  }
LAB_145abac5b:
  uVar12 = 0;
LAB_145abac5d:
  EVar5 = UE::RHICore::AdjustViewInfoDimensionForNarrowing((FViewInfo *)param_3,pFVar8);
  if (EVar5 == Texture2D) {
    param_1->ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2D;
    uVar7 = (uint)param_3->MipLevel;
    (param_1->field2_0x8).Texture1DArray.FirstArraySlice = uVar12;
  }
  else if (EVar5 == Texture2DArray) {
    param_1->ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
    *(uint *)((longlong)&param_1->field2_0x8 + 4) = (uint)*(ushort *)param_3;
    *(uint *)((longlong)&param_1->field2_0x8 + 8) = (uint)*(ushort *)&param_3->field_0x2;
    uVar7 = (uint)param_3->MipLevel;
    (param_1->field2_0x8).Buffer.StructureByteStride = uVar12;
  }
  else if ((EVar5 == NumBits) || (EVar5 == TextureCubeArray)) {
    param_1->ViewDimension = D3D12_UAV_DIMENSION_TEXTURE2DARRAY;
    (param_1->field2_0x8).Texture1DArray.FirstArraySlice =
         ((uint)*(ushort *)param_3 + (uint)*(ushort *)param_3 * 2) * 2;
    (param_1->field2_0x8).Buffer.NumElements =
         ((uint)*(ushort *)&param_3->field_0x2 + (uint)*(ushort *)&param_3->field_0x2 * 2) * 2;
    uVar7 = (uint)param_3->MipLevel;
    (param_1->field2_0x8).Buffer.StructureByteStride = uVar12;
  }
  else {
    if (EVar5 != Texture3D) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,200,L"");
      if (!bVar3) {
        return None;
      }
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    param_1->ViewDimension = D3D12_UAV_DIMENSION_TEXTURE3D;
    (param_1->field2_0x8).Texture1DArray.FirstArraySlice = 0;
    uVar7 = (uint)(pFVar8->Depth >> (param_3->MipLevel & 0x1f));
    uVar12 = 1;
    if (1 < uVar7) {
      uVar12 = uVar7;
    }
    (param_1->field2_0x8).Buffer.NumElements = uVar12;
    uVar7 = (uint)param_3->MipLevel;
  }
  *(uint *)&param_1->field2_0x8 = uVar7;
  return None;
}

// Type @ 145abb130

D3D12_STATE_SUBOBJECT_TYPE __thiscall
CD3DX12_DXIL_LIBRARY_SUBOBJECT::Type(CD3DX12_DXIL_LIBRARY_SUBOBJECT *this)

{
  return D3D12_STATE_SUBOBJECT_TYPE_DXIL_LIBRARY;
}

// Type @ 145abb140

D3D12_STATE_SUBOBJECT_TYPE __thiscall
CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT::Type(CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *this)

{
  return D3D12_STATE_SUBOBJECT_TYPE_GLOBAL_ROOT_SIGNATURE;
}

// Type @ 145abb150

D3D12_STATE_SUBOBJECT_TYPE __thiscall
CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT::Type(CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *this)

{
  return D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE;
}

// Type @ 145abb160

D3D12_STATE_SUBOBJECT_TYPE __thiscall
CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT::Type
          (CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *this)

{
  return D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
}

// Type @ 145abb170

D3D12_STATE_SUBOBJECT_TYPE __thiscall
CD3DX12_WORK_GRAPH_SUBOBJECT::Type(CD3DX12_WORK_GRAPH_SUBOBJECT *this)

{
  return D3D12_STATE_SUBOBJECT_TYPE_WORK_GRAPH;
}

// VerifyD3D12CreateTextureResult @ 145abc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
D3D12RHI::VerifyD3D12CreateTextureResult
          (T_HRESULT param_1,char *param_2,char *param_3,uint param_4,D3D12_RESOURCE_DESC *param_5,
          ID3D12Device *param_6)

{
  D3D12_RESOURCE_FLAGS DVar1;
  size_t sVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_378 [32];
  FString local_2f0;
  wchar_t *local_2e0;
  ulong64 local_2d8;
  ID3D12Device *local_2d0;
  FD3D12DynamicRHI *local_2c8;
  FString local_2c0;
  FString local_2b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2d0 = param_6;
  GetD3D12ErrorString(&local_2b0,param_1,param_6);
  local_2e0 = UE::DXGIUtilities::GetFormatString(param_5->Format);
  DVar1 = param_5->Flags;
  local_2c8 = FD3D12DynamicRHI::SingleD3DRHI;
  ::FString::FString(&local_2f0,L"");
  if ((DVar1 & D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET) != D3D12_RESOURCE_FLAG_NONE) {
    ::FString::AppendChars(&local_2f0,L"D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET ",0x28);
  }
  if ((DVar1 & D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL) != D3D12_RESOURCE_FLAG_NONE) {
    ::FString::AppendChars(&local_2f0,L"D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL ",0x28);
  }
  if ((DVar1 & D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE) != D3D12_RESOURCE_FLAG_NONE) {
    ::FString::AppendChars(&local_2f0,L"D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE ",0x29);
  }
  if ((DVar1 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != D3D12_RESOURCE_FLAG_NONE) {
    ::FString::AppendChars(&local_2f0,L"D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS ",0x2b);
  }
  local_2d8 = param_5->Width;
  local_178._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar2,Yes);
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar2,Yes);
  }
  ::FString::PrintfImpl
            (&local_2c0,
             L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
            );
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_2c0.Data.ArrayNum != 0) {
    FVar3.Data = local_2c0.Data.AllocatorInstance.Data;
  }
  FD3D12DynamicRHI::HandleFailedD3D12Result(local_2c8,param_1,local_2d0,true,(wchar_t *)FVar3.Data);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  return;
}

// VerifyD3D12Result @ 145abc4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
D3D12RHI::VerifyD3D12Result
          (T_HRESULT param_1,char *param_2,char *param_3,uint param_4,ID3D12Device *param_5,
          FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FD3D12DynamicRHI *this;
  size_t sVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_318 [32];
  FString local_2c0;
  FString local_2b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  GetD3D12ErrorString(&local_2b0,param_1,param_5);
  this = FD3D12DynamicRHI::SingleD3DRHI;
  local_178._padding_ = 0;
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar2,Yes);
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar2,Yes);
  }
  ::FString::PrintfImpl(&local_2c0,L"%s failed \n at %s:%u \n with error %s\n%s");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_2c0.Data.ArrayNum != 0) {
    FVar3.Data = local_2c0.Data.AllocatorInstance.Data;
  }
  FD3D12DynamicRHI::HandleFailedD3D12Result(this,param_1,param_5,false,(wchar_t *)FVar3.Data);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// _Change_array @ 145abc830

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
_Change_array(vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
              *this,D3D12_STATE_SUBOBJECT **param_1,ulong64 param_2,ulong64 param_3)

{
  D3D12_STATE_SUBOBJECT **ppDVar1;
  D3D12_STATE_SUBOBJECT **ppDVar2;
  ulong64 uVar3;
  
  ppDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppDVar1 != (D3D12_STATE_SUBOBJECT **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppDVar1 & 0xfffffffffffffff8;
    ppDVar2 = ppDVar1;
    if (0xfff < uVar3) {
      ppDVar2 = (D3D12_STATE_SUBOBJECT **)ppDVar1[0xffffffffffffffff];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppDVar1 + (-8 - (longlong)ppDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppDVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 145abc8e0

void __thiscall
std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::_Change_array
          (vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_> *this,
          D3D12_STATE_SUBOBJECT *param_1,ulong64 param_2,ulong64 param_3)

{
  D3D12_STATE_SUBOBJECT *pDVar1;
  D3D12_STATE_SUBOBJECT *pDVar2;
  ulong64 uVar3;
  
  pDVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar1 != (D3D12_STATE_SUBOBJECT *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar1 & 0xfffffffffffffff0;
    pDVar2 = pDVar1;
    if (0xfff < uVar3) {
      pDVar2 = pDVar1[-1].pDesc;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar1 + (-8 - (longlong)pDVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Change_array @ 145abc990

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
::_Change_array(vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
                *this,unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                      *param_1,ulong64 param_2,ulong64 param_3)

{
  CD3DX12_NODE_HELPER_BASE *pCVar1;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar2;
  ulong64 uVar3;
  unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
  *puVar4;
  
  puVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar4 != (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                 *)0x0) {
    puVar2 = (this->_Mypair)._Myval2._Mylast;
    for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
      pCVar1 = (puVar4->_Mypair)._Myval2;
      if (pCVar1 != (CD3DX12_NODE_HELPER_BASE *)0x0) {
        (**(code **)pCVar1->_padding_)(pCVar1,1);
      }
    }
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar4 & 0xfffffffffffffff8;
    puVar2 = puVar4;
    if (0xfff < uVar3) {
      puVar2 = *(unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
                 **)(puVar4 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Xlength @ 145abca60

void __cdecl std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145abca80

void __cdecl std::vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145abcaa0

void __cdecl std::vector<D3D12_NODE,std::allocator<D3D12_NODE>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145abcac0

void __cdecl std::vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145abcae0

void __cdecl
std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145abcb00

void __cdecl
std::
vector<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>,std::allocator<std::unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// clear @ 145abcb20

void __thiscall
std::list<D3D12_GENERIC_PROGRAM_DESC,std::allocator<D3D12_GENERIC_PROGRAM_DESC>_>::clear
          (list<D3D12_GENERIC_PROGRAM_DESC,std::allocator<D3D12_GENERIC_PROGRAM_DESC>_> *this)

{
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var1;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x38);
    p_Var1 = p_Var2;
  }
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Next = p_Var1;
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Mysize = 0;
  return;
}

// clear @ 145abcb90

void __thiscall
std::
list<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,std::allocator<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION>_>
::clear(list<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,std::allocator<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION>_>
        *this)

{
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var1;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x28);
    p_Var1 = p_Var2;
  }
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Next = p_Var1;
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Mysize = 0;
  return;
}

// clear @ 145abcc00

void __thiscall
std::
list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::clear(list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
        *this)

{
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0) {
    p_Var2 = p_Var1->_Next;
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(&p_Var1->_Myval);
    ::operator_delete(p_Var1,0x30);
    p_Var1 = p_Var2;
  }
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Next = p_Var1;
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Mysize = 0;
  return;
}

// clear @ 145abcc80

void __thiscall
std::
list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
::clear(list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
        *this)

{
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var1;
  _List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
  *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,void_*>
                    *)0x0) {
    p_Var2 = p_Var1->_Next;
    vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>::
    ~vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>
              (&p_Var1->_Myval);
    ::operator_delete(p_Var1,0x28);
    p_Var1 = p_Var2;
  }
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Next = p_Var1;
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Mysize = 0;
  return;
}

// push_back @ 145abcd00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::push_back(list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  ulong64 *puVar1;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var2;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var3;
  undefined8 uVar4;
  ulong64 uVar5;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var6;
  
  p_Var2 = (this->_Mypair)._Myval2._Myhead;
  if ((this->_Mypair)._Myval2._Mysize != 0x555555555555555) {
    p_Var6 = ::operator_new(0x30);
    (p_Var6->_Myval)._Mypair._Myval2._Bx._Ptr = (wchar_t *)0x0;
    *(undefined8 *)((longlong)&(p_Var6->_Myval)._Mypair._Myval2._Bx + 8) = 0;
    (p_Var6->_Myval)._Mypair._Myval2._Mysize = 0;
    (p_Var6->_Myval)._Mypair._Myval2._Myres = 0;
    uVar4 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
    (p_Var6->_Myval)._Mypair._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
    *(undefined8 *)((longlong)&(p_Var6->_Myval)._Mypair._Myval2._Bx + 8) = uVar4;
    uVar5 = (param_1->_Mypair)._Myval2._Myres;
    (p_Var6->_Myval)._Mypair._Myval2._Mysize = (param_1->_Mypair)._Myval2._Mysize;
    (p_Var6->_Myval)._Mypair._Myval2._Myres = uVar5;
    (param_1->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 7;
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var3 = p_Var2->_Prev;
    p_Var6->_Next = p_Var2;
    p_Var6->_Prev = p_Var3;
    p_Var2->_Prev = p_Var6;
    p_Var3->_Next = p_Var6;
    return;
  }
  _Xlength_error("list too long");
  return;
}

// IMPLEMENT_MODULE_D3D12RHI @ 145abcda0

void __cdecl IMPLEMENT_MODULE_D3D12RHI(void)

{
  return;
}

// filt$0 @ 15025f8a0

undefined1 `SafeCreateDXGIFactory'::__l1::filt_0(undefined8 *param_1,longlong param_2)

{
  if ((*(int *)*param_1 == -0x3f92ff82) || (*(int *)*param_1 == -0x3f92ff81)) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return *(undefined1 *)(param_2 + 0x20);
}

// filt$0 @ 15025f8e0

undefined1 `SafeTestD3D12CreateDevice'::__l1::filt_0(undefined8 *param_1,longlong param_2)

{
  if ((*(int *)*param_1 == -0x3f92ff82) || (*(int *)*param_1 == -0x3f92ff81)) {
    *(undefined1 *)(param_2 + 0x30) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return *(undefined1 *)(param_2 + 0x30);
}

// DXGIBackBufferLock'' @ 1503c8b90

void __cdecl `dynamic_atexit_destructor_for_'FD3D12Viewport::DXGIBackBufferLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FD3D12Viewport::DXGIBackBufferLock);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoAttachPIX'' @ 1503c8bb0

void __cdecl _dynamic_atexit_destructor_for__CVarAutoAttachPIX__(void)

{
  CVarAutoAttachPIX._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutoAttachPIX);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12AllowDiscardResources'' @ 1503c8bd0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__(void)

{
  CVarD3D12AllowDiscardResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12AllowDiscardResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12BatchResourceBarriers'' @ 1503c8bf0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__(void)

{
  CVarD3D12BatchResourceBarriers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12BatchResourceBarriers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12NumViewportBuffers'' @ 1503c8c10

void __cdecl D3D12RHI::_dynamic_atexit_destructor_for__CVarD3D12NumViewportBuffers__(void)

{
  CVarD3D12NumViewportBuffers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12NumViewportBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3DUseAllowTearing'' @ 1503c8c30

void __cdecl _dynamic_atexit_destructor_for__CVarD3DUseAllowTearing__(void)

{
  CVarD3DUseAllowTearing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3DUseAllowTearing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDevDisableD3DRuntimeBackgroundThreads'' @ 1503c8c50

void __cdecl _dynamic_atexit_destructor_for__CVarDevDisableD3DRuntimeBackgroundThreads__(void)

{
  CVarDevDisableD3DRuntimeBackgroundThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDevDisableD3DRuntimeBackgroundThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDiscardOfDepthResources'' @ 1503c8c70

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__(void)

{
  CVarDisableDiscardOfDepthResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDiscardOfDepthResources)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDriverOptimizedPipelineStateDiskCache'' @ 1503c8c90

void __cdecl _dynamic_atexit_destructor_for__CVarDriverOptimizedPipelineStateDiskCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDriverOptimizedPipelineStateDiskCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarExperimentalShaderModels'' @ 1503c8cb0

void __cdecl _dynamic_atexit_destructor_for__CVarExperimentalShaderModels__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarExperimentalShaderModels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogViewportEvents'' @ 1503c8cd0

void __cdecl
D3D12RHI::RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarLogViewportEvents__(void)

{
  CVarLogViewportEvents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogViewportEvents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinBuildVersionForRayTracing'' @ 1503c8cf0

void __cdecl _dynamic_atexit_destructor_for__CVarMinBuildVersionForRayTracing__(void)

{
  CVarMinBuildVersionForRayTracing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinBuildVersionForRayTracing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinDriverVersionForRayTracingAMD'' @ 1503c8d10

void __cdecl _dynamic_atexit_destructor_for__CVarMinDriverVersionForRayTracingAMD__(void)

{
  CVarMinDriverVersionForRayTracingAMD._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinDriverVersionForRayTracingAMD);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinDriverVersionForRayTracingNVIDIA'' @ 1503c8d30

void __cdecl _dynamic_atexit_destructor_for__CVarMinDriverVersionForRayTracingNVIDIA__(void)

{
  CVarMinDriverVersionForRayTracingNVIDIA._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinDriverVersionForRayTracingNVIDIA);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPipelineStateDiskCache'' @ 1503c8d50

void __cdecl _dynamic_atexit_destructor_for__CVarPipelineStateDiskCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPipelineStateDiskCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderBundleSkipDispatch'' @ 1503c8d70

void __cdecl _dynamic_atexit_destructor_for__CVarShaderBundleSkipDispatch__(void)

{
  CVarShaderBundleSkipDispatch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderBundleSkipDispatch);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503c8d90

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 1503c8dc0

void __cdecl
`FD3D12WorkGraphPipelineState::FD3D12WorkGraphPipelineState'::__l17::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GD3DCallFailedCS'' @ 1503c8de0

void __cdecl _dynamic_atexit_destructor_for__GD3DCallFailedCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GD3DCallFailedCS);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexDeclarationCache'' @ 1503c8e00

void __cdecl _dynamic_atexit_destructor_for__GVertexDeclarationCache__(void)

{
  GVertexDeclarationCache.Cache._72_4_ = 0;
  if (GVertexDeclarationCache.Cache._64_8_ != 0) {
    FMemory::Free((void *)GVertexDeclarationCache.Cache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GVertexDeclarationCache.Cache);
                    /* WARNING: Could not recover jumptable at 0x0001503c8e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GVertexDeclarationCache);
  return;
}

// `dynamic_atexit_destructor_for_'WindowsPixDllRelativePath'' @ 1503c8e50

void __cdecl
`FD3D12DynamicRHIModule::StartupModule'::__l2::
_dynamic_atexit_destructor_for__WindowsPixDllRelativePath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WindowsPixDllRelativePath.Data.AllocatorInstance.Data;
  if (WindowsPixDllRelativePath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WindowsPixDllRelativePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

