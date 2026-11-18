// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 163

// `dynamic_initializer_for_'CVarAftermath'' @ 140f94d70

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath,L"r.GPUCrashDebugging.Aftermath",local_res8,
             L"Enables or disables Nvidia Aftermath.",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_Callstack'' @ 140f94dc0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_Callstack__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_Callstack,L"r.GPUCrashDebugging.Aftermath.Callstack",local_res8,
             L"Enable callstack capture in Aftermath dumps",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_Callstack__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_DumpProcessWaitTime'' @ 140f94e10

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_DumpProcessWaitTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAftermath_DumpProcessWaitTime,L"r.GPUCrashDebugging.Aftermath.DumpProcessWaitTime"
             ,local_res8,
             L"Amount of time (in seconds) to wait for Aftermath to finish processing GPU crash dumps."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_DumpProcessWaitTime__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_DumpShaderDebugInfo'' @ 140f94e60

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_DumpShaderDebugInfo__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAftermath_DumpShaderDebugInfo,L"r.GPUCrashDebugging.Aftermath.DumpShaderDebugInfo"
             ,local_res8,L"Dump shader debug info (.nvdbg) alongside the crash dump.",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_DumpShaderDebugInfo__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_DumpStartWaitTime'' @ 140f94eb0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_DumpStartWaitTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 3.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAftermath_DumpStartWaitTime,L"r.GPUCrashDebugging.Aftermath.DumpStartWaitTime",
             local_res8,
             L"Amount of time (in seconds) to wait for Aftermath to start processing GPU crash dumps."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_DumpStartWaitTime__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_LateShaderAssociationsFrameLimit'' @ 140f94f00

void __cdecl
UE::RHICore::Nvidia::Aftermath::
_dynamic_initializer_for__CVarAftermath_LateShaderAssociationsFrameLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_LateShaderAssociationsFrameLimit,
             L"r.GPUCrashDebugging.Aftermath.LateShaderAssociations.FrameLimit",local_res8,
             L"Max last since used number of frames to consider when collecting pipelines\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_LateShaderAssociationsFrameLimit__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_LateShaderAssociationsTimeLimit'' @ 140f94f50

void __cdecl
UE::RHICore::Nvidia::Aftermath::
_dynamic_initializer_for__CVarAftermath_LateShaderAssociationsTimeLimit__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 7.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAftermath_LateShaderAssociationsTimeLimit,
             L"r.GPUCrashDebugging.Aftermath.LateShaderAssociations.TimeLimit",local_res8,
             L"Time limit (s) before the late associations are stopped\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_LateShaderAssociationsTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_Markers'' @ 140f94fa0

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_Markers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_Markers,L"r.GPUCrashDebugging.Aftermath.Markers",local_res8,
             L"Enable draw event markers in Aftermath dumps",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_Markers__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_Resources'' @ 140f94ff0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_Resources__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_Resources,L"r.GPUCrashDebugging.Aftermath.ResourceTracking",local_res8,
             L"Enable resource tracking for Aftermath dumps",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_Resources__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_ShaderErrorReporting'' @ 140f95040

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_ShaderErrorReporting__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_ShaderErrorReporting,
             L"r.GPUCrashDebugging.Aftermath.ShaderErrorReporting",local_res8,
             L"Enable shader error reporting for Aftermath dumps",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_ShaderErrorReporting__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_ShaderRegistration'' @ 140f95090

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_ShaderRegistration__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_ShaderRegistration,L"r.GPUCrashDebugging.Aftermath.ShaderRegistration",
             local_res8,L"Enable registration of shaders and pipelines in Aftermath.",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_ShaderRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarAftermath_TrackAll'' @ 140f950e0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CVarAftermath_TrackAll__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAftermath_TrackAll,L"r.GPUCrashDebugging.Aftermath.TrackAll",local_res8,
             L"Enable maximum tracking for Aftermath dumps",4);
  atexit(_dynamic_atexit_destructor_for__CVarAftermath_TrackAll__);
  return;
}

// `dynamic_initializer_for_'CVarIntelCrashDumps'' @ 140f95130

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__CVarIntelCrashDumps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIntelCrashDumps,L"r.GPUCrashDebugging.IntelCrashDumps",local_res8,
             L"Enable/disable Intel GPU Crash Dumps.",4);
  atexit(_dynamic_atexit_destructor_for__CVarIntelCrashDumps__);
  return;
}

// `dynamic_initializer_for_'CVarIntelCrashDumps_Callstack'' @ 140f95180

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__CVarIntelCrashDumps_Callstack__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIntelCrashDumps_Callstack,L"r.GPUCrashDebugging.IntelCrashDumps.Callstack",
             local_res8,L"Enable callstack capture in the GPU Crash Dumps.",4);
  atexit(_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Callstack__);
  return;
}

// `dynamic_initializer_for_'CVarIntelCrashDumps_DumpWaitTime'' @ 140f951d0

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__CVarIntelCrashDumps_DumpWaitTime__
          (void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarIntelCrashDumps_DumpWaitTime,L"r.GPUCrashDebugging.IntelCrashDumps.DumpWaitTime",
             local_res8,L"Intel Breadcrumbs GPU crash dumps processing timeout.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIntelCrashDumps_DumpWaitTime__);
  return;
}

// `dynamic_initializer_for_'CVarIntelCrashDumps_Markers'' @ 140f95220

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__CVarIntelCrashDumps_Markers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIntelCrashDumps_Markers,L"r.GPUCrashDebugging.IntelCrashDumps.Markers",local_res8,
             L"Enable event markers in the GPU Crash Dumps.",4);
  atexit(_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Markers__);
  return;
}

// `dynamic_initializer_for_'CVarIntelCrashDumps_Resources'' @ 140f95270

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__CVarIntelCrashDumps_Resources__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIntelCrashDumps_Resources,L"r.GPUCrashDebugging.IntelCrashDumps.ResourceTracking",
             local_res8,L"Enable resource tracking in the GPU Crash Dumps.",4);
  atexit(_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Resources__);
  return;
}

// `dynamic_initializer_for_'CVarRHIPoolAllocatorDefragMaxPoolsToClear'' @ 140f952c0

void __cdecl _dynamic_initializer_for__CVarRHIPoolAllocatorDefragMaxPoolsToClear__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHIPoolAllocatorDefragMaxPoolsToClear,L"RHIPoolAllocator.DefragMaxPoolsToClear",
             &GRHIPoolAllocatorDefragMaxPoolsToClear,
             L"Maximum amount of pools to try and clear during a single alloctor defrag call (default: 1 - negative then all pools will be tried and no timeslicing)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHIPoolAllocatorDefragMaxPoolsToClear__);
  return;
}

// `dynamic_initializer_for_'CVarRHIPoolAllocatorDefragSizeFraction'' @ 140f95310

void __cdecl _dynamic_initializer_for__CVarRHIPoolAllocatorDefragSizeFraction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHIPoolAllocatorDefragSizeFraction,L"RHIPoolAllocator.DefragSizeFraction",
             &GRHIPoolAllocatorDefragSizeFraction,
             L"Skip defrag of pool if usage is more than given fraction (default: 0.9f).",0);
  atexit(_dynamic_atexit_destructor_for__CVarRHIPoolAllocatorDefragSizeFraction__);
  return;
}

// `dynamic_initializer_for_'CVarRHIPoolAllocatorValidateLinkList'' @ 140f95360

void __cdecl _dynamic_initializer_for__CVarRHIPoolAllocatorValidateLinkList__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHIPoolAllocatorValidateLinkList,L"RHIPoolAllocator.ValidateLinkedList",
             &GRHIPoolAllocatorValidateLinkList,
             L"Validate all the internal linked list data of all the RHIPoolAllocators during every operation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHIPoolAllocatorValidateLinkList__);
  return;
}

// `dynamic_initializer_for_'CVarRHITransientAllocatorBufferCacheSize'' @ 140f953b0

void __cdecl _dynamic_initializer_for__CVarRHITransientAllocatorBufferCacheSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHITransientAllocatorBufferCacheSize,L"RHI.TransientAllocator.BufferCacheSize",
             &GRHITransientAllocatorBufferCacheSize,
             L"The maximum number of RHI buffers to cache on each heap before garbage collecting.",4
            );
  atexit(_dynamic_atexit_destructor_for__CVarRHITransientAllocatorBufferCacheSize__);
  return;
}

// `dynamic_initializer_for_'CVarRHITransientAllocatorGarbageCollectLatency'' @ 140f95400

void __cdecl _dynamic_initializer_for__CVarRHITransientAllocatorGarbageCollectLatency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHITransientAllocatorGarbageCollectLatency,
             L"RHI.TransientAllocator.GarbageCollectLatency",
             &GRHITransientAllocatorGarbageCollectLatency,
             L"Amount of update cycles before memory is reclaimed.",4);
  atexit(_dynamic_atexit_destructor_for__CVarRHITransientAllocatorGarbageCollectLatency__);
  return;
}

// `dynamic_initializer_for_'CVarRHITransientAllocatorMinimumHeapSize'' @ 140f95450

void __cdecl _dynamic_initializer_for__CVarRHITransientAllocatorMinimumHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHITransientAllocatorMinimumHeapSize,L"RHI.TransientAllocator.MinimumHeapSize",
             &GRHITransientAllocatorMinimumHeapSize,
             L"Minimum size of an RHI transient heap in MB. Heaps will default to this size and grow to the maximum based on the first allocation (Default 128)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarRHITransientAllocatorMinimumHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarRHITransientAllocatorParallelResourceCreation'' @ 140f954a0

void __cdecl _dynamic_initializer_for__CVarRHITransientAllocatorParallelResourceCreation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHITransientAllocatorParallelResourceCreation,
             L"RHI.TransientAllocator.ParallelResourceCreation",
             &GRHITransientAllocatorParallelResourceCreation,
             L"If enabled, a task is launched for each placed resource that is created.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRHITransientAllocatorParallelResourceCreation__);
  return;
}

// `dynamic_initializer_for_'CVarRHITransientAllocatorTextureCacheSize'' @ 140f954f0

void __cdecl _dynamic_initializer_for__CVarRHITransientAllocatorTextureCacheSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHITransientAllocatorTextureCacheSize,L"RHI.TransientAllocator.TextureCacheSize",
             &GRHITransientAllocatorTextureCacheSize,
             L"The maximum number of RHI textures to cache on each heap before garbage collecting.",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarRHITransientAllocatorTextureCacheSize__);
  return;
}

// `dynamic_initializer_for_'CrashIntermediates'' @ 140f95540

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__CrashIntermediates__(void)

{
  atexit(_dynamic_atexit_destructor_for__CrashIntermediates__);
  return;
}

// `dynamic_initializer_for_'GLateShaderAssociateFunc'' @ 140f95560

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__GLateShaderAssociateFunc__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLateShaderAssociateFunc__);
  return;
}

// `dynamic_initializer_for_'GShaderDiagnosticDatas'' @ 140f95580

void __cdecl _dynamic_initializer_for__GShaderDiagnosticDatas__(void)

{
  atexit(_dynamic_atexit_destructor_for__GShaderDiagnosticDatas__);
  return;
}

// `dynamic_initializer_for_'GShaderDiagnosticDatasCS'' @ 140f955a0

void __cdecl _dynamic_initializer_for__GShaderDiagnosticDatasCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS,4000);
  atexit(_dynamic_atexit_destructor_for__GShaderDiagnosticDatasCS__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_RHITransientResources'' @ 140f955d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_RHITransientResources__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_RHITransientResourcesLLM> FVar5;
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
  FVar5 = StatPtr_STAT_RHITransientResourcesLLM;
  if (StatPtr_STAT_RHITransientResourcesLLM ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientResourcesLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_RHITransientResourcesLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_RHITransientResourcesLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientResourcesLLM,*pFVar3,
                       L"RHI Transient Resources","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL"
                       ,true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar5;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_RHITransientResources,L"RHITransientResources",(FName)0x0,(FName)0x0
             ,FVar1,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LogIntelBreadcrumbs'' @ 140f95740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIntelBreadcrumbs__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIntelBreadcrumbs,L"LogIntelBreadcrumbs",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIntelBreadcrumbs__);
  return;
}

// `dynamic_initializer_for_'LogNvidiaAftermath'' @ 140f95780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNvidiaAftermath__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNvidiaAftermath,L"LogNvidiaAftermath",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNvidiaAftermath__);
  return;
}

// `dynamic_initializer_for_'LogRHICore'' @ 140f957c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRHICore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogRHICore,L"LogRHICore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRHICore__);
  return;
}

// `dynamic_initializer_for_'NameStorage'' @ 140f95800

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__NameStorage__(void)

{
  atexit(_dynamic_atexit_destructor_for__NameStorage__);
  return;
}

// `dynamic_initializer_for_'NameStorage'' @ 140f95820

void __cdecl UE::RHICore::Intel::GPUCrashDumps::_dynamic_initializer_for__NameStorage__(void)

{
  atexit(_dynamic_atexit_destructor_for__NameStorage__);
  return;
}

