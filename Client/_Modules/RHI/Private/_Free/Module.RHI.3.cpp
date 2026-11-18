// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 194

// CVarDumpTransitionsForResource'' @ 14105f990

void __cdecl
`dynamic_initializer_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResource__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&FDumpTransitionsHelper::CVarDumpTransitionsForResource,L"r.DumpTransitionsForResource"
             ,&local_18,
             L"Prints callstack when the given resource is transitioned. Only implemented for DX11 at the moment.Name of the resource to dump"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(`dynamic_atexit_destructor_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResource__);
  return;
}

// CVarDumpTransitionsForResourceSink'' @ 14105fa00

void __cdecl
`dynamic_initializer_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = FDumpTransitionsHelper::DumpTransitionForResourceHandler;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink._padding_ =
       (longlong)&___7FAutoConsoleVariableSink__6B_;
  FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink.Handle.Handle.ID =
       (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(`dynamic_atexit_destructor_for_'FDumpTransitionsHelper::
         CVarDumpTransitionsForResourceSink__);
  return;
}

// OpQueues'' @ 14105fb90

void __cdecl `dynamic_initializer_for_'RHIValidation::FTracker::OpQueues__(void)

{
  atexit(`dynamic_atexit_destructor_for_'RHIValidation::FTracker::OpQueues__);
  return;
}

// SeenFailureHashes'' @ 14105fbb0

void __cdecl `dynamic_initializer_for_'FValidationRHI::SeenFailureHashes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FValidationRHI::SeenFailureHashes__);
  return;
}

// SeenFailureHashesMutex'' @ 14105fbd0

void __cdecl `dynamic_initializer_for_'FValidationRHI::SeenFailureHashesMutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex,4000);
  atexit(`dynamic_atexit_destructor_for_'FValidationRHI::SeenFailureHashesMutex__);
  return;
}

// Singleton'' @ 14105fc00

void __cdecl `dynamic_initializer_for_'FRHIFrameFlipTrackingRunnable::Singleton__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS,4000);
  FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum = 0;
  FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FRHIFrameFlipTrackingRunnable::Singleton__);
  return;
}

// Singleton'' @ 14105fc40

void __cdecl `dynamic_initializer_for_'FRHIFrameOffsetThread::Singleton__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS,4000);
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.PresentIndex = 0;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.FlipTimeInSeconds = 0.0;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.VBlankTimeInSeconds = 0.0;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.VBlankTimeInCycles = 0;
  FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum = 0;
  FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FRHIFrameOffsetThread::Singleton__);
  return;
}

// `dynamic_initializer_for_'CVarBreakOnTransitionError'' @ 14105fca0

void __cdecl RHIValidation::_dynamic_initializer_for__CVarBreakOnTransitionError__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBreakOnTransitionError,L"r.RHIValidation.DebugBreak.Transitions",
             &GBreakOnTransitionError,
             L"Controls whether the debugger should break when a validation error is encountered.\n 0: disabled;\n 1: break in the debugger if a validation error is encountered."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBreakOnTransitionError__);
  return;
}

// `dynamic_initializer_for_'CVarIgnorePerformanceModeCheck'' @ 14105fcf0

void __cdecl _dynamic_initializer_for__CVarIgnorePerformanceModeCheck__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarIgnorePerformanceModeCheck,L"r.IgnorePerformanceModeCheck",local_res8,
             L"Ignore performance mode check",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarIgnorePerformanceModeCheck__);
  return;
}

// `dynamic_initializer_for_'CVarRHIPresentThresholdBottom'' @ 14105fd40

void __cdecl _dynamic_initializer_for__CVarRHIPresentThresholdBottom__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRHIPresentThresholdBottom,L"rhi.PresentThreshold.Bottom",local_res8,
             L"Specifies the percentage of the screen from the bottom where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHIPresentThresholdBottom__);
  return;
}

// `dynamic_initializer_for_'CVarRHIPresentThresholdTop'' @ 14105fd90

void __cdecl _dynamic_initializer_for__CVarRHIPresentThresholdTop__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRHIPresentThresholdTop,L"rhi.PresentThreshold.Top",local_res8,
             L"Specifies the percentage of the screen from the top where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHIPresentThresholdTop__);
  return;
}

// `dynamic_initializer_for_'CVarRHISyncAllowEarlyKick'' @ 14105fde0

void __cdecl _dynamic_initializer_for__CVarRHISyncAllowEarlyKick__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHISyncAllowEarlyKick,L"rhi.SyncAllowEarlyKick",local_res8,
             L"When 1, allows the RHI vsync thread to kick off the next frame early if we\'ve missed the vsync."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHISyncAllowEarlyKick__);
  return;
}

// `dynamic_initializer_for_'CVarRHISyncAllowVariable'' @ 14105fe30

void __cdecl _dynamic_initializer_for__CVarRHISyncAllowVariable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHISyncAllowVariable,L"rhi.SyncAllowVariable",local_res8,
             L"When 1, allows the RHI to use variable refresh rate, if supported by the output hardware."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHISyncAllowVariable__);
  return;
}

// `dynamic_initializer_for_'CVarRHISyncInterval'' @ 14105fe80

void __cdecl _dynamic_initializer_for__CVarRHISyncInterval__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHISyncInterval,L"rhi.SyncInterval",local_res8,
             L"Determines the frequency of VSyncs in supported RHIs.\nThis is in multiples of 16.66 on a 60hz display, but some platforms support higher refresh rates.\nAssuming 60fps, the values correspond to:\n  0 - Unlocked (present immediately)\n  1 - Present every vblank interval\n  2 - Present every 2 vblank intervals\n  3 - etc...\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHISyncInterval__);
  return;
}

// `dynamic_initializer_for_'CVarRHISyncSlackMS'' @ 14105fed0

void __cdecl _dynamic_initializer_for__CVarRHISyncSlackMS__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRHISyncSlackMS,L"rhi.SyncSlackMS",local_res8,
             L"Increases input latency by this many milliseconds, to help performance (trade-off tunable). Gamethread will be kicked off this many milliseconds before the vsync"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHISyncSlackMS__);
  return;
}

// `dynamic_initializer_for_'CVarRHInableConsole120Fps'' @ 14105ff20

void __cdecl _dynamic_initializer_for__CVarRHInableConsole120Fps__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnEnableConsole120FpsCVarRHIChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRHInableConsole120Fps,L"rhi.EnableConsole120Fps",&InternalEnableConsole120Fps,
             L"Enable Console 120fps if Monitor supports it and Console is properly setup",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarRHInableConsole120Fps__);
  return;
}

// `dynamic_initializer_for_'CVarVsyncInformationInsights'' @ 141060060

void __cdecl _dynamic_initializer_for__CVarVsyncInformationInsights__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVsyncInformationInsights,L"r.VsyncInformationInsights",&GVsyncInformationInsights,
             L"Whether to show Vsync and Input events in UnrealInsights",0);
  atexit(_dynamic_atexit_destructor_for__CVarVsyncInformationInsights__);
  return;
}

// `dynamic_initializer_for_'InvalidFeatureLevelName'' @ 1410600b0

void __cdecl _dynamic_initializer_for__InvalidFeatureLevelName__(void)

{
  FName::FName(&InvalidFeatureLevelName,L"InvalidFeatureLevel");
  return;
}

// `dynamic_initializer_for_'InvalidShadingPathName'' @ 1410600d0

void __cdecl _dynamic_initializer_for__InvalidShadingPathName__(void)

