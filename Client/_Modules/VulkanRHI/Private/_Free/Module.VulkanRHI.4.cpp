// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 431

// MemoryPool'' @ 141054c10

void __cdecl `dynamic_initializer_for_'FVulkanSyncPoint::MemoryPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanSyncPoint::MemoryPool__);
  return;
}

// VulkanShaderModulesMapCS'' @ 141054c30

void __cdecl `dynamic_initializer_for_'FVulkanShader::VulkanShaderModulesMapCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS,4000);
  atexit(`dynamic_atexit_destructor_for_'FVulkanShader::VulkanShaderModulesMapCS__);
  return;
}

// `dynamic_initializer_for_'CVarAllowVulkanPSOPrecache'' @ 141054c60

void __cdecl _dynamic_initializer_for__CVarAllowVulkanPSOPrecache__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowVulkanPSOPrecache,L"r.Vulkan.AllowPSOPrecaching",local_res8,
             L"true: if r.PSOPrecaching=1 Vulkan RHI will use precaching. (default)\nfalse: Vulkan RHI will disable precaching (even if r.PSOPrecaching=1)."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowVulkanPSOPrecache__);
  return;
}

// `dynamic_initializer_for_'CVarCpuWaitForFence'' @ 141054cb0

void __cdecl _dynamic_initializer_for__CVarCpuWaitForFence__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCpuWaitForFence,L"r.Vulkan.CpuWaitForFence",&GShouldCpuWaitForFence,
             L"Whether to have the Cpu wait for the fence in AcquireImageIndex",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCpuWaitForFence__);
  return;
}

// `dynamic_initializer_for_'CVarEnableVulkanPSOFileCacheWhenPrecachingActive'' @ 141054d00

void __cdecl _dynamic_initializer_for__CVarEnableVulkanPSOFileCacheWhenPrecachingActive__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableVulkanPSOFileCacheWhenPrecachingActive,
             L"r.Vulkan.EnablePSOFileCacheWhenPrecachingActive",local_res8,
             L"false: If precaching is available (r.PSOPrecaching=1, r.Vulkan.UseChunkedPSOCache=1) then disable the PSO filecache. (default)\ntrue: Allow both PSO file cache and precaching."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEnableVulkanPSOFileCacheWhenPrecachingActive__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanAllowUniformUpload'' @ 141054d50

void __cdecl _dynamic_initializer_for__CVarVulkanAllowUniformUpload__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanAllowUniformUpload,L"r.Vulkan.AllowUniformUpload",&GVulkanAllowUniformUpload
             ,
             L"Allow Uniform Buffer uploads outside of renderpasses\n 0: Disabled, buffers are always reallocated\n 1: Enabled, buffers are uploaded outside renderpasses"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanAllowUniformUpload__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanCPURHIFramePacer'' @ 141054da0

void __cdecl _dynamic_initializer_for__CVarVulkanCPURHIFramePacer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanCPURHIFramePacer,L"r.Vulkan.CPURHIThreadFramePacer",&GVulkanCPURHIFramePacer
             ,L"Whether to enable the simple RHI thread CPU Framepacer for Vulkan",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanCPURHIFramePacer__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanCPURenderThreadFramePacer'' @ 141054df0

void __cdecl _dynamic_initializer_for__CVarVulkanCPURenderThreadFramePacer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanCPURenderThreadFramePacer,L"r.Vulkan.CPURenderthreadFramePacer",
             &GVulkanCPURenderThreadFramePacer,
             L"Whether to enable the simple Render thread CPU Framepacer for Vulkan",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanCPURenderThreadFramePacer__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDebugVsync'' @ 141054e40

void __cdecl _dynamic_initializer_for__CVarVulkanDebugVsync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDebugVsync,L"r.Vulkan.DebugVsync",&GPrintVulkanVsyncDebug,
             L"Whether to print vulkan vsync data",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDebugVsync__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDepthStencilForceStorageBit'' @ 141054e90

void __cdecl _dynamic_initializer_for__CVarVulkanDepthStencilForceStorageBit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDepthStencilForceStorageBit,L"r.Vulkan.DepthStencilForceStorageBit",
             &GVulkanDepthStencilForceStorageBit,
             L"Whether to force Image Usage Storage on Depth (can disable framebuffer compression).\n 0: Not enabled\n 1: Enables override for IMAGE_USAGE_STORAGE"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDepthStencilForceStorageBit__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanForcePacingWithoutVSync'' @ 141054ee0

void __cdecl _dynamic_initializer_for__CVarVulkanForcePacingWithoutVSync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanForcePacingWithoutVSync,L"r.Vulkan.ForcePacingWithoutVSync",
             &GVulkanForcePacingWithoutVSync,
             L"Whether to CPU pacers remain enabled even if VSync is off",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanForcePacingWithoutVSync__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanKeepSwapChain'' @ 141054f30

void __cdecl _dynamic_initializer_for__CVarVulkanKeepSwapChain__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanKeepSwapChain,L"r.Vulkan.KeepSwapChain",&GVulkanKeepSwapChain,
             L"Whether to keep old swap chain to pass through when creating the next one",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanKeepSwapChain__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanPreTransform'' @ 141054f80

void __cdecl _dynamic_initializer_for__CVarVulkanPreTransform__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanPreTransform,L"r.Vulkan.PreTransform",local_res8,
             L"0: Surface transformed in Vulkan Presentation Engine1: Surface transformed in App to save bandwidth (Default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanPreTransform__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSparseImageAllocSizeMB'' @ 141054fd0

void __cdecl _dynamic_initializer_for__CVarVulkanSparseImageAllocSizeMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanSparseImageAllocSizeMB,L"r.Vulkan.SparseImageAllocSizeMB",local_res8,
             L"Size of the backing memory blocks for sparse images in megabytes (default 16MB).",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSparseImageAllocSizeMB__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSparseImageMergeBindings'' @ 141055020

void __cdecl _dynamic_initializer_for__CVarVulkanSparseImageMergeBindings__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanSparseImageMergeBindings,L"r.Vulkan.SparseImageMergeBindings",local_res8,
             L"Merge consecutive bindings of sparse images.",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSparseImageMergeBindings__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSwapChainIgnoreExtraImages'' @ 141055070

void __cdecl _dynamic_initializer_for__CVarVulkanSwapChainIgnoreExtraImages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanSwapChainIgnoreExtraImages,L"r.Vulkan.SwapChainIgnoreExtraImages",
             &GVulkanSwapChainIgnoreExtraImages,
             L"Whether to ignore extra images created in swapchain and stick with a requested number of images"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSwapChainIgnoreExtraImages__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseInterruptThread'' @ 1410550c0

void __cdecl _dynamic_initializer_for__CVarVulkanUseInterruptThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanUseInterruptThread,L"r.Vulkan.Submission.UseInterruptThread",local_res8,
             L"  0: Process completed GPU work directly on the RHI thread.\n  1: Create a dedicated thread to process completed GPU work.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseInterruptThread__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseSubmissionThread'' @ 141055110

void __cdecl _dynamic_initializer_for__CVarVulkanUseSubmissionThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanUseSubmissionThread,L"r.Vulkan.Submission.UseSubmissionThread",local_res8,
             L"  0: Submit GPU work directly from the RHI thread.\n  1: Create a dedicated thread to submit GPU work.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseSubmissionThread__);
  return;
}

// `dynamic_initializer_for_'GCVarAllowConcurrentImage'' @ 141055160

void __cdecl _dynamic_initializer_for__GCVarAllowConcurrentImage__(void)

{
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarAllowConcurrentImage,L"r.Vulkan.AllowConcurrentImage",
             &GVulkanAllowConcurrentImage,
             L"When async compute is supported: \n 0 to use queue family ownership transfers with images\n 1 to use sharing mode concurrent with images"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarAllowConcurrentImage__);
  return;
}

// `dynamic_initializer_for_'GCVarEnableTransientResourceAllocator'' @ 1410551b0

void __cdecl _dynamic_initializer_for__GCVarEnableTransientResourceAllocator__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarEnableTransientResourceAllocator,L"r.Vulkan.EnableTransientResourceAllocator",
             &GVulkanEnableTransientResourceAllocator,
             L"Whether to enable the TransientResourceAllocator to reduce memory usage\n0 to disabled (default)\n1 to enable\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarEnableTransientResourceAllocator__);
  return;
}

// `dynamic_initializer_for_'GCVarInputAttachmentShaderRead'' @ 141055200

void __cdecl _dynamic_initializer_for__GCVarInputAttachmentShaderRead__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarInputAttachmentShaderRead,L"r.Vulkan.InputAttachmentShaderRead",
             &GVulkanInputAttachmentShaderRead,
             L"Whether to use VK_ACCESS_SHADER_READ_BIT an input attachments to workaround rendering issues\n0 use: VK_ACCESS_INPUT_ATTACHMENT_READ_BIT (default)\n1 use: VK_ACCESS_INPUT_ATTACHMENT_READ_BIT | VK_ACCESS_SHADER_READ_BIT\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarInputAttachmentShaderRead__);
  return;
}

// `dynamic_initializer_for_'GCVarVulkanAMDCompatibilityMode'' @ 141055250

void __cdecl _dynamic_initializer_for__GCVarVulkanAMDCompatibilityMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarVulkanAMDCompatibilityMode,L"r.Vulkan.AMDCompatibilityMode",
             &GVulkanAMDCompatibilityMode,
             L"Used to tweak enabled Vulkan feature set in order to ensure wider compatibility with all AMD GPUs on all platforms. (default:1)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarVulkanAMDCompatibilityMode__);
  return;
}

// `dynamic_initializer_for_'GInternalViewRWLock'' @ 1410552a0

void __cdecl _dynamic_initializer_for__GInternalViewRWLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__GInternalViewRWLock__);
  return;
}

// `dynamic_initializer_for_'GPixelFormatNotSupportedWarning'' @ 1410552c0

void __cdecl _dynamic_initializer_for__GPixelFormatNotSupportedWarning__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPixelFormatNotSupportedWarning__);
  return;
}

// `dynamic_initializer_for_'GRHIThreadCvar'' @ 1410552e0

void __cdecl _dynamic_initializer_for__GRHIThreadCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GRHIThreadCvar,L"r.Vulkan.RHIThread",local_res8,
             L"0 to only use Render Thread\n1 to use ONE RHI Thread\n2 to use multiple RHI Thread\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GRHIThreadCvar__);
  return;
}

// `dynamic_initializer_for_'GSamplerHashLock'' @ 141055330

void __cdecl _dynamic_initializer_for__GSamplerHashLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GSamplerHashLock,4000);
  atexit(_dynamic_atexit_destructor_for__GSamplerHashLock__);
  return;
}

// `dynamic_initializer_for_'GSecondaryPayloadsCS'' @ 141055360

void __cdecl _dynamic_initializer_for__GSecondaryPayloadsCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GSecondaryPayloadsCS,4000);
  atexit(_dynamic_atexit_destructor_for__GSecondaryPayloadsCS__);
  return;
}

// `dynamic_initializer_for_'GTextureMapLock'' @ 141055390

void __cdecl _dynamic_initializer_for__GTextureMapLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GTextureMapLock,4000);
  atexit(_dynamic_atexit_destructor_for__GTextureMapLock__);
  return;
}

// `dynamic_initializer_for_'GVertexDeclarationCache'' @ 1410553c0

void __cdecl _dynamic_initializer_for__GVertexDeclarationCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GVertexDeclarationCache__);
  return;
}

// `dynamic_initializer_for_'GVulkanCommandsHelper'' @ 1410553e0

void __cdecl _dynamic_initializer_for__GVulkanCommandsHelper__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&GVulkanCommandsHelper);
  GVulkanCommandsHelper = (FVulkanCommandsHelper)&___7FVulkanCommandsHelper__6B_;
  atexit(_dynamic_atexit_destructor_for__GVulkanCommandsHelper__);
  return;
}

// `dynamic_initializer_for_'GVulkanCompressSPIRVCVar'' @ 141055420

void __cdecl _dynamic_initializer_for__GVulkanCompressSPIRVCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVulkanCompressSPIRVCVar,L"r.Vulkan.CompressSPIRV",&GVulkanCompressSPIRV,
             L"0 SPIRV source is stored in RAM as-is. (default)\n1 SPIRV source is compressed on load and decompressed as when needed, this saves RAM but can introduce hitching when creating shaders."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GVulkanCompressSPIRVCVar__);
  return;
}

// `dynamic_initializer_for_'LogVulkan'' @ 141055470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVulkan__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVulkan,L"LogVulkan",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogVulkan__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantVulkanRHI'' @ 1410554b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantVulkanRHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "VulkanRHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"VulkanRHI",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FVulkanDynamicRHIModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAcquireBackBuffer'' @ 141055500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAcquireBackBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAcquireBackBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAcquireBackBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAcquireBackBuffer,*pFVar1,
               L"Acquire Backbuffer","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanApplyPackedUniformBuffers'' @ 141055590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanApplyPackedUniformBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanApplyPackedUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanApplyPackedUniformBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanApplyPackedUniformBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanApplyPackedUniformBuffers,*pFVar1,
               L"Apply Packed Uniform Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",
               L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanCustomPresentTime'' @ 141055620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanCustomPresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanCustomPresentTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanCustomPresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanCustomPresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanCustomPresentTime,*pFVar1,
               L"CustomPresent time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDeletionQueue'' @ 1410556b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDeletionQueue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDeletionQueue == (FThreadSafeStaticStat<FStat_STAT_VulkanDeletionQueue>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDeletionQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDeletionQueue,*pFVar1,
               L"Deletion Queue","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDispatchCallPrepareTime'' @ 141055740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDispatchCallPrepareTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDispatchCallPrepareTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDispatchCallPrepareTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDispatchCallPrepareTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDispatchCallPrepareTime,*pFVar1,
               L"Dispatch call prep time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDispatchCallTime'' @ 1410557d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDispatchCallTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDispatchCallTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDispatchCallTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDispatchCallTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDispatchCallTime,*pFVar1,
               L"Dispatch call time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDrawCallPrepareTime'' @ 141055860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDrawCallPrepareTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDrawCallPrepareTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDrawCallPrepareTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDrawCallPrepareTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDrawCallPrepareTime,*pFVar1,
               L"Draw call prep time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDrawCallTime'' @ 1410558f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDrawCallTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDrawCallTime == (FThreadSafeStaticStat<FStat_STAT_VulkanDrawCallTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDrawCallTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDrawCallTime,*pFVar1,
               L"Draw call time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanGetDescriptorSet'' @ 141055980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanGetDescriptorSet__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanGetDescriptorSet ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanGetDescriptorSet>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanGetDescriptorSet");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanGetDescriptorSet,*pFVar1,
               L"Get DescriptorSet","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanGetOrCreatePipeline'' @ 141055a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanGetOrCreatePipeline__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanGetOrCreatePipeline ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanGetOrCreatePipeline>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanGetOrCreatePipeline");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanGetOrCreatePipeline,*pFVar1,
               L"Get Or Create Pipeline","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanLibPSOCompileCount'' @ 141055aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanLibPSOCompileCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanLibPSOCompileCount ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanLibPSOCompileCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanLibPSOCompileCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanLibPSOCompileCount,*pFVar1,
               L"Library PSO Compile Count","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced"
               ,L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumBufferViews'' @ 141055b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumBufferViews__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumBufferViews ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumBufferViews");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumBufferViews,*pFVar1,
               L"Num Buffer Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumCmdBuffers'' @ 141055bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumCmdBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumCmdBuffers == (FThreadSafeStaticStat<FStat_STAT_VulkanNumCmdBuffers>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumCmdBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumCmdBuffers,*pFVar1,
               L"Num Cmd Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumComputePSOs'' @ 141055c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumComputePSOs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumComputePSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumComputePSOs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumComputePSOs,*pFVar1,
               L"Num Compute  PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumDescPools'' @ 141055ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumDescPools__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumDescPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescPools>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumDescPools");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescPools,*pFVar1,
               L"Num Created DescSet Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumDescSetsTotal'' @ 141055d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumDescSetsTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumDescSetsTotal ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumDescSetsTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumDescSetsTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumDescSetsTotal,*pFVar1,
               L"Max Potential Desc Sets","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumFragOutputStateLibs'' @ 141055e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumFragOutputStateLibs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumFragOutputStateLibs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumFragOutputStateLibs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumFragOutputStateLibs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumFragOutputStateLibs,*pFVar1,
               L"Num FragmentOutputState Libraries","STATGROUP_VulkanGraphicPipelineLibs",
               "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumFrameBuffers'' @ 141055e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumFrameBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumFrameBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumFrameBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumFrameBuffers,*pFVar1,
               L"Num Frame Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumGraphicsPSOs'' @ 141055f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumGraphicsPSOs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumGraphicsPSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumGraphicsPSOs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumGraphicsPSOs,*pFVar1,
               L"Num Graphics PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumImageViews'' @ 141055fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumImageViews__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumImageViews == (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumImageViews");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumImageViews,*pFVar1,
               L"Num Image Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumMSLibs'' @ 141056040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumMSLibs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumMSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumMSLibs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumMSLibs,*pFVar1,
               L"Num MS Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
               L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPSLibs'' @ 1410560d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPSLibs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPSLibs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSLibs,*pFVar1,
               L"Num PS Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
               L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPSOLRU'' @ 141056160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPSOLRU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPSOLRU == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPSOLRU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRU,*pFVar1,
               L"PSO LRU Elements","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPSOLRUSize'' @ 1410561f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPSOLRUSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPSOLRUSize == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPSOLRUSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRUSize,*pFVar1,
               L"PSO LRU Size","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPSOs'' @ 141056280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPSOs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPSOs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPSOs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOs,*pFVar1,L"Num PSOs",
               "STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPhysicalMemAllocations'' @ 141056310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPhysicalMemAllocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPhysicalMemAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPhysicalMemAllocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPhysicalMemAllocations,*pFVar1,
               L"Num Physical Mem Allocations","STATGROUP_VulkanRHI","STATCAT_Advanced",
               L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumPooledBarrierEvents'' @ 1410563a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumPooledBarrierEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumPooledBarrierEvents ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumPooledBarrierEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumPooledBarrierEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPooledBarrierEvents,*pFVar1,
               L"Num Pooled Barrier Events","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumQueries'' @ 141056430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumQueries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumQueries == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumQueries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueries,*pFVar1,L"Num Queries",
               "STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumQueryPools'' @ 1410564c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumQueryPools__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumQueryPools == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueryPools>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumQueryPools");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueryPools,*pFVar1,
               L"Num Query Pools","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumRenderPasses'' @ 141056550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumRenderPasses__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumRenderPasses ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumRenderPasses");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumRenderPasses,*pFVar1,
               L"Num Render Passes","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumShaderModule'' @ 1410565e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumShaderModule__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumShaderModule ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumShaderModule");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumShaderModule,*pFVar1,
               L"Num Shader Modules","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
               L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumVSLibs'' @ 141056670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumVSLibs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumVSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumVSLibs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumVSLibs,*pFVar1,
               L"Num VS Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
               L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanNumVertexInputLibs'' @ 141056700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanNumVertexInputLibs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanNumVertexInputLibs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumVertexInputLibs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanNumVertexInputLibs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumVertexInputLibs,*pFVar1,
               L"Num VertexInput Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced"
               ,L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPSOCreationTime'' @ 141056790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPSOCreationTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPSOCreationTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanPSOCreationTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPSOCreationTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCreationTime,*pFVar1,
               L"PSO Creation time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPSOHeaderInitTime'' @ 141056820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPSOHeaderInitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPSOHeaderInitTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanPSOHeaderInitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPSOHeaderInitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOHeaderInitTime,*pFVar1,
               L"PSO HeaderInit time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPSOKeyMemory'' @ 1410568b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPSOKeyMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPSOKeyMemory == (FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPSOKeyMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOKeyMemory,*pFVar1,
               L"VulkanPSOKey Memory","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPSOLookupTime'' @ 141056940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPSOLookupTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPSOLookupTime == (FThreadSafeStaticStat<FStat_STAT_VulkanPSOLookupTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPSOLookupTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOLookupTime,*pFVar1,
               L"PSO Lookup time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPSOVulkanCreationTime'' @ 1410569d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPSOVulkanCreationTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPSOVulkanCreationTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanPSOVulkanCreationTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPSOVulkanCreationTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOVulkanCreationTime,*pFVar1,
               L"PSO Vulkan Creation time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanPipelineBind'' @ 141056a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanPipelineBind__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanPipelineBind == (FThreadSafeStaticStat<FStat_STAT_VulkanPipelineBind>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanPipelineBind");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPipelineBind,*pFVar1,
               L"Pipeline Bind","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanQueuePresent'' @ 141056af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanQueuePresent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanQueuePresent == (FThreadSafeStaticStat<FStat_STAT_VulkanQueuePresent>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanQueuePresent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanQueuePresent,*pFVar1,
               L"Queue Present","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanQueueSubmit'' @ 141056b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanQueueSubmit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanQueueSubmit == (FThreadSafeStaticStat<FStat_STAT_VulkanQueueSubmit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanQueueSubmit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanQueueSubmit,*pFVar1,L"Queue Submit",
               "STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRegPSOCompileCount'' @ 141056c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRegPSOCompileCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRegPSOCompileCount ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRegPSOCompileCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRegPSOCompileCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRegPSOCompileCount,*pFVar1,
               L"Regular PSO Compile Count","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced"
               ,L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanSRVUpdateTime'' @ 141056ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanSRVUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanSRVUpdateTime == (FThreadSafeStaticStat<FStat_STAT_VulkanSRVUpdateTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanSRVUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanSRVUpdateTime,*pFVar1,
               L"SRV Update Time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanStagingBuffer'' @ 141056d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanStagingBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanStagingBuffer == (FThreadSafeStaticStat<FStat_STAT_VulkanStagingBuffer>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanStagingBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanStagingBuffer,*pFVar1,
               L"Staging Buffer Mgmt","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanUAVUpdateTime'' @ 141056dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanUAVUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanUAVUpdateTime == (FThreadSafeStaticStat<FStat_STAT_VulkanUAVUpdateTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanUAVUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUAVUpdateTime,*pFVar1,
               L"UAV Update Time","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanUniformBufferCreateTime'' @ 141056e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanUniformBufferCreateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanUniformBufferCreateTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUniformBufferCreateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanUniformBufferCreateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUniformBufferCreateTime,*pFVar1,
               L"Uniform Buffer Creation Time","STATGROUP_VulkanRHI","STATCAT_Advanced",
               L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanUpdateUniformBuffers'' @ 141056ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanUpdateUniformBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanUpdateUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanUpdateUniformBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffers,*pFVar1,
               L"UpdateUniformBuffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanUpdateUniformBuffersRename'' @ 141056f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanUpdateUniformBuffersRename__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanUpdateUniformBuffersRename ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanUpdateUniformBuffersRename");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffersRename,*pFVar1,
               L"UpdateUniformBuffersRename","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanVkCreateDescriptorPool'' @ 141057000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanVkCreateDescriptorPool__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanVkCreateDescriptorPool ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanVkCreateDescriptorPool>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanVkCreateDescriptorPool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanVkCreateDescriptorPool,*pFVar1,
               L"VkCreateDescriptorPool","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanWaitFence'' @ 141057090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanWaitFence__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanWaitFence == (FThreadSafeStaticStat<FStat_STAT_VulkanWaitFence>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanWaitFence");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanWaitFence,*pFVar1,L"Wait For Fence",
               "STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanWaitSwapchain'' @ 141057120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanWaitSwapchain__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanWaitSwapchain == (FThreadSafeStaticStat<FStat_STAT_VulkanWaitSwapchain>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanWaitSwapchain");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanWaitSwapchain,*pFVar1,
               L"Wait For Swapchain","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 1410571b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 1410571f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM5::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 141057230

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM5_ANDROID::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 141057270

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 1410572b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM6::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'mergedCapabilities'' @ 1410572f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM6_RT::_dynamic_initializer_for__mergedCapabilities__(void)

{
  mergedCapabilities[0].feature = featureDesc;
  mergedCapabilities[0].property = propertyDesc;
  mergedCapabilities[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  mergedCapabilities[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  mergedCapabilities[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  mergedCapabilities[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057330

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057370

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410573b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM5::blocks::SM5::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410573f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::SM5::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057430

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::SM5::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057470

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM6::blocks::SM6::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410574b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM6_RT::blocks::SM6::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410574f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM5::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057570

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410575b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 1410575f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl detail::VP_UE_VULKAN_SM6::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `dynamic_initializer_for_'variants'' @ 141057630

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::_dynamic_initializer_for__variants__(void)

{
  variants[0].feature = featureDesc;
  variants[0].property = propertyDesc;
  variants[0].chainers.pfnFeature = chainerDesc.pfnFeature;
  variants[0].chainers.pfnProperty = chainerDesc.pfnProperty;
  variants[0].chainers.pfnQueueFamily = chainerDesc.pfnQueueFamily;
  variants[0].chainers.pfnFormat = chainerDesc.pfnFormat;
  return;
}

// `scalar_deleting_destructor' @ 145b85140

void * __thiscall
FVulkanCommandsHelper::_scalar_deleting_destructor_(FVulkanCommandsHelper *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b85590

void * __thiscall
FVulkanDynamicRHIModule::_scalar_deleting_destructor_(FVulkanDynamicRHIModule *this,uint param_1)

{
  *this = (FVulkanDynamicRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 145b855d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_100>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_68;
  undefined8 local_58;
  VkBaseOutStructure local_50;
  undefined8 uStack_40;
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.pNext = &local_50;
  local_38.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  local_68.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_68.pNext = &local_38;
  local_58 = 0;
  param_1->pNext = &local_68;
  local_50.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_50.pNext = (VkBaseOutStructure *)0x0;
  uStack_40 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_101>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b85648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85660

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_102>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b85670

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_103>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85770

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_112>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    *(undefined4 *)&param_1[7].pNext = 1;
  }
  else {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      param_1[2].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if ((VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) ||
       (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR)) {
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b857c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_113>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
    ;
  }
  else {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
      }
      else {
        VulkanProfilePrint(
                          "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::accelerationStructure == VK_TRUE"
                          );
      }
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return false;
      }
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::descriptorBindingAccelerationStructureUpdateAfterBind == VK_TRUE"
                        );
      return false;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceRayQueryFeaturesKHR::rayQuery == VK_TRUE";
    }
  }
  VulkanProfilePrint(pcVar2);
  return false;
}

// <lambda_invoker_cdecl> @ 145b85870

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_114>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    *(undefined4 *)&param_1[0x17].pNext = 7;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b85890

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_115>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) &&
     (*(uint *)&param_1[0x17].pNext < 7)) {
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.maxBoundDescriptorSets >= 7"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b858d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_116>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_68;
  undefined8 local_58;
  VkBaseOutStructure local_50;
  undefined8 uStack_40;
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.pNext = &local_50;
  local_38.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  local_68.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_68.pNext = &local_38;
  local_58 = 0;
  param_1->pNext = &local_68;
  local_50.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_50.pNext = (VkBaseOutStructure *)0x0;
  uStack_40 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85940

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_117>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b85948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85960

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_118>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b85970

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::RayTracing::<lambda_119>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85980

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_120>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3b9e7769) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
      if ((int)VVar1 < 0x3b9ddb29) {
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
          *(undefined4 *)&param_1[1].field_0x4 = 1;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
          *(undefined4 *)&param_1[7].pNext = 1;
          param_1[0xb].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
          *(undefined4 *)&param_1[5].field_0x4 = 1;
          param_1[5].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          *(undefined4 *)&param_1[5].pNext = 1;
          *(undefined4 *)((longlong)&param_1[5].pNext + 4) = 1;
          return;
        }
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
          return;
        }
      }
      else if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) &&
               (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES)) &&
              (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT)) {
        return;
      }
    }
  }
  else if ((int)VVar1 < 0x3b9fcb41) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      *(undefined4 *)&param_1[1].field_0x4 = 1;
      *(undefined4 *)&param_1[1].pNext = 1;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) &&
        (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES)) &&
       (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT)) {
      return;
    }
  }
  else if ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) &&
          (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES)) {
    return;
  }
  param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  return;
}

// <lambda_invoker_cdecl> @ 145b85a50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_121>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  bool bVar1;
  <lambda_121> local_res10 [24];
  
  bVar1 = operator()(local_res10,param_1);
  return bVar1;
}

// <lambda_invoker_cdecl> @ 145b85a70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_122>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b85a80

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_123>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b85a90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_124>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_1a8 [2];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined4 *local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined4 *local_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined4 local_130 [2];
  undefined4 *local_128;
  undefined8 local_120;
  VkBaseOutStructure local_118;
  undefined8 local_108;
  VkBaseOutStructure local_100;
  undefined8 local_f0;
  VkBaseOutStructure local_e8;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_d0[0] = 0x3b9eb5e8;
  local_1a0 = local_d0;
  local_c8 = 0;
  local_198 = 0;
  local_a8 = local_1a8;
  local_60 = local_b0;
  local_188 = local_68;
  local_180 = 0;
  local_88 = local_190;
  local_70 = 0;
  local_170 = local_90;
  local_168 = 0;
  local_158 = local_178;
  local_150 = 0;
  local_140 = local_160;
  local_138 = 0;
  local_128 = local_148;
  local_120 = 0;
  local_118.pNext = (VkBaseOutStructure *)local_130;
  local_108 = 0;
  local_100.pNext = &local_118;
  local_f0 = 0;
  local_e8.pNext = &local_100;
  local_d8 = 0;
  param_1->pNext = &local_e8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_1a8[0] = 0x3b9ddb28;
  local_b0[0] = 0x3b9f9c62;
  local_a0 = 0;
  uStack_98 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_190[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_90[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_178[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_160[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_148[0] = 0x3b9e7768;
  local_80 = 0;
  uStack_78 = 0;
  local_130[0] = 0x3b9d8920;
  local_118.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
  local_100.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
  local_e8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_125>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85c90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_126>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b85ca0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::<lambda_127>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85ce0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_128>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b85cf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_129>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b85d00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_130>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b85d10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_131>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b85d20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_132>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_1a8 [2];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined4 *local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined4 *local_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined4 *local_140;
  undefined8 local_138;
  undefined4 local_130 [2];
  undefined4 *local_128;
  undefined8 local_120;
  VkBaseOutStructure local_118;
  undefined8 local_108;
  VkBaseOutStructure local_100;
  undefined8 local_f0;
  VkBaseOutStructure local_e8;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_d0[0] = 0x3b9eb5e8;
  local_1a0 = local_d0;
  local_c8 = 0;
  local_198 = 0;
  local_a8 = local_1a8;
  local_60 = local_b0;
  local_188 = local_68;
  local_180 = 0;
  local_88 = local_190;
  local_70 = 0;
  local_170 = local_90;
  local_168 = 0;
  local_158 = local_178;
  local_150 = 0;
  local_140 = local_160;
  local_138 = 0;
  local_128 = local_148;
  local_120 = 0;
  local_118.pNext = (VkBaseOutStructure *)local_130;
  local_108 = 0;
  local_100.pNext = &local_118;
  local_f0 = 0;
  local_e8.pNext = &local_100;
  local_d8 = 0;
  param_1->pNext = &local_e8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_1a8[0] = 0x3b9ddb28;
  local_b0[0] = 0x3b9f9c62;
  local_a0 = 0;
  uStack_98 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_190[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_90[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_178[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_160[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_148[0] = 0x3b9e7768;
  local_80 = 0;
  uStack_78 = 0;
  local_130[0] = 0x3b9d8920;
  local_118.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
  local_100.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
  local_e8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_133>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b85f20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_134>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b85f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b85f30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6::blocks::baseline::<lambda_135>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b863e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_146>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3b9eb5e9) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) {
      if ((int)VVar1 < 0x3b9ddb29) {
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
          *(undefined4 *)&param_1[1].field_0x4 = 1;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
          *(undefined4 *)&param_1[7].pNext = 1;
          param_1[0xb].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          return;
        }
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR)
        goto LAB_145b864b0;
        if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
          *(undefined4 *)&param_1[5].field_0x4 = 1;
          param_1[5].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
          *(undefined4 *)&param_1[5].pNext = 1;
          *(undefined4 *)((longlong)&param_1[5].pNext + 4) = 1;
          return;
        }
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
          return;
        }
      }
      else if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) &&
               (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES)) &&
              ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT &&
               (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES))
              )) {
        return;
      }
    }
  }
  else if ((int)VVar1 < 0x3ba01579) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR) {
LAB_145b864b0:
      param_1[2].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if (((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES) &&
        (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES)) &&
       (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT)) {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
        return;
      }
      *(undefined4 *)&param_1[1].field_0x4 = 1;
      *(undefined4 *)&param_1[1].pNext = 1;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
  }
  else if ((((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) &&
            (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT)) &&
           (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES)) &&
          (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR)) {
    return;
  }
  param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  return;
}

// <lambda_invoker_cdecl> @ 145b864f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_147>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  bool bVar1;
  <lambda_147> local_res10 [24];
  
  bVar1 = operator()(local_res10,param_1);
  return bVar1;
}

// <lambda_invoker_cdecl> @ 145b86510

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_148>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b86520

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_149>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b86530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_150>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  <lambda_150> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_151>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b865e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_152>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b865e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b865f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::<lambda_153>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86630

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_154>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b86640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_155>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b86650

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_156>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b86660

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_157>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b86670

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_158>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  <lambda_158> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_159>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86720

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_160>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86730

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_161>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86a90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_172>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3ba01579) {
    if ((VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR) ||
       (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR)) {
      param_1[2].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) &&
       (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES)) {
      return;
    }
  }
  else if ((VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) &&
          (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR)) {
    return;
  }
  param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  return;
}

// <lambda_invoker_cdecl> @ 145b86ae0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_173>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if ((int)VVar1 < 0x3ba01579) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
      }
      else {
        VulkanProfilePrint(
                          "Unsupported feature condition: VkPhysicalDeviceRayTracingPipelineFeaturesKHR::rayTracingPipeline == VK_TRUE"
                          );
      }
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return false;
      }
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceRayTracingPipelineFeaturesKHR::rayTraversalPrimitiveCulling == VK_TRUE"
                        );
      return false;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
      }
      else {
        VulkanProfilePrint(
                          "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::accelerationStructure == VK_TRUE"
                          );
      }
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return false;
      }
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::descriptorBindingAccelerationStructureUpdateAfterBind == VK_TRUE"
                        );
      return false;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceHostQueryResetFeaturesEXT::hostQueryReset == VK_TRUE"
      ;
    }
  }
  else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceRayQueryFeaturesKHR::rayQuery == VK_TRUE";
  }
  else {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR) {
      return true;
    }
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::rayTracingPositionFetch == VK_TRUE"
    ;
  }
  VulkanProfilePrint(pcVar2);
  return false;
}

// <lambda_invoker_cdecl> @ 145b86c10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_174>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) {
    *(undefined4 *)&param_1[0x17].pNext = 9;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b86c30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_175>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) &&
     (*(uint *)&param_1[0x17].pNext < 9)) {
    VulkanProfilePrint(
                      "Unsupported properties condition: VkPhysicalDeviceProperties2KHR::properties.limits.maxBoundDescriptorSets >= 9"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b86c70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_176>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  <lambda_176> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_177>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined1 auStack_d8 [32];
  VkBaseOutStructure local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8.pNext = (VkBaseOutStructure *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  param_1->pNext = &local_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86d20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_178>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b86d30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_179>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3;
  local_18 = 0;
  local_38.pNext = (VkBaseOutStructure *)0x0;
  param_1->pNext = &local_38;
  local_28 = 0;
  uStack_20 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86d70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
``vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::operator()'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(VkBaseOutStructure *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)((longlong)param_2 + 0x40))
                    (*(undefined8 *)param_2,(longlong)param_2 + 0x58,param_1);
  if (iVar2 == 0) {
    for (; param_1 != (VkBaseOutStructure *)0x0; param_1 = param_1->pNext) {
      cVar1 = (**(code **)(*(longlong *)((longlong)param_2 + 0x50) + 0x138))(param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_2 + 0xa8) = 0;
      }
    }
    return;
  }
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  return;
}

// <lambda_invoker_cdecl> @ 145b86df0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`vpGetPhysicalDeviceProfileVariantsSupport'::__l48::<lambda_1>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2)

{
  char cVar1;
  
  (**(code **)((longlong)param_2 + 0x20))(*(undefined8 *)param_2,param_1);
  *(undefined1 *)((longlong)param_2 + 0xa8) = 1;
  for (; param_1 != (VkBaseOutStructure *)0x0; param_1 = param_1->pNext) {
    cVar1 = (**(code **)(*(longlong *)((longlong)param_2 + 0x18) + 0x138))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_2 + 0xa8) = 0;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b86e60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_24>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b86e70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_25>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b86e80

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_26>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b86e90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_27>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b86ea0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_28>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86eb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_29>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b86ec0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`vpGetPhysicalDeviceProfileVariantsSupport'::__l48::<lambda_2>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2)

{
  char cVar1;
  
  (**(code **)((longlong)param_2 + 0x28))(*(undefined8 *)param_2,param_1);
  *(undefined1 *)((longlong)param_2 + 0xa8) = 1;
  for (; param_1 != (VkBaseOutStructure *)0x0; param_1 = param_1->pNext) {
    cVar1 = (**(code **)(*(longlong *)((longlong)param_2 + 0x18) + 0x158))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_2 + 0xa8) = 0;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b86f30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
``vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::operator()'::__l15::<lambda_2>::
<lambda_invoker_cdecl>(uint param_1,VkBaseOutStructure *param_2,void *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = param_1;
  (**(code **)((longlong)param_3 + 0x48))
            (*(undefined8 *)param_3,(longlong)param_3 + 0x78,local_res8,param_2);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      lVar4 = (ulonglong)uVar5 * 0x38 + (longlong)param_2;
      bVar2 = true;
      if (lVar4 == 0) {
        return;
      }
      do {
        cVar3 = (**(code **)(*(longlong *)(*(longlong *)((longlong)param_3 + 0x50) + 0x158) + 8 +
                            (ulonglong)*(uint *)((longlong)param_3 + 0x98) * 0x10))(lVar4);
        lVar4 = *(longlong *)(lVar4 + 8);
        bVar1 = false;
        if (cVar3 != '\0') {
          bVar1 = bVar2;
        }
        bVar2 = bVar1;
      } while (lVar4 != 0);
      if (bVar1) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  *(undefined1 *)((longlong)param_3 + 0xa8) = 0;
  return;
}

// <lambda_invoker_cdecl> @ 145b86ff0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_30>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b86ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87000

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::<lambda_31>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87010

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_32>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87020

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_33>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87030

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_34>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87040

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_35>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87050

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_36>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87060

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_37>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87070

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_38>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87080

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_ES3_1_ANDROID::blocks::baseline::<lambda_39>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87090

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`vpGetPhysicalDeviceProfileVariantsSupport'::__l62::<lambda_3>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8 [2];
  
  local_res8[0] = param_1;
  (**(code **)((longlong)param_3 + 0x38))(*(undefined8 *)param_3,local_res8,param_2);
  uVar7 = 0;
  *(undefined1 *)((longlong)param_3 + 0xa8) = 1;
  if (*(int *)(*(longlong *)((longlong)param_3 + 0x18) + 0x170) != 0) {
    do {
      uVar6 = 0;
      if (local_res8[0] == 0) {
LAB_145b87148:
        *(undefined1 *)((longlong)param_3 + 0xa8) = 0;
        return;
      }
      while( true ) {
        lVar4 = (longlong)param_2 + uVar6 * 0x28;
        if (lVar4 == 0) break;
        bVar2 = true;
        do {
          cVar3 = (**(code **)(*(longlong *)(*(longlong *)((longlong)param_3 + 0x18) + 0x178) + 8 +
                              (ulonglong)uVar7 * 0x10))(lVar4);
          lVar4 = *(longlong *)(lVar4 + 8);
          bVar1 = false;
          if (cVar3 != '\0') {
            bVar1 = bVar2;
          }
          bVar2 = bVar1;
        } while (lVar4 != 0);
        if (bVar1) break;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (local_res8[0] <= uVar5) goto LAB_145b87148;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(*(longlong *)((longlong)param_3 + 0x18) + 0x170));
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b87190

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_40>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  if (param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    *(undefined4 *)&param_1[7].pNext = 1;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b871b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_41>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  if ((param_1->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) &&
     (*(int *)&param_1[7].pNext != 1)) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                      );
    return false;
  }
  return true;
}

// <lambda_invoker_cdecl> @ 145b871f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_42>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87200

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_43>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87210

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_44>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b87218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87230

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_45>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b87238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87250

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_46>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87260

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::<lambda_47>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87270

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_48>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87280

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_49>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87290

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`vpGetPhysicalDeviceProfileVariantsSupport'::__l67::<lambda_4>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2)

{
  char cVar1;
  
  (**(code **)((longlong)param_2 + 0x30))
            (*(undefined8 *)param_2,
             *(undefined4 *)
              (*(longlong *)(*(longlong *)((longlong)param_2 + 0x18) + 0x198) +
              (ulonglong)*(uint *)((longlong)param_2 + 0x98) * 0x18),param_1);
  *(undefined1 *)((longlong)param_2 + 0xa8) = 1;
  for (; param_1 != (VkBaseOutStructure *)0x0; param_1 = param_1->pNext) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)((longlong)param_2 + 0x18) + 0x198) + 0x10 +
                        (ulonglong)*(uint *)((longlong)param_2 + 0x98) * 0x18))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_2 + 0xa8) = 0;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b87320

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_50>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87330

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_51>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87340

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_52>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b87348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87360

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_53>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b87368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87380

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_54>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87390

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5::blocks::baseline::<lambda_55>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87460

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
`vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2)

{
  undefined1 local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b874e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_64>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b874f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_65>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87500

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_66>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87510

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_67>::<lambda_invoker_cdecl>(VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87520

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_68>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_69>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87540

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_70>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87550

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::<lambda_71>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87560

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_72>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87570

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_73>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87580

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_74>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87590

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_75>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b875a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_76>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b875a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b875b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_77>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b875b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b875c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_78>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b875c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b875d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID::blocks::baseline::<lambda_79>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b875d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87660

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_88>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  
  VVar1 = param_1->sType;
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    *(undefined4 *)&param_1[7].pNext = 1;
  }
  else {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      param_1[2].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
    if ((VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) ||
       (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR)) {
      param_1[1].sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
      return;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 145b876b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_89>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
    ;
  }
  else {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
      }
      else {
        VulkanProfilePrint(
                          "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::accelerationStructure == VK_TRUE"
                          );
      }
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return false;
      }
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::descriptorBindingAccelerationStructureUpdateAfterBind == VK_TRUE"
                        );
      return false;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceRayQueryFeaturesKHR::rayQuery == VK_TRUE";
    }
  }
  VulkanProfilePrint(pcVar2);
  return false;
}

// <lambda_invoker_cdecl> @ 145b87760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_90>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87770

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_91>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87780

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_92>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  VkBaseOutStructure local_68;
  undefined8 local_58;
  VkBaseOutStructure local_50;
  undefined8 uStack_40;
  VkBaseOutStructure local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38.pNext = &local_50;
  local_38.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  local_68.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_68.pNext = &local_38;
  local_58 = 0;
  param_1->pNext = &local_68;
  local_50.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_50.pNext = (VkBaseOutStructure *)0x0;
  uStack_40 = 0;
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b877f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_93>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  param_1->pNext = (VkBaseOutStructure *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b877f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87810

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_94>::<lambda_invoker_cdecl>
          (uint param_1,VkBaseOutStructure *param_2,void *param_3,
          _func___cdecl_void_uint_VkBaseOutStructure_ptr_void_ptr *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_4)(param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145b87820

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::<lambda_95>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145b87820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_3)(param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145b87830

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_96>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87840

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_97>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 145b87850

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_98>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145b87860

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl
detail::VP_UE_VULKAN_SM5_ANDROID_RT::blocks::baseline::<lambda_99>::<lambda_invoker_cdecl>
          (VkBaseOutStructure *param_1)

{
  return true;
}

// FBindingInfo,TSizedDefaultAllocator<32>_> @ 145b87870

FArchive * __cdecl
operator<<<FVulkanShaderHeader::FBindingInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
            puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
              }
            }
            else {
              *(uint *)pFVar10 = *puVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while ((int)uVar11 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar14 = uVar12;
        uVar11 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar13 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar13 < (int)uVar11) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FArchive *)(*pcVar5)();
            return pFVar9;
          }
          pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
          puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
            }
          }
          else {
            *(undefined4 *)pFVar10 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          uVar12 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 4;
          uVar11 = param_2->ArrayNum;
        } while ((int)(uVar13 + 1) < param_2->ArrayNum);
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FGlobalSamplerInfo,TSizedDefaultAllocator<32>_> @ 145b87880

FArchive * __cdecl
operator<<<FVulkanShaderHeader::FGlobalSamplerInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 2);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FGlobalSamplerInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 2));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x102,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FGlobalSamplerInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 2));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FInputAttachmentInfo,TSizedDefaultAllocator<32>_> @ 145b87890

FArchive * __cdecl
operator<<<FVulkanShaderHeader::FInputAttachmentInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 2);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FInputAttachmentInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 2));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x102,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FInputAttachmentInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 2));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FUniformBufferInfo,TSizedDefaultAllocator<32>_> @ 145b878a0

FArchive * __cdecl
operator<<<FVulkanShaderHeader::FUniformBufferInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FUniformBufferInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FUniformBufferInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CompareItems<FVertexElement,int> @ 145b87ba0

bool __cdecl
CompareItems<FVertexElement,int>(FVertexElement *param_1,FVertexElement *param_2,int param_3)

{
  TEnumAsByte<EVertexElementType> *pTVar1;
  TEnumAsByte<EVertexElementType> *pTVar2;
  
  if (param_3 != 0) {
    pTVar2 = &param_2->Type;
    pTVar1 = &param_1->Type;
    do {
      if ((((((FVertexElement *)(pTVar1 + -2))->StreamIndex !=
             pTVar1[(longlong)param_2 + (-2 - (longlong)param_1)].Value) ||
           (pTVar1[-1].Value != pTVar2[-1].Value)) || (pTVar1->Value != pTVar2->Value)) ||
         (((pTVar1[1].Value != pTVar2[1].Value ||
           (*(ushort *)(pTVar1 + 2) != *(ushort *)(pTVar2 + 2))) ||
          (*(ushort *)(pTVar1 + 4) != *(ushort *)(pTVar2 + 4))))) {
        return false;
      }
      pTVar2 = pTVar2 + 8;
      pTVar1 = pTVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConditionallyAddShader<TVulkanBaseShader<FRHIComputeShader,5>_> @ 145b87c10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ConditionallyAddShader<TVulkanBaseShader<FRHIComputeShader,5>_>
          (TVulkanBaseShader<FRHIComputeShader,5> *param_1,
          TArray<FShaderPair,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  TVulkanBaseShader<FRHIComputeShader,5> *local_res20;
  TVulkanBaseShader<FRHIComputeShader,5> *local_18;
  undefined1 *puStack_10;
  
  if (param_1 != (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(TVulkanBaseShader<FRHIComputeShader,5> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    puStack_10 = &param_1->field_0x110;
    local_18 = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(TVulkanBaseShader<FRHIComputeShader,5> **)pFVar1 = local_18;
    *(undefined1 **)(pFVar1 + 8) = puStack_10;
    local_res20 = param_1;
    TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIShader_const_*>(param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<TVulkanBaseShader<FRHIGeometryShader,4>_> @ 145b87da0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ConditionallyAddShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
          (TVulkanBaseShader<FRHIGeometryShader,4> *param_1,
          TArray<FShaderPair,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  TVulkanBaseShader<FRHIGeometryShader,4> *local_res20;
  TVulkanBaseShader<FRHIGeometryShader,4> *local_18;
  undefined1 *puStack_10;
  
  if (param_1 != (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(TVulkanBaseShader<FRHIGeometryShader,4> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    puStack_10 = &param_1->field_0x108;
    local_18 = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(TVulkanBaseShader<FRHIGeometryShader,4> **)pFVar1 = local_18;
    *(undefined1 **)(pFVar1 + 8) = puStack_10;
    local_res20 = param_1;
    TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIShader_const_*>(param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<TVulkanBaseShader<FRHIPixelShader,3>_> @ 145b87f30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ConditionallyAddShader<TVulkanBaseShader<FRHIPixelShader,3>_>
          (TVulkanBaseShader<FRHIPixelShader,3> *param_1,
          TArray<FShaderPair,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  TVulkanBaseShader<FRHIPixelShader,3> *local_res20;
  TVulkanBaseShader<FRHIPixelShader,3> *local_18;
  undefined1 *puStack_10;
  
  if (param_1 != (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(TVulkanBaseShader<FRHIPixelShader,3> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    puStack_10 = &param_1->field_0x108;
    local_18 = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(TVulkanBaseShader<FRHIPixelShader,3> **)pFVar1 = local_18;
    *(undefined1 **)(pFVar1 + 8) = puStack_10;
    local_res20 = param_1;
    TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIShader_const_*>(param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<TVulkanBaseShader<FRHIVertexShader,0>_> @ 145b880c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ConditionallyAddShader<TVulkanBaseShader<FRHIVertexShader,0>_>
          (TVulkanBaseShader<FRHIVertexShader,0> *param_1,
          TArray<FShaderPair,TSizedDefaultAllocator<32>_> *param_2,
          TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  TVulkanBaseShader<FRHIVertexShader,0> *local_res20;
  TVulkanBaseShader<FRHIVertexShader,0> *local_18;
  undefined1 *puStack_10;
  
  if (param_1 != (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(TVulkanBaseShader<FRHIVertexShader,0> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    puStack_10 = &param_1->field_0x108;
    local_18 = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(TVulkanBaseShader<FRHIVertexShader,0> **)pFVar1 = local_18;
    *(undefined1 **)(pFVar1 + 8) = puStack_10;
    local_res20 = param_1;
    TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIShader_const_*>(param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// ConditionallyAddShader<FVulkanRayTracingShader> @ 145b88250

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ConditionallyAddShader<FVulkanRayTracingShader>
          (FVulkanRayTracingShader *param_1,TArray<FShaderPair,TSizedDefaultAllocator<32>_> *param_2
          ,TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
           *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FRHIShader *local_res8;
  FVulkanRayTracingShader *local_res20;
  FVulkanRayTracingShader *local_18;
  longlong *plStack_10;
  
  if (param_1 != (FVulkanRayTracingShader *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FVulkanRayTracingShader **)
               (*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_1) {
            return;
          }
          iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    plStack_10 = &param_1->_padding_;
    local_18 = param_1;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(FVulkanRayTracingShader **)pFVar1 = local_18;
    *(longlong **)(pFVar1 + 8) = plStack_10;
    local_res20 = param_1;
    TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIShader_const_*>(param_3,&local_res8,(bool *)&local_res20);
  }
  return;
}

// DefaultConstructItems<FVulkanShaderHeader::FBindingInfo,int> @ 145b8c070

void __cdecl DefaultConstructItems<FVulkanShaderHeader::FBindingInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<`FVulkanDynamicRHI::DumpCrashMarkers'::__l54::FCheckpointDataNV,int> @ 145b8c080

void __cdecl
DefaultConstructItems<_FVulkanDynamicRHI::DumpCrashMarkers_::__l54::FCheckpointDataNV,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0x3b9deeb0;
    *(undefined8 *)((longlong)param_1 + 4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    param_1 = (undefined4 *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FVulkanShaderHeader::FGlobalSamplerInfo,int> @ 145b8c0c0

void __cdecl
DefaultConstructItems<FVulkanShaderHeader::FGlobalSamplerInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FVulkanShaderHeader::FInputAttachmentInfo,int> @ 145b8c0d0

void __cdecl
DefaultConstructItems<FVulkanShaderHeader::FInputAttachmentInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FVulkanShaderHeader::FUniformBufferInfo,int> @ 145b8c0e0

void __cdecl
DefaultConstructItems<FVulkanShaderHeader::FUniformBufferInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkExtensionProperties,int> @ 145b8c0f0

void __cdecl DefaultConstructItems<VkExtensionProperties,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int> @ 145b8c100

void __cdecl
DestructItems<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int>
          (TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_> *param_1,
          int param_2)

{
  FVulkanInstanceExtension *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FVulkanInstanceExtension *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int> @ 145b8c140

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
DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>
          (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *param_1,int param_2)

{
  FVulkanTiming *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FVulkanTiming *)0x0) {
      UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar1->EventStream);
      operator_delete(pFVar1,0x40);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// EnqueueLambdaMultiPipe<`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>_> @ 145b8d290

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
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIEndFrame_RenderThread_::__l2::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  byte bVar6;
  longlong *plVar7;
  bool bVar8;
  FRHICommandBase *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FVulkanContextArray *pFVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *local_res8;
  FVulkanContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar9;
    this->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1]._padding_ = (longlong)param_4->__this;
    pFVar9[1].Next = (FRHICommandBase *)param_3;
    *(ERHIPipeline *)&pFVar9[2]._padding_ = param_1;
  }
  else {
    plVar15 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar16 = *(longlong **)&this->Contexts;
        plVar10 = plVar16;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar15 = plVar16, plVar16 = plVar7, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar10 = plVar7;
        }
      }
      else {
        plVar10 = *(longlong **)&(this->Contexts).field_0x8;
        plVar16 = plVar10;
      }
      if ((plVar10 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = plVar16;
    }
    bVar14 = 3;
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    do {
      bVar6 = -bVar14 & bVar14;
      if ((bVar6 == 1) || (plVar10 = plVar7, bVar6 != 2)) {
        plVar10 = plVar15;
      }
      lVar13 = 0;
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x148))();
        lVar13 = lVar11 + -0x50;
        if (lVar11 == 0) {
          lVar13 = 0;
        }
      }
      if ((bVar6 == 1) || (pFVar12 = (FVulkanContextArray *)&local_38.field_0x8, bVar6 != 2)) {
        pFVar12 = &local_38;
      }
      *(longlong *)pFVar12 = lVar13;
      bVar14 = bVar14 & bVar14 - 1;
    } while (bVar14 != 0);
    `FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>::operator()(param_4,&local_38);
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

// EnqueueLambdaMultiPipe<`FVulkanDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_> @ 145b8d550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIReplaceResources_::__l2::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  byte bVar6;
  longlong *plVar7;
  bool bVar8;
  FRHICommandBase *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FVulkanContextArray *pFVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *local_res8;
  FVulkanContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&this->MemManager,0x30,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar9;
    this->CommandLink = &pFVar9->Next;
    pFVar9[1]._padding_ = 0;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIReplaceResources'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1]._padding_ = (longlong)(param_4->ReplaceInfos).AllocatorInstance.Data;
    (param_4->ReplaceInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar9[1].Next = (param_4->ReplaceInfos).ArrayNum;
    *(int *)((longlong)&pFVar9[1].Next + 4) = (param_4->ReplaceInfos).ArrayMax;
    (param_4->ReplaceInfos).ArrayNum = 0;
    (param_4->ReplaceInfos).ArrayMax = 0;
    pFVar9[2]._padding_ = (longlong)param_3;
    *(ERHIPipeline *)&pFVar9[2].Next = param_1;
  }
  else {
    plVar15 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar16 = *(longlong **)&this->Contexts;
        plVar10 = plVar16;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar15 = plVar16, plVar16 = plVar7, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar10 = plVar7;
        }
      }
      else {
        plVar10 = *(longlong **)&(this->Contexts).field_0x8;
        plVar16 = plVar10;
      }
      if ((plVar10 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = plVar16;
    }
    bVar14 = 3;
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    do {
      bVar6 = -bVar14 & bVar14;
      if ((bVar6 == 1) || (plVar10 = plVar7, bVar6 != 2)) {
        plVar10 = plVar15;
      }
      lVar13 = 0;
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x148))();
        lVar13 = lVar11 + -0x50;
        if (lVar11 == 0) {
          lVar13 = 0;
        }
      }
      if ((bVar6 == 1) || (pFVar12 = (FVulkanContextArray *)&local_38.field_0x8, bVar6 != 2)) {
        pFVar12 = &local_38;
      }
      *(longlong *)pFVar12 = lVar13;
      bVar14 = bVar14 & bVar14 - 1;
    } while (bVar14 != 0);
    `FVulkanDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()(param_4,&local_38);
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

// EnqueueLambdaMultiPipe<`FVulkanDynamicRHI::RHIUpdateTextureReference'::__l5::<lambda_1>_> @ 145b8d820

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIUpdateTextureReference_::__l5::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  byte bVar6;
  longlong *plVar7;
  bool bVar8;
  FRHICommandBase *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FVulkanContextArray *pFVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *local_res8;
  FVulkanContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&this->MemManager,0x30,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar9;
    this->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9[1]._padding_ = 0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIUpdateTextureReference'::`5'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1]._padding_ = (longlong)(param_4->TextureRef).Reference;
    (param_4->TextureRef).Reference = (FVulkanTextureReference *)0x0;
    pFVar9[1].Next = (FRHICommandBase *)param_4->NewTexture;
    pFVar9[2]._padding_ = (longlong)param_3;
    *(ERHIPipeline *)&pFVar9[2].Next = param_1;
  }
  else {
    plVar15 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar16 = *(longlong **)&this->Contexts;
        plVar10 = plVar16;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar15 = plVar16, plVar16 = plVar7, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar10 = plVar7;
        }
      }
      else {
        plVar10 = *(longlong **)&(this->Contexts).field_0x8;
        plVar16 = plVar10;
      }
      if ((plVar10 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = plVar16;
    }
    bVar14 = 3;
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    do {
      bVar6 = -bVar14 & bVar14;
      if ((bVar6 == 1) || (plVar10 = plVar7, bVar6 != 2)) {
        plVar10 = plVar15;
      }
      lVar13 = 0;
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x148))();
        lVar13 = lVar11 + -0x50;
        if (lVar11 == 0) {
          lVar13 = 0;
        }
      }
      if ((bVar6 == 1) || (pFVar12 = (FVulkanContextArray *)&local_38.field_0x8, bVar6 != 2)) {
        pFVar12 = &local_38;
      }
      *(longlong *)pFVar12 = lVar13;
      bVar14 = bVar14 & bVar14 - 1;
    } while (bVar14 != 0);
    `FVulkanDynamicRHI::RHIUpdateTextureReference'::__l5::<lambda_1>::operator()(param_4,&local_38);
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

// EnqueueLambdaMultiPipe<`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_2>_> @ 145b8daf0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommandListBase::
EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIEndFrame_RenderThread_::__l2::<lambda_2>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_2> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  code *pcVar4;
  ERHIPipeline EVar5;
  byte bVar6;
  longlong *plVar7;
  bool bVar8;
  FRHICommandBase *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FVulkanCommandListContext **ppFVar12;
  FVulkanCommandListContext *pFVar13;
  byte bVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *local_res8;
  FVulkanCommandListContext *local_38;
  FVulkanCommandListContext *pFStack_30;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar9;
    this->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::`2'::<lambda_2>_>
          ::_vftable_;
    pFVar9[1]._padding_ = (longlong)param_4->__this;
    pFVar9[1].Next = (FRHICommandBase *)param_3;
    *(ERHIPipeline *)&pFVar9[2]._padding_ = param_1;
  }
  else {
    plVar15 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar5 = -param_1 & param_1;
      if ((EVar5 == Graphics) || (EVar5 != AsyncCompute)) {
        plVar16 = *(longlong **)&this->Contexts;
        plVar10 = plVar16;
        if (((EVar5 == Graphics) || (EVar5 != AsyncCompute)) &&
           ((plVar15 = plVar16, plVar16 = plVar7, EVar5 != Graphics && (EVar5 == AsyncCompute)))) {
          plVar10 = plVar7;
        }
      }
      else {
        plVar10 = *(longlong **)&(this->Contexts).field_0x8;
        plVar16 = plVar10;
      }
      if ((plVar10 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = plVar16;
    }
    bVar14 = 3;
    local_38 = (FVulkanCommandListContext *)0x0;
    pFStack_30 = (FVulkanCommandListContext *)0x0;
    do {
      bVar6 = -bVar14 & bVar14;
      if ((bVar6 == 1) || (plVar10 = plVar7, bVar6 != 2)) {
        plVar10 = plVar15;
      }
      pFVar13 = (FVulkanCommandListContext *)0x0;
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x148))();
        pFVar13 = (FVulkanCommandListContext *)(lVar11 + -0x50);
        if (lVar11 == 0) {
          pFVar13 = (FVulkanCommandListContext *)0x0;
        }
      }
      if ((bVar6 == 1) || (ppFVar12 = &pFStack_30, bVar6 != 2)) {
        ppFVar12 = &local_38;
      }
      *ppFVar12 = pFVar13;
      pFVar13 = local_38;
      bVar14 = bVar14 & bVar14 - 1;
    } while (bVar14 != 0);
    if ((local_38->Immediate != (FVulkanCommandListContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context.IsImmediate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                           ,0x4ad,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GVulkanRHIDeletionFrameNumber = GVulkanRHIDeletionFrameNumber + 1;
    if (GRHIGlobals.RayTracing.Supported != false) {
      FVulkanRayTracingCompactionRequestHandler::Update
                (*(FVulkanRayTracingCompactionRequestHandler **)(pFVar13->_padding_ + 0xf58),pFVar13
                );
    }
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

// GetTypeHash<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 145b8dfe0

uint __cdecl
GetTypeHash<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<EPixelFormat> FVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<EPixelFormat>)0x0) {
    param_1 = (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3
    ;
  }
  FVar3 = (ForElementType<EPixelFormat>)((longlong)iVar2 + (longlong)param_1);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<enum_EPixelFormat_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<EPixelFormat>)param_1 == FVar3) break;
    uVar4 = uVar4 ^ uVar4 * 0x40 + (uVar4 >> 2) + -0x61c88647 + (uint)*(byte *)param_1;
    param_1 = (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_1 + 1);
  }
  return uVar4;
}

// HeapSiftDown<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,`SelectPhysicalDevice'::__l106::<lambda_1>_>_>_> @ 145b8e070

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSiftDown<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>_>
          (FPhysicalDeviceInfo *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_2_::FPhysicalDeviceInfo,_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_106_::<lambda_1>_>_>
          *param_5)

{
  longlong lVar1;
  VkPhysicalDeviceType VVar2;
  VkPhysicalDeviceType VVar3;
  undefined8 uVar4;
  int iVar5;
  VkPhysicalDevice_T *pVVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 *puVar19;
  FPhysicalDeviceInfo *pFVar20;
  FPhysicalDeviceInfo *pFVar21;
  undefined8 *puVar22;
  FPhysicalDeviceInfo *pFVar23;
  FPhysicalDeviceInfo *pFVar24;
  FPhysicalDeviceInfo *pFVar25;
  longlong lVar26;
  int iVar27;
  bool bVar28;
  undefined8 local_3a8 [116];
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar5 = param_2 * 2;
    iVar27 = iVar5 + 1;
    if (iVar5 + 2 < param_3) {
      lVar26 = (longlong)iVar5 + 2;
      lVar1 = (longlong)iVar5 + 1;
      VVar2 = param_1[lVar26].PhysicalDeviceProperties2.properties.deviceType;
      VVar3 = param_1[lVar1].PhysicalDeviceProperties2.properties.deviceType;
      if (VVar2 == VVar3) {
        bVar28 = param_1[lVar26].OriginalIndex < param_1[lVar1].OriginalIndex;
      }
      else if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) ||
              (VVar3 == VK_PHYSICAL_DEVICE_TYPE_CPU)) {
        bVar28 = true;
      }
      else {
        bVar28 = false;
      }
      if (bVar28) {
        iVar27 = iVar5;
      }
      iVar27 = iVar27 + 1;
    }
    pFVar24 = param_1 + param_2;
    pFVar23 = param_1 + iVar27;
    VVar2 = (pFVar24->PhysicalDeviceProperties2).properties.deviceType;
    VVar3 = (pFVar23->PhysicalDeviceProperties2).properties.deviceType;
    if (VVar2 == VVar3) {
      if (pFVar23->OriginalIndex <= pFVar24->OriginalIndex) {
        return;
      }
    }
    else if ((VVar2 != VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) &&
            (VVar3 != VK_PHYSICAL_DEVICE_TYPE_CPU)) {
      return;
    }
    lVar26 = 7;
    pFVar20 = pFVar24;
    puVar19 = local_3a8;
    do {
      puVar22 = puVar19;
      pFVar21 = pFVar20;
      pVVar6 = pFVar21->PhysicalDevice;
      uVar4 = *(undefined8 *)&pFVar21->PhysicalDeviceProperties2;
      pvVar7 = (pFVar21->PhysicalDeviceProperties2).pNext;
      pFVar20 = (FPhysicalDeviceInfo *)
                ((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      *puVar22 = *(undefined8 *)pFVar21;
      puVar22[1] = pVVar6;
      uVar8 = *(undefined8 *)&(pFVar21->PhysicalDeviceProperties2).properties;
      uVar9 = *(undefined8 *)&(pFVar21->PhysicalDeviceProperties2).properties.vendorID;
      puVar22[2] = uVar4;
      puVar22[3] = pvVar7;
      uVar4 = *(undefined8 *)&(pFVar21->PhysicalDeviceProperties2).properties.deviceType;
      uVar10 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 4);
      puVar22[4] = uVar8;
      puVar22[5] = uVar9;
      uVar8 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0xc);
      uVar9 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x14);
      puVar22[6] = uVar4;
      puVar22[7] = uVar10;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
      uVar10 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x24);
      puVar22[8] = uVar8;
      puVar22[9] = uVar9;
      uVar8 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
      uVar9 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x34);
      puVar22[10] = uVar4;
      puVar22[0xb] = uVar10;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
      uVar10 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x44);
      puVar22[0xc] = uVar8;
      puVar22[0xd] = uVar9;
      puVar22[0xe] = uVar4;
      puVar22[0xf] = uVar10;
      lVar26 = lVar26 + -1;
      puVar19 = puVar22 + 0x10;
    } while (lVar26 != 0);
    uVar8 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x54);
    uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
    puVar22[0x10] = *(undefined8 *)pFVar20;
    puVar22[0x11] = uVar8;
    puVar22[0x12] = uVar4;
    lVar26 = 7;
    pFVar20 = pFVar23;
    do {
      pFVar25 = pFVar24;
      pFVar21 = pFVar20;
      pFVar24 = (FPhysicalDeviceInfo *)
                ((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      uVar11 = *(undefined4 *)&pFVar21->field_0x4;
      pVVar6 = pFVar21->PhysicalDevice;
      pFVar20 = (FPhysicalDeviceInfo *)
                ((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      pFVar25->OriginalIndex = pFVar21->OriginalIndex;
      *(undefined4 *)&pFVar25->field_0x4 = uVar11;
      pFVar25->PhysicalDevice = pVVar6;
      uVar11 = *(undefined4 *)&(pFVar21->PhysicalDeviceProperties2).field_0x4;
      pvVar7 = (pFVar21->PhysicalDeviceProperties2).pNext;
      (pFVar25->PhysicalDeviceProperties2).sType = (pFVar21->PhysicalDeviceProperties2).sType;
      *(undefined4 *)&(pFVar25->PhysicalDeviceProperties2).field_0x4 = uVar11;
      (pFVar25->PhysicalDeviceProperties2).pNext = pvVar7;
      uVar12 = (pFVar21->PhysicalDeviceProperties2).properties.driverVersion;
      uVar13 = (pFVar21->PhysicalDeviceProperties2).properties.vendorID;
      uVar14 = (pFVar21->PhysicalDeviceProperties2).properties.deviceID;
      (pFVar25->PhysicalDeviceProperties2).properties.apiVersion =
           (pFVar21->PhysicalDeviceProperties2).properties.apiVersion;
      (pFVar25->PhysicalDeviceProperties2).properties.driverVersion = uVar12;
      (pFVar25->PhysicalDeviceProperties2).properties.vendorID = uVar13;
      (pFVar25->PhysicalDeviceProperties2).properties.deviceID = uVar14;
      cVar15 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[0];
      cVar16 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[1];
      cVar17 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[2];
      cVar18 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[3];
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 4);
      (pFVar25->PhysicalDeviceProperties2).properties.deviceType =
           (pFVar21->PhysicalDeviceProperties2).properties.deviceType;
      (pFVar25->PhysicalDeviceProperties2).properties.deviceName[0] = cVar15;
      (pFVar25->PhysicalDeviceProperties2).properties.deviceName[1] = cVar16;
      (pFVar25->PhysicalDeviceProperties2).properties.deviceName[2] = cVar17;
      (pFVar25->PhysicalDeviceProperties2).properties.deviceName[3] = cVar18;
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar4;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x14);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
           *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0xc);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar4;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x24);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
           *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar4;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x34);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
           *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar4;
      uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x44);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
           *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
      *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    uVar11 = *(undefined4 *)&pFVar20->field_0x4;
    uVar4 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x54);
    lVar26 = 7;
    pFVar24->OriginalIndex = pFVar20->OriginalIndex;
    *(undefined4 *)&pFVar24->field_0x4 = uVar11;
    *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar4;
    *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
         *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
    puVar19 = local_3a8;
    do {
      pFVar24 = pFVar23;
      puVar22 = puVar19;
      pFVar23 = (FPhysicalDeviceInfo *)
                ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      pVVar6 = (VkPhysicalDevice_T *)puVar22[1];
      uVar4 = puVar22[2];
      pvVar7 = (void *)puVar22[3];
      *(undefined8 *)pFVar24 = *puVar22;
      pFVar24->PhysicalDevice = pVVar6;
      uVar8 = puVar22[4];
      uVar9 = puVar22[5];
      *(undefined8 *)&pFVar24->PhysicalDeviceProperties2 = uVar4;
      (pFVar24->PhysicalDeviceProperties2).pNext = pvVar7;
      uVar4 = puVar22[6];
      uVar10 = puVar22[7];
      (pFVar24->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar8;
      (pFVar24->PhysicalDeviceProperties2).properties.driverVersion =
           (int)((ulonglong)uVar8 >> 0x20);
      (pFVar24->PhysicalDeviceProperties2).properties.vendorID = (int)uVar9;
      (pFVar24->PhysicalDeviceProperties2).properties.deviceID = (int)((ulonglong)uVar9 >> 0x20);
      uVar8 = puVar22[8];
      uVar9 = puVar22[9];
      (pFVar24->PhysicalDeviceProperties2).properties.deviceType = (int)uVar4;
      (pFVar24->PhysicalDeviceProperties2).properties.deviceName[0] =
           (char)((ulonglong)uVar4 >> 0x20);
      (pFVar24->PhysicalDeviceProperties2).properties.deviceName[1] =
           (char)((ulonglong)uVar4 >> 0x28);
      (pFVar24->PhysicalDeviceProperties2).properties.deviceName[2] =
           (char)((ulonglong)uVar4 >> 0x30);
      (pFVar24->PhysicalDeviceProperties2).properties.deviceName[3] =
           (char)((ulonglong)uVar4 >> 0x38);
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar10;
      uVar4 = puVar22[10];
      uVar10 = puVar22[0xb];
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0xc) = uVar8;
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar9;
      uVar8 = puVar22[0xc];
      uVar9 = puVar22[0xd];
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x1c) = uVar4;
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar10;
      uVar4 = puVar22[0xe];
      uVar10 = puVar22[0xf];
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x2c) = uVar8;
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar9;
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x3c) = uVar4;
      *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar10;
      lVar26 = lVar26 + -1;
      puVar19 = puVar22 + 0x10;
    } while (lVar26 != 0);
    uVar8 = puVar22[0x11];
    uVar4 = puVar22[0x12];
    *(undefined8 *)pFVar23 = puVar22[0x10];
    *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar8;
    *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x5c) = uVar4;
    param_2 = iVar27;
  } while( true );
}

// HeapifyInternal<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,`SelectPhysicalDevice'::__l106::<lambda_1>_>_>_> @ 145b8e2d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>_>
          (FPhysicalDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_2_::FPhysicalDeviceInfo,_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_106_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  VkPhysicalDeviceType VVar2;
  VkPhysicalDeviceType VVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  VkPhysicalDevice_T *pVVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 *puVar20;
  FPhysicalDeviceInfo *pFVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  FPhysicalDeviceInfo *pFVar25;
  undefined8 *puVar26;
  FPhysicalDeviceInfo *pFVar27;
  int iVar28;
  FPhysicalDeviceInfo *pFVar29;
  FPhysicalDeviceInfo *pFVar30;
  longlong lVar31;
  int iVar32;
  undefined8 local_3a8 [116];
  
  if (param_2 < 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar22) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar23 = (param_2 + -2) / 2;
  iVar24 = iVar23 * 2 + 1;
  iVar6 = iVar24;
  iVar28 = iVar23;
  do {
    while (param_2 <= iVar24) {
LAB_145b8e564:
      if (iVar28 == 0) {
        return;
      }
      iVar23 = iVar28 + -1;
      iVar24 = iVar6 + -2;
      iVar6 = iVar24;
      iVar28 = iVar23;
    }
    iVar24 = iVar23 * 2;
    iVar32 = iVar24 + 1;
    if (iVar24 + 2 < param_2) {
      lVar31 = (longlong)iVar24 + 2;
      lVar1 = (longlong)iVar24 + 1;
      VVar2 = param_1[lVar31].PhysicalDeviceProperties2.properties.deviceType;
      VVar3 = param_1[lVar1].PhysicalDeviceProperties2.properties.deviceType;
      if (VVar2 == VVar3) {
        bVar22 = param_1[lVar31].OriginalIndex < param_1[lVar1].OriginalIndex;
      }
      else if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) ||
              (VVar3 == VK_PHYSICAL_DEVICE_TYPE_CPU)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      if (bVar22) {
        iVar32 = iVar24;
      }
      iVar32 = iVar32 + 1;
    }
    pFVar29 = param_1 + iVar23;
    pFVar27 = param_1 + iVar32;
    VVar2 = (pFVar29->PhysicalDeviceProperties2).properties.deviceType;
    VVar3 = (pFVar27->PhysicalDeviceProperties2).properties.deviceType;
    if (VVar2 != VVar3) {
      if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) || (VVar3 == VK_PHYSICAL_DEVICE_TYPE_CPU))
      goto LAB_145b8e3f0;
      goto LAB_145b8e564;
    }
    if (pFVar27->OriginalIndex <= pFVar29->OriginalIndex) goto LAB_145b8e564;
LAB_145b8e3f0:
    lVar31 = 7;
    pFVar21 = pFVar29;
    puVar20 = local_3a8;
    do {
      puVar26 = puVar20;
      pFVar25 = pFVar21;
      pVVar7 = pFVar25->PhysicalDevice;
      uVar4 = *(undefined8 *)&pFVar25->PhysicalDeviceProperties2;
      pvVar8 = (pFVar25->PhysicalDeviceProperties2).pNext;
      pFVar21 = (FPhysicalDeviceInfo *)
                ((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      *puVar26 = *(undefined8 *)pFVar25;
      puVar26[1] = pVVar7;
      uVar9 = *(undefined8 *)&(pFVar25->PhysicalDeviceProperties2).properties;
      uVar10 = *(undefined8 *)&(pFVar25->PhysicalDeviceProperties2).properties.vendorID;
      puVar26[2] = uVar4;
      puVar26[3] = pvVar8;
      uVar4 = *(undefined8 *)&(pFVar25->PhysicalDeviceProperties2).properties.deviceType;
      uVar11 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 4);
      puVar26[4] = uVar9;
      puVar26[5] = uVar10;
      uVar9 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0xc);
      uVar10 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x14);
      puVar26[6] = uVar4;
      puVar26[7] = uVar11;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
      uVar11 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x24);
      puVar26[8] = uVar9;
      puVar26[9] = uVar10;
      uVar9 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
      uVar10 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x34);
      puVar26[10] = uVar4;
      puVar26[0xb] = uVar11;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
      uVar11 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x44);
      puVar26[0xc] = uVar9;
      puVar26[0xd] = uVar10;
      puVar26[0xe] = uVar4;
      puVar26[0xf] = uVar11;
      lVar31 = lVar31 + -1;
      puVar20 = puVar26 + 0x10;
    } while (lVar31 != 0);
    uVar9 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x54);
    uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
    puVar26[0x10] = *(undefined8 *)pFVar21;
    puVar26[0x11] = uVar9;
    puVar26[0x12] = uVar4;
    lVar31 = 7;
    pFVar21 = pFVar27;
    do {
      pFVar30 = pFVar29;
      pFVar25 = pFVar21;
      pFVar29 = (FPhysicalDeviceInfo *)
                ((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      uVar12 = *(undefined4 *)&pFVar25->field_0x4;
      pVVar7 = pFVar25->PhysicalDevice;
      pFVar21 = (FPhysicalDeviceInfo *)
                ((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      pFVar30->OriginalIndex = pFVar25->OriginalIndex;
      *(undefined4 *)&pFVar30->field_0x4 = uVar12;
      pFVar30->PhysicalDevice = pVVar7;
      uVar12 = *(undefined4 *)&(pFVar25->PhysicalDeviceProperties2).field_0x4;
      pvVar8 = (pFVar25->PhysicalDeviceProperties2).pNext;
      (pFVar30->PhysicalDeviceProperties2).sType = (pFVar25->PhysicalDeviceProperties2).sType;
      *(undefined4 *)&(pFVar30->PhysicalDeviceProperties2).field_0x4 = uVar12;
      (pFVar30->PhysicalDeviceProperties2).pNext = pvVar8;
      uVar13 = (pFVar25->PhysicalDeviceProperties2).properties.driverVersion;
      uVar14 = (pFVar25->PhysicalDeviceProperties2).properties.vendorID;
      uVar15 = (pFVar25->PhysicalDeviceProperties2).properties.deviceID;
      (pFVar30->PhysicalDeviceProperties2).properties.apiVersion =
           (pFVar25->PhysicalDeviceProperties2).properties.apiVersion;
      (pFVar30->PhysicalDeviceProperties2).properties.driverVersion = uVar13;
      (pFVar30->PhysicalDeviceProperties2).properties.vendorID = uVar14;
      (pFVar30->PhysicalDeviceProperties2).properties.deviceID = uVar15;
      cVar16 = (pFVar25->PhysicalDeviceProperties2).properties.deviceName[0];
      cVar17 = (pFVar25->PhysicalDeviceProperties2).properties.deviceName[1];
      cVar18 = (pFVar25->PhysicalDeviceProperties2).properties.deviceName[2];
      cVar19 = (pFVar25->PhysicalDeviceProperties2).properties.deviceName[3];
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 4);
      (pFVar30->PhysicalDeviceProperties2).properties.deviceType =
           (pFVar25->PhysicalDeviceProperties2).properties.deviceType;
      (pFVar30->PhysicalDeviceProperties2).properties.deviceName[0] = cVar16;
      (pFVar30->PhysicalDeviceProperties2).properties.deviceName[1] = cVar17;
      (pFVar30->PhysicalDeviceProperties2).properties.deviceName[2] = cVar18;
      (pFVar30->PhysicalDeviceProperties2).properties.deviceName[3] = cVar19;
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar4;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x14);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
           *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0xc);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar4;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x24);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
           *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar4;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x34);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
           *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar4;
      uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x44);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
           *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
      *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar4;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    uVar12 = *(undefined4 *)&pFVar21->field_0x4;
    uVar4 = *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x54);
    lVar31 = 7;
    pFVar29->OriginalIndex = pFVar21->OriginalIndex;
    *(undefined4 *)&pFVar29->field_0x4 = uVar12;
    *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar4;
    *(undefined8 *)((pFVar30->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
         *(undefined8 *)((pFVar25->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
    puVar20 = local_3a8;
    do {
      pFVar29 = pFVar27;
      puVar26 = puVar20;
      pFVar27 = (FPhysicalDeviceInfo *)
                ((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
      pVVar7 = (VkPhysicalDevice_T *)puVar26[1];
      uVar4 = puVar26[2];
      pvVar8 = (void *)puVar26[3];
      *(undefined8 *)pFVar29 = *puVar26;
      pFVar29->PhysicalDevice = pVVar7;
      uVar9 = puVar26[4];
      uVar10 = puVar26[5];
      *(undefined8 *)&pFVar29->PhysicalDeviceProperties2 = uVar4;
      (pFVar29->PhysicalDeviceProperties2).pNext = pvVar8;
      uVar4 = puVar26[6];
      uVar11 = puVar26[7];
      (pFVar29->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar9;
      (pFVar29->PhysicalDeviceProperties2).properties.driverVersion =
           (int)((ulonglong)uVar9 >> 0x20);
      (pFVar29->PhysicalDeviceProperties2).properties.vendorID = (int)uVar10;
      (pFVar29->PhysicalDeviceProperties2).properties.deviceID = (int)((ulonglong)uVar10 >> 0x20);
      uVar9 = puVar26[8];
      uVar10 = puVar26[9];
      (pFVar29->PhysicalDeviceProperties2).properties.deviceType = (int)uVar4;
      (pFVar29->PhysicalDeviceProperties2).properties.deviceName[0] =
           (char)((ulonglong)uVar4 >> 0x20);
      (pFVar29->PhysicalDeviceProperties2).properties.deviceName[1] =
           (char)((ulonglong)uVar4 >> 0x28);
      (pFVar29->PhysicalDeviceProperties2).properties.deviceName[2] =
           (char)((ulonglong)uVar4 >> 0x30);
      (pFVar29->PhysicalDeviceProperties2).properties.deviceName[3] =
           (char)((ulonglong)uVar4 >> 0x38);
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar11;
      uVar4 = puVar26[10];
      uVar11 = puVar26[0xb];
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0xc) = uVar9;
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar10;
      uVar9 = puVar26[0xc];
      uVar10 = puVar26[0xd];
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x1c) = uVar4;
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar11;
      uVar4 = puVar26[0xe];
      uVar11 = puVar26[0xf];
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x2c) = uVar9;
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar10;
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x3c) = uVar4;
      *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar11;
      lVar31 = lVar31 + -1;
      puVar20 = puVar26 + 0x10;
    } while (lVar31 != 0);
    uVar9 = puVar26[0x11];
    uVar4 = puVar26[0x12];
    iVar24 = iVar32 * 2 + 1;
    *(undefined8 *)pFVar27 = puVar26[0x10];
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar9;
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x5c) = uVar4;
    iVar23 = iVar32;
  } while( true );
}

// IntroSortInternal<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TDereferenceWrapper<`SelectPhysicalDevice'::__l2::FPhysicalDeviceInfo,`SelectPhysicalDevice'::__l106::<lambda_1>_>_> @ 145b8e5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>
          (FPhysicalDeviceInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_2_::FPhysicalDeviceInfo,_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_106_::<lambda_1>_>
          param_4)

{
  VkPhysicalDeviceType VVar1;
  VkPhysicalDeviceType VVar2;
  undefined8 uVar3;
  code *pcVar4;
  VkPhysicalDevice_T *pVVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char *pcVar18;
  bool bVar19;
  undefined8 *puVar20;
  FPhysicalDeviceInfo *pFVar21;
  undefined8 *puVar22;
  FPhysicalDeviceInfo *pFVar23;
  FPhysicalDeviceInfo *pFVar24;
  char *pcVar25;
  FPhysicalDeviceInfo *pFVar26;
  FPhysicalDeviceInfo *pFVar27;
  FPhysicalDeviceInfo *pFVar28;
  FPhysicalDeviceInfo *pFVar29;
  char *pcVar30;
  longlong lVar31;
  longlong lVar32;
  FPhysicalDeviceInfo *pFVar33;
  FPhysicalDeviceInfo *pFVar34;
  FPhysicalDeviceInfo **ppFVar35;
  FPhysicalDeviceInfo *pFVar36;
  int iVar37;
  float fVar38;
  undefined1 auStackY_748 [32];
  FIdentityFunctor local_718 [8];
  TDereferenceWrapper<_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_2_::FPhysicalDeviceInfo,_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_106_::<lambda_1>_>
  local_710;
  TReversePredicate<TDereferenceWrapper<_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_2_::FPhysicalDeviceInfo,_VkPhysicalDevice_T_*___cdecl_SelectPhysicalDevice(VkInstance_T_*)_::_106_::<lambda_1>_>_>
  local_708 [3];
  FPhysicalDeviceInfo *local_6f0;
  undefined8 local_6e8 [116];
  FPhysicalDeviceInfo *local_348;
  FPhysicalDeviceInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar38 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar38;
    memset(local_330,0,0x2e8);
    ppFVar35 = &local_348;
    do {
      pFVar34 = ppFVar35[1];
      pFVar26 = *ppFVar35;
      pFVar24 = ppFVar35[2];
      local_6f0._0_4_ = (int)pFVar24;
      iVar37 = (int)(((longlong)pFVar34 - (longlong)pFVar26) / 0x398) + 1;
      pFVar36 = pFVar26;
      if ((int)local_6f0 != 0) {
LAB_145b8e692:
        if (8 < iVar37) {
          lVar31 = 7;
          pFVar26 = pFVar36 + iVar37 / 2;
          puVar22 = local_6e8;
          do {
            puVar20 = puVar22;
            pFVar27 = pFVar26;
            pVVar5 = pFVar27->PhysicalDevice;
            uVar3 = *(undefined8 *)&pFVar27->PhysicalDeviceProperties2;
            pvVar6 = (pFVar27->PhysicalDeviceProperties2).pNext;
            pFVar26 = (FPhysicalDeviceInfo *)
                      ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            *puVar20 = *(undefined8 *)pFVar27;
            puVar20[1] = pVVar5;
            uVar7 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties;
            uVar8 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.vendorID;
            puVar20[2] = uVar3;
            puVar20[3] = pvVar6;
            uVar3 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.deviceType;
            uVar9 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 4);
            puVar20[4] = uVar7;
            puVar20[5] = uVar8;
            uVar7 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0xc);
            uVar8 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x14);
            puVar20[6] = uVar3;
            puVar20[7] = uVar9;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
            uVar9 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x24);
            puVar20[8] = uVar7;
            puVar20[9] = uVar8;
            uVar7 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
            uVar8 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x34);
            puVar20[10] = uVar3;
            puVar20[0xb] = uVar9;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
            uVar9 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x44);
            puVar20[0xc] = uVar7;
            puVar20[0xd] = uVar8;
            puVar20[0xe] = uVar3;
            puVar20[0xf] = uVar9;
            lVar31 = lVar31 + -1;
            puVar22 = puVar20 + 0x10;
          } while (lVar31 != 0);
          uVar7 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x54)
          ;
          uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x5c)
          ;
          puVar20[0x10] = *(undefined8 *)pFVar26;
          puVar20[0x11] = uVar7;
          puVar20[0x12] = uVar3;
          lVar31 = 7;
          pFVar27 = pFVar36;
          pFVar26 = pFVar36 + iVar37 / 2;
          do {
            pFVar28 = pFVar26;
            pFVar33 = pFVar27;
            pFVar26 = (FPhysicalDeviceInfo *)
                      ((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            uVar10 = *(undefined4 *)&pFVar33->field_0x4;
            pVVar5 = pFVar33->PhysicalDevice;
            pFVar27 = (FPhysicalDeviceInfo *)
                      ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            pFVar28->OriginalIndex = pFVar33->OriginalIndex;
            *(undefined4 *)&pFVar28->field_0x4 = uVar10;
            pFVar28->PhysicalDevice = pVVar5;
            uVar10 = *(undefined4 *)&(pFVar33->PhysicalDeviceProperties2).field_0x4;
            pvVar6 = (pFVar33->PhysicalDeviceProperties2).pNext;
            (pFVar28->PhysicalDeviceProperties2).sType = (pFVar33->PhysicalDeviceProperties2).sType;
            *(undefined4 *)&(pFVar28->PhysicalDeviceProperties2).field_0x4 = uVar10;
            (pFVar28->PhysicalDeviceProperties2).pNext = pvVar6;
            uVar11 = (pFVar33->PhysicalDeviceProperties2).properties.driverVersion;
            uVar12 = (pFVar33->PhysicalDeviceProperties2).properties.vendorID;
            uVar13 = (pFVar33->PhysicalDeviceProperties2).properties.deviceID;
            (pFVar28->PhysicalDeviceProperties2).properties.apiVersion =
                 (pFVar33->PhysicalDeviceProperties2).properties.apiVersion;
            (pFVar28->PhysicalDeviceProperties2).properties.driverVersion = uVar11;
            (pFVar28->PhysicalDeviceProperties2).properties.vendorID = uVar12;
            (pFVar28->PhysicalDeviceProperties2).properties.deviceID = uVar13;
            cVar14 = (pFVar33->PhysicalDeviceProperties2).properties.deviceName[0];
            cVar15 = (pFVar33->PhysicalDeviceProperties2).properties.deviceName[1];
            cVar16 = (pFVar33->PhysicalDeviceProperties2).properties.deviceName[2];
            cVar17 = (pFVar33->PhysicalDeviceProperties2).properties.deviceName[3];
            uVar3 = *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 4);
            (pFVar28->PhysicalDeviceProperties2).properties.deviceType =
                 (pFVar33->PhysicalDeviceProperties2).properties.deviceType;
            (pFVar28->PhysicalDeviceProperties2).properties.deviceName[0] = cVar14;
            (pFVar28->PhysicalDeviceProperties2).properties.deviceName[1] = cVar15;
            (pFVar28->PhysicalDeviceProperties2).properties.deviceName[2] = cVar16;
            (pFVar28->PhysicalDeviceProperties2).properties.deviceName[3] = cVar17;
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x14);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
                 *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0xc);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x14) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x24);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
                 *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x24) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x34);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
                 *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x34) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x44);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
                 *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
            *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x44) =
                 uVar3;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          uVar10 = *(undefined4 *)&pFVar27->field_0x4;
          uVar3 = *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x54)
          ;
          pFVar26->OriginalIndex = pFVar27->OriginalIndex;
          *(undefined4 *)&pFVar26->field_0x4 = uVar10;
          *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar3
          ;
          *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
               *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
          lVar31 = 7;
          puVar22 = local_6e8;
          pFVar26 = pFVar36;
          do {
            pFVar27 = (FPhysicalDeviceInfo *)
                      ((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            pVVar5 = (VkPhysicalDevice_T *)puVar22[1];
            uVar3 = puVar22[2];
            pvVar6 = (void *)puVar22[3];
            puVar20 = puVar22 + 0x10;
            *(undefined8 *)pFVar26 = *puVar22;
            pFVar26->PhysicalDevice = pVVar5;
            uVar7 = puVar22[4];
            uVar8 = puVar22[5];
            *(undefined8 *)&pFVar26->PhysicalDeviceProperties2 = uVar3;
            (pFVar26->PhysicalDeviceProperties2).pNext = pvVar6;
            uVar3 = puVar22[6];
            uVar9 = puVar22[7];
            (pFVar26->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar7;
            (pFVar26->PhysicalDeviceProperties2).properties.driverVersion =
                 (int)((ulonglong)uVar7 >> 0x20);
            (pFVar26->PhysicalDeviceProperties2).properties.vendorID = (int)uVar8;
            (pFVar26->PhysicalDeviceProperties2).properties.deviceID =
                 (int)((ulonglong)uVar8 >> 0x20);
            uVar7 = puVar22[8];
            uVar8 = puVar22[9];
            (pFVar26->PhysicalDeviceProperties2).properties.deviceType = (int)uVar3;
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[0] =
                 (char)((ulonglong)uVar3 >> 0x20);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[1] =
                 (char)((ulonglong)uVar3 >> 0x28);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[2] =
                 (char)((ulonglong)uVar3 >> 0x30);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[3] =
                 (char)((ulonglong)uVar3 >> 0x38);
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar9;
            uVar3 = puVar22[10];
            uVar9 = puVar22[0xb];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
                 uVar7;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x14) =
                 uVar8;
            uVar7 = puVar22[0xc];
            uVar8 = puVar22[0xd];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
                 uVar3;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x24) =
                 uVar9;
            uVar3 = puVar22[0xe];
            uVar9 = puVar22[0xf];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
                 uVar7;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x34) =
                 uVar8;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
                 uVar3;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x44) =
                 uVar9;
            lVar31 = lVar31 + -1;
            puVar22 = puVar20;
            pFVar26 = pFVar27;
          } while (lVar31 != 0);
          pFVar33 = pFVar34 + 1;
          pFVar26 = pFVar36;
LAB_145b8e7fd:
          pVVar5 = (VkPhysicalDevice_T *)puVar20[1];
          uVar3 = puVar20[2];
          *(undefined8 *)pFVar27 = *puVar20;
          pFVar27->PhysicalDevice = pVVar5;
          *(undefined8 *)&pFVar27->PhysicalDeviceProperties2 = uVar3;
          pFVar27 = pFVar26;
          do {
            while( true ) {
              pFVar26 = pFVar27 + 1;
              if (pFVar34 < pFVar26) goto LAB_145b8e840;
              VVar1 = pFVar27[1].PhysicalDeviceProperties2.properties.deviceType;
              VVar2 = (pFVar36->PhysicalDeviceProperties2).properties.deviceType;
              pFVar27 = pFVar26;
              if (VVar2 == VVar1) break;
              if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) ||
                 (VVar1 == VK_PHYSICAL_DEVICE_TYPE_CPU)) goto LAB_145b8e840;
            }
          } while (pFVar26->OriginalIndex <= pFVar36->OriginalIndex);
LAB_145b8e840:
          do {
            pFVar27 = pFVar33;
            pFVar33 = pFVar27 + -1;
            if (pFVar33 <= pFVar36) goto LAB_145b8e86c;
            VVar1 = (pFVar36->PhysicalDeviceProperties2).properties.deviceType;
            VVar2 = pFVar27[-1].PhysicalDeviceProperties2.properties.deviceType;
            if (VVar2 == VVar1) {
              if (pFVar33->OriginalIndex < pFVar36->OriginalIndex) goto LAB_145b8e86c;
              goto LAB_145b8e840;
            }
            if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) ||
               (VVar1 == VK_PHYSICAL_DEVICE_TYPE_CPU)) goto LAB_145b8e86c;
          } while( true );
        }
        while (pFVar24 = pFVar36, pFVar26 = pFVar36, pFVar36 < pFVar34) {
joined_r0x000145b8ec39:
          while (pFVar26 = pFVar26 + 1, pFVar26 <= pFVar34) {
            VVar1 = (pFVar26->PhysicalDeviceProperties2).properties.deviceType;
            VVar2 = (pFVar24->PhysicalDeviceProperties2).properties.deviceType;
            if (VVar2 != VVar1) goto LAB_145b8ec54;
            if (pFVar24->OriginalIndex < pFVar26->OriginalIndex) goto LAB_145b8ec5f;
          }
          lVar31 = 7;
          pFVar26 = pFVar24;
          puVar22 = local_6e8;
          do {
            puVar20 = puVar22;
            pFVar27 = pFVar26;
            pVVar5 = pFVar27->PhysicalDevice;
            uVar3 = *(undefined8 *)&pFVar27->PhysicalDeviceProperties2;
            pvVar6 = (pFVar27->PhysicalDeviceProperties2).pNext;
            pFVar26 = (FPhysicalDeviceInfo *)
                      ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            *puVar20 = *(undefined8 *)pFVar27;
            puVar20[1] = pVVar5;
            uVar7 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties;
            uVar8 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.vendorID;
            puVar20[2] = uVar3;
            puVar20[3] = pvVar6;
            uVar3 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.deviceType;
            uVar9 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 4);
            puVar20[4] = uVar7;
            puVar20[5] = uVar8;
            uVar7 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0xc);
            uVar8 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x14);
            puVar20[6] = uVar3;
            puVar20[7] = uVar9;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
            uVar9 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x24);
            puVar20[8] = uVar7;
            puVar20[9] = uVar8;
            uVar7 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
            uVar8 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x34);
            puVar20[10] = uVar3;
            puVar20[0xb] = uVar9;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
            uVar9 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x44);
            puVar20[0xc] = uVar7;
            puVar20[0xd] = uVar8;
            puVar20[0xe] = uVar3;
            puVar20[0xf] = uVar9;
            lVar31 = lVar31 + -1;
            puVar22 = puVar20 + 0x10;
          } while (lVar31 != 0);
          uVar7 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x54)
          ;
          uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x5c)
          ;
          puVar20[0x10] = *(undefined8 *)pFVar26;
          puVar20[0x11] = uVar7;
          puVar20[0x12] = uVar3;
          lVar31 = 7;
          pFVar26 = pFVar34;
          do {
            pFVar33 = pFVar24;
            pFVar27 = pFVar26;
            pFVar24 = (FPhysicalDeviceInfo *)
                      ((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            uVar10 = *(undefined4 *)&pFVar27->field_0x4;
            pVVar5 = pFVar27->PhysicalDevice;
            pFVar26 = (FPhysicalDeviceInfo *)
                      ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            pFVar33->OriginalIndex = pFVar27->OriginalIndex;
            *(undefined4 *)&pFVar33->field_0x4 = uVar10;
            pFVar33->PhysicalDevice = pVVar5;
            uVar10 = *(undefined4 *)&(pFVar27->PhysicalDeviceProperties2).field_0x4;
            pvVar6 = (pFVar27->PhysicalDeviceProperties2).pNext;
            (pFVar33->PhysicalDeviceProperties2).sType = (pFVar27->PhysicalDeviceProperties2).sType;
            *(undefined4 *)&(pFVar33->PhysicalDeviceProperties2).field_0x4 = uVar10;
            (pFVar33->PhysicalDeviceProperties2).pNext = pvVar6;
            uVar11 = (pFVar27->PhysicalDeviceProperties2).properties.driverVersion;
            uVar12 = (pFVar27->PhysicalDeviceProperties2).properties.vendorID;
            uVar13 = (pFVar27->PhysicalDeviceProperties2).properties.deviceID;
            (pFVar33->PhysicalDeviceProperties2).properties.apiVersion =
                 (pFVar27->PhysicalDeviceProperties2).properties.apiVersion;
            (pFVar33->PhysicalDeviceProperties2).properties.driverVersion = uVar11;
            (pFVar33->PhysicalDeviceProperties2).properties.vendorID = uVar12;
            (pFVar33->PhysicalDeviceProperties2).properties.deviceID = uVar13;
            cVar14 = (pFVar27->PhysicalDeviceProperties2).properties.deviceName[0];
            cVar15 = (pFVar27->PhysicalDeviceProperties2).properties.deviceName[1];
            cVar16 = (pFVar27->PhysicalDeviceProperties2).properties.deviceName[2];
            cVar17 = (pFVar27->PhysicalDeviceProperties2).properties.deviceName[3];
            uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 4);
            (pFVar33->PhysicalDeviceProperties2).properties.deviceType =
                 (pFVar27->PhysicalDeviceProperties2).properties.deviceType;
            (pFVar33->PhysicalDeviceProperties2).properties.deviceName[0] = cVar14;
            (pFVar33->PhysicalDeviceProperties2).properties.deviceName[1] = cVar15;
            (pFVar33->PhysicalDeviceProperties2).properties.deviceName[2] = cVar16;
            (pFVar33->PhysicalDeviceProperties2).properties.deviceName[3] = cVar17;
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x14);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
                 *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0xc);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x14) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x24);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
                 *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x24) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x34);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
                 *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x34) =
                 uVar3;
            uVar3 = *(undefined8 *)
                     ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x44);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
                 *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
            *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x44) =
                 uVar3;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          uVar10 = *(undefined4 *)&pFVar26->field_0x4;
          uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x54)
          ;
          pFVar24->OriginalIndex = pFVar26->OriginalIndex;
          *(undefined4 *)&pFVar24->field_0x4 = uVar10;
          *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar3
          ;
          *(undefined8 *)((pFVar33->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
               *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
          lVar31 = 7;
          puVar22 = local_6e8;
          pFVar24 = pFVar34;
          do {
            pFVar26 = pFVar24;
            puVar20 = puVar22;
            pFVar24 = (FPhysicalDeviceInfo *)
                      ((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
            pVVar5 = (VkPhysicalDevice_T *)puVar20[1];
            uVar3 = puVar20[2];
            pvVar6 = (void *)puVar20[3];
            *(undefined8 *)pFVar26 = *puVar20;
            pFVar26->PhysicalDevice = pVVar5;
            uVar7 = puVar20[4];
            uVar8 = puVar20[5];
            *(undefined8 *)&pFVar26->PhysicalDeviceProperties2 = uVar3;
            (pFVar26->PhysicalDeviceProperties2).pNext = pvVar6;
            uVar3 = puVar20[6];
            uVar9 = puVar20[7];
            (pFVar26->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar7;
            (pFVar26->PhysicalDeviceProperties2).properties.driverVersion =
                 (int)((ulonglong)uVar7 >> 0x20);
            (pFVar26->PhysicalDeviceProperties2).properties.vendorID = (int)uVar8;
            (pFVar26->PhysicalDeviceProperties2).properties.deviceID =
                 (int)((ulonglong)uVar8 >> 0x20);
            uVar7 = puVar20[8];
            uVar8 = puVar20[9];
            (pFVar26->PhysicalDeviceProperties2).properties.deviceType = (int)uVar3;
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[0] =
                 (char)((ulonglong)uVar3 >> 0x20);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[1] =
                 (char)((ulonglong)uVar3 >> 0x28);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[2] =
                 (char)((ulonglong)uVar3 >> 0x30);
            (pFVar26->PhysicalDeviceProperties2).properties.deviceName[3] =
                 (char)((ulonglong)uVar3 >> 0x38);
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar9;
            uVar3 = puVar20[10];
            uVar9 = puVar20[0xb];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
                 uVar7;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x14) =
                 uVar8;
            uVar7 = puVar20[0xc];
            uVar8 = puVar20[0xd];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
                 uVar3;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x24) =
                 uVar9;
            uVar3 = puVar20[0xe];
            uVar9 = puVar20[0xf];
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
                 uVar7;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x34) =
                 uVar8;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
                 uVar3;
            *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x44) =
                 uVar9;
            lVar31 = lVar31 + -1;
            puVar22 = puVar20 + 0x10;
          } while (lVar31 != 0);
          uVar7 = puVar20[0x11];
          uVar3 = puVar20[0x12];
          *(undefined8 *)pFVar24 = puVar20[0x10];
          *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar7
          ;
          *(undefined8 *)((pFVar26->PhysicalDeviceProperties2).properties.deviceName + 0x5c) = uVar3
          ;
          pFVar34 = pFVar34 + -1;
        }
        goto LAB_145b8ef9e;
      }
LAB_145b8ebcc:
      local_718[0] = param_3;
      local_710.Predicate = param_4.Predicate;
      local_6f0 = pFVar24;
      if (iVar37 < 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_145b8ede5:
        local_708[0].Predicate = &local_710;
        HeapifyInternal<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>_>
                  (pFVar26,iVar37,param_3,&local_710);
        iVar37 = iVar37 + -1;
        if (0 < iVar37) {
          lVar31 = (longlong)iVar37 * 0x398;
          do {
            pcVar18 = (pFVar26->PhysicalDeviceProperties2).properties.deviceName + lVar31 + -0x34;
            lVar32 = 7;
            pFVar34 = pFVar26;
            puVar22 = local_6e8;
            do {
              puVar20 = puVar22;
              pFVar24 = pFVar34;
              pVVar5 = pFVar24->PhysicalDevice;
              uVar3 = *(undefined8 *)&pFVar24->PhysicalDeviceProperties2;
              pvVar6 = (pFVar24->PhysicalDeviceProperties2).pNext;
              pFVar34 = (FPhysicalDeviceInfo *)
                        ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
              *puVar20 = *(undefined8 *)pFVar24;
              puVar20[1] = pVVar5;
              uVar7 = *(undefined8 *)&(pFVar24->PhysicalDeviceProperties2).properties;
              uVar8 = *(undefined8 *)&(pFVar24->PhysicalDeviceProperties2).properties.vendorID;
              puVar20[2] = uVar3;
              puVar20[3] = pvVar6;
              uVar3 = *(undefined8 *)&(pFVar24->PhysicalDeviceProperties2).properties.deviceType;
              uVar9 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 4);
              puVar20[4] = uVar7;
              puVar20[5] = uVar8;
              uVar7 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0xc);
              uVar8 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x14);
              puVar20[6] = uVar3;
              puVar20[7] = uVar9;
              uVar3 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
              uVar9 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x24);
              puVar20[8] = uVar7;
              puVar20[9] = uVar8;
              uVar7 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
              uVar8 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x34);
              puVar20[10] = uVar3;
              puVar20[0xb] = uVar9;
              uVar3 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
              uVar9 = *(undefined8 *)
                       ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x44);
              puVar20[0xc] = uVar7;
              puVar20[0xd] = uVar8;
              puVar20[0xe] = uVar3;
              puVar20[0xf] = uVar9;
              lVar32 = lVar32 + -1;
              puVar22 = puVar20 + 0x10;
            } while (lVar32 != 0);
            uVar7 = *(undefined8 *)
                     ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x54);
            uVar3 = *(undefined8 *)
                     ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
            lVar32 = 7;
            puVar20[0x10] = *(undefined8 *)pFVar34;
            puVar20[0x11] = uVar7;
            puVar20[0x12] = uVar3;
            pcVar30 = pcVar18;
            pFVar34 = pFVar26;
            do {
              pFVar24 = pFVar34;
              pcVar25 = pcVar30;
              pFVar34 = (FPhysicalDeviceInfo *)
                        ((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
              pVVar5 = *(VkPhysicalDevice_T **)(pcVar25 + 8);
              *(undefined8 *)pFVar24 = *(undefined8 *)pcVar25;
              pFVar24->PhysicalDevice = pVVar5;
              pvVar6 = *(void **)(pcVar25 + 0x18);
              *(undefined8 *)&pFVar24->PhysicalDeviceProperties2 = *(undefined8 *)(pcVar25 + 0x10);
              (pFVar24->PhysicalDeviceProperties2).pNext = pvVar6;
              uVar3 = *(undefined8 *)(pcVar25 + 0x20);
              uVar7 = *(undefined8 *)(pcVar25 + 0x28);
              (pFVar24->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar3;
              (pFVar24->PhysicalDeviceProperties2).properties.driverVersion =
                   (int)((ulonglong)uVar3 >> 0x20);
              (pFVar24->PhysicalDeviceProperties2).properties.vendorID = (int)uVar7;
              (pFVar24->PhysicalDeviceProperties2).properties.deviceID =
                   (int)((ulonglong)uVar7 >> 0x20);
              uVar3 = *(undefined8 *)(pcVar25 + 0x30);
              uVar7 = *(undefined8 *)(pcVar25 + 0x38);
              (pFVar24->PhysicalDeviceProperties2).properties.deviceType = (int)uVar3;
              (pFVar24->PhysicalDeviceProperties2).properties.deviceName[0] =
                   (char)((ulonglong)uVar3 >> 0x20);
              (pFVar24->PhysicalDeviceProperties2).properties.deviceName[1] =
                   (char)((ulonglong)uVar3 >> 0x28);
              (pFVar24->PhysicalDeviceProperties2).properties.deviceName[2] =
                   (char)((ulonglong)uVar3 >> 0x30);
              (pFVar24->PhysicalDeviceProperties2).properties.deviceName[3] =
                   (char)((ulonglong)uVar3 >> 0x38);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 4) =
                   uVar7;
              uVar3 = *(undefined8 *)(pcVar25 + 0x48);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
                   *(undefined8 *)(pcVar25 + 0x40);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x14) =
                   uVar3;
              uVar3 = *(undefined8 *)(pcVar25 + 0x58);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
                   *(undefined8 *)(pcVar25 + 0x50);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x24) =
                   uVar3;
              uVar3 = *(undefined8 *)(pcVar25 + 0x68);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
                   *(undefined8 *)(pcVar25 + 0x60);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x34) =
                   uVar3;
              uVar3 = *(undefined8 *)(pcVar25 + 0x78);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
                   *(undefined8 *)(pcVar25 + 0x70);
              *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x44) =
                   uVar3;
              lVar32 = lVar32 + -1;
              pcVar30 = pcVar25 + 0x80;
            } while (lVar32 != 0);
            uVar3 = *(undefined8 *)(pcVar25 + 0x88);
            *(undefined8 *)pFVar34 = *(undefined8 *)(pcVar25 + 0x80);
            *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x54) =
                 uVar3;
            *(undefined8 *)((pFVar24->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
                 *(undefined8 *)(pcVar25 + 0x90);
            lVar32 = 7;
            puVar22 = local_6e8;
            do {
              pcVar30 = pcVar18;
              puVar20 = puVar22;
              uVar3 = puVar20[1];
              uVar7 = puVar20[2];
              uVar8 = puVar20[3];
              *(undefined8 *)pcVar30 = *puVar20;
              *(undefined8 *)(pcVar30 + 8) = uVar3;
              uVar3 = puVar20[4];
              uVar9 = puVar20[5];
              *(undefined8 *)(pcVar30 + 0x10) = uVar7;
              *(undefined8 *)(pcVar30 + 0x18) = uVar8;
              uVar7 = puVar20[6];
              uVar8 = puVar20[7];
              *(undefined8 *)(pcVar30 + 0x20) = uVar3;
              *(undefined8 *)(pcVar30 + 0x28) = uVar9;
              uVar3 = puVar20[8];
              uVar9 = puVar20[9];
              *(undefined8 *)(pcVar30 + 0x30) = uVar7;
              *(undefined8 *)(pcVar30 + 0x38) = uVar8;
              uVar7 = puVar20[10];
              uVar8 = puVar20[0xb];
              *(undefined8 *)(pcVar30 + 0x40) = uVar3;
              *(undefined8 *)(pcVar30 + 0x48) = uVar9;
              uVar3 = puVar20[0xc];
              uVar9 = puVar20[0xd];
              *(undefined8 *)(pcVar30 + 0x50) = uVar7;
              *(undefined8 *)(pcVar30 + 0x58) = uVar8;
              uVar7 = puVar20[0xe];
              uVar8 = puVar20[0xf];
              *(undefined8 *)(pcVar30 + 0x60) = uVar3;
              *(undefined8 *)(pcVar30 + 0x68) = uVar9;
              *(undefined8 *)(pcVar30 + 0x70) = uVar7;
              *(undefined8 *)(pcVar30 + 0x78) = uVar8;
              lVar32 = lVar32 + -1;
              puVar22 = puVar20 + 0x10;
              pcVar18 = pcVar30 + 0x80;
            } while (lVar32 != 0);
            uVar7 = puVar20[0x11];
            uVar3 = puVar20[0x12];
            *(undefined8 *)(pcVar30 + 0x80) = puVar20[0x10];
            *(undefined8 *)(pcVar30 + 0x88) = uVar7;
            *(undefined8 *)(pcVar30 + 0x90) = uVar3;
            HeapSiftDown<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>_>
                      (pFVar26,0,iVar37,local_718,local_708);
            iVar37 = iVar37 + -1;
            lVar31 = lVar31 + -0x398;
          } while (0 < iVar37);
        }
      }
      else if (iVar37 != 0) goto LAB_145b8ede5;
LAB_145b8ef9e:
      ppFVar35 = ppFVar35 + -3;
    } while (&local_348 <= ppFVar35);
  }
  return;
LAB_145b8e86c:
  lVar31 = 7;
  pFVar21 = pFVar36;
  pFVar28 = pFVar26;
  puVar22 = local_6e8;
  if (pFVar33 < pFVar26) goto LAB_145b8e9c0;
  do {
    puVar20 = puVar22;
    pFVar27 = pFVar28;
    pVVar5 = pFVar27->PhysicalDevice;
    uVar3 = *(undefined8 *)&pFVar27->PhysicalDeviceProperties2;
    pvVar6 = (pFVar27->PhysicalDeviceProperties2).pNext;
    pFVar28 = (FPhysicalDeviceInfo *)
              ((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    *puVar20 = *(undefined8 *)pFVar27;
    puVar20[1] = pVVar5;
    uVar7 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties;
    uVar8 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.vendorID;
    puVar20[2] = uVar3;
    puVar20[3] = pvVar6;
    uVar3 = *(undefined8 *)&(pFVar27->PhysicalDeviceProperties2).properties.deviceType;
    uVar9 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 4);
    puVar20[4] = uVar7;
    puVar20[5] = uVar8;
    uVar7 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0xc);
    uVar8 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x14);
    puVar20[6] = uVar3;
    puVar20[7] = uVar9;
    uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
    uVar9 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x24);
    puVar20[8] = uVar7;
    puVar20[9] = uVar8;
    uVar7 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
    uVar8 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x34);
    puVar20[10] = uVar3;
    puVar20[0xb] = uVar9;
    uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
    uVar9 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x44);
    puVar20[0xc] = uVar7;
    puVar20[0xd] = uVar8;
    puVar20[0xe] = uVar3;
    puVar20[0xf] = uVar9;
    lVar31 = lVar31 + -1;
    puVar22 = puVar20 + 0x10;
  } while (lVar31 != 0);
  uVar7 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x54);
  uVar3 = *(undefined8 *)((pFVar27->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
  lVar31 = 7;
  puVar20[0x10] = *(undefined8 *)pFVar28;
  puVar20[0x11] = uVar7;
  puVar20[0x12] = uVar3;
  pFVar28 = pFVar33;
  pFVar27 = pFVar26;
  do {
    pFVar23 = pFVar27;
    pFVar21 = pFVar28;
    pFVar27 = (FPhysicalDeviceInfo *)
              ((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    uVar10 = *(undefined4 *)&pFVar21->field_0x4;
    pVVar5 = pFVar21->PhysicalDevice;
    pFVar28 = (FPhysicalDeviceInfo *)
              ((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    pFVar23->OriginalIndex = pFVar21->OriginalIndex;
    *(undefined4 *)&pFVar23->field_0x4 = uVar10;
    pFVar23->PhysicalDevice = pVVar5;
    uVar10 = *(undefined4 *)&(pFVar21->PhysicalDeviceProperties2).field_0x4;
    pvVar6 = (pFVar21->PhysicalDeviceProperties2).pNext;
    (pFVar23->PhysicalDeviceProperties2).sType = (pFVar21->PhysicalDeviceProperties2).sType;
    *(undefined4 *)&(pFVar23->PhysicalDeviceProperties2).field_0x4 = uVar10;
    (pFVar23->PhysicalDeviceProperties2).pNext = pvVar6;
    uVar11 = (pFVar21->PhysicalDeviceProperties2).properties.driverVersion;
    uVar12 = (pFVar21->PhysicalDeviceProperties2).properties.vendorID;
    uVar13 = (pFVar21->PhysicalDeviceProperties2).properties.deviceID;
    (pFVar23->PhysicalDeviceProperties2).properties.apiVersion =
         (pFVar21->PhysicalDeviceProperties2).properties.apiVersion;
    (pFVar23->PhysicalDeviceProperties2).properties.driverVersion = uVar11;
    (pFVar23->PhysicalDeviceProperties2).properties.vendorID = uVar12;
    (pFVar23->PhysicalDeviceProperties2).properties.deviceID = uVar13;
    cVar14 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[0];
    cVar15 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[1];
    cVar16 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[2];
    cVar17 = (pFVar21->PhysicalDeviceProperties2).properties.deviceName[3];
    uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 4);
    (pFVar23->PhysicalDeviceProperties2).properties.deviceType =
         (pFVar21->PhysicalDeviceProperties2).properties.deviceType;
    (pFVar23->PhysicalDeviceProperties2).properties.deviceName[0] = cVar14;
    (pFVar23->PhysicalDeviceProperties2).properties.deviceName[1] = cVar15;
    (pFVar23->PhysicalDeviceProperties2).properties.deviceName[2] = cVar16;
    (pFVar23->PhysicalDeviceProperties2).properties.deviceName[3] = cVar17;
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar3;
    uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x14);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
         *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0xc);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar3;
    uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x24);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
         *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar3;
    uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x34);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
         *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar3;
    uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x44);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
         *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
    *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar3;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  uVar10 = *(undefined4 *)&pFVar28->field_0x4;
  uVar3 = *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x54);
  lVar31 = 7;
  pFVar27->OriginalIndex = pFVar28->OriginalIndex;
  *(undefined4 *)&pFVar27->field_0x4 = uVar10;
  *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar3;
  *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
       *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
  puVar22 = local_6e8;
  pFVar28 = pFVar33;
  do {
    pFVar27 = (FPhysicalDeviceInfo *)
              ((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    pVVar5 = (VkPhysicalDevice_T *)puVar22[1];
    uVar3 = puVar22[2];
    pvVar6 = (void *)puVar22[3];
    puVar20 = puVar22 + 0x10;
    *(undefined8 *)pFVar28 = *puVar22;
    pFVar28->PhysicalDevice = pVVar5;
    uVar7 = puVar22[4];
    uVar8 = puVar22[5];
    *(undefined8 *)&pFVar28->PhysicalDeviceProperties2 = uVar3;
    (pFVar28->PhysicalDeviceProperties2).pNext = pvVar6;
    uVar3 = puVar22[6];
    uVar9 = puVar22[7];
    (pFVar28->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar7;
    (pFVar28->PhysicalDeviceProperties2).properties.driverVersion = (int)((ulonglong)uVar7 >> 0x20);
    (pFVar28->PhysicalDeviceProperties2).properties.vendorID = (int)uVar8;
    (pFVar28->PhysicalDeviceProperties2).properties.deviceID = (int)((ulonglong)uVar8 >> 0x20);
    uVar7 = puVar22[8];
    uVar8 = puVar22[9];
    (pFVar28->PhysicalDeviceProperties2).properties.deviceType = (int)uVar3;
    (pFVar28->PhysicalDeviceProperties2).properties.deviceName[0] = (char)((ulonglong)uVar3 >> 0x20)
    ;
    (pFVar28->PhysicalDeviceProperties2).properties.deviceName[1] = (char)((ulonglong)uVar3 >> 0x28)
    ;
    (pFVar28->PhysicalDeviceProperties2).properties.deviceName[2] = (char)((ulonglong)uVar3 >> 0x30)
    ;
    (pFVar28->PhysicalDeviceProperties2).properties.deviceName[3] = (char)((ulonglong)uVar3 >> 0x38)
    ;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar9;
    uVar3 = puVar22[10];
    uVar9 = puVar22[0xb];
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0xc) = uVar7;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar8;
    uVar7 = puVar22[0xc];
    uVar8 = puVar22[0xd];
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x1c) = uVar3;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar9;
    uVar3 = puVar22[0xe];
    uVar9 = puVar22[0xf];
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x2c) = uVar7;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar8;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x3c) = uVar3;
    *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar9;
    lVar31 = lVar31 + -1;
    puVar22 = puVar20;
    pFVar28 = pFVar27;
  } while (lVar31 != 0);
  goto LAB_145b8e7fd;
LAB_145b8e9c0:
  do {
    puVar20 = puVar22;
    pFVar28 = pFVar21;
    pVVar5 = pFVar28->PhysicalDevice;
    uVar3 = *(undefined8 *)&pFVar28->PhysicalDeviceProperties2;
    pvVar6 = (pFVar28->PhysicalDeviceProperties2).pNext;
    pFVar21 = (FPhysicalDeviceInfo *)
              ((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    *puVar20 = *(undefined8 *)pFVar28;
    puVar20[1] = pVVar5;
    uVar7 = *(undefined8 *)&(pFVar28->PhysicalDeviceProperties2).properties;
    uVar8 = *(undefined8 *)&(pFVar28->PhysicalDeviceProperties2).properties.vendorID;
    puVar20[2] = uVar3;
    puVar20[3] = pvVar6;
    uVar3 = *(undefined8 *)&(pFVar28->PhysicalDeviceProperties2).properties.deviceType;
    uVar9 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 4);
    puVar20[4] = uVar7;
    puVar20[5] = uVar8;
    uVar7 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0xc);
    uVar8 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x14);
    puVar20[6] = uVar3;
    puVar20[7] = uVar9;
    uVar3 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
    uVar9 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x24);
    puVar20[8] = uVar7;
    puVar20[9] = uVar8;
    uVar7 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
    uVar8 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x34);
    puVar20[10] = uVar3;
    puVar20[0xb] = uVar9;
    uVar3 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
    uVar9 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x44);
    puVar20[0xc] = uVar7;
    puVar20[0xd] = uVar8;
    puVar20[0xe] = uVar3;
    puVar20[0xf] = uVar9;
    lVar31 = lVar31 + -1;
    puVar22 = puVar20 + 0x10;
  } while (lVar31 != 0);
  uVar7 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x54);
  uVar3 = *(undefined8 *)((pFVar28->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
  lVar31 = 7;
  puVar20[0x10] = *(undefined8 *)pFVar21;
  puVar20[0x11] = uVar7;
  puVar20[0x12] = uVar3;
  pFVar21 = pFVar33;
  pFVar28 = pFVar36;
  do {
    pFVar29 = pFVar28;
    pFVar23 = pFVar21;
    pFVar28 = (FPhysicalDeviceInfo *)
              ((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    uVar10 = *(undefined4 *)&pFVar23->field_0x4;
    pVVar5 = pFVar23->PhysicalDevice;
    pFVar21 = (FPhysicalDeviceInfo *)
              ((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    pFVar29->OriginalIndex = pFVar23->OriginalIndex;
    *(undefined4 *)&pFVar29->field_0x4 = uVar10;
    pFVar29->PhysicalDevice = pVVar5;
    uVar10 = *(undefined4 *)&(pFVar23->PhysicalDeviceProperties2).field_0x4;
    pvVar6 = (pFVar23->PhysicalDeviceProperties2).pNext;
    (pFVar29->PhysicalDeviceProperties2).sType = (pFVar23->PhysicalDeviceProperties2).sType;
    *(undefined4 *)&(pFVar29->PhysicalDeviceProperties2).field_0x4 = uVar10;
    (pFVar29->PhysicalDeviceProperties2).pNext = pvVar6;
    uVar11 = (pFVar23->PhysicalDeviceProperties2).properties.driverVersion;
    uVar12 = (pFVar23->PhysicalDeviceProperties2).properties.vendorID;
    uVar13 = (pFVar23->PhysicalDeviceProperties2).properties.deviceID;
    (pFVar29->PhysicalDeviceProperties2).properties.apiVersion =
         (pFVar23->PhysicalDeviceProperties2).properties.apiVersion;
    (pFVar29->PhysicalDeviceProperties2).properties.driverVersion = uVar11;
    (pFVar29->PhysicalDeviceProperties2).properties.vendorID = uVar12;
    (pFVar29->PhysicalDeviceProperties2).properties.deviceID = uVar13;
    cVar14 = (pFVar23->PhysicalDeviceProperties2).properties.deviceName[0];
    cVar15 = (pFVar23->PhysicalDeviceProperties2).properties.deviceName[1];
    cVar16 = (pFVar23->PhysicalDeviceProperties2).properties.deviceName[2];
    cVar17 = (pFVar23->PhysicalDeviceProperties2).properties.deviceName[3];
    uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 4);
    (pFVar29->PhysicalDeviceProperties2).properties.deviceType =
         (pFVar23->PhysicalDeviceProperties2).properties.deviceType;
    (pFVar29->PhysicalDeviceProperties2).properties.deviceName[0] = cVar14;
    (pFVar29->PhysicalDeviceProperties2).properties.deviceName[1] = cVar15;
    (pFVar29->PhysicalDeviceProperties2).properties.deviceName[2] = cVar16;
    (pFVar29->PhysicalDeviceProperties2).properties.deviceName[3] = cVar17;
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar3;
    uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x14);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0xc) =
         *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0xc);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar3;
    uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x24);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x1c) =
         *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x1c);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar3;
    uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x34);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x2c) =
         *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x2c);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar3;
    uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x44);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x3c) =
         *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x3c);
    *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar3;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  uVar10 = *(undefined4 *)&pFVar21->field_0x4;
  uVar3 = *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x54);
  lVar31 = 7;
  pFVar28->OriginalIndex = pFVar21->OriginalIndex;
  *(undefined4 *)&pFVar28->field_0x4 = uVar10;
  *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar3;
  *(undefined8 *)((pFVar29->PhysicalDeviceProperties2).properties.deviceName + 0x5c) =
       *(undefined8 *)((pFVar23->PhysicalDeviceProperties2).properties.deviceName + 0x5c);
  puVar22 = local_6e8;
  pFVar28 = pFVar33;
  do {
    pFVar21 = pFVar28;
    puVar20 = puVar22;
    pFVar28 = (FPhysicalDeviceInfo *)
              ((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x4c);
    pVVar5 = (VkPhysicalDevice_T *)puVar20[1];
    uVar3 = puVar20[2];
    pvVar6 = (void *)puVar20[3];
    *(undefined8 *)pFVar21 = *puVar20;
    pFVar21->PhysicalDevice = pVVar5;
    uVar7 = puVar20[4];
    uVar8 = puVar20[5];
    *(undefined8 *)&pFVar21->PhysicalDeviceProperties2 = uVar3;
    (pFVar21->PhysicalDeviceProperties2).pNext = pvVar6;
    uVar3 = puVar20[6];
    uVar9 = puVar20[7];
    (pFVar21->PhysicalDeviceProperties2).properties.apiVersion = (int)uVar7;
    (pFVar21->PhysicalDeviceProperties2).properties.driverVersion = (int)((ulonglong)uVar7 >> 0x20);
    (pFVar21->PhysicalDeviceProperties2).properties.vendorID = (int)uVar8;
    (pFVar21->PhysicalDeviceProperties2).properties.deviceID = (int)((ulonglong)uVar8 >> 0x20);
    uVar7 = puVar20[8];
    uVar8 = puVar20[9];
    (pFVar21->PhysicalDeviceProperties2).properties.deviceType = (int)uVar3;
    (pFVar21->PhysicalDeviceProperties2).properties.deviceName[0] = (char)((ulonglong)uVar3 >> 0x20)
    ;
    (pFVar21->PhysicalDeviceProperties2).properties.deviceName[1] = (char)((ulonglong)uVar3 >> 0x28)
    ;
    (pFVar21->PhysicalDeviceProperties2).properties.deviceName[2] = (char)((ulonglong)uVar3 >> 0x30)
    ;
    (pFVar21->PhysicalDeviceProperties2).properties.deviceName[3] = (char)((ulonglong)uVar3 >> 0x38)
    ;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 4) = uVar9;
    uVar3 = puVar20[10];
    uVar9 = puVar20[0xb];
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0xc) = uVar7;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x14) = uVar8;
    uVar7 = puVar20[0xc];
    uVar8 = puVar20[0xd];
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x1c) = uVar3;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x24) = uVar9;
    uVar3 = puVar20[0xe];
    uVar9 = puVar20[0xf];
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x2c) = uVar7;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x34) = uVar8;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x3c) = uVar3;
    *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x44) = uVar9;
    lVar31 = lVar31 + -1;
    puVar22 = puVar20 + 0x10;
  } while (lVar31 != 0);
  uVar7 = puVar20[0x11];
  uVar3 = puVar20[0x12];
  local_6f0._0_4_ = (int)local_6f0 + -1;
  *(undefined8 *)pFVar28 = puVar20[0x10];
  *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x54) = uVar7;
  *(undefined8 *)((pFVar21->PhysicalDeviceProperties2).properties.deviceName + 0x5c) = uVar3;
  if (((longlong)pFVar33 + (-0x398 - (longlong)pFVar36)) / 0x398 <
      ((longlong)pFVar34 - (longlong)pFVar26) / 0x398) {
    if (pFVar26 < pFVar34) {
      *ppFVar35 = pFVar26;
      ppFVar35[1] = pFVar34;
      *(int *)(ppFVar35 + 2) = (int)local_6f0;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar33 <= pFVar36 + 1) goto LAB_145b8ef9e;
    pFVar34 = pFVar27 + -2;
    pFVar26 = pFVar36;
  }
  else {
    if (pFVar36 + 1 < pFVar33) {
      *ppFVar35 = pFVar36;
      ppFVar35[1] = pFVar27 + -2;
      *(int *)(ppFVar35 + 2) = (int)local_6f0;
      ppFVar35 = ppFVar35 + 3;
    }
    if (pFVar34 <= pFVar26) goto LAB_145b8ef9e;
  }
  iVar37 = (int)(((longlong)pFVar34 - (longlong)pFVar26) / 0x398) + 1;
  pFVar36 = pFVar26;
  if ((int)local_6f0 == 0) goto LAB_145b8ebcc;
  goto LAB_145b8e692;
LAB_145b8ec54:
  if ((VVar2 == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU) || (VVar1 == VK_PHYSICAL_DEVICE_TYPE_CPU)) {
LAB_145b8ec5f:
    pFVar24 = pFVar26;
  }
  goto joined_r0x000145b8ec39;
}

// MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI> @ 145b8f000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI>
          (FRHIBlendState *param_1,FRHIBlendState *param_2)

{
  bool bVar1;
  undefined1 auStack_b8 [32];
  FBlendStateInitializerRHI local_98;
  FBlendStateInitializerRHI local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  if (param_1 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,&local_58);
  }
  if (param_2 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,&local_98);
  }
  bVar1 = operator==(&local_58,&local_98);
  return bVar1;
}

// ReadShaderOptionalData<FVulkanRayTracingShader> @ 145b8f140

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ReadShaderOptionalData<FVulkanRayTracingShader>
          (FShaderCodeReader *param_1,FVulkanRayTracingShader *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  FShaderCodePackedResourceCounts *pFVar3;
  char *pcVar4;
  FString local_18;
  
  pFVar3 = FShaderCodeReader::FindOptionalData<FShaderCodePackedResourceCounts>(param_1);
  if (pFVar3 != (FShaderCodePackedResourceCounts *)0x0) {
    pbVar1 = (byte *)((longlong)&param_2->_padding_ + 5);
    if (*(char *)((longlong)&param_2->_padding_ + 4) == '\x05') {
      *pbVar1 = *pbVar1 ^ (pFVar3->UsageFlags >> 4 ^ *pbVar1) & 1;
    }
    *pbVar1 = *pbVar1 ^ (pFVar3->UsageFlags >> 4 ^ *pbVar1) & 2;
    *(bool *)((longlong)&param_2->_padding_ + 1) =
         (pFVar3->UsageFlags & (BindlessSamplers|BindlessResources)) != None;
  }
  pcVar4 = FShaderCodeReader::FindOptionalData(param_1,Name);
  FString::FString(&local_18,pcVar4);
  plVar2 = &param_2->_padding_;
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&param_2->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&param_2->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::RHICore::SetupShaderCodeValidationData((FRHIShader *)param_2,param_1);
  return;
}

// _Copy_memmove<char_const_*_*,char_const_*_*> @ 145b90570

char ** __cdecl
std::_Copy_memmove<char_const_*_*,char_const_*_*>(char **param_1,char **param_2,char **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (char **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<VkExtensionProperties_*,VkExtensionProperties_*> @ 145b905b0

VkExtensionProperties * __cdecl
std::_Copy_memmove<VkExtensionProperties_*,VkExtensionProperties_*>
          (VkExtensionProperties *param_1,VkExtensionProperties *param_2,
          VkExtensionProperties *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (VkExtensionProperties *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<VkVideoFormatPropertiesKHR_*,VkVideoFormatPropertiesKHR_*> @ 145b905f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VkVideoFormatPropertiesKHR * __cdecl
std::_Copy_memmove<VkVideoFormatPropertiesKHR_*,VkVideoFormatPropertiesKHR_*>
          (VkVideoFormatPropertiesKHR *param_1,VkVideoFormatPropertiesKHR *param_2,
          VkVideoFormatPropertiesKHR *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (VkVideoFormatPropertiesKHR *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3)
  ;
}

// _Copy_memmove<VpBlockProperties_*,VpBlockProperties_*> @ 145b90630

VpBlockProperties * __cdecl
std::_Copy_memmove<VpBlockProperties_*,VpBlockProperties_*>
          (VpBlockProperties *param_1,VpBlockProperties *param_2,VpBlockProperties *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (VpBlockProperties *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<VpProfileProperties_*,VpProfileProperties_*> @ 145b90670

VpProfileProperties * __cdecl
std::_Copy_memmove<VpProfileProperties_*,VpProfileProperties_*>
          (VpProfileProperties *param_1,VpProfileProperties *param_2,VpProfileProperties *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (VpProfileProperties *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<char_const_*_*> @ 145b906b0

char ** __cdecl
std::_Copy_memmove_tail<char_const_*_*>
          (char *param_1,char **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (char **)((longlong)param_2 + param_3);
}

// _Copy_memmove_tail<VkExtensionProperties_*> @ 145b906e0

VkExtensionProperties * __cdecl
std::_Copy_memmove_tail<VkExtensionProperties_*>
          (char *param_1,VkExtensionProperties *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (VkExtensionProperties *)(param_2->extensionName + param_3);
}

// _Copy_memmove_tail<VkVideoFormatPropertiesKHR_*> @ 145b90710

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VkVideoFormatPropertiesKHR * __cdecl
std::_Copy_memmove_tail<VkVideoFormatPropertiesKHR_*>
          (char *param_1,VkVideoFormatPropertiesKHR *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (VkVideoFormatPropertiesKHR *)((longlong)&param_2->sType + param_3);
}

// _Copy_memmove_tail<VpBlockProperties_*> @ 145b90740

VpBlockProperties * __cdecl
std::_Copy_memmove_tail<VpBlockProperties_*>
          (char *param_1,VpBlockProperties *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (VpBlockProperties *)((param_2->profiles).profileName + param_3);
}

// _Copy_memmove_tail<VpProfileProperties_*> @ 145b90770

VpProfileProperties * __cdecl
std::_Copy_memmove_tail<VpProfileProperties_*>
          (char *param_1,VpProfileProperties *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (VpProfileProperties *)(param_2->profileName + param_3);
}

// _Emplace_reallocate<VpBlockProperties_const_&> @ 145b907a0

VpBlockProperties * __thiscall
std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
_Emplace_reallocate<VpBlockProperties_const_&>
          (vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *this,
          VpBlockProperties *param_1,VpBlockProperties *param_2)

{
  ulonglong uVar1;
  VpBlockProperties *pVVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  VpBlockProperties *_Dst;
  VpBlockProperties *pVVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulong64 uVar8;
  size_t _Size;
  VpBlockProperties *pVVar9;
  VpBlockProperties *pVVar10;
  
  pVVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pVVar5) / 0x208;
  if (lVar7 == 0x7e07e07e07e07e) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar7 + 1;
  uVar3 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar5) / 0x208;
  if (0x7e07e07e07e07e - (uVar3 >> 1) < uVar3) {
    uVar6 = 0x7e07e07e07e07e;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar1;
    if (uVar1 <= uVar3) {
      uVar6 = uVar3;
    }
    if (0x7e07e07e07e07e < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 0x208);
  lVar7 = 4;
  pVVar10 = _Dst + ((longlong)param_1 - (longlong)pVVar5) / 0x208;
  pVVar5 = pVVar10;
  do {
    pVVar9 = (VpBlockProperties *)((pVVar5->profiles).profileName + 0x80);
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 8);
    pVVar2 = (VpBlockProperties *)((param_2->profiles).profileName + 0x80);
    *(undefined8 *)(pVVar5->profiles).profileName = *(undefined8 *)(param_2->profiles).profileName;
    *(undefined8 *)((pVVar5->profiles).profileName + 8) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x18);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x10) =
         *(undefined8 *)((param_2->profiles).profileName + 0x10);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x18) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x28);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x20) =
         *(undefined8 *)((param_2->profiles).profileName + 0x20);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x28) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x38);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x30) =
         *(undefined8 *)((param_2->profiles).profileName + 0x30);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x38) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x48);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x40) =
         *(undefined8 *)((param_2->profiles).profileName + 0x40);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x48) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x58);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x50) =
         *(undefined8 *)((param_2->profiles).profileName + 0x50);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x58) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x68);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x60) =
         *(undefined8 *)((param_2->profiles).profileName + 0x60);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x68) = uVar4;
    uVar4 = *(undefined8 *)((param_2->profiles).profileName + 0x78);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x70) =
         *(undefined8 *)((param_2->profiles).profileName + 0x70);
    *(undefined8 *)((pVVar5->profiles).profileName + 0x78) = uVar4;
    lVar7 = lVar7 + -1;
    pVVar5 = pVVar9;
    param_2 = pVVar2;
  } while (lVar7 != 0);
  *(undefined8 *)(pVVar9->profiles).profileName = *(undefined8 *)(pVVar2->profiles).profileName;
  pVVar5 = (this->_Mypair)._Myval2._Mylast;
  pVVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pVVar5) {
    _Size = (longlong)pVVar5 - (longlong)pVVar9;
    pVVar5 = _Dst;
    param_1 = pVVar9;
  }
  else {
    memmove(_Dst,pVVar9,(longlong)param_1 - (longlong)pVVar9);
    pVVar5 = pVVar10 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pVVar5,param_1,_Size);
  pVVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar5 != (VpBlockProperties *)0x0) {
    uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar5) / 0x208) * 0x208;
    pVVar9 = pVVar5;
    if (0xfff < uVar8) {
      pVVar9 = *(VpBlockProperties **)(pVVar5[-1].blockName + 0xf8);
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar5 + (-8 - (longlong)pVVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar9,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar6;
  return pVVar10;
}

// _Emplace_reallocate<VpProfileProperties_const_&> @ 145b909e0

VpProfileProperties * __thiscall
std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
_Emplace_reallocate<VpProfileProperties_const_&>
          (vector<VpProfileProperties,std::allocator<VpProfileProperties>_> *this,
          VpProfileProperties *param_1,VpProfileProperties *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  VpProfileProperties *_Dst;
  VpProfileProperties *pVVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulong64 uVar9;
  size_t _Size;
  VpProfileProperties *pVVar10;
  VpProfileProperties *pVVar11;
  
  pVVar6 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pVVar6) / 0x104;
  if (lVar8 == 0xfc0fc0fc0fc0fc) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar8 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar6) / 0x104;
  if (0xfc0fc0fc0fc0fc - (uVar2 >> 1) < uVar2) {
    uVar7 = 0xfc0fc0fc0fc0fc;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0xfc0fc0fc0fc0fc < uVar7) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar7 * 0x104);
  lVar8 = 2;
  pVVar11 = _Dst + ((longlong)param_1 - (longlong)pVVar6) / 0x104;
  pVVar6 = pVVar11;
  do {
    pcVar4 = pVVar6->profileName;
    uVar3 = *(undefined8 *)(param_2->profileName + 8);
    pcVar5 = param_2->profileName;
    *(undefined8 *)pVVar6->profileName = *(undefined8 *)param_2->profileName;
    *(undefined8 *)(pVVar6->profileName + 8) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x18);
    *(undefined8 *)(pVVar6->profileName + 0x10) = *(undefined8 *)(param_2->profileName + 0x10);
    *(undefined8 *)(pVVar6->profileName + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x28);
    *(undefined8 *)(pVVar6->profileName + 0x20) = *(undefined8 *)(param_2->profileName + 0x20);
    *(undefined8 *)(pVVar6->profileName + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x38);
    *(undefined8 *)(pVVar6->profileName + 0x30) = *(undefined8 *)(param_2->profileName + 0x30);
    *(undefined8 *)(pVVar6->profileName + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x48);
    *(undefined8 *)(pVVar6->profileName + 0x40) = *(undefined8 *)(param_2->profileName + 0x40);
    *(undefined8 *)(pVVar6->profileName + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x58);
    *(undefined8 *)(pVVar6->profileName + 0x50) = *(undefined8 *)(param_2->profileName + 0x50);
    *(undefined8 *)(pVVar6->profileName + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x68);
    *(undefined8 *)(pVVar6->profileName + 0x60) = *(undefined8 *)(param_2->profileName + 0x60);
    *(undefined8 *)(pVVar6->profileName + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(param_2->profileName + 0x78);
    *(undefined8 *)(pVVar6->profileName + 0x70) = *(undefined8 *)(param_2->profileName + 0x70);
    *(undefined8 *)(pVVar6->profileName + 0x78) = uVar3;
    lVar8 = lVar8 + -1;
    pVVar6 = (VpProfileProperties *)(pcVar4 + 0x80);
    param_2 = (VpProfileProperties *)(pcVar5 + 0x80);
  } while (lVar8 != 0);
  *(undefined4 *)((VpProfileProperties *)(pcVar4 + 0x80))->profileName =
       *(undefined4 *)((VpProfileProperties *)(pcVar5 + 0x80))->profileName;
  pVVar6 = (this->_Mypair)._Myval2._Mylast;
  pVVar10 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pVVar6) {
    _Size = (longlong)pVVar6 - (longlong)pVVar10;
    pVVar6 = _Dst;
    param_1 = pVVar10;
  }
  else {
    memmove(_Dst,pVVar10,(longlong)param_1 - (longlong)pVVar10);
    pVVar6 = pVVar11 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pVVar6,param_1,_Size);
  pVVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar6 != (VpProfileProperties *)0x0) {
    uVar9 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar6) / 0x104) * 0x104;
    pVVar10 = pVVar6;
    if (0xfff < uVar9) {
      pVVar10 = *(VpProfileProperties **)(pVVar6[-1].profileName + 0xfc);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar6 + (-8 - (longlong)pVVar10))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar10,uVar9);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar7;
  return pVVar11;
}

// _Resize<std::_Value_init_tag> @ 145b90c20

void __thiscall
std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::
_Resize<std::_Value_init_tag>
          (vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> *this,
          ulong64 param_1,_Value_init_tag *param_2)

{
  ulonglong uVar1;
  VkExtensionProperties *pVVar2;
  ulonglong uVar3;
  VkExtensionProperties *pVVar4;
  longlong lVar5;
  ulong64 uVar6;
  
  pVVar4 = (this->_Mypair)._Myval2._Mylast;
  pVVar2 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = ((longlong)pVVar4 - (longlong)pVVar2) / 0x104;
  if (param_1 < uVar3) {
    (this->_Mypair)._Myval2._Mylast = pVVar2 + param_1;
  }
  else if (uVar3 < param_1) {
    uVar1 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar2) / 0x104;
    if (uVar1 < param_1) {
      if (0xfc0fc0fc0fc0fc < param_1) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      if (0xfc0fc0fc0fc0fc - (uVar1 >> 1) < uVar1) {
        uVar6 = 0xfc0fc0fc0fc0fc;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
        uVar6 = param_1;
        if ((param_1 <= uVar1) && (uVar6 = uVar1, 0xfc0fc0fc0fc0fc < uVar1)) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
      }
      pVVar4 = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 0x104);
      if (param_1 - uVar3 != 0) {
        memset(pVVar4 + uVar3,0,(param_1 - uVar3) * 0x104);
      }
      pVVar2 = (this->_Mypair)._Myval2._Myfirst;
      memmove(pVVar4,pVVar2,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pVVar2);
      _Change_array(this,pVVar4,param_1,uVar6);
    }
    else {
      lVar5 = param_1 - uVar3;
      if (lVar5 != 0) {
        memset(pVVar4,0,lVar5 * 0x104);
        pVVar4 = pVVar4 + lVar5;
      }
      (this->_Mypair)._Myval2._Mylast = pVVar4;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_180_>,1,0> @ 145b94e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_180_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer_::__l1::<lambda_180_>,1,0>
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
       ___7__TFunction_OwnedObject_V<lambda_180_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
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

// ~TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>,0,1> @ 145b94e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FVulkanTransientResourceAllocator::CreateBuffer_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>,0,1> @ 145b94e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FVulkanTransientResourceAllocator::CreateTexture_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x48);
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

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1> @ 145b94e90

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
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHIEndFrame_::__l2::<lambda_1>,1,1>(void *this)

{
  TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> **)((longlong)this + 0x28);
  if (*(TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> **)((longlong)this + 0x28) ==
      (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)0x0) {
    pTVar1 = (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)((longlong)this + 0x10);
  }
  DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>
            (pTVar1,*(int *)((longlong)this + 0x30));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_1>,1,1> @ 145b94ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateTextureInitializer_::__l40::<lambda_1>,1,1>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_1>,1,1>
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

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0> @ 145b94f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHIEndFrame_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>,1,1> @ 145b94f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateTextureInitializer_::__l40::<lambda_2>,1,1>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_2>,1,1>
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

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>,1,0> @ 145b94f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateTextureInitializer_::__l42::<lambda_3>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_3>,1,0>
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

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,1,0> @ 145b94f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,1,0>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateTextureInitializer_::__l42::<lambda_4>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_4>,1,0>
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

// ~TScopeGuard<`FVulkanSwapChain::Create'::__l2::<lambda_1>_> @ 145b94f80

void __thiscall
ScopeExitSupport::TScopeGuard<`FVulkanSwapChain::Create'::__l2::<lambda_1>_>::
~TScopeGuard<_FVulkanSwapChain::Create_::__l2::<lambda_1>_>(void *this)

{
  VkSwapchainKHR_T *pVVar1;
  
  if ((undefined8 *)**(longlong **)this != (undefined8 *)0x0) {
    pVVar1 = *(VkSwapchainKHR_T **)**(longlong **)this;
    if (pVVar1 != (VkSwapchainKHR_T *)0x0) {
      FVulkanGenericPlatform::DestroySwapchainKHR
                (*(VkDevice_T **)(*(longlong *)((longlong)this + 8) + 0x30),pVVar1,
                 &VulkanRHI::GAllocationCallbacks);
      *(undefined8 *)**(undefined8 **)this = 0;
    }
    if (*(VkSurfaceKHR_T **)(**(longlong **)this + 8) != (VkSurfaceKHR_T *)0x0) {
      (*VulkanDynamicAPI::vkDestroySurfaceKHR)
                ((VkInstance_T *)**(undefined8 **)((longlong)this + 0x10),
                 *(VkSurfaceKHR_T **)(**(longlong **)this + 8),&VulkanRHI::GAllocationCallbacks);
      *(undefined8 *)(**(longlong **)this + 8) = 0;
    }
  }
  return;
}

// ~vector<VpBlockProperties,std::allocator<VpBlockProperties>_> @ 145b95500

void __thiscall
std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
~vector<VpBlockProperties,std::allocator<VpBlockProperties>_>
          (vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *this)

{
  VpBlockProperties *pVVar1;
  VpBlockProperties *pVVar2;
  ulong64 uVar3;
  
  pVVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar1 != (VpBlockProperties *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar1) / 0x208) * 0x208;
    pVVar2 = pVVar1;
    if (0xfff < uVar3) {
      pVVar2 = *(VpBlockProperties **)(pVVar1[-1].blockName + 0xf8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar1 + (-8 - (longlong)pVVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (VpBlockProperties *)0x0;
    (this->_Mypair)._Myval2._Mylast = (VpBlockProperties *)0x0;
    (this->_Mypair)._Myval2._Myend = (VpBlockProperties *)0x0;
  }
  return;
}

// ~vector<VpProfileProperties,std::allocator<VpProfileProperties>_> @ 145b955a0

void __thiscall
std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
~vector<VpProfileProperties,std::allocator<VpProfileProperties>_>
          (vector<VpProfileProperties,std::allocator<VpProfileProperties>_> *this)

{
  VpProfileProperties *pVVar1;
  VpProfileProperties *pVVar2;
  ulong64 uVar3;
  
  pVVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar1 != (VpProfileProperties *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar1) / 0x104) * 0x104;
    pVVar2 = pVVar1;
    if (0xfff < uVar3) {
      pVVar2 = *(VpProfileProperties **)(pVVar1[-1].profileName + 0xfc);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar1 + (-8 - (longlong)pVVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (VpProfileProperties *)0x0;
    (this->_Mypair)._Myval2._Mylast = (VpProfileProperties *)0x0;
    (this->_Mypair)._Myval2._Myend = (VpProfileProperties *)0x0;
  }
  return;
}

// operator<< @ 145b96ed0

FArchive * __cdecl operator<<(FArchive *param_1,FGlobalSamplerInfo *param_2)

{
  uchar *puVar1;
  EGlobalSamplerType *pEVar2;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->BindingIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar2 = (EGlobalSamplerType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (EGlobalSamplerType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Type = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  return param_1;
}

// operator<< @ 145b96f70

FArchive * __cdecl operator<<(FArchive *param_1,FInputAttachmentInfo *param_2)

{
  uchar *puVar1;
  EAttachmentType *pEVar2;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->BindingIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar2 = (EAttachmentType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (EAttachmentType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Type = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  return param_1;
}

// operator<< @ 145b97010

FArchive * __cdecl operator<<(FArchive *param_1,FUniformBufferInfo *param_2)

{
  uint *puVar1;
  uchar *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->LayoutHash);
    }
  }
  else {
    param_2->LayoutHash = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->bHasResources,1);
  }
  else {
    param_2->bHasResources = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->BindlessCBIndex = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BindlessCBIndex,1);
  return param_1;
}

// operator<< @ 145b970f0

FArchive * __cdecl operator<<(FArchive *param_1,FVulkanShaderHeader *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uchar *puVar4;
  ERayHitGroupEntrypoint *pEVar5;
  
  TArrayPrivateFriend::Serialize<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Bindings);
  TArrayPrivateFriend::
  Serialize<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->UniformBufferInfos);
  TArrayPrivateFriend::
  Serialize<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->InputAttachmentInfos);
  TArrayPrivateFriend::
  Serialize<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->GlobalSamplerInfos);
  puVar1 = &param_2->NumBoundUniformBuffers;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->PackedGlobalsSize;
  puVar2 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->InputAttachmentsMask;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->InOutMask;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->RayTracingPayloadType;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->RayTracingPayloadSize;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->SourceHash,0x14);
  puVar1 = &param_2->SpirvCRC;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->WaveSize,1);
  }
  else {
    param_2->WaveSize = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar5 = (ERayHitGroupEntrypoint *)**(undefined8 **)&param_1->field_0x8;
  if ((ERayHitGroupEntrypoint *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->RayGroupAnyHit,1);
  }
  else {
    param_2->RayGroupAnyHit = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar5 = (ERayHitGroupEntrypoint *)**(undefined8 **)&param_1->field_0x8;
  if ((ERayHitGroupEntrypoint *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->RayGroupIntersection,1);
  }
  else {
    param_2->RayGroupIntersection = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->DebugName);
  return param_1;
}

// operator<< @ 145b973f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FSpirvContainer *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  FNameEntryId FVar9;
  uint uVar10;
  FArchive *pFVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  int *local_res18;
  undefined1 local_res20 [8];
  FSpirvContainer local_58;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((local_res8[0] == 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("SpirvCodeSizeInBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x17e,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FArchive *)(*pcVar3)();
    return pFVar11;
  }
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x17f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FArchive *)(*pcVar3)();
    return pFVar11;
  }
  uVar10 = local_res8[0];
  if (GVulkanCompressSPIRV == 0) {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    if ((param_2->SpirvCode).ArrayMax < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res8[0],(ForAnyElementType *)param_2,(param_2->SpirvCode).ArrayNum,
                 &(param_2->SpirvCode).ArrayMax);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_2->SpirvCode,local_res8[0],Default);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(param_2->SpirvCode).AllocatorInstance.Data,local_res8[0]);
  }
  else {
    FVar9 = FNameEntryId::FromValidEName((EName)&local_res18);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
    uVar10 = FCompression::CompressMemoryBound(FVar4,uVar10,COMPRESS_NoFlags,0);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar12 = &(param_2->SpirvCode).ArrayMax;
    if ((param_2->SpirvCode).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar10,(ForAnyElementType *)param_2,(param_2->SpirvCode).ArrayNum,piVar12);
    }
    local_res18 = &(param_2->SpirvCode).ArrayMax;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_2->SpirvCode,uVar10,Default);
    local_58.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.SpirvCode.ArrayNum = 0;
    local_58.SpirvCode.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_58.SpirvCode,local_res8[0],Default);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,local_58.SpirvCode.AllocatorInstance.Data,local_res8[0]);
    FVar6.Data = local_58.SpirvCode.AllocatorInstance.Data;
    pFVar2 = (param_2->SpirvCode).AllocatorInstance.Data;
    iVar7 = local_58.SpirvCode.ArrayNum;
    local_res10[0] = uVar10;
    FVar9 = FNameEntryId::FromValidEName((EName)local_res20);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
    bVar8 = FCompression::CompressMemory
                      (FVar5,pFVar2,(int *)local_res10,FVar6.Data,iVar7,COMPRESS_BiasSpeed,0);
    if (bVar8) {
      param_2->UncompressedSizeBytes = local_res8[0];
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->SpirvCode,local_res10[0],Default);
    }
    else if (param_2 != &local_58) {
      pFVar2 = (param_2->SpirvCode).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
        piVar12 = local_res18;
      }
      (param_2->SpirvCode).AllocatorInstance.Data = local_58.SpirvCode.AllocatorInstance.Data;
      (param_2->SpirvCode).ArrayNum = local_58.SpirvCode.ArrayNum;
      *piVar12 = local_58.SpirvCode.ArrayMax;
      local_58.SpirvCode.ArrayNum = 0;
      local_58.SpirvCode.ArrayMax = 0;
      local_58.SpirvCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.SpirvCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SpirvCode.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// operator== @ 145b976b0

bool __cdecl operator==(FVulkanVertexDeclarationKey *param_1,FVulkanVertexDeclarationKey *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->VertexElements).ArrayNum;
  if (iVar1 == (param_2->VertexElements).ArrayNum) {
    iVar1 = memcmp(param_1,param_2,(longlong)iVar1 << 3);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// operator() @ 145b97750

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __thiscall
detail::VP_UE_VULKAN_SM6::<lambda_121>::operator()(<lambda_121> *this,VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (0x3b9e7768 < (int)VVar1) {
    if (0x3b9fcb40 < (int)VVar1) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::mutableDescriptorType == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMaintenance4Features::maintenance4 == VK_TRUE"
        ;
      }
      goto LAB_145b979fb;
    }
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceBufferDeviceAddressFeatures::bufferDeviceAddress == VK_TRUE"
        ;
      }
      else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceSynchronization2Features::synchronization2 == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceDescriptorBufferFeaturesEXT::descriptorBuffer == VK_TRUE"
        ;
      }
      goto LAB_145b979fb;
    }
    if (*(int *)&param_1[1].field_0x4 == 1) {
      if (*(int *)&param_1[1].pNext == 1) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        goto LAB_145b97995;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::meshShader == VK_TRUE"
                        );
    }
    if (*(int *)&param_1[1].pNext != 1) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::multiviewMeshShader == VK_TRUE"
                        );
    }
LAB_145b97995:
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::taskShader == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::separateDepthStencilLayouts == VK_TRUE"
    ;
LAB_145b979fb:
    VulkanProfilePrint(pcVar2);
    return false;
  }
  if (0x3b9ddb28 < (int)VVar1) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceTimelineSemaphoreFeaturesKHR::timelineSemaphore == VK_TRUE"
      ;
    }
    else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::shaderImageInt64Atomics == VK_TRUE"
      ;
    }
    goto LAB_145b979fb;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
    if (*(int *)&param_1[1].field_0x4 == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR::computeDerivativeGroupLinear == VK_TRUE"
    ;
    goto LAB_145b979fb;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                        );
    }
    if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.shaderInt64 == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
      return true;
    }
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceShaderAtomicInt64Features::shaderBufferInt64Atomics == VK_TRUE"
    ;
    goto LAB_145b979fb;
  }
  if (*(int *)&param_1[5].field_0x4 == 1) {
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) goto LAB_145b977c8;
    if (*(int *)&param_1[5].pNext == 1) {
      if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
        return true;
      }
      goto LAB_145b977ec;
    }
  }
  else {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingPartiallyBound == VK_TRUE"
                      );
LAB_145b977c8:
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUpdateUnusedWhilePending == VK_TRUE"
                        );
    }
  }
  if (*(int *)&param_1[5].pNext != 1) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingVariableDescriptorCount == VK_TRUE"
                      );
  }
LAB_145b977ec:
  if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
    return false;
  }
  VulkanProfilePrint(
                    "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::runtimeDescriptorArray == VK_TRUE"
                    );
  return false;
}

// operator() @ 145b97cf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __thiscall
detail::VP_UE_VULKAN_SM6_RT::<lambda_147>::operator()
          (<lambda_147> *this,VkBaseOutStructure *param_1)

{
  VkStructureType VVar1;
  char *pcVar2;
  
  VVar1 = param_1->sType;
  if (0x3b9eb5e8 < (int)VVar1) {
    if (0x3ba01578 < (int)VVar1) {
      if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceRayQueryFeaturesKHR::rayQuery == VK_TRUE";
      }
      else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::mutableDescriptorType == VK_TRUE"
        ;
      }
      else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceMaintenance4Features::maintenance4 == VK_TRUE"
        ;
      }
      else {
        if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR) {
          return true;
        }
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        pcVar2 = 
        "Unsupported feature condition: VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::rayTracingPositionFetch == VK_TRUE"
        ;
      }
      goto LAB_145b98086;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
      }
      else {
        VulkanProfilePrint(
                          "Unsupported feature condition: VkPhysicalDeviceRayTracingPipelineFeaturesKHR::rayTracingPipeline == VK_TRUE"
                          );
      }
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return false;
      }
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceRayTracingPipelineFeaturesKHR::rayTraversalPrimitiveCulling == VK_TRUE"
                        );
      return false;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceHostQueryResetFeaturesEXT::hostQueryReset == VK_TRUE"
      ;
      goto LAB_145b98086;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceSynchronization2Features::synchronization2 == VK_TRUE"
      ;
      goto LAB_145b98086;
    }
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceDescriptorBufferFeaturesEXT::descriptorBuffer == VK_TRUE"
      ;
      goto LAB_145b98086;
    }
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT) {
      return true;
    }
    if (*(int *)&param_1[1].field_0x4 == 1) {
      if (*(int *)&param_1[1].pNext == 1) {
        if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
          return true;
        }
        goto LAB_145b97f72;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::meshShader == VK_TRUE"
                        );
    }
    if (*(int *)&param_1[1].pNext != 1) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::multiviewMeshShader == VK_TRUE"
                        );
    }
LAB_145b97f72:
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceMeshShaderFeaturesEXT::taskShader == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceBufferDeviceAddressFeatures::bufferDeviceAddress == VK_TRUE"
    ;
LAB_145b98086:
    VulkanProfilePrint(pcVar2);
    return false;
  }
  if (0x3b9ddb28 < (int)VVar1) {
    if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceTimelineSemaphoreFeaturesKHR::timelineSemaphore == VK_TRUE"
      ;
    }
    else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::scalarBlockLayout == VK_TRUE"
      ;
    }
    else if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT) {
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::shaderImageInt64Atomics == VK_TRUE"
      ;
    }
    else {
      if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES) {
        return true;
      }
      if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
      pcVar2 = 
      "Unsupported feature condition: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::separateDepthStencilLayouts == VK_TRUE"
      ;
    }
    goto LAB_145b98086;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR) {
    if (*(int *)&param_1[1].field_0x4 == 1) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR::computeDerivativeGroupLinear == VK_TRUE"
    ;
    goto LAB_145b98086;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) {
    if (*(int *)&param_1[7].pNext == 1) {
      if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.fragmentStoresAndAtomics == VK_TRUE"
                        );
    }
    if (param_1[0xb].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceFeatures2KHR::features.shaderInt64 == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR) {
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
        return true;
      }
    }
    else {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::accelerationStructure == VK_TRUE"
                        );
    }
    if (param_1[2].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return false;
    }
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceAccelerationStructureFeaturesKHR::descriptorBindingAccelerationStructureUpdateAfterBind == VK_TRUE"
                      );
    return false;
  }
  if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES) {
    if (VVar1 != VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES) {
      return true;
    }
    if (param_1[1].sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      return true;
    }
    pcVar2 = 
    "Unsupported feature condition: VkPhysicalDeviceShaderAtomicInt64Features::shaderBufferInt64Atomics == VK_TRUE"
    ;
    goto LAB_145b98086;
  }
  if (*(int *)&param_1[5].field_0x4 == 1) {
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) goto LAB_145b97d73;
    if (*(int *)&param_1[5].pNext == 1) {
      if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
        return true;
      }
      goto LAB_145b97d97;
    }
  }
  else {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingPartiallyBound == VK_TRUE"
                      );
LAB_145b97d73:
    if (param_1[5].sType != VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO) {
      VulkanProfilePrint(
                        "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUpdateUnusedWhilePending == VK_TRUE"
                        );
    }
  }
  if (*(int *)&param_1[5].pNext != 1) {
    VulkanProfilePrint(
                      "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingVariableDescriptorCount == VK_TRUE"
                      );
  }
LAB_145b97d97:
  if (*(int *)((longlong)&param_1[5].pNext + 4) == 1) {
    return false;
  }
  VulkanProfilePrint(
                    "Unsupported feature condition: VkPhysicalDeviceDescriptorIndexingFeaturesEXT::runtimeDescriptorArray == VK_TRUE"
                    );
  return false;
}

// operator() @ 145b980b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
detail::VP_UE_VULKAN_SM6_RT::<lambda_150>::operator()
          (<lambda_150> *this,VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_248 [2];
  undefined4 *local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined4 *local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  undefined4 *local_210;
  undefined8 local_208;
  undefined4 local_200 [2];
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0 [2];
  undefined4 *local_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined4 local_170 [2];
  undefined4 *local_168;
  undefined8 local_160;
  VkBaseOutStructure local_158;
  undefined8 local_148;
  VkBaseOutStructure local_140;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  VkBaseOutStructure local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_128[0] = 0x3b9eb5e8;
  local_240 = local_128;
  local_120 = 0;
  local_248[0] = 0x3b9ddb28;
  local_238 = 0;
  local_100 = local_248;
  local_60 = local_108;
  local_228 = local_68;
  local_220 = 0;
  local_e0 = local_230;
  local_c8 = 0;
  local_210 = local_e8;
  local_208 = 0;
  local_1f8 = local_218;
  local_1f0 = 0;
  local_1e0 = local_200;
  local_1d8 = 0;
  local_1c8 = local_1e8;
  local_1c0 = 0;
  local_1b0 = local_1d0;
  local_1a8 = 0;
  local_198 = local_1b8;
  local_190 = 0;
  local_180 = local_1a0;
  local_178 = 0;
  local_b8 = local_188;
  local_a0 = 0;
  local_168 = local_c0;
  local_160 = 0;
  local_158.pNext = (VkBaseOutStructure *)local_170;
  local_118 = 0;
  uStack_110 = 0;
  local_108[0] = 0x3b9f9c62;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_230[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_218[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_200[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_1e8[0] = 0x3b9e7768;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1d0[0] = 0x3b9d8920;
  local_1b8[0] = 0x3b9e5c10;
  local_1a0[0] = 0x3b9f9497;
  local_188[0] = 0x3b9df298;
  local_c0[0] = 0x3b9d13fd;
  local_b0 = 0;
  uStack_a8 = 0;
  local_170[0] = 0x3b9ec588;
  local_158.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_148 = 0;
  local_98.pNext = &local_158;
  local_78 = 0;
  local_140.pNext = &local_98;
  local_130 = 0;
  param_1->pNext = &local_140;
  local_98.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  local_88 = 0;
  uStack_80 = 0;
  local_140.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;
  (*param_3)(param_1,param_2);
  return;
}

// operator() @ 145b982d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
detail::VP_UE_VULKAN_SM6_RT::blocks::baseline::<lambda_158>::operator()
          (<lambda_158> *this,VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_248 [2];
  undefined4 *local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined4 *local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  undefined4 *local_210;
  undefined8 local_208;
  undefined4 local_200 [2];
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0 [2];
  undefined4 *local_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined4 local_170 [2];
  undefined4 *local_168;
  undefined8 local_160;
  VkBaseOutStructure local_158;
  undefined8 local_148;
  VkBaseOutStructure local_140;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  VkBaseOutStructure local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_128[0] = 0x3b9eb5e8;
  local_240 = local_128;
  local_120 = 0;
  local_248[0] = 0x3b9ddb28;
  local_238 = 0;
  local_100 = local_248;
  local_60 = local_108;
  local_228 = local_68;
  local_220 = 0;
  local_e0 = local_230;
  local_c8 = 0;
  local_210 = local_e8;
  local_208 = 0;
  local_1f8 = local_218;
  local_1f0 = 0;
  local_1e0 = local_200;
  local_1d8 = 0;
  local_1c8 = local_1e8;
  local_1c0 = 0;
  local_1b0 = local_1d0;
  local_1a8 = 0;
  local_198 = local_1b8;
  local_190 = 0;
  local_180 = local_1a0;
  local_178 = 0;
  local_b8 = local_188;
  local_a0 = 0;
  local_168 = local_c0;
  local_160 = 0;
  local_158.pNext = (VkBaseOutStructure *)local_170;
  local_118 = 0;
  uStack_110 = 0;
  local_108[0] = 0x3b9f9c62;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_230[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_218[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_200[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_1e8[0] = 0x3b9e7768;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1d0[0] = 0x3b9d8920;
  local_1b8[0] = 0x3b9e5c10;
  local_1a0[0] = 0x3b9f9497;
  local_188[0] = 0x3b9df298;
  local_c0[0] = 0x3b9d13fd;
  local_b0 = 0;
  uStack_a8 = 0;
  local_170[0] = 0x3b9ec588;
  local_158.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_148 = 0;
  local_98.pNext = &local_158;
  local_78 = 0;
  local_140.pNext = &local_98;
  local_130 = 0;
  param_1->pNext = &local_140;
  local_98.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  local_88 = 0;
  uStack_80 = 0;
  local_140.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;
  (*param_3)(param_1,param_2);
  return;
}

// operator() @ 145b989e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
detail::VP_UE_VULKAN_SM6_RT::blocks::RayTracing::<lambda_176>::operator()
          (<lambda_176> *this,VkBaseOutStructure *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  undefined4 local_248 [2];
  undefined4 *local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined4 *local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  undefined4 *local_210;
  undefined8 local_208;
  undefined4 local_200 [2];
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8 [2];
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0 [2];
  undefined4 *local_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined4 *local_180;
  undefined8 local_178;
  undefined4 local_170 [2];
  undefined4 *local_168;
  undefined8 local_160;
  VkBaseOutStructure local_158;
  undefined8 local_148;
  VkBaseOutStructure local_140;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  VkBaseOutStructure local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_128[0] = 0x3b9eb5e8;
  local_240 = local_128;
  local_120 = 0;
  local_248[0] = 0x3b9ddb28;
  local_238 = 0;
  local_100 = local_248;
  local_60 = local_108;
  local_228 = local_68;
  local_220 = 0;
  local_e0 = local_230;
  local_c8 = 0;
  local_210 = local_e8;
  local_208 = 0;
  local_1f8 = local_218;
  local_1f0 = 0;
  local_1e0 = local_200;
  local_1d8 = 0;
  local_1c8 = local_1e8;
  local_1c0 = 0;
  local_1b0 = local_1d0;
  local_1a8 = 0;
  local_198 = local_1b8;
  local_190 = 0;
  local_180 = local_1a0;
  local_178 = 0;
  local_b8 = local_188;
  local_a0 = 0;
  local_168 = local_c0;
  local_160 = 0;
  local_158.pNext = (VkBaseOutStructure *)local_170;
  local_118 = 0;
  uStack_110 = 0;
  local_108[0] = 0x3b9f9c62;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68[0] = 0x3b9d3ee9;
  local_58 = 0;
  uStack_50 = 0;
  local_230[0] = 0x3ba11748;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 0x3b9fcb40;
  local_38 = 0;
  uStack_30 = 0;
  local_218[0] = 0x3ba02518;
  local_28 = 0;
  uStack_20 = 0;
  local_200[0] = 0x3b9e2948;
  local_18 = 0;
  uStack_10 = 0;
  local_1e8[0] = 0x3b9e7768;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1d0[0] = 0x3b9d8920;
  local_1b8[0] = 0x3b9e5c10;
  local_1a0[0] = 0x3b9f9497;
  local_188[0] = 0x3b9df298;
  local_c0[0] = 0x3b9d13fd;
  local_b0 = 0;
  uStack_a8 = 0;
  local_170[0] = 0x3b9ec588;
  local_158.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  local_148 = 0;
  local_98.pNext = &local_158;
  local_78 = 0;
  local_140.pNext = &local_98;
  local_130 = 0;
  param_1->pNext = &local_140;
  local_98.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  local_88 = 0;
  uStack_80 = 0;
  local_140.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;
  (*param_3)(param_1,param_2);
  return;
}

// operator() @ 145b98d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `AftermathLateAssociate'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  longlong local_4a0;
  FString local_498;
  LARGE_INTEGER local_488;
  FString local_480;
  TStringView<wchar_t> local_470;
  FSpirvCode local_460;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  lVar8 = (longlong)param_1;
  QueryPerformanceCounter(&local_488);
  if ((float)((double)(ulonglong)(local_488.QuadPart - *(longlong *)this) *
             FGenericPlatformTime::SecondsPerCycle64) < *(float *)((longlong)this + 8)) {
    plVar2 = *(longlong **)((longlong)this + 0x10);
    iVar1 = (int)plVar2[1];
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_4a8 = lVar8, local_4a0 = (longlong)iVar1,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *plVar2;
    lVar4 = *(longlong *)(lVar3 + 8 + lVar8 * 0x10);
    lVar8 = *(longlong *)(lVar3 + lVar8 * 0x10);
    FVulkanShader::GetSpirvCode(&local_460,(FSpirvContainer *)(lVar4 + 0x110));
    local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_498.Data.ArrayNum = 0;
    local_498.Data.ArrayMax = 0;
    if (*(int *)(lVar8 + 0x98) < 2) {
      local_4a8 = CONCAT44(local_4a8._4_4_,*(undefined4 *)(lVar4 + 0x94));
      TCString<char>::SnprintfImpl(local_438,0x400,"main_%0.8x_%0.8x");
      ::FString::FString(&local_480,local_438);
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      local_498.Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
      local_498.Data.ArrayMax = local_480.Data.ArrayMax;
      local_498.Data.ArrayNum = local_480.Data.ArrayNum;
    }
    else {
      ::FString::operator=(&local_498,*(wchar_t **)(lVar8 + 0x90));
      local_480.Data.ArrayNum = local_498.Data.ArrayNum;
    }
    local_470.Size = local_480.Data.ArrayNum - 1;
    if (local_480.Data.ArrayNum == 0) {
      local_470.Size = 0;
    }
    local_470.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
    UE::RHICore::Nvidia::Aftermath::RegisterShaderBinary
              (local_460.CodeView.DataPtr,local_460.CodeView.ArrayNum * 4,&local_470);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    if (local_460.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.UncompressedCode.AllocatorInstance.Data);
    }
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Late_shader_ass_1510daae8,
                 (FLogCategoryBase *)&LogVulkanRHI);
    }
    ThreadSafeOnce261 = 1;
    _Init_thread_footer(&::_TSS0);
  }
  return;
}

// operator() @ 145b9bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
`vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::operator()
          (void *this,VkBaseOutStructure *param_1,void *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  void *_Src;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStackY_238 [32];
  uint local_208;
  uint local_204;
  undefined8 *local_200;
  size_t local_1f8;
  ulong64 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_198 [2];
  undefined1 local_190 [328];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  plVar1 = (longlong *)((longlong)param_2 + 0x50);
  local_200 = param_2;
  for (; param_1 != (VkBaseOutStructure *)0x0; param_1 = param_1->pNext) {
    cVar3 = (**(code **)(*plVar1 + 0x118))(param_1);
    if (cVar3 == '\0') {
      return;
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x90) = 1;
  local_198[0] = 0x3b9b23d9;
  memset(local_190,0,0x148);
  (**(code **)(*plVar1 + 0x168))
            (local_198,param_2,
             ``vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::operator()'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (*(char *)((longlong)param_2 + 0x90) != '\0') {
    *(int *)((longlong)param_2 + 0x94) = *(int *)((longlong)param_2 + 0x94) + 1;
    _Src = (void *)0x0;
    lVar13 = 0;
    puVar14 = (undefined8 *)0x0;
    local_204 = 0;
    if (*(int *)(*plVar1 + 0x150) != 0) {
      do {
        lVar10 = *plVar1;
        *(uint *)((longlong)param_2 + 0x98) = local_204;
        local_1d8 = 0x3b9b23e7;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        (**(code **)(*(longlong *)(lVar10 + 0x158) + (ulonglong)local_204 * 0x10))(&local_1d8);
        *(undefined4 *)((longlong)param_2 + 0x88) = (undefined4)uStack_1a8;
        local_208 = 0;
        (**(code **)((longlong)param_2 + 0x48))
                  (*(undefined8 *)param_2,(undefined8 *)((longlong)param_2 + 0x78),&local_208);
        uVar9 = (ulonglong)local_208;
        local_1d8 = 0x3b9b23e7;
        local_1f8 = (longlong)puVar14 - (longlong)_Src;
        local_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uVar6 = (longlong)local_1f8 / 0x38;
        local_1b0 = 0;
        uStack_1a8 = 0;
        if (uVar9 < uVar6) {
          puVar14 = (undefined8 *)(uVar9 * 0x38 + (longlong)_Src);
        }
        else if (uVar6 < uVar9) {
          uVar2 = (lVar13 - (longlong)_Src) / 0x38;
          if (uVar2 < uVar9) {
            if (0x492492492492492 - (uVar2 >> 1) < uVar2) {
              uVar4 = 0x492492492492492;
            }
            else {
              uVar4 = uVar2 + (uVar2 >> 1);
              if (uVar4 < uVar9) {
                uVar4 = uVar9;
              }
              if (0x492492492492492 < uVar4) {
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            local_1f0 = uVar4 * 0x38;
            pvVar5 = std::_Allocate<16,std::_Default_allocate_traits>(local_1f0);
            puVar14 = (undefined8 *)(uVar6 * 0x38 + (longlong)pvVar5);
            if (uVar9 - uVar6 != 0) {
              *puVar14 = CONCAT44(uStack_1d4,local_1d8);
              puVar14[1] = uStack_1d0;
              puVar14[2] = uStack_1c8;
              puVar14[3] = uStack_1c0;
              puVar14[4] = uStack_1b8;
              puVar14[5] = local_1b0;
              puVar14[6] = uStack_1e0;
              puVar11 = puVar14 + 7;
              for (uVar6 = (uVar9 - uVar6) * 0x38 - 0x38 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar11 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar11 = puVar11 + 1;
              }
            }
            memmove(pvVar5,_Src,local_1f8);
            if (_Src != (void *)0x0) {
              uVar7 = uVar2 * 0x38;
              pvVar8 = _Src;
              if (0xfff < uVar7) {
                pvVar8 = *(void **)((longlong)_Src + -8);
                uVar7 = uVar7 + 0x27;
                if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete(pvVar8,uVar7);
            }
            puVar14 = (undefined8 *)(uVar9 * 0x38 + (longlong)pvVar5);
            lVar13 = (longlong)pvVar5 + local_1f0;
            _Src = pvVar5;
            param_2 = local_200;
          }
          else {
            lVar10 = uVar9 - uVar6;
            if (lVar10 != 0) {
              *puVar14 = CONCAT44(uStack_1d4,0x3b9b23e7);
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[6] = 0;
              puVar11 = puVar14;
              puVar12 = puVar14 + 7;
              for (uVar6 = lVar10 * 0x38 - 0x38U >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              puVar14 = puVar14 + lVar10 * 7;
              param_2 = local_200;
            }
          }
        }
        (**(code **)(*plVar1 + 0x170))(local_208,_Src);
        local_204 = local_204 + 1;
      } while (local_204 < *(uint *)(*plVar1 + 0x150));
      if (_Src != (void *)0x0) {
        uVar7 = ((lVar13 - (longlong)_Src) / 0x38) * 0x38;
        pvVar5 = _Src;
        if (0xfff < uVar7) {
          pvVar5 = *(void **)((longlong)_Src + -8);
          uVar7 = uVar7 + 0x27;
          if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar5,uVar7);
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{264}' @ 145b9c160

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class
   FRHIAmplificationShader,2>::`vector deleting destructor'`adjustor{264}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIAmplificationShader,2>::_vector_deleting_destructor__adjustor_264__
          (TVulkanBaseShader<FRHIAmplificationShader,2> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIAmplificationShader,2> *)&this[-1].field_0x130,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 145b9c174

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class
   FRHIComputeShader,5>::`vector deleting destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIComputeShader,5>::_vector_deleting_destructor__adjustor_272__
          (TVulkanBaseShader<FRHIComputeShader,5> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIComputeShader,5> *)&this[-1].field_0x130,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{264}' @ 145b9c188

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class
   FRHIGeometryShader,4>::`vector deleting destructor'`adjustor{264}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIGeometryShader,4>::_vector_deleting_destructor__adjustor_264__
          (TVulkanBaseShader<FRHIGeometryShader,4> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIGeometryShader,4> *)&this[-1].field_0x130,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{264}' @ 145b9c19c

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class FRHIMeshShader,1>::`vector
   deleting destructor'`adjustor{264}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIMeshShader,1>::_vector_deleting_destructor__adjustor_264__
          (TVulkanBaseShader<FRHIMeshShader,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIMeshShader,1> *)&this[-1].field_0x130,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{264}' @ 145b9c1b0

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class
   FRHIPixelShader,3>::`vector deleting destructor'`adjustor{264}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIPixelShader,3>::_vector_deleting_destructor__adjustor_264__
          (TVulkanBaseShader<FRHIPixelShader,3> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIPixelShader,3> *)&this[-1].field_0x130,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{264}' @ 145b9c1c4

/* [thunk]:public: virtual void * __ptr64 __cdecl TVulkanBaseShader<class
   FRHIVertexShader,0>::`vector deleting destructor'`adjustor{264}' (unsigned int) __ptr64 */

void * __thiscall
TVulkanBaseShader<FRHIVertexShader,0>::_vector_deleting_destructor__adjustor_264__
          (TVulkanBaseShader<FRHIVertexShader,0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TVulkanBaseShader<FRHIVertexShader,0> *)&this[-1].field_0x130,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 145b9c1d8

/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanCommandListContextImmediate::`vector
   deleting destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanCommandListContextImmediate::_vector_deleting_destructor__adjustor_80__
          (FVulkanCommandListContextImmediate *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FVulkanCommandListContextImmediate *)&this[-1].field_0x4f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 145b9c1e8

/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanRayTracingShader::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanRayTracingShader::_vector_deleting_destructor__adjustor_280__
          (FVulkanRayTracingShader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanRayTracingShader *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{320}' @ 145b9c1fc

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
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanTexture::`vector deleting
   destructor'`adjustor{320}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanTexture::_vector_deleting_destructor__adjustor_320__(FVulkanTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145b9c210

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
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanTexture::_vector_deleting_destructor__adjustor_40__(FVulkanTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FVulkanTexture *)&this[-1].InternalViews.field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145b9c220

/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanTextureReference::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanTextureReference::_vector_deleting_destructor__adjustor_40__
          (FVulkanTextureReference *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanTextureReference *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{320}' @ 145b9c230

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
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanTransientHeap::`vector deleting
   destructor'`adjustor{320}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanTransientHeap::_vector_deleting_destructor__adjustor_320__
          (FVulkanTransientHeap *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanTransientHeap *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145b9c250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_180_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_180_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c330

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
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> **)((longlong)this + 0x28);
  if (*(TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> **)((longlong)this + 0x28) ==
      (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)0x0) {
    pTVar1 = (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)((longlong)this + 0x10);
  }
  DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>
            (pTVar1,*(int *)((longlong)this + 0x30));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_3>,1,0>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_4>,1,0>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c520

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIAmplificationShader,2>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIAmplificationShader,2> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x108);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c570

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIComputeShader,5>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIComputeShader,5> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x110);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c5c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIGeometryShader,4>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIGeometryShader,4> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x108);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c610

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIMeshShader,1>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIMeshShader,1> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x108);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c660

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIPixelShader,3>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIPixelShader,3> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x108);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c6b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TVulkanBaseShader<FRHIVertexShader,0>::_scalar_deleting_destructor_
          (TVulkanBaseShader<FRHIVertexShader,0> *this,uint param_1)

{
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->field_0x108);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c700

void * __thiscall
UE::RHICore::FGenericResourceCollection::_scalar_deleting_destructor_
          (FGenericResourceCollection *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->ShaderResourceView).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRHIResourceCollection::~FRHIResourceCollection((FRHIResourceCollection *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c760

void * __thiscall
FVulkanBlendState::_scalar_deleting_destructor_(FVulkanBlendState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c7a0

void * __thiscall
FVulkanBoundShaderState::_scalar_deleting_destructor_(FVulkanBoundShaderState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVulkanBoundShaderState__6B_;
  FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache(&this->CacheLink);
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink
            ((FCachedBoundShaderStateLink *)&this->CacheLink);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c810

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
FVulkanCommandListContextImmediate::_scalar_deleting_destructor_
          (FVulkanCommandListContextImmediate *this,uint param_1)

{
  FVulkanCommandListContext::~FVulkanCommandListContext((FVulkanCommandListContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c850

void * __thiscall
FVulkanDepthStencilState::_scalar_deleting_destructor_(FVulkanDepthStencilState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c890

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
FVulkanDynamicRHI::_scalar_deleting_destructor_(FVulkanDynamicRHI *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  void *pvVar5;
  TNode *pTVar6;
  FVulkanTimingArray *pFVar7;
  
  this->_padding_ = (longlong)&___7FVulkanDynamicRHI__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LockBufferCS);
  pFVar3 = (this->Viewports).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceLayers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceExtensions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->EopTask).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  *(undefined4 *)&(this->SignaledSemaphores).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SignaledSemaphores).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SignaledSemaphores);
  pTVar6 = (this->PendingPayloadsForSubmission).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->PendingPayloadsForSubmission).Tail = pTVar6->NextNode;
    ::operator_delete(pTVar6,0x10);
    pTVar6 = (this->PendingPayloadsForSubmission).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubmissionCS);
  pFVar7 = *(FVulkanTimingArray **)&(this->CurrentTimingPerQueue).field_0x18;
  if (pFVar7 == (FVulkanTimingArray *)0x0) {
    pFVar7 = &this->CurrentTimingPerQueue;
  }
  DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>
            ((TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)pFVar7,
             *(int *)&(this->CurrentTimingPerQueue).field_0x20);
  pvVar5 = *(void **)&(this->CurrentTimingPerQueue).field_0x18;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9c9e0

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

void * __thiscall FVulkanGPUFence::_scalar_deleting_destructor_(FVulkanGPUFence *this,uint param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FVulkanSyncPoint *pFVar4;
  FBaseGraphTask *pFVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&___7FVulkanGPUFence__6B_;
  if (this->Event != (VkEvent_T *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Event,(ulong64)this->Event);
    this->Event = (VkEvent_T *)0x0;
  }
  pFVar4 = (this->CompletedSyncPoint).Reference;
  if (pFVar4 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar5 = (this->SubmittedSyncPoint).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cab0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void * __thiscall
FVulkanRasterizerState::_scalar_deleting_destructor_(FVulkanRasterizerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9caf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingShader::_scalar_deleting_destructor_(FVulkanRayTracingShader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IntersectionSpirvContainer).SpirvCode.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnyHitSpirvContainer).SpirvCode.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVulkanShader::~FVulkanShader((FVulkanShader *)&this->_padding_);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cb60

void * __thiscall
FVulkanSamplerState::_scalar_deleting_destructor_(FVulkanSamplerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cba0

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
FVulkanSemaphore::_scalar_deleting_destructor_(FVulkanSemaphore *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FVulkanSemaphore__6B_;
  if (this->SemaphoreHandle == (VkSemaphore_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SemaphoreHandle != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0xd9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((this->Flags & ImmediateDeletion) == None) {
    if ((this->Flags & ExternallyOwned) == None) {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,Semaphore,(ulong64)this->SemaphoreHandle);
    }
  }
  else {
    (*VulkanDynamicAPI::vkDestroySemaphore)
              (this->Device->Device,this->SemaphoreHandle,&VulkanRHI::GAllocationCallbacks);
  }
  this->SemaphoreHandle = (VkSemaphore_T *)0x0;
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cc90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall FVulkanShader::_scalar_deleting_destructor_(FVulkanShader *this,uint param_1)

{
  ~FVulkanShader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9ccd0

/* WARNING: Enum "Type": Some values do not have unique names */
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
FVulkanShaderModule::_scalar_deleting_destructor_(FVulkanShaderModule *this,uint param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  void *pvVar6;
  FName local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FVulkanShaderModule__6B_;
  FVar5 = StatPtr_STAT_VulkanNumShaderModule;
  if (StatPtr_STAT_VulkanNumShaderModule ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_VulkanNumShaderModule");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumShaderModule,*pFVar4,
                       L"Num Shader Modules","STATGROUP_VulkanGraphicPipelineLibs",
                       "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,
                       false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
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
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&Device->DeferredDeletionQueue,ShaderModule,(ulong64)this->ActualShaderModule);
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if (((int)this->_padding_ != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Super::GetRefCount() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0x124,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar2)();
    return pvVar6;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cee0

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

void * __thiscall
FVulkanShaderResourceView::_scalar_deleting_destructor_
          (FVulkanShaderResourceView *this,uint param_1)

{
  *(undefined ***)&this->field_0x30 = &___7FVulkanLinkedView__6B_;
  if (*(longlong *)&this->field_0x70 != 0) {
    *(undefined8 *)(*(longlong *)&this->field_0x70 + 0x48) = *(undefined8 *)&this->field_0x78;
  }
  if (*(undefined8 **)&this->field_0x78 != (undefined8 *)0x0) {
    **(undefined8 **)&this->field_0x78 = *(undefined8 *)&this->field_0x70;
  }
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  FVulkanView::~FVulkanView((FVulkanView *)&this->field_0x38);
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9cf70

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
FVulkanStagingBuffer::_scalar_deleting_destructor_(FVulkanStagingBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FVulkanStagingBuffer__6B_;
  if (this->StagingBuffer != (FStagingBuffer *)0x0) {
    if (this->Device == (FVulkanDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                         ,0x247,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
    }
    VulkanRHI::FStagingManager::ReleaseBuffer
              (&this->Device->StagingManager,(FVulkanContextCommon *)0x0,&this->StagingBuffer);
  }
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d020

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

void * __thiscall FVulkanTexture::_scalar_deleting_destructor_(FVulkanTexture *this,uint param_1)

{
  ~FVulkanTexture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d060

void * __thiscall
FVulkanTextureReference::_scalar_deleting_destructor_(FVulkanTextureReference *this,uint param_1)

{
  FVulkanShaderResourceView *this_00;
  
  this_00 = (this->BindlessView).Reference;
  if (this_00 != (FVulkanShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRHITextureReference::~FRHITextureReference((FRHITextureReference *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d0b0

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

void * __thiscall FVulkanThread::_scalar_deleting_destructor_(FVulkanThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanThread__6B_;
  LOCK();
  this->bExit = (atomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->Event->_padding_ + 0x10))();
  (**(code **)(this->Thread->_padding_ + 0x20))();
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->Event);
  this->Event = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d150

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
FVulkanTransientHeap::_scalar_deleting_destructor_(FVulkanTransientHeap *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FRHITransientHeap__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  VulkanRHI::FMemoryManager::FreeVulkanAllocation
            (&this->Device->MemoryManager,&this->InternalAllocation,EVulkanFreeFlag_None);
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&this->Device->DeferredDeletionQueue,Buffer,(ulong64)this->VulkanBuffer);
  this->VulkanBuffer = (VkBuffer_T *)0x0;
  this->HandleID = 0;
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->InternalAllocation);
  TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
            ((TRHITransientResourceCache<FRHITransientBuffer> *)&this->_padding_);
  TRHITransientResourceCache<FRHITransientTexture>::
  ~TRHITransientResourceCache<FRHITransientTexture>
            ((TRHITransientResourceCache<FRHITransientTexture> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d250

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
FVulkanTransientResourceAllocator::_scalar_deleting_destructor_
          (FVulkanTransientResourceAllocator *this,uint param_1)

{
  FRHITransientResourceHeapAllocator::~FRHITransientResourceHeapAllocator
            ((FRHITransientResourceHeapAllocator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d290

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
FVulkanUniformBuffer::_scalar_deleting_destructor_(FVulkanUniformBuffer *this,uint param_1)

{
  FRHIDescriptorHandle FVar1;
  
  this->_padding_ = (longlong)&___7FVulkanUniformBuffer__6B_;
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
    FVar1 = this->BindlessHandle;
    if ((FVar1.Index != 0xffffffff) && (FVar1.Type != Invalid)) {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,BindlessHandle,(ulong64)FVar1);
    }
  }
  VulkanRHI::FMemoryManager::FreeUniformBuffer(&this->Device->MemoryManager,&this->Allocation);
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->Allocation);
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d370

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

void * __thiscall
FVulkanUnorderedAccessView::_scalar_deleting_destructor_
          (FVulkanUnorderedAccessView *this,uint param_1)

{
  *(undefined ***)&this->field_0x30 = &___7FVulkanLinkedView__6B_;
  if (*(longlong *)&this->field_0x70 != 0) {
    *(undefined8 *)(*(longlong *)&this->field_0x70 + 0x48) = *(undefined8 *)&this->field_0x78;
  }
  if (*(undefined8 **)&this->field_0x78 != (undefined8 *)0x0) {
    **(undefined8 **)&this->field_0x78 = *(undefined8 *)&this->field_0x70;
  }
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  FVulkanView::~FVulkanView((FVulkanView *)&this->field_0x38);
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d400

void * __thiscall
FVulkanVertexDeclaration::_scalar_deleting_destructor_(FVulkanVertexDeclaration *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b9d440

void * __thiscall
IVulkanDynamicRHI::_scalar_deleting_destructor_(IVulkanDynamicRHI *this,uint param_1)

{
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AftermathLateAssociate @ 145b9ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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

void __cdecl AftermathLateAssociate(float param_1,uint param_2)

{
  uint *puVar1;
  ERHIResourceType EVar2;
  atomic<unsigned_int> aVar3;
  TRefCountPtr<FRHIResource> this;
  code *pcVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FVulkanRayTracingShader *pFVar10;
  ulonglong uVar11;
  TVulkanBaseShader<FRHIGeometryShader,4> *pTVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  TSparseSetElement<FRHIShader_const_*> *pTVar19;
  uint uVar20;
  TSparseSetElement<FRHIShader_const_*> *pTVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  undefined1 auVar26 [16];
  undefined1 auStackY_248 [32];
  <lambda_1> local_1f8 [8];
  TArray<FShaderPair,TSizedDefaultAllocator<32>_> local_1f0;
  int local_1e0;
  int local_1dc;
  TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> local_1d8;
  uint local_1c4;
  int local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  int local_168;
  undefined4 local_164;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  ulonglong local_150;
  FScriptContainerElement *local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  LARGE_INTEGER local_108;
  longlong local_100;
  FSparseArrayAllocationInfo local_f8;
  FSparseArrayAllocationInfo local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  LARGE_INTEGER *local_c0;
  LARGE_INTEGER local_b8;
  float local_b0;
  TArray<FShaderPair,TSizedDefaultAllocator<32>_> *local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  QueryPerformanceCounter(&local_160);
  local_140 = local_160;
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  auVar26._8_8_ = 0;
  auVar26._0_8_ = __real_416312d010000000;
  lVar14 = 0;
  local_6c = 0x80;
  auVar26 = roundpd(auVar26,auVar26,1);
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  QueryPerformanceCounter(&local_158);
  if ((longlong)auVar26._0_8_ == 0x7fffffffffffffff) {
    lVar14 = -1;
  }
  else {
    dVar5 = (double)(longlong)auVar26._0_8_ * __real_3e7ad7f29abcaf48;
    if (0.0 < dVar5) {
      dVar5 = dVar5 / FGenericPlatformTime::SecondsPerCycle64;
      lVar14 = 0;
      if ((__real_43e0000000000000 <= dVar5) &&
         (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
        lVar14 = -0x8000000000000000;
      }
      lVar14 = (longlong)dVar5 + lVar14;
    }
  }
  local_108 = local_158;
  local_100 = lVar14;
  PipelineStateCache::GetPipelineStates(&local_1d8,true,(FTimeout *)&local_108.s);
  uVar15 = (ulonglong)local_1d8.ArrayNum;
  local_1c4 = local_1d8.ArrayNum;
  local_148 = local_1d8.AllocatorInstance.Data + uVar15 * 8;
  FVar25.Data = local_1d8.AllocatorInstance.Data;
LAB_145b9e066:
  while( true ) {
    pFVar6 = local_148;
    pTVar19 = (TSparseSetElement<FRHIShader_const_*> *)0x0;
    if (local_1d8.ArrayNum != (int)uVar15) {
      local_1f8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TRefCountPtr<FRHIResource>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1f8);
    }
    if (FVar25.Data == pFVar6) {
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_a8 = &local_1f0;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`AftermathLateAssociate'::__l2::<lambda_1>,void,int>::Call;
      local_c0 = &local_b8;
      local_b8.s = local_140.s;
      local_d8.DataPtr = (void **)0x0;
      local_d8.ArrayNum = 0;
      local_b0 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_1f0.ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_c8,local_1f8[0],None,&local_d8);
      QueryPerformanceCounter(&local_138);
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      DestructItems<TRefCountPtr<FRHIResource>,int>
                ((TRefCountPtr<FRHIResource> *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FRHIShader_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FRHIShader_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FRHIShader_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      return;
    }
    this.Reference = *(FRHIResource **)FVar25.Data;
    if ((FVulkanRayTracingPipelineState *)this.Reference == (FVulkanRayTracingPipelineState *)0x0)
    goto LAB_145b9ed19;
    EVar2 = (this.Reference)->ResourceType;
    if (EVar2 == RRT_GraphicsPipelineState) break;
    if (EVar2 == RRT_ComputePipelineState) {
      uVar17 = *(uint *)&(((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                          &this.Reference[-2].OwnerName)->AllocatorInstance).Data;
      if ((GFrameNumberRenderThread < uVar17) || (GFrameNumberRenderThread - uVar17 <= param_2)) {
        uVar15 = this.Reference[1]._padding_;
        if (uVar15 == 0) goto LAB_145b9ed19;
        uVar17 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        if (local_98._8_4_ != local_64) {
          FVar16.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar16.Data = local_58.Data;
          }
          for (iVar8 = *(int *)((longlong)FVar16.Data +
                               (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4);
              iVar8 != -1; iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
            if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar8 * 0x10) == uVar15)
            goto LAB_145b9ed19;
          }
        }
        uStack_198 = uVar15 + 0x110;
        local_1a0 = uVar15;
        if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 <
             local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 0x10)) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = local_1f0.ArrayNum;
        if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
        }
        local_1f0.ArrayNum = iVar8 + 1;
        *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = local_1a0;
        *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = uStack_198;
        local_150 = uVar15;
        TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
        Emplace<FRHIShader_const_*>
                  ((TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                    *)local_98,(FRHIShader **)&local_170,(bool *)&local_150);
        uVar15 = (ulonglong)local_1c4;
        FVar25.Data = FVar25.Data + 8;
      }
      else {
        uVar15 = (ulonglong)local_1c4;
        FVar25.Data = FVar25.Data + 8;
      }
    }
    else {
      if (EVar2 != RRT_RayTracingPipelineState) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                           ,0x1d6,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      if ((GFrameNumberRenderThread <
           (uint)*(atomic<unsigned_int> *)((longlong)&this.Reference[9]._padding_ + 4)) ||
         (GFrameNumberRenderThread -
          (int)*(atomic<unsigned_int> *)((longlong)&this.Reference[9]._padding_ + 4) <= param_2)) {
        iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                          ((FVulkanRayTracingPipelineState *)this.Reference,
                           SF_NumStandardFrequencies);
        pTVar21 = pTVar19;
        if (0 < iVar8) {
          do {
            pFVar10 = FVulkanRayTracingPipelineState::GetVulkanShader
                                ((FVulkanRayTracingPipelineState *)this.Reference,
                                 SF_NumStandardFrequencies,(int)pTVar21);
            ConditionallyAddShader<FVulkanRayTracingShader>
                      (pFVar10,&local_1f0,
                       (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                        *)local_98);
            uVar17 = (int)pTVar21 + 1;
            iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                              ((FVulkanRayTracingPipelineState *)this.Reference,
                               SF_NumStandardFrequencies);
            pTVar21 = (TSparseSetElement<FRHIShader_const_*> *)(ulonglong)uVar17;
          } while ((int)uVar17 < iVar8);
        }
        iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                          ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayCallable);
        pTVar21 = pTVar19;
        if (0 < iVar8) {
          do {
            pFVar10 = FVulkanRayTracingPipelineState::GetVulkanShader
                                ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayCallable,
                                 (int)pTVar21);
            ConditionallyAddShader<FVulkanRayTracingShader>
                      (pFVar10,&local_1f0,
                       (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                        *)local_98);
            uVar17 = (int)pTVar21 + 1;
            pTVar21 = (TSparseSetElement<FRHIShader_const_*> *)(ulonglong)uVar17;
            iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                              ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayCallable);
          } while ((int)uVar17 < iVar8);
        }
        iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                          ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayHitGroup);
        pTVar21 = pTVar19;
        if (0 < iVar8) {
          do {
            pFVar10 = FVulkanRayTracingPipelineState::GetVulkanShader
                                ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayHitGroup,
                                 (int)pTVar21);
            ConditionallyAddShader<FVulkanRayTracingShader>
                      (pFVar10,&local_1f0,
                       (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                        *)local_98);
            uVar17 = (int)pTVar21 + 1;
            iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                              ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayHitGroup);
            pTVar21 = (TSparseSetElement<FRHIShader_const_*> *)(ulonglong)uVar17;
          } while ((int)uVar17 < iVar8);
        }
        iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                          ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayMiss);
        if (iVar8 < 1) goto LAB_145b9ed19;
        do {
          pFVar10 = FVulkanRayTracingPipelineState::GetVulkanShader
                              ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayMiss,
                               (int)pTVar19);
          ConditionallyAddShader<FVulkanRayTracingShader>
                    (pFVar10,&local_1f0,
                     (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                      *)local_98);
          uVar17 = (int)pTVar19 + 1;
          pTVar19 = (TSparseSetElement<FRHIShader_const_*> *)(ulonglong)uVar17;
          iVar8 = FVulkanRayTracingPipelineState::GetVulkanShaderNum
                            ((FVulkanRayTracingPipelineState *)this.Reference,SF_RayMiss);
        } while ((int)uVar17 < iVar8);
        uVar15 = (ulonglong)local_1c4;
        FVar25.Data = FVar25.Data + 8;
      }
      else {
        uVar15 = (ulonglong)local_1c4;
        FVar25.Data = FVar25.Data + 8;
      }
    }
  }
  aVar3 = this.Reference[0x34].AtomicFlags.Packed;
  if (((uint)aVar3 <= GFrameNumberRenderThread) && (param_2 < GFrameNumberRenderThread - (int)aVar3)
     ) {
    uVar15 = (ulonglong)local_1c4;
    FVar25.Data = FVar25.Data + 8;
    goto LAB_145b9e066;
  }
  uVar15 = (**(code **)((this.Reference)->_padding_ + 0x10))(this.Reference,0);
  if (uVar15 != 0) {
    uVar17 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (local_98._8_4_ != local_64) {
      FVar16.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar16.Data = local_58.Data;
      }
      for (iVar8 = *(int *)((longlong)FVar16.Data +
                           (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4); iVar8 != -1;
          iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar8 * 0x10) == uVar15) goto LAB_145b9e97e;
      }
    }
    uStack_188 = uVar15 + 0x108;
    local_190 = uVar15;
    if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
        ((FScriptContainerElement *)&local_190 <
         local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 0x10)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = local_1f0.ArrayNum;
    if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
    }
    local_1f0.ArrayNum = iVar8 + 1;
    *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = local_190;
    *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = uStack_188;
    if (local_64 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_78;
      }
      bVar13 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
      iVar9 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar9 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
      iVar8 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar9 * 0x10) = 0xffffffff;
      }
    }
    local_68 = iVar9;
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_f8,iVar8);
    if (local_f8.Pointer != (TSparseSetElement<FRHIShader_const_*> *)0x0) {
      *(ulonglong *)local_f8.Pointer = uVar15;
      *(undefined4 *)((longlong)local_f8.Pointer + 8) = 0xffffffff;
      pTVar19 = local_f8.Pointer;
    }
    local_1e0 = local_f8.Index;
    uVar17 = ((uint)(*(ulonglong *)pTVar19 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar19 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    bVar7 = TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
            TryReplaceExisting((TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                                *)local_98,uVar17,pTVar19,&local_1e0,(bool *)0x0);
    if (!bVar7) {
      uVar20 = 1;
      uVar18 = local_98._8_4_ - local_64;
      if (3 < uVar18) {
        uVar15 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_170._4_4_ = (undefined4)lVar14;
        uVar20 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar18 < 1) || ((int)uVar20 <= (int)local_50)) {
        uVar17 = local_50 - 1 & uVar17;
        *(uint *)&pTVar19->field_0xc = uVar17;
        FVar16.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)&pTVar19->field_0x8 = *(undefined4 *)((longlong)FVar16.Data + uVar15 * 4);
        *(int *)((longlong)FVar16.Data + uVar15 * 4) = local_1e0;
      }
      else {
        local_50 = uVar20;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar20 != 0) {
          uVar17 = uVar20;
          if (uVar20 < 2) {
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar17 = 0;
              goto LAB_145b9e73a;
            }
          }
          else {
LAB_145b9e73a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar17,4);
          }
          if (0 < (int)uVar20) {
            uVar23 = (ulonglong)uVar20;
            uVar15 = 0;
            do {
              FVar16.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar16.Data = local_58.Data;
              }
              uVar11 = uVar15 & (longlong)(int)uVar20 - 1U;
              uVar15 = uVar15 + 1;
              *(undefined4 *)((longlong)FVar16.Data + uVar11 * 4) = 0xffffffff;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_1c0 = 0;
          uStack_1bc = 1;
          iStack_1ac = 0;
          iStack_1a8 = 0;
          if (local_70 != 0) {
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_78;
            }
            uVar17 = *(uint *)FVar22;
            while (uVar17 == 0) {
              iStack_1a8 = iStack_1a8 + 0x20;
              lVar14 = (longlong)local_1c0;
              local_1c0 = local_1c0 + 1;
              if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c0)
              goto LAB_145b9e86d;
              uVar17 = ((uint *)((longlong)FVar22 + 4))[lVar14];
            }
            uStack_1bc = -uVar17 & uVar17;
            uVar15 = (ulonglong)uStack_1bc * 2 + 1;
            lVar14 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_168 = (int)lVar14;
            iStack_1ac = iStack_1a8 + -1 + local_168;
            if (local_70 < iStack_1ac) {
LAB_145b9e86d:
              iStack_1ac = local_70;
            }
          }
          local_1b0 = 0xffffffff;
          local_130 = (longlong *)local_98;
          local_128._padding_ = CONCAT44(uStack_1bc,local_1c0);
          local_128.CurrentBitIndex = iStack_1ac;
          local_128.UnvisitedBitMask = 0xffffffff;
          local_128._28_4_ = uStack_1a4;
          local_128.BaseBitIndex = iStack_1a8;
          local_128.Array = pTStack_1b8;
          iVar8 = iStack_1ac;
          if (iStack_1ac < local_70) {
            do {
              lVar14 = *local_130;
              lVar24 = (longlong)iVar8;
              uVar15 = *(ulonglong *)(lVar14 + lVar24 * 0x10);
              uVar17 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
              uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
              uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_50 - 1;
              *(uint *)(lVar14 + 0xc + lVar24 * 0x10) = uVar17;
              FVar16.Data = (FScriptContainerElement *)local_60;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar16.Data = local_58.Data;
              }
              uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(lVar14 + 8 + lVar24 * 0x10) =
                   *(undefined4 *)((longlong)FVar16.Data + uVar15 * 4);
              *(int *)((longlong)FVar16.Data + uVar15 * 4) = iVar8;
              local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
              iVar8 = local_128.CurrentBitIndex;
            } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
          }
        }
      }
    }
  }
LAB_145b9e97e:
  pTVar19 = (TSparseSetElement<FRHIShader_const_*> *)0x0;
  pTVar12 = (TVulkanBaseShader<FRHIGeometryShader,4> *)
            (**(code **)((this.Reference)->_padding_ + 0x10))(this.Reference,4);
  ConditionallyAddShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
            (pTVar12,&local_1f0,
             (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator> *)
             local_98);
  pTVar12 = (TVulkanBaseShader<FRHIGeometryShader,4> *)
            (**(code **)((this.Reference)->_padding_ + 0x10))(this.Reference,2);
  ConditionallyAddShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
            (pTVar12,&local_1f0,
             (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator> *)
             local_98);
  pTVar12 = (TVulkanBaseShader<FRHIGeometryShader,4> *)
            (**(code **)((this.Reference)->_padding_ + 0x10))(this.Reference,1);
  ConditionallyAddShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
            (pTVar12,&local_1f0,
             (TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator> *)
             local_98);
  uVar15 = (**(code **)((this.Reference)->_padding_ + 0x10))(this.Reference);
  if (uVar15 != 0) {
    uVar17 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (local_98._8_4_ != local_64) {
      FVar16.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar16.Data = local_58.Data;
      }
      for (iVar8 = *(int *)((longlong)FVar16.Data +
                           (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4); iVar8 != -1;
          iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar8 * 0x10) == uVar15) goto LAB_145b9ed19;
      }
    }
    uStack_178 = uVar15 + 0x108;
    local_180 = uVar15;
    if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 0x10)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = local_1f0.ArrayNum;
    if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
    }
    local_1f0.ArrayNum = iVar8 + 1;
    *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10) = local_180;
    *(ulonglong *)(local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = uStack_178;
    if (local_64 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_78;
      }
      bVar13 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
      iVar9 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar9 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
      iVar8 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar9 * 0x10) = 0xffffffff;
      }
    }
    local_68 = iVar9;
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_e8,iVar8);
    if (local_e8.Pointer != (TSparseSetElement<FRHIShader_const_*> *)0x0) {
      *(ulonglong *)local_e8.Pointer = uVar15;
      *(undefined4 *)((longlong)local_e8.Pointer + 8) = 0xffffffff;
      pTVar19 = local_e8.Pointer;
    }
    local_1dc = local_e8.Index;
    uVar17 = ((uint)(*(ulonglong *)pTVar19 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pTVar19 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    bVar7 = TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::
            TryReplaceExisting((TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                                *)local_98,uVar17,pTVar19,&local_1dc,(bool *)0x0);
    if (!bVar7) {
      uVar18 = local_98._8_4_ - local_64;
      if (uVar18 < 4) {
        uVar20 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_164 = (undefined4)lVar14;
        uVar20 = 1 << ((byte)lVar14 & 0x1f);
      }
      if ((0 < (int)uVar18) && ((int)local_50 < (int)uVar20)) {
        local_50 = uVar20;
        TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<FRHIShader_const_*,DefaultKeyFuncs<FRHIShader_const_*,0>,FDefaultSetAllocator>
                    *)local_98);
        uVar15 = (ulonglong)local_1c4;
        FVar25.Data = FVar25.Data + 8;
        goto LAB_145b9e066;
      }
      uVar17 = local_50 - 1 & uVar17;
      *(uint *)&pTVar19->field_0xc = uVar17;
      FVar16.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar16.Data = local_58.Data;
      }
      uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
      *(undefined4 *)&pTVar19->field_0x8 = *(undefined4 *)((longlong)FVar16.Data + uVar15 * 4);
      *(int *)((longlong)FVar16.Data + uVar15 * 4) = local_1dc;
    }
  }
LAB_145b9ed19:
  uVar15 = (ulonglong)local_1c4;
  FVar25.Data = FVar25.Data + 8;
  goto LAB_145b9e066;
}

// CheckVulkanProfile @ 145ba0100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __cdecl CheckVulkanProfile(Type param_1,bool param_2)

{
  bool bVar1;
  VkResult VVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  VkPhysicalDevice_T *pVVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_288 [32];
  uint local_258 [2];
  VkInstance_T *local_250;
  uint local_248 [2];
  FString local_240;
  VpInstanceCreateInfo local_230;
  VkInstanceCreateInfo local_208;
  VpProfileProperties local_1c8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  FVulkanGenericPlatform::GetVulkanProfileNameForFeatureLevel(&local_240,param_1,param_2);
  bVar1 = FVulkanGenericPlatform::SupportsProfileChecks();
  if (!bVar1) {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    bVar1 = true;
    goto LAB_145ba037f;
  }
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  memset(&local_1c8,0,0x104);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_240.Data.ArrayNum != 0) {
    FVar5.Data = local_240.Data.AllocatorInstance.Data;
  }
  pTVar3 = StringCast<char,128,wchar_t>(&local_b8,(wchar_t *)FVar5.Data);
  strncpy(local_1c8.profileName,pTVar3->Ptr,0x100);
  local_1c8.profileName[0xff] = '\0';
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  bVar1 = false;
  local_258[0] = 0;
  local_248[0] = 0;
  VVar2 = vpGetInstanceProfileVariantsSupport
                    ((char *)0x0,&local_1c8,local_258,local_248,(VpBlockProperties *)0x0);
  if ((VVar2 == VK_SUCCESS) && (local_258[0] != 0)) {
    local_208.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    local_208._52_8_ = 0;
    local_208.ppEnabledExtensionNames._4_4_ = 0;
    local_230.pEnabledFullProfiles = &local_1c8;
    local_230.flags = 0;
    local_230.pCreateInfo = &local_208;
    local_230.enabledFullProfileCount = 1;
    local_208._4_8_ = 0;
    local_208._12_8_ = 0;
    local_250 = (VkInstance_T *)0x0;
    local_208._20_8_ = 0;
    local_208._28_8_ = 0;
    local_208._36_8_ = 0;
    local_208._44_8_ = 0;
    local_230.enabledProfileBlockCount = 0;
    local_230._28_4_ = 0;
    local_230.pEnabledProfileBlocks = (VpBlockProperties *)0x0;
    VVar2 = vpCreateInstance(&local_230,&VulkanRHI::GAllocationCallbacks,&local_250);
    if (VVar2 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar2,
                 "vpCreateInstance(&ProfileInstanceCreateInfo, VULKAN_CPU_ALLOCATOR, &TempInstance)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                 ,0x13c);
    }
    FVulkanGenericPlatform::LoadVulkanInstanceFunctions(local_250);
    pVVar4 = SelectPhysicalDevice(local_250);
    if (pVVar4 != (VkPhysicalDevice_T *)0x0) {
      local_258[0] = 0;
      local_248[0] = 0;
      VVar2 = vpGetPhysicalDeviceProfileVariantsSupport
                        (local_250,pVVar4,&local_1c8,local_258,local_248,(VpBlockProperties *)0x0);
      if (VVar2 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar2,
                   "vpGetPhysicalDeviceProfileSupport(TempInstance, PhysicalDevice, &ProfileProperties, &bDeviceSupported)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                   ,0x151);
      }
      if (local_258[0] != 0) {
        if (local_250 != (VkInstance_T *)0x0) {
          (*VulkanDynamicAPI::vkDestroyInstance)(local_250,&VulkanRHI::GAllocationCallbacks);
          local_250 = (VkInstance_T *)0x0;
          FVulkanGenericPlatform::ClearVulkanInstanceFunctions();
        }
        bVar1 = true;
        goto LAB_145ba0363;
      }
    }
    if (local_250 != (VkInstance_T *)0x0) {
      (*VulkanDynamicAPI::vkDestroyInstance)(local_250,&VulkanRHI::GAllocationCallbacks);
      local_250 = (VkInstance_T *)0x0;
      FVulkanGenericPlatform::ClearVulkanInstanceFunctions();
      bVar1 = false;
    }
  }
LAB_145ba0363:
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Vulkan_Profile__1510d3390,
               (FLogCategoryBase *)&LogVulkanRHI);
  }
LAB_145ba037f:
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// CompareOpToVulkan @ 145ba1340

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

VkCompareOp __cdecl CompareOpToVulkan(ECompareFunction param_1)

{
  code *pcVar1;
  bool bVar2;
  VkCompareOp VVar3;
  
  switch(param_1) {
  case CF_DepthFarther:
    return VK_COMPARE_OP_LESS;
  case CF_DepthFartherOrEqual:
    return VK_COMPARE_OP_LESS_OR_EQUAL;
  case CF_DepthNear:
    return VK_COMPARE_OP_GREATER;
  case CF_DepthNearOrEqual:
    return VK_COMPARE_OP_GREATER_OR_EQUAL;
  case CF_Equal:
    return VK_COMPARE_OP_EQUAL;
  case CF_NotEqual:
    return VK_COMPARE_OP_NOT_EQUAL;
  case CF_Never:
    return VK_COMPARE_OP_NEVER;
  case CF_Always:
    return VK_COMPARE_OP_ALWAYS;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                     ,0x8c,L"Unknown ECompareFunction %d");
  if (!bVar2) {
    return VK_COMPARE_OP_MAX_ENUM;
  }
  pcVar1 = (code *)swi(3);
  VVar3 = (*pcVar1)();
  return VVar3;
}

// CreateBuffer @ 145ba3da0

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

VkBuffer_T * __cdecl
VulkanRHI::CreateBuffer
          (FVulkanDevice *param_1,ulong64 param_2,uint param_3,VkMemoryRequirements *param_4)

{
  VkDevice_T *pVVar1;
  VkResult VVar2;
  VkBuffer_T *local_res8;
  VkBufferCreateInfo local_48;
  
  pVVar1 = param_1->Device;
  local_res8 = (VkBuffer_T *)0x0;
  local_48._20_4_ = 0;
  local_48.pQueueFamilyIndices._4_4_ = 0;
  local_48.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  local_48._4_8_ = 0;
  local_48._12_8_ = 0;
  local_48.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  local_48.queueFamilyIndexCount = 0;
  local_48._44_8_ = 0;
  local_48.usage = param_3;
  local_48.size = param_2;
  VVar2 = (*VulkanDynamicAPI::vkCreateBuffer)(pVVar1,&local_48,&GAllocationCallbacks,&local_res8);
  if ((int)VVar2 < 0) {
    VerifyVulkanResult(VVar2,
                       "VulkanRHI::vkCreateBuffer(Device, &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &Buffer)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x2de);
  }
  (*VulkanDynamicAPI::vkGetBufferMemoryRequirements)(pVVar1,local_res8,param_4);
  return local_res8;
}

// CreatePixelShaderLibrary @ 145ba4e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkPipeline_T * __cdecl CreatePixelShaderLibrary(FVulkanDevice *param_1,FVulkanShader *param_2)

{
  FName FVar1;
  VkPipelineLayout_T *pVVar2;
  VkResult VVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs> FVar5;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  undefined1 auStackY_2f8 [32];
  FName local_298;
  VkPipeline_T *local_290;
  FSpirvCode local_288;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 *puStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  VkPipelineDynamicStateCreateInfo local_250;
  VkPipelineShaderStageCreateInfo local_230;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined4 local_1b4;
  VkGraphicsPipelineCreateInfo local_1a8;
  VkPipelineMultisampleStateCreateInfo local_118;
  VkPipelineDepthStencilStateCreateInfo local_e8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50 [24];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FVar5 = StatPtr_STAT_VulkanNumPSLibs;
  if (StatPtr_STAT_VulkanNumPSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)0x0) {
    pFVar4 = FName::FName(&local_298,"STAT_VulkanNumPSLibs");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSLibs,*pFVar4,
                       L"Num PS Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
                       L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
  local_298 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_288.CodeView._12_4_ = FVar1.Number & 0xffffafff | 0xa000;
    local_288.CodeView.DataPtr = (uint *)0x1;
    local_298 = FVar1;
    local_288.CodeView.ArrayNum = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,(FStatMessage *)&local_288);
    FStatsTrace::Add(&local_298,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  local_200 = 0x10;
  uStack_1dc = 0;
  local_1fc = 0;
  uStack_1f4 = 0;
  local_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  FVulkanShader::GetSpirvCode(&local_288,&param_2->SpirvContainer);
  if (local_288.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.UncompressedCode.AllocatorInstance.Data);
  }
  uStack_1e8 = (undefined4)((longlong)local_288.CodeView.ArrayNum << 2);
  uStack_1e4 = (undefined4)((ulonglong)((longlong)local_288.CodeView.ArrayNum << 2) >> 0x20);
  uStack_1e0 = SUB84(local_288.CodeView.DataPtr,0);
  uStack_1dc = (undefined4)((ulonglong)local_288.CodeView.DataPtr >> 0x20);
  local_1b4 = 0;
  local_264 = 0;
  local_268 = 0x3b9fac02;
  local_1d4 = 0;
  uStack_1cc = 0;
  puStack_260 = &local_1d8;
  local_230.pName._4_4_ = 0;
  local_230.pSpecializationInfo._0_4_ = 0;
  local_230.pSpecializationInfo._4_4_ = 0;
  local_230.pNext = &local_200;
  uStack_258 = 4;
  uStack_254 = 0;
  local_1d8 = 0x3b9b75e2;
  local_230.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  local_230._4_4_ = 0;
  local_230.flags = 0;
  local_230.module._4_4_ = 0;
  local_230.pName._0_4_ = 0;
  local_230._20_8_ = 0x10;
  local_1c4 = 0;
  uStack_1bc = 0;
  TCString<char>::SnprintfImpl(local_50,0x18,"main_%0.8x_%0.8x");
  local_230.pName = local_50;
  local_58 = 0x3ba1bb5d;
  local_68 = ___xmm_3b9edcff3b9edd013b9edcfe3b9edd00;
  uStack_60 = _UNK_1510ccab8;
  local_54 = 0x3ba1bb5f;
  local_250.pDynamicStates = (VkDynamicState *)&local_78;
  local_250.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  local_118._36_8_ = 0;
  local_118.alphaToOneEnable = 0;
  local_e8.maxDepthBounds = 0.0;
  local_1a8._132_8_ = 0;
  local_1a8._140_4_ = 0;
  local_1a8.pNext = &local_268;
  local_1a8._4_4_ = 0;
  local_1a8.flags = 0x20000800;
  if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
    local_1a8.flags = 0x20800800;
  }
  local_250.dynamicStateCount = 10;
  local_1a8.pVertexInputState._0_4_ = 0;
  local_1a8.pStages = &local_230;
  local_1a8.pRasterizationState._4_4_ = 0;
  local_1a8.pMultisampleState = &local_118;
  local_118.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  local_1a8.pDepthStencilState = &local_e8;
  local_1a8.pColorBlendState._0_4_ = 0;
  local_1a8.pColorBlendState._4_4_ = 0;
  local_1a8.renderPass._0_4_ = 0;
  local_e8.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
  local_78 = ___xmm_3b9edd033b9edd020000000500000008;
  uStack_70 = _UNK_1510ccac8;
  local_1a8.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_1a8.stageCount = 1;
  local_250._4_8_ = 0;
  local_250._12_8_ = 0;
  local_118._4_8_ = 0;
  local_118._12_8_ = 0;
  local_118.rasterizationSamples = 0;
  local_118.sampleShadingEnable = 0;
  local_118._28_8_ = 0;
  local_e8._4_8_ = 0;
  local_e8._12_8_ = 0;
  local_e8.depthTestEnable = 0;
  local_e8.depthWriteEnable = 0;
  local_e8.depthCompareOp = VK_COMPARE_OP_NEVER;
  local_e8.depthBoundsTestEnable = 0;
  local_e8.stencilTestEnable = 0;
  local_e8.front.failOp = VK_STENCIL_OP_KEEP;
  local_e8.front.passOp = VK_STENCIL_OP_KEEP;
  local_e8.front.depthFailOp = VK_STENCIL_OP_KEEP;
  local_e8.front.compareOp = VK_COMPARE_OP_NEVER;
  local_e8.front.compareMask = 0;
  local_e8.front.writeMask = 0;
  local_e8.front.reference = 0;
  local_e8.back.failOp = VK_STENCIL_OP_KEEP;
  local_e8.back.passOp = VK_STENCIL_OP_KEEP;
  local_e8.back.depthFailOp = VK_STENCIL_OP_KEEP;
  local_e8.back.compareOp = VK_COMPARE_OP_NEVER;
  local_e8.back.compareMask = 0;
  local_e8.back.writeMask = 0;
  local_e8.back.reference = 0;
  local_e8.minDepthBounds = 0.0;
  local_1a8._36_8_ = 0;
  local_1a8._44_8_ = 0;
  local_1a8._52_8_ = 0;
  local_1a8._60_8_ = 0;
  local_1a8._116_8_ = 0;
  local_1a8._124_8_ = 0;
  pVVar2 = param_1->BindlessDescriptorManager->BindlessPipelineLayout;
  local_1a8.pDynamicState = &local_250;
  local_1a8.layout._0_4_ = SUB84(pVVar2,0);
  local_1a8.layout._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  local_290 = (VkPipeline_T *)0x0;
  VVar3 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                    (param_1->Device,(VkPipelineCache_T *)0x0,1,&local_1a8,
                     &VulkanRHI::GAllocationCallbacks,&local_290);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,
               "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &PipelineLibrary)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
               ,0xcf);
  }
  return local_290;
}

// CreatePreRasterShaderLibrary @ 145ba52c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkPipeline_T * __cdecl
CreatePreRasterShaderLibrary
          (FVulkanDevice *param_1,FVulkanShader *param_2,VkShaderStageFlagBits param_3)

{
  FName FVar1;
  VkPipelineLayout_T *pVVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs> FVar7;
  FThreadStats *this;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs> FVar9;
  VkPipeline_T *pVVar10;
  undefined1 auStackY_2a8 [32];
  FName local_248;
  VkPipeline_T *local_240;
  FName local_238;
  FStatMessage local_230;
  FStatMessage local_220;
  VkPipelineDynamicStateCreateInfo local_210;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  VkPipelineShaderStageCreateInfo local_1d8;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  VkPipelineRasterizationStateCreateInfo local_178;
  VkGraphicsPipelineCreateInfo local_138;
  FName local_a8;
  FName local_a0;
  FSpirvCode local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_3 == VK_SHADER_STAGE_VERTEX_BIT) {
    FVar7 = StatPtr_STAT_VulkanNumVSLibs;
    if (StatPtr_STAT_VulkanNumVSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs>)0x0) {
      pFVar6 = FName::FName(&local_a8,"STAT_VulkanNumVSLibs");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumVSLibs>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumVSLibs,*pFVar6,
                         L"Num VS Libraries","STATGROUP_VulkanGraphicPipelineLibs",
                         "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64
                         ,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    local_248 = FVar1;
    if (((FVar1 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145ba55b2;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_230.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_230.StatData.Pad[0] = '\x01';
    local_230.StatData.Pad[1] = '\0';
    local_230.StatData.Pad[2] = '\0';
    local_230.StatData.Pad[3] = '\0';
    local_230.StatData.Pad[4] = '\0';
    local_230.StatData.Pad[5] = '\0';
    local_230.StatData.Pad[6] = '\0';
    local_230.StatData.Pad[7] = '\0';
    local_248 = FVar1;
    local_230.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_230);
    FStatsTrace::Add(&local_248,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
      goto LAB_145ba55b2;
    }
  }
  else {
    if (param_3 != VK_SHADER_STAGE_MESH_BIT_EXT) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pVVar10 = (VkPipeline_T *)(*pcVar3)();
        return pVVar10;
      }
      goto LAB_145ba55b2;
    }
    FVar9 = StatPtr_STAT_VulkanNumMSLibs;
    if (StatPtr_STAT_VulkanNumMSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)0x0) {
      pFVar6 = FName::FName(&local_a0,"STAT_VulkanNumMSLibs");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumMSLibs>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumMSLibs,*pFVar6,
                         L"Num MS Libraries","STATGROUP_VulkanGraphicPipelineLibs",
                         "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64
                         ,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar9;
    local_248 = FVar1;
    if (((FVar1 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145ba55b2;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_220.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_220.StatData.Pad[0] = '\x01';
    local_220.StatData.Pad[1] = '\0';
    local_220.StatData.Pad[2] = '\0';
    local_220.StatData.Pad[3] = '\0';
    local_220.StatData.Pad[4] = '\0';
    local_220.StatData.Pad[5] = '\0';
    local_220.StatData.Pad[6] = '\0';
    local_220.StatData.Pad[7] = '\0';
    local_238 = FVar1;
    local_220.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_220);
    FStatsTrace::Add(&local_238,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
      goto LAB_145ba55b2;
    }
  }
  if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this,false,false);
  }
LAB_145ba55b2:
  local_1a8 = 0x10;
  uStack_184 = 0;
  local_1a4 = 0;
  uStack_19c = 0;
  local_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  FVulkanShader::GetSpirvCode(&local_98,&param_2->SpirvContainer);
  if (local_98.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.UncompressedCode.AllocatorInstance.Data);
  }
  uStack_190 = (undefined4)((longlong)local_98.CodeView.ArrayNum << 2);
  uStack_18c = (undefined4)((ulonglong)((longlong)local_98.CodeView.ArrayNum << 2) >> 0x20);
  uStack_188 = SUB84(local_98.CodeView.DataPtr,0);
  uStack_184 = (undefined4)((ulonglong)local_98.CodeView.DataPtr >> 0x20);
  local_1d8.pName._4_4_ = 0;
  local_1d8.pSpecializationInfo._0_4_ = 0;
  local_1d8.pSpecializationInfo._4_4_ = 0;
  local_1f0 = 0x3b9fac02;
  local_1d8.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  local_1d8._4_4_ = 0;
  local_1d8.flags = 0;
  local_1d8.module._4_4_ = 0;
  local_1d8.pName._0_4_ = 0;
  local_1d8.module._0_4_ = 0;
  local_1d8.stage = param_3;
  local_1ec = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 2;
  uStack_1dc = 0;
  local_1d8.pNext = &local_1a8;
  TCString<char>::SnprintfImpl(local_60,0x18,"main_%0.8x_%0.8x");
  local_1d8.pName = local_60;
  local_68 = 0x3ba08aaa;
  local_138._4_4_ = 0;
  local_210.pDynamicStates = (VkDynamicState *)&local_78;
  local_64 = 0x3ba1bb5c;
  local_178.depthBiasSlopeFactor = 0.0;
  local_138._132_8_ = 0;
  local_138._140_4_ = 0;
  local_138.pNext = &local_1f0;
  local_138.flags = 0x20000800;
  if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
    local_138.flags = 0x20800800;
  }
  local_210.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  local_138.pVertexInputState._0_4_ = 0;
  local_138.pStages = &local_1d8;
  local_138.renderPass._0_4_ = 0;
  local_210.dynamicStateCount = 6;
  local_78 = ___xmm_3b9edcfc3b9edcfb3b9edcf800000003;
  uStack_70 = _UNK_1510dbe18;
  local_178.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
  local_178.lineWidth = 1.0;
  local_178._60_4_ = 0;
  local_178.depthBiasConstantFactor = 0.0;
  local_178.depthBiasClamp = 0.0;
  local_178.frontFace = VK_FRONT_FACE_CLOCKWISE;
  local_178.depthBiasEnable = 0;
  local_138._52_8_ = 0;
  local_138.pViewportState._4_4_ = 0;
  local_138.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_138.pMultisampleState._0_4_ = 0;
  local_138._76_8_ = 0;
  local_138.stageCount = 1;
  local_138._84_8_ = 0;
  local_138.pColorBlendState._4_4_ = 0;
  local_210._4_8_ = 0;
  local_210._12_8_ = 0;
  local_178._4_8_ = 0;
  local_178._12_8_ = 0;
  local_178.depthClampEnable = 0;
  local_178.rasterizerDiscardEnable = 0;
  local_178.polygonMode = VK_POLYGON_MODE_FILL;
  local_178.cullMode = 0;
  local_138._36_8_ = 0;
  local_138._44_8_ = 0;
  local_138._116_8_ = 0;
  local_138._124_8_ = 0;
  pVVar2 = param_1->BindlessDescriptorManager->BindlessPipelineLayout;
  local_138.pDynamicState = &local_210;
  local_138.pRasterizationState = &local_178;
  local_138.layout._0_4_ = SUB84(pVVar2,0);
  local_138.layout._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  local_240 = (VkPipeline_T *)0x0;
  VVar5 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                    (param_1->Device,(VkPipelineCache_T *)0x0,1,&local_138,
                     &VulkanRHI::GAllocationCallbacks,&local_240);
  if (VVar5 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar5,
               "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &PipelineLibrary)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
               ,0x83);
  }
  return local_240;
}

// CreateShaderModule @ 145ba5850

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
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FVulkanShaderModule> __cdecl
CreateShaderModule(FVulkanDevice *param_1,FSpirvCode *param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule> FVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FVulkanSamplerState *pFVar8;
  TRefCountPtr<FVulkanShaderModule> TVar9;
  longlong lVar10;
  undefined4 *in_R8;
  FName local_res8;
  VkShaderModule_T *local_res10;
  FName local_res18;
  FStatMessage local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  VkShaderModuleCreateInfo local_50;
  
  FVar7 = StatPtr_STAT_VulkanNumShaderModule;
  if (StatPtr_STAT_VulkanNumShaderModule ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)0x0) {
    pFVar6 = FName::FName(&local_res18,"STAT_VulkanNumShaderModule");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumShaderModule,*pFVar6,
                       L"Num Shader Modules","STATGROUP_VulkanGraphicPipelineLibs",
                       "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,
                       false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_88.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_88.StatData.Pad[0] = '\x01';
    local_88.StatData.Pad[1] = '\0';
    local_88.StatData.Pad[2] = '\0';
    local_88.StatData.Pad[3] = '\0';
    local_88.StatData.Pad[4] = '\0';
    local_88.StatData.Pad[5] = '\0';
    local_88.StatData.Pad[6] = '\0';
    local_88.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_88.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_88);
    FStatsTrace::Add(&local_res8,1);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  local_78 = *in_R8;
  uStack_74 = in_R8[1];
  uStack_70 = in_R8[2];
  uStack_6c = in_R8[3];
  local_50._20_4_ = 0;
  lVar10 = (longlong)(int)*(undefined8 *)(in_R8 + 2) << 2;
  local_50.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
  local_50._4_4_ = 0;
  local_50.pNext = (undefined4 *)0x0;
  local_50.flags = 0;
  local_50.codeSize._0_4_ = (undefined4)lVar10;
  local_50.codeSize._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  if (((ulonglong)param_2[0x10f].CodeView.DataPtr & 1) != 0) {
    pFVar2 = param_2[0x138].UncompressedCode.AllocatorInstance.Data;
    local_64 = 0;
    uStack_5c = 0;
    uStack_58 = SUB84(pFVar2,0);
    uStack_54 = (undefined4)((ulonglong)pFVar2 >> 0x20);
    local_50.pNext = &local_68;
    local_68 = 0x3b9d3b01;
  }
  local_50.pCode._0_4_ = local_78;
  local_50.pCode._4_4_ = uStack_74;
  VVar5 = (*VulkanDynamicAPI::vkCreateShaderModule)
                    ((VkDevice_T *)param_2[1].UncompressedCode.AllocatorInstance.Data,&local_50,
                     &VulkanRHI::GAllocationCallbacks,&local_res10);
  if (VVar5 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar5,
               "VulkanRHI::vkCreateShaderModule(Device->GetHandle(), &ModuleCreateInfo, VULKAN_CPU_ALLOCATOR, &ShaderModule)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
               ,0x1ff);
  }
  pFVar8 = operator_new(0x18);
  if (pFVar8 == (FVulkanSamplerState *)0x0) {
    (param_1->GlobalSamplers).Elements[0] = (FVulkanSamplerState *)0x0;
    return (TRefCountPtr<FVulkanShaderModule>)(FVulkanShaderModule *)param_1;
  }
  *(undefined4 *)&pFVar8->_padding_ = 0;
  pFVar8->_padding_ = (longlong)&___7FVulkanShaderModule__6B_;
  pFVar8->_padding_ = (longlong)local_res10;
  if ((FVulkanShaderModule::Device != (FVulkanDevice *)param_2) &&
     (FVulkanShaderModule::Device != (FVulkanDevice *)0x0)) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("DeviceIn && (Device == DeviceIn || !Device)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,100,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar9.Reference = (FVulkanShaderModule *)(*pcVar3)();
      return (TRefCountPtr<FVulkanShaderModule>)TVar9.Reference;
    }
  }
  FVulkanShaderModule::Device = (FVulkanDevice *)param_2;
  (param_1->GlobalSamplers).Elements[0] = pFVar8;
  LOCK();
  *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
  UNLOCK();
  return (TRefCountPtr<FVulkanShaderModule>)(FVulkanShaderModule *)param_1;
}

// CreateTextureViewDesc @ 145ba5d50

/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanTextureViewDesc * __cdecl
CreateTextureViewDesc
          (FVulkanTextureViewDesc *__return_storage_ptr__,FVulkanTexture *param_1,uint param_2,
          VkSamplerYcbcrConversion_T *param_3)

{
  byte bVar1;
  bool bVar2;
  VkImageViewType VVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  
  pbVar5 = (byte *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  lVar6 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (((GPixelFormats[*(byte *)(lVar6 + 0x33)].Capabilities & TextureSample) == None) ||
     (bVar7 = true, (param_1->ImageUsageFlags & 4) == 0)) {
    bVar7 = false;
  }
  if ((pbVar5[0x34] == 0) || (pbVar5[0x34] == pbVar5[0x33])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*pbVar5 & 0x10) != 0) ||
     ((bVar2 && ((GPixelFormats[pbVar5[0x33]].Capabilities & UAV) == None)))) {
    param_2 = param_2 & 0xfffffff7;
  }
  if ((bVar7) && (param_1->ViewFormat != VK_FORMAT_UNDEFINED)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  lVar6 = param_1->_padding_;
  __return_storage_ptr__->ViewType = VK_IMAGE_VIEW_TYPE_MAX_ENUM;
  __return_storage_ptr__->AspectFlags = 0;
  __return_storage_ptr__->UEFormat = PF_Unknown;
  __return_storage_ptr__->Format = VK_FORMAT_UNDEFINED;
  __return_storage_ptr__->FirstMip = 0;
  __return_storage_ptr__->NumMips = 0xffffffff;
  __return_storage_ptr__->ArraySliceIndex = 0;
  __return_storage_ptr__->NumArraySlices = 0xffffffff;
  __return_storage_ptr__->ImageUsageFlags = 0;
  __return_storage_ptr__->SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
  __return_storage_ptr__->bUseIdentitySwizzle = false;
  lVar6 = (**(code **)(lVar6 + 0x20))(param_1);
  VVar3 = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar6 + 0x32));
  __return_storage_ptr__->ViewType = VVar3;
  __return_storage_ptr__->AspectFlags = param_1->FullAspectMask;
  __return_storage_ptr__->UEFormat = pbVar5[0x33];
  __return_storage_ptr__->Format = param_1->ViewFormat;
  bVar1 = pbVar5[0x30];
  __return_storage_ptr__->FirstMip = 0;
  __return_storage_ptr__->ArraySliceIndex = 0;
  bVar8 = 1;
  if (1 < bVar1) {
    bVar8 = bVar1;
  }
  __return_storage_ptr__->NumMips = (uint)bVar8;
  uVar4 = FVulkanTexture::GetNumberOfArrayLevels(param_1);
  __return_storage_ptr__->NumArraySlices = uVar4;
  __return_storage_ptr__->bUseIdentitySwizzle = bVar7;
  __return_storage_ptr__->ImageUsageFlags = param_2;
  __return_storage_ptr__->SamplerYcbcrConversion = param_3;
  return __return_storage_ptr__;
}

// DoAsyncReallocateTexture2D @ 145ba67f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
DoAsyncReallocateTexture2D
          (FVulkanContextCommon *param_1,FVulkanTexture *param_2,FVulkanTexture *param_3,int param_4
          ,int param_5,int param_6,FThreadSafeCounter *param_7)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FVulkanCommandBuffer *pFVar7;
  uint *puVar8;
  VkImageSubresourceRange *pVVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_748 [32];
  FLLMScope local_704;
  FVulkanCommandBuffer *local_700;
  VkCommandBuffer_T *local_6f8;
  FMemScope local_6f0;
  VkImageSubresourceRange local_6e8;
  VkImageSubresourceRange local_6d0;
  VkImageSubresourceRange local_6b8;
  VkImageSubresourceRange local_6a0;
  FVulkanPipelineBarrier local_688;
  FVulkanPipelineBarrier local_568;
  VkImageCopy local_448 [15];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  FLLMScope::FLLMScope(&local_704,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_6f0,VideoRecording|ThreadStackPlatform,true);
  lVar6 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  bVar1 = *(byte *)(lVar6 + 0x30);
  lVar6 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (*(byte *)(lVar6 + 0x30) < bVar1) {
    bVar1 = *(byte *)(lVar6 + 0x30);
  }
  uVar3 = (uint)bVar1;
  lVar6 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar5 = *(byte *)(lVar6 + 0x30) - uVar3;
  lVar6 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  uVar15 = *(byte *)(lVar6 + 0x30) - uVar3;
  pFVar7 = FVulkanContextCommon::GetCommandBuffer(param_1);
  local_700 = pFVar7;
  if ((pFVar7->State != IsInsideBegin) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044822>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x62a,"CommandBuffer.IsOutsideRenderPass()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_6f8 = pFVar7->CommandBufferHandle;
  if ((0xf < uVar3) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumSharedMips <= MAX_TEXTURE_MIP_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x62f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = (ulonglong)uVar3;
  memset(local_448,0,uVar12 * 0x44);
  if (uVar3 != 0) {
    puVar8 = &local_448[0].srcSubresource.mipLevel;
    uVar14 = uVar15;
    do {
      puVar8[7] = uVar14;
      ((VkImageSubresourceLayers *)(puVar8 + -1))->aspectMask = 1;
      uVar11 = param_5 >> ((byte)uVar14 & 0x1f);
      uVar13 = param_6 >> ((byte)uVar14 & 0x1f);
      *puVar8 = uVar14 + (uVar5 - uVar15);
      puVar8[1] = 0;
      puVar8[8] = 0;
      puVar8[2] = 1;
      puVar8[6] = 1;
      puVar8[9] = 1;
      uVar10 = 1;
      if (1 < uVar11) {
        uVar10 = uVar11;
      }
      puVar8[0xd] = uVar10;
      puVar8[0xf] = 1;
      uVar10 = 1;
      if (1 < uVar13) {
        uVar10 = uVar13;
      }
      uVar14 = uVar14 + 1;
      puVar8[0xe] = uVar10;
      uVar12 = uVar12 - 1;
      puVar8 = puVar8 + 0x11;
      pFVar7 = local_700;
    } while (uVar12 != 0);
  }
  pVVar9 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_6e8,1,uVar5,uVar3,0,0xffffffff);
  local_6b8.aspectMask = pVVar9->aspectMask;
  local_6b8.baseMipLevel = pVVar9->baseMipLevel;
  local_6b8.levelCount = pVVar9->levelCount;
  local_6b8.baseArrayLayer = pVVar9->baseArrayLayer;
  local_6b8.layerCount = pVVar9->layerCount;
  pVVar9 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_6d0,1,uVar15,uVar3,0,0xffffffff);
  local_688.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_6a0.aspectMask = pVVar9->aspectMask;
  local_6a0.baseMipLevel = pVVar9->baseMipLevel;
  local_6a0.levelCount = pVVar9->levelCount;
  local_6a0.baseArrayLayer = pVVar9->baseArrayLayer;
  local_688.MemoryBarriers.ArrayNum = 0;
  local_688.MemoryBarriers.ArrayMax = 1;
  local_6a0.layerCount = pVVar9->layerCount;
  local_688.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_688.ImageBarriers.ArrayNum = 0;
  local_688.ImageBarriers.ArrayMax = 2;
  local_688.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.BufferBarriers.ArrayNum = 0;
  local_688.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_688,param_2->Image,param_2->DefaultLayout,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
             &local_6b8);
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_688,param_3->Image,VK_IMAGE_LAYOUT_UNDEFINED,
             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_6a0);
  FVulkanPipelineBarrier::Execute(&local_688,pFVar7);
  if (local_688.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_688.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_688.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_688.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_688.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  (*VulkanDynamicAPI::vkCmdCopyImage)
            (local_6f8,param_2->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,param_3->Image,
             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,uVar3,local_448);
  local_568.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_568.MemoryBarriers.ArrayNum = 0;
  local_568.MemoryBarriers.ArrayMax = 1;
  local_568.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_568.ImageBarriers.ArrayNum = 0;
  local_568.ImageBarriers.ArrayMax = 2;
  local_568.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.BufferBarriers.ArrayNum = 0;
  local_568.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_568,param_2->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,param_2->DefaultLayout,
             &local_6b8);
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_568,param_3->Image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,param_3->DefaultLayout,
             &local_6a0);
  FVulkanPipelineBarrier::Execute(&local_568,pFVar7);
  if (local_568.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_568.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_568.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_568.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_568.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  LOCK();
  param_7->Counter = param_7->Counter + -1;
  UNLOCK();
  FMemScope::~FMemScope(&local_6f0);
  FLLMScope::~FLLMScope(&local_704);
  return;
}

// GatherBlocks @ 145ba9b10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

vector<VpBlockProperties,std::allocator<VpBlockProperties>_> * __cdecl
detail::GatherBlocks
          (vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *__return_storage_ptr__,
          uint param_1,VpProfileProperties *param_2,uint param_3,VpBlockProperties *param_4)

{
  VpBlockProperties **ppVVar1;
  VpBlockProperties *pVVar2;
  VpBlockProperties *pVVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  VpProfileDesc *pVVar9;
  longlong lVar10;
  VpProfileProperties *pVVar11;
  char *pcVar12;
  VpBlockProperties *pVVar13;
  VpBlockProperties *pVVar14;
  VpProfileProperties *pVVar15;
  longlong lVar16;
  ulong64 uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  vector<VpProfileProperties,std::allocator<VpProfileProperties>_> local_258;
  VpBlockProperties local_238;
  
  uVar21 = 0;
  uVar20 = (ulonglong)param_3;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (VpBlockProperties *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (VpBlockProperties *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (VpBlockProperties *)0x0;
  if (param_1 != 0) {
    do {
      uVar19 = 0;
      local_258._Mypair._Myval2._Myend = (VpProfileProperties *)0x0;
      local_258._Mypair._Myval2._Myfirst = (VpProfileProperties *)0x0;
      local_258._Mypair._Myval2._Mylast = (VpProfileProperties *)0x0;
      pVVar9 = vpGetProfileDesc(param_2->profileName);
      if ((pVVar9 != (VpProfileDesc *)0x0) && (pVVar9->requiredProfileCount != 0)) {
        do {
          if (local_258._Mypair._Myval2._Mylast == local_258._Mypair._Myval2._Myend) {
            std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
            _Emplace_reallocate<VpProfileProperties_const_&>
                      (&local_258,local_258._Mypair._Myval2._Mylast,
                       pVVar9->pRequiredProfiles + uVar19);
          }
          else {
            lVar10 = 2;
            pVVar11 = local_258._Mypair._Myval2._Mylast;
            pVVar15 = pVVar9->pRequiredProfiles + uVar19;
            do {
              pcVar12 = pVVar11->profileName;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 8);
              pcVar8 = pVVar15->profileName;
              *(undefined8 *)pVVar11->profileName = *(undefined8 *)pVVar15->profileName;
              *(undefined8 *)(pVVar11->profileName + 8) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x18);
              *(undefined8 *)(pVVar11->profileName + 0x10) =
                   *(undefined8 *)(pVVar15->profileName + 0x10);
              *(undefined8 *)(pVVar11->profileName + 0x18) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x28);
              *(undefined8 *)(pVVar11->profileName + 0x20) =
                   *(undefined8 *)(pVVar15->profileName + 0x20);
              *(undefined8 *)(pVVar11->profileName + 0x28) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x38);
              *(undefined8 *)(pVVar11->profileName + 0x30) =
                   *(undefined8 *)(pVVar15->profileName + 0x30);
              *(undefined8 *)(pVVar11->profileName + 0x38) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x48);
              *(undefined8 *)(pVVar11->profileName + 0x40) =
                   *(undefined8 *)(pVVar15->profileName + 0x40);
              *(undefined8 *)(pVVar11->profileName + 0x48) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x58);
              *(undefined8 *)(pVVar11->profileName + 0x50) =
                   *(undefined8 *)(pVVar15->profileName + 0x50);
              *(undefined8 *)(pVVar11->profileName + 0x58) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x68);
              *(undefined8 *)(pVVar11->profileName + 0x60) =
                   *(undefined8 *)(pVVar15->profileName + 0x60);
              *(undefined8 *)(pVVar11->profileName + 0x68) = uVar4;
              uVar4 = *(undefined8 *)(pVVar15->profileName + 0x78);
              *(undefined8 *)(pVVar11->profileName + 0x70) =
                   *(undefined8 *)(pVVar15->profileName + 0x70);
              *(undefined8 *)(pVVar11->profileName + 0x78) = uVar4;
              lVar10 = lVar10 + -1;
              pVVar11 = (VpProfileProperties *)(pcVar12 + 0x80);
              pVVar15 = (VpProfileProperties *)(pcVar8 + 0x80);
            } while (lVar10 != 0);
            *(undefined4 *)((VpProfileProperties *)(pcVar12 + 0x80))->profileName =
                 *(undefined4 *)((VpProfileProperties *)(pcVar8 + 0x80))->profileName;
            local_258._Mypair._Myval2._Mylast = local_258._Mypair._Myval2._Mylast + 1;
          }
          uVar18 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
        } while (uVar18 < pVVar9->requiredProfileCount);
      }
      if (local_258._Mypair._Myval2._Mylast == local_258._Mypair._Myval2._Myend) {
        std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
        _Emplace_reallocate<VpProfileProperties_const_&>
                  (&local_258,local_258._Mypair._Myval2._Mylast,param_2);
      }
      else {
        lVar10 = 2;
        pVVar11 = param_2;
        pVVar15 = local_258._Mypair._Myval2._Mylast;
        do {
          pcVar12 = pVVar15->profileName;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 8);
          pcVar8 = pVVar11->profileName;
          *(undefined8 *)pVVar15->profileName = *(undefined8 *)pVVar11->profileName;
          *(undefined8 *)(pVVar15->profileName + 8) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x18);
          *(undefined8 *)(pVVar15->profileName + 0x10) =
               *(undefined8 *)(pVVar11->profileName + 0x10);
          *(undefined8 *)(pVVar15->profileName + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x28);
          *(undefined8 *)(pVVar15->profileName + 0x20) =
               *(undefined8 *)(pVVar11->profileName + 0x20);
          *(undefined8 *)(pVVar15->profileName + 0x28) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x38);
          *(undefined8 *)(pVVar15->profileName + 0x30) =
               *(undefined8 *)(pVVar11->profileName + 0x30);
          *(undefined8 *)(pVVar15->profileName + 0x38) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x48);
          *(undefined8 *)(pVVar15->profileName + 0x40) =
               *(undefined8 *)(pVVar11->profileName + 0x40);
          *(undefined8 *)(pVVar15->profileName + 0x48) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x58);
          *(undefined8 *)(pVVar15->profileName + 0x50) =
               *(undefined8 *)(pVVar11->profileName + 0x50);
          *(undefined8 *)(pVVar15->profileName + 0x58) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x68);
          *(undefined8 *)(pVVar15->profileName + 0x60) =
               *(undefined8 *)(pVVar11->profileName + 0x60);
          *(undefined8 *)(pVVar15->profileName + 0x68) = uVar4;
          uVar4 = *(undefined8 *)(pVVar11->profileName + 0x78);
          *(undefined8 *)(pVVar15->profileName + 0x70) =
               *(undefined8 *)(pVVar11->profileName + 0x70);
          *(undefined8 *)(pVVar15->profileName + 0x78) = uVar4;
          lVar10 = lVar10 + -1;
          pVVar11 = (VpProfileProperties *)(pcVar8 + 0x80);
          pVVar15 = (VpProfileProperties *)(pcVar12 + 0x80);
        } while (lVar10 != 0);
        *(undefined4 *)((VpProfileProperties *)(pcVar12 + 0x80))->profileName =
             *(undefined4 *)((VpProfileProperties *)(pcVar8 + 0x80))->profileName;
        local_258._Mypair._Myval2._Mylast = local_258._Mypair._Myval2._Mylast + 1;
      }
      uVar19 = 0;
      lVar10 = (longlong)local_258._Mypair._Myval2._Mylast -
               (longlong)local_258._Mypair._Myval2._Myfirst >> 0x3f;
      if (((longlong)local_258._Mypair._Myval2._Mylast -
          (longlong)local_258._Mypair._Myval2._Myfirst) / 0x104 + lVar10 != lVar10) {
        lVar10 = 0;
        do {
          lVar16 = 2;
          pcVar12 = (local_258._Mypair._Myval2._Myfirst)->profileName + lVar10;
          pVVar14 = &local_238;
          do {
            pVVar13 = (VpBlockProperties *)((pVVar14->profiles).profileName + 0x80);
            uVar4 = *(undefined8 *)(pcVar12 + 8);
            uVar5 = *(undefined8 *)(pcVar12 + 0x10);
            uVar6 = *(undefined8 *)(pcVar12 + 0x18);
            pcVar8 = pcVar12 + 0x80;
            *(undefined8 *)(pVVar14->profiles).profileName = *(undefined8 *)pcVar12;
            *(undefined8 *)((pVVar14->profiles).profileName + 8) = uVar4;
            uVar4 = *(undefined8 *)(pcVar12 + 0x20);
            uVar7 = *(undefined8 *)(pcVar12 + 0x28);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x10) = uVar5;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x18) = uVar6;
            uVar5 = *(undefined8 *)(pcVar12 + 0x30);
            uVar6 = *(undefined8 *)(pcVar12 + 0x38);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x20) = uVar4;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x28) = uVar7;
            uVar4 = *(undefined8 *)(pcVar12 + 0x40);
            uVar7 = *(undefined8 *)(pcVar12 + 0x48);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x30) = uVar5;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x38) = uVar6;
            uVar5 = *(undefined8 *)(pcVar12 + 0x50);
            uVar6 = *(undefined8 *)(pcVar12 + 0x58);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x40) = uVar4;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x48) = uVar7;
            uVar4 = *(undefined8 *)(pcVar12 + 0x60);
            uVar7 = *(undefined8 *)(pcVar12 + 0x68);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x50) = uVar5;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x58) = uVar6;
            uVar5 = *(undefined8 *)(pcVar12 + 0x70);
            uVar6 = *(undefined8 *)(pcVar12 + 0x78);
            *(undefined8 *)((pVVar14->profiles).profileName + 0x60) = uVar4;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x68) = uVar7;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x70) = uVar5;
            *(undefined8 *)((pVVar14->profiles).profileName + 0x78) = uVar6;
            lVar16 = lVar16 + -1;
            pcVar12 = pcVar8;
            pVVar14 = pVVar13;
          } while (lVar16 != 0);
          *(undefined4 *)(pVVar13->profiles).profileName = *(undefined4 *)pcVar8;
          local_238.apiVersion = 0;
          local_238.blockName[0] = '\0';
          memset(local_238.blockName + 1,0,0xff);
          pVVar14 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
          if (pVVar14 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
            std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
            _Emplace_reallocate<VpBlockProperties_const_&>
                      (__return_storage_ptr__,pVVar14,&local_238);
          }
          else {
            lVar16 = 4;
            pVVar13 = &local_238;
            do {
              pVVar2 = (VpBlockProperties *)((pVVar14->profiles).profileName + 0x80);
              uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 8);
              uVar5 = *(undefined8 *)((pVVar13->profiles).profileName + 0x10);
              uVar6 = *(undefined8 *)((pVVar13->profiles).profileName + 0x18);
              pVVar3 = (VpBlockProperties *)((pVVar13->profiles).profileName + 0x80);
              *(undefined8 *)(pVVar14->profiles).profileName =
                   *(undefined8 *)(pVVar13->profiles).profileName;
              *(undefined8 *)((pVVar14->profiles).profileName + 8) = uVar4;
              uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x20);
              uVar7 = *(undefined8 *)((pVVar13->profiles).profileName + 0x28);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x10) = uVar5;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x18) = uVar6;
              uVar5 = *(undefined8 *)((pVVar13->profiles).profileName + 0x30);
              uVar6 = *(undefined8 *)((pVVar13->profiles).profileName + 0x38);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x20) = uVar4;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x28) = uVar7;
              uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x40);
              uVar7 = *(undefined8 *)((pVVar13->profiles).profileName + 0x48);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x30) = uVar5;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x38) = uVar6;
              uVar5 = *(undefined8 *)((pVVar13->profiles).profileName + 0x50);
              uVar6 = *(undefined8 *)((pVVar13->profiles).profileName + 0x58);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x40) = uVar4;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x48) = uVar7;
              uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x60);
              uVar7 = *(undefined8 *)((pVVar13->profiles).profileName + 0x68);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x50) = uVar5;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x58) = uVar6;
              uVar5 = *(undefined8 *)((pVVar13->profiles).profileName + 0x70);
              uVar6 = *(undefined8 *)((pVVar13->profiles).profileName + 0x78);
              *(undefined8 *)((pVVar14->profiles).profileName + 0x60) = uVar4;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x68) = uVar7;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x70) = uVar5;
              *(undefined8 *)((pVVar14->profiles).profileName + 0x78) = uVar6;
              lVar16 = lVar16 + -1;
              pVVar13 = pVVar3;
              pVVar14 = pVVar2;
            } while (lVar16 != 0);
            *(undefined8 *)(pVVar2->profiles).profileName =
                 *(undefined8 *)(pVVar3->profiles).profileName;
            ppVVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
            *ppVVar1 = *ppVVar1 + 1;
          }
          uVar19 = uVar19 + 1;
          lVar10 = lVar10 + 0x104;
        } while (uVar19 < (ulonglong)
                          (((longlong)local_258._Mypair._Myval2._Mylast -
                           (longlong)local_258._Mypair._Myval2._Myfirst) / 0x104));
      }
      if (local_258._Mypair._Myval2._Myfirst != (VpProfileProperties *)0x0) {
        uVar17 = (((longlong)local_258._Mypair._Myval2._Myend -
                  (longlong)local_258._Mypair._Myval2._Myfirst) / 0x104) * 0x104;
        pVVar11 = local_258._Mypair._Myval2._Myfirst;
        if (0xfff < uVar17) {
          pVVar11 = *(VpProfileProperties **)
                     (local_258._Mypair._Myval2._Myfirst[-1].profileName + 0xfc);
          uVar17 = uVar17 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_258._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar11))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pVVar11,uVar17);
      }
      uVar21 = uVar21 + 1;
      param_2 = param_2 + 1;
    } while (uVar21 < param_1);
  }
  if (param_3 != 0) {
    do {
      pVVar14 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      if (pVVar14 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
        std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
        _Emplace_reallocate<VpBlockProperties_const_&>(__return_storage_ptr__,pVVar14,param_4);
      }
      else {
        lVar10 = 4;
        pVVar13 = param_4;
        do {
          pVVar2 = (VpBlockProperties *)((pVVar14->profiles).profileName + 0x80);
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 8);
          pVVar3 = (VpBlockProperties *)((pVVar13->profiles).profileName + 0x80);
          *(undefined8 *)(pVVar14->profiles).profileName =
               *(undefined8 *)(pVVar13->profiles).profileName;
          *(undefined8 *)((pVVar14->profiles).profileName + 8) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x18);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x10) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x10);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x18) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x28);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x20) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x20);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x28) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x38);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x30) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x30);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x38) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x48);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x40) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x40);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x48) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x58);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x50) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x50);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x58) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x68);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x60) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x60);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x68) = uVar4;
          uVar4 = *(undefined8 *)((pVVar13->profiles).profileName + 0x78);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x70) =
               *(undefined8 *)((pVVar13->profiles).profileName + 0x70);
          *(undefined8 *)((pVVar14->profiles).profileName + 0x78) = uVar4;
          lVar10 = lVar10 + -1;
          pVVar13 = pVVar3;
          pVVar14 = pVVar2;
        } while (lVar10 != 0);
        *(undefined8 *)(pVVar2->profiles).profileName =
             *(undefined8 *)(pVVar3->profiles).profileName;
        ppVVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
        *ppVVar1 = *ppVVar1 + 1;
      }
      param_4 = param_4 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return __return_storage_ptr__;
}

// GatherProfiles @ 145ba9fa0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

vector<VpProfileProperties,std::allocator<VpProfileProperties>_> * __cdecl
detail::GatherProfiles
          (vector<VpProfileProperties,std::allocator<VpProfileProperties>_> *__return_storage_ptr__,
          VpProfileProperties *param_1,char *param_2)

{
  VpProfileProperties **ppVVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  VpProfileDesc *pVVar5;
  longlong lVar6;
  VpProfileProperties *pVVar7;
  uint uVar8;
  ulonglong uVar9;
  VpProfileProperties *pVVar10;
  longlong lVar11;
  
  uVar9 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (VpProfileProperties *)0x0;
  lVar11 = 2;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (VpProfileProperties *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (VpProfileProperties *)0x0;
  if (((param_2 == (char *)0x0) &&
      (pVVar5 = vpGetProfileDesc(param_1->profileName), pVVar5 != (VpProfileDesc *)0x0)) &&
     (pVVar5->requiredProfileCount != 0)) {
    do {
      pVVar7 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      if (pVVar7 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
        std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
        _Emplace_reallocate<VpProfileProperties_const_&>
                  (__return_storage_ptr__,pVVar7,pVVar5->pRequiredProfiles + uVar9);
      }
      else {
        lVar6 = 2;
        pVVar10 = pVVar5->pRequiredProfiles + uVar9;
        do {
          pcVar3 = pVVar7->profileName;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 8);
          pcVar4 = pVVar10->profileName;
          *(undefined8 *)pVVar7->profileName = *(undefined8 *)pVVar10->profileName;
          *(undefined8 *)(pVVar7->profileName + 8) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x18);
          *(undefined8 *)(pVVar7->profileName + 0x10) = *(undefined8 *)(pVVar10->profileName + 0x10)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x18) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x28);
          *(undefined8 *)(pVVar7->profileName + 0x20) = *(undefined8 *)(pVVar10->profileName + 0x20)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x28) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x38);
          *(undefined8 *)(pVVar7->profileName + 0x30) = *(undefined8 *)(pVVar10->profileName + 0x30)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x38) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x48);
          *(undefined8 *)(pVVar7->profileName + 0x40) = *(undefined8 *)(pVVar10->profileName + 0x40)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x48) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x58);
          *(undefined8 *)(pVVar7->profileName + 0x50) = *(undefined8 *)(pVVar10->profileName + 0x50)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x58) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x68);
          *(undefined8 *)(pVVar7->profileName + 0x60) = *(undefined8 *)(pVVar10->profileName + 0x60)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x68) = uVar2;
          uVar2 = *(undefined8 *)(pVVar10->profileName + 0x78);
          *(undefined8 *)(pVVar7->profileName + 0x70) = *(undefined8 *)(pVVar10->profileName + 0x70)
          ;
          *(undefined8 *)(pVVar7->profileName + 0x78) = uVar2;
          lVar6 = lVar6 + -1;
          pVVar7 = (VpProfileProperties *)(pcVar3 + 0x80);
          pVVar10 = (VpProfileProperties *)(pcVar4 + 0x80);
        } while (lVar6 != 0);
        *(undefined4 *)((VpProfileProperties *)(pcVar3 + 0x80))->profileName =
             *(undefined4 *)((VpProfileProperties *)(pcVar4 + 0x80))->profileName;
        ppVVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
        *ppVVar1 = *ppVVar1 + 1;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < pVVar5->requiredProfileCount);
  }
  pVVar7 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
  if (pVVar7 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
    std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
    _Emplace_reallocate<VpProfileProperties_const_&>(__return_storage_ptr__,pVVar7,param_1);
    return __return_storage_ptr__;
  }
  do {
    pcVar3 = pVVar7->profileName;
    uVar2 = *(undefined8 *)(param_1->profileName + 8);
    pcVar4 = param_1->profileName;
    *(undefined8 *)pVVar7->profileName = *(undefined8 *)param_1->profileName;
    *(undefined8 *)(pVVar7->profileName + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x18);
    *(undefined8 *)(pVVar7->profileName + 0x10) = *(undefined8 *)(param_1->profileName + 0x10);
    *(undefined8 *)(pVVar7->profileName + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x28);
    *(undefined8 *)(pVVar7->profileName + 0x20) = *(undefined8 *)(param_1->profileName + 0x20);
    *(undefined8 *)(pVVar7->profileName + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x38);
    *(undefined8 *)(pVVar7->profileName + 0x30) = *(undefined8 *)(param_1->profileName + 0x30);
    *(undefined8 *)(pVVar7->profileName + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x48);
    *(undefined8 *)(pVVar7->profileName + 0x40) = *(undefined8 *)(param_1->profileName + 0x40);
    *(undefined8 *)(pVVar7->profileName + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x58);
    *(undefined8 *)(pVVar7->profileName + 0x50) = *(undefined8 *)(param_1->profileName + 0x50);
    *(undefined8 *)(pVVar7->profileName + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x68);
    *(undefined8 *)(pVVar7->profileName + 0x60) = *(undefined8 *)(param_1->profileName + 0x60);
    *(undefined8 *)(pVVar7->profileName + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(param_1->profileName + 0x78);
    *(undefined8 *)(pVVar7->profileName + 0x70) = *(undefined8 *)(param_1->profileName + 0x70);
    *(undefined8 *)(pVVar7->profileName + 0x78) = uVar2;
    lVar11 = lVar11 + -1;
    pVVar7 = (VpProfileProperties *)(pcVar3 + 0x80);
    param_1 = (VpProfileProperties *)(pcVar4 + 0x80);
  } while (lVar11 != 0);
  *(undefined4 *)((VpProfileProperties *)(pcVar3 + 0x80))->profileName =
       *(undefined4 *)((VpProfileProperties *)(pcVar4 + 0x80))->profileName;
  ppVVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
  *ppVVar1 = *ppVVar1 + 1;
  return __return_storage_ptr__;
}

// Get @ 145bab6a0

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VpCapabilities_T * __cdecl VpCapabilities_T::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance.singleton = false;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance._padding_ = 0;
      `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
      instance.apiVersion = 0x400000;
      _Init_thread_footer(&`public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetInstanceProcAddr;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetDeviceProcAddr;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkEnumerateInstanceVersion;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetPhysicalDeviceFeatures2;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetPhysicalDeviceProperties2;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetPhysicalDeviceFormatProperties2;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkGetPhysicalDeviceQueueFamilyProperties2;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkCreateInstance;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance._padding_ = (longlong)VulkanDynamicAPI::vkCreateDevice;
  `public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::__l2::
  instance.singleton = true;
  return &`public:_static_struct_VpCapabilities_T&___ptr64___cdecl_VpCapabilities_T::Get(void)'::
          __l2::instance;
}

// GetInitialLayoutFromRHIAccess @ 145babcf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

VkImageLayout __cdecl GetInitialLayoutFromRHIAccess(ERHIAccess param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  VkImageLayout VVar3;
  
  if ((param_1 >> 0xc & 1) != 0) {
    return VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
  }
  if (param_1 == Present) {
    return VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    return VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
  }
  if ((param_1 >> 9 & 1) == 0) {
    if ((param_1 & SRVMask) == None) {
      if ((param_1 & UAVMask) != None) {
        return VK_IMAGE_LAYOUT_GENERAL;
      }
      if (param_1 != None) {
        if (param_1 == CopySrc) {
          return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        }
        if (param_1 == CopyDest) {
          return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        }
        if (param_1 != Discard) {
          if (param_1 == Last) {
            if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
              return VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
            }
            if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
              return VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
            }
            bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x231,L"");
          }
          else {
            bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x263,L"Invalid initial access %d");
          }
          if (bVar2 != false) {
            pcVar1 = (code *)swi(3);
            VVar3 = (*pcVar1)();
            return VVar3;
          }
        }
      }
      return VK_IMAGE_LAYOUT_UNDEFINED;
    }
    if (!param_2) {
      return (uint)param_3 * 4 + VK_IMAGE_LAYOUT_GENERAL;
    }
  }
  return VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
}

// GetShaderParameterResourceRHI @ 145bac8b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRHIResource * __cdecl
GetShaderParameterResourceRHI(void *param_1,ushort param_2,EUniformBufferBaseType param_3)

{
  FRDGResource *this;
  
  if ((param_3 < UBMT_RESOURCE_COLLECTION) && ((0xc98c00U >> (param_3 & 0x1f) & 1) != 0)) {
    return (FRHIResource *)0x0;
  }
  if ((param_3 < UBMT_RDG_UNIFORM_BUFFER) && ((0x67200U >> (param_3 & 0x1f) & 1) != 0)) {
    this = *(FRDGResource **)((ulonglong)param_2 + (longlong)param_1);
    if (this != (FRDGResource *)0x0) {
      FRDGResource::ValidateRHIAccess(this);
      return this->ResourceRHI;
    }
    return (FRHIResource *)0x0;
  }
  return *(FRHIResource **)((ulonglong)param_2 + (longlong)param_1);
}

// GetTypeHash @ 145baccf0

uint __cdecl GetTypeHash(FClearValueBinding *param_1)

{
  EClearBinding EVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  EVar1 = param_1->ColorBinding;
  if (EVar1 == EColorBound) {
    uVar5 = (param_1->Value).DSValue.Stencil;
    uVar3 = *(uint *)&param_1->Value;
    uVar4 = 1 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar6 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 >> 0xc;
    uVar3 = (uVar2 - uVar4) - uVar6 ^ uVar4 << 0x10;
    uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar2 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 3;
    uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 10;
    uVar2 = ((uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
    uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar2 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar5 = *(uint *)((longlong)&param_1->Value + 8);
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    uVar4 = ((uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
    uVar2 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
    uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 3;
    uVar3 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 10;
    uVar5 = *(uint *)((longlong)&param_1->Value + 0xc);
    uVar3 = ((uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar2 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xd;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
    return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  }
  if (EVar1 == EDepthStencilBound) {
    uVar5 = *(uint *)&param_1->Value;
    uVar3 = (param_1->Value).DSValue.Stencil;
    uVar6 = 2 - uVar5 ^ uVar5 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar6 ^ uVar6 << 8;
    uVar4 = (uVar5 - uVar2) - uVar6 ^ uVar2 >> 0xd;
    uVar6 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar5 = (uVar2 - uVar6) - uVar4 ^ uVar6 << 0x10;
    uVar2 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar4 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 10;
    uVar2 = ((uVar2 - uVar5) - uVar4 ^ uVar5 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar5 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
    return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  }
  return EVar1;
}

// GetTypeHash @ 145bad020

uint __cdecl GetTypeHash(FRHITextureDesc *param_1)

{
  ForElementType<EPixelFormat> FVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<EPixelFormat> FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  
  uVar7 = (int)(param_1->Flags >> 0x20) * 0x17 + (int)param_1->Flags;
  uVar5 = param_1->Dimension - uVar7 ^ uVar7 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar7 ^ uVar5 << 8;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar3 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  iVar4 = uVar3 - param_1->Format;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar4 * 0x100;
  uVar9 = (param_1->Format - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar5 = (iVar4 - uVar9) - uVar3 ^ uVar9 >> 0xc;
  uVar7 = (uVar3 - uVar5) - uVar9 ^ uVar5 << 0x10;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 5;
  uVar3 = (param_1->Extent).field0_0x0._s_0.Y;
  uVar5 = (uVar5 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 10;
  uVar5 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xf;
  iVar4 = uVar5 - param_1->UAVFormat;
  uVar7 = 0x9e3779b9 - uVar5 ^ iVar4 * 0x100;
  uVar9 = (param_1->UAVFormat - uVar7) - iVar4 ^ uVar7 >> 0xd;
  uVar5 = (iVar4 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar5 << 0x10;
  uVar11 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 5;
  uVar8 = (uVar5 - uVar11) - uVar7 ^ uVar11 >> 3;
  uVar10 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 10;
  uVar7 = (param_1->Extent).field0_0x0._s_0.X - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
  uVar9 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar3 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar5 = (uVar7 - uVar9) - uVar3 ^ uVar9 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar9 ^ uVar5 << 10;
  uVar2 = param_1->Depth;
  uVar5 = (uVar9 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  uVar7 = ((uVar11 - uVar10) - uVar8 ^ uVar10 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 10;
  uVar7 = ((uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xf) - (uint)uVar2 ^ (uint)(uVar2 >> 0xd);
  uVar3 = (-0x61c88647 - uVar7) - (uint)uVar2 ^ uVar7 << 8;
  uVar5 = (uVar2 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar2 = param_1->ArraySize;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 10;
  uVar5 = ((uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xf) - (uint)uVar2 ^ (uint)(uVar2 >> 0xd);
  uVar3 = (-0x61c88647 - uVar5) - (uint)uVar2 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar3 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  iVar4 = uVar3 - param_1->NumMips;
  uVar5 = 0x9e3779b9 - uVar3 ^ iVar4 * 0x100;
  uVar7 = (param_1->NumMips - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar3 = (iVar4 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar3 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xf;
  iVar4 = uVar3 - param_1->NumSamples;
  uVar5 = 0x9e3779b9 - uVar3 ^ iVar4 * 0x100;
  uVar7 = (param_1->NumSamples - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar3 = (iVar4 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar3 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xf;
  iVar4 = uVar3 - param_1->FastVRAMPercentage;
  uVar7 = 0x9e3779b9 - uVar3 ^ iVar4 * 0x100;
  uVar5 = (param_1->FastVRAMPercentage - uVar7) - iVar4 ^ uVar7 >> 0xd;
  uVar3 = (iVar4 - uVar5) - uVar7 ^ uVar5 >> 0xc;
  uVar8 = (uVar7 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar9 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 5;
  uVar7 = (uVar3 - uVar9) - uVar8 ^ uVar9 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar7 << 10;
  uVar5 = GetTypeHash(&param_1->ClearValue);
  uVar3 = param_1->ExtData;
  uVar8 = ((uVar9 - uVar8) - uVar7 ^ uVar8 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (-0x61c88647 - uVar5) - uVar8 ^ uVar8 << 8;
  uVar9 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar5 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 5;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar7 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 10;
  uVar5 = 1;
  uVar9 = ((uVar9 - uVar7) - uVar8 ^ uVar7 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar3 ^ uVar9 << 8;
  uVar8 = (uVar3 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar3 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 0x10;
  uVar8 = (uVar8 - uVar3) - uVar9 ^ uVar3 >> 5;
  uVar7 = (uVar9 - uVar8) - uVar3 ^ uVar8 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar8 ^ uVar7 << 10;
  if (GVirtualMGPU == 0) {
    uVar5 = (param_1->GPUMask).GPUMask;
  }
  FVar6 = (param_1->AliasableFormats).AllocatorInstance.SecondaryData;
  iVar4 = (param_1->AliasableFormats).ArrayNum;
  uVar9 = ((uVar8 - uVar3) - uVar7 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = 0;
  uVar3 = (-0x61c88647 - uVar5) - uVar9 ^ uVar9 << 8;
  uVar5 = (uVar5 - uVar3) - uVar9 ^ uVar3 >> 0xd;
  uVar9 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar9 ^ uVar3 >> 5;
  uVar9 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar9 << 10;
  if (FVar6 == (ForElementType<EPixelFormat>)0x0) {
    FVar6 = (ForElementType<EPixelFormat>)&param_1->AliasableFormats;
  }
  FVar1 = (ForElementType<EPixelFormat>)((longlong)FVar6 + (longlong)iVar4);
  while( true ) {
    if ((param_1->AliasableFormats).ArrayNum != iVar4) {
      `TCheckedPointerIterator<enum_EPixelFormat_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    uVar7 = uVar7 ^ uVar7 * 0x40 + (uVar7 >> 2) + -0x61c88647 + (uint)*(byte *)FVar6;
    FVar6 = (ForElementType<EPixelFormat>)((longlong)FVar6 + 1);
  }
  uVar9 = ((uVar5 - uVar3) - uVar9 ^ uVar3 >> 0xf) - uVar7 ^ uVar7 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar9 ^ uVar9 << 8;
  uVar5 = (uVar7 - uVar3) - uVar9 ^ uVar3 >> 0xd;
  uVar9 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar7 = (uVar5 - uVar3) - uVar9 ^ uVar3 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar5 = (uVar3 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar3 = GPixelFormats[param_1->Format].BlockBytes;
  uVar5 = ((uVar7 - uVar5) - uVar9 ^ uVar5 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar9 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 0xd;
  uVar3 = (uVar5 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar5 = (uVar7 - uVar3) - uVar9 ^ uVar3 << 0x10;
  uVar7 = (uVar9 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 << 10;
  return (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xf;
}

// GetUsageFlagsFromCreateFlags @ 145bad780

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl GetUsageFlagsFromCreateFlags(FVulkanDevice *param_1,ETextureCreateFlags *param_2)

{
  ETextureCreateFlags EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  EVar1 = *param_2;
  if ((EVar1 >> 0x12 & 1) == 0) {
    if ((EVar1 & (DepthStencilTargetable|RenderTargetable)) == None) {
      if ((EVar1 >> 0x1b & 1) == 0) {
        if ((EVar1 & ResolveTargetable) == None) {
          uVar5 = 7;
          if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x400000000000000) != 0) {
            uVar5 = 0x400007;
          }
        }
        else {
          uVar5 = 0x17;
        }
      }
      else {
        uVar5 = 0x27;
      }
    }
    else {
      uVar4 = (uint)(EVar1 >> 2) & 0x80;
      uVar6 = ((~(uint)EVar1 & 1) + 1) * 0x10;
      uVar5 = uVar6 | uVar4 | 7;
      if (((EVar1 >> 0xc & 1) != 0) && ((param_1->DeviceMemoryManager).bSupportsMemoryless != false)
         ) {
        uVar5 = uVar6 | uVar4 | 0x40;
      }
    }
  }
  else {
    uVar5 = 0xf;
  }
  if ((EVar1 >> 10 & 1) != 0) {
    if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_NotSupported) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                         ,0x294,
                         L"A texture was marked as a shading rate source but attachment VRS is not supported on this device. Ensure GRHISupportsAttachmentVariableRateShading and GRHIAttachmentVariableRateShadingEnabled are true before specifying a shading rate attachment."
                        );
    }
    else {
      if ((GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) ||
         (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional)) {
        if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
          uVar5 = uVar5 | 0x100;
        }
        else if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
          uVar5 = uVar5 | 0x200;
        }
        goto LAB_145bad893;
      }
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                         ,0x298,L"Unrecognized shading rate image data type. Specified type was %d")
      ;
    }
    if (bVar3 != false) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
LAB_145bad893:
  if ((*param_2 >> 0x11 & 1) != 0) {
    if ((*param_2 >> 0xc & 1) != 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083046181>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xdb,"!EnumHasAnyFlags(UEFlags, ETextureCreateFlags::Memoryless)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    uVar5 = uVar5 | 8;
  }
  return uVar5;
}

// GetVulkanApiVersionForFeatureLevel @ 145bad9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl GetVulkanApiVersionForFeatureLevel(Type param_1,bool param_2)

{
  uint uVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_1f8 [32];
  FString local_1d8;
  VpProfileProperties local_1c8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  FVulkanGenericPlatform::GetVulkanProfileNameForFeatureLevel(&local_1d8,param_1,param_2);
  memset(&local_1c8,0,0x104);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar3.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_b8,(wchar_t *)FVar3.Data);
  strncpy(local_1c8.profileName,pTVar2->Ptr,0x100);
  local_1c8.profileName[0xff] = '\0';
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  uVar1 = vpGetProfileAPIVersion(&local_1c8);
  if (uVar1 == 0) {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    uVar1 = 0x401000;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return uVar1;
}

// GetVulkanQueueTypeName @ 145badab0

wchar_t * __cdecl GetVulkanQueueTypeName(EVulkanQueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Graphics) {
    if (param_1 == AsyncCompute) {
      return L"AsyncCompute";
    }
    if (param_1 == Transfer) {
      return L"Transfer";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.h"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Graphics";
}

// IsPipelineUnused @ 145bb1340

bool __cdecl IsPipelineUnused(VulkanResourceFrameCounter *param_1,uint param_2)

{
  if (((uint)param_1->LastUsedFrame <= GFrameNumberRenderThread) &&
     (param_2 < GFrameNumberRenderThread - (int)param_1->LastUsedFrame)) {
    return true;
  }
  return false;
}

// IsVulkanPreTransformEnabled @ 145bb1370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsVulkanPreTransformEnabled(FStaticShaderPlatform param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  bVar2 = IsVulkanMobilePlatform(param_1);
  pTVar1 = CVarVulkanPreTransform.Ref;
  if ((!bVar2) && (param_1.Platform != SP_VULKAN_SM5_ANDROID)) {
    return false;
  }
  if (GVulkanDelayAcquireImage != DelayAcquire) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    return false;
  }
  return true;
}

// SelectPhysicalDevice @ 145bbc9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

VkPhysicalDevice_T * __cdecl SelectPhysicalDevice(VkInstance_T *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  uint uVar8;
  EGpuVendorId EVar9;
  uint uVar10;
  VkPhysicalDevice_T *pVVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  char *_Str;
  size_t sVar14;
  EGpuVendorId EVar15;
  VkPhysicalDevice_T *pVVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_1a8 [32];
  uint local_178 [2];
  ForAnyElementType local_170;
  int local_168;
  int iStack_164;
  FIdentityFunctor local_160 [4];
  uint local_15c;
  ForAnyElementType local_158;
  int local_150 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pVVar11 = (VkPhysicalDevice_T *)0x0;
  uVar18 = 0;
  local_178[0] = 0;
  VVar6 = (*VulkanDynamicAPI::vkEnumeratePhysicalDevices)
                    (param_1,local_178,(VkPhysicalDevice_T **)0x0);
  lVar19 = (longlong)(int)local_178[0];
  if ((VVar6 != VK_SUCCESS) || (local_178[0] == 0)) {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      _Str = string_VkResult(VVar6);
      local_148._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_148.Ptr = (wchar_t *)0x0;
        local_148.StringLength = 0;
      }
      else {
        sVar14 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar14,Yes);
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    return (VkPhysicalDevice_T *)0x0;
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150[0] = 0;
  local_150[1] = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_178[0],&local_158,local_150,local_150 + 1);
  memset(local_158.Data + (longlong)iVar7 * 8,0,lVar19 << 3);
  VVar6 = (*VulkanDynamicAPI::vkEnumeratePhysicalDevices)
                    (param_1,local_178,(VkPhysicalDevice_T **)local_158.Data);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,
               "VulkanRHI::vkEnumeratePhysicalDevices(InInstance, &PhysicalDeviceCount, PhysicalDevices.GetData())"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
               ,0x91);
  }
  if ((local_178[0] == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("PhysicalDeviceCount >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x92,
                         L"Couldn\'t enumerate physical devices on second attempt! Make sure your drivers are up to date and that you are not pending a reboot."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
    return pVVar11;
  }
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  iStack_164 = 0;
  if ((int)local_178[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_178[0]);
  }
  if (0 < (int)local_178[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x398,8,local_178[0],&local_170,0,&iStack_164);
  }
  pVVar16 = pVVar11;
  if (local_178[0] != 0) {
    do {
      uVar17 = (uint)pVVar16;
      uVar8 = uVar18;
      if ((int)uVar17 < local_150[0]) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
        return pVVar11;
      }
      pFVar1 = local_158.Data + (longlong)(int)uVar17 * 8;
      if (local_168 == iStack_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x398,8,&local_170,&iStack_164);
      }
      lVar19 = (longlong)local_168;
      local_168 = local_168 + 1;
      pFVar20 = local_170.Data + lVar19 * 0x398;
      uVar2 = *(undefined8 *)pFVar1;
      *(uint *)&pFVar20->field_0x0 = uVar17;
      *(undefined8 *)(pFVar20 + 8) = uVar2;
      *(undefined4 *)(pFVar20 + 0x10) = 0x3b9bb079;
      memset(pFVar20 + 0x14,0,0x344);
      *(undefined4 *)(pFVar20 + 0x358) = 0x3b9bdf5c;
      *(undefined8 *)(pFVar20 + 0x35c) = 0;
      *(undefined8 *)(pFVar20 + 0x364) = 0;
      *(undefined8 *)(pFVar20 + 0x36c) = 0;
      *(undefined8 *)(pFVar20 + 0x374) = 0;
      *(undefined8 *)(pFVar20 + 0x37c) = 0;
      *(undefined8 *)(pFVar20 + 900) = 0;
      *(undefined8 *)(pFVar20 + 0x38c) = 0;
      *(undefined4 *)(pFVar20 + 0x394) = 0;
      *(FScriptContainerElement **)(pFVar20 + 0x18) = pFVar20 + 0x358;
      (*VulkanDynamicAPI::vkGetPhysicalDeviceProperties2)
                (*(VkPhysicalDevice_T **)(pFVar20 + 8),
                 (VkPhysicalDeviceProperties2 *)(pFVar20 + 0x10));
      pVVar16 = (VkPhysicalDevice_T *)(ulonglong)(uVar17 + 1);
    } while (uVar17 + 1 < local_178[0]);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
    return pVVar11;
  }
  plVar12 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.GraphicsAdapter",1);
  if ((plVar12 == (longlong *)0x0) ||
     (lVar19 = (**(code **)(*plVar12 + 0x68))(plVar12), lVar19 == 0)) {
    local_15c = 0xffffffff;
  }
  else {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_145bbcc9a:
      pVVar16 = pVVar11;
    }
    else {
      bVar4 = IsInGameThread();
      pVVar16 = (VkPhysicalDevice_T *)&DAT_00000004;
      if (bVar4) goto LAB_145bbcc9a;
    }
    local_15c = *(uint *)(pVVar16 + lVar19);
  }
  pwVar13 = FCommandLine::Get();
  FParse::Value(pwVar13,L"graphicsadapter=",(int *)&local_15c);
  uVar8 = 0;
  if (-1 < (int)local_15c) {
    if (local_168 <= (int)local_15c) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_15c = 0;
    }
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    uVar17 = local_15c;
    if ((int)local_15c < local_168) {
      uVar8 = ~local_15c >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
      return pVVar11;
    }
LAB_145bbd135:
    pVVar11 = *(VkPhysicalDevice_T **)(local_170.Data + (longlong)(int)uVar17 * 0x398 + 8);
    goto LAB_145bbd0c0;
  }
  if (local_15c == 0xfffffffe) {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if ((local_168 < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
      return pVVar11;
    }
    pVVar11 = *(VkPhysicalDevice_T **)(local_170.Data + 8);
    goto LAB_145bbd0c0;
  }
  if (local_15c == 0xffffffff) {
    AlgoImpl::
    IntroSortInternal<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,int,FIdentityFunctor,TDereferenceWrapper<_SelectPhysicalDevice_::__l2::FPhysicalDeviceInfo,_SelectPhysicalDevice_::__l106::<lambda_1>_>_>
              ((FPhysicalDeviceInfo *)local_170.Data,local_168,local_160[0],(<lambda_1> *)local_160)
    ;
  }
  EVar9 = RHIGetPreferredAdapterVendor();
  if ((EVar9 != Unknown) && (pVVar16 = pVVar11, uVar17 = uVar18, iVar7 = local_168, 0 < local_168))
  {
    do {
      uVar10 = uVar8;
      if ((int)uVar17 < iVar7) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar7 = local_168, bVar4)) {
        pcVar3 = (code *)swi(3);
        pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
        return pVVar11;
      }
      EVar15 = *(EGpuVendorId *)(pVVar16 + 0x28 + (longlong)local_170.Data);
      if (EVar15 < 0x14e5) {
        if (EVar15 != Broadcom) {
          if (EVar15 < 0x10df) {
            if (EVar15 != Nvidia) {
              if (EVar15 == NotQueried) {
                EVar15 = NotQueried;
              }
              else if (((EVar15 != Amd) && (EVar15 != ImgTec)) && (EVar15 != Apple))
              goto LAB_145bbcf3c;
            }
          }
          else if (((EVar15 != Arm) && (EVar15 != Microsoft)) && (EVar15 != SamsungAMD))
          goto LAB_145bbcf3c;
        }
LAB_145bbcf37:
        if (EVar15 == EVar9) {
          if (4 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            iVar7 = local_168;
          }
          if ((int)uVar17 < iVar7) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
            return pVVar11;
          }
          goto LAB_145bbd135;
        }
      }
      else if ((((EVar15 - Kazan < 3) || (EVar15 == VeriSilicon)) || (EVar15 == Qualcomm)) ||
              ((EVar15 == Vivante || (EVar15 == Intel)))) goto LAB_145bbcf37;
LAB_145bbcf3c:
      uVar17 = uVar17 + 1;
      pVVar16 = pVVar16 + 0x398;
    } while ((int)uVar17 < iVar7);
  }
  pwVar13 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar13,L"AllowCPUDevices");
  if (bVar4) {
LAB_145bbd015:
    bVar4 = true;
  }
  else {
    pwVar13 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar13,L"AllowSoftwareRendering");
    if (bVar4) goto LAB_145bbd015;
    bVar4 = false;
  }
  pVVar16 = pVVar11;
  uVar17 = uVar18;
  iVar7 = local_168;
  if (0 < local_168) {
    do {
      if (bVar4) {
LAB_145bbd0f6:
        if ((int)uVar17 < iVar7) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
          return pVVar11;
        }
        goto LAB_145bbd135;
      }
      uVar18 = uVar8;
      if ((int)uVar17 < iVar7) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar7 = local_168, bVar5)) {
        pcVar3 = (code *)swi(3);
        pVVar11 = (VkPhysicalDevice_T *)(*pcVar3)();
        return pVVar11;
      }
      if (*(int *)(pVVar16 + 0x30 + (longlong)local_170.Data) != 4) goto LAB_145bbd0f6;
      uVar17 = uVar17 + 1;
      pVVar16 = pVVar16 + 0x398;
    } while ((int)uVar17 < iVar7);
  }
  if (2 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_None_of_the__u__1510d2fa8,
               (FLogCategoryBase *)&LogVulkanRHI);
    pVVar11 = (VkPhysicalDevice_T *)0x0;
  }
LAB_145bbd0c0:
  if ((FPhysicalDeviceInfo *)local_170.Data != (FPhysicalDeviceInfo *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return pVVar11;
}

// SetVulkanResourceName @ 145bbd430

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

void __cdecl SetVulkanResourceName(FVulkanDevice *param_1,FVulkanTexture *param_2,wchar_t *param_3)

{
  _func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *p_Var1;
  FAnsiString local_48;
  VkDebugUtilsObjectNameInfoEXT local_38;
  
  p_Var1 = (param_1->DebugMarkers).SetDebugName;
  if (p_Var1 != (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
    FAnsiString::FAnsiString(&local_48,param_3);
    local_38._20_4_ = 0;
    local_38.objectHandle._0_4_ = SUB84(param_2->Image,0);
    local_38.objectHandle._4_4_ = (undefined4)((ulonglong)param_2->Image >> 0x20);
    local_38._4_8_ = 0;
    local_38.pObjectName._0_4_ = SUB84(local_48.Data.AllocatorInstance.Data,0);
    local_38.pObjectName._4_4_ =
         (undefined4)((ulonglong)local_48.Data.AllocatorInstance.Data >> 0x20);
    local_38.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    local_38._12_8_ = &DAT_a00000000;
    (*p_Var1)(param_1->Device,&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SimulateErrors @ 145bbe500

/* WARNING: Enum "VkResult": Some values do not have unique names */

VkResult __cdecl SimulateErrors(VkResult param_1)

{
  if (GSimulateLostSurfaceInNextPresent) {
    GSimulateLostSurfaceInNextPresent = false;
    return VK_ERROR_SURFACE_LOST_KHR;
  }
  if (GSimulateSuboptimalSurfaceInNextTick) {
    GSimulateSuboptimalSurfaceInNextTick = false;
    return VK_SUBOPTIMAL_KHR;
  }
  return param_1;
}

// StencilOpToVulkan @ 145bbe540

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

VkStencilOp __cdecl StencilOpToVulkan(EStencilOp param_1)

{
  code *pcVar1;
  bool bVar2;
  VkStencilOp VVar3;
  
  switch(param_1) {
  case SO_Keep:
    return VK_STENCIL_OP_KEEP;
  case SO_Zero:
    return VK_STENCIL_OP_ZERO;
  case SO_Replace:
    return VK_STENCIL_OP_REPLACE;
  case EStencilOp_NumBits:
    return VK_STENCIL_OP_INCREMENT_AND_CLAMP;
  case SO_SaturatedDecrement:
    return VK_STENCIL_OP_DECREMENT_AND_CLAMP;
  case SO_Invert:
    return VK_STENCIL_OP_INVERT;
  case SO_Increment:
    return VK_STENCIL_OP_INCREMENT_AND_WRAP;
  case SO_Decrement:
    return VK_STENCIL_OP_DECREMENT_AND_WRAP;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                     ,0xa2,L"Unknown EStencilOp %d");
  if (!bVar2) {
    return VK_STENCIL_OP_MAX_ENUM;
  }
  pcVar1 = (code *)swi(3);
  VVar3 = (*pcVar1)();
  return VVar3;
}

// TranslateMinMagFilterMode @ 145bbe710

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "VkFilter": Some values do not have unique names */

VkFilter __cdecl TranslateMinMagFilterMode(ESamplerFilter param_1)

{
  code *pcVar1;
  bool bVar2;
  VkFilter VVar3;
  
  if (param_1 == SF_Point) {
    return VK_FILTER_NEAREST;
  }
  if ((((param_1 != SF_Bilinear) && (param_1 != SF_Trilinear)) &&
      (param_1 != ESamplerFilter_NumBits)) && (param_1 != SF_AnisotropicLinear)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                       ,0x2d,L"Unknown ESamplerFilter %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      VVar3 = (*pcVar1)();
      return VVar3;
    }
    return VK_FILTER_MAX_ENUM;
  }
  return VK_FILTER_LINEAR;
}

// TranslateWrapMode @ 145bbe780

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */

VkSamplerAddressMode __cdecl TranslateWrapMode(ESamplerAddressMode param_1)

{
  code *pcVar1;
  bool bVar2;
  VkSamplerAddressMode VVar3;
  
  if (param_1 == AM_Wrap) {
    return VK_SAMPLER_ADDRESS_MODE_REPEAT;
  }
  if (param_1 == AM_Clamp) {
    return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
  }
  if (param_1 == AM_Mirror) {
    return VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
  }
  if (param_1 != AM_Border) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                       ,0x3d,L"Unknown Wrap ESamplerAddressMode %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      VVar3 = (*pcVar1)();
      return VVar3;
    }
    return VK_SAMPLER_ADDRESS_MODE_MAX_ENUM;
  }
  return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
}

// UETextureDimensionToVkImageViewType @ 145bbf050

VkImageViewType __cdecl UETextureDimensionToVkImageViewType(ETextureDimension param_1)

{
  code *pcVar1;
  bool bVar2;
  VkImageViewType VVar3;
  
  if (param_1 == Texture2D) {
    return VK_IMAGE_VIEW_TYPE_2D;
  }
  if (param_1 == Texture2DArray) {
    return VK_IMAGE_VIEW_TYPE_2D_ARRAY;
  }
  if (param_1 == Texture3D) {
    return VK_IMAGE_VIEW_TYPE_3D;
  }
  if (param_1 != TextureCube) {
    if (param_1 == TextureCubeArray) {
      return VK_IMAGE_VIEW_TYPE_CUBE_ARRAY;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      VVar3 = (*pcVar1)();
      return VVar3;
    }
    return VK_IMAGE_VIEW_TYPE_MAX_ENUM;
  }
  return VK_IMAGE_VIEW_TYPE_CUBE;
}

// UpdateUniformBufferConstants @ 145bc10c0

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
UpdateUniformBufferConstants
          (FVulkanDevice *param_1,void *param_2,void *param_3,FRHIUniformBufferLayout *param_4)

{
  bool bVar1;
  
  bVar1 = FVulkanDevice::SupportsBindless(param_1);
  UE::RHICore::UpdateUniformBufferConstants(param_2,param_3,param_4,bVar1);
  return;
}

// UpdateUniformBufferHelper @ 145bc1110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
UpdateUniformBufferHelper
          (FVulkanCommandListContext *param_1,FVulkanUniformBuffer *param_2,void *param_3,
          bool param_4)

{
  uint uVar1;
  uint uVar2;
  FVulkanDevice *this;
  FRHIUniformBufferLayout *pFVar3;
  code *pcVar4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var5;
  bool bVar6;
  FVulkanCommandBuffer *pFVar7;
  uchar *_Dst;
  VkBuffer_T *pVVar8;
  VkBuffer_T *pVVar9;
  uint uVar10;
  undefined1 auStackY_c8 [32];
  FVulkanAllocation local_78;
  VkBufferCopy local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar7 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  this = (FVulkanDevice *)param_1->_padding_;
  uVar1 = *(uint *)(param_2->_padding_ + 0x8c);
  uVar2 = (uint)(this->GpuProps).limits.minUniformBufferOffsetAlignment;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_78);
  uVar10 = 0x10;
  if (0x10 < uVar2) {
    uVar10 = uVar2;
  }
  _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                   (this->TempBlockAllocator,uVar1,uVar10,(FVulkanContextCommon *)param_1,&local_78,
                    (VkDescriptorAddressInfoEXT *)0x0);
  if (param_4) {
    pFVar3 = (FRHIUniformBufferLayout *)param_2->_padding_;
    bVar6 = FVulkanDevice::SupportsBindless(this);
    UE::RHICore::UpdateUniformBufferConstants(_Dst,param_3,pFVar3,bVar6);
  }
  else {
    memcpy(_Dst,param_3,(longlong)(int)uVar1);
  }
  if ((param_2->Usage == UniformBuffer_SingleDraw) || (param_2->Usage == UniformBuffer_SingleFrame))
  {
    VulkanRHI::FVulkanAllocation::Init
              (&param_2->Allocation,EVulkanAllocationEmpty,EVulkanAllocationMetaUnknown,
               local_78.VulkanHandle,uVar1,local_78.Offset,(uint)local_78.AllocatorIndex,
               local_78.AllocationIndex,local_78.HandleId);
  }
  else {
    if (pFVar7->State != IsInsideBegin) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("CmdBuffer->IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                         ,0x52,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_58.srcOffset = (ulong64)local_78.Offset;
    local_58.dstOffset = (ulong64)(param_2->Allocation).Offset;
    local_58.size = (longlong)(int)uVar1;
    pVVar8 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&param_2->Allocation);
    p_Var5 = VulkanDynamicAPI::vkCmdCopyBuffer;
    pVVar9 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&local_78);
    (*p_Var5)(pFVar7->CommandBufferHandle,pVVar9,pVVar8,1,&local_58);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_78);
  return;
}

// VerifyVulkanResult @ 145bc1bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VulkanRHI::VerifyVulkanResult(VkResult param_1,char *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  FVulkanThread *pFVar2;
  bool bVar3;
  FVulkanDynamicRHI *pFVar4;
  wchar_t *pwVar5;
  DWORD DVar6;
  BOOL BVar7;
  char *_Str;
  size_t sVar8;
  FOutputDeviceRedirector *this;
  ForAnyElementType FVar9;
  undefined1 auStack_308 [32];
  wchar_t *local_2e8;
  uint local_2e0;
  FScriptContainerElement *local_2d8;
  FString local_2c8;
  FString local_2b8;
  uint local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_2a8 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CrashCritSec,4000);
    atexit(`VulkanRHI::VerifyVulkanResult'::__l2::_dynamic_atexit_destructor_for__CrashCritSec__);
    _Init_thread_footer(&::_TSS0);
  }
  bVar3 = false;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  if ((int)param_1 < -0xb) {
    if (param_1 == VK_ERROR_FRAGMENTED_POOL) {
      ::FString::operator=(&local_2c8,L"VK_ERROR_FRAGMENTED_POOL");
      goto LAB_145bc1f8d;
    }
    if ((int)param_1 < -0x3b9af4f8) {
      if (param_1 == VK_ERROR_VALIDATION_FAILED_EXT) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_VALIDATION_FAILED_EXT");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_NOT_PERMITTED) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_NOT_PERMITTED_EXT");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_INVALID_EXTERNAL_HANDLE) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_OUT_OF_POOL_MEMORY) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_OUT_OF_POOL_MEMORY_KHR");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_INVALID_SHADER_NV) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_INVALID_SHADER_NV");
        goto LAB_145bc1f8d;
      }
    }
    else {
      if (param_1 == VK_ERROR_INCOMPATIBLE_DISPLAY_KHR) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_INCOMPATIBLE_DISPLAY_KHR");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_OUT_OF_DATE_KHR) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_OUT_OF_DATE_KHR");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_NATIVE_WINDOW_IN_USE_KHR) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_NATIVE_WINDOW_IN_USE_KHR");
        goto LAB_145bc1f8d;
      }
      if (param_1 == VK_ERROR_SURFACE_LOST_KHR) {
        ::FString::operator=(&local_2c8,L"VK_ERROR_SURFACE_LOST_KHR");
        goto LAB_145bc1f8d;
      }
    }
  }
  else if ((int)param_1 < 0x3b9acdec) {
    if (param_1 == VK_SUBOPTIMAL_KHR) {
      ::FString::operator=(&local_2c8,L"VK_SUBOPTIMAL_KHR");
      goto LAB_145bc1f8d;
    }
    switch(param_1) {
    default:
      goto switchD_145bc1db2_caseD_0;
    case VK_NOT_READY:
      ::FString::operator=(&local_2c8,L"VK_NOT_READY");
      break;
    case VK_TIMEOUT:
      ::FString::operator=(&local_2c8,L"VK_TIMEOUT");
      break;
    case VK_EVENT_SET:
      ::FString::operator=(&local_2c8,L"VK_EVENT_SET");
      break;
    case VK_EVENT_RESET:
      ::FString::operator=(&local_2c8,L"VK_EVENT_RESET");
      break;
    case VK_INCOMPLETE:
      ::FString::operator=(&local_2c8,L"VK_INCOMPLETE");
      break;
    case VK_ERROR_FORMAT_NOT_SUPPORTED:
      ::FString::operator=(&local_2c8,L"VK_ERROR_FORMAT_NOT_SUPPORTED");
      break;
    case VK_ERROR_TOO_MANY_OBJECTS:
      ::FString::operator=(&local_2c8,L"VK_ERROR_TOO_MANY_OBJECTS");
      break;
    case VK_ERROR_INCOMPATIBLE_DRIVER:
      ::FString::operator=(&local_2c8,L"VK_ERROR_INCOMPATIBLE_DRIVER");
      break;
    case VK_ERROR_FEATURE_NOT_PRESENT:
      ::FString::operator=(&local_2c8,L"VK_ERROR_FEATURE_NOT_PRESENT");
      break;
    case VK_ERROR_EXTENSION_NOT_PRESENT:
      ::FString::operator=(&local_2c8,L"VK_ERROR_EXTENSION_NOT_PRESENT");
      break;
    case VK_ERROR_LAYER_NOT_PRESENT:
      ::FString::operator=(&local_2c8,L"VK_ERROR_LAYER_NOT_PRESENT");
      break;
    case VK_ERROR_MEMORY_MAP_FAILED:
      ::FString::operator=(&local_2c8,L"VK_ERROR_MEMORY_MAP_FAILED");
      break;
    case VK_ERROR_DEVICE_LOST:
      ::FString::operator=(&local_2c8,L"VK_ERROR_DEVICE_LOST");
      GIsGPUCrashed = true;
      break;
    case VK_ERROR_INITIALIZATION_FAILED:
      ::FString::operator=(&local_2c8,L"VK_ERROR_INITIALIZATION_FAILED");
      break;
    case VK_ERROR_OUT_OF_DEVICE_MEMORY:
      ::FString::operator=(&local_2c8,L"VK_ERROR_OUT_OF_DEVICE_MEMORY");
      bVar3 = true;
      break;
    case VK_ERROR_OUT_OF_HOST_MEMORY:
      ::FString::operator=(&local_2c8,L"VK_ERROR_OUT_OF_HOST_MEMORY");
      bVar3 = true;
    }
    goto LAB_145bc1f8d;
  }
switchD_145bc1db2_caseD_0:
  _Str = string_VkResult(param_1);
  local_298._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_298.StringLength = 0;
    local_298.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar8 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,_Str,(int)sVar8,Yes);
  }
  ::FString::operator=(&local_2c8,local_298.Ptr);
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
LAB_145bc1f8d:
  local_178._padding_ = 0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_2c8.Data.ArrayNum != 0) {
    FVar9.Data = local_2c8.Data.AllocatorInstance.Data;
  }
  if (param_3 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar8 = strlen(param_3);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_3,(int)sVar8,Yes);
  }
  pwVar5 = local_178.Ptr;
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar8 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar8,Yes);
  }
  local_2e0 = local_2a8;
  local_2e8 = pwVar5;
  local_2d8 = FVar9.Data;
  ::FString::PrintfImpl(&local_2b8,L"%s failed, VkResult=%d\n at %s:%u \n with error %s");
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  pFVar4 = GVulkanRHI;
  if (GIsGPUCrashed == false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CrashCritSec);
    if (1 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if (bVar3) {
      FMemoryManager::DumpMemory(&GVulkanRHI->Device->MemoryManager,false);
    }
  }
  else {
    DVar6 = GetCurrentThreadId();
    pFVar2 = pFVar4->InterruptThread;
    if (pFVar2 == (FVulkanThread *)0x0) {
      uVar1 = pFVar4->InterruptThreadID;
    }
    else {
      uVar1 = pFVar2->Thread->ThreadID;
    }
    if (DVar6 == uVar1) {
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&CrashCritSec);
      if ((BVar7 != 0) && (1 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_2b8.Data.ArrayNum != 0) {
        FVar9.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      FVulkanDynamicRHI::TerminateOnGPUCrash(GVulkanRHI,(wchar_t *)FVar9.Data);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&CrashCritSec);
      if (1 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      pFVar4 = GVulkanRHI;
      if (GVulkanRHI->InterruptThread == (FVulkanThread *)0x0) {
        if (&GVulkanRHI->InterruptCS != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&GVulkanRHI->InterruptCS);
          DVar6 = GetCurrentThreadId();
          pFVar4->InterruptThreadID = DVar6;
          do {
            FVulkanDynamicRHI::ProcessInterruptQueue(pFVar4);
          } while( true );
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      (**(code **)(GVulkanRHI->InterruptThread->Event->_padding_ + 0x10))();
      (**(code **)(pFVar4->InterruptThread->Thread->_padding_ + 0x20))();
    }
  }
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  FWindowsPlatformMisc::RequestExit(true,L"VerifyVulkanResult");
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  return;
}

// VulkanCalculateTextureSize @ 145bc2300

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

ulong64 __cdecl VulkanCalculateTextureSize(FVulkanTexture *param_1)

{
  byte bVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x20))();
  bVar1 = *(byte *)(lVar3 + 0x33);
  uVar2 = (param_1->Device->GpuProps).limits.minMemoryMapAlignment;
  return (uVar2 - 1) +
         ((ulonglong)(uint)(*(int *)(lVar3 + 0x24) + -1 + GPixelFormats[bVar1].BlockSizeX) /
         (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeX) *
         ((ulonglong)(uint)(*(int *)(lVar3 + 0x28) + -1 + GPixelFormats[bVar1].BlockSizeY) /
         (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeY) *
         (longlong)GPixelFormats[bVar1].BlockBytes & ~(uVar2 - 1);
}

// VulkanProfilePrint @ 145bc23a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VulkanProfilePrint(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogVulkanRHI._0_1_) {
    local_138._padding_ = 0;
    if (param_1 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar1 = strlen(param_1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// _Change_array @ 145bc3120

void __thiscall
std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::_Change_array
          (vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> *this,
          VkExtensionProperties *param_1,ulong64 param_2,ulong64 param_3)

{
  VkExtensionProperties *pVVar1;
  VkExtensionProperties *pVVar2;
  ulong64 uVar3;
  
  pVVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar1 != (VkExtensionProperties *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar1) / 0x104) * 0x104;
    pVVar2 = pVVar1;
    if (0xfff < uVar3) {
      pVVar2 = *(VkExtensionProperties **)(pVVar1[-1].extensionName + 0xfc);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar1 + (-8 - (longlong)pVVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Xlength @ 145bc31f0

void __cdecl std::vector<char_const_*,std::allocator<char_const_*>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145bc3210

void __cdecl
std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145bc3230

void __cdecl std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 145bc3250

void __cdecl std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// push_back @ 145bc3270

void __thiscall
std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::push_back
          (vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *this,
          VpBlockProperties *param_1)

{
  VpBlockProperties **ppVVar1;
  VpBlockProperties *pVVar2;
  VpBlockProperties *pVVar3;
  undefined8 uVar4;
  longlong lVar5;
  VpBlockProperties *pVVar6;
  
  pVVar6 = (this->_Mypair)._Myval2._Mylast;
  if (pVVar6 != (this->_Mypair)._Myval2._Myend) {
    lVar5 = 4;
    do {
      pVVar2 = (VpBlockProperties *)((pVVar6->profiles).profileName + 0x80);
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 8);
      pVVar3 = (VpBlockProperties *)((param_1->profiles).profileName + 0x80);
      *(undefined8 *)(pVVar6->profiles).profileName = *(undefined8 *)(param_1->profiles).profileName
      ;
      *(undefined8 *)((pVVar6->profiles).profileName + 8) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x18);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x10) =
           *(undefined8 *)((param_1->profiles).profileName + 0x10);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x18) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x28);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x20) =
           *(undefined8 *)((param_1->profiles).profileName + 0x20);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x28) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x38);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x30) =
           *(undefined8 *)((param_1->profiles).profileName + 0x30);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x38) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x48);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x40) =
           *(undefined8 *)((param_1->profiles).profileName + 0x40);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x48) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x58);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x50) =
           *(undefined8 *)((param_1->profiles).profileName + 0x50);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x58) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x68);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x60) =
           *(undefined8 *)((param_1->profiles).profileName + 0x60);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x68) = uVar4;
      uVar4 = *(undefined8 *)((param_1->profiles).profileName + 0x78);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x70) =
           *(undefined8 *)((param_1->profiles).profileName + 0x70);
      *(undefined8 *)((pVVar6->profiles).profileName + 0x78) = uVar4;
      lVar5 = lVar5 + -1;
      pVVar6 = pVVar2;
      param_1 = pVVar3;
    } while (lVar5 != 0);
    *(undefined8 *)(pVVar2->profiles).profileName = *(undefined8 *)(pVVar3->profiles).profileName;
    ppVVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppVVar1 = *ppVVar1 + 1;
    return;
  }
  _Emplace_reallocate<VpBlockProperties_const_&>(this,pVVar6,param_1);
  return;
}

// string_VkFormat @ 145bc3300

/* WARNING: Enum "VkFormat": Some values do not have unique names */

char * __cdecl string_VkFormat(VkFormat param_1)

{
  if ((int)param_1 < 0x3b9b9cf1) {
    if (param_1 == VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG) {
      return "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
    }
    switch(param_1) {
    case VK_FORMAT_UNDEFINED:
      return "VK_FORMAT_UNDEFINED";
    case VK_FORMAT_R4G4_UNORM_PACK8:
      return "VK_FORMAT_R4G4_UNORM_PACK8";
    case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
      return "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
    case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
      return "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
    case VK_FORMAT_R5G6B5_UNORM_PACK16:
      return "VK_FORMAT_R5G6B5_UNORM_PACK16";
    case VK_FORMAT_B5G6R5_UNORM_PACK16:
      return "VK_FORMAT_B5G6R5_UNORM_PACK16";
    case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
      return "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
    case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
      return "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
    case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
      return "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
    case VK_FORMAT_R8_UNORM:
      return "VK_FORMAT_R8_UNORM";
    case VK_FORMAT_R8_SNORM:
      return "VK_FORMAT_R8_SNORM";
    case VK_FORMAT_R8_USCALED:
      return "VK_FORMAT_R8_USCALED";
    case VK_FORMAT_R8_SSCALED:
      return "VK_FORMAT_R8_SSCALED";
    case VK_FORMAT_R8_UINT:
      return "VK_FORMAT_R8_UINT";
    case VK_FORMAT_R8_SINT:
      return "VK_FORMAT_R8_SINT";
    case VK_FORMAT_R8_SRGB:
      return "VK_FORMAT_R8_SRGB";
    case VK_FORMAT_R8G8_UNORM:
      return "VK_FORMAT_R8G8_UNORM";
    case VK_FORMAT_R8G8_SNORM:
      return "VK_FORMAT_R8G8_SNORM";
    case VK_FORMAT_R8G8_USCALED:
      return "VK_FORMAT_R8G8_USCALED";
    case VK_FORMAT_R8G8_SSCALED:
      return "VK_FORMAT_R8G8_SSCALED";
    case VK_FORMAT_R8G8_UINT:
      return "VK_FORMAT_R8G8_UINT";
    case VK_FORMAT_R8G8_SINT:
      return "VK_FORMAT_R8G8_SINT";
    case VK_FORMAT_R8G8_SRGB:
      return "VK_FORMAT_R8G8_SRGB";
    case VK_FORMAT_R8G8B8_UNORM:
      return "VK_FORMAT_R8G8B8_UNORM";
    case VK_FORMAT_R8G8B8_SNORM:
      return "VK_FORMAT_R8G8B8_SNORM";
    case VK_FORMAT_R8G8B8_USCALED:
      return "VK_FORMAT_R8G8B8_USCALED";
    case VK_FORMAT_R8G8B8_SSCALED:
      return "VK_FORMAT_R8G8B8_SSCALED";
    case VK_FORMAT_R8G8B8_UINT:
      return "VK_FORMAT_R8G8B8_UINT";
    case VK_FORMAT_R8G8B8_SINT:
      return "VK_FORMAT_R8G8B8_SINT";
    case VK_FORMAT_R8G8B8_SRGB:
      return "VK_FORMAT_R8G8B8_SRGB";
    case VK_FORMAT_B8G8R8_UNORM:
      return "VK_FORMAT_B8G8R8_UNORM";
    case VK_FORMAT_B8G8R8_SNORM:
      return "VK_FORMAT_B8G8R8_SNORM";
    case VK_FORMAT_B8G8R8_USCALED:
      return "VK_FORMAT_B8G8R8_USCALED";
    case VK_FORMAT_B8G8R8_SSCALED:
      return "VK_FORMAT_B8G8R8_SSCALED";
    case VK_FORMAT_B8G8R8_UINT:
      return "VK_FORMAT_B8G8R8_UINT";
    case VK_FORMAT_B8G8R8_SINT:
      return "VK_FORMAT_B8G8R8_SINT";
    case VK_FORMAT_B8G8R8_SRGB:
      return "VK_FORMAT_B8G8R8_SRGB";
    case VK_FORMAT_R8G8B8A8_UNORM:
      return "VK_FORMAT_R8G8B8A8_UNORM";
    case VK_FORMAT_R8G8B8A8_SNORM:
      return "VK_FORMAT_R8G8B8A8_SNORM";
    case VK_FORMAT_R8G8B8A8_USCALED:
      return "VK_FORMAT_R8G8B8A8_USCALED";
    case VK_FORMAT_R8G8B8A8_SSCALED:
      return "VK_FORMAT_R8G8B8A8_SSCALED";
    case VK_FORMAT_R8G8B8A8_UINT:
      return "VK_FORMAT_R8G8B8A8_UINT";
    case VK_FORMAT_R8G8B8A8_SINT:
      return "VK_FORMAT_R8G8B8A8_SINT";
    case VK_FORMAT_R8G8B8A8_SRGB:
      return "VK_FORMAT_R8G8B8A8_SRGB";
    case VK_FORMAT_B8G8R8A8_UNORM:
      return "VK_FORMAT_B8G8R8A8_UNORM";
    case VK_FORMAT_B8G8R8A8_SNORM:
      return "VK_FORMAT_B8G8R8A8_SNORM";
    case VK_FORMAT_B8G8R8A8_USCALED:
      return "VK_FORMAT_B8G8R8A8_USCALED";
    case VK_FORMAT_B8G8R8A8_SSCALED:
      return "VK_FORMAT_B8G8R8A8_SSCALED";
    case VK_FORMAT_B8G8R8A8_UINT:
      return "VK_FORMAT_B8G8R8A8_UINT";
    case VK_FORMAT_B8G8R8A8_SINT:
      return "VK_FORMAT_B8G8R8A8_SINT";
    case VK_FORMAT_B8G8R8A8_SRGB:
      return "VK_FORMAT_B8G8R8A8_SRGB";
    case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
      return "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
      return "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
      return "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
      return "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_UINT_PACK32:
      return "VK_FORMAT_A8B8G8R8_UINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SINT_PACK32:
      return "VK_FORMAT_A8B8G8R8_SINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
      return "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
    case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
      return "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
      return "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
      return "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
      return "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_UINT_PACK32:
      return "VK_FORMAT_A2R10G10B10_UINT_PACK32";
    case VK_FORMAT_A2R10G10B10_SINT_PACK32:
      return "VK_FORMAT_A2R10G10B10_SINT_PACK32";
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
      return "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
      return "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
      return "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
      return "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_UINT_PACK32:
      return "VK_FORMAT_A2B10G10R10_UINT_PACK32";
    case VK_FORMAT_A2B10G10R10_SINT_PACK32:
      return "VK_FORMAT_A2B10G10R10_SINT_PACK32";
    case VK_FORMAT_R16_UNORM:
      return "VK_FORMAT_R16_UNORM";
    case VK_FORMAT_R16_SNORM:
      return "VK_FORMAT_R16_SNORM";
    case VK_FORMAT_R16_USCALED:
      return "VK_FORMAT_R16_USCALED";
    case VK_FORMAT_R16_SSCALED:
      return "VK_FORMAT_R16_SSCALED";
    case VK_FORMAT_R16_UINT:
      return "VK_FORMAT_R16_UINT";
    case VK_FORMAT_R16_SINT:
      return "VK_FORMAT_R16_SINT";
    case VK_FORMAT_R16_SFLOAT:
      return "VK_FORMAT_R16_SFLOAT";
    case VK_FORMAT_R16G16_UNORM:
      return "VK_FORMAT_R16G16_UNORM";
    case VK_FORMAT_R16G16_SNORM:
      return "VK_FORMAT_R16G16_SNORM";
    case VK_FORMAT_R16G16_USCALED:
      return "VK_FORMAT_R16G16_USCALED";
    case VK_FORMAT_R16G16_SSCALED:
      return "VK_FORMAT_R16G16_SSCALED";
    case VK_FORMAT_R16G16_UINT:
      return "VK_FORMAT_R16G16_UINT";
    case VK_FORMAT_R16G16_SINT:
      return "VK_FORMAT_R16G16_SINT";
    case VK_FORMAT_R16G16_SFLOAT:
      return "VK_FORMAT_R16G16_SFLOAT";
    case VK_FORMAT_R16G16B16_UNORM:
      return "VK_FORMAT_R16G16B16_UNORM";
    case VK_FORMAT_R16G16B16_SNORM:
      return "VK_FORMAT_R16G16B16_SNORM";
    case VK_FORMAT_R16G16B16_USCALED:
      return "VK_FORMAT_R16G16B16_USCALED";
    case VK_FORMAT_R16G16B16_SSCALED:
      return "VK_FORMAT_R16G16B16_SSCALED";
    case VK_FORMAT_R16G16B16_UINT:
      return "VK_FORMAT_R16G16B16_UINT";
    case VK_FORMAT_R16G16B16_SINT:
      return "VK_FORMAT_R16G16B16_SINT";
    case VK_FORMAT_R16G16B16_SFLOAT:
      return "VK_FORMAT_R16G16B16_SFLOAT";
    case VK_FORMAT_R16G16B16A16_UNORM:
      return "VK_FORMAT_R16G16B16A16_UNORM";
    case VK_FORMAT_R16G16B16A16_SNORM:
      return "VK_FORMAT_R16G16B16A16_SNORM";
    case VK_FORMAT_R16G16B16A16_USCALED:
      return "VK_FORMAT_R16G16B16A16_USCALED";
    case VK_FORMAT_R16G16B16A16_SSCALED:
      return "VK_FORMAT_R16G16B16A16_SSCALED";
    case VK_FORMAT_R16G16B16A16_UINT:
      return "VK_FORMAT_R16G16B16A16_UINT";
    case VK_FORMAT_R16G16B16A16_SINT:
      return "VK_FORMAT_R16G16B16A16_SINT";
    case VK_FORMAT_R16G16B16A16_SFLOAT:
      return "VK_FORMAT_R16G16B16A16_SFLOAT";
    case VK_FORMAT_R32_UINT:
      return "VK_FORMAT_R32_UINT";
    case VK_FORMAT_R32_SINT:
      return "VK_FORMAT_R32_SINT";
    case VK_FORMAT_R32_SFLOAT:
      return "VK_FORMAT_R32_SFLOAT";
    case VK_FORMAT_R32G32_UINT:
      return "VK_FORMAT_R32G32_UINT";
    case VK_FORMAT_R32G32_SINT:
      return "VK_FORMAT_R32G32_SINT";
    case VK_FORMAT_R32G32_SFLOAT:
      return "VK_FORMAT_R32G32_SFLOAT";
    case VK_FORMAT_R32G32B32_UINT:
      return "VK_FORMAT_R32G32B32_UINT";
    case VK_FORMAT_R32G32B32_SINT:
      return "VK_FORMAT_R32G32B32_SINT";
    case VK_FORMAT_R32G32B32_SFLOAT:
      return "VK_FORMAT_R32G32B32_SFLOAT";
    case VK_FORMAT_R32G32B32A32_UINT:
      return "VK_FORMAT_R32G32B32A32_UINT";
    case VK_FORMAT_R32G32B32A32_SINT:
      return "VK_FORMAT_R32G32B32A32_SINT";
    case VK_FORMAT_R32G32B32A32_SFLOAT:
      return "VK_FORMAT_R32G32B32A32_SFLOAT";
    case VK_FORMAT_R64_UINT:
      return "VK_FORMAT_R64_UINT";
    case VK_FORMAT_R64_SINT:
      return "VK_FORMAT_R64_SINT";
    case VK_FORMAT_R64_SFLOAT:
      return "VK_FORMAT_R64_SFLOAT";
    case VK_FORMAT_R64G64_UINT:
      return "VK_FORMAT_R64G64_UINT";
    case VK_FORMAT_R64G64_SINT:
      return "VK_FORMAT_R64G64_SINT";
    case VK_FORMAT_R64G64_SFLOAT:
      return "VK_FORMAT_R64G64_SFLOAT";
    case VK_FORMAT_R64G64B64_UINT:
      return "VK_FORMAT_R64G64B64_UINT";
    case VK_FORMAT_R64G64B64_SINT:
      return "VK_FORMAT_R64G64B64_SINT";
    case VK_FORMAT_R64G64B64_SFLOAT:
      return "VK_FORMAT_R64G64B64_SFLOAT";
    case VK_FORMAT_R64G64B64A64_UINT:
      return "VK_FORMAT_R64G64B64A64_UINT";
    case VK_FORMAT_R64G64B64A64_SINT:
      return "VK_FORMAT_R64G64B64A64_SINT";
    case VK_FORMAT_R64G64B64A64_SFLOAT:
      return "VK_FORMAT_R64G64B64A64_SFLOAT";
    case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
      return "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
    case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
      return "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
    case VK_FORMAT_D16_UNORM:
      return "VK_FORMAT_D16_UNORM";
    case VK_FORMAT_X8_D24_UNORM_PACK32:
      return "VK_FORMAT_X8_D24_UNORM_PACK32";
    case VK_FORMAT_D32_SFLOAT:
      return "VK_FORMAT_D32_SFLOAT";
    case VK_FORMAT_S8_UINT:
      return "VK_FORMAT_S8_UINT";
    case VK_FORMAT_D16_UNORM_S8_UINT:
      return "VK_FORMAT_D16_UNORM_S8_UINT";
    case VK_FORMAT_D24_UNORM_S8_UINT:
      return "VK_FORMAT_D24_UNORM_S8_UINT";
    case VK_FORMAT_D32_SFLOAT_S8_UINT:
      return "VK_FORMAT_D32_SFLOAT_S8_UINT";
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
      return "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
      return "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
      return "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
      return "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
    case VK_FORMAT_BC2_UNORM_BLOCK:
      return "VK_FORMAT_BC2_UNORM_BLOCK";
    case VK_FORMAT_BC2_SRGB_BLOCK:
      return "VK_FORMAT_BC2_SRGB_BLOCK";
    case VK_FORMAT_BC3_UNORM_BLOCK:
      return "VK_FORMAT_BC3_UNORM_BLOCK";
    case VK_FORMAT_BC3_SRGB_BLOCK:
      return "VK_FORMAT_BC3_SRGB_BLOCK";
    case VK_FORMAT_BC4_UNORM_BLOCK:
      return "VK_FORMAT_BC4_UNORM_BLOCK";
    case VK_FORMAT_BC4_SNORM_BLOCK:
      return "VK_FORMAT_BC4_SNORM_BLOCK";
    case VK_FORMAT_BC5_UNORM_BLOCK:
      return "VK_FORMAT_BC5_UNORM_BLOCK";
    case VK_FORMAT_BC5_SNORM_BLOCK:
      return "VK_FORMAT_BC5_SNORM_BLOCK";
    case VK_FORMAT_BC6H_UFLOAT_BLOCK:
      return "VK_FORMAT_BC6H_UFLOAT_BLOCK";
    case VK_FORMAT_BC6H_SFLOAT_BLOCK:
      return "VK_FORMAT_BC6H_SFLOAT_BLOCK";
    case VK_FORMAT_BC7_UNORM_BLOCK:
      return "VK_FORMAT_BC7_UNORM_BLOCK";
    case VK_FORMAT_BC7_SRGB_BLOCK:
      return "VK_FORMAT_BC7_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
    case VK_FORMAT_EAC_R11_UNORM_BLOCK:
      return "VK_FORMAT_EAC_R11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11_SNORM_BLOCK:
      return "VK_FORMAT_EAC_R11_SNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
      return "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
      return "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
    }
  }
  else if ((int)param_1 < 0x3b9bcbd1) {
    if (param_1 == VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK) {
      return "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK";
    }
    switch(param_1) {
    case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
    }
  }
  else if ((int)param_1 < 0x3b9d2b61) {
    if (param_1 == VK_FORMAT_G8B8G8R8_422_UNORM) {
      return "VK_FORMAT_G8B8G8R8_422_UNORM";
    }
    switch(param_1) {
    case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK";
    }
  }
  else if ((int)param_1 < 0x3b9fd311) {
    if (param_1 == VK_FORMAT_G8_B8R8_2PLANE_444_UNORM) {
      return "VK_FORMAT_G8_B8R8_2PLANE_444_UNORM";
    }
    switch(param_1) {
    case VK_FORMAT_B8G8R8G8_422_UNORM:
      return "VK_FORMAT_B8G8R8G8_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
      return "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
      return "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM";
    case VK_FORMAT_R10X6_UNORM_PACK16:
      return "VK_FORMAT_R10X6_UNORM_PACK16";
    case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
      return "VK_FORMAT_R10X6G10X6_UNORM_2PACK16";
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
      return "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
    case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
      return "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
    case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
      return "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_R12X4_UNORM_PACK16:
      return "VK_FORMAT_R12X4_UNORM_PACK16";
    case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
      return "VK_FORMAT_R12X4G12X4_UNORM_2PACK16";
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
      return "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
    case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
      return "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
    case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
      return "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_G16B16G16R16_422_UNORM:
      return "VK_FORMAT_G16B16G16R16_422_UNORM";
    case VK_FORMAT_B16G16R16G16_422_UNORM:
      return "VK_FORMAT_B16G16R16G16_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
      return "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
      return "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM";
    }
  }
  else if ((int)param_1 < 0x3ba414e9) {
    if (param_1 == VK_FORMAT_R10X6_UINT_PACK16_ARM) {
      return "VK_FORMAT_R10X6_UINT_PACK16_ARM";
    }
    if ((int)param_1 < 0x3b9ffa22) {
      if (param_1 == VK_FORMAT_A4B4G4R4_UNORM_PACK16) {
        return "VK_FORMAT_A4B4G4R4_UNORM_PACK16";
      }
      if (param_1 == VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16) {
        return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16";
      }
      if (param_1 == VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16) {
        return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16";
      }
      if (param_1 == VK_FORMAT_G16_B16R16_2PLANE_444_UNORM) {
        return "VK_FORMAT_G16_B16R16_2PLANE_444_UNORM";
      }
      if (param_1 == VK_FORMAT_A4R4G4B4_UNORM_PACK16) {
        return "VK_FORMAT_A4R4G4B4_UNORM_PACK16";
      }
    }
    else {
      if (param_1 == VK_FORMAT_R8_BOOL_ARM) {
        return "VK_FORMAT_R8_BOOL_ARM";
      }
      if (param_1 == VK_FORMAT_R16G16_S10_5_NV) {
        return "VK_FORMAT_R16G16_SFIXED5_NV";
      }
      if (param_1 == VK_FORMAT_A1B5G5R5_UNORM_PACK16) {
        return "VK_FORMAT_A1B5G5R5_UNORM_PACK16";
      }
      if (param_1 == VK_FORMAT_A8_UNORM) {
        return "VK_FORMAT_A8_UNORM";
      }
    }
  }
  else {
    switch(param_1) {
    case VK_FORMAT_R10X6G10X6_UINT_2PACK16_ARM:
      return "VK_FORMAT_R10X6G10X6_UINT_2PACK16_ARM";
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UINT_4PACK16_ARM:
      return "VK_FORMAT_R10X6G10X6B10X6A10X6_UINT_4PACK16_ARM";
    case VK_FORMAT_R12X4_UINT_PACK16_ARM:
      return "VK_FORMAT_R12X4_UINT_PACK16_ARM";
    case VK_FORMAT_R12X4G12X4_UINT_2PACK16_ARM:
      return "VK_FORMAT_R12X4G12X4_UINT_2PACK16_ARM";
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UINT_4PACK16_ARM:
      return "VK_FORMAT_R12X4G12X4B12X4A12X4_UINT_4PACK16_ARM";
    case VK_FORMAT_R14X2_UINT_PACK16_ARM:
      return "VK_FORMAT_R14X2_UINT_PACK16_ARM";
    case VK_FORMAT_R14X2G14X2_UINT_2PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2_UINT_2PACK16_ARM";
    case VK_FORMAT_R14X2G14X2B14X2A14X2_UINT_4PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2B14X2A14X2_UINT_4PACK16_ARM";
    case VK_FORMAT_R14X2_UNORM_PACK16_ARM:
      return "VK_FORMAT_R14X2_UNORM_PACK16_ARM";
    case VK_FORMAT_R14X2G14X2_UNORM_2PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2_UNORM_2PACK16_ARM";
    case VK_FORMAT_R14X2G14X2B14X2A14X2_UNORM_4PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2B14X2A14X2_UNORM_4PACK16_ARM";
    case VK_FORMAT_G14X2_B14X2R14X2_2PLANE_420_UNORM_3PACK16_ARM:
      return "VK_FORMAT_G14X2_B14X2R14X2_2PLANE_420_UNORM_3PACK16_ARM";
    case VK_FORMAT_G14X2_B14X2R14X2_2PLANE_422_UNORM_3PACK16_ARM:
      return "VK_FORMAT_G14X2_B14X2R14X2_2PLANE_422_UNORM_3PACK16_ARM";
    }
  }
  return "Unhandled VkFormat";
}

// string_VkImageAspectFlags @ 145bc40a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string_VkImageAspectFlags
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uint param_1)

{
  char *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  size_t _Size;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  char *pcVar5;
  uint uVar6;
  <lambda_1> local_res10;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if (param_1 != 0) {
    uVar6 = 1;
    do {
      if ((param_1 & 1) != 0) {
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 != 0) {
          uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
          if (uVar2 == uVar1) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      (__return_storage_ptr__,1,local_res10,"|",1);
          }
          else {
            (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 1;
            pbVar4 = __return_storage_ptr__;
            if (0xf < uVar2) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1) = 0x7c;
          }
        }
        if ((int)uVar6 < 0x21) {
          if (uVar6 == 0x20) {
            pcVar5 = "VK_IMAGE_ASPECT_PLANE_1_BIT";
          }
          else {
            switch(uVar6) {
            case 0:
              pcVar5 = "VK_IMAGE_ASPECT_NONE";
              break;
            case 1:
              pcVar5 = "VK_IMAGE_ASPECT_COLOR_BIT";
              break;
            case 2:
              pcVar5 = "VK_IMAGE_ASPECT_DEPTH_BIT";
              break;
            default:
switchD_145bc4186_caseD_3:
              pcVar5 = "Unhandled VkImageAspectFlagBits";
              break;
            case 4:
              pcVar5 = "VK_IMAGE_ASPECT_STENCIL_BIT";
              break;
            case 8:
              pcVar5 = "VK_IMAGE_ASPECT_METADATA_BIT";
              break;
            case 0x10:
              pcVar5 = "VK_IMAGE_ASPECT_PLANE_0_BIT";
            }
          }
        }
        else if (uVar6 == 0x40) {
          pcVar5 = "VK_IMAGE_ASPECT_PLANE_2_BIT";
        }
        else if (uVar6 == 0x80) {
          pcVar5 = "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT";
        }
        else if (uVar6 == 0x100) {
          pcVar5 = "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT";
        }
        else if (uVar6 == 0x200) {
          pcVar5 = "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT";
        }
        else {
          if (uVar6 != 0x400) goto switchD_145bc4186_caseD_3;
          pcVar5 = "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT";
        }
        _Size = strlen(pcVar5);
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 - uVar3 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (__return_storage_ptr__,_Size,local_res10,pcVar5,_Size);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + _Size;
          pbVar4 = __return_storage_ptr__;
          if (0xf < uVar1) {
            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          _Dst = (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar3;
          memmove(_Dst,pcVar5,_Size);
          _Dst[_Size] = '\0';
        }
      }
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
    if (0x14 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x15;
      pcVar5 = (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      memmove(pcVar5,"VkImageAspectFlags(0)",0x15);
      pcVar5[0x15] = '\0';
      return __return_storage_ptr__;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (__return_storage_ptr__,0x15,local_res10,"VkImageAspectFlags(0)",0x15);
  }
  return __return_storage_ptr__;
}

// string_VkMemoryPropertyFlags @ 145bc4370

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string_VkMemoryPropertyFlags
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uint param_1)

{
  char *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  size_t _Size;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  uint uVar5;
  char *pcVar6;
  <lambda_1> local_res10;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if (param_1 != 0) {
    uVar5 = 1;
    do {
      if ((param_1 & 1) != 0) {
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 != 0) {
          uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
          if (uVar2 == uVar1) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      (__return_storage_ptr__,1,local_res10,"|",1);
          }
          else {
            (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 1;
            pbVar4 = __return_storage_ptr__;
            if (0xf < uVar2) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1) = 0x7c;
          }
        }
        if ((int)uVar5 < 0x11) {
          if (uVar5 == 0x10) {
            pcVar6 = "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT";
          }
          else if (uVar5 == 1) {
            pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT";
          }
          else if (uVar5 == 2) {
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT";
          }
          else if (uVar5 == 4) {
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT";
          }
          else {
            if (uVar5 != 8) goto LAB_145bc4493;
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_CACHED_BIT";
          }
        }
        else if (uVar5 == 0x20) {
          pcVar6 = "VK_MEMORY_PROPERTY_PROTECTED_BIT";
        }
        else if (uVar5 == 0x40) {
          pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD";
        }
        else if (uVar5 == 0x80) {
          pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD";
        }
        else if (uVar5 == 0x100) {
          pcVar6 = "VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV";
        }
        else {
LAB_145bc4493:
          pcVar6 = "Unhandled VkMemoryPropertyFlagBits";
        }
        _Size = strlen(pcVar6);
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 - uVar3 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (__return_storage_ptr__,_Size,local_res10,pcVar6,_Size);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + _Size;
          pbVar4 = __return_storage_ptr__;
          if (0xf < uVar1) {
            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          _Dst = (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar3;
          memmove(_Dst,pcVar6,_Size);
          _Dst[_Size] = '\0';
        }
      }
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
    if (0x17 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x18;
      pcVar6 = (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      memmove(pcVar6,"VkMemoryPropertyFlags(0)",0x18);
      pcVar6[0x18] = '\0';
      return __return_storage_ptr__;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (__return_storage_ptr__,0x18,local_res10,"VkMemoryPropertyFlags(0)",0x18);
  }
  return __return_storage_ptr__;
}

// string_VkPipelineStageFlagBits @ 145bc45c0

/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

char * __cdecl string_VkPipelineStageFlagBits(VkPipelineStageFlagBits param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x1001) {
    if (param_1 == VK_PIPELINE_STAGE_TRANSFER_BIT) {
      return "VK_PIPELINE_STAGE_TRANSFER_BIT";
    }
    if ((int)param_1 < 0x21) {
      if (param_1 == VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT) {
        return "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT";
      }
      switch(param_1) {
      case VK_PIPELINE_STAGE_NONE:
        return "VK_PIPELINE_STAGE_NONE";
      case VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT:
        return "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT";
      case VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT:
        return "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT";
      case VK_PIPELINE_STAGE_VERTEX_INPUT_BIT:
        return "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT";
      case VK_PIPELINE_STAGE_VERTEX_SHADER_BIT:
        return "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT";
      case VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT:
        return "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT";
      }
    }
    else {
      if (0x200 < (int)param_1) {
        if (param_1 != VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT) {
          pcVar1 = "Unhandled VkPipelineStageFlagBits";
          if (param_1 == VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT) {
            pcVar1 = "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT";
          }
          return pcVar1;
        }
        return "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT";
      }
      if (param_1 == VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT) {
        return "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT";
      }
      if (param_1 == VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT) {
        return "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT";
      }
      if (param_1 == VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT) {
        return "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT";
      }
      if (param_1 == VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT) {
        return "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT";
      }
    }
    return "Unhandled VkPipelineStageFlagBits";
  }
  if ((int)param_1 < 0x80001) {
    if (param_1 == VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT) {
      return "VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT";
    }
    if (0x10000 < (int)param_1) {
      if (param_1 != VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_EXT) {
        pcVar1 = "Unhandled VkPipelineStageFlagBits";
        if (param_1 == VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT) {
          pcVar1 = "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT";
        }
        return pcVar1;
      }
      return "VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_EXT";
    }
    if (param_1 == VK_PIPELINE_STAGE_ALL_COMMANDS_BIT) {
      return "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT";
    }
    if (param_1 != VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT) {
      if (param_1 != VK_PIPELINE_STAGE_HOST_BIT) {
        pcVar1 = "Unhandled VkPipelineStageFlagBits";
        if (param_1 == VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT) {
          pcVar1 = "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT";
        }
        return pcVar1;
      }
      return "VK_PIPELINE_STAGE_HOST_BIT";
    }
    return "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT";
  }
  if (0x800000 < (int)param_1) {
    if (param_1 != VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT) {
      pcVar1 = "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR";
      if (param_1 != VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR) {
        pcVar1 = "Unhandled VkPipelineStageFlagBits";
      }
      return pcVar1;
    }
    return "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT";
  }
  if (param_1 == VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT) {
    return "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
  }
  if (param_1 == VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT) {
    return "VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT";
  }
  if (param_1 != VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR) {
    pcVar1 = "Unhandled VkPipelineStageFlagBits";
    if (param_1 == VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR) {
      pcVar1 = "VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
    }
    return pcVar1;
  }
  return "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR";
}

// string_VkPresentModeKHR @ 145bc4800

/* WARNING: Enum "VkPresentModeKHR": Some values do not have unique names */

char * __cdecl string_VkPresentModeKHR(VkPresentModeKHR param_1)

{
  if ((int)param_1 < 4) {
    if (param_1 == VK_PRESENT_MODE_FIFO_RELAXED_KHR) {
      return "VK_PRESENT_MODE_FIFO_RELAXED_KHR";
    }
    if (param_1 == VK_PRESENT_MODE_IMMEDIATE_KHR) {
      return "VK_PRESENT_MODE_IMMEDIATE_KHR";
    }
    if (param_1 == VK_PRESENT_MODE_MAILBOX_KHR) {
      return "VK_PRESENT_MODE_MAILBOX_KHR";
    }
    if (param_1 == VK_PRESENT_MODE_FIFO_KHR) {
      return "VK_PRESENT_MODE_FIFO_KHR";
    }
  }
  else {
    if (param_1 == VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR) {
      return "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR";
    }
    if (param_1 == VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR) {
      return "VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR";
    }
    if (param_1 == VK_PRESENT_MODE_FIFO_LATEST_READY_EXT) {
      return "VK_PRESENT_MODE_FIFO_LATEST_READY_KHR";
    }
  }
  return "Unhandled VkPresentModeKHR";
}

// string_VkResult @ 145bc4870

/* WARNING: Enum "VkResult": Some values do not have unique names */

char * __cdecl string_VkResult(VkResult param_1)

{
  char *pcVar1;
  
  if (-0xd < (int)param_1) {
    if ((int)param_1 < 0x3b9acdec) {
      if (param_1 == VK_SUBOPTIMAL_KHR) {
        return "VK_SUBOPTIMAL_KHR";
      }
      switch(param_1) {
      case VK_SUCCESS:
        return "VK_SUCCESS";
      case VK_NOT_READY:
        return "VK_NOT_READY";
      case VK_TIMEOUT:
        return "VK_TIMEOUT";
      case VK_EVENT_SET:
        return "VK_EVENT_SET";
      case VK_EVENT_RESET:
        return "VK_EVENT_RESET";
      case VK_INCOMPLETE:
        return "VK_INCOMPLETE";
      case VK_ERROR_FRAGMENTED_POOL:
        return "VK_ERROR_FRAGMENTED_POOL";
      case VK_ERROR_FORMAT_NOT_SUPPORTED:
        return "VK_ERROR_FORMAT_NOT_SUPPORTED";
      case VK_ERROR_TOO_MANY_OBJECTS:
        return "VK_ERROR_TOO_MANY_OBJECTS";
      case VK_ERROR_INCOMPATIBLE_DRIVER:
        return "VK_ERROR_INCOMPATIBLE_DRIVER";
      case VK_ERROR_FEATURE_NOT_PRESENT:
        return "VK_ERROR_FEATURE_NOT_PRESENT";
      case VK_ERROR_EXTENSION_NOT_PRESENT:
        return "VK_ERROR_EXTENSION_NOT_PRESENT";
      case VK_ERROR_LAYER_NOT_PRESENT:
        return "VK_ERROR_LAYER_NOT_PRESENT";
      case VK_ERROR_MEMORY_MAP_FAILED:
        return "VK_ERROR_MEMORY_MAP_FAILED";
      case VK_ERROR_DEVICE_LOST:
        return "VK_ERROR_DEVICE_LOST";
      case VK_ERROR_INITIALIZATION_FAILED:
        return "VK_ERROR_INITIALIZATION_FAILED";
      case VK_ERROR_OUT_OF_DEVICE_MEMORY:
        return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      case VK_ERROR_OUT_OF_HOST_MEMORY:
        return "VK_ERROR_OUT_OF_HOST_MEMORY";
      }
    }
    else {
      if (0x3b9ee0e3 < (int)param_1) {
        if (param_1 == VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT) {
          return "VK_PIPELINE_COMPILE_REQUIRED";
        }
        if (param_1 == VK_ERROR_INCOMPATIBLE_SHADER_BINARY_EXT) {
          return "VK_INCOMPATIBLE_SHADER_BINARY_EXT";
        }
        pcVar1 = "VK_PIPELINE_BINARY_MISSING_KHR";
        if (param_1 != VK_PIPELINE_BINARY_MISSING_KHR) {
          pcVar1 = "Unhandled VkResult";
        }
        return pcVar1;
      }
      if (param_1 == VK_OPERATION_NOT_DEFERRED_KHR) {
        return "VK_OPERATION_NOT_DEFERRED_KHR";
      }
      if (param_1 == VK_THREAD_IDLE_KHR) {
        return "VK_THREAD_IDLE_KHR";
      }
      if (param_1 == VK_THREAD_DONE_KHR) {
        return "VK_THREAD_DONE_KHR";
      }
      if (param_1 == VK_OPERATION_DEFERRED_KHR) {
        return "VK_OPERATION_DEFERRED_KHR";
      }
    }
    return "Unhandled VkResult";
  }
  if (param_1 == VK_ERROR_UNKNOWN) {
    return "VK_ERROR_UNKNOWN";
  }
  if ((int)param_1 < -0x3b9b23dc) {
    if (param_1 == VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR) {
      return "VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR";
    }
    if (-0x3b9d71b1 < (int)param_1) {
      if (param_1 == VK_ERROR_FRAGMENTATION) {
        return "VK_ERROR_FRAGMENTATION";
      }
      if (param_1 == VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT) {
        return "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
      }
      if (param_1 == VK_ERROR_INVALID_EXTERNAL_HANDLE) {
        return "VK_ERROR_INVALID_EXTERNAL_HANDLE";
      }
      pcVar1 = "Unhandled VkResult";
      if (param_1 == VK_ERROR_OUT_OF_POOL_MEMORY) {
        pcVar1 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      }
      return pcVar1;
    }
    if (param_1 == VK_ERROR_NOT_PERMITTED) {
      return "VK_ERROR_NOT_PERMITTED";
    }
    if (param_1 == VK_ERROR_NOT_ENOUGH_SPACE_KHR) {
      return "VK_ERROR_NOT_ENOUGH_SPACE_KHR";
    }
    if (param_1 == VK_ERROR_COMPRESSION_EXHAUSTED_EXT) {
      return "VK_ERROR_COMPRESSION_EXHAUSTED_EXT";
    }
    if (param_1 == VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR) {
      return "VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR";
    }
    if (param_1 == VK_ERROR_INVALID_DEVICE_ADDRESS_EXT) {
      return "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
    }
    pcVar1 = "Unhandled VkResult";
    if (param_1 == VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT) {
      pcVar1 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
    }
    return pcVar1;
  }
  if (-0x3b9af8e0 < (int)param_1) {
    if (param_1 == VK_ERROR_VALIDATION_FAILED_EXT) {
      return "VK_ERROR_VALIDATION_FAILED_EXT";
    }
    if (param_1 == VK_ERROR_INCOMPATIBLE_DISPLAY_KHR) {
      return "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
    }
    if (param_1 == VK_ERROR_OUT_OF_DATE_KHR) {
      return "VK_ERROR_OUT_OF_DATE_KHR";
    }
    if (param_1 == VK_ERROR_NATIVE_WINDOW_IN_USE_KHR) {
      return "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
    }
    pcVar1 = "Unhandled VkResult";
    if (param_1 == VK_ERROR_SURFACE_LOST_KHR) {
      pcVar1 = "VK_ERROR_SURFACE_LOST_KHR";
    }
    return pcVar1;
  }
  if (param_1 == VK_ERROR_INVALID_SHADER_NV) {
    return "VK_ERROR_INVALID_SHADER_NV";
  }
  if (param_1 == VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR) {
    return "VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR";
  }
  if (param_1 == VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR) {
    return "VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR";
  }
  if (param_1 == VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR) {
    return "VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR";
  }
  if (param_1 == VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR) {
    return "VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR";
  }
  pcVar1 = "Unhandled VkResult";
  if (param_1 == VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR) {
    pcVar1 = "VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR";
  }
  return pcVar1;
}

// vpCreateInstance @ 145bc4bc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VkResult __cdecl
vpCreateInstance(VpInstanceCreateInfo *param_1,VkAllocationCallbacks *param_2,VkInstance_T **param_3
                )

{
  char **ppcVar1;
  ulonglong uVar2;
  VkApplicationInfo *pVVar3;
  VkInstanceCreateInfo *pVVar4;
  VpProfileProperties *pVVar5;
  int iVar6;
  VkResult VVar7;
  char **ppcVar8;
  char **ppcVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  char **ppcVar13;
  ulonglong uVar14;
  longlong lVar15;
  char **ppcVar16;
  VpBlockProperties *pVVar17;
  char **ppcVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  uint uVar21;
  VpProfileDesc *_Str1;
  char **local_148;
  uint local_140;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> local_108;
  longlong local_f0;
  ulonglong local_e8;
  uint *local_e0;
  ulonglong local_d8;
  VpProfileDesc *local_d0;
  ulonglong local_c8;
  VpCapabilities_T *local_c0;
  ulonglong local_b8;
  void *pvStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  ulonglong *puStack_70;
  undefined8 local_68;
  char **ppcStack_60;
  undefined8 local_58;
  char **ppcStack_50;
  
  local_c0 = VpCapabilities_T::Get();
  if ((param_1 == (VpInstanceCreateInfo *)0x0) || (param_3 == (VkInstance_T **)0x0)) {
    if (param_1 != (VpInstanceCreateInfo *)0x0) {
      VVar7 = (*(code *)local_c0->_padding_)(param_1->pCreateInfo,param_2,param_3);
      return VVar7;
    }
    VVar7 = (*(code *)local_c0->_padding_)(0,param_2,param_3);
    return VVar7;
  }
  detail::GatherBlocks
            (&local_108,param_1->enabledFullProfileCount,param_1->pEnabledFullProfiles,
             param_1->enabledProfileBlockCount,param_1->pEnabledProfileBlocks);
  ppcVar9 = (char **)0x0;
  local_148 = (char **)0x0;
  uVar11 = param_1->pCreateInfo->enabledExtensionCount;
  ppcVar8 = ppcVar9;
  ppcVar16 = ppcVar9;
  ppcVar18 = ppcVar9;
  ppcVar13 = ppcVar9;
  if (uVar11 != 0) {
    do {
      ppcVar1 = param_1->pCreateInfo->ppEnabledExtensionNames + (longlong)ppcVar13;
      if (ppcVar16 == ppcVar18) {
        lVar15 = (longlong)ppcVar16 - (longlong)ppcVar9 >> 3;
        if (lVar15 == 0x1fffffffffffffff) goto LAB_145bc53df;
        uVar14 = lVar15 + 1;
        uVar20 = (longlong)local_148 - (longlong)ppcVar9 >> 3;
        if (0x1fffffffffffffff - (uVar20 >> 1) < uVar20) {
          uVar10 = 0x1fffffffffffffff;
        }
        else {
          uVar2 = uVar20 + (uVar20 >> 1);
          uVar10 = uVar14;
          if (uVar14 <= uVar2) {
            uVar10 = uVar2;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_145bc53e5;
        }
        ppcVar8 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 8);
        ppcVar8[lVar15] = *ppcVar1;
        memmove(ppcVar8,ppcVar9,(longlong)ppcVar16 - (longlong)ppcVar9);
        if (ppcVar9 != (char **)0x0) {
          uVar20 = uVar20 * 8;
          ppcVar16 = ppcVar9;
          if (0xfff < uVar20) {
            ppcVar16 = (char **)ppcVar9[-1];
            uVar20 = uVar20 + 0x27;
            if (0x1f < (ulonglong)((longlong)ppcVar9 + (-8 - (longlong)ppcVar16)))
            goto LAB_145bc5393;
          }
          operator_delete(ppcVar16,uVar20);
        }
        ppcVar16 = ppcVar8 + uVar14;
        ppcVar18 = ppcVar8 + uVar10;
        local_148 = ppcVar18;
      }
      else {
        *ppcVar16 = *ppcVar1;
        ppcVar16 = ppcVar16 + 1;
        ppcVar8 = ppcVar9;
      }
      uVar21 = (int)ppcVar13 + 1;
      ppcVar9 = ppcVar8;
      ppcVar13 = (char **)(ulonglong)uVar21;
    } while (uVar21 < uVar11);
  }
  local_138 = 0;
  local_c8 = ((longlong)local_108._Mypair._Myval2._Mylast -
             (longlong)local_108._Mypair._Myval2._Myfirst) / 0x208;
  if (local_c8 != 0) {
    local_130 = 0;
    do {
      uVar14 = 0;
      pVVar5 = &(local_108._Mypair._Myval2._Myfirst)->profiles;
      while( true ) {
        _Str1 = detail::profiles + uVar14;
        local_d0 = _Str1;
        iVar6 = strncmp((char *)_Str1,pVVar5->profileName + local_130,0x100);
        if (iVar6 == 0) break;
        uVar11 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar11;
        if (5 < uVar11) goto LAB_145bc5117;
      }
      if (_Str1 == (VpProfileDesc *)0x0) {
LAB_145bc5117:
        VVar7 = VK_ERROR_UNKNOWN;
        ppcVar9 = ppcVar8;
        goto LAB_145bc52b2;
      }
      local_d8 = (ulonglong)detail::profiles[uVar14].requiredCapabilityCount;
      local_118 = 0;
      if (local_d8 != 0) {
        local_110 = 0;
        do {
          local_e0 = (uint *)((longlong)&_Str1->pRequiredCapabilities->variantCount + local_110);
          local_128 = 0;
          local_e8 = (ulonglong)*local_e0;
          if (local_e8 != 0) {
            local_120 = 0;
            do {
              pVVar17 = local_108._Mypair._Myval2._Myfirst;
              pcVar12 = (char *)(*(longlong *)(local_e0 + 2) + local_120);
              iVar6 = strcmp((local_108._Mypair._Myval2._Myfirst)->blockName + local_130,"");
              if ((iVar6 == 0) ||
                 (iVar6 = strcmp(pcVar12,pVVar17->blockName + local_130), iVar6 == 0)) {
                uVar11 = *(uint *)(pcVar12 + 0x100);
                uVar14 = 0;
                lVar15 = *(longlong *)(pcVar12 + 0x108);
                local_140 = 0;
                ppcVar9 = ppcVar8;
                local_f0 = lVar15;
                if (uVar11 != 0) {
                  do {
                    ppcVar8 = ppcVar9;
                    if (ppcVar9 != ppcVar16) {
                      ppcVar13 = ppcVar9;
                      do {
                        iVar6 = strcmp(*ppcVar13,(char *)(uVar14 * 0x104 + lVar15));
                        if (iVar6 == 0) goto LAB_145bc502f;
                        ppcVar13 = ppcVar13 + 1;
                      } while (ppcVar13 != ppcVar16);
                    }
                    pcVar12 = (char *)(uVar14 * 0x104 + lVar15);
                    if (ppcVar16 == ppcVar18) {
                      lVar15 = (longlong)ppcVar16 - (longlong)ppcVar9 >> 3;
                      if (lVar15 == 0x1fffffffffffffff) goto LAB_145bc53df;
                      uVar14 = lVar15 + 1;
                      uVar20 = (longlong)ppcVar18 - (longlong)ppcVar9 >> 3;
                      if (0x1fffffffffffffff - (uVar20 >> 1) < uVar20) {
                        uVar10 = 0x1fffffffffffffff;
                      }
                      else {
                        uVar2 = (uVar20 >> 1) + uVar20;
                        uVar10 = uVar14;
                        if (uVar14 <= uVar2) {
                          uVar10 = uVar2;
                        }
                        if (0x1fffffffffffffff < uVar10) goto LAB_145bc53e5;
                      }
                      ppcVar8 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 8);
                      ppcVar8[lVar15] = pcVar12;
                      memmove(ppcVar8,ppcVar9,(longlong)ppcVar16 - (longlong)ppcVar9);
                      if (ppcVar9 != (char **)0x0) {
                        uVar20 = uVar20 * 8;
                        ppcVar16 = ppcVar9;
                        if (0xfff < uVar20) {
                          ppcVar16 = (char **)ppcVar9[-1];
                          uVar20 = uVar20 + 0x27;
                          if (0x1f < (ulonglong)((longlong)ppcVar9 + (-8 - (longlong)ppcVar16)))
                          goto LAB_145bc5393;
                        }
                        operator_delete(ppcVar16,uVar20);
                      }
                      ppcVar16 = ppcVar8 + uVar14;
                      ppcVar18 = ppcVar8 + uVar10;
                      lVar15 = local_f0;
                    }
                    else {
                      *ppcVar16 = pcVar12;
                      ppcVar16 = ppcVar16 + 1;
                    }
LAB_145bc502f:
                    local_140 = local_140 + 1;
                    uVar14 = (ulonglong)local_140;
                    ppcVar9 = ppcVar8;
                  } while (local_140 < uVar11);
                }
              }
              local_128 = local_128 + 1;
              local_120 = local_120 + 0x1d0;
            } while (local_128 < local_e8);
          }
          local_118 = local_118 + 1;
          local_110 = local_110 + 0x10;
          _Str1 = local_d0;
        } while (local_118 < local_d8);
      }
      local_138 = local_138 + 1;
      local_130 = local_130 + 0x208;
    } while (local_138 < local_c8);
  }
  uVar14 = 0;
  local_90 = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  pvStack_b0 = (void *)0x0;
  pcStack_a8 = (char *)0x0;
  uStack_a0 = 0;
  pcStack_98 = (char *)0x0;
  pVVar3 = param_1->pCreateInfo->pApplicationInfo;
  if (pVVar3 == (VkApplicationInfo *)0x0) {
    if (local_108._Mypair._Myval2._Myfirst == local_108._Mypair._Myval2._Mylast) {
      local_90._4_4_ = 0;
      uVar11 = local_90._4_4_;
    }
    else {
      uVar11 = vpGetProfileAPIVersion(&(local_108._Mypair._Myval2._Myfirst)->profiles);
      local_90 = CONCAT44(uVar11,(undefined4)local_90);
    }
  }
  else {
    local_b8 = *(ulonglong *)pVVar3;
    pvStack_b0 = pVVar3->pNext;
    pcStack_a8 = pVVar3->pApplicationName;
    uStack_a0 = *(undefined8 *)&pVVar3->applicationVersion;
    pcStack_98 = pVVar3->pEngineName;
    local_90._0_4_ = pVVar3->engineVersion;
    local_90._4_4_ = pVVar3->apiVersion;
    uVar11 = pVVar3->apiVersion;
  }
  pVVar4 = param_1->pCreateInfo;
  local_88 = *(undefined8 *)pVVar4;
  pvStack_80 = pVVar4->pNext;
  local_78 = *(undefined8 *)&pVVar4->flags;
  local_68 = *(undefined8 *)&pVVar4->enabledLayerCount;
  ppcStack_60 = pVVar4->ppEnabledLayerNames;
  local_58 = *(undefined8 *)&pVVar4->enabledExtensionCount;
  ppcStack_50 = pVVar4->ppEnabledExtensionNames;
  puStack_70 = &local_b8;
  ppcVar9 = ppcVar8;
  if (uVar11 < 0x401000) {
    uVar20 = (longlong)ppcVar16 - (longlong)ppcVar8 >> 3;
    if (uVar20 != 0) {
      do {
        iVar6 = strcmp(ppcVar8[uVar14],"VK_KHR_get_physical_device_properties2");
        if (iVar6 == 0) goto LAB_145bc5281;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar20);
    }
    if (ppcVar16 == ppcVar18) {
      lVar15 = (longlong)ppcVar16 - (longlong)ppcVar8 >> 3;
      if (lVar15 == 0x1fffffffffffffff) {
LAB_145bc53df:
                    /* WARNING: Subroutine does not return */
        std::vector<char_const_*,std::allocator<char_const_*>_>::_Xlength();
      }
      uVar14 = lVar15 + 1;
      uVar20 = (longlong)ppcVar18 - (longlong)ppcVar8 >> 3;
      if (0x1fffffffffffffff - (uVar20 >> 1) < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      else {
        uVar2 = (uVar20 >> 1) + uVar20;
        uVar10 = uVar14;
        if (uVar14 <= uVar2) {
          uVar10 = uVar2;
        }
        if (0x1fffffffffffffff < uVar10) {
LAB_145bc53e5:
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      ppcVar9 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 8);
      ppcVar9[lVar15] = "VK_KHR_get_physical_device_properties2";
      memmove(ppcVar9,ppcVar8,(longlong)ppcVar16 - (longlong)ppcVar8);
      if (ppcVar8 != (char **)0x0) {
        uVar20 = uVar20 * 8;
        ppcVar16 = ppcVar8;
        if (0xfff < uVar20) {
          ppcVar16 = (char **)ppcVar8[-1];
          uVar20 = uVar20 + 0x27;
          if (0x1f < (ulonglong)((longlong)ppcVar8 + (-8 - (longlong)ppcVar16))) goto LAB_145bc5393;
        }
        operator_delete(ppcVar16,uVar20);
      }
      ppcVar16 = ppcVar9 + uVar14;
      ppcVar18 = ppcVar9 + uVar10;
    }
    else {
      *ppcVar16 = "VK_KHR_get_physical_device_properties2";
      ppcVar16 = ppcVar16 + 1;
    }
  }
LAB_145bc5281:
  if (ppcVar9 != ppcVar16) {
    local_58 = CONCAT44(local_58._4_4_,(int)((longlong)ppcVar16 - (longlong)ppcVar9 >> 3));
    ppcStack_50 = ppcVar9;
  }
  VVar7 = (*(code *)local_c0->_padding_)(&local_88);
LAB_145bc52b2:
  if (ppcVar9 != (char **)0x0) {
    uVar19 = (longlong)ppcVar18 - (longlong)ppcVar9 & 0xfffffffffffffff8;
    ppcVar16 = ppcVar9;
    if (0xfff < uVar19) {
      ppcVar16 = (char **)ppcVar9[-1];
      uVar19 = uVar19 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppcVar9 + (-8 - (longlong)ppcVar16))) goto LAB_145bc5393;
    }
    operator_delete(ppcVar16,uVar19);
  }
  if (local_108._Mypair._Myval2._Myfirst != (VpBlockProperties *)0x0) {
    uVar19 = (((longlong)local_108._Mypair._Myval2._Myend -
              (longlong)local_108._Mypair._Myval2._Myfirst) / 0x208) * 0x208;
    pVVar17 = local_108._Mypair._Myval2._Myfirst;
    if (0xfff < uVar19) {
      pVVar17 = *(VpBlockProperties **)(local_108._Mypair._Myval2._Myfirst[-1].blockName + 0xf8);
      uVar19 = uVar19 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_108._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar17))) {
LAB_145bc5393:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pVVar17,uVar19);
  }
  return VVar7;
}

// vpForEachMatchingVideoProfiles @ 145bc5400

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
detail::vpForEachMatchingVideoProfiles
          (VkVideoProfileInfoKHR *param_1,void *param_2,
          _func___cdecl_void_VkBaseOutStructure_ptr_void_ptr *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_68 [4];
  uint local_58 [6];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  local_58[0] = 2;
  local_58[1] = 4;
  local_58[2] = 8;
  local_58[3] = 1;
  local_68[0] = 1;
  local_68[1] = 4;
  local_68[2] = 0x10;
  uVar1 = uVar2;
  do {
    param_1->chromaSubsampling = local_58[uVar1];
    uVar3 = uVar2;
    do {
      param_1->lumaBitDepth = local_68[uVar3];
      uVar4 = uVar2;
      do {
        param_1->chromaBitDepth = local_68[uVar4];
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR;
        param_1->pNext = local_58 + 4;
        local_58[4] = 0x3b9b6643;
        local_40 = 0;
        uStack_38 = 0x42;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x4d;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 100;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,0xf4);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x42;
        uStack_38._4_4_ = 1;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x4d;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 100;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,0xf4);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x42;
        uStack_38._4_4_ = 2;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x4d;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 100;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,0xf4);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR;
        local_40 = 0;
        uStack_38._0_4_ = 1;
        uStack_38._4_4_ = 0;
        local_58[4] = 0x3b9da47b;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 2;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 3;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,9);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_DECODE_VP9_BIT_KHR;
        local_40 = 0;
        uStack_38 = 0;
        local_58[4] = 0x3ba2a1d3;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 1;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 2;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,3);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_DECODE_AV1_BIT_KHR;
        local_40 = 0;
        uStack_38._0_4_ = 0;
        uStack_38._4_4_ = 1;
        local_58[4] = 0x3ba29a03;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 1;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,2);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = 0;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 1;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,2);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_KHR;
        local_40 = 0;
        uStack_38._0_4_ = 0x42;
        uStack_38._4_4_ = 0;
        local_58[4] = 0x3b9b5e77;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 0x4d;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 100;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,0xf4);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_KHR;
        local_40 = 0;
        uStack_38._0_4_ = 1;
        uStack_38._4_4_ = 0;
        local_58[4] = 0x3b9b625f;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 2;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 3;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,9);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        param_1->videoCodecOperation = VK_VIDEO_CODEC_OPERATION_ENCODE_AV1_BIT_KHR;
        local_40 = 0;
        uStack_38 = 0;
        local_58[4] = 0x3ba29ded;
        param_1->pNext = local_58 + 4;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38._0_4_ = 1;
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uStack_38 = CONCAT44(uStack_38._4_4_,2);
        (*param_3)((VkBaseOutStructure *)param_1,param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

// vpGetInstanceProfileSupportSingleProfile @ 145bc5810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

VkResult __cdecl
detail::vpGetInstanceProfileSupportSingleProfile
          (uint param_1,
          vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> *param_2,
          VpProfileProperties *param_3,uint *param_4,
          vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *param_5,
          vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *param_6)

{
  VpBlockProperties **ppVVar1;
  VpBlockProperties *pVVar2;
  VpBlockProperties *pVVar3;
  VkExtensionProperties *pVVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  VkResult VVar10;
  int iVar11;
  VpProfileDesc *pVVar12;
  VpProfileProperties *pVVar13;
  ulonglong uVar14;
  size_t sVar15;
  char *pcVar16;
  VpBlockProperties *pVVar17;
  VpBlockProperties *pVVar18;
  longlong lVar19;
  VpVariantDesc *pVVar20;
  uint uVar21;
  longlong lVar22;
  VkExtensionProperties *_Str1;
  VpVariantDesc *pVVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_808 [32];
  uint local_7e8;
  uint local_7e0;
  uint local_7d8;
  uint local_7d0;
  uint local_7c8;
  uint local_7b8;
  int local_7b4;
  uint local_7b0;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *local_7a8;
  vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> *local_7a0;
  VpCapabilitiesDesc *local_798;
  VpProfileDesc *local_790;
  uint *local_788;
  VpBlockProperties local_778;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_568;
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_808;
  local_7a8 = param_5;
  local_7a0 = param_2;
  local_788 = param_4;
  pVVar12 = vpGetProfileDesc(param_3->profileName);
  if (pVVar12 == (VpProfileDesc *)0x0) {
    *param_4 = 0;
    VVar10 = VK_ERROR_UNKNOWN;
  }
  else {
    lVar22 = 2;
    pVVar13 = param_3;
    pVVar18 = &local_778;
    do {
      pVVar17 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
      uVar6 = *(undefined8 *)(pVVar13->profileName + 8);
      uVar7 = *(undefined8 *)(pVVar13->profileName + 0x10);
      uVar8 = *(undefined8 *)(pVVar13->profileName + 0x18);
      pcVar16 = pVVar13->profileName;
      *(undefined8 *)(pVVar18->profiles).profileName = *(undefined8 *)pVVar13->profileName;
      *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar6;
      uVar6 = *(undefined8 *)(pVVar13->profileName + 0x20);
      uVar9 = *(undefined8 *)(pVVar13->profileName + 0x28);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = uVar7;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar8;
      uVar7 = *(undefined8 *)(pVVar13->profileName + 0x30);
      uVar8 = *(undefined8 *)(pVVar13->profileName + 0x38);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = uVar6;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar9;
      uVar6 = *(undefined8 *)(pVVar13->profileName + 0x40);
      uVar9 = *(undefined8 *)(pVVar13->profileName + 0x48);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = uVar7;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar8;
      uVar7 = *(undefined8 *)(pVVar13->profileName + 0x50);
      uVar8 = *(undefined8 *)(pVVar13->profileName + 0x58);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = uVar6;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar9;
      uVar6 = *(undefined8 *)(pVVar13->profileName + 0x60);
      uVar9 = *(undefined8 *)(pVVar13->profileName + 0x68);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = uVar7;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar8;
      uVar7 = *(undefined8 *)(pVVar13->profileName + 0x70);
      uVar8 = *(undefined8 *)(pVVar13->profileName + 0x78);
      *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = uVar6;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar9;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = uVar7;
      *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar8;
      lVar22 = lVar22 + -1;
      pVVar13 = (VpProfileProperties *)(pcVar16 + 0x80);
      pVVar18 = pVVar17;
    } while (lVar22 != 0);
    *(undefined4 *)(pVVar17->profiles).profileName =
         *(undefined4 *)((VpProfileProperties *)(pcVar16 + 0x80))->profileName;
    local_790 = pVVar12;
    local_778.apiVersion = param_1;
    memset(local_778.blockName,0,0x100);
    if ((pVVar12->props).specVersion < param_3->specVersion) {
      *param_4 = 0;
      pVVar18 = (param_6->_Mypair)._Myval2._Mylast;
      if (pVVar18 == (param_6->_Mypair)._Myval2._Myend) {
        std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
        _Emplace_reallocate<VpBlockProperties_const_&>(param_6,pVVar18,&local_778);
      }
      else {
        lVar22 = 4;
        pVVar17 = &local_778;
        do {
          pVVar2 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
          uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 8);
          uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x10);
          uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x18);
          pVVar3 = (VpBlockProperties *)((pVVar17->profiles).profileName + 0x80);
          *(undefined8 *)(pVVar18->profiles).profileName =
               *(undefined8 *)(pVVar17->profiles).profileName;
          *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar6;
          uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x20);
          uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x28);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = uVar7;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar8;
          uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x30);
          uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x38);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = uVar6;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar9;
          uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x40);
          uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x48);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = uVar7;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar8;
          uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x50);
          uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x58);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = uVar6;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar9;
          uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x60);
          uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x68);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = uVar7;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar8;
          uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x70);
          uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x78);
          *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = uVar6;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar9;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = uVar7;
          *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar8;
          lVar22 = lVar22 + -1;
          pVVar17 = pVVar3;
          pVVar18 = pVVar2;
        } while (lVar22 != 0);
        *(undefined8 *)(pVVar2->profiles).profileName =
             *(undefined8 *)(pVVar3->profiles).profileName;
        ppVVar1 = &(param_6->_Mypair)._Myval2._Mylast;
        *ppVVar1 = *ppVVar1 + 1;
      }
    }
    if (param_1 != 0) {
      uVar26 = pVVar12->minApiVersion;
      uVar21 = param_1 >> 0x16 & 0x7f;
      uVar25 = uVar26 >> 0x16 & 0x7f;
      if ((uVar21 <= uVar25) && ((uVar21 != uVar25 || ((param_1 & 0x3ff000) < (uVar26 & 0x3ff000))))
         ) {
        local_7c8 = param_1 & 0xfff;
        local_7e8 = uVar26 >> 0xc & 0x3ff;
        local_7e0 = uVar26 & 0xfff;
        local_7d0 = param_1 >> 0xc & 0x3ff;
        local_7d8 = uVar21;
        snprintf(local_448,0x3ff,
                 "Unsupported Profile API version %u.%u.%u on a Vulkan system with version %u.%u.%u"
                );
        VulkanProfilePrint(local_448);
        *param_4 = 0;
        std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::push_back
                  (param_6,&local_778);
      }
    }
    uVar14 = 0;
    local_7b0 = 0;
    if (pVVar12->requiredCapabilityCount != 0) {
      do {
        uVar24 = 0;
        local_798 = pVVar12->pRequiredCapabilities + uVar14;
        local_7b4 = 0;
        local_7b8 = 0;
        if (local_798->variantCount == 0) {
LAB_145bc5e28:
          *local_788 = 0;
          break;
        }
        do {
          uVar14 = 0;
          bVar5 = true;
          pVVar23 = local_798->pVariants + uVar24;
          if (pVVar23->instanceExtensionCount == 0) {
LAB_145bc5cec:
            local_7b4 = 1;
            lVar22 = 2;
            pcVar16 = local_778.blockName;
            do {
              uVar6 = *(undefined8 *)(pVVar23->blockName + 8);
              uVar7 = *(undefined8 *)(pVVar23->blockName + 0x10);
              uVar8 = *(undefined8 *)(pVVar23->blockName + 0x18);
              *(undefined8 *)pcVar16 = *(undefined8 *)pVVar23->blockName;
              *(undefined8 *)(pcVar16 + 8) = uVar6;
              uVar6 = *(undefined8 *)(pVVar23->blockName + 0x20);
              uVar9 = *(undefined8 *)(pVVar23->blockName + 0x28);
              *(undefined8 *)(pcVar16 + 0x10) = uVar7;
              *(undefined8 *)(pcVar16 + 0x18) = uVar8;
              uVar7 = *(undefined8 *)(pVVar23->blockName + 0x30);
              uVar8 = *(undefined8 *)(pVVar23->blockName + 0x38);
              *(undefined8 *)(pcVar16 + 0x20) = uVar6;
              *(undefined8 *)(pcVar16 + 0x28) = uVar9;
              uVar6 = *(undefined8 *)(pVVar23->blockName + 0x40);
              uVar9 = *(undefined8 *)(pVVar23->blockName + 0x48);
              *(undefined8 *)(pcVar16 + 0x30) = uVar7;
              *(undefined8 *)(pcVar16 + 0x38) = uVar8;
              uVar7 = *(undefined8 *)(pVVar23->blockName + 0x50);
              uVar8 = *(undefined8 *)(pVVar23->blockName + 0x58);
              *(undefined8 *)(pcVar16 + 0x40) = uVar6;
              *(undefined8 *)(pcVar16 + 0x48) = uVar9;
              uVar6 = *(undefined8 *)(pVVar23->blockName + 0x60);
              uVar9 = *(undefined8 *)(pVVar23->blockName + 0x68);
              *(undefined8 *)(pcVar16 + 0x50) = uVar7;
              *(undefined8 *)(pcVar16 + 0x58) = uVar8;
              uVar7 = *(undefined8 *)(pVVar23->blockName + 0x70);
              uVar8 = *(undefined8 *)(pVVar23->blockName + 0x78);
              *(undefined8 *)(pcVar16 + 0x60) = uVar6;
              *(undefined8 *)(pcVar16 + 0x68) = uVar9;
              *(undefined8 *)(pcVar16 + 0x70) = uVar7;
              *(undefined8 *)(pcVar16 + 0x78) = uVar8;
              lVar22 = lVar22 + -1;
              pcVar16 = pcVar16 + 0x80;
              pVVar23 = (VpVariantDesc *)(pVVar23->blockName + 0x80);
            } while (lVar22 != 0);
            pVVar18 = (param_5->_Mypair)._Myval2._Mylast;
            if (pVVar18 == (param_5->_Mypair)._Myval2._Myend) {
              std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
              _Emplace_reallocate<VpBlockProperties_const_&>(param_5,pVVar18,&local_778);
            }
            else {
              lVar22 = 4;
              pVVar17 = &local_778;
              do {
                pVVar2 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
                uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 8);
                uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x10);
                uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x18);
                pVVar3 = (VpBlockProperties *)((pVVar17->profiles).profileName + 0x80);
                *(undefined8 *)(pVVar18->profiles).profileName =
                     *(undefined8 *)(pVVar17->profiles).profileName;
                *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar6;
                uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x20);
                uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x28);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = uVar7;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar8;
                uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x30);
                uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x38);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = uVar6;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar9;
                uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x40);
                uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x48);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = uVar7;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar8;
                uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x50);
                uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x58);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = uVar6;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar9;
                uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x60);
                uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x68);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = uVar7;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar8;
                uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x70);
                uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x78);
                *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = uVar6;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar9;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = uVar7;
                *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar8;
                lVar22 = lVar22 + -1;
                pVVar17 = pVVar3;
                pVVar18 = pVVar2;
              } while (lVar22 != 0);
              *(undefined8 *)(pVVar2->profiles).profileName =
                   *(undefined8 *)(pVVar3->profiles).profileName;
              ppVVar1 = &(param_5->_Mypair)._Myval2._Mylast;
              *ppVVar1 = *ppVVar1 + 1;
            }
          }
          else {
            do {
              uVar24 = 0;
              pVVar4 = pVVar23->pInstanceExtensions;
              _Str1 = (local_7a0->_Mypair)._Myval2._Myfirst;
              lVar19 = (longlong)(local_7a0->_Mypair)._Myval2._Mylast - (longlong)_Str1;
              lVar22 = lVar19 >> 0x3f;
              lVar19 = lVar19 / 0x104 + lVar22;
              if (lVar19 != lVar22) {
                do {
                  iVar11 = strcmp(_Str1->extensionName,pVVar4[uVar14].extensionName);
                  if (iVar11 == 0) goto LAB_145bc5cc3;
                  uVar24 = uVar24 + 1;
                  _Str1 = _Str1 + 1;
                } while (uVar24 < (ulonglong)(lVar19 - lVar22));
              }
              snprintf(local_448,0x3ff,"Unsupported extension: %s");
              if (4 < (byte)LogVulkanRHI._0_1_) {
                local_568._padding_ = 0;
                sVar15 = strlen(local_448);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_568,local_448,(int)sVar15,Yes);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
                if ((void *)local_568._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_568._padding_);
                }
              }
              bVar5 = false;
              lVar22 = 2;
              pcVar16 = local_778.blockName;
              pVVar20 = pVVar23;
              do {
                uVar6 = *(undefined8 *)(pVVar20->blockName + 8);
                uVar7 = *(undefined8 *)(pVVar20->blockName + 0x10);
                uVar8 = *(undefined8 *)(pVVar20->blockName + 0x18);
                *(undefined8 *)pcVar16 = *(undefined8 *)pVVar20->blockName;
                *(undefined8 *)(pcVar16 + 8) = uVar6;
                uVar6 = *(undefined8 *)(pVVar20->blockName + 0x20);
                uVar9 = *(undefined8 *)(pVVar20->blockName + 0x28);
                *(undefined8 *)(pcVar16 + 0x10) = uVar7;
                *(undefined8 *)(pcVar16 + 0x18) = uVar8;
                uVar7 = *(undefined8 *)(pVVar20->blockName + 0x30);
                uVar8 = *(undefined8 *)(pVVar20->blockName + 0x38);
                *(undefined8 *)(pcVar16 + 0x20) = uVar6;
                *(undefined8 *)(pcVar16 + 0x28) = uVar9;
                uVar6 = *(undefined8 *)(pVVar20->blockName + 0x40);
                uVar9 = *(undefined8 *)(pVVar20->blockName + 0x48);
                *(undefined8 *)(pcVar16 + 0x30) = uVar7;
                *(undefined8 *)(pcVar16 + 0x38) = uVar8;
                uVar7 = *(undefined8 *)(pVVar20->blockName + 0x50);
                uVar8 = *(undefined8 *)(pVVar20->blockName + 0x58);
                *(undefined8 *)(pcVar16 + 0x40) = uVar6;
                *(undefined8 *)(pcVar16 + 0x48) = uVar9;
                uVar6 = *(undefined8 *)(pVVar20->blockName + 0x60);
                uVar9 = *(undefined8 *)(pVVar20->blockName + 0x68);
                *(undefined8 *)(pcVar16 + 0x50) = uVar7;
                *(undefined8 *)(pcVar16 + 0x58) = uVar8;
                uVar7 = *(undefined8 *)(pVVar20->blockName + 0x70);
                uVar8 = *(undefined8 *)(pVVar20->blockName + 0x78);
                *(undefined8 *)(pcVar16 + 0x60) = uVar6;
                *(undefined8 *)(pcVar16 + 0x68) = uVar9;
                *(undefined8 *)(pcVar16 + 0x70) = uVar7;
                *(undefined8 *)(pcVar16 + 0x78) = uVar8;
                lVar22 = lVar22 + -1;
                pcVar16 = pcVar16 + 0x80;
                pVVar20 = (VpVariantDesc *)(pVVar20->blockName + 0x80);
              } while (lVar22 != 0);
              pVVar18 = (param_6->_Mypair)._Myval2._Mylast;
              if (pVVar18 == (param_6->_Mypair)._Myval2._Myend) {
                std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
                _Emplace_reallocate<VpBlockProperties_const_&>(param_6,pVVar18,&local_778);
              }
              else {
                lVar22 = 4;
                pVVar17 = &local_778;
                do {
                  pVVar2 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
                  uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 8);
                  uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x10);
                  uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x18);
                  pVVar3 = (VpBlockProperties *)((pVVar17->profiles).profileName + 0x80);
                  *(undefined8 *)(pVVar18->profiles).profileName =
                       *(undefined8 *)(pVVar17->profiles).profileName;
                  *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar6;
                  uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x20);
                  uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x28);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = uVar7;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar8;
                  uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x30);
                  uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x38);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = uVar6;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar9;
                  uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x40);
                  uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x48);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = uVar7;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar8;
                  uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x50);
                  uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x58);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = uVar6;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar9;
                  uVar6 = *(undefined8 *)((pVVar17->profiles).profileName + 0x60);
                  uVar9 = *(undefined8 *)((pVVar17->profiles).profileName + 0x68);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = uVar7;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar8;
                  uVar7 = *(undefined8 *)((pVVar17->profiles).profileName + 0x70);
                  uVar8 = *(undefined8 *)((pVVar17->profiles).profileName + 0x78);
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = uVar6;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar9;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = uVar7;
                  *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar8;
                  lVar22 = lVar22 + -1;
                  pVVar17 = pVVar3;
                  pVVar18 = pVVar2;
                } while (lVar22 != 0);
                *(undefined8 *)(pVVar2->profiles).profileName =
                     *(undefined8 *)(pVVar3->profiles).profileName;
                ppVVar1 = &(param_6->_Mypair)._Myval2._Mylast;
                *ppVVar1 = *ppVVar1 + 1;
                bVar5 = false;
              }
LAB_145bc5cc3:
              uVar26 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar26;
            } while (uVar26 < pVVar23->instanceExtensionCount);
            param_5 = local_7a8;
            if (bVar5) goto LAB_145bc5cec;
          }
          local_7b8 = local_7b8 + 1;
          uVar24 = (ulonglong)local_7b8;
        } while (local_7b8 < local_798->variantCount);
        if (local_7b4 == 0) goto LAB_145bc5e28;
        local_7b0 = local_7b0 + 1;
        uVar14 = (ulonglong)local_7b0;
        pVVar12 = local_790;
      } while (local_7b0 < local_790->requiredCapabilityCount);
    }
    VVar10 = VK_SUCCESS;
  }
  return VVar10;
}

// vpGetInstanceProfileVariantsSupport @ 145bc5e70

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VkResult __cdecl
vpGetInstanceProfileVariantsSupport
          (char *param_1,VpProfileProperties *param_2,uint *param_3,uint *param_4,
          VpBlockProperties *param_5)

{
  undefined8 *puVar1;
  VpBlockProperties *pVVar2;
  undefined8 uVar3;
  VkResult VVar4;
  int iVar5;
  VpCapabilities_T *pVVar6;
  VpProfileDesc *pVVar7;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *pvVar8;
  undefined8 *puVar9;
  VpBlockProperties *pVVar10;
  uint uVar11;
  ulong64 uVar12;
  VkExtensionProperties *pVVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  _func___cdecl_VkResult_uint_ptr *p_Var17;
  longlong lVar18;
  uint local_88;
  _Value_init_tag local_84 [4];
  uint local_80;
  uint local_7c;
  vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> local_78;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> local_60;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> local_48;
  
  pVVar6 = VpCapabilities_T::Get();
  local_7c = 0x400000;
  p_Var17 = VulkanDynamicAPI::vkEnumerateInstanceVersion;
  if (pVVar6->singleton == false) {
    p_Var17 = (_func___cdecl_VkResult_uint_ptr *)pVVar6->_padding_;
  }
  if ((p_Var17 != (_func___cdecl_VkResult_uint_ptr *)0x0) &&
     (VVar4 = (*p_Var17)(&local_7c), VVar4 != VK_SUCCESS)) {
LAB_145bc5ecc:
    *param_3 = 0;
    return VVar4;
  }
  uVar14 = 0;
  local_80 = 0;
  VVar4 = (*(code *)pVVar6->_padding_)(param_1,&local_80,0);
  if (VVar4 != VK_SUCCESS) goto LAB_145bc5ecc;
  local_78._Mypair._Myval2._Myend = (VkExtensionProperties *)0x0;
  local_78._Mypair._Myval2._Myfirst = (VkExtensionProperties *)0x0;
  local_78._Mypair._Myval2._Mylast = (VkExtensionProperties *)0x0;
  if (local_80 != 0) {
    std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::
    _Resize<std::_Value_init_tag>(&local_78,(ulonglong)local_80,local_84);
  }
  VVar4 = (*(code *)pVVar6->_padding_)(param_1,&local_80,local_78._Mypair._Myval2._Myfirst);
  if (VVar4 == VK_SUCCESS) {
    local_88 = 1;
    if (local_7c < 0x401000) {
      lVar18 = (longlong)local_78._Mypair._Myval2._Mylast -
               (longlong)local_78._Mypair._Myval2._Myfirst >> 0x3f;
      lVar15 = ((longlong)local_78._Mypair._Myval2._Mylast -
               (longlong)local_78._Mypair._Myval2._Myfirst) / 0x104 + lVar18;
      pVVar13 = local_78._Mypair._Myval2._Myfirst;
      uVar16 = uVar14;
      if (lVar15 != lVar18) {
        do {
          iVar5 = strcmp(pVVar13->extensionName,"VK_KHR_get_physical_device_properties2");
          if (iVar5 == 0) goto LAB_145bc5fc2;
          uVar16 = uVar16 + 1;
          pVVar13 = pVVar13 + 1;
        } while (uVar16 < (ulonglong)(lVar15 - lVar18));
      }
      VulkanProfilePrint(
                        "Unsupported mandatory extension VK_KHR_get_physical_device_properties2 on Vulkan 1.0"
                        );
      local_88 = 0;
    }
LAB_145bc5fc2:
    pVVar7 = detail::vpGetProfileDesc(param_2->profileName);
    if (pVVar7 == (VpProfileDesc *)0x0) {
      VVar4 = VK_ERROR_UNKNOWN;
    }
    else {
      local_48._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
      local_60._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
      local_48._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
      local_48._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
      local_60._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
      local_60._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
      VVar4 = detail::vpGetInstanceProfileSupportSingleProfile
                        (local_7c,&local_78,param_2,&local_88,&local_48,&local_60);
      if (VVar4 == VK_SUCCESS) {
        uVar16 = uVar14;
        if (pVVar7->requiredProfileCount != 0) {
          do {
            VVar4 = detail::vpGetInstanceProfileSupportSingleProfile
                              (0,&local_78,
                               (VpProfileProperties *)
                               (pVVar7->pRequiredProfiles->profileName + uVar16),&local_88,&local_48
                               ,&local_60);
            if (VVar4 != VK_SUCCESS) goto LAB_145bc60d3;
            uVar14 = uVar14 + 1;
            uVar16 = uVar16 + 0x104;
          } while (uVar14 < pVVar7->requiredProfileCount);
        }
        pvVar8 = &local_48;
        if (local_88 == 0) {
          pvVar8 = &local_60;
        }
        pVVar10 = (pvVar8->_Mypair)._Myval2._Mylast;
        if (param_5 == (VpBlockProperties *)0x0) {
          *param_4 = (uint)(((longlong)pVVar10 - (longlong)(pvVar8->_Mypair)._Myval2._Myfirst) /
                           0x208);
        }
        else {
          pVVar2 = (pvVar8->_Mypair)._Myval2._Myfirst;
          uVar14 = ((longlong)pVVar10 - (longlong)pVVar2) / 0x208;
          uVar11 = (uint)uVar14;
          if (*param_4 < uVar11) {
            VVar4 = VK_INCOMPLETE;
          }
          else {
            *param_4 = uVar11;
          }
          if (uVar11 != 0) {
            lVar18 = (longlong)pVVar2 - (longlong)param_5;
            uVar14 = uVar14 & 0xffffffff;
            do {
              lVar15 = 4;
              puVar9 = (undefined8 *)(lVar18 + (longlong)param_5);
              pVVar10 = param_5;
              do {
                pVVar2 = (VpBlockProperties *)((pVVar10->profiles).profileName + 0x80);
                uVar3 = puVar9[1];
                puVar1 = puVar9 + 0x10;
                *(undefined8 *)(pVVar10->profiles).profileName = *puVar9;
                *(undefined8 *)((pVVar10->profiles).profileName + 8) = uVar3;
                uVar3 = puVar9[3];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x10) = puVar9[2];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x18) = uVar3;
                uVar3 = puVar9[5];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x20) = puVar9[4];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x28) = uVar3;
                uVar3 = puVar9[7];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x30) = puVar9[6];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x38) = uVar3;
                uVar3 = puVar9[9];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x40) = puVar9[8];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x48) = uVar3;
                uVar3 = puVar9[0xb];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x50) = puVar9[10];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x58) = uVar3;
                uVar3 = puVar9[0xd];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x60) = puVar9[0xc];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x68) = uVar3;
                uVar3 = puVar9[0xf];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x70) = puVar9[0xe];
                *(undefined8 *)((pVVar10->profiles).profileName + 0x78) = uVar3;
                lVar15 = lVar15 + -1;
                puVar9 = puVar1;
                pVVar10 = pVVar2;
              } while (lVar15 != 0);
              param_5 = param_5 + 1;
              *(undefined8 *)(pVVar2->profiles).profileName = *puVar1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        *param_3 = local_88;
      }
      else {
LAB_145bc60d3:
        *param_3 = local_88;
      }
      if (local_60._Mypair._Myval2._Myfirst != (VpBlockProperties *)0x0) {
        uVar12 = (((longlong)local_60._Mypair._Myval2._Myend -
                  (longlong)local_60._Mypair._Myval2._Myfirst) / 0x208) * 0x208;
        pVVar10 = local_60._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          pVVar10 = *(VpBlockProperties **)(local_60._Mypair._Myval2._Myfirst[-1].blockName + 0xf8);
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_60._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar10)))
          goto LAB_145bc62aa;
        }
        operator_delete(pVVar10,uVar12);
        local_60._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
        local_60._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
        local_60._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
      }
      if (local_48._Mypair._Myval2._Myfirst != (VpBlockProperties *)0x0) {
        uVar12 = (((longlong)local_48._Mypair._Myval2._Myend -
                  (longlong)local_48._Mypair._Myval2._Myfirst) / 0x208) * 0x208;
        pVVar10 = local_48._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          pVVar10 = *(VpBlockProperties **)(local_48._Mypair._Myval2._Myfirst[-1].blockName + 0xf8);
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_48._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar10)))
          goto LAB_145bc62aa;
        }
        operator_delete(pVVar10,uVar12);
        local_48._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
        local_48._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
        local_48._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
      }
    }
  }
  else {
    *param_3 = 0;
  }
  if (local_78._Mypair._Myval2._Myfirst == (VkExtensionProperties *)0x0) {
    return VVar4;
  }
  uVar12 = (((longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            ) / 0x104) * 0x104;
  pVVar13 = local_78._Mypair._Myval2._Myfirst;
  if (0xfff < uVar12) {
    pVVar13 = *(VkExtensionProperties **)
               (local_78._Mypair._Myval2._Myfirst[-1].extensionName + 0xfc);
    uVar12 = uVar12 + 0x27;
    if ((char *)0x1f <
        (char *)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar13))) {
LAB_145bc62aa:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  operator_delete(pVVar13,uVar12);
  return VVar4;
}

// vpGetPhysicalDeviceProfileVariantsSupport @ 145bc6300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

VkResult __cdecl
vpGetPhysicalDeviceProfileVariantsSupport
          (VkInstance_T *param_1,VkPhysicalDevice_T *param_2,VpProfileProperties *param_3,
          uint *param_4,uint *param_5,VpBlockProperties *param_6)

{
  char *pcVar1;
  VpBlockProperties *pVVar2;
  VpBlockProperties *pVVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  VkResult VVar11;
  int iVar12;
  VpCapabilities_T *pVVar13;
  VpProfileDesc *pVVar14;
  size_t sVar15;
  VkBaseOutStructure *pVVar16;
  char *pcVar17;
  VpBlockProperties *pVVar18;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *pvVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  VpBlockProperties *pVVar24;
  ulong64 uVar25;
  VpVariantDesc *pVVar26;
  ulonglong uVar27;
  VkExtensionProperties *pVVar28;
  _Value_init_tag _Var29;
  char cVar30;
  _func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *p_Var31;
  VkExtensionProperties *_Str1;
  VkBaseOutStructure **ppVVar32;
  uint uVar33;
  _Value_init_tag _Var34;
  VkBaseOutStructure *pVVar35;
  undefined8 *puVar36;
  undefined1 auStackY_1408 [32];
  bool local_13d8;
  _Value_init_tag local_13d7;
  char local_13d6;
  char local_13d5;
  uint local_13d4;
  uint local_13d0;
  uint local_13cc;
  uint local_13c8;
  VkPhysicalDevice_T *local_13c0;
  VpProfileDesc *local_13b8;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> local_13b0;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> local_1398;
  ulonglong local_1380;
  longlong local_1378;
  uint *local_1370;
  vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_> local_1368;
  VkPhysicalDevice_T *local_1348;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *local_1340;
  vector<VpBlockProperties,std::allocator<VpBlockProperties>_> *local_1338;
  VpVariantDesc *local_1330;
  _func___cdecl_void *p_Stack_1328;
  _func___cdecl_void *local_1320;
  _func___cdecl_void *p_Stack_1318;
  _func___cdecl_void *local_1310;
  _func___cdecl_void *p_Stack_1308;
  _func___cdecl_void *local_1300;
  VpVideoProfileDesc *pVStack_12f8;
  VkVideoProfileInfoKHR local_12f0;
  undefined8 local_12d0;
  undefined4 *puStack_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  vector<VpProfileProperties,std::allocator<VpProfileProperties>_> local_1298;
  VpProfileProperties *local_1280;
  VpCapabilitiesDesc *local_1278;
  ulonglong local_1270;
  VpBlockProperties *local_1268;
  uint *local_1260;
  undefined4 local_1258 [2];
  undefined8 local_1250;
  undefined8 uStack_1248;
  VkVideoProfileInfoKHR *local_1240;
  VpBlockProperties local_1238;
  VkBaseOutStructure local_1028;
  undefined8 uStack_1018;
  VkBaseOutStructure *pVStack_1010;
  undefined8 uStack_1008;
  VkBaseOutStructure local_ff8 [15];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_f08 [3];
  VkBaseOutStructure local_bb8 [53];
  char local_868 [1024];
  char local_468 [1024];
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x145bc631f;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1408;
  local_1370 = param_5;
  local_1268 = param_6;
  local_13c0 = param_2;
  local_1280 = param_3;
  local_1260 = param_4;
  pVVar13 = VpCapabilities_T::Get();
  uVar27 = 0;
  local_13d4 = 0;
  VVar11 = (*(code *)pVVar13->_padding_)(param_2,0,&local_13d4,0);
  if (VVar11 != VK_SUCCESS) {
    return VVar11;
  }
  local_1368._Mypair._Myval2._Myend = (VkExtensionProperties *)0x0;
  local_1368._Mypair._Myval2._Myfirst = (VkExtensionProperties *)0x0;
  local_1368._Mypair._Myval2._Mylast = (VkExtensionProperties *)0x0;
  if (local_13d4 != 0) {
    std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::
    _Resize<std::_Value_init_tag>(&local_1368,(ulonglong)local_13d4,&local_13d7);
  }
  VVar11 = (*(code *)pVVar13->_padding_)(param_2,0);
  if (VVar11 != VK_SUCCESS) goto LAB_145bc70a2;
  if (local_13d4 != 0) {
    std::vector<VkExtensionProperties,std::allocator<VkExtensionProperties>_>::
    _Resize<std::_Value_init_tag>(&local_1368,(ulonglong)local_13d4,&local_13d7);
  }
  pVVar14 = detail::vpGetProfileDesc(param_3->profileName);
  if (pVVar14 == (VpProfileDesc *)0x0) {
    VVar11 = VK_ERROR_UNKNOWN;
    goto LAB_145bc70a2;
  }
  local_1398._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
  local_1340 = &local_1398;
  local_13b0._Mypair._Myval2._Myend = (VpBlockProperties *)0x0;
  local_1338 = &local_13b0;
  local_12a0 = 0;
  local_1398._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
  local_1398._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
  local_13b0._Mypair._Myval2._Myfirst = (VpBlockProperties *)0x0;
  local_13b0._Mypair._Myval2._Mylast = (VpBlockProperties *)0x0;
  local_1330 = (VpVariantDesc *)0x0;
  p_Stack_1328 = (_func___cdecl_void *)0x0;
  local_1320 = (_func___cdecl_void *)0x0;
  p_Stack_1318 = (_func___cdecl_void *)0x0;
  local_1310 = (_func___cdecl_void *)0x0;
  p_Stack_1308 = (_func___cdecl_void *)0x0;
  local_1300 = (_func___cdecl_void *)0x0;
  pVStack_12f8 = (VpVideoProfileDesc *)0x0;
  local_12f0.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  local_12f0._4_4_ = 0;
  local_12f0.pNext = (void *)0x0;
  local_12f0.videoCodecOperation = VK_VIDEO_CODEC_OPERATION_NONE_KHR;
  local_12f0.chromaSubsampling = 0;
  local_12f0.lumaBitDepth = 0;
  local_12f0.chromaBitDepth = 0;
  local_12d0 = 0;
  puStack_12c8 = (undefined4 *)0x0;
  local_12c0 = 0;
  uStack_12b8 = 0;
  local_12b0 = 0;
  uStack_12a8 = 0;
  if (pVVar13->singleton == false) {
    p_Stack_1328 = (_func___cdecl_void *)pVVar13->_padding_;
    local_1320 = (_func___cdecl_void *)pVVar13->_padding_;
    p_Stack_1318 = (_func___cdecl_void *)pVVar13->_padding_;
    local_1310 = (_func___cdecl_void *)pVVar13->_padding_;
  }
  local_1348 = param_2;
  if (p_Stack_1328 == (_func___cdecl_void *)0x0) {
    p_Stack_1328 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                             (param_1,"vkGetPhysicalDeviceFeatures2");
    local_1320 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                           (param_1,"vkGetPhysicalDeviceProperties2");
    p_Stack_1318 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                             (param_1,"vkGetPhysicalDeviceFormatProperties2");
    local_1310 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                           (param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
    if (p_Stack_1328 != (_func___cdecl_void *)0x0) goto LAB_145bc6563;
    p_Stack_1328 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                             (param_1,"vkGetPhysicalDeviceFeatures2KHR");
    local_1320 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                           (param_1,"vkGetPhysicalDeviceProperties2KHR");
    p_Stack_1318 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                             (param_1,"vkGetPhysicalDeviceFormatProperties2KHR");
    local_1310 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                           (param_1,"vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    if (p_Stack_1328 != (_func___cdecl_void *)0x0) goto LAB_145bc6563;
LAB_145bc7089:
    VVar11 = VK_ERROR_EXTENSION_NOT_PRESENT;
  }
  else {
LAB_145bc6563:
    if (((local_1320 == (_func___cdecl_void *)0x0) || (p_Stack_1318 == (_func___cdecl_void *)0x0))
       || (local_1310 == (_func___cdecl_void *)0x0)) goto LAB_145bc7089;
    p_Var31 = VulkanDynamicAPI::vkGetInstanceProcAddr;
    if (pVVar13->singleton == false) {
      p_Var31 = (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)pVVar13->_padding_
      ;
    }
    p_Stack_1308 = (*p_Var31)(param_1,"vkGetPhysicalDeviceVideoCapabilitiesKHR");
    local_1300 = (*p_Var31)(param_1,"vkGetPhysicalDeviceVideoFormatPropertiesKHR");
    _Var29 = (_Value_init_tag)0x1;
    detail::GatherProfiles(&local_1298,param_3,(char *)0x0);
    local_1380 = 0;
    local_1270 = ((longlong)local_1298._Mypair._Myval2._Mylast -
                 (longlong)local_1298._Mypair._Myval2._Myfirst) / 0x104;
    if (local_1270 == 0) {
LAB_145bc6f8a:
      pvVar19 = &local_1398;
      if (_Var29 == (_Value_init_tag)0x0) {
        pvVar19 = &local_13b0;
      }
      pVVar18 = (pvVar19->_Mypair)._Myval2._Mylast;
      if (param_6 == (VpBlockProperties *)0x0) {
        *local_1370 = (uint)(((longlong)pVVar18 - (longlong)(pvVar19->_Mypair)._Myval2._Myfirst) /
                            0x208);
      }
      else {
        pVVar24 = (pvVar19->_Mypair)._Myval2._Myfirst;
        uVar27 = ((longlong)pVVar18 - (longlong)pVVar24) / 0x208;
        uVar21 = (uint)uVar27;
        if (uVar21 <= *local_1370) {
          *local_1370 = uVar21;
        }
        if (uVar21 != 0) {
          lVar20 = (longlong)pVVar24 - (longlong)param_6;
          uVar27 = uVar27 & 0xffffffff;
          do {
            lVar22 = 4;
            puVar36 = (undefined8 *)(lVar20 + (longlong)param_6);
            pVVar18 = param_6;
            do {
              pVVar24 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
              uVar5 = puVar36[1];
              puVar4 = puVar36 + 0x10;
              *(undefined8 *)(pVVar18->profiles).profileName = *puVar36;
              *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar5;
              uVar5 = puVar36[3];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = puVar36[2];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar5;
              uVar5 = puVar36[5];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = puVar36[4];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar5;
              uVar5 = puVar36[7];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = puVar36[6];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar5;
              uVar5 = puVar36[9];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = puVar36[8];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar5;
              uVar5 = puVar36[0xb];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = puVar36[10];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar5;
              uVar5 = puVar36[0xd];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = puVar36[0xc];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar5;
              uVar5 = puVar36[0xf];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = puVar36[0xe];
              *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar5;
              lVar22 = lVar22 + -1;
              puVar36 = puVar4;
              pVVar18 = pVVar24;
            } while (lVar22 != 0);
            param_6 = param_6 + 1;
            *(undefined8 *)(pVVar24->profiles).profileName = *puVar4;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
      }
      VVar11 = VK_SUCCESS;
      *local_1260 = (uint)(_Var29 != (_Value_init_tag)0x0);
      std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
      ~vector<VpProfileProperties,std::allocator<VpProfileProperties>_>(&local_1298);
    }
    else {
      local_13d7 = (_Value_init_tag)0x1;
      _Var29 = (_Value_init_tag)0x1;
      pVVar14 = detail::vpGetProfileDesc((local_1298._Mypair._Myval2._Myfirst)->profileName);
      local_13b8 = pVVar14;
      if (pVVar14 != (VpProfileDesc *)0x0) {
        lVar20 = 0;
        local_1378 = 0;
        do {
          local_13d8 = (pVVar14->props).specVersion <
                       *(uint *)((local_1298._Mypair._Myval2._Myfirst)->profileName + lVar20 + 0x100
                                );
          local_13b8 = pVVar14;
          if (local_13d8) {
            snprintf(local_868,0x3ff,
                     "Unsupported requested %s profile version: %u, profile supported at version %u"
                    );
            VulkanProfilePrint(local_868);
          }
          local_13d8 = !local_13d8;
          lVar22 = 2;
          pcVar17 = (local_1298._Mypair._Myval2._Myfirst)->profileName + lVar20;
          pVVar18 = &local_1238;
          do {
            pVVar24 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
            uVar5 = *(undefined8 *)(pcVar17 + 8);
            uVar6 = *(undefined8 *)(pcVar17 + 0x10);
            uVar7 = *(undefined8 *)(pcVar17 + 0x18);
            pcVar1 = pcVar17 + 0x80;
            *(undefined8 *)(pVVar18->profiles).profileName = *(undefined8 *)pcVar17;
            *(undefined8 *)((pVVar18->profiles).profileName + 8) = uVar5;
            uVar5 = *(undefined8 *)(pcVar17 + 0x20);
            uVar8 = *(undefined8 *)(pcVar17 + 0x28);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x10) = uVar6;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x18) = uVar7;
            uVar6 = *(undefined8 *)(pcVar17 + 0x30);
            uVar7 = *(undefined8 *)(pcVar17 + 0x38);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x20) = uVar5;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x28) = uVar8;
            uVar5 = *(undefined8 *)(pcVar17 + 0x40);
            uVar8 = *(undefined8 *)(pcVar17 + 0x48);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x30) = uVar6;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x38) = uVar7;
            uVar6 = *(undefined8 *)(pcVar17 + 0x50);
            uVar7 = *(undefined8 *)(pcVar17 + 0x58);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x40) = uVar5;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x48) = uVar8;
            uVar5 = *(undefined8 *)(pcVar17 + 0x60);
            uVar8 = *(undefined8 *)(pcVar17 + 0x68);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x50) = uVar6;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x58) = uVar7;
            uVar6 = *(undefined8 *)(pcVar17 + 0x70);
            uVar7 = *(undefined8 *)(pcVar17 + 0x78);
            *(undefined8 *)((pVVar18->profiles).profileName + 0x60) = uVar5;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x68) = uVar8;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x70) = uVar6;
            *(undefined8 *)((pVVar18->profiles).profileName + 0x78) = uVar7;
            lVar22 = lVar22 + -1;
            pcVar17 = pcVar1;
            pVVar18 = pVVar24;
          } while (lVar22 != 0);
          *(undefined4 *)(pVVar24->profiles).profileName = *(undefined4 *)pcVar1;
          local_1238.apiVersion = pVVar14->minApiVersion;
          memset(local_1238.blockName,0,0x100);
          local_f08[0]._padding_._0_4_ = 0x3b9bb079;
          memset(&local_f08[0]._padding_,0,0x340);
          (*local_1320)(param_2,local_f08);
          uVar33 = pVVar14->minApiVersion >> 0x16 & 0x7f;
          uVar21 = (uint)local_f08[0]._padding_ >> 0x16 & 0x7f;
          if ((uVar21 <= uVar33) &&
             ((uVar21 != uVar33 ||
              (((uint)local_f08[0]._padding_ >> 0xc & 0x3ff) <
               (pVVar14->minApiVersion >> 0xc & 0x3ff))))) {
            snprintf(local_468,0x3ff,"Unsupported API version: %u.%u.%u");
            VulkanProfilePrint(local_468);
            local_13d8 = false;
          }
          uVar23 = 0;
          local_13c8 = 0;
          lVar22 = lVar20;
          _Var34 = _Var29;
          bVar10 = local_13d8;
          if (pVVar14->requiredCapabilityCount != 0) {
            do {
              uVar27 = 0;
              local_1278 = pVVar14->pRequiredCapabilities + uVar23;
              local_13d5 = '\0';
              local_13cc = 0;
              if (local_1278->variantCount != 0) {
                do {
                  uVar23 = 0;
                  pVVar26 = local_1278->pVariants + uVar27;
                  local_13d6 = '\x01';
                  if (pVVar26->deviceExtensionCount != 0) {
                    do {
                      bVar9 = false;
                      pVVar28 = pVVar26->pDeviceExtensions;
                      uVar27 = 0;
                      lVar20 = (longlong)local_1368._Mypair._Myval2._Mylast -
                               (longlong)local_1368._Mypair._Myval2._Myfirst >> 0x3f;
                      lVar22 = ((longlong)local_1368._Mypair._Myval2._Mylast -
                               (longlong)local_1368._Mypair._Myval2._Myfirst) / 0x104 + lVar20;
                      _Str1 = local_1368._Mypair._Myval2._Myfirst;
                      if (lVar22 != lVar20) {
                        do {
                          iVar12 = strcmp(_Str1->extensionName,pVVar28[uVar23].extensionName);
                          if (iVar12 == 0) {
                            bVar9 = true;
                            break;
                          }
                          uVar27 = uVar27 + 1;
                          _Str1 = _Str1 + 1;
                        } while (uVar27 < (ulonglong)(lVar22 - lVar20));
                      }
                      if ((!bVar9) &&
                         (snprintf(local_868,0x3ff,"Unsupported extension: %s"),
                         4 < (byte)LogVulkanRHI._0_1_)) {
                        local_f08[0]._padding_ = 0;
                        sVar15 = strlen(local_868);
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (local_f08,local_868,(int)sVar15,Yes);
                        UE::Logging::Private::BasicLog<5>
                                  (&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
                        if ((void *)local_f08[0]._padding_ != (void *)0x0) {
                          FMemory::Free((void *)local_f08[0]._padding_);
                        }
                      }
                      cVar30 = '\0';
                      if (bVar9) {
                        cVar30 = local_13d6;
                      }
                      local_13d6 = cVar30;
                      uVar21 = (int)uVar23 + 1;
                      uVar23 = (ulonglong)uVar21;
                      param_2 = local_13c0;
                    } while (uVar21 < pVVar26->deviceExtensionCount);
                  }
                  cVar30 = local_13d6;
                  local_ff8[0].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
                  local_1330 = pVVar26;
                  memset(&local_ff8[0].pNext,0,0xe8);
                  (*(pVVar26->chainers).pfnFeature)
                            (local_ff8,&local_1348,
                             `vpGetPhysicalDeviceProfileVariantsSupport'::__l48::<lambda_1>::
                             <lambda_invoker_cdecl>);
                  local_bb8[0].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
                  if ((char)local_12a0 == '\0') {
                    cVar30 = '\0';
                  }
                  memset(&local_bb8[0].pNext,0,0x340);
                  (*(local_1330->chainers).pfnProperty)
                            (local_bb8,&local_1348,
                             `vpGetPhysicalDeviceProfileVariantsSupport'::__l48::<lambda_2>::
                             <lambda_invoker_cdecl>);
                  if ((char)local_12a0 == '\0') {
                    cVar30 = '\0';
                  }
                  if (local_1330->queueFamilyCount != 0) {
                    local_13d0 = 0;
                    (*local_1310)(param_2);
                    local_1028.sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
                    pVVar35 = (VkBaseOutStructure *)0x0;
                    puVar36 = (undefined8 *)0x0;
                    local_1028.pNext = (VkBaseOutStructure *)0x0;
                    uStack_1018 = 0;
                    pVStack_1010 = (VkBaseOutStructure *)0x0;
                    uStack_1008 = 0;
                    if (local_13d0 != 0) {
                      uVar27 = (ulonglong)local_13d0 * 0x28;
                      if ((ulonglong)local_13d0 * 5 != 0) {
                        if (uVar27 < 0x1000) {
                          pVVar35 = operator_new(uVar27);
                        }
                        else {
                          if (uVar27 + 0x27 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                            std::_Throw_bad_array_new_length();
                          }
                          pVVar16 = operator_new(uVar27 + 0x27);
                          if (pVVar16 == (VkBaseOutStructure *)0x0) goto LAB_145bc6f63;
                          pVVar35 = (VkBaseOutStructure *)
                                    ((ulonglong)&pVVar16[2].field_0x7 & 0xffffffffffffffe0);
                          pVVar35[-1].pNext = pVVar16;
                        }
                      }
                      puVar36 = (undefined8 *)(uVar27 + (longlong)pVVar35);
                      *(ulonglong *)pVVar35 = CONCAT44(local_1028._4_4_,local_1028.sType);
                      pVVar35->pNext = local_1028.pNext;
                      *(undefined8 *)(pVVar35 + 1) = uStack_1018;
                      pVVar35[1].pNext = pVStack_1010;
                      *(undefined8 *)(pVVar35 + 2) = 0;
                      pVVar16 = pVVar35;
                      ppVVar32 = &pVVar35[2].pNext;
                      for (uVar27 = uVar27 - 0x28 >> 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                        *ppVVar32 = *(VkBaseOutStructure **)pVVar16;
                        pVVar16 = (VkBaseOutStructure *)&pVVar16->pNext;
                        ppVVar32 = ppVVar32 + 1;
                      }
                    }
                    (*(local_1330->chainers).pfnQueueFamily)
                              (local_13d0,pVVar35,&local_1348,
                               `vpGetPhysicalDeviceProfileVariantsSupport'::__l62::<lambda_3>::
                               <lambda_invoker_cdecl>);
                    if ((char)local_12a0 == '\0') {
                      cVar30 = '\0';
                    }
                    if (pVVar35 != (VkBaseOutStructure *)0x0) {
                      uVar25 = (((longlong)puVar36 - (longlong)pVVar35) / 0x28) * 0x28;
                      pVVar16 = pVVar35;
                      if (0xfff < uVar25) {
                        pVVar16 = pVVar35[-1].pNext;
                        uVar25 = uVar25 + 0x27;
                        if (0x1f < (ulonglong)((longlong)pVVar35 + (-8 - (longlong)pVVar16))) {
LAB_145bc6f63:
                    /* WARNING: Subroutine does not return */
                          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                        }
                      }
                      operator_delete(pVVar16,uVar25);
                    }
                  }
                  uVar21 = 0;
                  if (local_1330->formatCount != 0) {
                    do {
                      if (cVar30 == '\0') break;
                      local_12b0 = CONCAT44(local_12b0._4_4_,uVar21);
                      pVStack_1010 = (VkBaseOutStructure *)0x0;
                      local_1028.pNext = (VkBaseOutStructure *)0x0;
                      uStack_1018 = 0;
                      local_1028.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
                      (*(local_1330->chainers).pfnFormat)
                                (&local_1028,&local_1348,
                                 `vpGetPhysicalDeviceProfileVariantsSupport'::__l67::<lambda_4>::
                                 <lambda_invoker_cdecl>);
                      if ((char)local_12a0 == '\0') {
                        cVar30 = '\0';
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar21 < local_1330->formatCount);
                  }
                  if (local_1330->videoProfileCount == 0) {
LAB_145bc6c90:
                    lVar20 = 2;
                    pcVar17 = local_1238.blockName;
                    do {
                      uVar5 = *(undefined8 *)(pVVar26->blockName + 8);
                      uVar6 = *(undefined8 *)(pVVar26->blockName + 0x10);
                      uVar7 = *(undefined8 *)(pVVar26->blockName + 0x18);
                      *(undefined8 *)pcVar17 = *(undefined8 *)pVVar26->blockName;
                      *(undefined8 *)(pcVar17 + 8) = uVar5;
                      uVar5 = *(undefined8 *)(pVVar26->blockName + 0x20);
                      uVar8 = *(undefined8 *)(pVVar26->blockName + 0x28);
                      *(undefined8 *)(pcVar17 + 0x10) = uVar6;
                      *(undefined8 *)(pcVar17 + 0x18) = uVar7;
                      uVar6 = *(undefined8 *)(pVVar26->blockName + 0x30);
                      uVar7 = *(undefined8 *)(pVVar26->blockName + 0x38);
                      *(undefined8 *)(pcVar17 + 0x20) = uVar5;
                      *(undefined8 *)(pcVar17 + 0x28) = uVar8;
                      uVar5 = *(undefined8 *)(pVVar26->blockName + 0x40);
                      uVar8 = *(undefined8 *)(pVVar26->blockName + 0x48);
                      *(undefined8 *)(pcVar17 + 0x30) = uVar6;
                      *(undefined8 *)(pcVar17 + 0x38) = uVar7;
                      uVar6 = *(undefined8 *)(pVVar26->blockName + 0x50);
                      uVar7 = *(undefined8 *)(pVVar26->blockName + 0x58);
                      *(undefined8 *)(pcVar17 + 0x40) = uVar5;
                      *(undefined8 *)(pcVar17 + 0x48) = uVar8;
                      uVar5 = *(undefined8 *)(pVVar26->blockName + 0x60);
                      uVar8 = *(undefined8 *)(pVVar26->blockName + 0x68);
                      *(undefined8 *)(pcVar17 + 0x50) = uVar6;
                      *(undefined8 *)(pcVar17 + 0x58) = uVar7;
                      uVar6 = *(undefined8 *)(pVVar26->blockName + 0x70);
                      uVar7 = *(undefined8 *)(pVVar26->blockName + 0x78);
                      *(undefined8 *)(pcVar17 + 0x60) = uVar5;
                      *(undefined8 *)(pcVar17 + 0x68) = uVar8;
                      *(undefined8 *)(pcVar17 + 0x70) = uVar6;
                      *(undefined8 *)(pcVar17 + 0x78) = uVar7;
                      lVar20 = lVar20 + -1;
                      pcVar17 = pcVar17 + 0x80;
                      pVVar26 = (VpVariantDesc *)(pVVar26->blockName + 0x80);
                    } while (lVar20 != 0);
                    if (cVar30 == '\0') goto LAB_145bc6cfc;
                    if (local_1398._Mypair._Myval2._Mylast == local_1398._Mypair._Myval2._Myend) {
                      std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
                      _Emplace_reallocate<VpBlockProperties_const_&>
                                (&local_1398,local_1398._Mypair._Myval2._Mylast,&local_1238);
                    }
                    else {
                      lVar20 = 4;
                      pVVar18 = &local_1238;
                      pVVar24 = local_1398._Mypair._Myval2._Mylast;
                      do {
                        pVVar2 = (VpBlockProperties *)((pVVar24->profiles).profileName + 0x80);
                        uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 8);
                        uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x10);
                        uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x18);
                        pVVar3 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
                        *(undefined8 *)(pVVar24->profiles).profileName =
                             *(undefined8 *)(pVVar18->profiles).profileName;
                        *(undefined8 *)((pVVar24->profiles).profileName + 8) = uVar5;
                        uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x20);
                        uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x28);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x10) = uVar6;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x18) = uVar7;
                        uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x30);
                        uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x38);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x20) = uVar5;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x28) = uVar8;
                        uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x40);
                        uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x48);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x30) = uVar6;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x38) = uVar7;
                        uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x50);
                        uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x58);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x40) = uVar5;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x48) = uVar8;
                        uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x60);
                        uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x68);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x50) = uVar6;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x58) = uVar7;
                        uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x70);
                        uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x78);
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x60) = uVar5;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x68) = uVar8;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x70) = uVar6;
                        *(undefined8 *)((pVVar24->profiles).profileName + 0x78) = uVar7;
                        lVar20 = lVar20 + -1;
                        pVVar18 = pVVar3;
                        pVVar24 = pVVar2;
                      } while (lVar20 != 0);
                      *(undefined8 *)(pVVar2->profiles).profileName =
                           *(undefined8 *)(pVVar3->profiles).profileName;
                      local_1398._Mypair._Myval2._Mylast = local_1398._Mypair._Myval2._Mylast + 1;
                    }
                    local_13d5 = '\x01';
                    pVVar14 = local_13b8;
                    param_2 = local_13c0;
                    break;
                  }
                  local_1240 = &local_12f0;
                  puStack_12c8 = local_1258;
                  local_1250 = 0;
                  local_1258[0] = 0x3b9b23e5;
                  uStack_1248 = 1;
                  local_12d0 = CONCAT44(local_12d0._4_4_,0x3b9b23e6);
                  if ((p_Stack_1308 != (_func___cdecl_void *)0x0) &&
                     (local_1300 != (_func___cdecl_void *)0x0)) {
                    uVar27 = 0;
                    if (local_1330->videoProfileCount != 0) {
                      do {
                        local_1028.sType = VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR;
                        pVStack_1010 = (VkBaseOutStructure *)0x0;
                        local_1028.pNext = (VkBaseOutStructure *)0x0;
                        uStack_1018 = 0;
                        local_12f0._4_4_ = local_1028._4_4_;
                        local_12f0.sType = VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR;
                        local_12f0.pNext = (void *)0x0;
                        local_12f0.videoCodecOperation = VK_VIDEO_CODEC_OPERATION_NONE_KHR;
                        local_12f0.chromaSubsampling = 0;
                        local_12f0.lumaBitDepth = 0;
                        local_12f0.chromaBitDepth = 0;
                        pVStack_12f8 = local_1330->pVideoProfiles + uVar27;
                        local_12a0 = CONCAT71(local_12a0._1_7_,1);
                        uStack_12b8 = uStack_12b8 & 0xffffffff;
                        detail::vpForEachMatchingVideoProfiles
                                  (&local_12f0,&local_1348,
                                   `vpGetPhysicalDeviceProfileVariantsSupport'::__l78::<lambda_5>::
                                   <lambda_invoker_cdecl>);
                        if (((char)local_12a0 == '\0') || (uStack_12b8._4_4_ == 0)) {
                          cVar30 = '\0';
                        }
                        uVar21 = (int)uVar27 + 1;
                        uVar27 = (ulonglong)uVar21;
                      } while (uVar21 < local_1330->videoProfileCount);
                    }
                    goto LAB_145bc6c90;
                  }
                  lVar20 = 2;
                  pcVar17 = local_1238.blockName;
                  do {
                    uVar5 = *(undefined8 *)(pVVar26->blockName + 8);
                    uVar6 = *(undefined8 *)(pVVar26->blockName + 0x10);
                    uVar7 = *(undefined8 *)(pVVar26->blockName + 0x18);
                    *(undefined8 *)pcVar17 = *(undefined8 *)pVVar26->blockName;
                    *(undefined8 *)(pcVar17 + 8) = uVar5;
                    uVar5 = *(undefined8 *)(pVVar26->blockName + 0x20);
                    uVar8 = *(undefined8 *)(pVVar26->blockName + 0x28);
                    *(undefined8 *)(pcVar17 + 0x10) = uVar6;
                    *(undefined8 *)(pcVar17 + 0x18) = uVar7;
                    uVar6 = *(undefined8 *)(pVVar26->blockName + 0x30);
                    uVar7 = *(undefined8 *)(pVVar26->blockName + 0x38);
                    *(undefined8 *)(pcVar17 + 0x20) = uVar5;
                    *(undefined8 *)(pcVar17 + 0x28) = uVar8;
                    uVar5 = *(undefined8 *)(pVVar26->blockName + 0x40);
                    uVar8 = *(undefined8 *)(pVVar26->blockName + 0x48);
                    *(undefined8 *)(pcVar17 + 0x30) = uVar6;
                    *(undefined8 *)(pcVar17 + 0x38) = uVar7;
                    uVar6 = *(undefined8 *)(pVVar26->blockName + 0x50);
                    uVar7 = *(undefined8 *)(pVVar26->blockName + 0x58);
                    *(undefined8 *)(pcVar17 + 0x40) = uVar5;
                    *(undefined8 *)(pcVar17 + 0x48) = uVar8;
                    uVar5 = *(undefined8 *)(pVVar26->blockName + 0x60);
                    uVar8 = *(undefined8 *)(pVVar26->blockName + 0x68);
                    *(undefined8 *)(pcVar17 + 0x50) = uVar6;
                    *(undefined8 *)(pcVar17 + 0x58) = uVar7;
                    uVar6 = *(undefined8 *)(pVVar26->blockName + 0x70);
                    uVar7 = *(undefined8 *)(pVVar26->blockName + 0x78);
                    *(undefined8 *)(pcVar17 + 0x60) = uVar5;
                    *(undefined8 *)(pcVar17 + 0x68) = uVar8;
                    *(undefined8 *)(pcVar17 + 0x70) = uVar6;
                    *(undefined8 *)(pcVar17 + 0x78) = uVar7;
                    lVar20 = lVar20 + -1;
                    pcVar17 = pcVar17 + 0x80;
                    pVVar26 = (VpVariantDesc *)(pVVar26->blockName + 0x80);
                  } while (lVar20 != 0);
LAB_145bc6cfc:
                  if (local_13b0._Mypair._Myval2._Mylast == local_13b0._Mypair._Myval2._Myend) {
                    std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
                    _Emplace_reallocate<VpBlockProperties_const_&>
                              (&local_13b0,local_13b0._Mypair._Myval2._Mylast,&local_1238);
                  }
                  else {
                    lVar20 = 4;
                    pVVar18 = &local_1238;
                    pVVar24 = local_13b0._Mypair._Myval2._Mylast;
                    do {
                      pVVar2 = (VpBlockProperties *)((pVVar24->profiles).profileName + 0x80);
                      uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 8);
                      uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x10);
                      uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x18);
                      pVVar3 = (VpBlockProperties *)((pVVar18->profiles).profileName + 0x80);
                      *(undefined8 *)(pVVar24->profiles).profileName =
                           *(undefined8 *)(pVVar18->profiles).profileName;
                      *(undefined8 *)((pVVar24->profiles).profileName + 8) = uVar5;
                      uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x20);
                      uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x28);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x10) = uVar6;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x18) = uVar7;
                      uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x30);
                      uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x38);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x20) = uVar5;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x28) = uVar8;
                      uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x40);
                      uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x48);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x30) = uVar6;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x38) = uVar7;
                      uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x50);
                      uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x58);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x40) = uVar5;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x48) = uVar8;
                      uVar5 = *(undefined8 *)((pVVar18->profiles).profileName + 0x60);
                      uVar8 = *(undefined8 *)((pVVar18->profiles).profileName + 0x68);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x50) = uVar6;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x58) = uVar7;
                      uVar6 = *(undefined8 *)((pVVar18->profiles).profileName + 0x70);
                      uVar7 = *(undefined8 *)((pVVar18->profiles).profileName + 0x78);
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x60) = uVar5;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x68) = uVar8;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x70) = uVar6;
                      *(undefined8 *)((pVVar24->profiles).profileName + 0x78) = uVar7;
                      lVar20 = lVar20 + -1;
                      pVVar18 = pVVar3;
                      pVVar24 = pVVar2;
                    } while (lVar20 != 0);
                    *(undefined8 *)(pVVar2->profiles).profileName =
                         *(undefined8 *)(pVVar3->profiles).profileName;
                    local_13b0._Mypair._Myval2._Mylast = local_13b0._Mypair._Myval2._Mylast + 1;
                  }
                  local_13cc = local_13cc + 1;
                  uVar27 = (ulonglong)local_13cc;
                  pVVar14 = local_13b8;
                  param_2 = local_13c0;
                } while (local_13cc < local_1278->variantCount);
              }
              local_13c8 = local_13c8 + 1;
              uVar23 = (ulonglong)local_13c8;
              local_13d8 = false;
              if (local_13d5 != '\0') {
                local_13d8 = bVar10;
              }
              uVar27 = local_1380;
              lVar22 = local_1378;
              _Var34 = local_13d7;
              bVar10 = local_13d8;
            } while (local_13c8 < pVVar14->requiredCapabilityCount);
          }
          _Var29 = (_Value_init_tag)0x0;
          if (local_13d8) {
            _Var29 = _Var34;
          }
          uVar27 = uVar27 + 1;
          lVar20 = lVar22 + 0x104;
          param_6 = local_1268;
          local_1380 = uVar27;
          local_1378 = lVar20;
          if (local_1270 <= uVar27) goto LAB_145bc6f8a;
          local_13d7 = _Var29;
          pVVar14 = detail::vpGetProfileDesc
                              (local_1298._Mypair._Myval2._Myfirst[1].profileName + lVar22);
          local_13b8 = pVVar14;
        } while (pVVar14 != (VpProfileDesc *)0x0);
      }
      VVar11 = VK_ERROR_UNKNOWN;
      std::vector<VpProfileProperties,std::allocator<VpProfileProperties>_>::
      ~vector<VpProfileProperties,std::allocator<VpProfileProperties>_>(&local_1298);
    }
  }
  std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
  ~vector<VpBlockProperties,std::allocator<VpBlockProperties>_>(&local_13b0);
  std::vector<VpBlockProperties,std::allocator<VpBlockProperties>_>::
  ~vector<VpBlockProperties,std::allocator<VpBlockProperties>_>(&local_1398);
LAB_145bc70a2:
  if (local_1368._Mypair._Myval2._Myfirst != (VkExtensionProperties *)0x0) {
    uVar25 = (((longlong)local_1368._Mypair._Myval2._Myend -
              (longlong)local_1368._Mypair._Myval2._Myfirst) / 0x104) * 0x104;
    pVVar28 = local_1368._Mypair._Myval2._Myfirst;
    if (0xfff < uVar25) {
      pVVar28 = *(VkExtensionProperties **)
                 (local_1368._Mypair._Myval2._Myfirst[-1].extensionName + 0xfc);
      uVar25 = uVar25 + 0x27;
      if ((char *)0x1f <
          (char *)((longlong)local_1368._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar28))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pVVar28,uVar25);
  }
  return VVar11;
}

// vpGetProfileAPIVersion @ 145bc7150

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

uint __cdecl vpGetProfileAPIVersion(VpProfileProperties *param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulong64 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  VpProfileProperties *pVVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong local_res10;
  vector<VpProfileProperties,std::allocator<VpProfileProperties>_> local_48;
  
  detail::GatherProfiles(&local_48,param_1,(char *)0x0);
  uVar8 = 0;
  local_res10 = 0;
  uVar13 = 0;
  uVar9 = 0;
  lVar1 = (longlong)local_48._Mypair._Myval2._Mylast - (longlong)local_48._Mypair._Myval2._Myfirst
          >> 0x3f;
  lVar11 = ((longlong)local_48._Mypair._Myval2._Mylast - (longlong)local_48._Mypair._Myval2._Myfirst
           ) / 0x104 + lVar1;
  if (lVar11 != lVar1) {
    lVar12 = 0;
    uVar8 = 0;
    do {
      pcVar2 = (local_48._Mypair._Myval2._Myfirst)->profileName;
      uVar7 = 0;
      while( true ) {
        iVar3 = strncmp((char *)(detail::profiles + uVar7),pcVar2 + lVar12,0x100);
        if (iVar3 == 0) break;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (5 < uVar6) goto LAB_145bc71fc;
      }
      if (detail::profiles + uVar7 == (VpProfileDesc *)0x0) {
LAB_145bc71fc:
        uVar9 = 0;
        goto LAB_145bc726f;
      }
      uVar6 = detail::profiles[uVar7].minApiVersion;
      uVar4 = uVar6 >> 0x16 & 0x7f;
      if (uVar8 < uVar4) {
        uVar8 = uVar4;
      }
      uVar4 = uVar6 >> 0xc & 0x3ff;
      if (uVar13 < uVar4) {
        uVar13 = uVar4;
      }
      if (uVar9 < (uVar6 & 0xfff)) {
        uVar9 = uVar6 & 0xfff;
      }
      local_res10 = local_res10 + 1;
      lVar12 = lVar12 + 0x104;
    } while (local_res10 < (ulonglong)(lVar11 - lVar1));
  }
  uVar9 = (uVar8 << 10 | uVar13) << 0xc | uVar9;
LAB_145bc726f:
  if (local_48._Mypair._Myval2._Myfirst != (VpProfileProperties *)0x0) {
    uVar5 = (((longlong)local_48._Mypair._Myval2._Myend -
             (longlong)local_48._Mypair._Myval2._Myfirst) / 0x104) * 0x104;
    pVVar10 = local_48._Mypair._Myval2._Myfirst;
    if (0xfff < uVar5) {
      pVVar10 = *(VpProfileProperties **)(local_48._Mypair._Myval2._Myfirst[-1].profileName + 0xfc);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_48._Mypair._Myval2._Myfirst + (-8 - (longlong)pVVar10))
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pVVar10,uVar5);
  }
  return uVar9;
}

// vpGetProfileDesc @ 145bc7320

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

VpProfileDesc * __cdecl detail::vpGetProfileDesc(char *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = strncmp((char *)(profiles + uVar3),param_1,0x100);
    if (iVar1 == 0) {
      return profiles + uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 < 6);
  return (VpProfileDesc *)0x0;
}

// IMPLEMENT_MODULE_VulkanRHI @ 145bc7390

void __cdecl IMPLEMENT_MODULE_VulkanRHI(void)

{
  return;
}

// MemoryPool'' @ 1503ca330

void __cdecl `dynamic_atexit_destructor_for_'FVulkanSyncPoint::MemoryPool__(void)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FVulkanSyncPoint::MemoryPool);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// VulkanShaderModulesMapCS'' @ 1503ca390

void __cdecl `dynamic_atexit_destructor_for_'FVulkanShader::VulkanShaderModulesMapCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
  return;
}

// `dynamic_atexit_destructor_for_'CS'' @ 1503ca3b0

void __cdecl
`FVulkanDynamicRHI::RHICreateVertexDeclaration'::__l2::_dynamic_atexit_destructor_for__CS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowVulkanPSOPrecache'' @ 1503ca3d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowVulkanPSOPrecache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowVulkanPSOPrecache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCpuWaitForFence'' @ 1503ca3f0

void __cdecl _dynamic_atexit_destructor_for__CVarCpuWaitForFence__(void)

{
  CVarCpuWaitForFence._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCpuWaitForFence);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableVulkanPSOFileCacheWhenPrecachingActive'' @ 1503ca410

void __cdecl
_dynamic_atexit_destructor_for__CVarEnableVulkanPSOFileCacheWhenPrecachingActive__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableVulkanPSOFileCacheWhenPrecachingActive);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanAllowUniformUpload'' @ 1503ca430

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanAllowUniformUpload__(void)

{
  CVarVulkanAllowUniformUpload._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanAllowUniformUpload);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanCPURHIFramePacer'' @ 1503ca450

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanCPURHIFramePacer__(void)

{
  CVarVulkanCPURHIFramePacer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanCPURHIFramePacer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanCPURenderThreadFramePacer'' @ 1503ca470

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanCPURenderThreadFramePacer__(void)

{
  CVarVulkanCPURenderThreadFramePacer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanCPURenderThreadFramePacer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDebugVsync'' @ 1503ca490

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDebugVsync__(void)

{
  CVarVulkanDebugVsync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDebugVsync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDepthStencilForceStorageBit'' @ 1503ca4b0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDepthStencilForceStorageBit__(void)

{
  CVarVulkanDepthStencilForceStorageBit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanDepthStencilForceStorageBit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanForcePacingWithoutVSync'' @ 1503ca4d0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanForcePacingWithoutVSync__(void)

{
  CVarVulkanForcePacingWithoutVSync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanForcePacingWithoutVSync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanKeepSwapChain'' @ 1503ca4f0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanKeepSwapChain__(void)

{
  CVarVulkanKeepSwapChain._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanKeepSwapChain);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanPreTransform'' @ 1503ca510

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanPreTransform__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanPreTransform);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSparseImageAllocSizeMB'' @ 1503ca530

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSparseImageAllocSizeMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanSparseImageAllocSizeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSparseImageMergeBindings'' @ 1503ca550

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSparseImageMergeBindings__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanSparseImageMergeBindings)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSwapChainIgnoreExtraImages'' @ 1503ca570

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSwapChainIgnoreExtraImages__(void)

{
  CVarVulkanSwapChainIgnoreExtraImages._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanSwapChainIgnoreExtraImages);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseInterruptThread'' @ 1503ca590

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseInterruptThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseInterruptThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseSubmissionThread'' @ 1503ca5b0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseSubmissionThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseSubmissionThread);
  return;
}

// `dynamic_atexit_destructor_for_'CrashCritSec'' @ 1503ca5d0

void __cdecl
`VulkanRHI::VerifyVulkanResult'::__l2::_dynamic_atexit_destructor_for__CrashCritSec__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CrashCritSec);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarAllowConcurrentImage'' @ 1503ca5f0

void __cdecl _dynamic_atexit_destructor_for__GCVarAllowConcurrentImage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarAllowConcurrentImage);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarEnableTransientResourceAllocator'' @ 1503ca610

void __cdecl _dynamic_atexit_destructor_for__GCVarEnableTransientResourceAllocator__(void)

{
  GCVarEnableTransientResourceAllocator._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCVarEnableTransientResourceAllocator);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarInputAttachmentShaderRead'' @ 1503ca630

void __cdecl _dynamic_atexit_destructor_for__GCVarInputAttachmentShaderRead__(void)

{
  GCVarInputAttachmentShaderRead._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarInputAttachmentShaderRead);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarVulkanAMDCompatibilityMode'' @ 1503ca650

void __cdecl _dynamic_atexit_destructor_for__GCVarVulkanAMDCompatibilityMode__(void)

{
  GCVarVulkanAMDCompatibilityMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarVulkanAMDCompatibilityMode);
  return;
}

// `dynamic_atexit_destructor_for_'GInternalViewRWLock'' @ 1503ca670

void __cdecl _dynamic_atexit_destructor_for__GInternalViewRWLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GInternalViewRWLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503ca690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GInternalViewRWLock);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPixelFormatNotSupportedWarning'' @ 1503ca6d0

void __cdecl _dynamic_atexit_destructor_for__GPixelFormatNotSupportedWarning__(void)

{
  GPixelFormatNotSupportedWarning.HashSize = 0;
  if (GPixelFormatNotSupportedWarning.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GPixelFormatNotSupportedWarning.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<enum_EPixelFormat>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EPixelFormat>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GPixelFormatNotSupportedWarning);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIThreadCvar'' @ 1503ca710

void __cdecl _dynamic_atexit_destructor_for__GRHIThreadCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GRHIThreadCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GSamplerHashLock'' @ 1503ca730

void __cdecl _dynamic_atexit_destructor_for__GSamplerHashLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GSamplerHashLock);
  return;
}

// `dynamic_atexit_destructor_for_'GSecondaryPayloadsCS'' @ 1503ca750

void __cdecl _dynamic_atexit_destructor_for__GSecondaryPayloadsCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GSecondaryPayloadsCS);
  return;
}

// `dynamic_atexit_destructor_for_'GTextureMapLock'' @ 1503ca770

void __cdecl _dynamic_atexit_destructor_for__GTextureMapLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GTextureMapLock);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexDeclarationCache'' @ 1503ca790

void __cdecl _dynamic_atexit_destructor_for__GVertexDeclarationCache__(void)

{
  GVertexDeclarationCache._72_4_ = 0;
  if (GVertexDeclarationCache._64_8_ != 0) {
    FMemory::Free((void *)GVertexDeclarationCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GVertexDeclarationCache);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanCommandsHelper'' @ 1503ca7d0

void __cdecl _dynamic_atexit_destructor_for__GVulkanCommandsHelper__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&GVulkanCommandsHelper);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanCompressSPIRVCVar'' @ 1503ca7f0

void __cdecl _dynamic_atexit_destructor_for__GVulkanCompressSPIRVCVar__(void)

{
  GVulkanCompressSPIRVCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanCompressSPIRVCVar);
  return;
}

// `dynamic_atexit_destructor_for_'LogVulkan'' @ 1503ca810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVulkan__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVulkan);
  return;
}

// `dynamic_atexit_destructor_for_'TempResults'' @ 1503ca830

void __cdecl
`FVulkanDynamicRHI::CompletePayload'::__l2::_dynamic_atexit_destructor_for__TempResults__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TempResults.AllocatorInstance.Data;
  if (TempResults.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TempResults.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TextureSizes'' @ 1503ca850

void __cdecl
`FVulkanDynamicRHI::RHICalcTexturePlatformSize'::__l2::
_dynamic_atexit_destructor_for__TextureSizes__(void)

{
  TextureSizes._72_4_ = 0;
  if (TextureSizes._64_8_ != 0) {
    FMemory::Free((void *)TextureSizes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHITextureDesc,VkMemoryRequirements>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHITextureDesc,VkMemoryRequirements>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHITextureDesc,VkMemoryRequirements>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TextureSizes);
  return;
}

// `dynamic_atexit_destructor_for_'TextureSizesLock'' @ 1503ca890

void __cdecl
`FVulkanDynamicRHI::RHICalcTexturePlatformSize'::__l2::
_dynamic_atexit_destructor_for__TextureSizesLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
  return;
}