// `dynamic_initializer_for_'ShaderRegistration'' @ 140f95840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_initializer_for__ShaderRegistration__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&ShaderRegistration,4000);
  ShaderRegistration.ShaderBinaryToDebugHash._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  ShaderRegistration.ShaderBinaryToDebugHash._48_8_ = _UNK_150631d98;
  ShaderRegistration.ShaderBinaryToDebugHash._0_8_ = 0;
  ShaderRegistration.ShaderBinaryToDebugHash._8_8_ = 0;
  ShaderRegistration.ShaderBinaryToDebugHash._32_8_ = 0;
  ShaderRegistration.ShaderBinaryToDebugHash._64_8_ = 0;
  ShaderRegistration.ShaderBinaryToDebugHash._72_4_ = 0;
  atexit(_dynamic_atexit_destructor_for__ShaderRegistration__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientBufferMemoryRequested'' @ 140f958a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientBufferMemoryRequested__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientBufferMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientBufferMemoryRequested>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientBufferMemoryRequested");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientBufferMemoryRequested,*pFVar1,
               L"Buffer Memory Requested","STATGROUP_RHITransientMemory","STATCAT_Advanced",
               L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientBuffers'' @ 140f95930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientBuffers == (FThreadSafeStaticStat<FStat_STAT_RHITransientBuffers>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientBuffers,*pFVar1,L"Buffers",
               "STATGROUP_RHITransientMemory","STATCAT_Advanced",L"RHI: Transient Memory",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientMemoryAliased'' @ 140f959c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientMemoryAliased__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientMemoryAliased ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryAliased>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientMemoryAliased");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryAliased,*pFVar1,
               L"Memory Aliased","STATGROUP_RHITransientMemory","STATCAT_Advanced",
               L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientMemoryRequested'' @ 140f95a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientMemoryRequested__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryRequested>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientMemoryRequested");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryRequested,*pFVar1,
               L"Memory Requested","STATGROUP_RHITransientMemory","STATCAT_Advanced",
               L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientMemoryUsed'' @ 140f95ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientMemoryUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientMemoryUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientMemoryUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientMemoryUsed,*pFVar1,
               L"Memory Used","STATGROUP_RHITransientMemory","STATCAT_Advanced",
               L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientResources'' @ 140f95b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientResources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientResources ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientResources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientResources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientResources,*pFVar1,L"Resources"
               ,"STATGROUP_RHITransientMemory","STATCAT_Advanced",L"RHI: Transient Memory",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientResourcesLLM'' @ 140f95c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientResourcesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientResourcesLLM ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientResourcesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientResourcesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientResourcesLLM,*pFVar1,
               L"RHI Transient Resources","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientTextureMemoryRequested'' @ 140f95c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientTextureMemoryRequested__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientTextureMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientTextureMemoryRequested>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientTextureMemoryRequested");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientTextureMemoryRequested,*pFVar1
               ,L"Texture Memory Requested","STATGROUP_RHITransientMemory","STATCAT_Advanced",
               L"RHI: Transient Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITransientTextures'' @ 140f95d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITransientTextures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITransientTextures ==
      (FThreadSafeStaticStat<FStat_STAT_RHITransientTextures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITransientTextures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITransientTextures,*pFVar1,L"Textures",
               "STATGROUP_RHITransientMemory","STATCAT_Advanced",L"RHI: Transient Memory",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientBufferCacheHitPercentage'' @ 140f95db0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientBufferCacheHitPercentage__(void)

{
  __GTraceCounterTransientBufferCacheHitPercentage.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/BufferCacheHitPercentage",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientBufferCacheHitPercentage.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientBufferCacheHitPercentage__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientBufferCacheSize'' @ 140f95df0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientBufferCacheSize__(void)

{
  __GTraceCounterTransientBufferCacheSize.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/BufferCacheSize",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientBufferCacheSize.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientBufferCacheSize__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientBufferCount'' @ 140f95e30

void __cdecl _dynamic_initializer_for____GTraceCounterTransientBufferCount__(void)

{
  __GTraceCounterTransientBufferCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/BufferCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientBufferCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientBufferCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientBufferCreateCount'' @ 140f95e70

void __cdecl _dynamic_initializer_for____GTraceCounterTransientBufferCreateCount__(void)

{
  __GTraceCounterTransientBufferCreateCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/BufferCreateCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientBufferCreateCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientBufferCreateCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientMemoryRangeCount'' @ 140f95eb0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientMemoryRangeCount__(void)

{
  __GTraceCounterTransientMemoryRangeCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/MemoryRangeCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientMemoryRangeCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientMemoryRangeCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientMemoryRequested'' @ 140f95ef0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientMemoryRequested__(void)

{
  __GTraceCounterTransientMemoryRequested.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/MemoryRequested",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTransientMemoryRequested.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientMemoryRequested__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientMemoryUsed'' @ 140f95f30

void __cdecl _dynamic_initializer_for____GTraceCounterTransientMemoryUsed__(void)

{
  __GTraceCounterTransientMemoryUsed.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/MemoryUsed",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterTransientMemoryUsed.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientMemoryUsed__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientPageAllocateCount'' @ 140f95f70

void __cdecl _dynamic_initializer_for____GTraceCounterTransientPageAllocateCount__(void)

{
  __GTraceCounterTransientPageAllocateCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/PageAllocateCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientPageAllocateCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientPageAllocateCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientPageMapCount'' @ 140f95fb0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientPageMapCount__(void)

{
  __GTraceCounterTransientPageMapCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/PageMapCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientPageMapCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientPageMapCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientPageSpanCount'' @ 140f95ff0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientPageSpanCount__(void)

{
  __GTraceCounterTransientPageSpanCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/PageSpanCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientPageSpanCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientPageSpanCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientResourceCreateCount'' @ 140f96030

void __cdecl _dynamic_initializer_for____GTraceCounterTransientResourceCreateCount__(void)

{
  __GTraceCounterTransientResourceCreateCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/ResourceCreateCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientResourceCreateCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientResourceCreateCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientTextureCacheHitPercentage'' @ 140f96070

void __cdecl _dynamic_initializer_for____GTraceCounterTransientTextureCacheHitPercentage__(void)

{
  __GTraceCounterTransientTextureCacheHitPercentage.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/TextureCacheHitPercentage",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientTextureCacheHitPercentage.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientTextureCacheHitPercentage__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientTextureCacheSize'' @ 140f960b0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientTextureCacheSize__(void)

{
  __GTraceCounterTransientTextureCacheSize.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/TextureCacheSize",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientTextureCacheSize.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientTextureCacheSize__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientTextureCount'' @ 140f960f0

void __cdecl _dynamic_initializer_for____GTraceCounterTransientTextureCount__(void)

{
  __GTraceCounterTransientTextureCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/TextureCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientTextureCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientTextureCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterTransientTextureCreateCount'' @ 140f96130

void __cdecl _dynamic_initializer_for____GTraceCounterTransientTextureCreateCount__(void)

{
  __GTraceCounterTransientTextureCreateCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"TransientAllocator/TextureCreateCount",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterTransientTextureCreateCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterTransientTextureCreateCount__);
  return;
}

// operator<<<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> @ 1446c9440

FArchive * __cdecl
operator<<<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
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
                (4,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
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
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FShaderCodeValidationStride *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
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
        TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FShaderCodeValidationStride *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4));
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

// operator<<<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> @ 1446c9450

FArchive * __cdecl
operator<<<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
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
                (4,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
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
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FShaderCodeValidationType *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
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
        TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FShaderCodeValidationType *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4));
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

// operator<<<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> @ 1446c9460

FArchive * __cdecl
operator<<<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> *param_2)

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
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FShaderCodeValidationUBSize *)
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
        TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_>::Empty
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
          operator<<(param_1,(FShaderCodeValidationUBSize *)
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

// operator<<<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> @ 1446c9470

FArchive * __cdecl
operator<<<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> *param_2)

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
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  uVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FShaderDiagnosticData,int>
                ((FShaderDiagnosticData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar11;
          uVar13 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar10 = (uint)uVar11;
              uVar8 = 0;
              if ((int)uVar10 < (int)uVar13) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar12 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar12);
                }
              }
              else {
                *(undefined4 *)pFVar12 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              operator<<(param_1,(FString *)(pFVar12 + 8));
              uVar11 = (ulonglong)(uVar10 + 1);
              uVar14 = uVar14 + 0x18;
              uVar13 = param_2->ArrayNum;
            } while ((int)(uVar10 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
              DefaultConstructItems<FShaderDiagnosticData,int>(pFVar12,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar12);
                }
              }
              else {
                *(uint *)pFVar12 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              operator<<(param_1,(FString *)(pFVar12 + 8));
              uVar13 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// operator()<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l48::<lambda_1>_> @ 1446c9500

void __thiscall
`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l48::<lambda_1>::
operator()<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l48::<lambda_1>_>
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
      `TCheckedPointerIterator<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    operator()<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l48::<lambda_1>_>
              (param_2,pFVar5,param_2);
    pFVar5 = pFVar5 + 1;
  }
  FGPUBreadcrumbCrashData::FSerializer::EndNode(*(FSerializer **)this);
  return;
}

// Acquire<`FRHITransientHeap::CreateBuffer'::__l2::<lambda_1>_> @ 1446c95d0

FRHITransientBuffer * __thiscall
TRHITransientResourceCache<FRHITransientBuffer>::
Acquire<_FRHITransientHeap::CreateBuffer_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientBuffer> *this,ulong64 param_1,<lambda_1> *param_2
          )

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FRHITransientBuffer *pFVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FRHITransientHeap *local_48;
  FRHITransientHeapAllocation *local_40;
  ulong64 local_38;
  
  iVar9 = (this->Cache).ArrayNum;
  uVar13 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FRHITransientBuffer *)(*pcVar6)();
        return pFVar10;
      }
      pFVar4 = (this->Cache).AllocatorInstance.Data;
      if (*(ulong64 *)(pFVar4 + lVar15 + 8) == param_1) {
        pFVar10 = *(FRHITransientBuffer **)(pFVar4 + lVar15);
        uVar8 = 0;
        if ((int)uVar13 < (this->Cache).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRHITransientBuffer *)(*pcVar6)();
          return pFVar10;
        }
        iVar3 = (this->Cache).ArrayNum;
        pFVar4 = (this->Cache).AllocatorInstance.Data;
        iVar9 = iVar3 + ~uVar13;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar13 * 0x18,pFVar4 + (longlong)(iVar3 - iVar9) * 0x18,
                  (longlong)iVar9 * 0x18);
        }
        piVar1 = &(this->Cache).ArrayNum;
        *piVar1 = *piVar1 + -1;
        piVar1 = &(this->Allocated).ArrayMax;
        iVar9 = (this->Allocated).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Allocated).AllocatorInstance,piVar1);
        }
        (this->Allocated).ArrayNum = iVar9 + 1;
        *(FRHITransientBuffer **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             pFVar10;
        this->HitCount = this->HitCount + 1;
        return pFVar10;
      }
      iVar9 = (this->Cache).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar13 < iVar9);
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"CreatePlacedResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  local_40 = param_2->Allocation;
  pTVar5 = param_2->CreateBufferFunction;
  puVar2 = &(param_2->__this->Stats).Buffers.CreateCount;
  *puVar2 = *puVar2 + 1;
  local_48 = local_40->Heap;
  local_38 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)pTVar5);
  pcVar6 = *(code **)pTVar5;
  plVar12 = (longlong *)&pTVar5->field_0x10;
  if (*(longlong **)&pTVar5->field_0x28 != (longlong *)0x0) {
    plVar12 = *(longlong **)&pTVar5->field_0x28;
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  pFVar10 = (FRHITransientBuffer *)(*pcVar6)(uVar11,&local_48);
  piVar1 = &(this->Allocated).ArrayMax;
  iVar9 = (this->Allocated).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Allocated).AllocatorInstance,piVar1);
  }
  (this->Allocated).ArrayNum = iVar9 + 1;
  *(FRHITransientBuffer **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       pFVar10;
  this->MissCount = this->MissCount + 1;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar10;
}

// Acquire<`FRHITransientResourcePageAllocator::CreateBuffer'::__l2::<lambda_1>_> @ 1446c9830

FRHITransientBuffer * __thiscall
TRHITransientResourceCache<FRHITransientBuffer>::
Acquire<_FRHITransientResourcePageAllocator::CreateBuffer_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientBuffer> *this,ulong64 param_1,<lambda_1> *param_2
          )

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRHITransientResourcePageAllocator *pFVar5;
  wchar_t **ppwVar6;
  FRHIBufferDesc *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FRHITransientBuffer *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  iVar11 = (this->Cache).ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < iVar11) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FRHITransientBuffer *)(*pcVar8)();
        return pFVar12;
      }
      pFVar4 = (this->Cache).AllocatorInstance.Data;
      if (*(ulong64 *)(pFVar4 + lVar15 + 8) == param_1) {
        pFVar12 = *(FRHITransientBuffer **)(pFVar4 + lVar15);
        uVar10 = 0;
        if ((int)uVar13 < (this->Cache).ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FRHITransientBuffer *)(*pcVar8)();
          return pFVar12;
        }
        iVar3 = (this->Cache).ArrayNum;
        pFVar4 = (this->Cache).AllocatorInstance.Data;
        iVar11 = iVar3 + ~uVar13;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar13 * 0x18,pFVar4 + (longlong)(iVar3 - iVar11) * 0x18,
                  (longlong)iVar11 * 0x18);
        }
        piVar1 = &(this->Cache).ArrayNum;
        *piVar1 = *piVar1 + -1;
        piVar1 = &(this->Allocated).ArrayMax;
        iVar11 = (this->Allocated).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Allocated).AllocatorInstance,piVar1);
        }
        (this->Allocated).ArrayNum = iVar11 + 1;
        *(FRHITransientBuffer **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8) =
             pFVar12;
        this->HitCount = this->HitCount + 1;
        return pFVar12;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar13 < iVar11);
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"CreatePlacedResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  pFVar5 = param_2->__this;
  ppwVar6 = param_2->DebugName;
  pFVar7 = param_2->CreateInfo;
  puVar2 = &(pFVar5->Stats).Buffers.CreateCount;
  *puVar2 = *puVar2 + 1;
  pFVar12 = (FRHITransientBuffer *)
            (**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,pFVar7,*ppwVar6,param_1);
  piVar1 = &(this->Allocated).ArrayMax;
  iVar11 = (this->Allocated).ArrayNum;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Allocated).AllocatorInstance,piVar1);
  }
  (this->Allocated).ArrayNum = iVar11 + 1;
  *(FRHITransientBuffer **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8) =
       pFVar12;
  this->MissCount = this->MissCount + 1;
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar12;
}