{
  FName::FName(&InvalidShadingPathName,L"InvalidShadingPath");
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_150_ES31'' @ 1410600f0

void __cdecl _dynamic_initializer_for__NAME_GLSL_150_ES31__(void)

{
  FName::FName(&NAME_GLSL_150_ES31,L"GLSL_150_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_ES3_1_ANDROID'' @ 141060110

void __cdecl _dynamic_initializer_for__NAME_GLSL_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_GLSL_ES3_1_ANDROID,L"GLSL_ES3_1_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_ES3_1'' @ 141060130

void __cdecl _dynamic_initializer_for__NAME_PCD3D_ES3_1__(void)

{
  FName::FName(&NAME_PCD3D_ES3_1,L"PCD3D_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM5'' @ 141060150

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM5__(void)

{
  FName::FName(&NAME_PCD3D_SM5,L"PCD3D_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM6'' @ 141060170

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM6__(void)

{
  FName::FName(&NAME_PCD3D_SM6,L"PCD3D_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_ANDROID'' @ 141060190

void __cdecl _dynamic_initializer_for__NAME_PLATFORM_ANDROID__(void)

{
  FName::FName(&NAME_PLATFORM_ANDROID,L"Android");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_IOS'' @ 1410601b0

void __cdecl _dynamic_initializer_for__NAME_PLATFORM_IOS__(void)

{
  FName::FName(&NAME_PLATFORM_IOS,L"IOS");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_MAC'' @ 1410601d0

void __cdecl _dynamic_initializer_for__NAME_PLATFORM_MAC__(void)

{
  FName::FName(&NAME_PLATFORM_MAC,L"Mac");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_TVOS'' @ 1410601f0

void __cdecl _dynamic_initializer_for__NAME_PLATFORM_TVOS__(void)

{
  FName::FName(&NAME_PLATFORM_TVOS,L"TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_WINDOWS'' @ 141060210

void __cdecl _dynamic_initializer_for__NAME_PLATFORM_WINDOWS__(void)

{
  FName::FName(&NAME_PLATFORM_WINDOWS,L"Windows");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1'' @ 141060230

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1,L"SF_METAL_ES3_1");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS'' @ 141060250

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS,L"SF_METAL_ES3_1_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS_DEPRECATED'' @ 141060270

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS_DEPRECATED,L"SF_METAL");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS'' @ 141060290

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS,L"SF_METAL_ES3_1_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS_DEPRECATED'' @ 1410602b0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS_DEPRECATED,L"SF_METAL_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_MRT_MAC_DEPRECATED'' @ 1410602d0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_MRT_MAC_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_MRT_MAC_DEPRECATED,L"SF_METAL_MRT_MAC");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SIM'' @ 1410602f0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SIM__(void)

{
  FName::FName(&NAME_SF_METAL_SIM,L"SF_METAL_SIM");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5'' @ 141060310

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5__(void)

{
  FName::FName(&NAME_SF_METAL_SM5,L"SF_METAL_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS'' @ 141060330

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS,L"SF_METAL_SM5_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS_DEPRECATED'' @ 141060350

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS_DEPRECATED,L"SF_METAL_MRT");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS'' @ 141060370

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS,L"SF_METAL_SM5_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS_DEPRECATED'' @ 141060390

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS_DEPRECATED,L"SF_METAL_MRT_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM6'' @ 1410603b0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM6__(void)

{
  FName::FName(&NAME_SF_METAL_SM6,L"SF_METAL_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1'' @ 1410603d0

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1,L"SF_VULKAN_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1_ANDROID'' @ 1410603f0

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1_ANDROID,L"SF_VULKAN_ES31_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5'' @ 141060410

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5__(void)

{
  FName::FName(&NAME_VULKAN_SM5,L"SF_VULKAN_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5_ANDROID'' @ 141060430

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_SM5_ANDROID,L"SF_VULKAN_SM5_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM6'' @ 141060450

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM6__(void)

{
  FName::FName(&NAME_VULKAN_SM6,L"SF_VULKAN_SM6");
  return;
}

// `dynamic_initializer_for_'ShadingPathNames'' @ 141060470

void __cdecl _dynamic_initializer_for__ShadingPathNames__(void)

{
  FName::FName(ShadingPathNames,L"Deferred");
  FName::FName(ShadingPathNames + 1,L"Forward");
  FName::FName(ShadingPathNames + 2,L"Mobile");
  return;
}

// `scalar_deleting_destructor' @ 145ccdd10

void * __thiscall
FRHIFrameOffsetThread::_scalar_deleting_destructor_(FRHIFrameOffsetThread *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRHIFrameOffsetThread__6B_;
  pFVar1 = (this->FrameDebugInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 145ccdd80

wchar_t * __cdecl
`GetBufferUsageFlagsName'::__l2::<lambda_1>::<lambda_invoker_cdecl>(EBufferUsageFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 < (NNE|Static)) {
    if (param_1 == NNE) {
      return L"BUF_NNE";
    }
    if (param_1 < (ByteAddressBuffer|Static)) {
      if (param_1 == ByteAddressBuffer) {
        return L"BUF_ByteAddressBuffer";
      }
      if (param_1 == None) {
        return L"BUF_None";
      }
      if (param_1 == Static) {
        return L"BUF_Static";
      }
      if (param_1 == Dynamic) {
        return L"BUF_Dynamic";
      }
      if (param_1 == Volatile) {
        return L"BUF_Volitile";
      }
      if (param_1 == UnorderedAccess) {
        return L"BUF_UnorderedAccess";
      }
    }
    else {
      if (param_1 == SourceCopy) {
        return L"BUF_SourceCopy";
      }
      if (param_1 == DrawIndirect) {
        return L"BUF_DrawIndirect";
      }
      if (param_1 == ShaderResource) {
        return L"BUF_ShaderResource";
      }
      if (param_1 == KeepCPUAccessible) {
        return L"BUF_KeepCPUAccessible";
      }
      if (param_1 == FastVRAM) {
        return L"BUF_FastVRAM";
      }
    }
  }
  else if (param_1 < (MultiGPUAllocate|Static)) {
    if (param_1 == MultiGPUAllocate) {
      return L"BUF_MultiGPUAllocate";
    }
    if (param_1 == Shared) {
      return L"BUF_Shared";
    }
    if (param_1 == AccelerationStructure) {
      return L"BUF_AccelerationStructure";
    }
    if (param_1 == VertexBuffer) {
      return L"BUF_VertexBuffer";
    }
    if (param_1 == IndexBuffer) {
      return L"BUF_IndexBuffer";
    }
    if (param_1 == StructuredBuffer) {
      return L"BUF_StructuredBuffer";
    }
  }
  else {
    if (param_1 == MultiGPUGraphIgnore) {
      return L"BUF_MultiGPUGraphIgnore";
    }
    if (param_1 == RayTracingScratch) {
      return L"BUF_RayTracingScratch";
    }
    if (param_1 == NullResource) {
      return L"BUF_NullResource";
    }
    if (param_1 == UniformBuffer) {
      return L"BUF_UniformBuffer";
    }
    if (param_1 == ReservedResource) {
      return L"BUF_ReservedResource";
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0x13a,L"");
  if (!bVar2) {
    return L"BUF_None";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// <lambda_invoker_cdecl> @ 145ccdf90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

wchar_t * __cdecl `GetRHIAccessName'::__l2::<lambda_1>::<lambda_invoker_cdecl>(ERHIAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 < (DSVRead|CPURead)) {
    if (param_1 == DSVRead) {
      return L"DSVRead";
    }
    if (param_1 < (SRVCompute|CPURead)) {
      if (param_1 == SRVCompute) {
        return L"SRVCompute";
      }
      if (param_1 == None) {
        return L"Unknown";
      }
      if (param_1 == CPURead) {
        return L"CPURead";
      }
      if (param_1 == Present) {
        return L"Present";
      }
      if (param_1 == IndirectArgs) {
        return L"IndirectArgs";
      }
      if (param_1 == VertexOrIndexBuffer) {
        return L"VertexOrIndexBuffer";
      }
    }
    else {
      if (param_1 == SRVGraphicsPixel) {
        return L"SRVGraphicsPixel";
      }
      if (param_1 == SRVGraphicsNonPixel) {
        return L"SRVGraphicsNonPixel";
      }
      if (param_1 == CopySrc) {
        return L"CopySrc";
      }
      if (param_1 == ResolveSrc) {
        return L"ResolveSrc";
      }
    }
  }
  else if (param_1 < (DSVWrite|CPURead)) {
    if (param_1 == DSVWrite) {
      return L"DSVWrite";
    }
    if (param_1 == UAVCompute) {
      return L"UAVCompute";
    }
    if (param_1 == UAVGraphics) {
      return L"UAVGraphics";
    }
    if (param_1 == RTV) {
      return L"RTV";
    }
    if (param_1 == CopyDest) {
      return L"CopyDest";
    }
    if (param_1 == ResolveDst) {
      return L"ResolveDst";
    }
  }
  else {
    if (param_1 == BVHRead) {
      return L"BVHRead";
    }
    if (param_1 == BVHWrite) {
      return L"BVHWrite";
    }
    if (param_1 == Discard) {
      return L"Discard";
    }
    if (param_1 == Last) {
      return L"ShadingRateSource";
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0x1d8,L"");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// <lambda_invoker_cdecl> @ 145cce170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

wchar_t * __cdecl
`GetRHIPipelineName'::__l2::<lambda_1>::<lambda_invoker_cdecl>(ERHIPipeline param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 != Graphics) {
    if (param_1 == AsyncCompute) {
      return L"AsyncCompute";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                       ,0x20b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Graphics";
}

// <lambda_invoker_cdecl> @ 145cce1e0

/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

wchar_t * __cdecl
`GetResourceTransitionFlagsName'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (EResourceTransitionFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != None) {
    if (param_1 == MaintainCompression) {
      return L"MaintainCompression";
    }
    if (param_1 == IgnoreAfterState) {
      return L"IgnoreAfterState";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                       ,0x1f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"None";
}

// <lambda_invoker_cdecl> @ 145cce250

wchar_t * __cdecl
`GetTextureCreateFlagsName'::__l2::<lambda_1>::<lambda_invoker_cdecl>(ETextureCreateFlags param_1)

{
  wchar_t *pwVar1;
  undefined1 local_res10 [24];
  
  pwVar1 = operator()(local_res10,param_1);
  return pwVar1;
}

// operator()<`RHIValidation::CountLevels'::__l2::<lambda_1>_> @ 145cce300

int __thiscall
`RHIValidation::CountLevels'::__l2::<lambda_1>::
operator()<_RHIValidation::CountLevels_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHIBreadcrumbNode *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_2 == FRHIBreadcrumbNode::Sentinel) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Current != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xa7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 != (FRHIBreadcrumbNode *)0x0) {
    iVar3 = operator()<_RHIValidation::CountLevels_::__l2::<lambda_1>_>
                      (param_1,param_1,param_2->Parent);
    return iVar3 + 1;
  }
  return 0;
}

// operator()<`RHIValidation::FOperation::Replay'::__l115::<lambda_1>_> @ 145cce380

void __thiscall
`RHIValidation::FOperation::Replay'::__l115::<lambda_1>::
operator()<_RHIValidation::FOperation::Replay_::__l115::<lambda_1>_>
          (void *this,FRHIBreadcrumbAllocator *param_1,<lambda_1> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  FRHIBreadcrumbAllocatorArray *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1->bVisited != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Current->bVisited",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xadf,L"Circular reference detected in breadcrumb allocators.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->bVisited = true;
  pFVar5 = *(FRHIBreadcrumbAllocatorArray **)&(param_1->Parents).field_0x20;
  iVar1 = *(int *)&(param_1->Parents).field_0x28;
  if (pFVar5 == (FRHIBreadcrumbAllocatorArray *)0x0) {
    pFVar5 = &param_1->Parents;
  }
  puVar3 = (undefined8 *)&pFVar5->field_0x0;
  while( true ) {
    if (*(int *)&(param_1->Parents).field_0x28 != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == (FRHIBreadcrumbAllocatorArray *)(puVar3 + (longlong)iVar1 * 2)) break;
    operator()<_RHIValidation::FOperation::Replay_::__l115::<lambda_1>_>
              (param_2,*(FRHIBreadcrumbAllocator **)pFVar5,param_2);
    pFVar5 = (FRHIBreadcrumbAllocatorArray *)&pFVar5->field_0x10;
  }
  param_1->bVisited = false;
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FTracedTask,int> @ 145cce740

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask,int>
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

// DestructItems<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int> @ 145cce790

void __cdecl
DestructItems<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int>
          (TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int> @ 145cce7d0

void __cdecl
DestructItems<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int>
          (TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int> @ 145cce810

void __cdecl
DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int>(FFramePair *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  FTaskEvent *this;
  
  if (param_2 != 0) {
    this = &param_1->Event;
    do {
      if (CpuChannel->Enabled < 0) {
        UE::Tasks::FTaskEvent::Trigger(this);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:___cdecl_FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(void)___ptr64'
                    ::__l2::__CpuProfilerEventSpecId181,"SyncTrigger_Swapchain",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                   ,0xb5);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:___cdecl_FRHIFrameFlipTrackingRunnable::FFramePair::~FFramePair(void)___ptr64'
                   ::__l2::__CpuProfilerEventSpecId181);
        UE::Tasks::FTaskEvent::Trigger(this);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar3 = *this;
      if (FVar3 != (FTaskEvent)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar3 + 0x30);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)FVar3)(FVar3,1);
        }
      }
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<RHIValidation::FOpQueueState::FOpsList,int> @ 145cce8c0

void __cdecl
DestructItems<RHIValidation::FOpQueueState::FOpsList,int>(FOpsList *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FTracedTask,int> @ 145cce900

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask,int>
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

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`RHIValidation::CollectShaderBindingTableResources'::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>'::__l4::<lambda_2>_> @ 145ccf370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  FResourceBinder *pFVar6;
  FShaderBindingTable *pFVar7;
  code *pcVar8;
  bool bVar9;
  ERHIAccess EVar10;
  uint uVar11;
  uint *puVar12;
  uint local_res10;
  undefined2 local_res1d;
  undefined1 local_res1f;
  FViewIdentity local_f0;
  ERHIAccess EStack_c8;
  undefined4 uStack_c4;
  FState local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  FViewIdentity local_a8;
  FOperation local_80;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar3 = param_3[param_2];
  if (uVar3 != 0) {
    uVar11 = param_3[uVar3];
    puVar12 = param_3 + (ulonglong)uVar3 + 1;
    local_res10 = param_2;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar11 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
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
                  (&local_a8,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_a8._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_a8._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        local_f0._padding_ = local_a8._padding_;
        uStack_c4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_80.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_a8._padding_;
        local_80.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_a8._padding_._4_1_;
        local_80.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_a8._padding_._5_3_;
        local_80.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_a8._padding_;
        local_f0._padding_._0_4_ = 7;
        local_80._4_4_ = local_f0._padding_._4_4_;
        local_80.Type = Assert;
        local_80.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_a8._padding_
        ;
        local_80.field1_0x8.Data_BeginTransition.CreateBacktrace = local_b0;
        local_f0.Stride = (uint)local_a8._padding_;
        local_f0._36_4_ = local_a8._padding_._4_4_;
        local_80.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_a8._padding_;
        local_80.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_a8._padding_._4_4_;
        local_80.field1_0x8._36_4_ = uStack_c4;
        local_80.field1_0x8.Data_BeginTransition.NextState = local_c0;
        local_80.field1_0x8._48_8_ = uStack_b8;
        EStack_c8 = EVar10;
        local_80.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_80);
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar11 & 0xff,pFVar5);
      }
      pFVar6 = param_4->Binder;
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView
                  ((FRHIShader *)pFVar6->RHIShader,uVar11 & 0xff,pFVar5);
      }
      pFVar7 = pFVar6->ShaderBindingTable;
      uVar3 = pFVar6->WorkerIndex;
      RHIValidation::FViewIdentity::FViewIdentity
                (&local_f0,*(FRHIViewableResource **)&pFVar5->field_0x18,
                 (FRHIViewDesc *)&pFVar5->field_0x20);
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FResourceIdentity_const_&>
                (&pFVar7->WorkerData[uVar3].SRVs,(FResourceIdentity *)&stack0x00000008,
                 (bool *)&local_f0);
      uVar11 = *puVar12;
      puVar12 = puVar12 + 1;
    } while (uVar11 >> 0x18 == local_res10);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`RHIValidation::CollectShaderBindingTableResources'::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>'::__l4::<lambda_1>_> @ 145ccf600

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  FScriptContainerElement *pFVar2;
  FRHITexture *pFVar3;
  FTracker *this;
  FResourceBinder *pFVar4;
  FShaderBindingTable *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint local_res10;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  FResource *pFStack_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  ERHIPipeline EStack_a4;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  FState local_a0;
  undefined8 uStack_98;
  void *local_90;
  FOperation local_88;
  
  pFVar2 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    local_res10 = param_2;
    do {
      pFVar3 = *(FRHITexture **)(pFVar2 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar3 == (FRHITexture *)0x0) &&
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
          uVar8 = 0x10;
        }
        else {
          uVar8 = 0x40;
          if (EVar1 == SF_Pixel) {
            uVar8 = 0x20;
          }
        }
        pFStack_c8 = (FResource *)(**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_);
        EStack_a4 = this->Pipeline;
        uStack_bc = pFStack_c8->NumMips;
        uStack_b4 = pFStack_c8->NumArraySlices;
        LOCK();
        (pFStack_c8->NumOpRefs).Counter = (pFStack_c8->NumOpRefs).Counter + 1;
        UNLOCK();
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a3 = local_res1d;
        local_88.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)((ulonglong)uStack_bc << 0x20);
        local_88.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uStack_b4 << 0x20);
        uStack_a1 = local_res1f;
        local_d0 = 7;
        local_88._4_4_ = uStack_cc;
        local_88.Type = Assert;
        uStack_ac = 1;
        local_88.field1_0x8._24_8_ = 0x100000000;
        local_88.field1_0x8._36_1_ = EStack_a4;
        local_88.field1_0x8._32_4_ = uVar8;
        local_88.field1_0x8._37_2_ = local_res1d;
        local_88.field1_0x8._39_1_ = local_res1f;
        local_88.field1_0x8.Data_BeginTransition.NextState = local_a0;
        local_88.field1_0x8._48_8_ = uStack_98;
        local_88.field1_0x8.Data_BeginTransition.CreateBacktrace = local_90;
        uStack_a8 = uVar8;
        local_88.field1_0x8.Data_BeginTransition.Identity.Resource = pFStack_c8;
        RHIValidation::FTracker::AddOp(this,&local_88);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar3->LastRenderTime).LastRenderTime) {
        (pFVar3->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      pFVar4 = param_4->Binder;
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView
                  ((FRHIShader *)pFVar4->RHIShader,uVar10 & 0xff,pFVar3);
      }
      pFVar5 = pFVar4->ShaderBindingTable;
      uVar10 = pFVar4->WorkerIndex;
      local_f0 = (undefined4 *)(**(code **)(pFVar3->_padding_ + 8))();
      local_d4 = 1;
      local_e8 = 0;
      local_e4 = *local_f0;
      local_dc = local_f0[1];
      local_e0 = 0;
      local_d8 = 0;
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FResourceIdentity_const_&>
                (&pFVar5->WorkerData[uVar10].SRVs,(FResourceIdentity *)&stack0x00000008,
                 (bool *)&local_f0);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == local_res10);
  }
  return;
}

// IID_PPV_ARGS_Helper<IDXGIFactory1> @ 145ccf8b0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory1>(IDXGIFactory1 **param_1)

{
  return param_1;
}

// ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext> @ 145ccf8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>
          *param_7)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  atomic<unsigned_int> aVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  FTaskGraphInterface *pFVar15;
  bool *pbVar16;
  int iVar17;
  atomic<unsigned_int> aVar18;
  int iVar19;
  ulonglong uVar20;
  FName FVar21;
  int iVar22;
  atomic<unsigned_int> aVar23;
  bool bVar24;
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
  aVar10 = (atomic<unsigned_int>)0x0;
  FVar13 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar13;
  bVar4 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar6 = false;
  bVar24 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_145ccfa24:
    bVar5 = bVar24;
    bVar4 = bVar6;
    bVar6 = false;
    FVar21 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar6 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_78.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar4 = true;
        bVar5 = true;
        bVar6 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ccfa24;
    local_70 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar6 = true;
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = FApp::ShouldUseThreadingForPerformance();
  if (bVar7) {
LAB_145ccfaa9:
    bVar7 = true;
  }
  else {
    bVar8 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar7 = false;
    if (bVar8) goto LAB_145ccfaa9;
  }
  if ((((1 < param_2) && ((param_6 & ForceSingleThread) == None)) && (bVar7)) &&
     (aVar10 = (atomic<unsigned_int>)((param_3 / 2 + param_2) / param_3),
     (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar10)) {
    aVar10 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar7 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                    ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar18 = (atomic<unsigned_int>)((int)aVar10 + 1);
  if (bVar7) {
    aVar18 = aVar10;
  }
  aVar10 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar18 < (int)aVar10) {
    aVar10 = aVar18;
  }
  aVar18 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar10) {
    aVar18 = aVar10;
  }
  aVar10 = (atomic<unsigned_int>)param_7->ArrayNum;
  aVar23 = aVar18;
  if ((aVar10 != (atomic<unsigned_int>)0x0) && (aVar23 = aVar10, (int)aVar18 < (int)aVar10)) {
    aVar23 = aVar18;
  }
  if ((int)aVar23 < 2) {
    iVar19 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        `RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>::
        operator()(param_4,param_7->DataPtr,iVar19);
        iVar19 = iVar19 + 1;
      } while (iVar19 < param_2);
    }
    goto LAB_145ccfeaf;
  }
  uVar20 = 1;
  iVar19 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar22 = 6;
    iVar17 = (int)aVar23 * 6;
    do {
      if (iVar17 <= param_2) {
        uVar2 = (longlong)(param_2 + -1 + iVar17) / (longlong)iVar17;
        uVar20 = uVar2 & 0xffffffff;
        iVar19 = (int)uVar2;
        local_84.Bits = (param_2 + -1 + iVar19) / iVar19;
        if ((int)aVar23 <= (int)local_84.Bits) break;
      }
      iVar19 = (int)uVar20;
      iVar17 = iVar17 - (int)aVar23;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  iVar17 = (int)aVar23 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_145ccfbfe;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_145ccfbfe:
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
          ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>_>'::`2'::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext>'
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
    *(int *)((longlong)FVar14 + 0x50) = iVar19;
    *(TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar19 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask>_>
                       (0x48,8,iVar17,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>(wchar_t_const_*,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar19 * 0x48),iVar17);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar19) {
    iVar19 = -1;
  }
  if (iVar19 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>(wchar_t_const_*,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar19,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar19 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar17;
  bVar7 = `ParallelForImpl::
          ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar7) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar7 = IsInActualRenderingThread(), !bVar7))
    {
      bVar7 = -1 < CpuChannel->Enabled;
      if (bVar7) {
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
        bVar8 = *pbVar16;
        *pbVar16 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar16 = bVar8;
      }
      if (bVar7) {
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
      ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>(wchar_t_const_*,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar19 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_145ccfeaf:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>_> @ 145ccfff0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_>
          (ushort param_1,
          ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
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
    ForElementType<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FTracedTask>_> @ 145cd00c0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>(wchar_t_const_*,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>,int,int,_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
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
    else if (iVar4 < 0) goto LAB_145cd01d6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_145cd01d6:
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

// SetUniformBufferResourcesFromTables<`RHIValidation::CollectShaderBindingTableResources'::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0> @ 145cd0380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>
          (FResourceBinder *param_1,FRHIShader *param_2,uint *param_3,FRHIUniformBuffer ***param_4,
          FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRHIResourceCollection *pFVar5;
  FRHIUnorderedAccessView *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FRHIUnorderedAccessView **ppFVar16;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  FRHIUniformBuffer *pFVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 local_144 [4];
  uint local_140;
  longlong local_138;
  FRHIUniformBuffer *local_130;
  uint local_128;
  int local_124;
  float local_120;
  uint local_11c;
  FString local_118;
  longlong local_108;
  longlong local_100;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_f8;
  uint local_f0;
  undefined1 local_ec [20];
  FRHIUnorderedAccessView *local_d8;
  uint local_d0;
  <lambda_2> local_c8;
  <lambda_1> local_b0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar12 = false;
  bVar9 = false;
  bVar11 = false;
  bVar8 = false;
  local_120 = (float)(double)FApp::CurrentTime;
  local_11c = (uint)param_2->_padding_ & *param_3;
  if (local_11c == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar13 = -local_11c & local_11c;
    local_f0 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
      }
    }
    uVar22 = 0x20;
    if (uVar13 != 0) {
      uVar22 = local_f0;
    }
    local_11c = local_11c & local_11c - 1;
    local_140 = uVar22;
    if (((int)param_2->_padding_ <= (int)uVar22) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar23 = (longlong)(int)uVar22;
    pFVar19 = (*param_4)[lVar23];
    local_130 = pFVar19;
    local_108 = lVar23;
    if (pFVar19 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar22 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar22)) {
        bVar8 = true;
        pFVar15 = ::FString::FString(&local_90,L"<unknown>");
      }
      else {
        if (((int)uVar22 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar11 = true;
        pFVar15 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar23 * 8),&local_80);
      }
      pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
      if ((bVar8) &&
         (bVar8 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if ((bVar11) &&
         (bVar11 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      local_138 = lVar23 * 4;
    }
    else {
      local_128 = ~uVar22 >> 0x1f;
      uVar13 = 0;
      if ((int)local_140 < (int)param_2->_padding_) {
        uVar13 = local_128;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_138 = lVar23 * 4;
      local_f8 = &pFVar19->Layout;
      pFVar4 = local_f8->Reference;
      pFVar19 = local_130;
      uVar22 = local_140;
      local_100 = local_138;
      if (pFVar4->Hash != *(uint *)(local_138 + param_2->_padding_)) {
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        pFVar17 = (pFVar4->Resources).AllocatorInstance.Data;
        iVar2 = (pFVar4->Resources).ArrayNum;
        pFVar3 = pFVar17 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar4->Resources).ArrayNum != iVar2) {
            local_144[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_144);
          }
          uVar22 = local_128;
          uVar13 = local_140;
          if (pFVar17 == pFVar3) break;
          ::FString::PrintfImpl((FString *)(local_ec + 4),L"%s%d");
          iVar20 = (int)local_ec._12_8_ + -1;
          if ((int)local_ec._12_8_ == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars(&local_118,(wchar_t *)local_ec._4_8_,iVar20);
          if ((wchar_t *)local_ec._4_8_ != (wchar_t *)0x0) {
            FMemory::Free((void *)local_ec._4_8_);
          }
          pFVar17 = pFVar17 + 4;
        }
        local_124 = (pFVar4->Resources).ArrayNum;
        local_138 = CONCAT44(local_138._4_4_,pFVar4->ConstantBufferSize);
        uVar14 = 0;
        if ((int)local_140 < (int)param_2->_padding_) {
          uVar14 = local_128;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar23 = local_108;
        if (((int)uVar13 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar13)) {
          bVar9 = true;
          pFVar15 = ::FString::FString(&local_70,L"<unknown>");
        }
        else {
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = true;
          pFVar15 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar23 * 8),local_60);
        }
        pFVar3 = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
        if ((bVar9) &&
           (bVar9 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((bVar12) &&
           (bVar12 = false,
           local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        uVar22 = local_140;
        Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        lVar23 = local_100;
        local_138 = local_100;
        pFVar19 = local_130;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          pFVar19 = local_130;
          local_138 = lVar23;
        }
      }
    }
    lVar21 = local_138;
    local_b0.Tracker = &param_5;
    local_b0.CurrentTimeForTextureTimes = &local_120;
    local_b0.Shader = param_2;
    local_b0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>_::__l4::<lambda_1>_>
              (pFVar19,uVar22,(uint *)param_2->_padding_,&local_b0);
    local_c8.Tracker = &param_5;
    local_c8.Shader = param_2;
    local_c8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>_::__l4::<lambda_2>_>
              (pFVar19,uVar22,(uint *)param_2->_padding_,&local_c8);
    lVar23 = param_2->_padding_;
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    uVar13 = *(uint *)(lVar23 + lVar21);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + ((ulonglong)uVar13 + 1) * 4);
      do {
        pFVar5 = *(FRHIResourceCollection **)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8);
        if ((pFVar5 == (FRHIResourceCollection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        `RHIValidation::CollectShaderBindingTableResources'::__l2::FResourceBinder::
        SetResourceCollection(param_1,pFVar5,(uchar)uVar14);
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        pFVar19 = local_130;
        lVar21 = local_138;
      } while (uVar14 >> 0x18 == uVar22);
    }
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    lVar23 = param_2->_padding_;
    uVar13 = *(uint *)(lVar23 + lVar21);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + 4 + (ulonglong)uVar13 * 4);
      do {
        if ((*(longlong *)(pFVar3 + (ulonglong)(uVar14 >> 8 & 0xffff) * 8) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
        pFVar19 = local_130;
      } while (uVar14 >> 0x18 == uVar22);
    }
    pFVar3 = (pFVar19->ResourceTable).AllocatorInstance.Data;
    lVar23 = param_2->_padding_;
    uVar13 = *(uint *)(lVar23 + lVar21);
    if (uVar13 != 0) {
      uVar14 = *(uint *)(lVar23 + (ulonglong)uVar13 * 4);
      puVar18 = (uint *)(lVar23 + 4 + (ulonglong)uVar13 * 4);
      do {
        pFVar6 = *(FRHIUnorderedAccessView **)(pFVar3 + (ulonglong)(ushort)(uVar14 >> 8) * 8);
        if ((pFVar6 == (FRHIUnorderedAccessView *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar23 = 0x10;
          }
          else {
            lVar23 = 0;
          }
          ppFVar16 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar23),uVar14 & 0xff);
          *ppFVar16 = pFVar6;
        }
        if (GRHIValidationEnabled != false) {
          RHIValidation::ValidateUnorderedAccessView
                    ((FRHIShader *)param_1->RHIShader,uVar14 & 0xff,pFVar6);
        }
        local_d0 = uVar14 & 0xff;
        local_d8 = pFVar6;
        TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
        ::Emplace<RHIValidation::FUAVBinding>
                  (&param_1->ShaderBindingTable->WorkerData[param_1->WorkerIndex].UAVs,
                   (FUAVBinding *)local_ec,(bool *)&local_d8);
        uVar14 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (uVar14 >> 0x18 == uVar22);
    }
    if (local_11c == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// ~TFunction_OwnedObject<`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::<lambda_1>,1,1> @ 145cd2520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FRHIValidationTextureInitializer_FValidationRHI__QEAA_AEBUFRHITextureCreateDesc____QEAUFRHITextureInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000145cd2543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 145cd2550

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>_>'::`2'::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>_>'::`2'::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// operator() @ 145cd3020

wchar_t * __thiscall
`GetTextureCreateFlagsName'::__l2::<lambda_1>::operator()(void *this,ETextureCreateFlags param_1)

{
  ETextureCreateFlags local_res10;
  ETextureCreateFlags *local_res18 [2];
  
  if (param_1 < (Presentable|RenderTargetable)) {
    if (param_1 == Presentable) {
      return L"Presentable";
    }
    if (param_1 < (Dynamic|RenderTargetable)) {
      if (param_1 == Dynamic) {
        return L"Dynamic";
      }
      switch(param_1) {
      case None:
        return L"None";
      case RenderTargetable:
        return L"RenderTargetable";
      case ResolveTargetable:
        return L"ResolveTargetable";
      case DepthStencilTargetable:
        return L"DepthStencilTargetable";
      case ShaderResource:
        return L"ShaderResource";
      case SRGB:
        return L"SRGB";
      case CPUWritable:
        return L"CPUWritable";
      case NoTiling:
        return L"NoTiling";
      case VideoDecode:
        return L"VideoDecode";
      }
    }
    else if (param_1 < (FastVRAMPartialAlloc|RenderTargetable)) {
      if (param_1 == FastVRAMPartialAlloc) {
        return L"FastVRAMPartialAlloc";
      }
      if (param_1 == InputAttachmentRead) {
        return L"InputAttachmentRead";
      }
      if (param_1 == Foveation) {
        return L"Foveation";
      }
      if (param_1 == Tiling3D) {
        return L"Tiling3D";
      }
      if (param_1 == Memoryless) {
        return L"Memoryless";
      }
    }
    else {
      if (param_1 == DisableSRVCreation) {
        return L"DisableSRVCreation";
      }
      if (param_1 == DisableDCC) {
        return L"DisableDCC";
      }
      if (param_1 == UAV) {
        return L"UAV";
      }
    }
  }
  else if (param_1 < (Streamable|RenderTargetable)) {
    if (param_1 == Streamable) {
      return L"Streamable";
    }
    if (param_1 < (Virtual|RenderTargetable)) {
      if (param_1 == Virtual) {
        return L"Virtual";
      }
      if (param_1 == CPUReadback) {
        return L"CPUReadback";
      }
      if (param_1 == OfflineProcessed) {
        return L"OfflineProcessed";
      }
      if (param_1 == FastVRAM) {
        return L"FastVRAM";
      }
      if (param_1 == HideInVisualizeTexture) {
        return L"HideInVisualizeTexture";
      }
    }
    else {
      if (param_1 == TargetArraySlicesIndependently) {
        return L"TargetArraySlicesIndependently";
      }
      if (param_1 == Shared) {
        return L"Shared";
      }
      if (param_1 == NoFastClear) {
        return L"NoFastClear";
      }
      if (param_1 == DepthStencilResolveTarget) {
        return L"DepthStencilResolveTarget";
      }
    }
  }
  else if (param_1 < (External|RenderTargetable)) {
    if (param_1 == External) {
      return L"External";
    }
    if (param_1 == NoFastClearFinalize) {
      return L"NoFastClearFinalize";
    }
    if (param_1 == Atomic64Compatible) {
      return L"Aomic64Capable";
    }
    if (param_1 == ReduceMemoryWithTilingMode) {
      return L"ReduceMemoryWithTilingMode";
    }
    if (param_1 == AtomicCompatible) {
      return L"AtomicCompatible";
    }
  }
  else {
    if (param_1 == MultiGPUGraphIgnore) {
      return L"MultiGPUGraphIgnore";
    }
    if (param_1 == ReservedResource) {
      return L"ReservedResource";
    }
    if (param_1 == ImmediateCommit) {
      return L"ImmediateCommit";
    }
  }
  local_res18[0] = &local_res10;
  local_res10 = param_1;
  ``GetTextureCreateFlagsName'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (local_res18);
  return L"Unknown";
}

// `vector_deleting_destructor'`adjustor{40}' @ 145cd3e3c

/* [thunk]:public: virtual void * __ptr64 __cdecl FRHITextureReference::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FRHITextureReference::_vector_deleting_destructor__adjustor_40__
          (FRHITextureReference *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRHITextureReference *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145cd3e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FRHIValidationTextureInitializer_FValidationRHI__QEAA_AEBUFRHITextureCreateDesc____QEAUFRHITextureInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd3eb0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'
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
       &ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::<lambda_1>_>'::`2'::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::`5'::FTaskContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>,`ParallelForWithExistingTaskContext<`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>_>'::__l2::<lambda_1>,`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::FTaskContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_::__l2::FTracedTask,int>
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

// `scalar_deleting_destructor' @ 145cd3fc0

void * __thiscall
FRHIFrameFlipTrackingRunnable::_scalar_deleting_destructor_
          (FRHIFrameFlipTrackingRunnable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int>
            ((FFramePair *)(this->FramePairs).AllocatorInstance.Data,(this->FramePairs).ArrayNum);
  pFVar1 = (this->FramePairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd4030

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHITextureReference::_scalar_deleting_destructor_(FRHITextureReference *this,uint param_1)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this_00 = (this->ReferencedTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd40c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHITransientResource::_scalar_deleting_destructor_(FRHITransientResource *this,uint param_1)

{
  ~FRHITransientResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd4100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FValidationComputeContext::_scalar_deleting_destructor_
          (FValidationComputeContext *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FValidationComputeContext__6B_;
  FState::~FState(&this->State);
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd4160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FValidationContext::_scalar_deleting_destructor_(FValidationContext *this,uint param_1)

{
  FState::~FState(&this->State);
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,1000);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd41d0

void * __thiscall FValidationRHI::_scalar_deleting_destructor_(FValidationRHI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FValidationRHI__6B_;
  GRHIValidationEnabled = false;
  pFVar1 = (this->RHIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DepthStencilStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DepthStencilStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DepthStencilStates);
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145cd4260

void * __thiscall
FValidationTransientResourceAllocator::_scalar_deleting_destructor_
          (FValidationTransientResourceAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  FValidationTransientResourceAllocator *pFVar5;
  
  this->_padding_ = (longlong)&___7FValidationTransientResourceAllocator__6B_;
  if (this->RHIAllocator != (IRHITransientResourceAllocator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RHIAllocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xda5,L"Release was not called on FRHITransientResourceAllocator.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar5 = this + 1;
  lVar4 = 2;
  do {
    pvVar3 = *(void **)&pFVar5[-1].PendingPipelineOps.field_0x10;
    pFVar5 = (FValidationTransientResourceAllocator *)&pFVar5[-1].PendingPipelineOps.field_0x10;
    lVar4 = lVar4 + -1;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  } while (lVar4 != 0);
  *(undefined4 *)&(this->AllocatedResourceMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllocatedResourceMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllocatedResourceMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// CaptureBacktrace @ 145cd7480

void * __cdecl RHIValidation::CaptureBacktrace(void)

{
  ulong64 *puVar1;
  
  puVar1 = operator_new__(0xf0);
  FWindowsPlatformStackWalk::CaptureStackBackTrace(puVar1,0x1e,(void *)0x0);
  return puVar1;
}

// ChooseFeatureLevel @ 145cd75d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

Type __cdecl
ChooseFeatureLevel(EWindowsRHI param_1,TOptional<ERHIFeatureLevel::Type> param_2,
                  FParsedWindowsDynamicRHIConfig *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FOverrideRHI *pFVar10;
  FScriptContainerElement *pFVar11;
  FParsedWindowsDynamicRHIConfig *pFVar12;
  undefined1 local_res10 [16];
  Type local_res20;
  char local_res24;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  Type local_78;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  *param_4 = false;
  pFVar12 = (FParsedWindowsDynamicRHIConfig *)(ulonglong)param_1;
  if ((*(char *)((longlong)param_2 + 4) != '\0') &&
     (bVar5 = FParsedWindowsDynamicRHIConfig::IsFeatureLevelTargeted
                        (param_3,param_1,*(Type *)param_2), bVar5)) {
    if (4 < (byte)LogRHI._0_1_) {
      if ((*(char *)((longlong)param_2 + 4) == '\0') &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      GetLogName(*(Type *)param_2);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((*(char *)((longlong)param_2 + 4) == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6 = (*pcVar4)();
      return TVar6;
    }
    return *(Type *)param_2;
  }
  GetPreferredFeatureLevel((EWindowsRHI)&local_res20,pFVar12,(bool *)param_3);
  if ((local_res24 != '\0') &&
     (bVar5 = FParsedWindowsDynamicRHIConfig::IsFeatureLevelTargeted(param_3,param_1,local_res20),
     bVar5)) goto LAB_145cd79ab;
  iVar2 = (param_3->RHIConfigs).Elements[(longlong)pFVar12].FeatureLevels.ArrayNum;
  if (iVar2 == 0) {
    bVar5 = false;
    TVar6 = local_78;
  }
  else {
    pFVar11 = (param_3->RHIConfigs).Elements[(longlong)pFVar12].FeatureLevels.AllocatorInstance.Data
    ;
    TVar6 = ES2_REMOVED;
    pFVar1 = pFVar11 + (longlong)iVar2 * 4;
    while( true ) {
      if ((param_3->RHIConfigs).Elements[(longlong)pFVar12].FeatureLevels.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar1) break;
      if ((int)TVar6 < (int)*(Type *)pFVar11) {
        TVar6 = *(Type *)pFVar11;
      }
      pFVar11 = pFVar11 + 4;
    }
    bVar5 = true;
  }
  if (bVar5) {
    local_res24 = '\x01';
    local_res20 = TVar6;
    if (4 < (byte)LogRHI._0_1_) {
      GetLogName(param_1);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    goto LAB_145cd79ab;
  }
  local_res24 = 0;
  if (((param_1 == D3D11) || (param_1 == D3D12)) || (param_1 == Vulkan)) {
LAB_145cd7811:
    local_res20 = SM5;
  }
  else if (param_1 == OpenGL) {
    local_res20 = ES3_1;
  }
  else {
    if (param_1 != Imported) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                         ,0xe6,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      goto LAB_145cd7811;
    }
    pFVar10 = GetOverrideRHI();
    local_res20 = pFVar10->FeatureLevel;
  }
  local_res24 = '\x01';
  pFVar7 = GetTextName(&local_60,param_1);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"WindowsDynamicRHI",L"MissingTargetedShaderFormats",
                      L"Unable to launch with RHI \'{0}\' since the project is not configured to support it."
                     );
  pFVar9 = FTextFormat::FTextFormat(&local_50,pFVar8,Default);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar7);
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar6 = (*pcVar4)();
    return TVar6;
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_98,1);
  local_b8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
  local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_a8,&local_b8,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar3 = (pFVar7->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FMessageDialog::Open(Ok,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  GetLogName(param_1);
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
LAB_145cd79ab:
  if ((*(char *)((longlong)param_2 + 4) != '\0') && (2 < (byte)LogRHI._0_1_)) {
    if ((local_res24 == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6 = (*pcVar4)();
      return TVar6;
    }
    if ((*(char *)((longlong)param_2 + 4) == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar6 = (*pcVar4)();
      return TVar6;
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((local_res24 == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar6 = (*pcVar4)();
    return TVar6;
  }
  return local_res20;
}

// ChooseForcedRHI @ 145cd7b00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<EWindowsRHI> __cdecl
ChooseForcedRHI(TOptional<ERHIFeatureLevel::Type> param_1,FParsedWindowsDynamicRHIConfig *param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  EWindowsRHI EVar3;
  int iVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  wchar_t *pwVar8;
  FOverrideRHI *pFVar9;
  FText *pFVar10;
  Type *pTVar11;
  TOptional<EWindowsRHI> TVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FParsedWindowsDynamicRHIConfig *in_R8;
  wchar_t *pwVar18;
  EWindowsRHI *pEVar19;
  undefined1 local_res8 [8];
  FParsedWindowsDynamicRHIConfig *local_res10;
  FParsedWindowsDynamicRHIConfig *local_res18;
  ulonglong local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined4 local_104 [3];
  FTextFormat local_f8;
  FText local_e8;
  FText local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  uVar16 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  local_res10 = param_2;
  local_res18 = in_R8;
  pwVar8 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar8,L"vulkan");
  if (bVar7) {
    if ((TOptional<ERHIFeatureLevel::Type>)local_118 != param_1) {
      *(undefined4 *)param_1 = 2;
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    uVar16 = 1;
  }
  pwVar8 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar8,L"opengl");
  if (bVar7) {
    if ((TOptional<ERHIFeatureLevel::Type>)local_114 != param_1) {
      *(undefined4 *)param_1 = 3;
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    uVar16 = uVar16 + 1;
  }
  pwVar8 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar8,L"d3d11");
  if (bVar7) {
LAB_145cd7bc0:
    if ((TOptional<ERHIFeatureLevel::Type>)local_110 != param_1) {
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    uVar16 = uVar16 + 1;
  }
  else {
    pwVar8 = FCommandLine::Get();
    bVar7 = FParse::Param(pwVar8,L"dx11");
    if (bVar7) goto LAB_145cd7bc0;
  }
  pwVar8 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar8,L"d3d12");
  if (!bVar7) {
    pwVar8 = FCommandLine::Get();
    bVar7 = FParse::Param(pwVar8,L"dx12");
    if (!bVar7) goto LAB_145cd7c19;
  }
  if ((TOptional<ERHIFeatureLevel::Type>)local_10c != param_1) {
    *(undefined4 *)param_1 = 1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
  }
  uVar16 = uVar16 + 1;
LAB_145cd7c19:
  pFVar9 = GetOverrideRHI();
  if (pFVar9 != (FOverrideRHI *)0x0) {
    if ((TOptional<ERHIFeatureLevel::Type>)local_108 != param_1) {
      *(undefined4 *)param_1 = 4;
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    uVar16 = uVar16 + 1;
  }
  if (1 < uVar16) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"WindowsDynamicRHI",L"RHIOptionsError",
                         L"-d3d12/dx12, -d3d11/dx11, -vulkan, -opengl, and -platformrhi are mutually exclusive options, but more than one was specified on the command-line."
                        );
    FMessageDialog::Open(Ok,pFVar10);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((param_2->DefaultRHI).bIsSet != false) {
    if (*(char *)((longlong)param_1 + 4) == '\0') {
      pEVar19 = GRHISearchOrder;
      EVar3 = (param_2->DefaultRHI).TypedValue;
      do {
        uVar15 = (ulonglong)*pEVar19;
        pFVar17 = (in_R8->RHIConfigs).Elements[uVar15].FeatureLevels.AllocatorInstance.Data;
        iVar4 = (in_R8->RHIConfigs).Elements[uVar15].FeatureLevels.ArrayNum;
        pFVar1 = pFVar17 + (longlong)iVar4 * 4;
        local_res20 = uVar15;
        while( true ) {
          if ((in_R8->RHIConfigs).Elements[uVar15].FeatureLevels.ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar17 == pFVar1) break;
          if (*(EWindowsRHI *)pFVar17 == EVar3) {
            local_104[0] = (undefined4)local_res20;
            bVar7 = true;
            goto LAB_145cd803d;
          }
          pFVar17 = pFVar17 + 4;
        }
        pEVar19 = (EWindowsRHI *)((longlong)pEVar19 + 4);
        in_R8 = local_res18;
      } while ((wchar_t *)pEVar19 != L"Ignore performance mode check");
      bVar7 = false;
LAB_145cd803d:
      if ((TOptional<ERHIFeatureLevel::Type>)local_104 != param_1) {
        if (bVar7) {
          *(undefined4 *)param_1 = local_104[0];
          *(undefined1 *)((longlong)param_1 + 4) = 1;
        }
        else {
          if (*(char *)((longlong)param_1 + 4) == '\0') {
            return (TOptional<EWindowsRHI>)param_1;
          }
          *(undefined1 *)((longlong)param_1 + 4) = 0;
        }
      }
      if ((*(char *)((longlong)param_1 + 4) != '\0') && (4 < (byte)LogRHI._0_1_)) {
        pTVar11 = TOptional<enum_ERHIFeatureLevel::Type>::GetValue(local_res10);
        GetLogName(*pTVar11);
        if ((*(char *)((longlong)param_1 + 4) == '\0') &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
          return TVar12;
        }
        iVar4 = *(int *)param_1;
        if ((((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) && ((iVar4 != 3 && (iVar4 == 4)))) {
          GetOverrideRHI();
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else {
      pTVar11 = TOptional<enum_ERHIFeatureLevel::Type>::GetValue(param_2);
      TVar2 = *pTVar11;
      if ((*(char *)((longlong)param_1 + 4) == '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
        return TVar12;
      }
      bVar7 = FParsedWindowsDynamicRHIConfig::IsFeatureLevelTargeted
                        (in_R8,*(EWindowsRHI *)param_1,TVar2);
      if (!bVar7) {
        pTVar11 = TOptional<enum_ERHIFeatureLevel::Type>::GetValue(param_2);
        TVar2 = *pTVar11;
        if (TVar2 == ES3_1) {
          pwVar8 = L"FeatureLevelES31";
          pwVar18 = L"ES3_1";
        }
        else if (TVar2 == SM5) {
          pwVar8 = L"FeatureLevelSM4";
          pwVar18 = L"SM5";
        }
        else if (TVar2 == SM6) {
          pwVar8 = L"FeatureLevelSM6";
          pwVar18 = L"SM6";
        }
        else {
          pwVar8 = L"FeatureLevelUnknown";
          pwVar18 = L"<unknown>";
        }
        FText::AsLocalizable_Advanced_LocText(&local_e8,L"WindowsDynamicRHI",pwVar8,pwVar18);
        if ((*(char *)((longlong)param_1 + 4) == '\0') &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
          return TVar12;
        }
        pFVar10 = GetTextName(&local_68,*(EWindowsRHI *)param_1);
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_78,L"WindowsDynamicRHI",L"RHINotSupported",
                             L"{0} does not support {1}.");
        pFVar14 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
        local_c8.Type = Text;
        FText::FText((FText *)&local_c8.TextValue,pFVar10);
        if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
          return TVar12;
        }
        local_a8 = 4;
        FText::FText(&local_98,&local_e8);
        if ((local_98.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
          return TVar12;
        }
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_128.AllocatorInstance,2,&local_128.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_128.AllocatorInstance.Data,&local_c8,2);
        local_f8.TextFormatData.Object = (pFVar14->TextFormatData).Object;
        local_f8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_f8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_d8,&local_f8,&local_128);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
        if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar5 = (pFVar10->TextData).Reference;
        if (pIVar5 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar5 + 0x10))();
        }
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        FMessageDialog::Open(Ok,&local_d8);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        pTVar11 = TOptional<enum_ERHIFeatureLevel::Type>::GetValue(param_2);
        GetLogName(*pTVar11);
        if ((*(char *)((longlong)param_1 + 4) == '\0') &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          TVar12 = (TOptional<EWindowsRHI>)(*pcVar6)();
          return TVar12;
        }
        GetLogName(*(EWindowsRHI *)param_1);
        UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
  }
  return (TOptional<EWindowsRHI>)param_1;
}

// ChoosePreferredRHI @ 145cd8160

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EWindowsRHI> __cdecl ChoosePreferredRHI(EWindowsRHI param_1)

{
  bool bVar1;
  int iVar2;
  TOptional<EWindowsRHI> TVar3;
  undefined4 in_register_0000000c;
  TOptional<EWindowsRHI> TVar4;
  ForAnyElementType FVar5;
  uint in_EDX;
  bool local_res8 [8];
  bool local_res10 [8];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  FString local_30;
  
  TVar4._4_4_ = in_register_0000000c;
  TVar4.TypedValue = param_1;
  *(undefined1 *)((longlong)TVar4 + 4) = 0;
  if (1 < in_EDX) {
    return TVar4;
  }
  local_res10[0] = false;
  local_res8[0] = false;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"D3DRHIPreference",L"PreferredRHI",&local_30,&GGameUserSettingsIni);
  if (bVar1) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar5.Data = local_30.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"dx12");
    if (iVar2 == 0) {
      if ((TOptional<EWindowsRHI>)local_48 == TVar4) goto LAB_145cd83ce;
      *(undefined4 *)TVar4 = 1;
    }
    else {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        FVar5.Data = local_30.Data.AllocatorInstance.Data;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"dx11");
      if (iVar2 == 0) {
        TVar3 = (TOptional<EWindowsRHI>)local_44;
LAB_145cd83c3:
        if (TVar3 == TVar4) goto LAB_145cd83ce;
        *(undefined4 *)TVar4 = 0;
      }
      else {
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_30.Data.ArrayNum != 0) {
          FVar5.Data = local_30.Data.AllocatorInstance.Data;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"vulkan");
        if (iVar2 == 0) {
          if ((TOptional<EWindowsRHI>)local_40 == TVar4) goto LAB_145cd83ce;
          *(undefined4 *)TVar4 = 2;
        }
        else {
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_30.Data.ArrayNum != 0) {
            FVar5.Data = local_30.Data.AllocatorInstance.Data;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"opengl");
          if (iVar2 != 0) {
            if (1 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
            goto LAB_145cd83ce;
          }
          if ((TOptional<EWindowsRHI>)local_3c == TVar4) goto LAB_145cd83ce;
          *(undefined4 *)TVar4 = 3;
        }
      }
    }
  }
  else {
    bVar1 = FConfigCacheIni::GetBool
                      (GConfig,L"D3DRHIPreference",L"bUseD3D12InGame",local_res10,
                       &GGameUserSettingsIni);
    if ((!bVar1) ||
       (bVar1 = FConfigCacheIni::GetBool
                          (GConfig,L"D3DRHIPreference",L"bPreferFeatureLevelES31",local_res8,
                           &GGameUserSettingsIni), !bVar1)) goto LAB_145cd83ce;
    if ((4 < (byte)LogRHI._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
       4 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (local_res10[0] == false) {
      if (local_res8[0] == false) goto LAB_145cd83ce;
      TVar3 = (TOptional<EWindowsRHI>)local_34;
      goto LAB_145cd83c3;
    }
    if ((TOptional<EWindowsRHI>)local_38 == TVar4) goto LAB_145cd83ce;
    *(undefined4 *)TVar4 = 1;
  }
  *(undefined1 *)((longlong)TVar4 + 4) = 1;
LAB_145cd83ce:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return TVar4;
}

// CollectShaderBindingTableResources @ 145cd86f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
RHIValidation::CollectShaderBindingTableResources
          (FRayTracingPipelineState *param_1,FShaderBindingTable *param_2,
          FRayTracingLocalShaderBindings *param_3,ERayTracingBindingType param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FRHIRayTracingShader *pFVar6;
  uint local_res20 [2];
  FResourceBinder local_28;
  
  uVar1 = param_3->ShaderIndexInPipeline;
  if (param_4 == HitGroup) {
    uVar4 = 0;
    if ((int)uVar1 < (param_1->HitGroupShaders).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (param_1->HitGroupShaders).AllocatorInstance.Data;
LAB_145cd8815:
    pFVar6 = *(FRHIRayTracingShader **)(pFVar5 + (longlong)(int)uVar1 * 8);
    if (pFVar6 != (FRHIRayTracingShader *)0x0) goto LAB_145cd884b;
  }
  else {
    if (param_4 == CallableShader) {
      uVar4 = 0;
      if ((int)uVar1 < (param_1->CallableShaders).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = (param_1->CallableShaders).AllocatorInstance.Data;
      goto LAB_145cd8815;
    }
    if (param_4 == MissShader) {
      uVar4 = 0;
      if ((int)uVar1 < (param_1->MissShaders).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = (param_1->MissShaders).AllocatorInstance.Data;
      goto LAB_145cd8815;
    }
    pFVar6 = (FRHIRayTracingShader *)0x0;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6018585595129889153>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                     ,0x181,"Shader");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145cd884b:
  local_28.WorkerIndex = param_5;
  local_28.RecordIndex = param_3->RecordIndex;
  local_res20[0] = 0xffffffff;
  local_28.ShaderBindingTable = param_2;
  local_28.RHIShader = pFVar6;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<_RHIValidation::CollectShaderBindingTableResources_::__l2::FResourceBinder_&,FRHIUniformBuffer_*_*,unsigned_int,0>
            (&local_28,(FRHIShader *)pFVar6,local_res20,&param_3->UniformBuffers,(FTracker *)0x0);
  return;
}

// CountLevels @ 145cd8e70

int __cdecl RHIValidation::CountLevels(FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  <lambda_1> local_res8 [32];
  
  if (param_1 == FRHIBreadcrumbNode::Sentinel) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Current != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xa7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 != (FRHIBreadcrumbNode *)0x0) {
    iVar3 = `RHIValidation::CountLevels'::__l2::<lambda_1>::
            operator()<_RHIValidation::CountLevels_::__l2::<lambda_1>_>
                      (local_res8,local_res8,param_1->Parent);
    return iVar3;
  }
  return -1;
}

// DecayResourceAccess @ 145cd99b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ERHIAccess __cdecl
RHIValidation::DecayResourceAccess(ERHIAccess param_1,ERHIAccess param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  ERHIAccess EVar3;
  
  if (param_2 != SRVGraphics) {
    if ((param_2 & param_2 - CPURead) != None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAccess == ERHIAccess::SRVGraphics || (T(RequiredAccess) & (T(RequiredAccess) - 1)) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x5e8,L"Only one required access bit may be set at once.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    if ((param_2 & (BVHWrite|UAVMask)) != None) {
      if (!param_3) {
        param_1 = None;
      }
      return param_1;
    }
    if ((param_2 >> 0xf & 1) != 0) {
      return param_1 & (DSVWrite|DSVRead);
    }
    if ((param_2 >> 9 & 1) != 0) {
      return param_1 & (DSVWrite|DSVRead|CopySrc|SRVMask);
    }
  }
  if ((param_2 & WritableMask) != None) {
    param_1 = param_2;
  }
  return param_1;
}

// DecodeRenderTargetMode @ 145cd9a80

/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DecodeRenderTargetMode
          (ESimpleRenderTargetMode param_1,ERenderTargetLoadAction *param_2,
          ERenderTargetStoreAction *param_3,ERenderTargetLoadAction *param_4,
          ERenderTargetStoreAction *param_5,ERenderTargetLoadAction *param_6,
          ERenderTargetStoreAction *param_7,FExclusiveDepthStencil param_8)

{
  *param_3 = EStore;
  *param_5 = EStore;
  *param_7 = EStore;
  switch(param_1) {
  case EExistingColorAndDepth:
  case EExistingColorAndDepthAndClearStencil:
    *param_2 = ELoad;
    *param_4 = ELoad;
    break;
  case EUninitializedColorAndDepth:
    *param_2 = ENoAction;
    *param_4 = ENoAction;
    break;
  case EUninitializedColorExistingDepth:
    *param_2 = ENoAction;
    *param_4 = ELoad;
    break;
  case EUninitializedColorClearDepth:
    *param_2 = ENoAction;
    *param_4 = EClear;
    break;
  case EClearColorExistingDepth:
    *param_2 = EClear;
    *param_4 = ELoad;
    break;
  case EClearColorAndDepth:
    *param_2 = EClear;
    *param_4 = EClear;
    break;
  case EExistingContents_NoDepthStore:
    *param_2 = ELoad;
    *param_4 = ELoad;
    *param_5 = ENoAction;
    break;
  case EExistingColorAndClearDepth:
    *param_2 = ELoad;
    *param_4 = EClear;
    break;
  default:
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  *param_6 = *param_4;
  if ((param_8.Value & DepthMask) == DepthNop) {
    *param_4 = ENoAction;
  }
  else if ((param_8.Value & DepthMask) == DepthWrite) goto LAB_145cd9b3d;
  *param_5 = ENoAction;
LAB_145cd9b3d:
  if ((param_8.Value & StencilMask) != DepthNop) {
    if ((param_8.Value & StencilMask) != DepthNop_StencilWrite) {
      *param_7 = ENoAction;
    }
    return;
  }
  *param_6 = ENoAction;
  *param_7 = ENoAction;
  return;
}

// GetBindlessConfigurationFromString @ 145cdbd60

bool __cdecl
GetBindlessConfigurationFromString(TStringView<wchar_t> *param_1,ERHIBindlessConfiguration *param_2)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_1->Size;
  if (param_1->Size != 0) {
    iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"Disabled",uVar2);
    if ((iVar1 == 0) && (L"Disabled"[uVar2] == L'\0')) {
      *param_2 = Disabled;
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"RayTracing",uVar2);
    if ((iVar1 == 0) && (L"RayTracing"[uVar2] == L'\0')) {
      *param_2 = RayTracing;
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"Minimal",uVar2);
    if ((iVar1 == 0) && (L"Minimal"[uVar2] == L'\0')) {
      *param_2 = Minimal;
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"All",uVar2);
    if ((iVar1 == 0) && (L"All"[uVar2] == L'\0')) {
      *param_2 = All;
      return true;
    }
  }
  return false;
}

// GetBindlessConfigurationString @ 145cdbe60

wchar_t * __cdecl GetBindlessConfigurationString(ERHIBindlessConfiguration param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Disabled) {
    return L"Disabled";
  }
  if (param_1 == RayTracing) {
    return L"RayTracing";
  }
  if (param_1 == Minimal) {
    return L"Minimal";
  }
  if (param_1 != All) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                       ,0x312,L"Unknown Bindless Configuration: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"All";
}

// GetBufferUsageFlagString @ 145cdbef0

wchar_t * __cdecl GetBufferUsageFlagString(EBufferUsageFlags param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 < (ShaderResource|Static)) {
    if (param_1 != ShaderResource) {
      switch(param_1) {
      case None:
        return L"None";
      case Static:
        return L"Static";
      case Dynamic:
        return L"Dynamic";
      default:
        return L"";
      case Volatile:
        return L"Volatile";
      case UnorderedAccess:
        return L"UnorderedAccess";
      case ByteAddressBuffer:
        return L"ByteAddressBuffer";
      case SourceCopy:
        return L"SourceCopy";
      case DrawIndirect:
        return L"DrawIndirect";
      }
    }
    return L"ShaderResource";
  }
  if (AccelerationStructure < param_1) {
    if (param_1 == VertexBuffer) {
      return L"VertexBuffer";
    }
    if (param_1 != IndexBuffer) {
      pwVar1 = L"StructuredBuffer";
      if (param_1 != StructuredBuffer) {
        pwVar1 = L"";
      }
      return pwVar1;
    }
    return L"IndexBuffer";
  }
  if (param_1 == AccelerationStructure) {
    return L"AccelerationStructure";
  }
  if (param_1 != KeepCPUAccessible) {
    if (param_1 != FastVRAM) {
      pwVar1 = L"";
      if (param_1 == Shared) {
        pwVar1 = L"Shared";
      }
      return pwVar1;
    }
    return L"FastVRAM";
  }
  return L"KeepCPUAccessible";
}

// GetBufferUsageFlagsName @ 145cdc0b0

FString * __cdecl GetBufferUsageFlagsName(FString *__return_storage_ptr__,EBufferUsageFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  size_t sVar5;
  int iVar6;
  wchar_t *_Str;
  uint uVar7;
  FString local_18;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"BUF_None");
    return __return_storage_ptr__;
  }
  uVar7 = 1;
  iVar6 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  do {
    if ((param_1 & Static) != None) {
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      if ((0 < iVar3) && (param_1 != None)) {
        FString::AppendChars(&local_18,L"|",1);
      }
      if (uVar7 < 0x801) {
        if (uVar7 == 0x800) {
          _Str = L"BUF_NNE";
        }
        else if (uVar7 < 0x11) {
          if (uVar7 == 0x10) {
            _Str = L"BUF_ByteAddressBuffer";
          }
          else if (uVar7 == 0) {
LAB_145cdc2e3:
            _Str = L"BUF_None";
          }
          else if (uVar7 == 1) {
            _Str = L"BUF_Static";
          }
          else if (uVar7 == 2) {
            _Str = L"BUF_Dynamic";
          }
          else if (uVar7 == 4) {
            _Str = L"BUF_Volitile";
          }
          else {
            if (uVar7 != 8) goto LAB_145cdc2bd;
            _Str = L"BUF_UnorderedAccess";
          }
        }
        else if (uVar7 == 0x20) {
          _Str = L"BUF_SourceCopy";
        }
        else if (uVar7 == 0x80) {
          _Str = L"BUF_DrawIndirect";
        }
        else if (uVar7 == 0x100) {
          _Str = L"BUF_ShaderResource";
        }
        else if (uVar7 == 0x200) {
          _Str = L"BUF_KeepCPUAccessible";
        }
        else {
          if (uVar7 != 0x400) goto LAB_145cdc2bd;
          _Str = L"BUF_FastVRAM";
        }
      }
      else if (uVar7 < 0x20001) {
        if (uVar7 == 0x20000) {
          _Str = L"BUF_MultiGPUAllocate";
        }
        else if (uVar7 == 0x1000) {
          _Str = L"BUF_Shared";
        }
        else if (uVar7 == 0x2000) {
          _Str = L"BUF_AccelerationStructure";
        }
        else if (uVar7 == 0x4000) {
          _Str = L"BUF_VertexBuffer";
        }
        else if (uVar7 == 0x8000) {
          _Str = L"BUF_IndexBuffer";
        }
        else {
          if (uVar7 != 0x10000) goto LAB_145cdc2bd;
          _Str = L"BUF_StructuredBuffer";
        }
      }
      else if (uVar7 == 0x40000) {
        _Str = L"BUF_MultiGPUGraphIgnore";
      }
      else if (uVar7 == 0x80008) {
        _Str = L"BUF_RayTracingScratch";
      }
      else if (uVar7 == 0x100000) {
        _Str = L"BUF_NullResource";
      }
      else if (uVar7 == 0x200000) {
        _Str = L"BUF_UniformBuffer";
      }
      else {
        if (uVar7 != 0x400000) {
LAB_145cdc2bd:
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                             ,0x13a,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FString *)(*pcVar1)();
            return pFVar4;
          }
          goto LAB_145cdc2e3;
        }
        _Str = L"BUF_ReservedResource";
      }
      sVar5 = wcslen(_Str);
      FString::AppendChars(&local_18,_Str,(int)sVar5);
      iVar6 = local_18.Data.ArrayNum;
    }
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    param_1 = param_1 >> 1;
    if (param_1 == None) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = iVar6;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetES31ModuleName @ 145cdc470

wchar_t * __cdecl GetES31ModuleName(ERHIInterfaceType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != D3D11) {
    if (param_1 == D3D12) {
      return L"ES31_D3D12RHI";
    }
    if (param_1 == Vulkan) {
      return L"ES31_VulkanRHI";
    }
    if (param_1 == OpenGL) {
      return L"ES31_OpenGLDrv";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"ES31_D3D11RHI";
}

// GetFeatureLevelFromName @ 145cdc4f0

bool __cdecl GetFeatureLevelFromName(FString *param_1,Type *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str2;
  Type TVar3;
  wchar_t **ppwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  ppwVar4 = FeatureLevelNames;
  TVar3 = ES2_REMOVED;
  while( true ) {
    if (iVar1 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar2 = wcscmp(*ppwVar4,_Str2);
    if (iVar2 == 0) break;
    TVar3 = TVar3 + ES3_1;
    ppwVar4 = ppwVar4 + 1;
    if (SM6 < TVar3) {
      *param_2 = Num;
      return false;
    }
  }
  *param_2 = TVar3;
  return true;
}

// GetFeatureLevelFromName @ 145cdc580

bool __cdecl GetFeatureLevelFromName(FName param_1,Type *param_2)

{
  int iVar1;
  ForAnyElementType _Str2;
  Type TVar2;
  bool bVar3;
  wchar_t **ppwVar4;
  FName local_res8;
  FString local_28;
  
  local_res8 = param_1;
  FName::ToString(&local_res8,&local_28);
  ppwVar4 = FeatureLevelNames;
  TVar2 = ES2_REMOVED;
  while( true ) {
    _Str2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      _Str2.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar1 = wcscmp(*ppwVar4,(wchar_t *)_Str2.Data);
    if (iVar1 == 0) break;
    TVar2 = TVar2 + ES3_1;
    ppwVar4 = ppwVar4 + 1;
    if (SM6 < TVar2) {
      bVar3 = false;
      TVar2 = Num;
LAB_145cdc5f1:
      *param_2 = TVar2;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return bVar3;
    }
  }
  bVar3 = true;
  goto LAB_145cdc5f1;
}

// GetFeatureLevelName @ 145cdc620

void __cdecl GetFeatureLevelName(Type param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res18 [2];
  
  if (param_1 < Num) {
    pFVar3 = FName::FName(local_res18,FeatureLevelNames[(int)param_1]);
    *param_2 = *pFVar3;
    return;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("InFeatureLevel < (sizeof(UEArrayCountHelper(FeatureLevelNames)) - 1)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0xb7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = InvalidFeatureLevelName;
  return;
}

// GetFeatureLevelName @ 145cdc690

void __cdecl GetFeatureLevelName(Type param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < Num) {
    FString::operator=(param_2,FeatureLevelNames[(int)param_1]);
    return;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("InFeatureLevel < (sizeof(UEArrayCountHelper(FeatureLevelNames)) - 1)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0xaa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FString::operator=(param_2,L"InvalidFeatureLevel");
  return;
}

// GetGPUInfo @ 145cdc7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl GetGPUInfo(FWindowsGPUInfo *param_1)

{
  FString *this;
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  int iVar15;
  undefined8 *puVar16;
  FString *pFVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auStack_2c8 [32];
  FString local_2a8;
  longlong *local_298 [2];
  wchar_t local_288 [128];
  uint local_188;
  uint local_184;
  ulonglong local_178;
  undefined8 local_158 [34];
  ulonglong local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  memset(local_288,0,0x130);
  iVar20 = 0;
  local_298[0] = (longlong *)0x0;
  iVar15 = CreateDXGIFactory1(&_GUID_770aae78_f26f_4dba_a829_253c83d1b387,local_298);
  if (-1 < iVar15) {
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    while( true ) {
      plVar12 = local_298[0];
      FVar11.Data = local_2a8.Data.AllocatorInstance.Data;
      pcVar1 = *(code **)(*local_298[0] + 0x38);
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (**(code **)(*(longlong *)FVar11.Data + 0x10))();
      }
      iVar15 = (*pcVar1)(plVar12,iVar20,&local_2a8);
      if (iVar15 == -0x7785fffe) break;
      if ((local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
         (((**(code **)(*(longlong *)local_2a8.Data.AllocatorInstance.Data + 0x40))
                     (local_2a8.Data.AllocatorInstance.Data,local_158), local_178 < local_48 ||
          (iVar20 == 0)))) {
        lVar19 = 2;
        puVar13 = local_158;
        pwVar14 = local_288;
        do {
          pwVar18 = pwVar14;
          puVar16 = puVar13;
          uVar7 = puVar16[1];
          uVar8 = puVar16[2];
          uVar9 = puVar16[3];
          *(undefined8 *)pwVar18 = *puVar16;
          *(undefined8 *)(pwVar18 + 4) = uVar7;
          uVar7 = puVar16[4];
          uVar10 = puVar16[5];
          *(undefined8 *)(pwVar18 + 8) = uVar8;
          *(undefined8 *)(pwVar18 + 0xc) = uVar9;
          uVar8 = puVar16[6];
          uVar9 = puVar16[7];
          *(undefined8 *)(pwVar18 + 0x10) = uVar7;
          *(undefined8 *)(pwVar18 + 0x14) = uVar10;
          uVar7 = puVar16[8];
          uVar10 = puVar16[9];
          *(undefined8 *)(pwVar18 + 0x18) = uVar8;
          *(undefined8 *)(pwVar18 + 0x1c) = uVar9;
          uVar8 = puVar16[10];
          uVar9 = puVar16[0xb];
          *(undefined8 *)(pwVar18 + 0x20) = uVar7;
          *(undefined8 *)(pwVar18 + 0x24) = uVar10;
          uVar7 = puVar16[0xc];
          uVar10 = puVar16[0xd];
          *(undefined8 *)(pwVar18 + 0x28) = uVar8;
          *(undefined8 *)(pwVar18 + 0x2c) = uVar9;
          uVar8 = puVar16[0xe];
          uVar9 = puVar16[0xf];
          *(undefined8 *)(pwVar18 + 0x30) = uVar7;
          *(undefined8 *)(pwVar18 + 0x34) = uVar10;
          *(undefined8 *)(pwVar18 + 0x38) = uVar8;
          *(undefined8 *)(pwVar18 + 0x3c) = uVar9;
          lVar19 = lVar19 + -1;
          puVar13 = puVar16 + 0x10;
          pwVar14 = pwVar18 + 0x40;
        } while (lVar19 != 0);
        uVar7 = puVar16[0x11];
        uVar8 = puVar16[0x12];
        uVar9 = puVar16[0x13];
        *(undefined8 *)(pwVar18 + 0x40) = puVar16[0x10];
        *(undefined8 *)(pwVar18 + 0x44) = uVar7;
        uVar3 = *(undefined4 *)(puVar16 + 0x14);
        uVar4 = *(undefined4 *)((longlong)puVar16 + 0xa4);
        uVar5 = *(undefined4 *)(puVar16 + 0x15);
        uVar6 = *(undefined4 *)((longlong)puVar16 + 0xac);
        *(undefined8 *)(pwVar18 + 0x48) = uVar8;
        *(undefined8 *)(pwVar18 + 0x4c) = uVar9;
        *(undefined4 *)(pwVar18 + 0x50) = uVar3;
        *(undefined4 *)(pwVar18 + 0x52) = uVar4;
        *(undefined4 *)(pwVar18 + 0x54) = uVar5;
        *(undefined4 *)(pwVar18 + 0x56) = uVar6;
      }
      iVar20 = iVar20 + 1;
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_2a8.Data.AllocatorInstance.Data + 0x10))();
    }
  }
  this = &param_1->AdapterName;
  param_1->VendorId = local_188;
  param_1->DeviceId = local_184;
  param_1->DedicatedVideoMemory = local_178;
  FString::operator=(this,local_288);
  if ((param_1->AdapterName).Data.ArrayNum < 2) {
    pFVar17 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_2a8);
    if (this != pFVar17) {
      pFVar2 = (this->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->AdapterName).Data.ArrayNum = (pFVar17->Data).ArrayNum;
      (param_1->AdapterName).Data.ArrayMax = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_298[0] != (longlong *)0x0) {
    (**(code **)(*local_298[0] + 0x10))();
  }
  return;
}

// GetLogName @ 145cdcad0

wchar_t * __cdecl GetLogName(EWindowsRHI param_1)

{
  FOverrideRHI *pFVar1;
  
  if (param_1 == D3D11) {
    return L"D3D11";
  }
  if (param_1 == D3D12) {
    return L"D3D12";
  }
  if (param_1 == Vulkan) {
    return L"Vulkan";
  }
  if (param_1 != OpenGL) {
    if (param_1 != Imported) {
      return L"<unknown>";
    }
    pFVar1 = GetOverrideRHI();
    if ((pFVar1->RHIName).Data.ArrayNum != 0) {
      return (wchar_t *)(pFVar1->RHIName).Data.AllocatorInstance.Data;
    }
    return L"";
  }
  return L"OpenGL";
}

// GetLogName @ 145cdcb50

wchar_t * __cdecl GetLogName(Type param_1)

{
  if (param_1 == ES3_1) {
    return L"ES3_1";
  }
  if (param_1 != SM5) {
    if (param_1 != SM6) {
      return L"<unknown>";
    }
    return L"SM6";
  }
  return L"SM5";
}

// GetOverrideRHI @ 145cdcea0

FOverrideRHI * __cdecl GetOverrideRHI(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FOverrideRHI *pFVar5;
  FName *pFVar6;
  FConfigCacheIni *this;
  ForAnyElementType FVar7;
  ForAnyElementType _Str2;
  Type TVar8;
  FOverrideRHI *pFVar9;
  wchar_t **ppwVar10;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (bHasChecked) {
    return Override;
  }
  pFVar9 = (FOverrideRHI *)0x0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bHasChecked = true;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,L"PlatformRHI=",&local_28,true,(wchar_t **)0x0);
  if (bVar2) {
    pFVar5 = operator_new(0x28);
    Override = pFVar9;
    if (pFVar5 != (FOverrideRHI *)0x0) {
      (pFVar5->ModuleName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->ModuleName).Data.ArrayNum = 0;
      (pFVar5->ModuleName).Data.ArrayMax = 0;
      (pFVar5->RHIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->RHIName).Data.ArrayNum = 0;
      (pFVar5->RHIName).Data.ArrayMax = 0;
      Override = pFVar5;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar6 = FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    this = FConfigCacheIni::ForPlatform(*pFVar6);
    FConfigCacheIni::GetString(this,L"ImportedRHI",L"ModuleName",&Override->ModuleName,&GEngineIni);
    FConfigCacheIni::GetString(this,L"ImportedRHI",L"ModuleName",&Override->RHIName,&GEngineIni);
    FConfigCacheIni::GetString(this,L"ImportedRHI",L"RHIName",&Override->RHIName,&GEngineIni);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FConfigCacheIni::GetString(this,L"ImportedRHI",L"FeatureLevel",&local_38,&GEngineIni);
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
    pFVar5 = Override;
    ppwVar10 = FeatureLevelNames;
    iVar1 = local_38.Data.ArrayNum;
    do {
      TVar8 = (Type)pFVar9;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        _Str2.Data = FVar7.Data;
      }
      iVar3 = wcscmp(*ppwVar10,(wchar_t *)_Str2.Data);
      if (iVar3 == 0) goto LAB_145cdd049;
      pFVar9 = (FOverrideRHI *)(ulonglong)(TVar8 + ES3_1);
      ppwVar10 = ppwVar10 + 1;
    } while (TVar8 + ES3_1 < 5);
    TVar8 = Num;
LAB_145cdd049:
    pFVar5->FeatureLevel = TVar8;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = Override;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar9;
}

// GetPreferredFeatureLevel @ 145cdd0a0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<ERHIFeatureLevel::Type> __cdecl
GetPreferredFeatureLevel(EWindowsRHI param_1,FParsedWindowsDynamicRHIConfig *param_2,bool *param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  TOptional<ERHIFeatureLevel::Type> TVar7;
  undefined4 in_register_0000000c;
  TOptional<ERHIFeatureLevel::Type> TVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  longlong lVar11;
  bool *in_R9;
  bool local_res8 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  wchar_t *local_50;
  ulong64 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  TVar8._4_4_ = in_register_0000000c;
  TVar8.TypedValue = param_1;
  *in_R9 = false;
  lVar11 = 0;
  *(undefined1 *)((longlong)TVar8 + 4) = 0;
  cVar2 = ForceD3D11_ES31.TypedValue;
  if (ForceD3D11_ES31.bIsSet == false) {
    local_50 = (wchar_t *)0x0;
    local_48 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    GetGPUInfo((FWindowsGPUInfo *)&local_50);
    cVar2 = IsGPUInHardwareListForD3D11_ES31((FWindowsGPUInfo *)&local_50,L"DeviceForceRHIList");
    if (((bool)cVar2) && (4 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_Forced_feature__151125af0,
                 (FLogCategoryBase *)&LogRHI);
    }
    ForceD3D11_ES31.bIsSet = true;
    ForceD3D11_ES31.TypedValue = (bool)cVar2;
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  if (cVar2 != '\0') {
    *in_R9 = true;
    if ((TOptional<ERHIFeatureLevel::Type>)local_68 != TVar8) {
      *(undefined4 *)TVar8 = 1;
      *(undefined1 *)((longlong)TVar8 + 4) = 1;
    }
    goto LAB_145cdd39a;
  }
  local_50 = (wchar_t *)0x0;
  local_48 = 0;
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,L"D3DRHIPreference",L"PreferredFeatureLevel",(FString *)&local_50,
                     &GGameUserSettingsIni);
  bVar10 = false;
  if (bVar3) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar9 = (FScriptContainerElement *)L"";
    if ((int)local_48 != 0) {
      pFVar9 = (FScriptContainerElement *)local_50;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar9,L"sm5");
    if (iVar6 == 0) {
      if ((TOptional<ERHIFeatureLevel::Type>)local_64 != TVar8) {
        *(undefined4 *)TVar8 = 3;
LAB_145cdd383:
        *(undefined1 *)((longlong)TVar8 + 4) = 1;
      }
    }
    else {
      pFVar9 = (FScriptContainerElement *)L"";
      if ((int)local_48 != 0) {
        pFVar9 = (FScriptContainerElement *)local_50;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar9,L"sm6");
      if (iVar6 == 0) {
        if ((TOptional<ERHIFeatureLevel::Type>)local_60 != TVar8) {
          *(undefined4 *)TVar8 = 4;
          goto LAB_145cdd383;
        }
      }
      else {
        pFVar9 = (FScriptContainerElement *)L"";
        if ((int)local_48 != 0) {
          pFVar9 = (FScriptContainerElement *)local_50;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar9,L"es31");
        if (iVar6 == 0) {
          TVar7 = (TOptional<ERHIFeatureLevel::Type>)local_5c;
          goto LAB_145cdd378;
        }
        if (1 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
    }
  }
  else {
    bVar3 = FParsedWindowsDynamicRHIConfig::IsFeatureLevelTargeted
                      ((FParsedWindowsDynamicRHIConfig *)param_3,(EWindowsRHI)param_2,ES3_1);
    if (bVar3) {
      local_res8[0] = false;
      bVar3 = FConfigCacheIni::GetBool
                        (GConfig,L"D3DRHIPreference",L"bPreferFeatureLevelES31",local_res8,
                         &GGameUserSettingsIni);
      pTVar1 = CVarIgnorePerformanceModeCheck.Ref;
      if ((bVar3) && (4 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        bVar5 = false;
      }
      else {
        bVar5 = false;
        if (!bVar3) {
          bVar4 = IsInParallelGameThread();
          if ((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) {
            lVar11 = 1;
          }
          if (pTVar1->ShadowedValue[lVar11] == false) {
            bVar5 = ShouldDefaultToPerformanceMode(in_R9);
          }
        }
      }
      if ((local_res8[0] != false) || (bVar5 != false)) {
        TVar7 = (TOptional<ERHIFeatureLevel::Type>)local_58;
        bVar10 = !bVar3;
LAB_145cdd378:
        if (TVar7 != TVar8) {
          *(undefined4 *)TVar8 = 1;
          goto LAB_145cdd383;
        }
      }
    }
  }
  if ((FScriptContainerElement *)local_50 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50);
  }
  if (!bVar10) {
    return TVar8;
  }
LAB_145cdd39a:
  FConfigCacheIni::SetBool
            (GConfig,L"D3DRHIPreference",L"bPreferFeatureLevelES31",true,&GGameUserSettingsIni);
  if (*in_R9 != false) {
    FConfigCacheIni::SetString
              (GConfig,L"D3DRHIPreference",L"PreferredRHI",L"dx11",&GGameUserSettingsIni);
  }
  return TVar8;
}

// GetRHIAccessName @ 145cdd470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FString * __cdecl GetRHIAccessName(FString *__return_storage_ptr__,ERHIAccess param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  size_t sVar5;
  int iVar6;
  wchar_t *_Str;
  uint uVar7;
  FString local_18;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
  uVar7 = 1;
  iVar6 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  do {
    if ((param_1 & CPURead) != None) {
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      if ((0 < iVar3) && (param_1 != None)) {
        FString::AppendChars(&local_18,L"|",1);
      }
      if (uVar7 < 0x201) {
        if (uVar7 == 0x200) {
          _Str = L"DSVRead";
        }
        else if (uVar7 < 0x11) {
          if (uVar7 == 0x10) {
            _Str = L"SRVCompute";
          }
          else if (uVar7 == 0) {
LAB_145cdd680:
            _Str = L"Unknown";
          }
          else if (uVar7 == 1) {
            _Str = L"CPURead";
          }
          else if (uVar7 == 2) {
            _Str = L"Present";
          }
          else if (uVar7 == 4) {
            _Str = L"IndirectArgs";
          }
          else {
            if (uVar7 != 8) goto LAB_145cdd65a;
            _Str = L"VertexOrIndexBuffer";
          }
        }
        else if (uVar7 == 0x20) {
          _Str = L"SRVGraphicsPixel";
        }
        else if (uVar7 == 0x40) {
          _Str = L"SRVGraphicsNonPixel";
        }
        else if (uVar7 == 0x80) {
          _Str = L"CopySrc";
        }
        else {
          if (uVar7 != 0x100) goto LAB_145cdd65a;
          _Str = L"ResolveSrc";
        }
      }
      else if (uVar7 < 0x8001) {
        if (uVar7 == 0x8000) {
          _Str = L"DSVWrite";
        }
        else if (uVar7 == 0x400) {
          _Str = L"UAVCompute";
        }
        else if (uVar7 == 0x800) {
          _Str = L"UAVGraphics";
        }
        else if (uVar7 == 0x1000) {
          _Str = L"RTV";
        }
        else if (uVar7 == 0x2000) {
          _Str = L"CopyDest";
        }
        else {
          if (uVar7 != 0x4000) goto LAB_145cdd65a;
          _Str = L"ResolveDst";
        }
      }
      else if (uVar7 == 0x10000) {
        _Str = L"BVHRead";
      }
      else if (uVar7 == 0x20000) {
        _Str = L"BVHWrite";
      }
      else if (uVar7 == 0x40000) {
        _Str = L"Discard";
      }
      else {
        if (uVar7 != 0x80000) {
LAB_145cdd65a:
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                             ,0x1d8,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FString *)(*pcVar1)();
            return pFVar4;
          }
          goto LAB_145cdd680;
        }
        _Str = L"ShadingRateSource";
      }
      sVar5 = wcslen(_Str);
      FString::AppendChars(&local_18,_Str,(int)sVar5);
      iVar6 = local_18.Data.ArrayNum;
    }
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    param_1 = param_1 >> 1;
    if (param_1 == None) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = iVar6;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetRHIPipelineName @ 145cdd710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl GetRHIPipelineName(FString *__return_storage_ptr__,ERHIPipeline param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  int iVar7;
  wchar_t *_Str;
  int iVar8;
  FString local_18;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  iVar8 = 0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayMax = 0;
  iVar7 = iVar8;
  do {
    if ((param_1 & Graphics) != None) {
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      if ((0 < iVar4) && (param_1 != None)) {
        FString::AppendChars(&local_18,L"|",1);
      }
      cVar2 = '\x01' << ((byte)iVar8 & 0x1f);
      if (cVar2 == '\0') {
        _Str = L"None";
      }
      else {
        if (cVar2 != '\x01') {
          if (cVar2 == '\x02') {
            _Str = L"AsyncCompute";
            goto LAB_145cdd7e8;
          }
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                             ,0x20b,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FString *)(*pcVar1)();
            return pFVar5;
          }
        }
        _Str = L"Graphics";
      }
LAB_145cdd7e8:
      sVar6 = wcslen(_Str);
      FString::AppendChars(&local_18,_Str,(int)sVar6);
      iVar7 = local_18.Data.ArrayNum;
    }
    iVar8 = iVar8 + 1;
    param_1 = param_1 >> 1;
    if (param_1 == None) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = iVar7;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetReasonString_AccessDuringTransition @ 145cdd850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
RHIValidation::GetReasonString_AccessDuringTransition
          (FString *__return_storage_ptr__,FResource *param_1,FSubresourceIndex *param_2,
          FState *param_3,FState *param_4,void *param_5,void *param_6)

{
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
    ::FString::PrintfImpl(&local_88,L"\"%s\" (0x%p) (Whole Resource)");
  }
  else {
    ::FString::PrintfImpl(&local_88,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
  }
  if ((param_5 == (void *)0x0) && (param_6 == (void *)0x0)) {
    ::FString::FString(&local_98,
                       L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                      );
  }
  else if (GRHIValidationPrintHumanReadableCallStack == false) {
    ::FString::PrintfImpl
              (&local_98,
               L"    --- Callstack backtraces for the transition which has not been completed (resolve in the Watch window):\n        RHICreateTransition: (void**)0x%p,32\n        RHIBeginTransitions: (void**)0x%p,32\n"
              );
  }
  else {
    ResolveAndFormatCallstack(&local_68,param_6);
    ResolveAndFormatCallstack(&local_78,param_5);
    ::FString::PrintfImpl
              (&local_98,
               L"    --- Callstack backtraces for the transition which has not been completed:\n        RHICreateTransition: %s\n        RHIBeginTransitions: %s\n"
              );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  GetRHIPipelineName(&local_28,param_4->Pipelines);
  GetRHIPipelineName(&local_38,param_3->Pipelines);
  GetRHIAccessName(&local_48,param_4->Access);
  GetRHIAccessName(&local_58,param_3->Access);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to access resource %s whilst an asynchronous resource transition is in progress. A call to RHIEndTransitions() must be made before the resource can be accessed again.\n\n    --- Pending access states for this resource are: %s\n    --- Attempted access states are:                 %s\n    --- Pending pipelines for this resource are:     %s\n    --- Attempted pipelines are:                     %s\n%s\n\n--------------------------------------------------------------------\n\n\n"
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetResourceDebugName @ 145cddb20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
RHIValidation::GetResourceDebugName
          (FString *__return_storage_ptr__,FResource *param_1,FSubresourceIndex *param_2)

{
  if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"\"%s\" (0x%p) (Whole Resource)");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
  return __return_storage_ptr__;
}

// GetResourceTransitionFlagsName @ 145cddbc0

/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __cdecl
GetResourceTransitionFlagsName(FString *__return_storage_ptr__,EResourceTransitionFlags param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  int iVar7;
  wchar_t *_Str;
  int iVar8;
  FString local_18;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  iVar8 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  iVar7 = iVar8;
  do {
    if ((param_1 & MaintainCompression) != None) {
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      if ((0 < iVar4) && (param_1 != None)) {
        FString::AppendChars(&local_18,L"|",1);
      }
      cVar2 = '\x01' << ((byte)iVar8 & 0x1f);
      if (cVar2 == '\0') {
LAB_145cddc8f:
        _Str = L"None";
      }
      else if (cVar2 == '\x01') {
        _Str = L"MaintainCompression";
      }
      else {
        if (cVar2 != '\x02') {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                             ,0x1f8,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FString *)(*pcVar1)();
            return pFVar5;
          }
          goto LAB_145cddc8f;
        }
        _Str = L"IgnoreAfterState";
      }
      sVar6 = wcslen(_Str);
      FString::AppendChars(&local_18,_Str,(int)sVar6);
      iVar7 = local_18.Data.ArrayNum;
    }
    iVar8 = iVar8 + 1;
    param_1 = param_1 >> 1;
    if (param_1 == None) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = iVar7;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetSelectedDynamicRHIModuleName @ 145cddd10

wchar_t * __cdecl GetSelectedDynamicRHIModuleName(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ERHIInterfaceType EVar3;
  int iVar4;
  wchar_t *pwVar5;
  IDynamicRHIModule *pIVar6;
  FModuleManager *this;
  FName *pFVar7;
  Type local_res10 [2];
  wchar_t *local_res18;
  FName local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("FApp::CanEverRender()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                         ,0x4ef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar1)();
    return pwVar5;
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    if ((GLoadedRHIModuleName == (wchar_t *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!!GLoadedRHIModuleName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                           ,0x4f3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar1)();
      return pwVar5;
    }
    if (GMaxRHIFeatureLevel != ES3_1) {
      return GLoadedRHIModuleName;
    }
    EVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    pwVar5 = GetES31ModuleName(EVar3);
    return pwVar5;
  }
  pIVar6 = LoadDynamicRHIModule(local_res10,&local_res18);
  if ((pIVar6 == (IDynamicRHIModule *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("DynamicRHIModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar1)();
    return pwVar5;
  }
  if ((local_res18 == (wchar_t *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("RHIModuleName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                         ,0x4fc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar1)();
    return pwVar5;
  }
  if (param_1) {
    this = FModuleManager::Get();
    pFVar7 = FName::FName(&local_res20,local_res18);
    FModuleManager::UnloadModule(this,*pFVar7,false,true);
  }
  if (local_res10[0] == ES3_1) {
    iVar4 = wcscmp(local_res18,L"D3D11RHI");
    if (iVar4 == 0) {
      return L"ES31_D3D11RHI";
    }
    iVar4 = wcscmp(local_res18,L"D3D12RHI");
    if (iVar4 == 0) {
      return L"ES31_D3D12RHI";
    }
    iVar4 = wcscmp(local_res18,L"VulkanRHI");
    if (iVar4 == 0) {
      return L"ES31_VulkanRHI";
    }
    iVar4 = wcscmp(local_res18,L"OpenGLDrv");
    if (iVar4 == 0) {
      return L"ES31_OpenGLDrv";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                       ,0xd9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar1)();
      return pwVar5;
    }
  }
  return local_res18;
}

// GetShaderCodeResourceBindingTypeName @ 145cde110

wchar_t * __cdecl GetShaderCodeResourceBindingTypeName(EShaderCodeResourceBindingType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Invalid:
    return L"Invalid";
  case SamplerState:
    return L"SamplerState";
  case Texture2D:
    return L"Texture2D";
  case Texture2DArray:
    return L"Texture2DArray";
  case Texture2DMS:
    return L"Texture2DMS";
  case Texture3D:
    return L"Texture3D";
  case TextureCube:
    return L"TextureCube";
  case TextureCubeArray:
    return L"TextureCubeArray";
  case TextureMetadata:
    return L"TextureMetadata";
  case Buffer:
    return L"Buffer";
  case StructuredBuffer:
    return L"StructuredBuffer";
  case ByteAddressBuffer:
    return L"ByteAddressBuffer";
  case RaytracingAccelerationStructure:
    return L"RaytracingAccelerationStructure";
  case RWTexture2D:
    return L"RWTexture2D";
  case RWTexture2DArray:
    return L"RWTexture2DArray";
  case RWTexture3D:
    return L"RWTexture3D";
  case RWTextureCube:
    return L"RWTextureCube";
  case RWTextureMetadata:
    return L"RWTextureMetadata";
  case RWBuffer:
    return L"RWBuffer";
  case RWStructuredBuffer:
    return L"RWStructuredBuffer";
  case RWByteAddressBuffer:
    return L"RWByteAddressBuffer";
  case RasterizerOrderedTexture2D:
    return L"RasterizerOrderedTexture2D";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0x2e7,L"Missing EShaderCodeResourceBindingType %d");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// GetShadingPathFromName @ 145cde320

bool __cdecl GetShadingPathFromName(FName param_1,Type *param_2)

{
  Type TVar1;
  FName *pFVar2;
  
  TVar1 = Deferred;
  pFVar2 = ShadingPathNames;
  do {
    if (*pFVar2 == param_1) {
      *param_2 = TVar1;
      return true;
    }
    TVar1 = TVar1 + Forward;
    pFVar2 = pFVar2 + 1;
  } while (TVar1 < Num);
  *param_2 = Num;
  return false;
}

// GetShadingPathName @ 145cde360

void __cdecl GetShadingPathName(Type param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < Num) {
    *param_2 = ShadingPathNames[(int)param_1];
    return;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("InShadingPath < (sizeof(UEArrayCountHelper(ShadingPathNames)) - 1)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0x129,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_2 = InvalidShadingPathName;
  return;
}

// GetShadingPathName @ 145cde3d0

void __cdecl GetShadingPathName(Type param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((ulonglong)(longlong)(int)param_1 < 3) {
    FName::ToString(ShadingPathNames + (int)param_1,param_2);
    return;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("InShadingPath < (sizeof(UEArrayCountHelper(ShadingPathNames)) - 1)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                     ,0x11c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FString::operator=(param_2,L"InvalidShadingPath");
  return;
}

// GetTextName @ 145cde4a0

FText * __cdecl GetTextName(FText *__return_storage_ptr__,EWindowsRHI param_1)

{
  FOverrideRHI *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (param_1 == D3D11) {
    pwVar3 = L"DirectX 11";
    pwVar2 = L"D3D11";
  }
  else if (param_1 == D3D12) {
    pwVar3 = L"DirectX 12";
    pwVar2 = L"D3D12";
  }
  else if (param_1 == Vulkan) {
    pwVar3 = L"Vulkan";
    pwVar2 = L"Vulkan";
  }
  else if (param_1 == OpenGL) {
    pwVar3 = L"OpenGL";
    pwVar2 = L"OpenGL";
  }
  else {
    if (param_1 == Imported) {
      pFVar1 = GetOverrideRHI();
      FText::FromString(__return_storage_ptr__,&pFVar1->RHIName);
      return __return_storage_ptr__;
    }
    pwVar3 = L"<Unknown>";
    pwVar2 = L"UnknownRHI";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"WindowsDynamicRHI",pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// GetTextureCreateFlagString @ 145cde5b0

wchar_t * __cdecl GetTextureCreateFlagString(ETextureCreateFlags param_1)

{
  wchar_t *pwVar1;
  
  if (UAV < param_1) {
    if (NoFastClear < param_1) {
      if (ReduceMemoryWithTilingMode < param_1) {
        if (param_1 == AtomicCompatible) {
          return L"AtomicCompatible";
        }
        if (param_1 != External) {
          pwVar1 = L"MultiGPUGraphIgnore";
          if (param_1 != MultiGPUGraphIgnore) {
            pwVar1 = L"";
          }
          return pwVar1;
        }
        return L"External";
      }
      if (param_1 == ReduceMemoryWithTilingMode) {
        return L"ReduceMemoryWithTilingMode";
      }
      if (param_1 != DepthStencilResolveTarget) {
        if (param_1 == Streamable) {
          return L"Streamable";
        }
        if (param_1 != NoFastClearFinalize) {
          pwVar1 = L"";
          if (param_1 == Atomic64Compatible) {
            pwVar1 = L"Atomic64Compatible";
          }
          return pwVar1;
        }
        return L"NoFastClearFinalize";
      }
      return L"DepthStencilResolveTarget";
    }
    if (param_1 == NoFastClear) {
      return L"NoFastClear";
    }
    if (HideInVisualizeTexture < param_1) {
      if (param_1 == Virtual) {
        return L"Virtual";
      }
      if (param_1 != TargetArraySlicesIndependently) {
        pwVar1 = L"";
        if (param_1 == Shared) {
          pwVar1 = L"Shared";
        }
        return pwVar1;
      }
      return L"TargetArraySlicesIndependently";
    }
    if (param_1 == HideInVisualizeTexture) {
      return L"HideInVisualizeTexture";
    }
    if (param_1 != Presentable) {
      if (param_1 == CPUReadback) {
        return L"CPUReadback";
      }
      if (param_1 != OfflineProcessed) {
        pwVar1 = L"";
        if (param_1 == FastVRAM) {
          pwVar1 = L"FastVRAM";
        }
        return pwVar1;
      }
      return L"OfflineProcessed";
    }
    return L"Presentable";
  }
  if (param_1 == UAV) {
    return L"UAV";
  }
  if (param_1 < (VideoDecode|RenderTargetable)) {
    if (param_1 != VideoDecode) {
      switch(param_1) {
      case None:
        return L"None";
      case RenderTargetable:
        return L"RenderTargetable";
      case ResolveTargetable:
        return L"ResolveTargetable";
      default:
        return L"";
      case DepthStencilTargetable:
        return L"DepthStencilTargetable";
      case ShaderResource:
        return L"ShaderResource";
      case SRGB:
        return L"SRGB";
      case CPUWritable:
        return L"CPUWritable";
      case NoTiling:
        return L"NoTiling";
      }
    }
    return L"VideoDecode";
  }
  if (Memoryless < param_1) {
    if (param_1 == FastVRAMPartialAlloc) {
      return L"FastVRAMPartialAlloc";
    }
    if (param_1 != DisableSRVCreation) {
      pwVar1 = L"";
      if (param_1 == DisableDCC) {
        pwVar1 = L"DisableDCC";
      }
      return pwVar1;
    }
    return L"DisableSRVCreation";
  }
  if (param_1 == Memoryless) {
    return L"Memoryless";
  }
  if (param_1 == Dynamic) {
    return L"Dynamic";
  }
  if (param_1 == InputAttachmentRead) {
    return L"InputAttachmentRead";
  }
  if (param_1 != Foveation) {
    pwVar1 = L"";
    if (param_1 == Tiling3D) {
      pwVar1 = L"Tiling3D";
    }
    return pwVar1;
  }
  return L"Foveation";
}

// GetTextureCreateFlagsName @ 145cde8d0

FString * __cdecl
GetTextureCreateFlagsName(FString *__return_storage_ptr__,ETextureCreateFlags param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  ETextureCreateFlags EVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (param_1 == None) {
    pwVar2 = `GetTextureCreateFlagsName'::__l2::<lambda_1>::operator()(local_res8,None);
    FString::FString(__return_storage_ptr__,pwVar2);
    return __return_storage_ptr__;
  }
  iVar4 = 0;
  local_28.Data.ArrayNum = 0;
  EVar5 = RenderTargetable;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayMax = 0;
  do {
    if ((param_1 & RenderTargetable) != None) {
      iVar1 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      if ((0 < iVar1) && (param_1 != None)) {
        FString::AppendChars(&local_28,L"|",1);
      }
      pwVar2 = `GetTextureCreateFlagsName'::__l2::<lambda_1>::operator()(local_res8,EVar5);
      sVar3 = wcslen(pwVar2);
      FString::AppendChars(&local_28,pwVar2,(int)sVar3);
      iVar4 = local_28.Data.ArrayNum;
    }
    EVar5 = EVar5 << 1 | (ulonglong)((longlong)EVar5 < 0);
    param_1 = param_1 >> 1;
  } while (param_1 != None);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = iVar4;
  return __return_storage_ptr__;
}

// GetTextureDimensionString @ 145cde9c0

wchar_t * __cdecl GetTextureDimensionString(ETextureDimension param_1)

{
  if (param_1 == Texture2D) {
    return L"Texture2D";
  }
  if (param_1 == Texture2DArray) {
    return L"Texture2DArray";
  }
  if (param_1 == Texture3D) {
    return L"Texture3D";
  }
  if (param_1 != TextureCube) {
    if (param_1 != TextureCubeArray) {
      return L"";
    }
    return L"TextureCubeArray";
  }
  return L"TextureCube";
}

// GetTypeHash @ 145cdebc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __cdecl RHIValidation::GetTypeHash(FResourceIdentity *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)((ulonglong)param_1->Resource >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Resource >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar1 = (param_1->SubresourceRange).MipIndex;
  uVar1 = (param_1->SubresourceRange).NumMips + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
  uVar1 = (param_1->SubresourceRange).ArraySlice + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
  uVar1 = (param_1->SubresourceRange).NumArraySlices + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^
          uVar1;
  uVar1 = (param_1->SubresourceRange).PlaneIndex + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
  return (uVar2 >> 2) + 0x9e3779b9 +
         ((param_1->SubresourceRange).NumPlanes + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)
         + uVar2 * 0x40 ^ uVar2;
}

// GetUniformBufferBaseTypeString @ 145cdecb0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

wchar_t * __cdecl GetUniformBufferBaseTypeString(EUniformBufferBaseType param_1)

{
  switch(param_1) {
  case UBMT_INVALID:
    return L"UBMT_INVALID";
  case UBMT_BOOL:
    return L"UBMT_BOOL";
  case UBMT_INT32:
    return L"UBMT_INT32";
  case UBMT_UINT32:
    return L"UBMT_UINT32";
  case UBMT_FLOAT32:
    return L"UBMT_FLOAT32";
  case EUniformBufferBaseType_NumBits:
    return L"UBMT_TEXTURE";
  case UBMT_SRV:
    return L"UBMT_SRV";
  case UBMT_UAV:
    return L"UBMT_UAV";
  case UBMT_SAMPLER:
    return L"UBMT_SAMPLER";
  case UBMT_RDG_TEXTURE:
    return L"UBMT_RDG_TEXTURE";
  case UBMT_RDG_TEXTURE_ACCESS:
    return L"UBMT_RDG_TEXTURE_ACCESS";
  case UBMT_RDG_TEXTURE_ACCESS_ARRAY:
    return L"UBMT_RDG_TEXTURE_ACCESS_ARRAY";
  case UBMT_RDG_TEXTURE_SRV:
    return L"UBMT_RDG_TEXTURE_SRV";
  case UBMT_RDG_TEXTURE_NON_PIXEL_SRV:
    return L"UBMT_RDG_TEXTURE_NON_PIXEL_SRV";
  case UBMT_RDG_TEXTURE_UAV:
    return L"UBMT_RDG_TEXTURE_UAV";
  case UBMT_RDG_BUFFER_ACCESS:
    return L"UBMT_RDG_BUFFER_ACCESS";
  case UBMT_RDG_BUFFER_ACCESS_ARRAY:
    return L"UBMT_RDG_BUFFER_ACCESS_ARRAY";
  case UBMT_RDG_BUFFER_SRV:
    return L"UBMT_RDG_BUFFER_SRV";
  case UBMT_RDG_BUFFER_UAV:
    return L"UBMT_RDG_BUFFER_UAV";
  case UBMT_RDG_UNIFORM_BUFFER:
    return L"UBMT_RDG_UNIFORM_BUFFER";
  case UBMT_NESTED_STRUCT:
    return L"UBMT_NESTED_STRUCT";
  case UBMT_INCLUDED_STRUCT:
    return L"UBMT_INCLUDED_STRUCT";
  case UBMT_REFERENCED_STRUCT:
    return L"UBMT_REFERENCED_STRUCT";
  case UBMT_RENDER_TARGET_BINDING_SLOTS:
    return L"UBMT_RENDER_TARGET_BINDING_SLOTS";
  default:
    return L"";
  }
}

// GetViewableResource @ 145cdeec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIViewableResource * __cdecl GetViewableResource(FRHITransitionInfo *param_1)

{
  EType EVar1;
  longlong lVar2;
  
  EVar1 = param_1->Type;
  if (EVar1 == Texture) {
    if ((param_1->field1_0x8).Resource != (FRHIResource *)0x0) {
      lVar2 = (**(code **)(((param_1->field1_0x8).Resource)->_padding_ + 0x28))();
      if (lVar2 != 0) {
        return *(FRHIViewableResource **)(lVar2 + 0x138);
      }
      return (FRHIViewableResource *)(param_1->field1_0x8).Resource;
    }
  }
  else {
    if (EVar1 == Buffer) {
      return (FRHIViewableResource *)(param_1->field1_0x8).Resource;
    }
    if ((EVar1 == UAV) && ((param_1->field1_0x8).Texture != (FRHITexture *)0x0)) {
      return (FRHIViewableResource *)((param_1->field1_0x8).Texture)->_padding_;
    }
  }
  return (FRHIViewableResource *)0x0;
}

// HandleUnsupportedRHI @ 145cdefc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
HandleUnsupportedRHI
          (EWindowsRHI *param_1,Type *param_2,TOptional<EWindowsRHI> param_3,
          FParsedWindowsDynamicRHIConfig *param_4)

{
  FScriptContainerElement *pFVar1;
  EWindowsRHI EVar2;
  int iVar3;
  FText *pFVar4;
  Type TVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  FText local_38;
  
  if (((*(char *)((longlong)param_3 + 4) != '\0') && (*(char *)((longlong)param_3 + 4) == '\x01'))
     && (*(int *)param_3 == 1)) {
    if (4 < (byte)LogRHI._0_1_) {
      GetLogName(*param_1);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"WindowsDynamicRHI",L"RequiredDX12",
                        L"DirectX 12 is not supported on your system. Try running without the -dx12 or -d3d12 command line argument."
                       );
    FMessageDialog::Open(Ok,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedRHI.ForcedRHI");
    return false;
  }
  EVar2 = *param_1;
  if (EVar2 == D3D12) {
    iVar3 = (param_4->RHIConfigs).Elements[0].FeatureLevels.ArrayNum;
    if (iVar3 != 0) {
      TVar5 = ES2_REMOVED;
      pFVar6 = (param_4->RHIConfigs).Elements[0].FeatureLevels.AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)iVar3 * 4;
      while( true ) {
        if ((param_4->RHIConfigs).Elements[0].FeatureLevels.ArrayNum != iVar3) {
          `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar1) break;
        if ((int)TVar5 < (int)*(Type *)pFVar6) {
          TVar5 = *(Type *)pFVar6;
        }
        pFVar6 = pFVar6 + 4;
      }
      *param_1 = D3D11;
      *param_2 = TVar5;
      return true;
    }
  }
  if (4 < (byte)LogRHI._0_1_) {
    if (((EVar2 != D3D11) && (EVar2 != D3D12)) &&
       ((EVar2 != Vulkan && ((EVar2 != OpenGL && (EVar2 == Imported)))))) {
      GetOverrideRHI();
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*param_1 == D3D12) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"WindowsDynamicRHI",L"RequiredDX12",
                        L"DirectX 12 is not supported on your system. Try running without the -dx12 or -d3d12 command line argument."
                       );
    FMessageDialog::Open(Ok,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedRHI.D3D12");
  }
  if (*param_1 == D3D11) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"WindowsDynamicRHI",L"RequiredDX11Feature_11_SM5",
                        L"A D3D11-compatible GPU (Feature Level 11.0, Shader Model 5.0) is required to run the engine."
                       );
    FMessageDialog::Open(Ok,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedRHI.D3D11");
  }
  if (*param_1 == Vulkan) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"WindowsDynamicRHI",L"RequiredVulkan",
                        L"A compatible Vulkan Driver is required to run the engine.");
    FMessageDialog::Open(Ok,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedRHI.Vulkan");
  }
  if (*param_1 == OpenGL) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"WindowsDynamicRHI",L"RequiredOpenGL",
                        L"OpenGL 4.3 is required to run the engine.");
    FMessageDialog::Open(Ok,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedRHI.OpenGL");
  }
  return false;
}

// IsGPUInHardwareListForD3D11_ES31 @ 145cdf840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsGPUInHardwareListForD3D11_ES31(FWindowsGPUInfo *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint local_res8 [2];
  wchar_t *local_res10;
  uint local_res18;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  bVar12 = false;
  local_res8[0] = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_res10 = param_2;
  FConfigCacheIni::GetArray(GConfig,L"Devices",param_2,&local_a8,&GHardwareIni);
  uVar7 = (ulonglong)local_a8.ArrayNum;
  pFVar14 = local_a8.AllocatorInstance.Data + uVar7 * 0x10;
  local_res18 = local_a8.ArrayNum;
  FVar15.Data = local_a8.AllocatorInstance.Data;
  do {
    if (local_a8.ArrayNum != (int)uVar7) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar15.Data == pFVar14) {
      bVar12 = false;
      goto LAB_145cdfc69;
    }
    if (*(int *)(FVar15.Data + 8) == 0) {
      pwVar13 = L"";
LAB_145cdf905:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7718200000647266816>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                         ,0x200,"Line[0] == TCHAR(\'(\')");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      pwVar13 = *(wchar_t **)FVar15.Data;
      if (*pwVar13 != L'(') goto LAB_145cdf905;
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pwVar13 = pwVar13 + 1;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    bVar2 = false;
    FParse::Value(pwVar13,L"RHI=",&local_e8,true,(wchar_t **)0x0);
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    FParse::Value(pwVar13,L"DeviceName=",&local_d8,true,(wchar_t **)0x0);
    FString::FString(&local_98,"D3D11_ES31");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar10.Data = local_e8.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
    if (iVar4 == 0) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar11.Data = local_d8.Data.AllocatorInstance.Data;
      }
      if ((param_1->AdapterName).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->AdapterName).Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)FVar11.Data);
      if (iVar4 == 0) {
        bVar2 = true;
      }
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      goto LAB_145cdfc45;
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    FParse::Value(pwVar13,L"VendorId=",&local_b8,true,(wchar_t **)0x0);
    iVar4 = 0;
    if (local_b8.Data.ArrayNum == 0) {
      local_88 = (FScriptContainerElement *)0x15060d16c;
LAB_145cdfa40:
      sVar8 = wcslen((wchar_t *)local_88);
      iVar4 = (int)sVar8;
    }
    else {
      local_88 = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_145cdfa40;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iVar4;
    local_58.DataPtr = (wchar_t *)local_88;
    iStack_80 = iVar4;
    uVar5 = FParse::HexNumber(&local_58);
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    FParse::Value(pwVar13,L"DeviceId=",&local_c8,true,(wchar_t **)0x0);
    iVar4 = 0;
    if (local_c8.Data.ArrayNum == 0) {
      local_78 = (FScriptContainerElement *)0x15060d16c;
LAB_145cdfaa8:
      sVar8 = wcslen((wchar_t *)local_78);
      iVar4 = (int)sVar8;
    }
    else {
      local_78 = local_c8.Data.AllocatorInstance.Data;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_145cdfaa8;
    }
    local_48._12_4_ = uStack_6c;
    local_48.Size = iVar4;
    local_48.DataPtr = (wchar_t *)local_78;
    iStack_70 = iVar4;
    uVar6 = FParse::HexNumber(&local_48);
    if ((((param_1->VendorId == 0) || (param_1->DeviceId == 0)) || (param_1->VendorId != uVar5)) ||
       (param_1->DeviceId != uVar6)) {
LAB_145cdfb16:
      bVar2 = false;
    }
    else {
      FString::FString(&local_68,"D3D11_ES31");
      bVar12 = true;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar11.Data = local_68.Data.AllocatorInstance.Data;
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar10.Data = local_e8.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
      if (iVar4 != 0) goto LAB_145cdfb16;
      bVar2 = true;
    }
    if ((bVar12) &&
       (bVar12 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
LAB_145cdfc45:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
LAB_145cdfc69:
      DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return bVar12;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    uVar7 = (ulonglong)local_res18;
    FVar15.Data = FVar15.Data + 0x10;
  } while( true );
}

// IsInRange @ 145cdfcf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
RHIValidation::IsInRange
          (FRHIBreadcrumbRange *param_1,FRHIBreadcrumbNode *param_2,ERHIPipeline param_3)

{
  FRHIBreadcrumbNode *pFVar1;
  code *pcVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  if (((param_1->First == (FRHIBreadcrumbNode *)0x0) != (param_1->Last == (FRHIBreadcrumbNode *)0x0)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!First == !Last",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                               ,0x27b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = param_1->First;
  pFVar3 = param_1->Last;
  while (pFVar1 != (FRHIBreadcrumbNode *)0x0) {
    if (pFVar1 == param_2) {
      return true;
    }
    if (pFVar1 == pFVar3) break;
    if ((param_3 == Graphics) || (lVar6 = 0x20, param_3 != AsyncCompute)) {
      lVar6 = 0x18;
    }
    pFVar1 = *(FRHIBreadcrumbNode **)((longlong)(pFVar1->NextPtrs).Elements + lVar6 + -0x18);
    if ((pFVar1 == (FRHIBreadcrumbNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Next",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x25e,
                           L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  for (pFVar1 = param_1->Last; pFVar1 != (FRHIBreadcrumbNode *)0x0; pFVar1 = pFVar1->Parent) {
    if (pFVar1 == param_2) {
      return true;
    }
  }
  pFVar1 = param_1->First;
  while( true ) {
    if (pFVar1 == (FRHIBreadcrumbNode *)0x0) {
      return false;
    }
    if (pFVar1 == param_2) break;
    pFVar1 = pFVar1->Parent;
  }
  return true;
}

// IsRHIAllowedAsDefault @ 145cdfe40

bool __cdecl IsRHIAllowedAsDefault(EWindowsRHI param_1,Type param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  uint *puVar6;
  FGPUInfo *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  bool bVar12;
  bool local_res8 [8];
  int local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  uint local_68 [16];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pFVar7 = FWindowsPlatformApplicationMisc::GetBestGPUInfo((FGPUInfo *)&local_78);
    BestGPUInfo = *pFVar7;
    _Init_thread_footer(&_TSS0);
  }
  uVar11 = 0;
  if ((param_1 == D3D12) && (param_2 == SM6)) {
    uVar1 = BestGPUInfo.DeviceId;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"D3D12_SM6",L"SM6PreferredGPUDeviceIDs",&local_78,&GEngineIni);
    iVar2 = local_78.ArrayNum;
    pFVar10 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
    FVar9.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar9.Data == pFVar10) {
        DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        goto LAB_145cdffa6;
      }
      if (*(int *)(FVar9.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar9.Data;
      }
      uVar5 = wcstoul(pwVar8,(wchar_t **)0x0,10);
      if (uVar1 == uVar5) break;
      if (*(int *)(FVar9.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar9.Data;
      }
      uVar5 = wcstoul(pwVar8,(wchar_t **)0x0,0x10);
      if (uVar1 == uVar5) break;
      FVar9.Data = FVar9.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    bVar12 = true;
  }
  else {
    bVar12 = true;
    if ((param_1 == D3D12) && (3 < (int)param_2)) {
LAB_145cdffa6:
      bVar12 = true;
      local_res18[0] = 0;
      bVar3 = FConfigCacheIni::GetInt
                        (GConfig,L"D3D12_SM6",L"MinDedicatedMemory",local_res18,&GEngineIni);
      if (bVar3) {
        bVar12 = (ulonglong)((longlong)local_res18[0] << 0x14) <= BestGPUInfo.DedicatedVideoMemory;
      }
      local_res8[0] = true;
      FConfigCacheIni::GetBool
                (GConfig,L"D3D12_SM6",L"bUseSM5PreferredGPUList",local_res8,&GEngineIni);
      if (local_res8[0] != false) {
        puVar6 = local_68;
        local_68[0] = 0x1b80;
        local_68[1] = 0x1b81;
        local_68[2] = 0x1b82;
        local_68[3] = 0x1b83;
        local_68[4] = 0x1b84;
        local_68[5] = 0x1c01;
        local_68[6] = 0x1c02;
        local_68[7] = 0x1c03;
        local_68[8] = 0x1c04;
        local_68[9] = 0x1c06;
        local_68[10] = 0x1c08;
        local_68[0xb] = 0x1c81;
        local_68[0xc] = 0x1c82;
        local_68[0xd] = 0x1c83;
        local_68[0xe] = 0x1b06;
        do {
          if (BestGPUInfo.DeviceId == *puVar6) {
            bVar4 = 0;
            goto LAB_145ce009b;
          }
          uVar11 = uVar11 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar11 < 0xf);
        bVar4 = 1;
LAB_145ce009b:
        bVar12 = (bool)(bVar12 & bVar4);
      }
    }
  }
  return bVar12;
}

// IsResourceBindingTypeSRV @ 145ce0130

bool __cdecl IsResourceBindingTypeSRV(EShaderCodeResourceBindingType param_1)

{
  undefined1 local_res8 [32];
  
  switch(param_1) {
  default:
    `IsResourceBindingTypeSRV'::__l4::<lambda_1>::operator()(local_res8);
switchD_145ce0155_caseD_1:
    return false;
  case SamplerState:
  case TextureMetadata:
  case RWTexture2D:
  case RWTexture2DArray:
  case RWTexture3D:
  case RWTextureCube:
  case RWTextureMetadata:
  case RWBuffer:
  case RWStructuredBuffer:
  case RWByteAddressBuffer:
  case RasterizerOrderedTexture2D:
    goto switchD_145ce0155_caseD_1;
  case Texture2D:
  case Texture2DArray:
  case Texture2DMS:
  case Texture3D:
  case TextureCube:
  case TextureCubeArray:
  case Buffer:
  case StructuredBuffer:
  case ByteAddressBuffer:
  case RaytracingAccelerationStructure:
  case ResourceCollection:
    return true;
  }
}

// LegacyShaderPlatformToShaderFormat @ 145ce0430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __cdecl LegacyShaderPlatformToShaderFormat(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  undefined6 in_register_0000000a;
  ushort in_DX;
  
  FVar3._2_6_ = in_register_0000000a;
  FVar3.ComparisonIndex.Value._0_2_ = param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[in_DX].bContainsValidPlatformInfo == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)FVar3 = FGenericDataDrivenShaderPlatformInfo::Infos[in_DX].ShaderFormat;
  return FVar3;
}

// LexToString @ 145ce04a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EShaderPlatform param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FStaticShaderPlatformNames *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  
  switch(param_1) {
  case SP_PCD3D_SM5:
    FString::FString(__return_storage_ptr__,L"PCD3D_SM5");
    return __return_storage_ptr__;
  case SP_METAL:
    FString::FString(__return_storage_ptr__,L"METAL_ES3_1_IOS");
    return __return_storage_ptr__;
  case SP_METAL_MRT:
    FString::FString(__return_storage_ptr__,L"METAL_SM5_IOS");
    return __return_storage_ptr__;
  case SP_PCD3D_ES3_1:
    FString::FString(__return_storage_ptr__,L"PCD3D_ES3_1");
    return __return_storage_ptr__;
  case SP_OPENGL_PCES3_1:
    FString::FString(__return_storage_ptr__,L"OPENGL_PCES3_1");
    return __return_storage_ptr__;
  case SP_METAL_SM5:
    FString::FString(__return_storage_ptr__,L"METAL_SM5");
    return __return_storage_ptr__;
  case SP_VULKAN_PCES3_1:
    FString::FString(__return_storage_ptr__,L"VULKAN_PCES3_1");
    return __return_storage_ptr__;
  case SP_VULKAN_SM5:
    FString::FString(__return_storage_ptr__,L"VULKAN_SM5");
    return __return_storage_ptr__;
  case SP_VULKAN_ES3_1_ANDROID:
    FString::FString(__return_storage_ptr__,L"VULKAN_ES3_1_ANDROID");
    return __return_storage_ptr__;
  case SP_METAL_ES3_1:
    FString::FString(__return_storage_ptr__,L"METAL_ES3_1");
    return __return_storage_ptr__;
  case SP_OPENGL_ES3_1_ANDROID:
    FString::FString(__return_storage_ptr__,L"OPENGL_ES3_1_ANDROID");
    return __return_storage_ptr__;
  case SP_METAL_ES3_1_TVOS:
    FString::FString(__return_storage_ptr__,L"METAL_ES3_1_TVOS");
    return __return_storage_ptr__;
  case SP_METAL_MRT_TVOS:
    FString::FString(__return_storage_ptr__,L"METAL_SM5_TVOS");
    return __return_storage_ptr__;
  case SP_VULKAN_SM5_ANDROID:
    FString::FString(__return_storage_ptr__,L"VULKAN_SM5_ANDROID");
    return __return_storage_ptr__;
  case SP_PCD3D_SM6:
    FString::FString(__return_storage_ptr__,L"PCD3D_SM6");
    return __return_storage_ptr__;
  case SP_VULKAN_SM6:
    FString::FString(__return_storage_ptr__,L"VULKAN_SM6");
    return __return_storage_ptr__;
  case SP_METAL_SM6:
    FString::FString(__return_storage_ptr__,L"METAL_SM6");
    return __return_storage_ptr__;
  case SP_METAL_SIM:
    FString::FString(__return_storage_ptr__,L"METAL_SIM");
    return __return_storage_ptr__;
  case SP_CUSTOM_PLATFORM_FIRST:
    FString::FString(__return_storage_ptr__,L"SP_CUSTOM_PLATFORM_FIRST");
    return __return_storage_ptr__;
  case SP_CUSTOM_PLATFORM_LAST:
    FString::FString(__return_storage_ptr__,L"SP_CUSTOM_PLATFORM_LAST");
    return __return_storage_ptr__;
  }
  if ((ushort)(param_1 - SP_StaticPlatform_First) < 0x10) {
    pFVar3 = FStaticShaderPlatformNames::Get();
    FName::ToString(&pFVar3->Platforms[0].ShaderPlatform +
                    (ulonglong)(param_1 - 0x20) + (ulonglong)(param_1 - 0x20) * 2,
                    __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((ushort)(param_1 + ~SP_CUSTOM_PLATFORM_FIRST) < 99) {
    pwVar5 = L"SP_CUSTOM_PLATFORM_%d";
  }
  else {
    if ((param_2) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!bError",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                           ,0x76,L"Unknown or removed EShaderPlatform %d!"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    pwVar5 = L"Unknown or removed EShaderPlatform %d";
  }
  FString::PrintfImpl(__return_storage_ptr__,pwVar5);
  return __return_storage_ptr__;
}

// LexToString @ 145ce08c0

FString * __cdecl LexToString(FString *__return_storage_ptr__,Type param_1)

{
  if (param_1 == ES2_REMOVED) {
    FString::FString(__return_storage_ptr__,L"ES2_REMOVED");
    return __return_storage_ptr__;
  }
  if (param_1 == ES3_1) {
    FString::FString(__return_storage_ptr__,L"ES3_1");
    return __return_storage_ptr__;
  }
  if (param_1 == SM4_REMOVED) {
    FString::FString(__return_storage_ptr__,L"SM4_REMOVED");
    return __return_storage_ptr__;
  }
  if (param_1 != SM5) {
    if (param_1 != SM6) {
      FString::FString(__return_storage_ptr__,L"UnknownFeatureLevel");
      return __return_storage_ptr__;
    }
    FString::FString(__return_storage_ptr__,L"SM6");
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"SM5");
  return __return_storage_ptr__;
}

// LexToString @ 145ce0970

wchar_t * __cdecl LexToString(ERHIDescriptorHeapType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Standard) {
    return L"Standard";
  }
  if (param_1 == Sampler) {
    return L"Sampler";
  }
  if (param_1 == RenderTarget) {
    return L"RenderTarget";
  }
  if (param_1 != DepthStencil) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                       ,0xfb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"UnknownDescriptorHeapType";
  }
  return L"DepthStencil";
}

// LoadDynamicRHIModule @ 145ce0a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

IDynamicRHIModule * __cdecl LoadDynamicRHIModule(Type *param_1,wchar_t **param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  Type TVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  TOptional<ERHIFeatureLevel::Type> TVar13;
  FOverrideRHI *pFVar14;
  wchar_t *pwVar15;
  IDynamicRHIModule *pIVar16;
  FName *pFVar17;
  FModuleManager *this;
  IModuleInterface *pIVar18;
  FText *pFVar19;
  FStaticBasicLogRecord *pFVar20;
  int iVar21;
  undefined8 *puVar22;
  ForAnyElementType FVar23;
  EWindowsRHI EVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStackY_208 [32];
  bool local_1c7;
  bool local_1c6 [2];
  EWindowsRHI local_1c4;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  Type *local_1b0;
  EWindowsRHI local_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  EWindowsRHI local_198;
  char local_194;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  uint local_150;
  uint uStack_14c;
  undefined1 local_148 [56];
  FText local_110;
  FParsedWindowsDynamicRHIConfig local_f8;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b0 = param_1;
  local_148._24_8_ = param_2;
  FGenericDataDrivenShaderPlatformInfo::Initialize();
  local_1c7 = false;
  bVar5 = FConfigCacheIni::GetBool
                    (GConfig,L"D3DRHIPreference",L"bUseGPUCrashDebugging",&local_1c7,
                     &GGameUserSettingsIni);
  puVar12 = (ulonglong *)0x0;
  if (bVar5) {
    pIVar10 = IConsoleManager::Get();
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.GPUCrashDebugging",1)
    ;
    if (plVar11 != (longlong *)0x0) {
      puVar12 = (ulonglong *)(**(code **)(*plVar11 + 0x68))(plVar11);
    }
    local_150 = (uint)local_1c7;
    *puVar12 = (ulonglong)CONCAT14(local_1c7,local_150);
    uStack_14c = local_150;
  }
  ParseWindowsDynamicRHIConfig(&local_f8);
  if (local_f8.DefaultRHI.bIsSet == false) {
    local_1b8 = GRHISearchOrder;
    do {
      TVar9 = ES2_REMOVED;
      uVar26 = (ulonglong)*local_1b8;
      iVar21 = local_f8.RHIConfigs.Elements[uVar26].FeatureLevels.ArrayNum;
      local_1a0 = uVar26;
      if (iVar21 != 0) {
        FVar23.Data = local_f8.RHIConfigs.Elements[uVar26].FeatureLevels.AllocatorInstance.Data;
        pFVar2 = FVar23.Data + (longlong)iVar21 * 4;
        while( true ) {
          if (local_f8.RHIConfigs.Elements[uVar26].FeatureLevels.ArrayNum != iVar21) {
            local_1c0[0] = 0;
            `TCheckedPointerIterator<enum_ERHIFeatureLevel::Type_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1c0);
          }
          uVar25 = local_1a0;
          if (FVar23.Data == pFVar2) break;
          if ((int)TVar9 < (int)*(Type *)FVar23.Data) {
            TVar9 = *(Type *)FVar23.Data;
          }
          FVar23.Data = FVar23.Data + 4;
        }
        while( true ) {
          do {
            bVar5 = IsRHIAllowedAsDefault((EWindowsRHI)uVar25,TVar9);
            param_1 = local_1b0;
            if (bVar5) goto LAB_145ce0bc3;
            TVar13 = FParsedWindowsDynamicRHIConfig::GetNextHighestTargetedFeatureLevel
                               (&local_f8,(int)local_148 + 0x20,(EWindowsRHI)uVar25);
          } while (TVar13 == (TOptional<ERHIFeatureLevel::Type>)((longlong)local_148 + 0x28));
          if (*(char *)((longlong)TVar13 + 4) == '\0') break;
          TVar9 = *(Type *)TVar13;
        }
      }
      local_1b8 = (EWindowsRHI *)((longlong)local_1b8 + 4);
    } while ((wchar_t *)local_1b8 != L"Ignore performance mode check");
    uVar25 = 0;
    param_1 = local_1b0;
  }
  else {
    uVar25 = (ulonglong)local_f8.DefaultRHI.TypedValue;
  }
LAB_145ce0bc3:
  ChoosePreferredRHI((int)local_148 + 8);
  bVar8 = false;
  bVar5 = false;
  pFVar14 = GetOverrideRHI();
  EVar24 = local_148._16_4_;
  if (pFVar14 != (FOverrideRHI *)0x0) {
    pFVar14 = GetOverrideRHI();
    EVar24 = local_148._16_4_;
    if (&pFVar14->FeatureLevel != (Type *)(local_148 + 0x10)) {
      bVar8 = true;
      bVar5 = true;
      EVar24 = pFVar14->FeatureLevel;
    }
  }
  pwVar15 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar15,L"es31");
  if (bVar6) {
LAB_145ce0c4e:
    EVar24 = D3D12;
    bVar8 = true;
    bVar5 = true;
  }
  else {
    pwVar15 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar15,L"FeatureLevelES31");
    if (bVar6) goto LAB_145ce0c4e;
    pwVar15 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar15,L"FeatureLevelES3_1");
    if (bVar6) goto LAB_145ce0c4e;
  }
  pwVar15 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar15,L"sm5");
  if (bVar6) {
    bVar8 = true;
    EVar24 = OpenGL;
    bVar5 = true;
  }
  pwVar15 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar15,L"sm6");
  if (bVar6) {
    bVar8 = true;
    EVar24 = Imported;
    bVar5 = true;
  }
  if (bVar8 != false) {
    local_148._0_4_ = EVar24;
  }
  local_148[4] = bVar8;
  ChooseForcedRHI((TOptional<ERHIFeatureLevel::Type>)&local_1a8,
                  (FParsedWindowsDynamicRHIConfig *)local_148);
  local_1c4 = (EWindowsRHI)uVar25;
  if ((char)uStack_1a4 == '\0') {
    if (local_148[0xc] == '\0') {
      if ((byte)LogRHI._0_1_ < 5) goto LAB_145ce0d3c;
      GetLogName(local_1c4);
      pFVar20 = &LOG_Static;
    }
    else {
      uVar25 = (ulonglong)(uint)local_148._8_4_;
      local_1c4 = local_148._8_4_;
      if ((byte)LogRHI._0_1_ < 5) goto LAB_145ce0d3c;
      GetLogName(local_148._8_4_);
      pFVar20 = &LOG_Static;
    }
  }
  else {
    uVar25 = CONCAT44(uStack_1a4,local_1a8);
    local_1c4 = local_1a8;
    if ((byte)LogRHI._0_1_ < 5) goto LAB_145ce0d3c;
    GetLogName(local_1a8);
    pFVar20 = &LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar20,(FLogCategoryBase *)&LogRHI);
LAB_145ce0d3c:
  local_1c6[0] = false;
  if (bVar8 != false) {
    local_198 = EVar24;
  }
  local_194 = bVar8;
  TVar9 = ChooseFeatureLevel((EWindowsRHI)uVar25,(TOptional<ERHIFeatureLevel::Type>)&local_198,
                             &local_f8,local_1c6);
  *param_1 = TVar9;
  if ((local_1c6[0] != false) && (local_1c4 = D3D11, uVar25 = 0, 4 < (byte)LogRHI._0_1_)) {
    GetLogName(D3D11);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  do {
    TVar9 = *param_1;
    EVar24 = (EWindowsRHI)uVar25;
    if (EVar24 == D3D11) {
      pwVar15 = L"DirectX 11";
LAB_145ce0f51:
      FString::FString(&local_190,pwVar15);
    }
    else {
      if (EVar24 != D3D12) {
        if (EVar24 == Vulkan) {
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = 0;
          local_180.Data.ArrayMax = 0;
          if (TVar9 < Num) {
            pwVar15 = FeatureLevelNames[(int)TVar9];
          }
          else {
            bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("InFeatureLevel < (sizeof(UEArrayCountHelper(FeatureLevelNames)) - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                               ,0xaa,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              pIVar16 = (IDynamicRHIModule *)(*pcVar4)();
              return pIVar16;
            }
            pwVar15 = L"InvalidFeatureLevel";
          }
          FString::operator=(&local_180,pwVar15);
          FString::PrintfImpl(&local_190,L"Vulkan (%s)");
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          goto LAB_145ce0f5b;
        }
        if (EVar24 == OpenGL) {
          pwVar15 = L"OpenGL";
          goto LAB_145ce0f51;
        }
      }
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      if (TVar9 < Num) {
        pwVar15 = FeatureLevelNames[(int)TVar9];
      }
      else {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("InFeatureLevel < (sizeof(UEArrayCountHelper(FeatureLevelNames)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                           ,0xaa,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pIVar16 = (IDynamicRHIModule *)(*pcVar4)();
          return pIVar16;
        }
        pwVar15 = L"InvalidFeatureLevel";
      }
      FString::operator=(&local_170,pwVar15);
      if ((((EVar24 != D3D11) && (EVar24 != D3D12)) && (EVar24 != Vulkan)) &&
         ((EVar24 != OpenGL && (EVar24 == Imported)))) {
        GetOverrideRHI();
      }
      FString::PrintfImpl(&local_190,L"%s (%s)");
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
LAB_145ce0f5b:
    FVar23.Data = local_190.Data.AllocatorInstance.Data;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar21 = local_190.Data.ArrayNum;
    local_160.Data.ArrayNum = iVar21;
    if (iVar21 == 0) {
      local_160.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar21,0,(ForAnyElementType *)&local_160,iVar21,&local_160.Data.ArrayMax);
      memcpy(local_160.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar21 * 2);
    }
    FApp::SetGraphicsRHI(&local_160);
    pwVar15 = ModuleNameFromWindowsRHI(EVar24);
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    pFVar17 = FName::FName((FName *)(local_148 + 0x30),pwVar15);
    FVar3 = *pFVar17;
    this = FModuleManager::Get();
    pIVar18 = FModuleManager::LoadModule(this,FVar3,None);
    if (4 < (byte)LogRHI._0_1_) {
      if (((EVar24 != D3D11) && (EVar24 != D3D12)) &&
         ((EVar24 != Vulkan && ((EVar24 != OpenGL && (EVar24 == Imported)))))) {
        GetOverrideRHI();
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((pIVar18 != (IModuleInterface *)0x0) &&
       (cVar7 = (**(code **)((longlong)*pIVar18 + 0x40))(pIVar18,*param_1), cVar7 != '\0')) {
      if (4 < (byte)LogRHI._0_1_) {
        GetLogName(EVar24);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_RHI__s_with_Fea_1511274e0,
                   (FLogCategoryBase *)&LogRHI);
      }
      *(wchar_t **)local_148._24_8_ = pwVar15;
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      goto LAB_145ce142a;
    }
    if (bVar5) {
      if ((EVar24 == D3D12) && (*param_1 == SM6)) {
        if (4 < (byte)LogRHI._0_1_) {
          GetLogName(D3D12);
          GetLogName(SM6);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_RHI__s_with_Fea_151126bf8,
                     (FLogCategoryBase *)&LogRHI);
        }
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_110,L"WindowsDynamicRHI",L"RequiredDX12SM6",
                             L"DirectX 12 with Feature Level SM6 is not supported on your system. Try running without the -sm6 command line argument."
                            );
        FMessageDialog::Open(Ok,pFVar19);
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)(*(longlong *)local_110.TextData.Reference + 0x10))();
        }
        FWindowsPlatformMisc::RequestExit(true,L"HandleUnsupportedFeatureLevel");
      }
LAB_145ce1169:
      if ((char)uStack_1a4 != '\0') {
        local_1b8._0_4_ = local_1a8;
      }
      local_1b8 = (EWindowsRHI *)
                  CONCAT44(CONCAT31(local_1b8._5_3_,(char)uStack_1a4),(EWindowsRHI)local_1b8);
      bVar8 = HandleUnsupportedRHI(&local_1c4,param_1,(TOptional<EWindowsRHI>)&local_1b8,&local_f8);
      uVar25 = (ulonglong)local_1c4;
      if (bVar8) goto LAB_145ce11a7;
    }
    else {
      if (*param_1 == SM6) {
        GDynamicRHIFailedToInitializeAdvancedPlatform = true;
      }
      FParsedWindowsDynamicRHIConfig::GetNextHighestTargetedFeatureLevel
                (&local_f8,(EWindowsRHI)&local_1a0,EVar24);
      if (local_1a0._4_1_ == '\0') goto LAB_145ce1169;
      *param_1 = (Type)local_1a0;
      bVar8 = true;
LAB_145ce11a7:
      if (4 < (byte)LogRHI._0_1_) {
        iVar21 = (int)uVar25;
        if ((((iVar21 != 0) && (iVar21 != 1)) && (iVar21 != 2)) && ((iVar21 != 3 && (iVar21 == 4))))
        {
          GetOverrideRHI();
        }
        if (((EVar24 != D3D11) && (EVar24 != D3D12)) &&
           ((EVar24 != Vulkan && ((EVar24 != OpenGL && (EVar24 == Imported)))))) {
          GetOverrideRHI();
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    param_1 = local_1b0;
  } while (bVar8 != false);
  if (4 < (byte)LogRHI._0_1_) {
    GetLogName((EWindowsRHI)uVar25);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pIVar18 = (IModuleInterface *)0x0;
LAB_145ce142a:
  puVar22 = &local_50;
  lVar27 = 5;
  do {
    puVar1 = puVar22 + -2;
    puVar22 = puVar22 + -4;
    lVar27 = lVar27 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    if ((void *)*puVar22 != (void *)0x0) {
      FMemory::Free((void *)*puVar22);
    }
  } while (lVar27 != 0);
  return (IDynamicRHIModule *)pIVar18;
}

// Log @ 145ce1890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __cdecl
RHIValidation::Log(FResource *param_1,FSubresourceIndex *param_2,void *param_3,wchar_t *param_4,
                  wchar_t *param_5,wchar_t *param_6)

{
  longlong lVar1;
  FRHIBreadcrumbNode *this;
  ulong64 *puVar2;
  ForAnyElementType FVar3;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  puVar2 = operator_new__(0xf0);
  FWindowsPlatformStackWalk::CaptureStackBackTrace(puVar2,0x1e,(void *)0x0);
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if ((lVar1 == 0) ||
     (this = *(FRHIBreadcrumbNode **)(lVar1 + 0x30), this == (FRHIBreadcrumbNode *)0x0)) {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this,&local_68);
  }
  if (param_3 == (void *)0x0) {
    if (GRHIValidationPrintHumanReadableCallStack == false) {
      GetResourceDebugName(&local_38,param_1,param_2);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"\n%s: Type: %s, %s, Trace: 0x%p, %s\n");
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    else {
      ResolveAndFormatCallstack(&local_48,puVar2);
      GetResourceDebugName(&local_38,param_1,param_2);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"\n%s: Type: %s, %s, \nTrace: %s\n, %s\n");
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar3.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  else if (GRHIValidationPrintHumanReadableCallStack == false) {
    GetResourceDebugName(&local_38,param_1,param_2);
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"\n%s: Type: %s, %s, CreateTrace: 0x%p, %sTrace: 0x%p, %s\n");
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    ResolveAndFormatCallstack(&local_38,puVar2);
    ResolveAndFormatCallstack(&local_48,param_3);
    GetResourceDebugName(&local_58,param_1,param_2);
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"\n%s: Type: %s, %s, \nCreateTrace: %s\n, %sTrace: %s\n, %s\n");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return puVar2;
}

// LogNode @ 145ce1bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RHIValidation::LogNode(FRHIBreadcrumbNode *param_1,bool param_2,ERHIPipeline param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *_Str;
  size_t sVar4;
  FString *pFVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  wchar_t *local_180;
  FScriptContainerElement *local_178;
  <lambda_1> local_168 [8];
  FString local_160;
  FString local_150;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar8 = FCommandLine::Get();
    bOutputBreadcrumbLog = FParse::Param(pwVar8,L"RHIValidationBreadcrumbLog");
    _Init_thread_footer(&::_TSS0);
  }
  if (bOutputBreadcrumbLog != false) {
    pwVar8 = L"";
    if ((param_1 == FRHIBreadcrumbNode::Sentinel) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Current != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0xa7e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == (FRHIBreadcrumbNode *)0x0) {
      ::FString::FString(&local_160,L"");
    }
    else {
      uVar3 = `RHIValidation::CountLevels'::__l2::<lambda_1>::
              operator()<_RHIValidation::CountLevels_::__l2::<lambda_1>_>
                        (local_168,local_168,param_1->Parent);
      uVar6 = (ulonglong)uVar3;
      ::FString::FString(&local_160,L"");
      if (0 < (int)uVar3) {
        do {
          ::FString::AppendChars(&local_160,L"\t",1);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    _Str = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_138);
    sVar4 = wcslen(_Str);
    ::FString::AppendChars(&local_160,_Str,(int)sVar4);
    if (3 < (byte)LogRHI._0_1_) {
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_160.Data.ArrayNum != 0) {
        FVar7.Data = local_160.Data.AllocatorInstance.Data;
      }
      pFVar5 = GetRHIPipelineName(&local_150,param_3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      local_180 = L" END ";
      if (param_2) {
        local_180 = L"BEGIN";
      }
      local_188 = (FScriptContainerElement *)pwVar8;
      local_178 = FVar7.Data;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ModuleNameFromWindowsRHI @ 145ce1ea0

wchar_t * __cdecl ModuleNameFromWindowsRHI(EWindowsRHI param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FOverrideRHI *pFVar4;
  
  if (param_1 != D3D11) {
    if (param_1 == D3D12) {
      return L"D3D12RHI";
    }
    if (param_1 == Vulkan) {
      return L"VulkanRHI";
    }
    if (param_1 == OpenGL) {
      return L"OpenGLDrv";
    }
    if (param_1 == Imported) {
      pFVar4 = GetOverrideRHI();
      if ((pFVar4->ModuleName).Data.ArrayNum != 0) {
        return (wchar_t *)(pFVar4->ModuleName).Data.AllocatorInstance.Data;
      }
      return L"";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\Windows\\WindowsDynamicRHI.cpp"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"D3D11RHI";
}

// OnEnableConsole120FpsCVarRHIChanged @ 145ce2030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl OnEnableConsole120FpsCVarRHIChanged(IConsoleVariable *param_1)

{
  InternalEnableConsole120Fps = 0;
  if (GEnableConsole120Fps != 0) {
    GEnableConsole120Fps = 0;
    FGenericPlatformRHIFramePacer::SetFramePaceToSyncInterval(0x3c);
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      return;
    }
  }
  return;
}

// ParseDefaultWindowsRHI @ 145ce2090

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EWindowsRHI> __cdecl ParseDefaultWindowsRHI(void)

{
  bool bVar1;
  int iVar2;
  TOptional<EWindowsRHI> in_RCX;
  ForAnyElementType FVar3;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  *(undefined1 *)((longlong)in_RCX + 4) = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                     L"DefaultGraphicsRHI",&local_48,&GEngineIni);
  if (!bVar1) goto LAB_145ce2258;
  FString::FString(&local_18,L"DefaultGraphicsRHI_DX11");
  FString::FString(&local_28,L"DefaultGraphicsRHI_DX12");
  FString::FString(&local_38,L"DefaultGraphicsRHI_Vulkan");
  if (local_48.Data.ArrayNum == local_18.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar1 = iVar2 == 0;
      goto LAB_145ce2145;
    }
LAB_145ce221f:
    if ((TOptional<EWindowsRHI>)local_50 != in_RCX) {
      *(undefined4 *)in_RCX = 0;
LAB_145ce222a:
      *(undefined1 *)((longlong)in_RCX + 4) = 1;
    }
  }
  else {
    bVar1 = local_18.Data.ArrayNum + local_48.Data.ArrayNum == 1;
LAB_145ce2145:
    if (bVar1) goto LAB_145ce221f;
    if (local_48.Data.ArrayNum == local_28.Data.ArrayNum) {
      if (1 < local_48.Data.ArrayNum) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                           (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar1 = iVar2 == 0;
        iVar2 = local_48.Data.ArrayNum;
        goto LAB_145ce217a;
      }
LAB_145ce220e:
      if ((TOptional<EWindowsRHI>)local_54 == in_RCX) goto LAB_145ce222e;
      *(undefined4 *)in_RCX = 1;
      goto LAB_145ce222a;
    }
    bVar1 = local_28.Data.ArrayNum + local_48.Data.ArrayNum == 1;
    iVar2 = local_48.Data.ArrayNum;
LAB_145ce217a:
    if (bVar1) goto LAB_145ce220e;
    if (iVar2 == local_38.Data.ArrayNum) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                           (wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar1 = iVar2 == 0;
        iVar2 = local_48.Data.ArrayNum;
        goto LAB_145ce21ab;
      }
LAB_145ce21fd:
      if ((TOptional<EWindowsRHI>)local_58 == in_RCX) goto LAB_145ce222e;
      *(undefined4 *)in_RCX = 2;
      goto LAB_145ce222a;
    }
    bVar1 = local_38.Data.ArrayNum + iVar2 == 1;
LAB_145ce21ab:
    if (bVar1) goto LAB_145ce21fd;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (iVar2 != 0) {
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,L"DefaultGraphicsRHI_Default");
    if ((iVar2 != 0) && (1 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
LAB_145ce222e:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_145ce2258:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return in_RCX;
}

// ParseShaderPlatformsConfig @ 145ce2290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<EShaderPlatform,TSizedDefaultAllocator<32>_> * __cdecl
ParseShaderPlatformsConfig
          (TArray<EShaderPlatform,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [16];
  EShaderPlatform local_res18 [4];
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  iVar10 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",param_1,&local_48,
             &GEngineIni);
  uVar6 = local_48._8_8_ & 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  if (0 < local_48.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.ArrayNum,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
    uVar6 = local_48._8_8_ & 0xffffffff;
  }
  iVar4 = (int)uVar6;
  pFVar9 = local_48.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    iVar5 = (int)uVar6;
    if ((int)uVar6 != iVar4) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
      iVar5 = local_48.ArrayNum;
    }
    if (FVar8.Data == pFVar9) break;
    if (*(int *)(FVar8.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar8.Data;
    }
    pFVar3 = FName::FName(&local_res20,pwVar7);
    local_res18[0] = ShaderFormatNameToShaderPlatform(*pFVar3);
    TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EShaderPlatform>
              (__return_storage_ptr__,local_res18);
    uVar6 = local_48._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 != 0) {
    bVar1 = true;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    iVar5 = iVar10;
    do {
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + 1;
        if (iVar4 <= iVar2) break;
      } while (bVar1);
      if (bVar1) {
        if (iVar10 != iVar5) {
          memmove(pFVar9 + (longlong)iVar10 * 2,pFVar9 + (longlong)iVar5 * 2,
                  (longlong)(iVar2 - iVar5) * 2);
        }
        iVar10 = iVar10 + (iVar2 - iVar5);
      }
      bVar1 = (bool)(bVar1 ^ 1);
      iVar5 = iVar2;
    } while (iVar2 < iVar4);
    __return_storage_ptr__->ArrayNum = iVar10;
    iVar5 = local_48.ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar5);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseWindowsDynamicRHIConfig @ 145ce2450

FParsedWindowsDynamicRHIConfig * __cdecl
ParseWindowsDynamicRHIConfig(FParsedWindowsDynamicRHIConfig *__return_storage_ptr__)

{
  TOptional<EWindowsRHI> TVar1;
  FWindowsRHIConfig *pFVar2;
  FWindowsRHIConfig local_28;
  
  (__return_storage_ptr__->DefaultRHI).bIsSet = false;
  (__return_storage_ptr__->RHIConfigs).Elements[0].ShaderPlatforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[0].ShaderPlatforms.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[0].ShaderPlatforms.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[0].FeatureLevels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[0].FeatureLevels.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[0].FeatureLevels.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].ShaderPlatforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].ShaderPlatforms.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].ShaderPlatforms.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].FeatureLevels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].FeatureLevels.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[1].FeatureLevels.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].ShaderPlatforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].ShaderPlatforms.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].ShaderPlatforms.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].FeatureLevels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].FeatureLevels.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[2].FeatureLevels.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].ShaderPlatforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].ShaderPlatforms.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].ShaderPlatforms.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].FeatureLevels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].FeatureLevels.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[3].FeatureLevels.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].ShaderPlatforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].ShaderPlatforms.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].ShaderPlatforms.ArrayMax = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].FeatureLevels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].FeatureLevels.ArrayNum = 0;
  (__return_storage_ptr__->RHIConfigs).Elements[4].FeatureLevels.ArrayMax = 0;
  TVar1 = ParseDefaultWindowsRHI();
  if (TVar1 != (TOptional<EWindowsRHI>)__return_storage_ptr__) {
    if (*(char *)((longlong)TVar1 + 4) == '\0') {
      if ((__return_storage_ptr__->DefaultRHI).bIsSet != false) {
        (__return_storage_ptr__->DefaultRHI).bIsSet = false;
      }
    }
    else {
      (__return_storage_ptr__->DefaultRHI).TypedValue = *(EWindowsRHI *)TVar1;
      (__return_storage_ptr__->DefaultRHI).bIsSet = true;
    }
  }
  pFVar2 = ParseWindowsRHIConfig(&local_28,L"D3D11TargetedShaderFormats");
  FWindowsRHIConfig::operator=((__return_storage_ptr__->RHIConfigs).Elements,pFVar2);
  if (local_28.FeatureLevels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.FeatureLevels.AllocatorInstance.Data);
  }
  if (local_28.ShaderPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ShaderPlatforms.AllocatorInstance.Data);
  }
  pFVar2 = ParseWindowsRHIConfig(&local_28,L"D3D12TargetedShaderFormats");
  FWindowsRHIConfig::operator=((__return_storage_ptr__->RHIConfigs).Elements + 1,pFVar2);
  if (local_28.FeatureLevels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.FeatureLevels.AllocatorInstance.Data);
  }
  if (local_28.ShaderPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ShaderPlatforms.AllocatorInstance.Data);
  }
  pFVar2 = ParseWindowsRHIConfig(&local_28,L"VulkanTargetedShaderFormats");
  FWindowsRHIConfig::operator=((__return_storage_ptr__->RHIConfigs).Elements + 2,pFVar2);
  if (local_28.FeatureLevels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.FeatureLevels.AllocatorInstance.Data);
  }
  if (local_28.ShaderPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ShaderPlatforms.AllocatorInstance.Data);
  }
  ParseWindowsRHIConfig(&local_28,L"TargetedRHIs");
  if (local_28.ShaderPlatforms.ArrayNum != 0) {
    FParsedWindowsDynamicRHIConfig::MergeConfig(__return_storage_ptr__,D3D11,&local_28);
    FParsedWindowsDynamicRHIConfig::MergeConfig(__return_storage_ptr__,D3D12,&local_28);
    FParsedWindowsDynamicRHIConfig::MergeConfig(__return_storage_ptr__,Vulkan,&local_28);
    FParsedWindowsDynamicRHIConfig::MergeConfig(__return_storage_ptr__,OpenGL,&local_28);
  }
  if (local_28.FeatureLevels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.FeatureLevels.AllocatorInstance.Data);
  }
  if (local_28.ShaderPlatforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ShaderPlatforms.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseWindowsRHIConfig @ 145ce2650

FWindowsRHIConfig * __cdecl
ParseWindowsRHIConfig(FWindowsRHIConfig *__return_storage_ptr__,wchar_t *param_1)

{
  TArray<ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FWindowsRHIConfig *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  Type local_res18 [4];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<EShaderPlatform,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar1 = &__return_storage_ptr__->FeatureLevels;
  (__return_storage_ptr__->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShaderPlatforms).ArrayNum = 0;
  (__return_storage_ptr__->ShaderPlatforms).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FeatureLevels).ArrayNum = 0;
  (__return_storage_ptr__->FeatureLevels).ArrayMax = 0;
  pFVar8 = (FWindowsRHIConfig *)ParseShaderPlatformsConfig(&local_48,param_1);
  if (__return_storage_ptr__ != pFVar8) {
    pFVar5 = (__return_storage_ptr__->ShaderPlatforms).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (__return_storage_ptr__->ShaderPlatforms).AllocatorInstance.Data =
         (pFVar8->ShaderPlatforms).AllocatorInstance.Data;
    (pFVar8->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ShaderPlatforms).ArrayNum = (pFVar8->ShaderPlatforms).ArrayNum;
    (__return_storage_ptr__->ShaderPlatforms).ArrayMax = (pFVar8->ShaderPlatforms).ArrayMax;
    (pFVar8->ShaderPlatforms).ArrayNum = 0;
    (pFVar8->ShaderPlatforms).ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  uVar3 = (__return_storage_ptr__->ShaderPlatforms).ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&local_58,0,(int *)((longlong)&local_50 + 4));
  }
  pFVar9 = (__return_storage_ptr__->ShaderPlatforms).AllocatorInstance.Data;
  iVar4 = (__return_storage_ptr__->ShaderPlatforms).ArrayNum;
  pFVar5 = pFVar9 + (longlong)iVar4 * 2;
  while( true ) {
    if ((__return_storage_ptr__->ShaderPlatforms).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EShaderPlatform_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar5) break;
    uVar2 = *(ushort *)pFVar9;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar2].bContainsValidPlatformInfo == 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FWindowsRHIConfig *)(*pcVar6)();
      return pFVar8;
    }
    local_res18[0] = FGenericDataDrivenShaderPlatformInfo::Infos[uVar2].MaxFeatureLevel;
    TArray<enum_ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<enum_ERHIFeatureLevel::Type>(&local_58,local_res18);
    pFVar9 = pFVar9 + 2;
  }
  if (pTVar1 != (TArray<ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_> *)&local_58) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar1->AllocatorInstance).Data = local_58.Data;
    (__return_storage_ptr__->FeatureLevels).ArrayNum = (int)local_50;
    (__return_storage_ptr__->FeatureLevels).ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// PlatformCreateDynamicRHI @ 145ce2820

FDynamicRHI * __cdecl PlatformCreateDynamicRHI(void)

{
  IDynamicRHIModule *pIVar1;
  FDynamicRHI *pFVar2;
  Type local_res8 [2];
  wchar_t *local_res10 [3];
  
  pIVar1 = LoadDynamicRHIModule(local_res8,local_res10);
  if (pIVar1 != (IDynamicRHIModule *)0x0) {
    pFVar2 = (FDynamicRHI *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,local_res8[0]);
    GLoadedRHIModuleName = local_res10[0];
    return pFVar2;
  }
  return (FDynamicRHI *)0x0;
}

// RHICalculateFrameTime @ 145ce5000

void __cdecl RHICalculateFrameTime(void)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar2 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = dVar2 - GLastRHITimeInSeconds;
  GLastRHITimeInSeconds = dVar2;
  GRHIFrameTimeMS = (float)(dVar1 * __real_408f400000000000);
  return;
}

// RHIGetDefaultResourceState @ 145cea880

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ERHIAccess __cdecl RHIGetDefaultResourceState(EBufferUsageFlags param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  ERHIAccess EVar3;
  ERHIAccess EVar4;
  ERHIAccess EVar5;
  
  EVar3 = param_1 >> 0xc & VertexOrIndexBuffer;
  if ((param_1 >> 0xe & 1) != 0) {
    EVar3 = SRVMask|VertexOrIndexBuffer;
  }
  EVar4 = EVar3 | SRVMask;
  if ((param_1 >> 0x10 & 1) == 0) {
    EVar4 = EVar3;
  }
  EVar3 = EVar4 | BVHRead;
  if ((param_1 & AccelerationStructure) == None) {
    EVar3 = EVar4;
  }
  EVar4 = EVar3;
  if ((EVar3 & VertexOrIndexBuffer) == None) {
    EVar4 = None;
  }
  EVar5 = EVar3;
  if (!param_2) {
    if ((param_1 & UnorderedAccess) != None) {
      return UAVMask;
    }
    if ((param_1 & AccelerationStructure) != None) {
      return BVHWrite;
    }
    EVar5 = EVar4;
    if ((param_1 >> 8 & 1) != 0) {
      EVar5 = EVar3 | SRVMask;
    }
  }
  if ((EVar5 == None) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ResourceState != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                         ,0x2d4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return EVar5;
}

// RHIGetDefaultResourceState @ 145cea940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ERHIAccess __cdecl RHIGetDefaultResourceState(ETextureCreateFlags param_1,bool param_2)

{
  ERHIAccess EVar1;
  
  EVar1 = SRVMask;
  if (!param_2) {
    if ((param_1 & RenderTargetable) != None) {
      return RTV;
    }
    if ((param_1 & DepthStencilTargetable) != None) {
      return DSVWrite|DSVRead;
    }
    if ((param_1 >> 0x11 & 1) != 0) {
      return UAVMask;
    }
    if ((param_1 >> 0x12 & 1) != 0) {
      return Present;
    }
    if (((param_1 & ShaderResource) == None) && (EVar1 = SRVMask, (param_1 >> 10 & 1) != 0)) {
      EVar1 = Last;
    }
  }
  return EVar1;
}

// RHIGetFrameTime @ 145cea9c0

float __cdecl RHIGetFrameTime(void)

{
  return GRHIFrameTimeMS;
}

// RHIGetPreferredAdapterVendor @ 145cead20

EGpuVendorId __cdecl RHIGetPreferredAdapterVendor(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  EGpuVendorId EVar3;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"preferAMD");
  if (bVar1) {
    return Amd;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"preferIntel");
  if (bVar1) {
    return Intel;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"preferNvidia");
  if (bVar1) {
    return Nvidia;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"preferMS");
  if (!bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"preferMicrosoft");
    EVar3 = Microsoft;
    if (!bVar1) {
      EVar3 = Unknown;
    }
    return EVar3;
  }
  return Microsoft;
}

// RHIGetPresentThresholds @ 145ceade0

void __cdecl RHIGetPresentThresholds(float *param_1,float *param_2)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  pTVar1 = CVarRHIPresentThresholdTop.Ref;
  bVar2 = IsInParallelGameThread();
  lVar4 = 4;
  if (bVar2) {
LAB_145ceae21:
    lVar3 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_145ceae21;
    lVar3 = 4;
  }
  fVar5 = *(float *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_1 = fVar5;
  pTVar1 = CVarRHIPresentThresholdBottom.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) goto LAB_145ceae56;
  }
  lVar4 = 0;
LAB_145ceae56:
  fVar5 = *(float *)((longlong)pTVar1->ShadowedValue + lVar4);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_2 = fVar5;
  return;
}

// RHIGetSyncAllowVariable @ 145ceaf00

bool __cdecl RHIGetSyncAllowVariable(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarRHISyncAllowVariable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// RHIGetSyncInterval @ 145ceaf50

uint __cdecl RHIGetSyncInterval(void)

{
  uint uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  
  pTVar2 = CVarRHISyncInterval.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_145ceaf7d;
  }
  lVar4 = 0;
LAB_145ceaf7d:
  uVar1 = *(uint *)((longlong)pTVar2->ShadowedValue + lVar4);
  uVar5 = 0;
  if (0 < (int)uVar1) {
    uVar5 = uVar1;
  }
  return uVar5;
}

// RHIGetSyncSlackMS @ 145ceafa0

float __cdecl RHIGetSyncSlackMS(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarRHISyncSlackMS.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// RHIInitializeFlipTracking @ 145ceb280

void __cdecl RHIInitializeFlipTracking(void)

{
  code *pcVar1;
  bool bVar2;
  
  FRHIFrameOffsetThread::bInitialized = true;
  FRHIFrameOffsetThread::bRun = true;
  if (FRHIFrameOffsetThread::WaitEvent == (FEvent *)0x0) {
    FRHIFrameOffsetThread::WaitEvent = FGenericPlatformProcess::GetSynchEventFromPool(false);
  }
  if (FRHIFrameOffsetThread::Thread != (FRunnableThread *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Thread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                       ,0x143,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHIFrameOffsetThread::Thread =
       FRunnableThread::Create
                 ((FRunnable *)&FRHIFrameOffsetThread::Singleton,L"RHIFrameOffsetThread",0,
                  TPri_AboveNormal,0xffffffffffffffff,None);
  bVar2 = FGenericPlatformMisc::UseRenderThread();
  if (bVar2) {
    if (FRHIFrameFlipTrackingRunnable::Thread != (FRunnableThread *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Thread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                         ,0x1d7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FRHIFrameFlipTrackingRunnable::bInitialized = true;
    FRHIFrameFlipTrackingRunnable::bRun = true;
    FRHIFrameFlipTrackingRunnable::Thread =
         FRunnableThread::Create
                   ((FRunnable *)&FRHIFrameFlipTrackingRunnable::Singleton,L"RHIFrameFlipThread",0,
                    TPri_AboveNormal,0xffffffffffffffff,None);
  }
  return;
}

// RHIResourceTypeFromString @ 145cec150

ERHIResourceType __cdecl RHIResourceTypeFromString(FString *param_1)

{
  int iVar1;
  FRHIResourceTypeName *pFVar2;
  bool bVar3;
  FString local_18;
  
  pFVar2 = GRHIResourceTypeNames;
  while( true ) {
    FString::FString(&local_18,pFVar2->Name);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == local_18.Data.ArrayNum) {
      if (iVar1 < 2) {
        bVar3 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar3 = iVar1 == 0;
      }
    }
    else {
      bVar3 = iVar1 + local_18.Data.ArrayNum == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 1;
    if (pFVar2 == (FRHIResourceTypeName *)L"VertexDeclaration") {
      return RRT_None;
    }
  }
  return pFVar2->Type;
}

// RHISetFrameDebugInfo @ 145cec610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl RHISetFrameDebugInfo(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_1098 [32];
  ulong64 local_1048;
  ulong64 uStack_1040;
  ulong64 local_1038;
  uchar local_1028 [3];
  ulong64 local_1025;
  ulong64 local_101d;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145cec61e;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1098;
  EnterCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
  local_1048 = param_1;
  uStack_1040 = param_2;
  local_1038 = param_3;
  if (((FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data <=
        (FScriptContainerElement *)&local_1048) &&
      ((FScriptContainerElement *)&local_1048 <
       FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data +
       (longlong)FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayMax * 0x18)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum ==
      FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayMax) {
    FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance,
                    &FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayMax);
  }
  FVar3.Data = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data;
  lVar9 = (longlong)FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum;
  pFVar1 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data + lVar9 * 0x18;
  FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum =
       FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum + 1;
  *(ulong64 *)pFVar1 = local_1048;
  *(ulong64 *)(pFVar1 + 8) = uStack_1040;
  *(ulong64 *)(FVar3.Data + lVar9 * 0x18 + 0x10) = local_1038;
  if ((GVsyncInformationInsights != false) && (-1 < BookmarkChannel->Enabled)) {
    if (`public:_static_void___cdecl_FRHIFrameOffsetThread::SetFrameDebugInfo(unsigned___int64,unsigned___int64,unsigned___int64)'
        ::__l8::__BookmarkPoint363 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&`public:_static_void___cdecl_FRHIFrameOffsetThread::SetFrameDebugInfo(unsigned___int64,unsigned___int64,unsigned___int64)'
                  ::__l8::__BookmarkPoint363,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                 ,0x16b,L"Input P:%llu F:%llu");
      `public:_static_void___cdecl_FRHIFrameOffsetThread::SetFrameDebugInfo(unsigned___int64,unsigned___int64,unsigned___int64)'
      ::__l8::__BookmarkPoint363 = true;
    }
    uVar6 = local_1038;
    uVar5 = uStack_1040;
    uVar4 = local_1048;
    uVar8 = CallstackTrace_GetCurrentId();
    local_1028[0] = '\x02';
    local_1028[1] = 'H';
    local_1025 = uVar4;
    local_1028[2] = 0x48;
    local_101d = uVar5;
    FMiscTrace::OutputBookmarkInternalCycles
              (uVar6,&`public:_static_void___cdecl_FRHIFrameOffsetThread::SetFrameDebugInfo(unsigned___int64,unsigned___int64,unsigned___int64)'
                      ::__l8::__BookmarkPoint363,uVar8,0x13,local_1028);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
  return;
}

// RHISetVsyncDebugInfo @ 145ced990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl RHISetVsyncDebugInfo(FRHIFlipDetails *param_1)

{
  ulong64 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_1098 [32];
  uchar local_1058 [4];
  undefined8 local_1054;
  undefined8 local_104c;
  double local_1044;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1098;
  if ((FRHIFrameOffsetThread::Thread != (FRunnableThread *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("FRHIFrameOffsetThread::Thread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                         ,0x243,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
  dVar6 = __real_408f400000000000;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.PresentIndex._0_4_ =
       (undefined4)param_1->PresentIndex;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.PresentIndex._4_4_ =
       *(undefined4 *)((longlong)&param_1->PresentIndex + 4);
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.FlipTimeInSeconds._0_4_ =
       *(undefined4 *)&param_1->FlipTimeInSeconds;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.FlipTimeInSeconds._4_4_ =
       *(undefined4 *)((longlong)&param_1->FlipTimeInSeconds + 4);
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.VBlankTimeInSeconds = param_1->VBlankTimeInSeconds;
  FRHIFrameOffsetThread::Singleton.LastFlipFrame.VBlankTimeInCycles = param_1->VBlankTimeInCycles;
  uVar11 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar13 = (longlong)(int)uVar11 * 0x18;
    iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar12) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7.Data = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data;
      if (param_1->PresentIndex - 1 ==
          *(longlong *)
           (FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data + lVar13)) {
        uVar1 = param_1->VBlankTimeInCycles;
        if (*(ulonglong *)
             (FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data +
             lVar13 + 0x10) < uVar1) {
          GInputLatencyTime =
               uVar1 - *(ulonglong *)
                        (FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data +
                        lVar13 + 0x10);
        }
        if ((GVsyncInformationInsights != false) &&
           (iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum,
           -1 < BookmarkChannel->Enabled)) {
          if (__BookmarkPoint599 == false) {
            FMiscTrace::OutputBookmarkSpec
                      (&__BookmarkPoint599,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                       ,599,L"Vsync P:%llu F:%llu Lat:%.2f");
            __BookmarkPoint599 = true;
          }
          dVar5 = (double)GInputLatencyTime * FGenericPlatformTime::SecondsPerCycle64;
          uVar2 = *(undefined8 *)(FVar7.Data + lVar13 + 8);
          uVar3 = *(undefined8 *)(FVar7.Data + lVar13);
          uVar9 = CallstackTrace_GetCurrentId();
          local_1058[0] = '\x03';
          local_1058[1] = 'H';
          local_1058[2] = 'H';
          local_1058[3] = 0x88;
          local_1054 = uVar3;
          local_104c = uVar2;
          local_1044 = dVar5 * dVar6;
          FMiscTrace::OutputBookmarkInternalCycles(uVar1,&__BookmarkPoint599,uVar9,0x1c,local_1058);
          iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum;
        }
      }
      if (*(ulonglong *)(FVar7.Data + lVar13) <= param_1->PresentIndex) {
        uVar9 = 0;
        if ((int)uVar11 < iVar12) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum, bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (iVar12 - uVar11) + -1;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data + lVar13,
                  FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data +
                  (longlong)(iVar12 - iVar10) * 0x18,(longlong)iVar10 * 0x18);
          iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum;
        }
        FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum = iVar12 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance,
                   FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum,
                   &FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayMax);
        iVar12 = FRHIFrameOffsetThread::Singleton.FrameDebugInfos.ArrayNum;
      }
      lVar13 = lVar13 + -0x18;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
  return;
}

// RHIShutdownFlipTracking @ 145cedd40

void __cdecl RHIShutdownFlipTracking(void)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformMisc::UseRenderThread();
  if ((bVar1) && (FRHIFrameFlipTrackingRunnable::bInitialized != false)) {
    FRHIFrameFlipTrackingRunnable::bInitialized = false;
    if (FRHIFrameFlipTrackingRunnable::Thread != (FRunnableThread *)0x0) {
      (**(code **)(FRHIFrameFlipTrackingRunnable::Thread->_padding_ + 0x18))
                (FRHIFrameFlipTrackingRunnable::Thread,1);
      if (FRHIFrameFlipTrackingRunnable::Thread != (FRunnableThread *)0x0) {
        (**(code **)(FRHIFrameFlipTrackingRunnable::Thread->_padding_ + 0x30))
                  (FRHIFrameFlipTrackingRunnable::Thread,1);
      }
      FRHIFrameFlipTrackingRunnable::Thread = (FRunnableThread *)0x0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS);
    DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int>
              ((FFramePair *)
               FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data,
               FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum);
    FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum = 0;
    if (FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance,0,
                 &FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayMax);
    }
    FRHIFrameOffsetThread::Shutdown();
    LeaveCriticalSection((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS);
  }
  FRHIFrameOffsetThread::Shutdown();
  return;
}

// RHITriggerTaskEventOnFlip @ 145cee400

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RHITriggerTaskEventOnFlip(ulong64 param_1,FTaskEvent *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  FTaskEvent this;
  ForAnyElementType FVar4;
  bool bVar5;
  Type TVar6;
  longlong lVar7;
  bool local_res8 [8];
  
  this = *param_2;
  if (this != (FTaskEvent)0x0) {
    LOCK();
    *(atomic<unsigned_int> *)((longlong)this + 0x30) =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this + 0x30) + 1);
    UNLOCK();
  }
  bVar5 = FGenericPlatformMisc::UseRenderThread();
  if (bVar5) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS);
    if (FRHIFrameFlipTrackingRunnable::Thread == (FRunnableThread *)0x0) {
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId528,"SyncTrigger_Swapchain",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                   ,0x210);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId528);
      }
      if ((this != (FTaskEvent)0x0) &&
         (*(atomic<bool> *)((longlong)this + 0xd0) == (atomic<bool>)0x0)) {
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)this + 0x45);
        *(atomic<bool> *)((longlong)this + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)this + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this + 0x30) + 1);
          UNLOCK();
          if (-1 < TaskTrace::TaskChannel->Enabled) {
            TVar6 = UE::Tasks::Private::TranslatePriority
                              ((ETaskPriority)
                               ((ulonglong)*(undefined8 *)((longlong)this + 0xb0) >> 0x3b) &
                               (Inherit|Default),*(EExtendedTaskPriority *)((longlong)this + 0x44));
            TaskTrace::Launched((ulong64)*(atomic<unsigned___int64> *)((longlong)this + 0x50),
                                (wchar_t *)
                                (*(ulonglong *)((longlong)this + 0xb0) >> 6 & 0x1fffffffffffff),true
                                ,TVar6,0xd8);
          }
          local_res8[0] = true;
          UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)this,local_res8);
        }
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      if (FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum ==
          FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayMax) {
        FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance
                        ,&FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayMax);
      }
      FVar4.Data = FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data;
      lVar7 = (longlong)FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum;
      FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum =
           FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum + 1;
      *(ulong64 *)
       (FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data + lVar7 * 0x10) =
           param_1;
      *(FTaskEvent *)(FVar4.Data + lVar7 * 0x10 + 8) = this;
      if (this != (FTaskEvent)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)this + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this + 0x30) + 1);
        UNLOCK();
      }
      (**(code **)(FRHIFrameOffsetThread::WaitEvent->_padding_ + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS);
  }
  if (this != (FTaskEvent)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)this + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// RHIVendorIdToString @ 145cee9b0

wchar_t * __cdecl RHIVendorIdToString(EGpuVendorId param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 < 0x14e5) {
    if (param_1 == Broadcom) {
      return L"Broadcom";
    }
    if (param_1 < 0x10df) {
      if (param_1 == Nvidia) {
        return L"NVIDIA";
      }
      if (param_1 == NotQueried) {
        return L"Not Queried";
      }
      if (param_1 == Amd) {
        return L"AMD";
      }
      if (param_1 == ImgTec) {
        return L"ImgTec";
      }
      if (param_1 == Apple) {
        return L"Apple";
      }
    }
    else {
      if (param_1 == Arm) {
        return L"ARM";
      }
      if (param_1 == Microsoft) {
        return L"Microsoft";
      }
      if (param_1 == SamsungAMD) {
        return L"SamsungAMD";
      }
    }
  }
  else {
    if (param_1 < 0x8087) {
      if (param_1 == Intel) {
        return L"Intel";
      }
      if (param_1 != VeriSilicon) {
        if (param_1 != Qualcomm) {
          pwVar1 = L"Unknown";
          if (param_1 == Vivante) {
            pwVar1 = L"Vivante";
          }
          return pwVar1;
        }
        return L"Qualcomm";
      }
      return L"VeriSilicon";
    }
    if (param_1 == Kazan) {
      return L"Kazan";
    }
    if (param_1 == Codeplay) {
      return L"Codeplay";
    }
    if (param_1 == Mesa) {
      return L"Mesa";
    }
  }
  return L"Unknown";
}

// RHIVendorIdToString @ 145ceeac0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

wchar_t * __cdecl RHIVendorIdToString(void)

{
  if (GRHIGlobals.GpuInfo.VendorId < 0x14e5) {
    if (GRHIGlobals.GpuInfo.VendorId == 0x14e4) {
      return L"Broadcom";
    }
    if (GRHIGlobals.GpuInfo.VendorId < 0x10df) {
      if (GRHIGlobals.GpuInfo.VendorId == 0x10de) {
        return L"NVIDIA";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0) {
        return L"Not Queried";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0x1002) {
        return L"AMD";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0x1010) {
        return L"ImgTec";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0x106b) {
        return L"Apple";
      }
    }
    else {
      if (GRHIGlobals.GpuInfo.VendorId == 0x13b5) {
        return L"ARM";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0x1414) {
        return L"Microsoft";
      }
      if (GRHIGlobals.GpuInfo.VendorId == 0x144d) {
        return L"SamsungAMD";
      }
    }
  }
  else if (GRHIGlobals.GpuInfo.VendorId < 0x8087) {
    if (GRHIGlobals.GpuInfo.VendorId == 0x8086) {
      return L"Intel";
    }
    if (GRHIGlobals.GpuInfo.VendorId == 0x1eb1) {
      return L"VeriSilicon";
    }
    if (GRHIGlobals.GpuInfo.VendorId == 0x5143) {
      return L"Qualcomm";
    }
    if (GRHIGlobals.GpuInfo.VendorId == 0x7a05) {
      return L"Vivante";
    }
  }
  else {
    if (GRHIGlobals.GpuInfo.VendorId == 0x10003) {
      return L"Kazan";
    }
    if (GRHIGlobals.GpuInfo.VendorId == 0x10004) {
      return L"Codeplay";
    }
    if (GRHIGlobals.GpuInfo.VendorId == 0x10005) {
      return L"Mesa";
    }
  }
  return L"Unknown";
}

// ResolveAndFormatCallstack @ 145cf0e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
RHIValidation::ResolveAndFormatCallstack(FString *__return_storage_ptr__,ulong64 *param_1)

{
  bool bVar1;
  char *pcVar2;
  FString *pFVar3;
  uint uVar4;
  char *pcVar5;
  ulong64 *puVar6;
  int iVar7;
  undefined1 auStackY_478 [32];
  FString local_448;
  FString local_438;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_478;
  puVar6 = param_1 + 2;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar4 = 2;
  do {
    local_428[0] = '\0';
    pcVar5 = local_428;
    bVar1 = FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                      (uVar4,*puVar6,local_428,0x400,(FGenericCrashContext *)0x0);
    if (bVar1) {
      pcVar2 = strstr(local_428,"!");
      if (pcVar2 != (char *)0x0) {
        pcVar5 = pcVar2 + 1;
      }
    }
    pcVar2 = strstr(local_428,"UnknownFunction");
    if (pcVar2 == (char *)0x0) {
      pFVar3 = ::FString::FString(&local_438,pcVar5);
      ::FString::ConcatFC(&local_448,pFVar3,L"\r\n");
      iVar7 = local_448.Data.ArrayNum + -1;
      if (local_448.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_448.Data.AllocatorInstance.Data,iVar7);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 < 0x1e);
  return __return_storage_ptr__;
}

// SetDepthBoundsTest @ 145cf18c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetDepthBoundsTest(FRHICommandList *param_1,float param_2,float param_3,TMatrix<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  IRHICommandContext *pIVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  
  if (GRHIGlobals.SupportsDepthBoundsTest) {
    dVar1 = param_4->M[0][2];
    dVar2 = param_4->M[0][3];
    dVar3 = param_4->M[1][2];
    dVar4 = param_4->M[1][3];
    dVar5 = param_4->M[2][2];
    dVar6 = param_4->M[2][3];
    dVar7 = param_4->M[3][2];
    dVar8 = param_4->M[3][3];
    fVar11 = (float)((dVar3 * 0.0 + dVar1 * 0.0 + (double)param_3 * dVar5 +
                     __real_3ff0000000000000 * dVar7) /
                    (dVar4 * 0.0 + dVar2 * 0.0 + (double)param_3 * dVar6 +
                    __real_3ff0000000000000 * dVar8));
    fVar12 = (float)((dVar3 * 0.0 + dVar1 * 0.0 + (double)param_2 * dVar5 +
                     __real_3ff0000000000000 * dVar7) /
                    (dVar4 * 0.0 + dVar2 * 0.0 + (double)param_2 * dVar6 +
                    __real_3ff0000000000000 * dVar8));
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar12 <= fVar11) {
      fVar11 = 0.0;
      fVar12 = __real_3f800000;
    }
    if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar9 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
                    /* WARNING: Could not recover jumptable at 0x000145cf1a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pIVar9->_padding_ + 0x220))(pIVar9,fVar11,fVar12);
      return;
    }
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x18,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar10;
    *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
    puVar10[1] = 0;
    *(float *)(puVar10 + 2) = fVar11;
    *(float *)((longlong)puVar10 + 0x14) = fVar12;
    *puVar10 = &___7FRHICommandSetDepthBounds__6B_;
  }
  return;
}

// ShaderFormatNameToShaderPlatform @ 145cf1f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl ShaderFormatNameToShaderPlatform(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  FStaticShaderPlatformNames *pFVar4;
  uint uVar5;
  
  if (param_1 == NAME_PCD3D_SM6) {
    return SP_PCD3D_SM6;
  }
  if (param_1 == NAME_PCD3D_SM5) {
    return SP_PCD3D_SM5;
  }
  if (param_1 == NAME_PCD3D_ES3_1) {
    return SP_PCD3D_ES3_1;
  }
  if (param_1 == NAME_GLSL_150_ES31) {
    return SP_OPENGL_PCES3_1;
  }
  if (param_1 == NAME_GLSL_ES3_1_ANDROID) {
    return SP_OPENGL_ES3_1_ANDROID;
  }
  if ((param_1 == NAME_SF_METAL_ES3_1_IOS) || (param_1 == NAME_SF_METAL_ES3_1_IOS_DEPRECATED)) {
    return SP_METAL;
  }
  if ((param_1 == NAME_SF_METAL_SM5_IOS) || (param_1 == NAME_SF_METAL_SM5_IOS_DEPRECATED)) {
    return SP_METAL_MRT;
  }
  if ((param_1 != NAME_SF_METAL_ES3_1_TVOS) && (param_1 != NAME_SF_METAL_ES3_1_TVOS_DEPRECATED)) {
    if ((param_1 == NAME_SF_METAL_SM5_TVOS) || (param_1 == NAME_SF_METAL_SM5_TVOS_DEPRECATED)) {
      return SP_METAL_MRT_TVOS;
    }
    if (param_1 == NAME_SF_METAL_SM5) {
      return SP_METAL_SM5;
    }
    if (param_1 == NAME_SF_METAL_SM6) {
      return SP_METAL_SM6;
    }
    if (param_1 == NAME_SF_METAL_SIM) {
      return SP_METAL_SIM;
    }
    if ((param_1 == NAME_SF_METAL_ES3_1) || (param_1 == NAME_SF_METAL_MRT_MAC_DEPRECATED)) {
      return SP_METAL_ES3_1;
    }
    if (param_1 == NAME_VULKAN_ES3_1_ANDROID) {
      return SP_VULKAN_ES3_1_ANDROID;
    }
    if (param_1 != NAME_VULKAN_ES3_1) {
      if (param_1 == NAME_VULKAN_SM5) {
        return SP_VULKAN_SM5;
      }
      if (param_1 != NAME_VULKAN_SM6) {
        if (param_1 == NAME_VULKAN_SM5_ANDROID) {
          return SP_VULKAN_SM5_ANDROID;
        }
        pFVar4 = FStaticShaderPlatformNames::Get();
        uVar5 = 0x20;
        do {
          if ((0xf < (ushort)((EShaderPlatform)uVar5 - SP_StaticPlatform_First)) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("IsStaticPlatform(Platform)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIStaticShaderPlatformNames.h"
                                 ,0x30,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          if (param_1 == pFVar4->Platforms[(uVar5 & 0xffff) - 0x20].ShaderFormat) {
            return (EShaderPlatform)uVar5;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0x30);
        return SP_NumPlatforms;
      }
      return SP_VULKAN_SM6;
    }
    return SP_VULKAN_PCES3_1;
  }
  return SP_METAL_ES3_1_TVOS;
}

// ShaderFormatToLegacyShaderPlatform @ 145cf21c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl ShaderFormatToLegacyShaderPlatform(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  FStaticShaderPlatformNames *pFVar4;
  uint uVar5;
  
  if (param_1 == NAME_PCD3D_SM6) {
    return SP_PCD3D_SM6;
  }
  if (param_1 == NAME_PCD3D_SM5) {
    return SP_PCD3D_SM5;
  }
  if (param_1 == NAME_PCD3D_ES3_1) {
    return SP_PCD3D_ES3_1;
  }
  if (param_1 == NAME_GLSL_150_ES31) {
    return SP_OPENGL_PCES3_1;
  }
  if (param_1 == NAME_GLSL_ES3_1_ANDROID) {
    return SP_OPENGL_ES3_1_ANDROID;
  }
  if ((param_1 == NAME_SF_METAL_ES3_1_IOS) || (param_1 == NAME_SF_METAL_ES3_1_IOS_DEPRECATED)) {
    return SP_METAL;
  }
  if ((param_1 == NAME_SF_METAL_SM5_IOS) || (param_1 == NAME_SF_METAL_SM5_IOS_DEPRECATED)) {
    return SP_METAL_MRT;
  }
  if ((param_1 != NAME_SF_METAL_ES3_1_TVOS) && (param_1 != NAME_SF_METAL_ES3_1_TVOS_DEPRECATED)) {
    if ((param_1 == NAME_SF_METAL_SM5_TVOS) || (param_1 == NAME_SF_METAL_SM5_TVOS_DEPRECATED)) {
      return SP_METAL_MRT_TVOS;
    }
    if (param_1 == NAME_SF_METAL_SM5) {
      return SP_METAL_SM5;
    }
    if (param_1 == NAME_SF_METAL_SM6) {
      return SP_METAL_SM6;
    }
    if (param_1 == NAME_SF_METAL_SIM) {
      return SP_METAL_SIM;
    }
    if ((param_1 == NAME_SF_METAL_ES3_1) || (param_1 == NAME_SF_METAL_MRT_MAC_DEPRECATED)) {
      return SP_METAL_ES3_1;
    }
    if (param_1 == NAME_VULKAN_ES3_1_ANDROID) {
      return SP_VULKAN_ES3_1_ANDROID;
    }
    if (param_1 != NAME_VULKAN_ES3_1) {
      if (param_1 == NAME_VULKAN_SM5) {
        return SP_VULKAN_SM5;
      }
      if (param_1 != NAME_VULKAN_SM6) {
        if (param_1 == NAME_VULKAN_SM5_ANDROID) {
          return SP_VULKAN_SM5_ANDROID;
        }
        pFVar4 = FStaticShaderPlatformNames::Get();
        uVar5 = 0x20;
        do {
          if ((0xf < (ushort)((EShaderPlatform)uVar5 - SP_StaticPlatform_First)) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("IsStaticPlatform(Platform)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIStaticShaderPlatformNames.h"
                                 ,0x30,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          if (param_1 == pFVar4->Platforms[(uVar5 & 0xffff) - 0x20].ShaderFormat) {
            return (EShaderPlatform)uVar5;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0x30);
        return SP_NumPlatforms;
      }
      return SP_VULKAN_SM6;
    }
    return SP_VULKAN_PCES3_1;
  }
  return SP_METAL_ES3_1_TVOS;
}

// ShaderPlatformToPlatformName @ 145cf21d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __cdecl ShaderPlatformToPlatformName(EShaderPlatform param_1)

{
  FStaticShaderPlatformNames *pFVar1;
  undefined6 in_register_0000000a;
  FName FVar2;
  ushort in_DX;
  
  FVar2._2_6_ = in_register_0000000a;
  FVar2.ComparisonIndex.Value._0_2_ = param_1;
  switch(in_DX) {
  case 0:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x14:
  case 0x31:
  case 0x33:
    *(FName *)FVar2 = NAME_PLATFORM_WINDOWS;
    return FVar2;
  case 0xb:
  case 0xc:
  case 0x35:
    *(FName *)FVar2 = NAME_PLATFORM_IOS;
    return FVar2;
  case 0x10:
  case 0x16:
  case 0x34:
    *(FName *)FVar2 = NAME_PLATFORM_MAC;
    return FVar2;
  case 0x15:
  case 0x18:
  case 0x30:
    *(FName *)FVar2 = NAME_PLATFORM_ANDROID;
    return FVar2;
  case 0x1e:
  case 0x1f:
    *(FName *)FVar2 = NAME_PLATFORM_TVOS;
    return FVar2;
  }
  if ((ushort)(in_DX - 0x20) < 0x10) {
    pFVar1 = FStaticShaderPlatformNames::Get();
    *(FName *)FVar2 = pFVar1->Platforms[in_DX - 0x20].Name;
    return FVar2;
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// ShouldDefaultToPerformanceMode @ 145cf2320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ShouldDefaultToPerformanceMode(bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool local_res10 [8];
  int local_res18 [2];
  FString local_58;
  FString local_48;
  FWindowsGPUInfo local_38;
  
  if (ForceES31.bIsSet != false) {
    *param_1 = bForceD3D11;
    if (ForceES31.bIsSet == false) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = ForceES31.TypedValue;
    return bVar2;
  }
  local_38.VendorId = 0;
  local_38.DeviceId = 0;
  local_38.DedicatedVideoMemory = 0;
  local_38.AdapterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AdapterName.Data.ArrayNum = 0;
  local_38.AdapterName.Data.ArrayMax = 0;
  GetGPUInfo(&local_38);
  bVar2 = IsGPUInHardwareListForD3D11_ES31(&local_38,L"DeviceDefaultRHIList");
  if (bVar2) {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    ForceES31.TypedValue = true;
    ForceES31.bIsSet = true;
    bVar2 = true;
    *param_1 = true;
    bForceD3D11 = true;
    goto LAB_145cf2638;
  }
  bVar2 = FWindowsPlatformMisc::IsRunningOnBattery();
  local_res10[0] = false;
  FConfigCacheIni::GetBool(GConfig,L"PerformanceMode",L"bDefaultOnLaptops",local_res10,&GEngineIni);
  if ((local_res10[0] == false) || (!bVar2)) {
    local_res18[0] = 0;
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,L"PerformanceMode",L"MinCoreCount",local_res18,&GEngineIni);
    if (bVar2) {
      iVar4 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if (iVar4 < local_res18[0]) {
        if (4 < (byte)LogRHI._0_1_) {
          FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        goto LAB_145cf24d6;
      }
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    bVar2 = FConfigCacheIni::GetString
                      (GConfig,L"PerformanceMode",L"MinMemorySizeBucket",&local_58,&GEngineIni);
    if (bVar2) {
      bVar2 = FConfigCacheIni::GetString
                        (GConfig,L"PerformanceMode",L"MinIntegratedMemorySizeBucket",&local_48,
                         &GEngineIni);
      if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000145cf256e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                          switchD_145cf256e::switchdataD_145cf26d0))
                          (switchD_1501dbc7b::caseD_1.e_magic +
                           switchD_145cf256e::switchdataD_145cf26d0);
        return (bool)uVar3;
      }
    }
    ForceES31.TypedValue = false;
    ForceES31.bIsSet = true;
    bVar2 = false;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      ForceES31.TypedValue = true;
      ForceES31.bIsSet = true;
      bVar2 = true;
      goto LAB_145cf2638;
    }
LAB_145cf24d6:
    ForceES31.TypedValue = true;
    ForceES31.bIsSet = true;
    bVar2 = true;
  }
LAB_145cf2638:
  if (local_38.AdapterName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AdapterName.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StringFromRHIResourceType @ 145cf2a60

wchar_t * __cdecl StringFromRHIResourceType(ERHIResourceType param_1)

{
  FRHIResourceTypeName *pFVar1;
  
  pFVar1 = GRHIResourceTypeNames;
  do {
    if (pFVar1->Type == param_1) {
      return pFVar1->Name;
    }
    pFVar1 = pFVar1 + 1;
  } while (pFVar1 != (FRHIResourceTypeName *)L"VertexDeclaration");
  return L"<unknown>";
}

// ValidateBoundUniformBuffers @ 145cf38f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
ValidateBoundUniformBuffers
          (FRHIShader *param_1,FStaticUniformBuffers *param_2,FStageBoundUniformBuffers *param_3)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong local_res20;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  uVar11 = 0;
  switch(param_1->Frequency) {
  case SF_Vertex:
    break;
  case SF_Mesh:
    break;
  case SF_Amplification:
    break;
  case SF_Pixel:
    break;
  case SF_Geometry:
    break;
  case SF_Compute:
    break;
  case SF_NumStandardFrequencies:
    break;
  case SF_RayMiss:
    break;
  case SF_RayHitGroup:
    break;
  case SF_RayCallable:
    break;
  case SF_WorkGraphRoot:
    break;
  case SF_WorkGraphComputeNode:
  }
  iVar7 = (int)param_1->_padding_;
  if (iVar7 == (int)param_1->_padding_) {
    if (0 < iVar7) {
      local_res20 = 0;
      uVar9 = uVar11;
      do {
        uVar5 = 0;
        if ((int)uVar11 < iVar7) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = 0;
        iVar7 = *(int *)(param_1->_padding_ + local_res20 * 4);
        if (iVar7 != 0) {
          uVar5 = 0;
          if ((int)uVar11 < (int)param_1->_padding_) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar1 = *(byte *)(param_1->_padding_ + local_res20);
          if (((bVar1 == 0xff) || ((param_2->Bindings).ArrayNum <= (int)(uint)bVar1)) ||
             (lVar10 = *(longlong *)
                        ((param_2->Bindings).AllocatorInstance.Data + (ulonglong)bVar1 * 8),
             lVar10 == 0)) {
            if ((int)uVar11 < (param_3->Buffers).ArrayNum) {
              if (((int)uVar11 < 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar10 = *(longlong *)((param_3->Buffers).AllocatorInstance.Data + local_res20 * 8);
            }
            if (lVar10 == 0) {
              if (((int)uVar11 < 0) || ((param_1->Debug).UniformBufferNames.ArrayNum <= (int)uVar11)
                 ) {
                uVar9 = uVar9 | 8;
                pFVar6 = FString::FString(&local_70,L"<unknown>");
              }
              else {
                if (((int)uVar11 < 0) &&
                   (bVar4 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar9 = uVar9 | 4;
                pFVar6 = FName::ToString((FName *)((param_1->Debug).UniformBufferNames.
                                                   AllocatorInstance.Data +
                                                  (longlong)(int)uVar11 * 8),local_60);
              }
              pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
              (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar6->Data).ArrayNum = 0;
              (pFVar6->Data).ArrayMax = 0;
              if (((uVar9 & 8) != 0) &&
                 (uVar9 = uVar9 & 0xfffffff7,
                 local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (((uVar9 & 4) != 0) &&
                 (uVar9 = uVar9 & 0xfffffffb,
                 local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
              FString::PrintfImpl(&local_a0,
                                  L"Shader %s(%s): missing uniform buffer \"%s\" at index %d.");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_a0.Data.ArrayNum != 0) {
                FVar8.Data = local_a0.Data.AllocatorInstance.Data;
              }
              FValidationRHI::ReportValidationFailure((wchar_t *)FVar8.Data);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              goto LAB_145cf3d86;
            }
          }
          if (*(int *)(*(longlong *)(lVar10 + 0x40) + 0x88) != iVar7) {
            if (((int)uVar11 < 0) || ((param_1->Debug).UniformBufferNames.ArrayNum <= (int)uVar11))
            {
              uVar9 = uVar9 | 2;
              pFVar6 = FString::FString(&local_90,L"<unknown>");
            }
            else {
              if (((int)uVar11 < 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar9 = uVar9 | 1;
              pFVar6 = FName::ToString((FName *)((param_1->Debug).UniformBufferNames.
                                                 AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                                       ,&local_80);
            }
            pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
            if (((uVar9 & 2) != 0) &&
               (uVar9 = uVar9 & 0xfffffffd,
               local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (((uVar9 & 1) != 0) &&
               (uVar9 = uVar9 & 0xfffffffe,
               local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            FString::PrintfImpl(&local_b0,
                                L"Shader %s(%s): Invalid layout hash %u for uniform buffer \"%s\" at bind index %d (static: %s). Expecting a buffer called \"%s\", hash %u.)"
                               );
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_b0.Data.ArrayNum != 0) {
              FVar8.Data = local_b0.Data.AllocatorInstance.Data;
            }
            FValidationRHI::ReportValidationFailure((wchar_t *)FVar8.Data);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
          }
        }
LAB_145cf3d86:
        iVar7 = (int)param_1->_padding_;
        local_res20 = local_res20 + 1;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar7);
    }
  }
  else {
    FString::PrintfImpl(&local_c0,
                        L"Shader %s(%s): The number of layout hashes (%d) is different from the number of static slots (%d)."
                       );
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar8.Data = local_c0.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar8.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ValidateBuffer @ 145cf3f80

bool __cdecl
RHIValidation::ValidateBuffer
          (EShaderCodeResourceBindingType param_1,EBufferType param_2,bool param_3)

{
  bool bVar1;
  
  if (param_1 == Invalid) {
    return true;
  }
  bVar1 = IsResourceBindingTypeSRV(param_1);
  if (bVar1 == param_3) {
    if ((param_1 == ByteAddressBuffer) || (param_1 == RWByteAddressBuffer)) {
      return param_2 == Raw;
    }
    if ((param_1 == StructuredBuffer) || (param_1 == RWStructuredBuffer)) {
      return (byte)(param_2 - Structured) < 2;
    }
    if ((param_1 == Buffer) || (param_1 == RWBuffer)) {
      return param_2 == Typed;
    }
    if (param_1 == RaytracingAccelerationStructure) {
      return param_2 == AccelerationStructure;
    }
  }
  return false;
}

// ValidateDimension @ 145cf4410

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

bool __cdecl
RHIValidation::ValidateDimension
          (EShaderCodeResourceBindingType param_1,EDimension param_2,ERHITexturePlane param_3,
          bool param_4)

{
  bool bVar1;
  
  if (param_1 == Invalid) {
LAB_145cf4436:
    bVar1 = true;
  }
  else {
    bVar1 = IsResourceBindingTypeSRV(param_1);
    if (bVar1 == param_4) {
      if ((param_1 == RWStructuredBuffer) || (param_1 == StructuredBuffer)) {
        return param_3 == HTile;
      }
      if ((param_1 == RWByteAddressBuffer) || (param_1 == ByteAddressBuffer)) {
        return param_3 == CMask;
      }
      if ((param_1 == RWBuffer) || (param_1 == Buffer)) {
        if ((param_3 == CompressedSurface) || (param_3 == CMask)) goto LAB_145cf4436;
      }
      else {
        if ((param_1 < RWTexture2DArray) && ((0x2014U >> (param_1 & 0x1f) & 1) != 0)) {
          return param_2 == Texture2D;
        }
        if ((param_1 == Texture2DArray) || (param_1 == RWTexture2DArray)) {
          return (byte)(param_2 - Texture2DArray) < 2;
        }
        if ((param_1 == Texture3D) || (param_1 == RWTexture3D)) {
          return param_2 == Texture3D;
        }
        if ((param_1 == TextureCube) || (param_1 == RWTextureCube)) {
          return param_2 == NumBits;
        }
        if (param_1 == TextureCubeArray) {
          return param_2 == TextureCubeArray;
        }
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// ValidateDimension @ 145cf4510

bool __cdecl
RHIValidation::ValidateDimension
          (EShaderCodeResourceBindingType param_1,ETextureDimension param_2,bool param_3)

{
  if (param_1 == Invalid) {
    return true;
  }
  if ((param_1 < RWTexture2DArray) && ((0x2014U >> (param_1 & 0x1f) & 1) != 0)) {
    return param_2 == Texture2D;
  }
  if ((param_1 == Texture2DArray) || (param_1 == RWTexture2DArray)) {
    return (param_2 - Texture2DArray & 0xfd) == 0;
  }
  if ((param_1 == Texture3D) || (param_1 == RWTexture3D)) {
    return param_2 == Texture3D;
  }
  if ((param_1 != TextureCube) && (param_1 != RWTextureCube)) {
    if (param_1 == TextureCubeArray) {
      return param_2 == TextureCubeArray;
    }
    return false;
  }
  return param_2 == TextureCube;
}

// ValidateShaderParameters @ 145cf4ed0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
ValidateShaderParameters
          (FRHIShader *param_1,FTracker *param_2,FStaticUniformBuffers *param_3,
          FStageBoundUniformBuffers *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5,ERHIAccess param_6,
          EUAVMode param_7)

{
  int *piVar1;
  char cVar2;
  ERHIPipeline EVar3;
  ushort uVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHITexture *pFVar7;
  FRHIShaderResourceView *pFVar8;
  FRHIUnorderedAccessView *pFVar9;
  FRHIUniformBuffer *pFVar10;
  FRHIResource *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  FRHIShaderParameterResource *pFVar16;
  FRHIUnorderedAccessView **ppFVar17;
  FOperation *pFVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  FRHIShaderParameterResource *pFVar22;
  undefined4 uStack_264;
  undefined2 local_21b;
  undefined1 local_219;
  undefined2 local_213;
  undefined1 local_211;
  undefined2 local_20b;
  undefined1 local_209;
  undefined2 local_203;
  undefined1 local_201;
  FViewIdentity local_1f8;
  FViewIdentity local_1d0;
  FOperation local_1a8;
  FOperation local_160;
  FOperation local_118;
  FOperation local_d0;
  FOperation local_88;
  
  pFVar22 = param_5->DataPtr;
  pFVar16 = pFVar22 + param_5->ArrayNum;
  do {
    if (pFVar22 == pFVar16) {
      return;
    }
    switch(pFVar22->Type) {
    case Texture:
      pFVar7 = (FRHITexture *)pFVar22->Resource;
      if (pFVar7 != (FRHITexture *)0x0) {
        if (GRHIValidationEnabled != false) {
          RHIValidation::ValidateShaderResourceView(param_1,(uint)pFVar22->Index,pFVar7);
        }
        local_1a8.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)(**(code **)(pFVar7->_padding_ + 8))(&pFVar7->_padding_);
        EVar3 = param_2->Pipeline;
        uVar6 = (local_1a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
        LOCK();
        ((local_1a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_1a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        local_1a8._4_4_ = uStack_264;
        local_1a8.Type = Assert;
        local_1a8.field1_0x8.Data_AliasingOverlap.ResourceAfter =
             (FResource *)
             ((ulonglong)(local_1a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips <<
             0x20);
        local_1a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)((ulonglong)uVar6 << 0x20);
        local_1a8.field1_0x8._24_8_ = 0x100000000;
        local_1a8.field1_0x8._36_1_ = EVar3;
        local_1a8.field1_0x8._32_4_ = param_6;
        local_1a8.field1_0x8._37_2_ = param_5._5_2_;
        local_1a8.field1_0x8._39_1_ = param_5._7_1_;
        RHIValidation::FTracker::AddOp(param_2,&local_1a8);
      }
      break;
    case ResourceView:
      pFVar8 = (FRHIShaderResourceView *)pFVar22->Resource;
      if (pFVar8 != (FRHIShaderResourceView *)0x0) {
        if (GRHIValidationEnabled != false) {
          RHIValidation::ValidateShaderResourceView(param_1,(uint)pFVar22->Index,pFVar8);
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_1f8,*(FRHIViewableResource **)&pFVar8->field_0x18,
                   (FRHIViewDesc *)&pFVar8->field_0x20);
        EVar3 = param_2->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_1f8._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_1f8._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        local_160.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_1f8._padding_;
        local_160.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_1f8._padding_._4_1_;
        local_160.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_1f8._padding_._5_3_;
        local_160.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_1f8._padding_;
        local_160._4_4_ = uStack_264;
        local_160.Type = Assert;
        local_160.field1_0x8.Data_BeginTransition.Identity.Resource =
             (FResource *)local_1f8._padding_;
        local_160.field1_0x8._36_4_ = CONCAT13(local_219,CONCAT21(local_21b,EVar3));
        local_160.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_1f8._padding_;
        local_160.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_1f8._padding_._4_4_;
        local_160.field1_0x8.Data_BeginTransition.PreviousState.Access = param_6;
        RHIValidation::FTracker::AddOp(param_2,&local_160);
      }
      break;
    case UnorderedAccessView:
      if ((FRHIUnorderedAccessView *)pFVar22->Resource != (FRHIUnorderedAccessView *)0x0) {
        if (GRHIValidationEnabled != false) {
          RHIValidation::ValidateUnorderedAccessView
                    (param_1,(uint)pFVar22->Index,(FRHIUnorderedAccessView *)pFVar22->Resource);
        }
        pFVar9 = (FRHIUnorderedAccessView *)pFVar22->Resource;
        ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                             (param_2->UAVTrackers + (int)param_7,(uint)pFVar22->Index);
        *ppFVar17 = pFVar9;
      }
      break;
    case Sampler:
      break;
    case UniformBuffer:
      pFVar10 = (FRHIUniformBuffer *)pFVar22->Resource;
      if (pFVar10 != (FRHIUniformBuffer *)0x0) {
        if (GRHIValidationEnabled != false) {
          RHIValidation::ValidateUniformBuffer(param_1,(uint)pFVar22->Index,pFVar10);
        }
        uVar4 = pFVar22->Index;
        piVar1 = &(param_4->Buffers).ArrayNum;
        if ((uint)*piVar1 <= (uint)uVar4) {
          iVar19 = ((uint)uVar4 - *piVar1) + 1;
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar19,(ForAnyElementType *)param_4,piVar1,
                              &(param_4->Buffers).ArrayMax);
          memset((param_4->Buffers).AllocatorInstance.Data + (longlong)iVar15 * 8,0,
                 (longlong)iVar19 << 3);
        }
        if ((*piVar1 <= (int)(uint)uVar4) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(FRHIUniformBuffer **)((param_4->Buffers).AllocatorInstance.Data + (ulonglong)uVar4 * 8) =
             pFVar10;
        RHIValidation::FStaticUniformBuffers::ValidateSetShaderUniformBuffer(param_3,pFVar10);
      }
      break;
    case ResourceCollection:
      pFVar11 = pFVar22->Resource;
      if (pFVar11 != (FRHIResource *)0x0) {
        aVar5 = pFVar11[1].AtomicFlags.Packed;
        plVar20 = (longlong *)pFVar11[1]._padding_;
        if (((int)aVar5 < 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        plVar21 = plVar20 + (longlong)(int)aVar5 * 2;
        for (; plVar20 != plVar21; plVar20 = plVar20 + 2) {
          cVar2 = (char)plVar20[1];
          if (cVar2 == '\0') {
            lVar12 = *plVar20;
            if (lVar12 != 0) {
              local_88.field1_0x8.Data_BeginTransition.Identity.Resource =
                   (FResource *)(**(code **)(*(longlong *)(lVar12 + 0x28) + 8))(lVar12 + 0x28);
              EVar3 = param_2->Pipeline;
              uVar6 = (local_88.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
              LOCK();
              ((local_88.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
                   ((local_88.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter
                   + 1;
              UNLOCK();
              pFVar18 = &local_88;
              local_88._4_4_ = uStack_264;
              local_88.Type = Assert;
              local_88.field1_0x8.Data_AliasingOverlap.ResourceAfter =
                   (FResource *)
                   ((ulonglong)(local_88.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips
                   << 0x20);
              local_88.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
                   (void *)((ulonglong)uVar6 << 0x20);
              local_88.field1_0x8._24_8_ = 0x100000000;
              local_88.field1_0x8._36_1_ = EVar3;
              local_88.field1_0x8._32_4_ = param_6;
              local_88.field1_0x8._37_2_ = local_203;
              local_88.field1_0x8._39_1_ = local_201;
              goto LAB_145cf54e2;
            }
          }
          else if (cVar2 == '\x01') {
            lVar12 = *plVar20;
            if (lVar12 != 0) {
              local_d0.field1_0x8.Data_BeginTransition.Identity.Resource =
                   (FResource *)(**(code **)(*(longlong *)(lVar12 + 0x28) + 8))(lVar12 + 0x28);
              EVar3 = param_2->Pipeline;
              uVar6 = (local_d0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumArraySlices;
              LOCK();
              ((local_d0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
                   ((local_d0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter
                   + 1;
              UNLOCK();
              pFVar18 = &local_d0;
              local_d0._4_4_ = uStack_264;
              local_d0.Type = Assert;
              local_d0.field1_0x8.Data_AliasingOverlap.ResourceAfter =
                   (FResource *)
                   ((ulonglong)(local_d0.field1_0x8.Data_BeginTransition.Identity.Resource)->NumMips
                   << 0x20);
              local_d0.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
                   (void *)((ulonglong)uVar6 << 0x20);
              local_d0.field1_0x8._24_8_ = 0x100000000;
              local_d0.field1_0x8._36_1_ = EVar3;
              local_d0.field1_0x8._32_4_ = param_6;
              local_d0.field1_0x8._37_2_ = local_20b;
              local_d0.field1_0x8._39_1_ = local_209;
              goto LAB_145cf54e2;
            }
          }
          else if ((cVar2 == '\x02') && (lVar12 = *plVar20, lVar12 != 0)) {
            RHIValidation::FViewIdentity::FViewIdentity
                      (&local_1d0,*(FRHIViewableResource **)(lVar12 + 0x18),
                       (FRHIViewDesc *)(lVar12 + 0x20));
            EVar3 = param_2->Pipeline;
            LOCK();
            ((FThreadSafeCounter *)(local_1d0._padding_ + 0xa8))->Counter =
                 ((FThreadSafeCounter *)(local_1d0._padding_ + 0xa8))->Counter + 1;
            UNLOCK();
            pFVar18 = &local_118;
            local_118._4_4_ = uStack_264;
            local_118.Type = Assert;
            local_118.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
                 (undefined4)local_1d0._padding_;
            local_118.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_1d0._padding_._4_1_;
            local_118.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
                 local_1d0._padding_._5_3_;
            local_118.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_1d0._padding_;
            local_118.field1_0x8.Data_BeginTransition.Identity.Resource =
                 (FResource *)local_1d0._padding_;
            local_118.field1_0x8._36_4_ = CONCAT13(local_211,CONCAT21(local_213,EVar3));
            local_118.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
                 (uint)local_1d0._padding_;
            local_118.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
                 local_1d0._padding_._4_4_;
            local_118.field1_0x8.Data_BeginTransition.PreviousState.Access = param_6;
LAB_145cf54e2:
            RHIValidation::FTracker::AddOp(param_2,pFVar18);
          }
        }
      }
      break;
    default:
      bVar14 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                          ,0xe72,L"Unhandled resource type?");
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    pFVar22 = pFVar22 + 1;
  } while( true );
}

// ValidateShaderResourceView @ 145cf5550

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

void __cdecl
RHIValidation::ValidateShaderResourceView
          (FRHIShader *param_1,uint param_2,FRHIShaderResourceView *param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  FName local_res20;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FViewIdentity local_a0;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_3 != (FRHIShaderResourceView *)0x0) {
    FViewIdentity::FViewIdentity
              (&local_a0,*(FRHIViewableResource **)&param_3->field_0x18,
               (FRHIViewDesc *)&param_3->field_0x20);
    uVar5 = (param_1->DebugStrideValidationData).ArrayNum;
    uVar10 = 0;
    pFVar2 = (param_1->DebugStrideValidationData).AllocatorInstance.Data;
    uVar16 = (ushort)param_2;
    uVar15 = uVar5;
    uVar11 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar14 = uVar15 >> 1;
        uVar10 = uVar11;
        if (*(ushort *)(pFVar2 + (longlong)(int)(uVar14 + uVar11) * 4) < uVar16) {
          uVar10 = uVar14 + uVar11 + (uVar15 & 1);
        }
        uVar15 = uVar14;
        uVar11 = uVar10;
      } while (uVar14 != 0);
    }
    pwVar9 = (wchar_t *)0x0;
    pwVar12 = L"";
    if ((((int)uVar10 < (int)uVar5) && (*(ushort *)(pFVar2 + (longlong)(int)uVar10 * 4) <= uVar16))
       && (uVar10 != 0xffffffff)) {
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      if (local_a0._padding_ != 0) {
        iVar6 = *(int *)(local_a0._padding_ + 0x30);
        iVar13 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar13 = 0;
        }
        if (iVar13 != 0) {
          if (iVar6 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(local_a0._padding_ + 0x28);
          }
        }
        ::FString::operator=(&local_188,pwVar9);
      }
      if (local_188.Data.ArrayNum < 2) {
        local_res20.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
        local_res20.Number = *(uint *)&param_3->field_0x14;
        pFVar7 = ::FName::ToString(&local_res20,&local_78);
        if (&local_188 != pFVar7) {
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          local_188.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.Data.ArrayNum = (pFVar7->Data).ArrayNum;
          local_188.Data.ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = 0;
      if ((int)uVar10 < (param_1->DebugStrideValidationData).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
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
      if ((*(short *)((param_1->DebugStrideValidationData).AllocatorInstance.Data +
                     (longlong)(int)uVar10 * 4 + 2) != (short)local_a0.Stride) &&
         (param_3->field_0x22 != '\x03')) {
        ::FString::PrintfImpl
                  (&local_138,
                   L"Shader %s: Buffer stride for \"%s\" must match structure size declared in the shader"
                  );
        ::FString::PrintfImpl(&local_f0,L"\nBind point: %d, HLSL size: %d, Buffer Size: %d");
        iVar13 = local_f0.Data.ArrayNum + -1;
        if (local_f0.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(&local_138,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar13);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_138.Data.ArrayNum != 0) {
          FVar8.Data = local_138.Data.AllocatorInstance.Data;
        }
        FValidationRHI::ReportValidationFailure((wchar_t *)FVar8.Data);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    uVar5 = (param_1->DebugSRVTypeValidationData).ArrayNum;
    if (uVar5 != 0) {
      pFVar2 = (param_1->DebugSRVTypeValidationData).AllocatorInstance.Data;
      iVar13 = 0;
      uVar15 = uVar5;
      if (0 < (int)uVar5) {
        do {
          iVar6 = (uVar15 >> 1) + iVar13;
          if (*(ushort *)(pFVar2 + (longlong)iVar6 * 4) < uVar16) {
            iVar13 = (uVar15 & 1) + iVar6;
          }
          uVar11 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
        } while (uVar11 != 0);
      }
      if (((iVar13 < (int)uVar5) && (*(ushort *)(pFVar2 + (longlong)iVar13 * 4) <= uVar16)) &&
         (iVar13 != -1)) {
        if ((iVar13 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (param_1->DebugSRVTypeValidationData).AllocatorInstance.Data
                [(longlong)iVar13 * 4 + 2];
        if ((param_3->field_0x20 == '\0') || (param_3->field_0x20 == '\x01')) {
          bVar4 = ValidateBuffer((EShaderCodeResourceBindingType)FVar1,param_3->field_0x22,true);
          if (bVar4) {
            return;
          }
          pwVar9 = (wchar_t *)0x0;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_168.Data.ArrayNum = 0;
          local_168.Data.ArrayMax = 0;
          if (local_a0._padding_ != 0) {
            iVar6 = *(int *)(local_a0._padding_ + 0x30);
            iVar13 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              if (iVar6 == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(local_a0._padding_ + 0x28);
              }
            }
            ::FString::operator=(&local_168,pwVar9);
          }
          if (local_168.Data.ArrayNum < 2) {
            local_100.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
            local_100.Number = *(uint *)&param_3->field_0x14;
            pFVar7 = ::FName::ToString(&local_100,&local_58);
            if (&local_168 != pFVar7) {
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              local_168.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_168.Data.ArrayNum = (pFVar7->Data).ArrayNum;
              local_168.Data.ArrayMax = (pFVar7->Data).ArrayMax;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          ::FString::PrintfImpl
                    (&local_118,
                     L"Shader %s: Buffer type for SRV \"%s\" must match buffer type declared in the shader"
                    );
          FRHIViewDesc::GetBufferTypeString(param_3->field_0x22);
          GetShaderCodeResourceBindingTypeName((EShaderCodeResourceBindingType)FVar1);
          ::FString::PrintfImpl(&local_d0,L"\nBind point: %d, HLSL Type: %s, Actual Type: %s");
          iVar13 = local_d0.Data.ArrayNum + -1;
          if (local_d0.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_118,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar13);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.ArrayNum != 0) {
            pwVar12 = (wchar_t *)local_118.Data.AllocatorInstance.Data;
          }
          FValidationRHI::ReportValidationFailure(pwVar12);
          FVar8.Data = local_168.Data.AllocatorInstance.Data;
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
            FVar8.Data = local_168.Data.AllocatorInstance.Data;
          }
        }
        else {
          bVar4 = ValidateDimension((EShaderCodeResourceBindingType)FVar1,
                                    (byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits),
                                    param_3->field_0x22 & Num,true);
          if (bVar4) {
            return;
          }
          pwVar9 = (wchar_t *)0x0;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          if (local_a0._padding_ != 0) {
            iVar6 = *(int *)(local_a0._padding_ + 0x30);
            iVar13 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              if (iVar6 == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(local_a0._padding_ + 0x28);
              }
            }
            ::FString::operator=(&local_178,pwVar9);
          }
          if (local_178.Data.ArrayNum < 2) {
            local_108.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
            local_108.Number = *(uint *)&param_3->field_0x14;
            pFVar7 = ::FName::ToString(&local_108,&local_68);
            if (&local_178 != pFVar7) {
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              local_178.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.Data.ArrayNum = (pFVar7->Data).ArrayNum;
              local_178.Data.ArrayMax = (pFVar7->Data).ArrayMax;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          ::FString::PrintfImpl
                    (&local_128,
                     L"Shader %s: Dimension for SRV \"%s\" must match type declared in the shader");
          FRHIViewDesc::GetTextureDimensionString
                    ((byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits));
          GetShaderCodeResourceBindingTypeName((EShaderCodeResourceBindingType)FVar1);
          ::FString::PrintfImpl(&local_e0,L"\nBind point: %d, HLSL Type: %s, Actual Dimension: %s");
          iVar13 = local_e0.Data.ArrayNum + -1;
          if (local_e0.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_128,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar13);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.ArrayNum != 0) {
            pwVar12 = (wchar_t *)local_128.Data.AllocatorInstance.Data;
          }
          FValidationRHI::ReportValidationFailure(pwVar12);
          FVar8.Data = local_178.Data.AllocatorInstance.Data;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            FVar8.Data = local_178.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        pwVar9 = (wchar_t *)0x0;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        if (local_a0._padding_ != 0) {
          iVar13 = *(int *)(local_a0._padding_ + 0x30);
          iVar6 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            if (iVar13 == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)(local_a0._padding_ + 0x28);
            }
          }
          ::FString::operator=(&local_158,pwVar9);
        }
        if (local_158.Data.ArrayNum < 2) {
          local_f8.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
          local_f8.Number = *(uint *)&param_3->field_0x14;
          pFVar7 = ::FName::ToString(&local_f8,&local_48);
          if (&local_158 != pFVar7) {
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            local_158.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_158.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_158.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ::FString::PrintfImpl
                  (&local_148,
                   L"Shader %s: No bind point found for SRV \"%s\" possible UAV/SRV mismatch");
        if ((param_3->field_0x20 == '\0') || (param_3->field_0x20 == '\x01')) {
          FRHIViewDesc::GetBufferTypeString(param_3->field_0x22);
          ::FString::PrintfImpl(&local_b0,L"\nBind point: %d, Type: %s");
          iVar13 = local_b0.Data.ArrayNum + -1;
          if (local_b0.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar13);
          local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
        }
        else {
          FRHIViewDesc::GetTextureDimensionString
                    ((byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits));
          ::FString::PrintfImpl(&local_c0,L"\nBind point: %d, Type: %s");
          iVar13 = local_c0.Data.ArrayNum + -1;
          if (local_c0.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar13);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_148.Data.ArrayNum != 0) {
          pwVar12 = (wchar_t *)local_148.Data.AllocatorInstance.Data;
        }
        FValidationRHI::ReportValidationFailure(pwVar12);
        FVar8.Data = local_158.Data.AllocatorInstance.Data;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
          FVar8.Data = local_158.Data.AllocatorInstance.Data;
        }
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
  }
  return;
}

// ValidateShaderResourceView @ 145cf5e00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
RHIValidation::ValidateShaderResourceView(FRHIShader *param_1,uint param_2,FRHITexture *param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  char cVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint uVar12;
  FName local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_3 == (FRHITexture *)0x0) {
    return;
  }
  uVar4 = (param_1->DebugSRVTypeValidationData).ArrayNum;
  if (uVar4 == 0) {
    return;
  }
  pFVar5 = (param_1->DebugSRVTypeValidationData).AllocatorInstance.Data;
  iVar11 = 0;
  uVar12 = uVar4;
  if (0 < (int)uVar4) {
    do {
      iVar1 = (uVar12 >> 1) + iVar11;
      if (*(ushort *)(pFVar5 + (longlong)iVar1 * 4) < (ushort)param_2) {
        iVar11 = iVar1 + (uVar12 & 1);
      }
      uVar7 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar7 != 0);
  }
  if ((((int)uVar4 <= iVar11) || ((ushort)param_2 < *(ushort *)(pFVar5 + (longlong)iVar11 * 4))) ||
     (iVar11 == -1)) {
    ::FString::PrintfImpl
              (&local_58,
               L"Shader %s: No bind point found at BindIndex \"%d\" possible UAV/SRV mismatch");
    lVar9 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
    GetTextureDimensionString(*(ETextureDimension *)(lVar9 + 0x32));
    ::FString::PrintfImpl(&local_38,L"\nBind point: %d, Type: %s");
    iVar11 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar11);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar10.Data);
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    goto LAB_145cf611e;
  }
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar2 = (param_1->DebugSRVTypeValidationData).AllocatorInstance.Data[(longlong)iVar11 * 4 + 2];
  lVar9 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  cVar3 = *(char *)(lVar9 + 0x32);
  if (FVar2 == (FScriptContainerElement)0x0) {
    return;
  }
  if (((byte)FVar2 < 0xe) && ((0x2014U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
    bVar8 = cVar3 == '\0';
LAB_145cf5f4a:
    if (bVar8) {
      return;
    }
  }
  else {
    if ((FVar2 != (FScriptContainerElement)0x3) && (FVar2 != (FScriptContainerElement)0xe)) {
      if ((FVar2 == (FScriptContainerElement)0x5) || (FVar2 == (FScriptContainerElement)0xf)) {
        bVar8 = cVar3 == '\x02';
      }
      else if ((FVar2 == (FScriptContainerElement)0x6) || (FVar2 == (FScriptContainerElement)0x10))
      {
        bVar8 = cVar3 == '\x03';
      }
      else {
        if (FVar2 != (FScriptContainerElement)0x7) goto LAB_145cf5f62;
        bVar8 = cVar3 == '\x04';
      }
      goto LAB_145cf5f4a;
    }
    if ((cVar3 - 1U & 0xfd) == 0) {
      return;
    }
  }
LAB_145cf5f62:
  local_res18 = (FName)param_3->_padding_;
  ::FName::ToString(&local_res18,&local_28);
  ::FString::PrintfImpl
            (&local_68,
             L"Shader %s: Dimension for Texture %s at BindIndex \"%d\" must match type declared in the shader"
            );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar9 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  GetTextureDimensionString(*(ETextureDimension *)(lVar9 + 0x32));
  GetShaderCodeResourceBindingTypeName((EShaderCodeResourceBindingType)FVar2);
  ::FString::PrintfImpl(&local_48,L"\nBind point: %d, HLSL Type: %s, Actual Dimension: %s");
  iVar11 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar11);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
  }
  FValidationRHI::ReportValidationFailure((wchar_t *)FVar10.Data);
LAB_145cf611e:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateUniformBuffer @ 145cf6760

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
RHIValidation::ValidateUniformBuffer(FRHIShader *param_1,uint param_2,FRHIUniformBuffer *param_3)

{
  FRHIUniformBufferLayout *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_3 != (FRHIUniformBuffer *)0x0) {
    pFVar1 = (param_3->Layout).Reference;
    uVar5 = (uint)param_1->_padding_;
    if (param_2 < uVar5) {
      uVar8 = 0;
      if ((int)param_2 < (int)uVar5) {
        uVar8 = ~param_2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)(param_1->_padding_ + (longlong)(int)param_2 * 4);
      if ((uVar5 != 0) && (pFVar1->Hash != uVar5)) {
        ::FString::PrintfImpl
                  (&local_48,
                   L"Shader %s: Invalid layout hash %u for uniform buffer \"%s\" at bind index %u, expecting %u"
                  );
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar6.Data = local_48.Data.AllocatorInstance.Data;
        }
        FValidationRHI::ReportValidationFailure((wchar_t *)FVar6.Data);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = (param_1->DebugUBSizeValidationData).ArrayNum;
      iVar9 = 0;
      pFVar2 = (param_1->DebugUBSizeValidationData).AllocatorInstance.Data;
      iVar7 = 0;
      if (0 < (int)uVar5) {
        do {
          uVar8 = uVar5 >> 1;
          iVar9 = iVar7;
          if (*(ushort *)(pFVar2 + (longlong)(int)(uVar8 + iVar7) * 8) < (ushort)param_2) {
            iVar9 = uVar8 + iVar7 + (uVar5 & 1);
          }
          uVar5 = uVar8;
          iVar7 = iVar9;
        } while (uVar8 != 0);
        uVar5 = (param_1->DebugUBSizeValidationData).ArrayNum;
      }
      if (((iVar9 < (int)uVar5) && (*(ushort *)(pFVar2 + (longlong)iVar9 * 8) <= (ushort)param_2))
         && (iVar9 != -1)) {
        if ((iVar9 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((param_1->DebugUBSizeValidationData).AllocatorInstance.Data +
                         (longlong)iVar9 * 8 + 4);
        if ((uVar5 != 0) && (uVar8 = FRHIUniformBuffer::GetSize(param_3), uVar8 < uVar5)) {
          ::FString::PrintfImpl(&local_68,L"Shader %s: Uniform buffer \"%s\" has unexpected size");
          FRHIUniformBuffer::GetSize(param_3);
          ::FString::PrintfImpl(&local_38,L"\nBind point: %d, HLSL size: %d, Actual size: %d");
          iVar7 = local_38.Data.ArrayNum + -1;
          if (local_38.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar6.Data = local_68.Data.AllocatorInstance.Data;
          }
          FValidationRHI::ReportValidationFailure((wchar_t *)FVar6.Data);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else {
      ::FString::PrintfImpl
                (&local_58,
                 L"Shader %s: Invalid bind index %u for uniform buffer \"%s\" (UB table size: %d)");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar6.Data = local_58.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar6.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ValidateUnorderedAccessView @ 145cf6ae0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

void __cdecl
RHIValidation::ValidateUnorderedAccessView
          (FRHIShader *param_1,uint param_2,FRHIUnorderedAccessView *param_3)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FName local_res18;
  FName local_res20;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FViewIdentity local_60;
  
  if (param_3 != (FRHIUnorderedAccessView *)0x0) {
    FViewIdentity::FViewIdentity
              (&local_60,*(FRHIViewableResource **)&param_3->field_0x18,
               (FRHIViewDesc *)&param_3->field_0x20);
    uVar2 = (param_1->DebugUAVTypeValidationData).ArrayNum;
    if (uVar2 != 0) {
      pFVar3 = (param_1->DebugUAVTypeValidationData).AllocatorInstance.Data;
      pwVar10 = (wchar_t *)0x0;
      iVar13 = 0;
      uVar12 = uVar2;
      iVar11 = iVar13;
      if (0 < (int)uVar2) {
        do {
          iVar7 = (uVar12 >> 1) + iVar11;
          if (*(ushort *)(pFVar3 + (longlong)iVar7 * 4) < (ushort)param_2) {
            iVar11 = iVar7 + (uVar12 & 1);
          }
          uVar5 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar5 != 0);
      }
      if (((iVar11 < (int)uVar2) && (*(ushort *)(pFVar3 + (longlong)iVar11 * 4) <= (ushort)param_2))
         && (iVar11 != -1)) {
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1 = (param_1->DebugUAVTypeValidationData).AllocatorInstance.Data
                [(longlong)iVar11 * 4 + 2];
        if ((param_3->field_0x20 == '\0') || (param_3->field_0x20 == '\x01')) {
          bVar6 = ValidateBuffer((EShaderCodeResourceBindingType)FVar1,param_3->field_0x22,false);
          if (bVar6) {
            return;
          }
          pwVar10 = (wchar_t *)0x0;
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          if (local_60._padding_ != 0) {
            iVar11 = *(int *)(local_60._padding_ + 0x30);
            iVar13 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              if (iVar11 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = *(wchar_t **)(local_60._padding_ + 0x28);
              }
            }
            ::FString::operator=(&local_128,pwVar10);
          }
          if (local_128.Data.ArrayNum < 2) {
            local_res20.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
            local_res20.Number = *(uint *)&param_3->field_0x14;
            pFVar8 = ::FName::ToString(&local_res20,&local_80);
            if (&local_128 != pFVar8) {
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              local_128.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
              (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_128.Data.ArrayNum = (pFVar8->Data).ArrayNum;
              local_128.Data.ArrayMax = (pFVar8->Data).ArrayMax;
              (pFVar8->Data).ArrayNum = 0;
              (pFVar8->Data).ArrayMax = 0;
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          FRHIShader::GetShaderName(param_1);
          ::FString::PrintfImpl
                    (&local_e8,
                     L"Shader %s: Buffer type for UAV \"%s\" must match buffer type declared in the shader"
                    );
          FRHIViewDesc::GetBufferTypeString(param_3->field_0x22);
          GetShaderCodeResourceBindingTypeName((EShaderCodeResourceBindingType)FVar1);
          ::FString::PrintfImpl(&local_c0,L"\nBind point: %d, HLSL Type: %s, Actual Type: %s");
          iVar11 = local_c0.Data.ArrayNum + -1;
          if (local_c0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          ::FString::AppendChars(&local_e8,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar11);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_e8.Data.ArrayNum != 0) {
            FVar9.Data = local_e8.Data.AllocatorInstance.Data;
          }
          FValidationRHI::ReportValidationFailure((wchar_t *)FVar9.Data);
          FVar9.Data = local_128.Data.AllocatorInstance.Data;
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            FVar9.Data = local_128.Data.AllocatorInstance.Data;
          }
        }
        else {
          bVar6 = ValidateDimension((EShaderCodeResourceBindingType)FVar1,
                                    (byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits),
                                    param_3->field_0x22 & Num,false);
          if (bVar6) {
            return;
          }
          pwVar10 = (wchar_t *)0x0;
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          if (local_60._padding_ != 0) {
            iVar11 = *(int *)(local_60._padding_ + 0x30);
            iVar13 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              if (iVar11 == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = *(wchar_t **)(local_60._padding_ + 0x28);
              }
            }
            ::FString::operator=(&local_138,pwVar10);
          }
          if (local_138.Data.ArrayNum < 2) {
            local_res18.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
            local_res18.Number = *(uint *)&param_3->field_0x14;
            pFVar8 = ::FName::ToString(&local_res18,&local_90);
            if (&local_138 != pFVar8) {
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              local_138.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
              (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_138.Data.ArrayNum = (pFVar8->Data).ArrayNum;
              local_138.Data.ArrayMax = (pFVar8->Data).ArrayMax;
              (pFVar8->Data).ArrayNum = 0;
              (pFVar8->Data).ArrayMax = 0;
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          ::FString::PrintfImpl
                    (&local_f8,
                     L"Shader %s: Dimension for UAV \"%s\" must match type declared in the shader");
          FRHIViewDesc::GetTextureDimensionString
                    ((byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits));
          GetShaderCodeResourceBindingTypeName((EShaderCodeResourceBindingType)FVar1);
          ::FString::PrintfImpl(&local_d0,L"\nBind point: %d, HLSL Type: %s, Actual Dimension: %s");
          iVar11 = local_d0.Data.ArrayNum + -1;
          if (local_d0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          ::FString::AppendChars(&local_f8,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar11);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            FVar9.Data = local_f8.Data.AllocatorInstance.Data;
          }
          FValidationRHI::ReportValidationFailure((wchar_t *)FVar9.Data);
          FVar9.Data = local_138.Data.AllocatorInstance.Data;
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            FVar9.Data = local_138.Data.AllocatorInstance.Data;
          }
        }
      }
      else {
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        if (local_60._padding_ != 0) {
          iVar11 = *(int *)(local_60._padding_ + 0x30);
          iVar7 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar7 = iVar13;
          }
          if (iVar7 != 0) {
            if (iVar11 == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = *(wchar_t **)(local_60._padding_ + 0x28);
            }
          }
          ::FString::operator=(&local_118,pwVar10);
        }
        if (local_118.Data.ArrayNum < 2) {
          local_d8.ComparisonIndex.Value = *(uint *)&param_3->field_0x10;
          local_d8.Number = *(uint *)&param_3->field_0x14;
          pFVar8 = ::FName::ToString(&local_d8,&local_70);
          if (&local_118 != pFVar8) {
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            local_118.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.Data.ArrayNum = (pFVar8->Data).ArrayNum;
            local_118.Data.ArrayMax = (pFVar8->Data).ArrayMax;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        ::FString::PrintfImpl
                  (&local_108,
                   L"Shader %s: No bind point found for UAV \"%s\" possible UAV/SRV mismatch");
        if ((param_3->field_0x20 == '\0') || (param_3->field_0x20 == '\x01')) {
          FRHIViewDesc::GetBufferTypeString(param_3->field_0x22);
          ::FString::PrintfImpl(&local_a0,L"\nBind point: %d, Type: %s");
          iVar11 = local_a0.Data.ArrayNum + -1;
          if (local_a0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar11);
          local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
        }
        else {
          FRHIViewDesc::GetTextureDimensionString
                    ((byte)param_3->field_0x22 >> 4 & (TextureCubeArray|NumBits));
          ::FString::PrintfImpl(&local_b0,L"\nBind point: %d, Type: %s");
          iVar11 = local_b0.Data.ArrayNum + -1;
          if (local_b0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          ::FString::AppendChars(&local_108,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar11);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar9.Data = local_108.Data.AllocatorInstance.Data;
        }
        FValidationRHI::ReportValidationFailure((wchar_t *)FVar9.Data);
        FVar9.Data = local_118.Data.AllocatorInstance.Data;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          FVar9.Data = local_118.Data.AllocatorInstance.Data;
        }
      }
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
    }
  }
  return;
}

// ValidateViewForBufferType @ 145cf7120

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ValidateViewForBufferType(FViewInfo *param_1,FRHIBuffer *param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (param_1->BufferType == Typed) {
    if (param_1->NumElements <= GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      return;
    }
    local_res8 = (FName)param_2->_padding_;
    pFVar1 = FName::ToString(&local_res8,&local_28);
    if ((pFVar1->Data).ArrayNum == 0) {
      FRHIViewDesc::GetBufferTypeString(param_1->BufferType);
      pwVar2 = 
      L"Creating a View with Buffer Type = %s , BuferName(Pointer) = %s(%p) with Number of elements = %d which is greater than the Max Number of elements for this Type: %llu"
      ;
    }
    else {
      FRHIViewDesc::GetBufferTypeString(param_1->BufferType);
      pwVar2 = 
      L"Creating a View with Buffer Type = %s , BuferName(Pointer) = %s(%p) with Number of elements = %d which is greater than the Max Number of elements for this Type: %llu"
      ;
    }
  }
  else {
    if (param_1->SizeInBytes <= GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value) {
      return;
    }
    local_res8 = (FName)param_2->_padding_;
    FName::ToString(&local_res8,&local_28);
    FRHIViewDesc::GetBufferTypeString(param_1->BufferType);
    pwVar2 = 
    L"Creating a View  with Buffer Type = %s , BuferName(Pointer) = %s(%p) with Size = %d which is greater than the Max Size for this Type: %llu"
    ;
  }
  FString::PrintfImpl(&local_38,pwVar2);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FValidationRHI::ReportValidationFailure((wchar_t *)FVar3.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// CVarDumpTransitionsForResource'' @ 1503ccd50

void __cdecl
`dynamic_atexit_destructor_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResource__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FDumpTransitionsHelper::CVarDumpTransitionsForResource);
  return;
}

// CVarDumpTransitionsForResourceSink'' @ 1503ccd70

void __cdecl
`dynamic_atexit_destructor_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink__(void)

{
  FDumpTransitionsHelper::CVarDumpTransitionsForResourceSink._padding_ =
       (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// OpQueues'' @ 1503ccd90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'RHIValidation::FTracker::OpQueues__(void)

{
  DestructItems<RHIValidation::FOpQueueState::FOpsList,int>
            ((FOpsList *)RHIValidation::FTracker::OpQueues[1].Ops.AllocatorInstance.Data,
             RHIValidation::FTracker::OpQueues[1].Ops.ArrayNum);
  if (RHIValidation::FTracker::OpQueues[1].Ops.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(RHIValidation::FTracker::OpQueues[1].Ops.AllocatorInstance.Data);
  }
  DestructItems<RHIValidation::FOpQueueState::FOpsList,int>
            ((FOpsList *)RHIValidation::FTracker::OpQueues[0].Ops.AllocatorInstance.Data,
             RHIValidation::FTracker::OpQueues[0].Ops.ArrayNum);
  if (RHIValidation::FTracker::OpQueues[0].Ops.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(RHIValidation::FTracker::OpQueues[0].Ops.AllocatorInstance.Data);
    return;
  }
  return;
}

// SeenFailureHashes'' @ 1503ccdf0

void __cdecl `dynamic_atexit_destructor_for_'FValidationRHI::SeenFailureHashes__(void)

{
  FValidationRHI::SeenFailureHashes.HashSize = 0;
  if (FValidationRHI::SeenFailureHashes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FValidationRHI::SeenFailureHashes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FValidationRHI::SeenFailureHashes.Elements);
  return;
}

// SeenFailureHashesMutex'' @ 1503cce30

void __cdecl `dynamic_atexit_destructor_for_'FValidationRHI::SeenFailureHashesMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cce37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FValidationRHI::SeenFailureHashesMutex);
  return;
}

// Singleton'' @ 1503cce50

void __cdecl `dynamic_atexit_destructor_for_'FRHIFrameFlipTrackingRunnable::Singleton__(void)

{
  DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int>
            ((FFramePair *)
             FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data,
             FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.ArrayNum);
  if (FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRHIFrameFlipTrackingRunnable::Singleton.FramePairs.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&FRHIFrameFlipTrackingRunnable::Singleton.CS);
  FRHIFrameFlipTrackingRunnable::Singleton._padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Singleton'' @ 1503ccea0

void __cdecl `dynamic_atexit_destructor_for_'FRHIFrameOffsetThread::Singleton__(void)

{
  FRHIFrameOffsetThread::Singleton._padding_ = (longlong)&___7FRHIFrameOffsetThread__6B_;
  if (FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRHIFrameOffsetThread::Singleton.FrameDebugInfos.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
  FRHIFrameOffsetThread::Singleton._padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarBreakOnTransitionError'' @ 1503ccef0

void __cdecl RHIValidation::_dynamic_atexit_destructor_for__CVarBreakOnTransitionError__(void)

{
  CVarBreakOnTransitionError._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBreakOnTransitionError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnorePerformanceModeCheck'' @ 1503ccf10

void __cdecl _dynamic_atexit_destructor_for__CVarIgnorePerformanceModeCheck__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnorePerformanceModeCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIPresentThresholdBottom'' @ 1503ccf30

void __cdecl _dynamic_atexit_destructor_for__CVarRHIPresentThresholdBottom__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHIPresentThresholdBottom);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHIPresentThresholdTop'' @ 1503ccf50

void __cdecl _dynamic_atexit_destructor_for__CVarRHIPresentThresholdTop__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHIPresentThresholdTop);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHISyncAllowEarlyKick'' @ 1503ccf70

void __cdecl _dynamic_atexit_destructor_for__CVarRHISyncAllowEarlyKick__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISyncAllowEarlyKick);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHISyncAllowVariable'' @ 1503ccf90

void __cdecl _dynamic_atexit_destructor_for__CVarRHISyncAllowVariable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISyncAllowVariable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHISyncInterval'' @ 1503ccfb0

void __cdecl _dynamic_atexit_destructor_for__CVarRHISyncInterval__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISyncInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHISyncSlackMS'' @ 1503ccfd0

void __cdecl _dynamic_atexit_destructor_for__CVarRHISyncSlackMS__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISyncSlackMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHInableConsole120Fps'' @ 1503ccff0

void __cdecl _dynamic_atexit_destructor_for__CVarRHInableConsole120Fps__(void)

{
  CVarRHInableConsole120Fps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHInableConsole120Fps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVsyncInformationInsights'' @ 1503cd010

void __cdecl _dynamic_atexit_destructor_for__CVarVsyncInformationInsights__(void)

{
  CVarVsyncInformationInsights._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVsyncInformationInsights);
  return;
}

// `dynamic_atexit_destructor_for_'Init'' @ 1503cd030

void __cdecl
`RHIValidation::GetAutoLogResourceNames'::__l2::_dynamic_atexit_destructor_for__Init__(void)

{
  DestructItems<FString,int>
            ((FString *)::Init.Strings.AllocatorInstance.Data,::Init.Strings.ArrayNum);
  if (::Init.Strings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Init.Strings.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 1504dae40

bool __thiscall
``GetTextureCreateFlagsName'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8726856547373678206>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8726856547373678206>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504daf60

bool __thiscall `IsResourceBindingTypeSRV'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7822497259886477938>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7822497259886477938>,
                       &`public:___cdecl_`bool___cdecl_IsResourceBindingTypeSRV(EShaderCodeResourceBindingType)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