// Acquire<`FRHITransientHeap::CreateTexture'::__l2::<lambda_1>_> @ 1446c9a60

FRHITransientTexture * __thiscall
TRHITransientResourceCache<FRHITransientTexture>::
Acquire<_FRHITransientHeap::CreateTexture_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientTexture> *this,ulong64 param_1,
          <lambda_1> *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)> *pTVar5
  ;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FRHITransientTexture *pFVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FRHITransientHeap *local_48;
  FRHITransientHeapAllocation *local_40;
  ulong64 local_38;
  
  iVar9 = (this->Cache).ArrayNum;
  uVar13 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FRHITransientTexture *)(*pcVar6)();
        return pFVar10;
      }
      pFVar4 = (this->Cache).AllocatorInstance.Data;
      if (*(ulong64 *)(pFVar4 + lVar15 + 8) == param_1) {
        pFVar10 = *(FRHITransientTexture **)(pFVar4 + lVar15);
        uVar8 = 0;
        if ((int)uVar13 < (this->Cache).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRHITransientTexture *)(*pcVar6)();
          return pFVar10;
        }
        iVar3 = (this->Cache).ArrayNum;
        pFVar4 = (this->Cache).AllocatorInstance.Data;
        iVar9 = iVar3 + ~uVar13;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar13 * 0x18,pFVar4 + (longlong)(iVar3 - iVar9) * 0x18,
                  (longlong)iVar9 * 0x18);
        }
        piVar1 = &(this->Cache).ArrayNum;
        *piVar1 = *piVar1 + -1;
        piVar1 = &(this->Allocated).ArrayMax;
        iVar9 = (this->Allocated).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Allocated).AllocatorInstance,piVar1);
        }
        (this->Allocated).ArrayNum = iVar9 + 1;
        *(FRHITransientTexture **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             pFVar10;
        this->HitCount = this->HitCount + 1;
        return pFVar10;
      }
      iVar9 = (this->Cache).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar13 < iVar9);
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"CreatePlacedResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  local_40 = param_2->Allocation;
  pTVar5 = param_2->CreateTextureFunction;
  puVar2 = &(param_2->__this->Stats).Textures.CreateCount;
  *puVar2 = *puVar2 + 1;
  local_48 = local_40->Heap;
  local_38 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)pTVar5);
  pcVar6 = *(code **)pTVar5;
  plVar12 = (longlong *)&pTVar5->field_0x10;
  if (*(longlong **)&pTVar5->field_0x28 != (longlong *)0x0) {
    plVar12 = *(longlong **)&pTVar5->field_0x28;
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  pFVar10 = (FRHITransientTexture *)(*pcVar6)(uVar11,&local_48);
  piVar1 = &(this->Allocated).ArrayMax;
  iVar9 = (this->Allocated).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Allocated).AllocatorInstance,piVar1);
  }
  (this->Allocated).ArrayNum = iVar9 + 1;
  *(FRHITransientTexture **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       pFVar10;
  this->MissCount = this->MissCount + 1;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar10;
}

// Acquire<`FRHITransientResourcePageAllocator::CreateTexture'::__l2::<lambda_1>_> @ 1446c9cc0

FRHITransientTexture * __thiscall
TRHITransientResourceCache<FRHITransientTexture>::
Acquire<_FRHITransientResourcePageAllocator::CreateTexture_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientTexture> *this,ulong64 param_1,
          <lambda_1> *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRHITransientResourcePageAllocator *pFVar5;
  wchar_t **ppwVar6;
  FRHITextureDesc *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FRHITransientTexture *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  iVar11 = (this->Cache).ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < iVar11) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FRHITransientTexture *)(*pcVar8)();
        return pFVar12;
      }
      pFVar4 = (this->Cache).AllocatorInstance.Data;
      if (*(ulong64 *)(pFVar4 + lVar15 + 8) == param_1) {
        pFVar12 = *(FRHITransientTexture **)(pFVar4 + lVar15);
        uVar10 = 0;
        if ((int)uVar13 < (this->Cache).ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FRHITransientTexture *)(*pcVar8)();
          return pFVar12;
        }
        iVar3 = (this->Cache).ArrayNum;
        pFVar4 = (this->Cache).AllocatorInstance.Data;
        iVar11 = iVar3 + ~uVar13;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar13 * 0x18,pFVar4 + (longlong)(iVar3 - iVar11) * 0x18,
                  (longlong)iVar11 * 0x18);
        }
        piVar1 = &(this->Cache).ArrayNum;
        *piVar1 = *piVar1 + -1;
        piVar1 = &(this->Allocated).ArrayMax;
        iVar11 = (this->Allocated).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Allocated).AllocatorInstance,piVar1);
        }
        (this->Allocated).ArrayNum = iVar11 + 1;
        *(FRHITransientTexture **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8)
             = pFVar12;
        this->HitCount = this->HitCount + 1;
        return pFVar12;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar13 < iVar11);
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"CreatePlacedResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreTransientResourceAllocator.h"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  pFVar5 = param_2->__this;
  ppwVar6 = param_2->DebugName;
  pFVar7 = param_2->CreateInfo;
  puVar2 = &(pFVar5->Stats).Textures.CreateCount;
  *puVar2 = *puVar2 + 1;
  pFVar12 = (FRHITransientTexture *)
            (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5,pFVar7,*ppwVar6,param_1);
  piVar1 = &(this->Allocated).ArrayMax;
  iVar11 = (this->Allocated).ArrayNum;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Allocated).AllocatorInstance,piVar1);
  }
  (this->Allocated).ArrayNum = iVar11 + 1;
  *(FRHITransientTexture **)((this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8) =
       pFVar12;
  this->MissCount = this->MissCount + 1;
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar12;
}

// ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int> @ 1446c9ef0

void __cdecl
ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
          (void *param_1,FShaderDiagnosticData *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(uint *)(lVar1 + (longlong)param_2) = param_2->Hash;
      FString::FString((FString *)(lVar1 + 8 + (longlong)param_2),&param_2->Message);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FRHITransientPageSpanAllocator::FPageSpan,int> @ 1446c9f50

void __cdecl
DefaultConstructItems<FRHITransientPageSpanAllocator::FPageSpan,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderCodeValidationStride,int> @ 1446c9fa0

void __cdecl DefaultConstructItems<FShaderCodeValidationStride,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FShaderCodeValidationType,int> @ 1446c9fb0

void __cdecl DefaultConstructItems<FShaderCodeValidationType,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FShaderCodeValidationUBSize,int> @ 1446c9fc0

void __cdecl DefaultConstructItems<FShaderCodeValidationUBSize,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FShaderDiagnosticData,int> @ 1446c9fd0

void __cdecl DefaultConstructItems<FShaderDiagnosticData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<GFSDK_Aftermath_GpuCrashDump_ResourceInfo,int> @ 1446ca000

void __cdecl
DefaultConstructItems<GFSDK_Aftermath_GpuCrashDump_ResourceInfo,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode,int> @ 1446ca010

void __cdecl
DestructItems<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l2::FBreadcrumbNode,int>
          (FBreadcrumbNode *param_1,int param_2)

{
  FString *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Name;
    TArray<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
    ::
    ~TArray<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
              ((TArray<_void___cdecl_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes(void)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                *)(this + 1));
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&this->Data);
    param_1 = (FBreadcrumbNode *)(this + 2);
  }
  return;
}

// DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int> @ 1446ca050

void __cdecl
DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>(FCrashResult *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TOptional<FString> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->DumpPath;
    do {
      if ((*(int *)((longlong)&pTVar2->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCrashResult *)(pTVar2 + -1))->OutputLog).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderDiagnosticData,int> @ 1446ca0a0

void __cdecl DestructItems<FShaderDiagnosticData,int>(FShaderDiagnosticData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Message;
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

// Forfeit<`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit'::__l2::<lambda_1>_> @ 1446cb140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRHITransientResourceCache<FRHITransientBuffer>::
Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientBuffer> *this,ulong64 param_1,<lambda_1> param_2)

{
  int *piVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  FRHITransientBuffer *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  pFVar14 = pFVar3 + (longlong)(this->Allocated).ArrayNum * 8;
  pFVar12 = pFVar3;
  if (pFVar3 != pFVar14) {
    do {
      cVar2 = *(char *)(*(longlong *)pFVar12 + 0xa5);
      while (cVar2 != '\0') {
        pFVar12 = pFVar12 + 8;
        if (pFVar12 == pFVar14) goto LAB_1446cb1cc;
        cVar2 = *(char *)(*(longlong *)pFVar12 + 0xa5);
      }
      do {
        pFVar14 = pFVar14 + -8;
        if (pFVar12 == pFVar14) goto LAB_1446cb1cc;
      } while (*(char *)(*(longlong *)pFVar14 + 0xa5) == '\0');
      lVar4 = *(longlong *)pFVar12;
      *(longlong *)pFVar12 = *(longlong *)pFVar14;
      pFVar12 = pFVar12 + 8;
      *(longlong *)pFVar14 = lVar4;
    } while (pFVar12 != pFVar14);
  }
LAB_1446cb1cc:
  iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar3 >> 3);
  iVar13 = (this->Allocated).ArrayNum - iVar11;
  pFVar14 = (this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8;
  if ((iVar13 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = pFVar14 + (longlong)iVar13 * 8;
  for (; pFVar14 != pFVar3; pFVar14 = pFVar14 + 8) {
    lVar4 = *(longlong *)pFVar14;
    iVar13 = (this->Cache).ArrayNum;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (iVar13 == (this->Cache).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,&(this->Cache).ArrayMax);
    }
    (this->Cache).ArrayNum = iVar13 + 1;
    lVar9 = (longlong)iVar13;
    pFVar12 = (this->Cache).AllocatorInstance.Data;
    *(longlong *)(pFVar12 + lVar9 * 0x18) = lVar4;
    *(undefined8 *)(pFVar12 + lVar9 * 0x18 + 8) = uVar5;
    *(ulong64 *)(pFVar12 + lVar9 * 0x18 + 0x10) = param_1;
  }
  TArray<FRHITransientBuffer_*,TSizedDefaultAllocator<32>_>::SetNum(&this->Allocated,iVar11,No);
  AlgoImpl::
  IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
            ((FCacheItem *)(this->Cache).AllocatorInstance.Data,(this->Cache).ArrayNum,local_res8,
             (<lambda_2>)local_res8);
  uVar10 = (this->Cache).ArrayNum;
  if (this->Capacity < uVar10) {
    do {
      uVar8 = 0;
      if ((int)(uVar10 - 1) < (int)uVar10) {
        uVar8 = -uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      pFVar14 = (this->Cache).AllocatorInstance.Data;
      if (param_1 < (ulonglong)this->GarbageCollectLatency +
                    *(longlong *)(pFVar14 + (longlong)iVar11 * 0x18 + -8)) break;
      this_00 = *(FRHITransientBuffer **)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18);
      if (this_00 != (FRHITransientBuffer *)0x0) {
        FRHITransientBuffer::~FRHITransientBuffer(this_00);
        ::operator_delete(this_00,0x110);
      }
      if (((this->Cache).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar10 = iVar11 - 1;
      pFVar14 = (this->Cache).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      iVar11 = ~uVar10 + iVar11;
      if (iVar11 != 0) {
        memmove(pFVar14,pFVar14 + 0x18,(longlong)iVar11 * 0x18);
      }
      piVar1 = &(this->Cache).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Cache).ArrayNum,&(this->Cache).ArrayMax);
      uVar10 = (this->Cache).ArrayNum;
    } while (this->Capacity < uVar10);
  }
  this->HitCount = 0;
  this->MissCount = 0;
  return;
}

// Forfeit<`TRHITransientResourceCache<FRHITransientTexture>::Forfeit'::__l2::<lambda_1>_> @ 1446cb400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRHITransientResourceCache<FRHITransientTexture>::
Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>
          (TRHITransientResourceCache<FRHITransientTexture> *this,ulong64 param_1,<lambda_1> param_2
          )

{
  int *piVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  FRHITransientTexture *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  pFVar14 = pFVar3 + (longlong)(this->Allocated).ArrayNum * 8;
  pFVar12 = pFVar3;
  if (pFVar3 != pFVar14) {
    do {
      cVar2 = *(char *)(*(longlong *)pFVar12 + 0xa5);
      while (cVar2 != '\0') {
        pFVar12 = pFVar12 + 8;
        if (pFVar12 == pFVar14) goto LAB_1446cb48c;
        cVar2 = *(char *)(*(longlong *)pFVar12 + 0xa5);
      }
      do {
        pFVar14 = pFVar14 + -8;
        if (pFVar12 == pFVar14) goto LAB_1446cb48c;
      } while (*(char *)(*(longlong *)pFVar14 + 0xa5) == '\0');
      lVar4 = *(longlong *)pFVar12;
      *(longlong *)pFVar12 = *(longlong *)pFVar14;
      pFVar12 = pFVar12 + 8;
      *(longlong *)pFVar14 = lVar4;
    } while (pFVar12 != pFVar14);
  }
LAB_1446cb48c:
  iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar3 >> 3);
  iVar13 = (this->Allocated).ArrayNum - iVar11;
  pFVar14 = (this->Allocated).AllocatorInstance.Data + (longlong)iVar11 * 8;
  if ((iVar13 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = pFVar14 + (longlong)iVar13 * 8;
  for (; pFVar14 != pFVar3; pFVar14 = pFVar14 + 8) {
    lVar4 = *(longlong *)pFVar14;
    iVar13 = (this->Cache).ArrayNum;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (iVar13 == (this->Cache).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,&(this->Cache).ArrayMax);
    }
    (this->Cache).ArrayNum = iVar13 + 1;
    lVar9 = (longlong)iVar13;
    pFVar12 = (this->Cache).AllocatorInstance.Data;
    *(longlong *)(pFVar12 + lVar9 * 0x18) = lVar4;
    *(undefined8 *)(pFVar12 + lVar9 * 0x18 + 8) = uVar5;
    *(ulong64 *)(pFVar12 + lVar9 * 0x18 + 0x10) = param_1;
  }
  TArray<FRHITransientTexture_*,TSizedDefaultAllocator<32>_>::SetNum(&this->Allocated,iVar11,No);
  AlgoImpl::
  IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
            ((FCacheItem *)(this->Cache).AllocatorInstance.Data,(this->Cache).ArrayNum,local_res8,
             (<lambda_2>)local_res8);
  uVar10 = (this->Cache).ArrayNum;
  if (this->Capacity < uVar10) {
    do {
      uVar8 = 0;
      if ((int)(uVar10 - 1) < (int)uVar10) {
        uVar8 = -uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      pFVar14 = (this->Cache).AllocatorInstance.Data;
      if (param_1 < (ulonglong)this->GarbageCollectLatency +
                    *(longlong *)(pFVar14 + (longlong)iVar11 * 0x18 + -8)) break;
      this_00 = *(FRHITransientTexture **)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18);
      if (this_00 != (FRHITransientTexture *)0x0) {
        FRHITransientTexture::~FRHITransientTexture(this_00);
        ::operator_delete(this_00,0x150);
      }
      if (((this->Cache).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar10 = iVar11 - 1;
      pFVar14 = (this->Cache).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      iVar11 = ~uVar10 + iVar11;
      if (iVar11 != 0) {
        memmove(pFVar14,pFVar14 + 0x18,(longlong)iVar11 * 0x18);
      }
      piVar1 = &(this->Cache).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Cache).ArrayNum,&(this->Cache).ArrayMax);
      uVar10 = (this->Cache).ArrayNum;
    } while (this->Capacity < uVar10);
  }
  this->HitCount = 0;
  this->MissCount = 0;
  return;
}

// Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l22::<lambda_4>_> @ 1446cb6c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRHITransientResourceCache<FRHITransientTexture>::
Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>
          (TRHITransientResourceCache<FRHITransientTexture> *this,ulong64 param_1,<lambda_4> param_2
          )

{
  int *piVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  FRHITransientTexture *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  pFVar14 = pFVar3 + (longlong)(this->Allocated).ArrayNum * 8;
  pFVar13 = pFVar3;
  if (pFVar3 != pFVar14) {
    do {
      cVar2 = *(char *)(*(longlong *)pFVar13 + 0xa5);
      while (cVar2 != '\0') {
        pFVar13 = pFVar13 + 8;
        if (pFVar13 == pFVar14) goto LAB_1446cb74c;
        cVar2 = *(char *)(*(longlong *)pFVar13 + 0xa5);
      }
      do {
        pFVar14 = pFVar14 + -8;
        if (pFVar13 == pFVar14) goto LAB_1446cb74c;
      } while (*(char *)(*(longlong *)pFVar14 + 0xa5) == '\0');
      lVar4 = *(longlong *)pFVar13;
      *(longlong *)pFVar13 = *(longlong *)pFVar14;
      pFVar13 = pFVar13 + 8;
      *(longlong *)pFVar14 = lVar4;
    } while (pFVar13 != pFVar14);
  }
LAB_1446cb74c:
  iVar12 = (int)((longlong)pFVar13 - (longlong)pFVar3 >> 3);
  iVar11 = (this->Allocated).ArrayNum - iVar12;
  pFVar14 = (this->Allocated).AllocatorInstance.Data + (longlong)iVar12 * 8;
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = pFVar14 + (longlong)iVar11 * 8;
  for (; pFVar14 != pFVar3; pFVar14 = pFVar14 + 8) {
    lVar4 = *(longlong *)pFVar14;
    iVar11 = (this->Cache).ArrayNum;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (iVar11 == (this->Cache).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,&(this->Cache).ArrayMax);
    }
    (this->Cache).ArrayNum = iVar11 + 1;
    lVar9 = (longlong)iVar11;
    pFVar13 = (this->Cache).AllocatorInstance.Data;
    *(longlong *)(pFVar13 + lVar9 * 0x18) = lVar4;
    *(undefined8 *)(pFVar13 + lVar9 * 0x18 + 8) = uVar5;
    *(ulong64 *)(pFVar13 + lVar9 * 0x18 + 0x10) = param_1;
  }
  TArray<FRHITransientTexture_*,TSizedDefaultAllocator<32>_>::SetNum(&this->Allocated,iVar12,No);
  AlgoImpl::
  IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>_::__l2::<lambda_2>_>
            ((FCacheItem *)(this->Cache).AllocatorInstance.Data,(this->Cache).ArrayNum,local_res8,
             (<lambda_2>)local_res8);
  uVar10 = (this->Cache).ArrayNum;
  if (this->Capacity < uVar10) {
    do {
      uVar8 = 0;
      if ((int)(uVar10 - 1) < (int)uVar10) {
        uVar8 = -uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      pFVar14 = (this->Cache).AllocatorInstance.Data;
      if (param_1 < (ulonglong)this->GarbageCollectLatency +
                    *(longlong *)(pFVar14 + (longlong)iVar11 * 0x18 + -8)) break;
      (**(code **)((param_2.__this)->_padding_ + 0x58))
                (param_2.__this,*(undefined8 *)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18));
      this_00 = *(FRHITransientTexture **)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18);
      if (this_00 != (FRHITransientTexture *)0x0) {
        FRHITransientTexture::~FRHITransientTexture(this_00);
        ::operator_delete(this_00,0x150);
      }
      if (((this->Cache).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar10 = iVar11 - 1;
      pFVar14 = (this->Cache).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      iVar11 = ~uVar10 + iVar11;
      if (iVar11 != 0) {
        memmove(pFVar14,pFVar14 + 0x18,(longlong)iVar11 * 0x18);
      }
      piVar1 = &(this->Cache).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Cache).ArrayNum,&(this->Cache).ArrayMax);
      uVar10 = (this->Cache).ArrayNum;
    } while (this->Capacity < uVar10);
  }
  this->HitCount = 0;
  this->MissCount = 0;
  return;
}

// Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l23::<lambda_5>_> @ 1446cb980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TRHITransientResourceCache<FRHITransientBuffer>::
Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>
          (TRHITransientResourceCache<FRHITransientBuffer> *this,ulong64 param_1,<lambda_5> param_2)

{
  int *piVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  FRHITransientBuffer *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  pFVar14 = pFVar3 + (longlong)(this->Allocated).ArrayNum * 8;
  pFVar13 = pFVar3;
  if (pFVar3 != pFVar14) {
    do {
      cVar2 = *(char *)(*(longlong *)pFVar13 + 0xa5);
      while (cVar2 != '\0') {
        pFVar13 = pFVar13 + 8;
        if (pFVar13 == pFVar14) goto LAB_1446cba0c;
        cVar2 = *(char *)(*(longlong *)pFVar13 + 0xa5);
      }
      do {
        pFVar14 = pFVar14 + -8;
        if (pFVar13 == pFVar14) goto LAB_1446cba0c;
      } while (*(char *)(*(longlong *)pFVar14 + 0xa5) == '\0');
      lVar4 = *(longlong *)pFVar13;
      *(longlong *)pFVar13 = *(longlong *)pFVar14;
      pFVar13 = pFVar13 + 8;
      *(longlong *)pFVar14 = lVar4;
    } while (pFVar13 != pFVar14);
  }
LAB_1446cba0c:
  iVar12 = (int)((longlong)pFVar13 - (longlong)pFVar3 >> 3);
  iVar11 = (this->Allocated).ArrayNum - iVar12;
  pFVar14 = (this->Allocated).AllocatorInstance.Data + (longlong)iVar12 * 8;
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = pFVar14 + (longlong)iVar11 * 8;
  for (; pFVar14 != pFVar3; pFVar14 = pFVar14 + 8) {
    lVar4 = *(longlong *)pFVar14;
    iVar11 = (this->Cache).ArrayNum;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    if (iVar11 == (this->Cache).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,&(this->Cache).ArrayMax);
    }
    (this->Cache).ArrayNum = iVar11 + 1;
    lVar9 = (longlong)iVar11;
    pFVar13 = (this->Cache).AllocatorInstance.Data;
    *(longlong *)(pFVar13 + lVar9 * 0x18) = lVar4;
    *(undefined8 *)(pFVar13 + lVar9 * 0x18 + 8) = uVar5;
    *(ulong64 *)(pFVar13 + lVar9 * 0x18 + 0x10) = param_1;
  }
  TArray<FRHITransientBuffer_*,TSizedDefaultAllocator<32>_>::SetNum(&this->Allocated,iVar12,No);
  AlgoImpl::
  IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>_::__l2::<lambda_2>_>
            ((FCacheItem *)(this->Cache).AllocatorInstance.Data,(this->Cache).ArrayNum,local_res8,
             (<lambda_2>)local_res8);
  uVar10 = (this->Cache).ArrayNum;
  if (this->Capacity < uVar10) {
    do {
      uVar8 = 0;
      if ((int)(uVar10 - 1) < (int)uVar10) {
        uVar8 = -uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      pFVar14 = (this->Cache).AllocatorInstance.Data;
      if (param_1 < (ulonglong)this->GarbageCollectLatency +
                    *(longlong *)(pFVar14 + (longlong)iVar11 * 0x18 + -8)) break;
      (**(code **)((param_2.__this)->_padding_ + 0x60))
                (param_2.__this,*(undefined8 *)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18));
      this_00 = *(FRHITransientBuffer **)(pFVar14 + (longlong)iVar11 * 0x18 + -0x18);
      if (this_00 != (FRHITransientBuffer *)0x0) {
        FRHITransientBuffer::~FRHITransientBuffer(this_00);
        ::operator_delete(this_00,0x110);
      }
      if (((this->Cache).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Cache).ArrayNum;
      uVar10 = iVar11 - 1;
      pFVar14 = (this->Cache).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      iVar11 = ~uVar10 + iVar11;
      if (iVar11 != 0) {
        memmove(pFVar14,pFVar14 + 0x18,(longlong)iVar11 * 0x18);
      }
      piVar1 = &(this->Cache).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,(this->Cache).ArrayNum,&(this->Cache).ArrayMax);
      uVar10 = (this->Cache).ArrayNum;
    } while (this->Capacity < uVar10);
  }
  this->HitCount = 0;
  this->MissCount = 0;
  return;
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,`FRHIPoolAllocator::SortPools'::__l2::<lambda_1>_> @ 1446cbc40

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,_FRHIPoolAllocator::SortPools_::__l2::<lambda_1>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FRHIPoolAllocator *local_res20;
  
  local_res20 = param_4.__this;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1446cbd48:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar7 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                                  (&local_res20,param_1[iVar7],param_1[iVar4]);
                if (!bVar3) break;
                uVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_1446cbd48;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,`FRHIPoolAllocator::Defrag'::__l2::<lambda_1>_> @ 1446cbe30

void __cdecl
AlgoImpl::
HeapSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,_FRHIPoolAllocator::Defrag_::__l2::<lambda_1>_>
          (FRHIMemoryPool **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FRHIMemoryPool *pFVar1;
  FRHIMemoryPool *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
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
  iVar9 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_1446cbf39:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar8 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar5 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  if (param_1[(longlong)iVar7 + 2]->PoolSize -
                      param_1[(longlong)iVar7 + 2]->FreeSize <
                      param_1[iVar5]->PoolSize - param_1[iVar5]->FreeSize) {
                    iVar5 = iVar7;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1[iVar5];
                pFVar2 = param_1[iVar9];
                if (pFVar1->PoolSize - pFVar1->FreeSize <= pFVar2->PoolSize - pFVar2->FreeSize)
                break;
                param_1[iVar9] = pFVar1;
                param_1[iVar5] = pFVar2;
                iVar9 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar10 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2]->PoolSize - param_1[(longlong)iVar6 + 2]->FreeSize <
          param_1[iVar10]->PoolSize - param_1[iVar10]->FreeSize) {
        iVar10 = iVar6;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1[iVar10];
    pFVar2 = param_1[iVar5];
    if (pFVar1->PoolSize - pFVar1->FreeSize <= pFVar2->PoolSize - pFVar2->FreeSize)
    goto LAB_1446cbf39;
    param_1[iVar5] = pFVar1;
    iVar6 = iVar10 * 2 + 1;
    param_1[iVar10] = pFVar2;
    iVar5 = iVar10;
  } while( true );
}

// HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 1446cc020

void __cdecl
AlgoImpl::
HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  FRHITransientBuffer *pFVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCacheItem *pFVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1446cc130:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar13 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar12 = param_1 + lVar13;
          do {
            uVar4 = pFVar12->Hash;
            uVar2 = param_1->LastUsedFrame;
            pFVar5 = param_1->Resource;
            uVar6 = param_1->Hash;
            param_1->Resource = pFVar12->Resource;
            param_1->Hash = uVar4;
            param_1->LastUsedFrame = pFVar12->LastUsedFrame;
            pFVar12->Resource = pFVar5;
            pFVar12->Hash = uVar6;
            pFVar12->LastUsedFrame = uVar2;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar14 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (param_1[iVar10].LastUsedFrame < param_1[(longlong)iVar8 + 2].LastUsedFrame) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                if (param_1[iVar14].LastUsedFrame <= pFVar1->LastUsedFrame) break;
                uVar4 = pFVar1->Hash;
                uVar2 = param_1[iVar14].LastUsedFrame;
                pFVar5 = param_1[iVar14].Resource;
                uVar6 = param_1[iVar14].Hash;
                param_1[iVar14].Resource = pFVar1->Resource;
                param_1[iVar14].Hash = uVar4;
                param_1[iVar14].LastUsedFrame = pFVar1->LastUsedFrame;
                pFVar1->Resource = pFVar5;
                pFVar1->Hash = uVar6;
                pFVar1->LastUsedFrame = uVar2;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar13 = lVar13 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (param_1[iVar11].LastUsedFrame < param_1[(longlong)iVar9 + 2].LastUsedFrame) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar12 = param_1 + iVar11;
    if (param_1[iVar8].LastUsedFrame <= pFVar12->LastUsedFrame) goto LAB_1446cc130;
    uVar4 = pFVar12->Hash;
    iVar9 = iVar11 * 2 + 1;
    uVar2 = param_1[iVar8].LastUsedFrame;
    pFVar5 = param_1[iVar8].Resource;
    uVar6 = param_1[iVar8].Hash;
    param_1[iVar8].Resource = pFVar12->Resource;
    param_1[iVar8].Hash = uVar4;
    param_1[iVar8].LastUsedFrame = pFVar12->LastUsedFrame;
    pFVar12->Resource = pFVar5;
    pFVar12->Hash = uVar6;
    pFVar12->LastUsedFrame = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l23::<lambda_5>_>'::__l2::<lambda_2>_> @ 1446cc240

void __cdecl
AlgoImpl::
HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  FRHITransientBuffer *pFVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCacheItem *pFVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1446cc350:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar13 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar12 = param_1 + lVar13;
          do {
            uVar4 = pFVar12->Hash;
            uVar2 = param_1->LastUsedFrame;
            pFVar5 = param_1->Resource;
            uVar6 = param_1->Hash;
            param_1->Resource = pFVar12->Resource;
            param_1->Hash = uVar4;
            param_1->LastUsedFrame = pFVar12->LastUsedFrame;
            pFVar12->Resource = pFVar5;
            pFVar12->Hash = uVar6;
            pFVar12->LastUsedFrame = uVar2;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar14 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (param_1[iVar10].LastUsedFrame < param_1[(longlong)iVar8 + 2].LastUsedFrame) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                if (param_1[iVar14].LastUsedFrame <= pFVar1->LastUsedFrame) break;
                uVar4 = pFVar1->Hash;
                uVar2 = param_1[iVar14].LastUsedFrame;
                pFVar5 = param_1[iVar14].Resource;
                uVar6 = param_1[iVar14].Hash;
                param_1[iVar14].Resource = pFVar1->Resource;
                param_1[iVar14].Hash = uVar4;
                param_1[iVar14].LastUsedFrame = pFVar1->LastUsedFrame;
                pFVar1->Resource = pFVar5;
                pFVar1->Hash = uVar6;
                pFVar1->LastUsedFrame = uVar2;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar13 = lVar13 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (param_1[iVar11].LastUsedFrame < param_1[(longlong)iVar9 + 2].LastUsedFrame) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar12 = param_1 + iVar11;
    if (param_1[iVar8].LastUsedFrame <= pFVar12->LastUsedFrame) goto LAB_1446cc350;
    uVar4 = pFVar12->Hash;
    iVar9 = iVar11 * 2 + 1;
    uVar2 = param_1[iVar8].LastUsedFrame;
    pFVar5 = param_1[iVar8].Resource;
    uVar6 = param_1[iVar8].Hash;
    param_1[iVar8].Resource = pFVar12->Resource;
    param_1[iVar8].Hash = uVar4;
    param_1[iVar8].LastUsedFrame = pFVar12->LastUsedFrame;
    pFVar12->Resource = pFVar5;
    pFVar12->Hash = uVar6;
    pFVar12->LastUsedFrame = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientTexture>::Forfeit<`TRHITransientResourceCache<FRHITransientTexture>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 1446cc460

void __cdecl
AlgoImpl::
HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  FRHITransientTexture *pFVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCacheItem *pFVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1446cc570:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar13 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar12 = param_1 + lVar13;
          do {
            uVar4 = pFVar12->Hash;
            uVar2 = param_1->LastUsedFrame;
            pFVar5 = param_1->Resource;
            uVar6 = param_1->Hash;
            param_1->Resource = pFVar12->Resource;
            param_1->Hash = uVar4;
            param_1->LastUsedFrame = pFVar12->LastUsedFrame;
            pFVar12->Resource = pFVar5;
            pFVar12->Hash = uVar6;
            pFVar12->LastUsedFrame = uVar2;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar14 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (param_1[iVar10].LastUsedFrame < param_1[(longlong)iVar8 + 2].LastUsedFrame) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                if (param_1[iVar14].LastUsedFrame <= pFVar1->LastUsedFrame) break;
                uVar4 = pFVar1->Hash;
                uVar2 = param_1[iVar14].LastUsedFrame;
                pFVar5 = param_1[iVar14].Resource;
                uVar6 = param_1[iVar14].Hash;
                param_1[iVar14].Resource = pFVar1->Resource;
                param_1[iVar14].Hash = uVar4;
                param_1[iVar14].LastUsedFrame = pFVar1->LastUsedFrame;
                pFVar1->Resource = pFVar5;
                pFVar1->Hash = uVar6;
                pFVar1->LastUsedFrame = uVar2;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar13 = lVar13 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (param_1[iVar11].LastUsedFrame < param_1[(longlong)iVar9 + 2].LastUsedFrame) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar12 = param_1 + iVar11;
    if (param_1[iVar8].LastUsedFrame <= pFVar12->LastUsedFrame) goto LAB_1446cc570;
    uVar4 = pFVar12->Hash;
    iVar9 = iVar11 * 2 + 1;
    uVar2 = param_1[iVar8].LastUsedFrame;
    pFVar5 = param_1[iVar8].Resource;
    uVar6 = param_1[iVar8].Hash;
    param_1[iVar8].Resource = pFVar12->Resource;
    param_1[iVar8].Hash = uVar4;
    param_1[iVar8].LastUsedFrame = pFVar12->LastUsedFrame;
    pFVar12->Resource = pFVar5;
    pFVar12->Hash = uVar6;
    pFVar12->LastUsedFrame = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientTexture>::Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l22::<lambda_4>_>'::__l2::<lambda_2>_> @ 1446cc680

void __cdecl
AlgoImpl::
HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  FRHITransientTexture *pFVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FCacheItem *pFVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1446cc790:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar13 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar12 = param_1 + lVar13;
          do {
            uVar4 = pFVar12->Hash;
            uVar2 = param_1->LastUsedFrame;
            pFVar5 = param_1->Resource;
            uVar6 = param_1->Hash;
            param_1->Resource = pFVar12->Resource;
            param_1->Hash = uVar4;
            param_1->LastUsedFrame = pFVar12->LastUsedFrame;
            pFVar12->Resource = pFVar5;
            pFVar12->Hash = uVar6;
            pFVar12->LastUsedFrame = uVar2;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar14 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (param_1[iVar10].LastUsedFrame < param_1[(longlong)iVar8 + 2].LastUsedFrame) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                if (param_1[iVar14].LastUsedFrame <= pFVar1->LastUsedFrame) break;
                uVar4 = pFVar1->Hash;
                uVar2 = param_1[iVar14].LastUsedFrame;
                pFVar5 = param_1[iVar14].Resource;
                uVar6 = param_1[iVar14].Hash;
                param_1[iVar14].Resource = pFVar1->Resource;
                param_1[iVar14].Hash = uVar4;
                param_1[iVar14].LastUsedFrame = pFVar1->LastUsedFrame;
                pFVar1->Resource = pFVar5;
                pFVar1->Hash = uVar6;
                pFVar1->LastUsedFrame = uVar2;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar13 = lVar13 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar11 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (param_1[iVar11].LastUsedFrame < param_1[(longlong)iVar9 + 2].LastUsedFrame) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar12 = param_1 + iVar11;
    if (param_1[iVar8].LastUsedFrame <= pFVar12->LastUsedFrame) goto LAB_1446cc790;
    uVar4 = pFVar12->Hash;
    iVar9 = iVar11 * 2 + 1;
    uVar2 = param_1[iVar8].LastUsedFrame;
    pFVar5 = param_1[iVar8].Resource;
    uVar6 = param_1[iVar8].Hash;
    param_1[iVar8].Resource = pFVar12->Resource;
    param_1[iVar8].Hash = uVar4;
    param_1[iVar8].LastUsedFrame = pFVar12->LastUsedFrame;
    pFVar12->Resource = pFVar5;
    pFVar12->Hash = uVar6;
    pFVar12->LastUsedFrame = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// IID_PPV_ARGS_Helper<IDXGIAdapter3> @ 1446cc8a0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIAdapter3>(IDXGIAdapter3 **param_1)

{
  return param_1;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,`FRHIPoolAllocator::SortPools'::__l2::<lambda_1>_> @ 1446cc8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,_FRHIPoolAllocator::SortPools_::__l2::<lambda_1>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  float fVar11;
  FRHIPoolAllocator *local_res20;
  undefined1 auStack_398 [48];
  uint *local_368;
  uint *local_358;
  uint *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_res20 = param_4.__this;
    local_358 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar11;
    memset(local_340,0,0x2e8);
    ppuVar7 = &local_358;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_368 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_1446cc970:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_1446cc9a0:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x0001446cc9a9;
          goto LAB_1446cc9c0;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                              (&local_res20,*puVar9,*puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_1446cca89;
      }
LAB_1446cca78:
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,_FRHIPoolAllocator::SortPools_::__l2::<lambda_1>_>
                (puVar5,iVar3,param_3,param_4);
LAB_1446cca89:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_358 <= ppuVar7);
  }
  return;
code_r0x0001446cc9a9:
  bVar2 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                    (&local_res20,*puVar10,*puVar5);
  if (!bVar2) goto LAB_1446cc9a0;
LAB_1446cc9c0:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()
                      (&local_res20,*puVar8,*puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1446cc9a0;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffcU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_1446cca89;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_1446cca89;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_1446cca78;
  goto LAB_1446cc970;
}

// IntroSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,`FRHIPoolAllocator::Defrag'::__l2::<lambda_1>_> @ 1446ccb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,_FRHIPoolAllocator::Defrag_::__l2::<lambda_1>_>
          (FRHIMemoryPool **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FRHIMemoryPool **ppFVar1;
  FRHIMemoryPool *pFVar2;
  int iVar3;
  FRHIMemoryPool **ppFVar4;
  FRHIMemoryPool **ppFVar5;
  FRHIMemoryPool **ppFVar6;
  FRHIMemoryPool **ppFVar7;
  FRHIMemoryPool **ppFVar8;
  FRHIMemoryPool ***pppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FRHIMemoryPool **local_338;
  FRHIMemoryPool **local_328;
  FRHIMemoryPool **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar9 = &local_328;
    do {
      ppFVar8 = pppFVar9[1];
      ppFVar4 = *pppFVar9;
      ppFVar1 = pppFVar9[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar7 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_1446ccc00:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar5 = ppFVar8 + 1;
          pFVar2 = ppFVar7[iVar3 >> 1];
          ppFVar7[iVar3 >> 1] = *ppFVar7;
          *ppFVar7 = pFVar2;
          ppFVar4 = ppFVar7;
LAB_1446ccc30:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x0001446ccc39;
          goto LAB_1446ccc54;
        }
        for (; ppFVar4 = ppFVar7, ppFVar1 = ppFVar7, ppFVar7 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar5 = ppFVar4, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            ppFVar4 = ppFVar1;
            if ((*ppFVar1)->PoolSize - (*ppFVar1)->FreeSize <=
                (*ppFVar5)->PoolSize - (*ppFVar5)->FreeSize) {
              ppFVar4 = ppFVar5;
            }
          }
          pFVar2 = *ppFVar5;
          *ppFVar5 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_1446ccd20;
      }
LAB_1446ccd0e:
      local_338 = ppFVar1;
      HeapSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,_FRHIPoolAllocator::Defrag_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_1446ccd20:
      pppFVar9 = pppFVar9 + -3;
    } while (&local_328 <= pppFVar9);
  }
  return;
code_r0x0001446ccc39:
  if ((*ppFVar4)->PoolSize - (*ppFVar4)->FreeSize <= (*ppFVar7)->PoolSize - (*ppFVar7)->FreeSize)
  goto LAB_1446ccc30;
LAB_1446ccc54:
  do {
    ppFVar6 = ppFVar5;
    ppFVar5 = ppFVar6 + -1;
    if (ppFVar5 <= ppFVar7) break;
  } while ((*ppFVar7)->PoolSize - (*ppFVar7)->FreeSize <=
           (*ppFVar5)->PoolSize - (*ppFVar5)->FreeSize);
  if (ppFVar4 <= ppFVar5) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar5;
    *ppFVar5 = pFVar2;
    goto LAB_1446ccc30;
  }
  pFVar2 = *ppFVar7;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar7 = *ppFVar5;
  *ppFVar5 = pFVar2;
  if ((longlong)((longlong)ppFVar5 + (-8 - (longlong)ppFVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar9 = ppFVar4;
      pppFVar9[1] = ppFVar8;
      *(int *)(pppFVar9 + 2) = (int)local_338;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar5 <= ppFVar7 + 1) goto LAB_1446ccd20;
    ppFVar8 = ppFVar6 + -2;
    ppFVar4 = ppFVar7;
  }
  else {
    if (ppFVar7 + 1 < ppFVar5) {
      *pppFVar9 = ppFVar7;
      pppFVar9[1] = ppFVar6 + -2;
      *(int *)(pppFVar9 + 2) = (int)local_338;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_1446ccd20;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar7 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_1446ccd0e;
  goto LAB_1446ccc00;
}

// IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 1446ccdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FRHITransientBuffer *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  int iVar7;
  FCacheItem *pFVar8;
  FCacheItem *pFVar9;
  FCacheItem *pFVar10;
  FCacheItem *pFVar11;
  FCacheItem *pFVar12;
  FCacheItem *pFVar13;
  FCacheItem **ppFVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  FCacheItem *local_348;
  FCacheItem *local_338;
  FCacheItem *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppFVar14 = &local_338;
    do {
      pFVar8 = ppFVar14[1];
      pFVar13 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_348._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
      pFVar12 = pFVar13;
      if ((int)local_348 != 0) {
LAB_1446ccea0:
        if (8 < iVar7) {
          uVar3 = pFVar12->Hash;
          pFVar10 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          pFVar4 = pFVar12[iVar7].Resource;
          uVar5 = pFVar12[iVar7].Hash;
          uVar2 = pFVar12[iVar7].LastUsedFrame;
          pFVar12[iVar7].Resource = pFVar12->Resource;
          pFVar12[iVar7].Hash = uVar3;
          pFVar12[iVar7].LastUsedFrame = pFVar12->LastUsedFrame;
          pFVar12->Resource = pFVar4;
          pFVar12->Hash = uVar5;
          pFVar12->LastUsedFrame = uVar2;
          pFVar13 = pFVar12;
LAB_1446ccef0:
          pFVar9 = pFVar13;
          pFVar13 = pFVar9 + 1;
          if (pFVar13 <= pFVar8) goto code_r0x0001446ccef9;
          goto LAB_1446ccf03;
        }
        for (; pFVar13 = pFVar12, pFVar1 = pFVar12, pFVar12 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar1->LastUsedFrame < pFVar13->LastUsedFrame) {
              pFVar13 = pFVar1;
            }
          }
          pFVar4 = pFVar13->Resource;
          uVar3 = pFVar13->Hash;
          uVar2 = pFVar13->LastUsedFrame;
          uVar5 = pFVar8->Hash;
          pFVar13->Resource = pFVar8->Resource;
          pFVar13->Hash = uVar5;
          pFVar13->LastUsedFrame = pFVar8->LastUsedFrame;
          pFVar8->Resource = pFVar4;
          pFVar8->Hash = uVar3;
          pFVar8->LastUsedFrame = uVar2;
        }
        goto LAB_1446cd026;
      }
LAB_1446cd016:
      local_348 = pFVar1;
      HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                (pFVar13,iVar7,param_3,param_4);
LAB_1446cd026:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_338 <= ppFVar14);
  }
  return;
code_r0x0001446ccef9:
  if (pFVar12->LastUsedFrame <= pFVar9[1].LastUsedFrame) goto LAB_1446ccef0;
LAB_1446ccf03:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar12) break;
  } while (pFVar11[-1].LastUsedFrame <= pFVar12->LastUsedFrame);
  uVar2 = pFVar11[-1].Hash;
  if (pFVar13 <= pFVar10) {
    pFVar4 = pFVar13->Resource;
    uVar5 = pFVar9[1].Hash;
    uVar3 = pFVar9[1].LastUsedFrame;
    pFVar13->Resource = pFVar10->Resource;
    pFVar9[1].Hash = uVar2;
    pFVar9[1].LastUsedFrame = pFVar11[-1].LastUsedFrame;
    pFVar10->Resource = pFVar4;
    pFVar11[-1].Hash = uVar5;
    pFVar11[-1].LastUsedFrame = uVar3;
    goto LAB_1446ccef0;
  }
  pFVar4 = pFVar12->Resource;
  uVar5 = pFVar12->Hash;
  uVar3 = pFVar12->LastUsedFrame;
  lVar6 = (longlong)pFVar10 + (-0x18 - (longlong)pFVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pFVar12->Resource = pFVar10->Resource;
  pFVar12->Hash = uVar2;
  pFVar12->LastUsedFrame = pFVar11[-1].LastUsedFrame;
  pFVar10->Resource = pFVar4;
  pFVar11[-1].Hash = uVar5;
  pFVar11[-1].LastUsedFrame = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar13) / 0x18) {
    if (pFVar13 < pFVar8) {
      *ppFVar14 = pFVar13;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= pFVar12 + 1) goto LAB_1446cd026;
    pFVar8 = pFVar11 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar10) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar13) goto LAB_1446cd026;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
  pFVar12 = pFVar13;
  if ((int)local_348 == 0) goto LAB_1446cd016;
  goto LAB_1446ccea0;
}

// IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l23::<lambda_5>_>'::__l2::<lambda_2>_> @ 1446cd0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FRHITransientBuffer *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  int iVar7;
  FCacheItem *pFVar8;
  FCacheItem *pFVar9;
  FCacheItem *pFVar10;
  FCacheItem *pFVar11;
  FCacheItem *pFVar12;
  FCacheItem *pFVar13;
  FCacheItem **ppFVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  FCacheItem *local_348;
  FCacheItem *local_338;
  FCacheItem *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppFVar14 = &local_338;
    do {
      pFVar8 = ppFVar14[1];
      pFVar13 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_348._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
      pFVar12 = pFVar13;
      if ((int)local_348 != 0) {
LAB_1446cd1c0:
        if (8 < iVar7) {
          uVar3 = pFVar12->Hash;
          pFVar10 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          pFVar4 = pFVar12[iVar7].Resource;
          uVar5 = pFVar12[iVar7].Hash;
          uVar2 = pFVar12[iVar7].LastUsedFrame;
          pFVar12[iVar7].Resource = pFVar12->Resource;
          pFVar12[iVar7].Hash = uVar3;
          pFVar12[iVar7].LastUsedFrame = pFVar12->LastUsedFrame;
          pFVar12->Resource = pFVar4;
          pFVar12->Hash = uVar5;
          pFVar12->LastUsedFrame = uVar2;
          pFVar13 = pFVar12;
LAB_1446cd210:
          pFVar9 = pFVar13;
          pFVar13 = pFVar9 + 1;
          if (pFVar13 <= pFVar8) goto code_r0x0001446cd219;
          goto LAB_1446cd223;
        }
        for (; pFVar13 = pFVar12, pFVar1 = pFVar12, pFVar12 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar1->LastUsedFrame < pFVar13->LastUsedFrame) {
              pFVar13 = pFVar1;
            }
          }
          pFVar4 = pFVar13->Resource;
          uVar3 = pFVar13->Hash;
          uVar2 = pFVar13->LastUsedFrame;
          uVar5 = pFVar8->Hash;
          pFVar13->Resource = pFVar8->Resource;
          pFVar13->Hash = uVar5;
          pFVar13->LastUsedFrame = pFVar8->LastUsedFrame;
          pFVar8->Resource = pFVar4;
          pFVar8->Hash = uVar3;
          pFVar8->LastUsedFrame = uVar2;
        }
        goto LAB_1446cd346;
      }
LAB_1446cd336:
      local_348 = pFVar1;
      HeapSortInternal<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>_::__l2::<lambda_2>_>
                (pFVar13,iVar7,param_3,param_4);
LAB_1446cd346:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_338 <= ppFVar14);
  }
  return;
code_r0x0001446cd219:
  if (pFVar12->LastUsedFrame <= pFVar9[1].LastUsedFrame) goto LAB_1446cd210;
LAB_1446cd223:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar12) break;
  } while (pFVar11[-1].LastUsedFrame <= pFVar12->LastUsedFrame);
  uVar2 = pFVar11[-1].Hash;
  if (pFVar13 <= pFVar10) {
    pFVar4 = pFVar13->Resource;
    uVar5 = pFVar9[1].Hash;
    uVar3 = pFVar9[1].LastUsedFrame;
    pFVar13->Resource = pFVar10->Resource;
    pFVar9[1].Hash = uVar2;
    pFVar9[1].LastUsedFrame = pFVar11[-1].LastUsedFrame;
    pFVar10->Resource = pFVar4;
    pFVar11[-1].Hash = uVar5;
    pFVar11[-1].LastUsedFrame = uVar3;
    goto LAB_1446cd210;
  }
  pFVar4 = pFVar12->Resource;
  uVar5 = pFVar12->Hash;
  uVar3 = pFVar12->LastUsedFrame;
  lVar6 = (longlong)pFVar10 + (-0x18 - (longlong)pFVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pFVar12->Resource = pFVar10->Resource;
  pFVar12->Hash = uVar2;
  pFVar12->LastUsedFrame = pFVar11[-1].LastUsedFrame;
  pFVar10->Resource = pFVar4;
  pFVar11[-1].Hash = uVar5;
  pFVar11[-1].LastUsedFrame = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar13) / 0x18) {
    if (pFVar13 < pFVar8) {
      *ppFVar14 = pFVar13;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= pFVar12 + 1) goto LAB_1446cd346;
    pFVar8 = pFVar11 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar10) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar13) goto LAB_1446cd346;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
  pFVar12 = pFVar13;
  if ((int)local_348 == 0) goto LAB_1446cd336;
  goto LAB_1446cd1c0;
}

// IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientTexture>::Forfeit<`TRHITransientResourceCache<FRHITransientTexture>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 1446cd400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FRHITransientTexture *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  int iVar7;
  FCacheItem *pFVar8;
  FCacheItem *pFVar9;
  FCacheItem *pFVar10;
  FCacheItem *pFVar11;
  FCacheItem *pFVar12;
  FCacheItem *pFVar13;
  FCacheItem **ppFVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  FCacheItem *local_348;
  FCacheItem *local_338;
  FCacheItem *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppFVar14 = &local_338;
    do {
      pFVar8 = ppFVar14[1];
      pFVar13 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_348._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
      pFVar12 = pFVar13;
      if ((int)local_348 != 0) {
LAB_1446cd4e0:
        if (8 < iVar7) {
          uVar3 = pFVar12->Hash;
          pFVar10 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          pFVar4 = pFVar12[iVar7].Resource;
          uVar5 = pFVar12[iVar7].Hash;
          uVar2 = pFVar12[iVar7].LastUsedFrame;
          pFVar12[iVar7].Resource = pFVar12->Resource;
          pFVar12[iVar7].Hash = uVar3;
          pFVar12[iVar7].LastUsedFrame = pFVar12->LastUsedFrame;
          pFVar12->Resource = pFVar4;
          pFVar12->Hash = uVar5;
          pFVar12->LastUsedFrame = uVar2;
          pFVar13 = pFVar12;
LAB_1446cd530:
          pFVar9 = pFVar13;
          pFVar13 = pFVar9 + 1;
          if (pFVar13 <= pFVar8) goto code_r0x0001446cd539;
          goto LAB_1446cd543;
        }
        for (; pFVar13 = pFVar12, pFVar1 = pFVar12, pFVar12 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar1->LastUsedFrame < pFVar13->LastUsedFrame) {
              pFVar13 = pFVar1;
            }
          }
          pFVar4 = pFVar13->Resource;
          uVar3 = pFVar13->Hash;
          uVar2 = pFVar13->LastUsedFrame;
          uVar5 = pFVar8->Hash;
          pFVar13->Resource = pFVar8->Resource;
          pFVar13->Hash = uVar5;
          pFVar13->LastUsedFrame = pFVar8->LastUsedFrame;
          pFVar8->Resource = pFVar4;
          pFVar8->Hash = uVar3;
          pFVar8->LastUsedFrame = uVar2;
        }
        goto LAB_1446cd666;
      }
LAB_1446cd656:
      local_348 = pFVar1;
      HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                (pFVar13,iVar7,param_3,param_4);
LAB_1446cd666:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_338 <= ppFVar14);
  }
  return;
code_r0x0001446cd539:
  if (pFVar12->LastUsedFrame <= pFVar9[1].LastUsedFrame) goto LAB_1446cd530;
LAB_1446cd543:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar12) break;
  } while (pFVar11[-1].LastUsedFrame <= pFVar12->LastUsedFrame);
  uVar2 = pFVar11[-1].Hash;
  if (pFVar13 <= pFVar10) {
    pFVar4 = pFVar13->Resource;
    uVar5 = pFVar9[1].Hash;
    uVar3 = pFVar9[1].LastUsedFrame;
    pFVar13->Resource = pFVar10->Resource;
    pFVar9[1].Hash = uVar2;
    pFVar9[1].LastUsedFrame = pFVar11[-1].LastUsedFrame;
    pFVar10->Resource = pFVar4;
    pFVar11[-1].Hash = uVar5;
    pFVar11[-1].LastUsedFrame = uVar3;
    goto LAB_1446cd530;
  }
  pFVar4 = pFVar12->Resource;
  uVar5 = pFVar12->Hash;
  uVar3 = pFVar12->LastUsedFrame;
  lVar6 = (longlong)pFVar10 + (-0x18 - (longlong)pFVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pFVar12->Resource = pFVar10->Resource;
  pFVar12->Hash = uVar2;
  pFVar12->LastUsedFrame = pFVar11[-1].LastUsedFrame;
  pFVar10->Resource = pFVar4;
  pFVar11[-1].Hash = uVar5;
  pFVar11[-1].LastUsedFrame = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar13) / 0x18) {
    if (pFVar13 < pFVar8) {
      *ppFVar14 = pFVar13;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= pFVar12 + 1) goto LAB_1446cd666;
    pFVar8 = pFVar11 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar10) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar13) goto LAB_1446cd666;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
  pFVar12 = pFVar13;
  if ((int)local_348 == 0) goto LAB_1446cd656;
  goto LAB_1446cd4e0;
}

// IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,`TRHITransientResourceCache<FRHITransientTexture>::Forfeit<`FRHITransientResourcePageAllocator::Flush'::__l22::<lambda_4>_>'::__l2::<lambda_2>_> @ 1446cd720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>_::__l2::<lambda_2>_>
          (FCacheItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FCacheItem *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FRHITransientTexture *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  int iVar7;
  FCacheItem *pFVar8;
  FCacheItem *pFVar9;
  FCacheItem *pFVar10;
  FCacheItem *pFVar11;
  FCacheItem *pFVar12;
  FCacheItem *pFVar13;
  FCacheItem **ppFVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  FCacheItem *local_348;
  FCacheItem *local_338;
  FCacheItem *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppFVar14 = &local_338;
    do {
      pFVar8 = ppFVar14[1];
      pFVar13 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_348._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
      pFVar12 = pFVar13;
      if ((int)local_348 != 0) {
LAB_1446cd800:
        if (8 < iVar7) {
          uVar3 = pFVar12->Hash;
          pFVar10 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          pFVar4 = pFVar12[iVar7].Resource;
          uVar5 = pFVar12[iVar7].Hash;
          uVar2 = pFVar12[iVar7].LastUsedFrame;
          pFVar12[iVar7].Resource = pFVar12->Resource;
          pFVar12[iVar7].Hash = uVar3;
          pFVar12[iVar7].LastUsedFrame = pFVar12->LastUsedFrame;
          pFVar12->Resource = pFVar4;
          pFVar12->Hash = uVar5;
          pFVar12->LastUsedFrame = uVar2;
          pFVar13 = pFVar12;
LAB_1446cd850:
          pFVar9 = pFVar13;
          pFVar13 = pFVar9 + 1;
          if (pFVar13 <= pFVar8) goto code_r0x0001446cd859;
          goto LAB_1446cd863;
        }
        for (; pFVar13 = pFVar12, pFVar1 = pFVar12, pFVar12 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar1->LastUsedFrame < pFVar13->LastUsedFrame) {
              pFVar13 = pFVar1;
            }
          }
          pFVar4 = pFVar13->Resource;
          uVar3 = pFVar13->Hash;
          uVar2 = pFVar13->LastUsedFrame;
          uVar5 = pFVar8->Hash;
          pFVar13->Resource = pFVar8->Resource;
          pFVar13->Hash = uVar5;
          pFVar13->LastUsedFrame = pFVar8->LastUsedFrame;
          pFVar8->Resource = pFVar4;
          pFVar8->Hash = uVar3;
          pFVar8->LastUsedFrame = uVar2;
        }
        goto LAB_1446cd986;
      }
LAB_1446cd976:
      local_348 = pFVar1;
      HeapSortInternal<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,FIdentityFunctor,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>_::__l2::<lambda_2>_>
                (pFVar13,iVar7,param_3,param_4);
LAB_1446cd986:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_338 <= ppFVar14);
  }
  return;
code_r0x0001446cd859:
  if (pFVar12->LastUsedFrame <= pFVar9[1].LastUsedFrame) goto LAB_1446cd850;
LAB_1446cd863:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar12) break;
  } while (pFVar11[-1].LastUsedFrame <= pFVar12->LastUsedFrame);
  uVar2 = pFVar11[-1].Hash;
  if (pFVar13 <= pFVar10) {
    pFVar4 = pFVar13->Resource;
    uVar5 = pFVar9[1].Hash;
    uVar3 = pFVar9[1].LastUsedFrame;
    pFVar13->Resource = pFVar10->Resource;
    pFVar9[1].Hash = uVar2;
    pFVar9[1].LastUsedFrame = pFVar11[-1].LastUsedFrame;
    pFVar10->Resource = pFVar4;
    pFVar11[-1].Hash = uVar5;
    pFVar11[-1].LastUsedFrame = uVar3;
    goto LAB_1446cd850;
  }
  pFVar4 = pFVar12->Resource;
  uVar5 = pFVar12->Hash;
  uVar3 = pFVar12->LastUsedFrame;
  lVar6 = (longlong)pFVar10 + (-0x18 - (longlong)pFVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pFVar12->Resource = pFVar10->Resource;
  pFVar12->Hash = uVar2;
  pFVar12->LastUsedFrame = pFVar11[-1].LastUsedFrame;
  pFVar10->Resource = pFVar4;
  pFVar11[-1].Hash = uVar5;
  pFVar11[-1].LastUsedFrame = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar13) / 0x18) {
    if (pFVar13 < pFVar8) {
      *ppFVar14 = pFVar13;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= pFVar12 + 1) goto LAB_1446cd986;
    pFVar8 = pFVar11 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar10) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar13) goto LAB_1446cd986;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar13) / 0x18) + 1;
  pFVar12 = pFVar13;
  if ((int)local_348 == 0) goto LAB_1446cd976;
  goto LAB_1446cd800;
}

// LowerBoundInternal<FRHIPoolAllocationData_*_const,int,FRHIPoolAllocationData_*,FIdentityFunctor,bool_(__cdecl*)(FRHIPoolAllocationData_const_*,FRHIPoolAllocationData_const_*)> @ 1446cda40

int __cdecl
AlgoImpl::
LowerBoundInternal<FRHIPoolAllocationData_*_const,int,FRHIPoolAllocationData_*,FIdentityFunctor,bool_(__cdecl*)(FRHIPoolAllocationData_const_*,FRHIPoolAllocationData_const_*)>
          (FRHIPoolAllocationData **param_1,int param_2,FRHIPoolAllocationData **param_3,
          FIdentityFunctor param_4,
          _func___cdecl_bool_FRHIPoolAllocationData_ptr_FRHIPoolAllocationData_ptr *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (*param_5)(param_1[iVar1],*param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Partition<FRHITransientBuffer_*,int,`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<`TRHITransientResourceCache<FRHITransientBuffer>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1446cdac0

int __cdecl
Algo::
Partition<FRHITransientBuffer_*,int,_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit<_TRHITransientResourceCache<FRHITransientBuffer>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHITransientBuffer **param_1,int param_2,<lambda_1> param_3)

{
  char cVar1;
  FRHITransientBuffer *pFVar2;
  FRHITransientBuffer **ppFVar3;
  FRHITransientBuffer **ppFVar4;
  
  ppFVar4 = param_1 + param_2;
  ppFVar3 = param_1;
  if (param_1 != ppFVar4) {
    do {
      cVar1 = *(char *)((longlong)&(*ppFVar3)->_padding_ + 5);
      while (cVar1 != '\0') {
        ppFVar3 = ppFVar3 + 1;
        if (ppFVar3 == ppFVar4) goto LAB_1446cdb1c;
        cVar1 = *(char *)((longlong)&(*ppFVar3)->_padding_ + 5);
      }
      do {
        ppFVar4 = ppFVar4 + -1;
        if (ppFVar3 == ppFVar4) goto LAB_1446cdb1c;
      } while (*(char *)((longlong)&(*ppFVar4)->_padding_ + 5) == '\0');
      pFVar2 = *ppFVar3;
      *ppFVar3 = *ppFVar4;
      ppFVar3 = ppFVar3 + 1;
      *ppFVar4 = pFVar2;
    } while (ppFVar3 != ppFVar4);
  }
LAB_1446cdb1c:
  return (int)((longlong)ppFVar3 - (longlong)param_1 >> 3);
}

// Partition<FRHITransientTexture_*,int,`TRHITransientResourceCache<FRHITransientTexture>::Forfeit<`TRHITransientResourceCache<FRHITransientTexture>::Forfeit'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1446cdb30

int __cdecl
Algo::
Partition<FRHITransientTexture_*,int,_TRHITransientResourceCache<FRHITransientTexture>::Forfeit<_TRHITransientResourceCache<FRHITransientTexture>::Forfeit_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHITransientTexture **param_1,int param_2,<lambda_1> param_3)

{
  char cVar1;
  FRHITransientTexture *pFVar2;
  FRHITransientTexture **ppFVar3;
  FRHITransientTexture **ppFVar4;
  
  ppFVar4 = param_1 + param_2;
  ppFVar3 = param_1;
  if (param_1 != ppFVar4) {
    do {
      cVar1 = *(char *)((longlong)&(*ppFVar3)->_padding_ + 5);
      while (cVar1 != '\0') {
        ppFVar3 = ppFVar3 + 1;
        if (ppFVar3 == ppFVar4) goto LAB_1446cdb8c;
        cVar1 = *(char *)((longlong)&(*ppFVar3)->_padding_ + 5);
      }
      do {
        ppFVar4 = ppFVar4 + -1;
        if (ppFVar3 == ppFVar4) goto LAB_1446cdb8c;
      } while (*(char *)((longlong)&(*ppFVar4)->_padding_ + 5) == '\0');
      pFVar2 = *ppFVar3;
      *ppFVar3 = *ppFVar4;
      ppFVar3 = ppFVar3 + 1;
      *ppFVar4 = pFVar2;
    } while (ppFVar3 != ppFVar4);
  }
LAB_1446cdb8c:
  return (int)((longlong)ppFVar3 - (longlong)param_1 >> 3);
}

// ~TArray<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_> @ 1446cf400

void __thiscall
TArray<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
::
~TArray<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l2::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
          (void *this)

{
  DestructItems<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l2::FBreadcrumbNode,int>
            (*(FBreadcrumbNode **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// operator<< @ 1446cfc40

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCodeValidationStride *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BindPoint);
    }
  }
  else {
    param_2->BindPoint = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->Stride;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 1446cfd10

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCodeValidationType *param_2)

{
  ushort *puVar1;
  EShaderCodeResourceBindingType *pEVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BindPoint);
    }
  }
  else {
    param_2->BindPoint = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  pEVar2 = (EShaderCodeResourceBindingType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (EShaderCodeResourceBindingType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Type = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  return param_1;
}

// operator<< @ 1446cfdc0

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCodeValidationUBSize *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BindPoint);
    }
  }
  else {
    param_2->BindPoint = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->Size;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// `scalar_deleting_destructor' @ 1446d07b0

void * __thiscall FRHIMemoryPool::_scalar_deleting_destructor_(FRHIMemoryPool *this,uint param_1)

{
  int *piVar1;
  TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FRHIMemoryPool__6B_;
  Validate(this);
  pFVar5 = (this->FreeBlocks).AllocatorInstance.Data;
  iVar4 = (this->FreeBlocks).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->FreeBlocks).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar3) break;
    ReleaseAllocationData(this,*(FRHIPoolAllocationData **)pFVar5);
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->FreeBlocks).ArrayMax;
  (this->FreeBlocks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeBlocks).AllocatorInstance,0,piVar1);
  }
  pTVar2 = &this->AllocationDataPool;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->AllocationDataPool).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->AllocationDataPool).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar3) break;
    ::operator_delete(*(void **)pFVar5,0x30);
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->AllocationDataPool).ArrayMax;
  (this->AllocationDataPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FreeBlocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0900

void * __thiscall
FRHIPoolAllocator::_scalar_deleting_destructor_(FRHIPoolAllocator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRHIPoolAllocator__6B_;
  Destroy(this);
  pFVar1 = (this->PoolAllocationOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0970

void * __thiscall
FRHITransientBuffer::_scalar_deleting_destructor_(FRHITransientBuffer *this,uint param_1)

{
  ~FRHITransientBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d09b0

void * __thiscall
FRHITransientHeapCache::_scalar_deleting_destructor_(FRHITransientHeapCache *this,uint param_1)

{
  int *piVar1;
  TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  pTVar2 = &this->LiveList;
  this->_padding_ = (longlong)&___7FRHITransientHeapCache__6B_;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->LiveList).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar3) break;
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->LiveList).ArrayMax;
  (this->LiveList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0ae0

void * __thiscall
FRHITransientPagePoolCache::_scalar_deleting_destructor_
          (FRHITransientPagePoolCache *this,uint param_1)

{
  int *piVar1;
  TArray<FRHITransientPagePool_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FRHITransientPagePool *pFVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FRHITransientPagePoolCache__6B_;
  pFVar5 = this->FastPagePool;
  if (pFVar5 != (FRHITransientPagePool *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pTVar2 = &this->LiveList;
  this->FastPagePool = (FRHITransientPagePool *)0x0;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->LiveList).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar3) break;
    puVar6 = *(undefined8 **)pFVar7;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->LiveList).ArrayMax;
  (this->LiveList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0c20

void * __thiscall
FRHITransientResourceHeapAllocator::_scalar_deleting_destructor_
          (FRHITransientResourceHeapAllocator *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FRHITransientResourceHeapAllocator__6B_;
  (this->ActiveResources).HashSize = 0;
  FVar1 = (this->ActiveResources).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FRHITransientResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRHITransientResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveResources).Elements);
  pFVar2 = (this->Heaps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0ca0

void * __thiscall
FRHITransientTexture::_scalar_deleting_destructor_(FRHITransientTexture *this,uint param_1)

{
  ~FRHITransientTexture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446d0ce0

void * __thiscall
IRHITransientResourceAllocator::_scalar_deleting_destructor_
          (IRHITransientResourceAllocator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// LinkedListSortByOffsetPredicate @ 1446e03a0

bool __cdecl
LinkedListSortByOffsetPredicate(FRHIPoolAllocationData *param_1,FRHIPoolAllocationData *param_2)

{
  return param_1->Offset < param_2->Offset;
}

// LinkedListSortBySizePredicate @ 1446e03b0

bool __cdecl
LinkedListSortBySizePredicate(FRHIPoolAllocationData *param_1,FRHIPoolAllocationData *param_2)

{
  return param_1->Size < param_2->Size;
}

// `dynamic_atexit_destructor_for_'CVarAftermath'' @ 15036ea70

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_Callstack'' @ 15036ea90

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_Callstack__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_Callstack);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_DumpProcessWaitTime'' @ 15036eab0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_DumpProcessWaitTime__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_DumpProcessWaitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_DumpShaderDebugInfo'' @ 15036ead0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_DumpShaderDebugInfo__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_DumpShaderDebugInfo);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_DumpStartWaitTime'' @ 15036eaf0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_DumpStartWaitTime__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_DumpStartWaitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_LateShaderAssociationsFrameLimit'' @ 15036eb10

void __cdecl
UE::RHICore::Nvidia::Aftermath::
_dynamic_atexit_destructor_for__CVarAftermath_LateShaderAssociationsFrameLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAftermath_LateShaderAssociationsFrameLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_LateShaderAssociationsTimeLimit'' @ 15036eb30

void __cdecl
UE::RHICore::Nvidia::Aftermath::
_dynamic_atexit_destructor_for__CVarAftermath_LateShaderAssociationsTimeLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAftermath_LateShaderAssociationsTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_Markers'' @ 15036eb50

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_Markers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_Markers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_Resources'' @ 15036eb70

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_Resources__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_Resources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_ShaderErrorReporting'' @ 15036eb90

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_ShaderErrorReporting__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_ShaderErrorReporting)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_ShaderRegistration'' @ 15036ebb0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_ShaderRegistration__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_ShaderRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAftermath_TrackAll'' @ 15036ebd0

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CVarAftermath_TrackAll__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAftermath_TrackAll);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIntelCrashDumps'' @ 15036ebf0

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_atexit_destructor_for__CVarIntelCrashDumps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIntelCrashDumps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIntelCrashDumps_Callstack'' @ 15036ec10

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Callstack__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIntelCrashDumps_Callstack);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIntelCrashDumps_DumpWaitTime'' @ 15036ec30

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::
_dynamic_atexit_destructor_for__CVarIntelCrashDumps_DumpWaitTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIntelCrashDumps_DumpWaitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIntelCrashDumps_Markers'' @ 15036ec50

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Markers__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIntelCrashDumps_Markers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIntelCrashDumps_Resources'' @ 15036ec70

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::_dynamic_atexit_destructor_for__CVarIntelCrashDumps_Resources__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIntelCrashDumps_Resources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIPoolAllocatorDefragMaxPoolsToClear'' @ 15036ec90

void __cdecl _dynamic_atexit_destructor_for__CVarRHIPoolAllocatorDefragMaxPoolsToClear__(void)

{
  CVarRHIPoolAllocatorDefragMaxPoolsToClear._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHIPoolAllocatorDefragMaxPoolsToClear);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIPoolAllocatorDefragSizeFraction'' @ 15036ecb0

void __cdecl _dynamic_atexit_destructor_for__CVarRHIPoolAllocatorDefragSizeFraction__(void)

{
  CVarRHIPoolAllocatorDefragSizeFraction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHIPoolAllocatorDefragSizeFraction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIPoolAllocatorValidateLinkList'' @ 15036ecd0

void __cdecl _dynamic_atexit_destructor_for__CVarRHIPoolAllocatorValidateLinkList__(void)

{
  CVarRHIPoolAllocatorValidateLinkList._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHIPoolAllocatorValidateLinkList);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHITransientAllocatorBufferCacheSize'' @ 15036ecf0

void __cdecl _dynamic_atexit_destructor_for__CVarRHITransientAllocatorBufferCacheSize__(void)

{
  CVarRHITransientAllocatorBufferCacheSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHITransientAllocatorBufferCacheSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHITransientAllocatorGarbageCollectLatency'' @ 15036ed10

void __cdecl _dynamic_atexit_destructor_for__CVarRHITransientAllocatorGarbageCollectLatency__(void)

{
  CVarRHITransientAllocatorGarbageCollectLatency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHITransientAllocatorGarbageCollectLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHITransientAllocatorMinimumHeapSize'' @ 15036ed30

void __cdecl _dynamic_atexit_destructor_for__CVarRHITransientAllocatorMinimumHeapSize__(void)

{
  CVarRHITransientAllocatorMinimumHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHITransientAllocatorMinimumHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHITransientAllocatorParallelResourceCreation'' @ 15036ed50

void __cdecl
_dynamic_atexit_destructor_for__CVarRHITransientAllocatorParallelResourceCreation__(void)

{
  CVarRHITransientAllocatorParallelResourceCreation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHITransientAllocatorParallelResourceCreation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHITransientAllocatorTextureCacheSize'' @ 15036ed70

void __cdecl _dynamic_atexit_destructor_for__CVarRHITransientAllocatorTextureCacheSize__(void)

{
  CVarRHITransientAllocatorTextureCacheSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHITransientAllocatorTextureCacheSize);
  return;
}

// `dynamic_atexit_destructor_for_'CrashIntermediates'' @ 15036ed90

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__CrashIntermediates__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  CrashIntermediates.ShaderDebugLookup._72_4_ = 0;
  if (CrashIntermediates.ShaderDebugLookup._64_8_ != 0) {
    FMemory::Free((void *)CrashIntermediates.ShaderDebugLookup._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CrashIntermediates.ShaderDebugLookup);
  DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>
            ((FCrashResult *)CrashIntermediates.Results.AllocatorInstance.Data,
             CrashIntermediates.Results.ArrayNum);
  if (CrashIntermediates.Results.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(CrashIntermediates.Results.AllocatorInstance.Data);
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00015036edfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
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

// `dynamic_atexit_destructor_for_'GLateShaderAssociateFunc'' @ 15036ee40

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__GLateShaderAssociateFunc__(void)

{
  longlong *plVar1;
  
  if (GLateShaderAssociateFunc._0_8_ != 0) {
    plVar1 = (longlong *)&GLateShaderAssociateFunc.field_0x10;
    if (GLateShaderAssociateFunc._40_8_ != 0) {
      plVar1 = (longlong *)GLateShaderAssociateFunc._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036ee62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GShaderDiagnosticDatas'' @ 15036ee70

void __cdecl _dynamic_atexit_destructor_for__GShaderDiagnosticDatas__(void)

{
  DestructItems<FShaderDiagnosticData,int>
            ((FShaderDiagnosticData *)GShaderDiagnosticDatas.AllocatorInstance.Data,
             GShaderDiagnosticDatas.ArrayNum);
  if (GShaderDiagnosticDatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GShaderDiagnosticDatas.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GShaderDiagnosticDatasCS'' @ 15036eeb0

void __cdecl _dynamic_atexit_destructor_for__GShaderDiagnosticDatasCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015036eeb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
  return;
}

// `dynamic_atexit_destructor_for_'LogIntelBreadcrumbs'' @ 15036eed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIntelBreadcrumbs__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIntelBreadcrumbs);
  return;
}

// `dynamic_atexit_destructor_for_'LogNvidiaAftermath'' @ 15036eef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNvidiaAftermath__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNvidiaAftermath);
  return;
}

// `dynamic_atexit_destructor_for_'LogRHICore'' @ 15036ef10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRHICore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRHICore);
  return;
}

// `dynamic_atexit_destructor_for_'NameStorage'' @ 15036ef30

void __cdecl UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__NameStorage__(void)

{
  ForAnyElementType FVar1;
  int iVar2;
  
  FVar1.Data = NameStorage.Array.AllocatorInstance.Data;
  for (iVar2 = NameStorage.Array.ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    ::operator_delete(*(void **)FVar1.Data,0x100);
    FVar1.Data = FVar1.Data + 8;
  }
  NameStorage.Array.ArrayNum = 0;
  if (NameStorage.Array.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&NameStorage,0,&NameStorage.Array.ArrayMax);
  }
  if (NameStorage.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(NameStorage.Array.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NameStorage'' @ 15036efd0

void __cdecl UE::RHICore::Intel::GPUCrashDumps::_dynamic_atexit_destructor_for__NameStorage__(void)

{
  ForAnyElementType FVar1;
  int iVar2;
  
  FVar1.Data = NameStorage.Array.AllocatorInstance.Data;
  for (iVar2 = NameStorage.Array.ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    ::operator_delete(*(void **)FVar1.Data,0x100);
    FVar1.Data = FVar1.Data + 8;
  }
  NameStorage.Array.ArrayNum = 0;
  if (NameStorage.Array.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&NameStorage,0,&NameStorage.Array.ArrayMax);
  }
  if (NameStorage.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(NameStorage.Array.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ShaderRegistration'' @ 15036f070

void __cdecl
UE::RHICore::Nvidia::Aftermath::_dynamic_atexit_destructor_for__ShaderRegistration__(void)

{
  ShaderRegistration.ShaderBinaryToDebugHash._72_4_ = 0;
  if (ShaderRegistration.ShaderBinaryToDebugHash._64_8_ != 0) {
    FMemory::Free((void *)ShaderRegistration.ShaderBinaryToDebugHash._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ShaderRegistration.ShaderBinaryToDebugHash);
                    /* WARNING: Could not recover jumptable at 0x00015036f0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientBufferCacheHitPercentage'' @ 15036f0c0

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterTransientBufferCacheHitPercentage__(void)

{
  if ((__GTraceCounterTransientBufferCacheHitPercentage.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientBufferCacheHitPercentage.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientBufferCacheSize'' @ 15036f0e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientBufferCacheSize__(void)

{
  if ((__GTraceCounterTransientBufferCacheSize.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientBufferCacheSize.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientBufferCount'' @ 15036f100

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientBufferCount__(void)

{
  if ((__GTraceCounterTransientBufferCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientBufferCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientBufferCreateCount'' @ 15036f120

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientBufferCreateCount__(void)

{
  if ((__GTraceCounterTransientBufferCreateCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientBufferCreateCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientMemoryRangeCount'' @ 15036f140

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientMemoryRangeCount__(void)

{
  if ((__GTraceCounterTransientMemoryRangeCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientMemoryRangeCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientMemoryRequested'' @ 15036f160

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientMemoryRequested__(void)

{
  if ((__GTraceCounterTransientMemoryRequested.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientMemoryRequested.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientMemoryUsed'' @ 15036f180

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientMemoryUsed__(void)

{
  if ((__GTraceCounterTransientMemoryUsed.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientMemoryUsed.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientPageAllocateCount'' @ 15036f1a0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientPageAllocateCount__(void)

{
  if ((__GTraceCounterTransientPageAllocateCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientPageAllocateCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientPageMapCount'' @ 15036f1c0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientPageMapCount__(void)

{
  if ((__GTraceCounterTransientPageMapCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientPageMapCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientPageSpanCount'' @ 15036f1e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientPageSpanCount__(void)

{
  if ((__GTraceCounterTransientPageSpanCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientPageSpanCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientResourceCreateCount'' @ 15036f200

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientResourceCreateCount__(void)

{
  if ((__GTraceCounterTransientResourceCreateCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientResourceCreateCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientTextureCacheHitPercentage'' @ 15036f220

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterTransientTextureCacheHitPercentage__(void)

{
  if ((__GTraceCounterTransientTextureCacheHitPercentage.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientTextureCacheHitPercentage.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientTextureCacheSize'' @ 15036f240

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientTextureCacheSize__(void)

{
  if ((__GTraceCounterTransientTextureCacheSize.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientTextureCacheSize.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientTextureCount'' @ 15036f260

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientTextureCount__(void)

{
  if ((__GTraceCounterTransientTextureCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientTextureCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterTransientTextureCreateCount'' @ 15036f280

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterTransientTextureCreateCount__(void)

{
  if ((__GTraceCounterTransientTextureCreateCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterTransientTextureCreateCount.CounterName);
    return;
  }
  return;
}

