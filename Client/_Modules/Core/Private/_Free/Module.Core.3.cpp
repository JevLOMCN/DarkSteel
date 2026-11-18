// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 633

// AdditionalCrashContextDelegate'' @ 140ef9450

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::AdditionalCrashContextDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericCrashContext::AdditionalCrashContextDelegate__);
  return;
}

// ExecutionGuid'' @ 140ef9470

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::ExecutionGuid__(void)

{
  FGuid::NewGuid(&FGenericCrashContext::ExecutionGuid);
  return;
}

// LogFilenameLock'' @ 140ef9490

void __cdecl `dynamic_initializer_for_'FGenericPlatformOutputDevices::LogFilenameLock__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FGenericPlatformOutputDevices::LogFilenameLock,4000);
  atexit(`dynamic_atexit_destructor_for_'FGenericPlatformOutputDevices::LogFilenameLock__);
  return;
}

// OnEngineDataReset'' @ 140ef94c0

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::OnEngineDataReset__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericCrashContext::OnEngineDataReset__);
  return;
}

// OnEngineDataSet'' @ 140ef94e0

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::OnEngineDataSet__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericCrashContext::OnEngineDataSet__);
  return;
}

// OnGameDataReset'' @ 140ef9500

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::OnGameDataReset__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericCrashContext::OnGameDataReset__);
  return;
}

// OnGameDataSet'' @ 140ef9520

void __cdecl `dynamic_initializer_for_'FGenericCrashContext::OnGameDataSet__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericCrashContext::OnGameDataSet__);
  return;
}

// `dynamic_initializer_for_'CPUTimeDumpCommand'' @ 140ef9540

void __cdecl _dynamic_initializer_for__CPUTimeDumpCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  undefined8 local_60;
  FDestructionSentinel local_58;
  undefined8 local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .GetCPUTimeDelegate._0_8_ = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .GetCPUTimeDelegate._8_8_ = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimes.ArrayNum = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimes.ArrayMax = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .GetCPUTimeDelegate._16_4_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::
                  __l2::Singleton.GetCPUTimeDelegate,(FWriteAccessScope *)&local_78);
      local_60 = 0x154ea7a98;
      puVar3 = UE::Core::Private::DelegateAllocate
                         (0x28,(FDelegateAllocation *)
                               &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'
                                ::__l2::Singleton.GetCPUTimeDelegate.field_0x8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[4] = FCPUTimeDump::OnAddCPUTime;
        *puVar3 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar3[3] = &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::
                     __l2::Singleton;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimeDumpDelegate._16_4_ = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimeDumpDelegate._0_8_ = 0;
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimeDumpDelegate._8_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::
                  __l2::Singleton.CPUTimeDumpDelegate,(FWriteAccessScope *)&local_58);
      local_40 = 0x154ea7ab0;
      puVar3 = UE::Core::Private::DelegateAllocate
                         (0x28,(FDelegateAllocation *)
                               &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'
                                ::__l2::Singleton.CPUTimeDumpDelegate.field_0x8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[4] = FCPUTimeDump::OnCPUTimeDump;
        *puVar3 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar3[3] = &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::
                     __l2::Singleton;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .GetCPUTimeDelegateHandle = (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
      `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimeDumpDelegateHandle = (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
      atexit(`FCPUTimeDump::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_38);
  local_20 = &local_a0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = FCPUTimeDump::ExecuteCommand;
    puVar3[3] = &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2
                 ::Singleton;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xa0))
                     (IConsoleManager::Singleton,L"CPUTime.Dump",
                      L"Usage -Delay=[NumSeconds=30]\nIf Delay==0, disables printing the CPU usage to the log\nIf Delay>0, starts printing the average CPU usage from the last n frames, clamps between 10 and 300"
                      ,&local_a8,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CPUTimeDumpCommand,pIVar5);
  CPUTimeDumpCommand._0_8_ = &___7FAutoConsoleCommand__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CPUTimeDumpCommand__);
  return;
}

// `dynamic_initializer_for_'CVarAllowStaticLighting'' @ 140ef9890

void __cdecl _dynamic_initializer_for__CVarAllowStaticLighting__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowStaticLighting,L"r.AllowStaticLighting",local_res8,
             L"Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps.\nGames that only use dynamic lighting should set this to 0 to save some static lighting overhead."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowStaticLighting__);
  return;
}

// `dynamic_initializer_for_'CVarAllowStaticLightingInWorldPartitionMaps'' @ 140ef98e0

void __cdecl _dynamic_initializer_for__CVarAllowStaticLightingInWorldPartitionMaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowStaticLightingInWorldPartitionMaps,
             L"r.AllowStaticLightingInWorldPartitionMaps",local_res8,
             L"Whether to allow any static lighting to be generated and used in WorldPartition maps, like lightmaps and shadowmaps.\nGames that only use dynamic lighting should set this to 0 to save some static lighting overhead."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowStaticLightingInWorldPartitionMaps__);
  return;
}

// `dynamic_initializer_for_'CVarAmbientOcclusionRadiusScale'' @ 140ef9930

void __cdecl _dynamic_initializer_for__CVarAmbientOcclusionRadiusScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAmbientOcclusionRadiusScale,L"r.AmbientOcclusionRadiusScale",local_res8,
             L"Allows to scale the ambient occlusion radius (SSAO).\n 0:off, 1.0:normal, <1:smaller, >1:larger"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarAmbientOcclusionRadiusScale__);
  return;
}

// `dynamic_initializer_for_'CVarAmbientOcclusionStaticFraction'' @ 140ef9980

void __cdecl _dynamic_initializer_for__CVarAmbientOcclusionStaticFraction__(void)

{
  float local_res8 [8];
  
  local_res8[0] = -1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAmbientOcclusionStaticFraction,L"r.AmbientOcclusionStaticFraction",local_res8,
             L"Allows to override the Ambient Occlusion Static Fraction (see post process volume). Fractions are between 0 and 1.\n<0: use default setting (default -1)\n 0: no effect on static lighting, 0 is free meaning no extra rendering pass\n 1: AO affects the stat lighting"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAmbientOcclusionStaticFraction__);
  return;
}

// `dynamic_initializer_for_'CVarAndroidOverrideExternalTextureSupport'' @ 140ef99d0

void __cdecl _dynamic_initializer_for__CVarAndroidOverrideExternalTextureSupport__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAndroidOverrideExternalTextureSupport,L"r.Android.OverrideExternalTextureSupport",
             local_res8,
             L"Override external texture support for OpenGLES API. (Android Only)\n  0 = normal detection used [default]\n  1 = disable external texture support\n  2 = force ImageExternal100 (version #100 with GL_OES_EGL_image_external)\n  3 = force ImageExternal300 (version #300 with GL_OES_EGL_image_external)\n  4 = force ImageExternalESSL300 (version #300 with GL_OES_EGL_image_external_essl3)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarAndroidOverrideExternalTextureSupport__);
  return;
}

// `dynamic_initializer_for_'CVarBloomQuality'' @ 140ef9a20

void __cdecl _dynamic_initializer_for__CVarBloomQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarBloomQuality,L"r.BloomQuality",local_res8,
             L" 0: off, no performance impact.\n 1: average quality, least performance impact.\n 2: average quality, least performance impact.\n 3: good quality.\n 4: good quality.\n 5: Best quality, most significant performance impact. (default)\n>5: force experimental higher quality on mobile (can be quite slow on some hardware)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarBloomQuality__);
  return;
}

// `dynamic_initializer_for_'CVarCacheHandleForPakFilesOnly'' @ 140ef9a70

void __cdecl _dynamic_initializer_for__CVarCacheHandleForPakFilesOnly__(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleObject *pIVar3;
  
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
  pIVar3 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                     (IConsoleManager::Singleton,L"AsyncReadFile.CacheHandleForPakFilesOnly",
                      &GCacheHandleForPakFilesOnly,
                      L"Control how Async read handle caches the underlying platform handle for files.\n0: Cache the underlying platform handles for all files.\n1: Cache the underlying platform handle for .pak files only (default).\n"
                      ,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCacheHandleForPakFilesOnly,pIVar3);
  CVarCacheHandleForPakFilesOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  atexit(_dynamic_atexit_destructor_for__CVarCacheHandleForPakFilesOnly__);
  return;
}

// `dynamic_initializer_for_'CVarCheckSRVTransitions'' @ 140ef9b10

void __cdecl _dynamic_initializer_for__CVarCheckSRVTransitions__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCheckSRVTransitions,L"r.CheckSRVTransitions",local_res8,
             L"Tests that render targets are properly transitioned to SRV when SRVs are set.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCheckSRVTransitions__);
  return;
}

// `dynamic_initializer_for_'CVarCompileShadersForDevelopment'' @ 140ef9b60

void __cdecl _dynamic_initializer_for__CVarCompileShadersForDevelopment__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCompileShadersForDevelopment,L"r.CompileShadersForDevelopment",local_res8,
             L"Setting this to 0 allows to ship a game with more optimized shaders as some\neditor and development features are not longer compiled into the shaders.\n Note: This should be done when shipping but it\'s not done automatically yet (feature need to mature\n       and shaders will compile slower as shader caching from development isn\'t shared).\nCannot be changed at runtime - can be put into BaseEngine.ini\n 0: off, shader can run a bit faster\n 1: on (Default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarCompileShadersForDevelopment__);
  return;
}

// `dynamic_initializer_for_'CVarContactShadows'' @ 140ef9bb0

void __cdecl _dynamic_initializer_for__CVarContactShadows__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarContactShadows,L"r.ContactShadows",local_res8,L" 0: disabled.\n 1: enabled.\n",
             0x60);
  atexit(_dynamic_atexit_destructor_for__CVarContactShadows__);
  return;
}

// `dynamic_initializer_for_'CVarContactShadowsNonShadowCastingIntensity'' @ 140ef9c00

void __cdecl _dynamic_initializer_for__CVarContactShadowsNonShadowCastingIntensity__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarContactShadowsNonShadowCastingIntensity,
             L"r.ContactShadows.NonShadowCastingIntensity",local_res8,
             L"DEPRECATED. Please use the parameters on the Light Component directly instead.\n",
             0x60);
  atexit(_dynamic_atexit_destructor_for__CVarContactShadowsNonShadowCastingIntensity__);
  return;
}

// `dynamic_initializer_for_'CVarCookOutUnusedDetailModeComponents'' @ 140ef9c50

void __cdecl _dynamic_initializer_for__CVarCookOutUnusedDetailModeComponents__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCookOutUnusedDetailModeComponents,L"r.CookOutUnusedDetailModeComponents",
             local_res8,
             L"If set, components which are not relevant for the current detail mode will be cooked out.\n 0: keep components even if not relevant for the current detail mode.\n 1: cook out components not relevant for the current detail mode.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCookOutUnusedDetailModeComponents__);
  return;
}

// `dynamic_initializer_for_'CVarCustomUnsafeZones'' @ 140ef9ca0

void __cdecl _dynamic_initializer_for__CVarCustomUnsafeZones__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarCustomUnsafeZones,L"r.CustomUnsafeZones",&local_18,
             L"Allows you to set custom unsafe zones. Define them based on Portrait (P) or Landscape (L) for a device oriented \'upright\'.Unsafe zones may be either fixed or free, depending on if they move along with the rotation of the device.Format is (P:fixed[x1, y1][width, height]), semicolon-separated for each custom unsafe zone. +Values add from 0, -Values subtract from Height or Width"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarCustomUnsafeZones__);
  return;
}

// `dynamic_initializer_for_'CVarDBuffer'' @ 140ef9d10

void __cdecl _dynamic_initializer_for__CVarDBuffer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDBuffer,L"r.DBuffer",local_res8,
             L"Enables DBuffer decal material blend modes.\nDBuffer decals are rendered before the base pass, allowing them to affect static lighting and skylighting correctly. \nWhen enabled, a full prepass will be forced which adds CPU / GPU cost.  Several texture lookups will be done in the base pass to fetch the decal properties, which adds pixel work.\n 0: off\n 1: on (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarDBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarDemotedLocalMemoryWarning'' @ 140ef9d60

void __cdecl _dynamic_initializer_for__CVarDemotedLocalMemoryWarning__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDemotedLocalMemoryWarning,L"r.DemotedLocalMemoryWarning",local_res8,
             L"If set to 1, a warning will be displayed when local memory has been demoted to system memory."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDemotedLocalMemoryWarning__);
  return;
}

// `dynamic_initializer_for_'CVarDepthOfFieldQuality'' @ 140ef9db0

void __cdecl _dynamic_initializer_for__CVarDepthOfFieldQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDepthOfFieldQuality,L"r.DepthOfFieldQuality",local_res8,
             L"Allows to adjust the depth of field quality. Currently only fully affects BokehDOF. GaussianDOF is either 0 for off, otherwise on.\n 0: Off\n 1: Low\n 2: high quality (default, adaptive, can be 4x slower)\n 3: very high quality, intended for non realtime cutscenes, CircleDOF only (slow)\n 4: extremely high quality, intended for non realtime cutscenes, CircleDOF only (very slow)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarDepthOfFieldQuality__);
  return;
}

// `dynamic_initializer_for_'CVarDetailMode'' @ 140ef9e00

void __cdecl _dynamic_initializer_for__CVarDetailMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDetailMode,L"r.DetailMode",local_res8,
             L"Current detail mode; determines whether components of actors should be updated/ ticked.\n 0: low, show objects with DetailMode low\n 1: medium, show objects with DetailMode medium or below\n 2: high, show objects with DetailMode high or below\n 3: epic, show all objects (default)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarDetailMode__);
  return;
}

// `dynamic_initializer_for_'CVarDisableAndroidGLASTCSupport'' @ 140ef9e50

void __cdecl _dynamic_initializer_for__CVarDisableAndroidGLASTCSupport__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableAndroidGLASTCSupport,L"r.Android.DisableASTCSupport",local_res8,
             L"Disable support for ASTC Texture compression if OpenGL driver supports it. (Android Only)\n  0 = ASTC texture compression will be used if driver supports it [default]\n  1 = ASTC texture compression will not be used."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableAndroidGLASTCSupport__);
  return;
}

// `dynamic_initializer_for_'CVarDisableOpenGLES31Support'' @ 140ef9ea0

void __cdecl _dynamic_initializer_for__CVarDisableOpenGLES31Support__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableOpenGLES31Support,L"r.Android.DisableOpenGLES31Support",local_res8,
             L"Disable support for OpenGLES 3.1 API. (Android Only)\n  0 = OpenGLES 3.1 API will be used (providing device and project supports it) [default]\n  1 = OpenGLES 3.1 will be disabled, Vulkan will be used."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableOpenGLES31Support__);
  return;
}

// `dynamic_initializer_for_'CVarDisableOpenGLTextureStreamingSupport'' @ 140ef9ef0

void __cdecl _dynamic_initializer_for__CVarDisableOpenGLTextureStreamingSupport__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableOpenGLTextureStreamingSupport,L"r.OpenGL.DisableTextureStreamingSupport",
             local_res8,
             L"Disable support for texture streaming on OpenGL.\n  0 = Texture streaming will be used if device supports it [default]\n  1 = Texture streaming will be disabled."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableOpenGLTextureStreamingSupport__);
  return;
}

// `dynamic_initializer_for_'CVarDisableThreadedRendering'' @ 140ef9f40

void __cdecl _dynamic_initializer_for__CVarDisableThreadedRendering__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableThreadedRendering,L"r.AndroidDisableThreadedRendering",local_res8,
             L"Sets whether or not to allow threaded rendering for a particular Android device profile.\n\t0 = Allow threaded rendering [default]\n\t1 = Disable creation of render thread on startup"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableThreadedRendering__);
  return;
}

// `dynamic_initializer_for_'CVarDisableThreadedRenderingFirstLoad'' @ 140ef9f90

void __cdecl _dynamic_initializer_for__CVarDisableThreadedRenderingFirstLoad__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableThreadedRenderingFirstLoad,L"r.AndroidDisableThreadedRenderingFirstLoad",
             local_res8,
             L"Sets whether or not to allow threaded rendering for a particular Android device profile on the initial load.\n\t0 = Allow threaded rendering on the initial load [default]\n\t1 = Disable threaded rendering on the initial load"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableThreadedRenderingFirstLoad__);
  return;
}

// `dynamic_initializer_for_'CVarDisableVulkanSM5Support'' @ 140ef9fe0

void __cdecl _dynamic_initializer_for__CVarDisableVulkanSM5Support__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableVulkanSM5Support,L"r.Android.DisableVulkanSM5Support",local_res8,
             L"Disable support for vulkan API. (Android Only)\n  0 = Vulkan SM5 API will be used (providing device and project supports it) [default]\n  1 = Vulkan SM5 will be disabled, Vulkan or OpenGL fall back will be used."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableVulkanSM5Support__);
  return;
}

// `dynamic_initializer_for_'CVarDisableVulkanSupport'' @ 140efa030

void __cdecl _dynamic_initializer_for__CVarDisableVulkanSupport__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableVulkanSupport,L"r.Android.DisableVulkanSupport",local_res8,
             L"Disable support for vulkan API. (Android Only)\n  0 = vulkan API will be used (providing device and project supports it) [default]\n  1 = vulkan will be disabled, opengl fall back will be used."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisableVulkanSupport__);
  return;
}

// `dynamic_initializer_for_'CVarDontLimitOnBattery'' @ 140efa080

void __cdecl _dynamic_initializer_for__CVarDontLimitOnBattery__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDontLimitOnBattery,L"r.DontLimitOnBattery",local_res8,
             L"0: Limit performance on devices with a battery.(default)\n1: Do not limit performance due to device having a battery."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarDontLimitOnBattery__);
  return;
}

// `dynamic_initializer_for_'CVarEmitterSpawnRateScale'' @ 140efa0d0

void __cdecl _dynamic_initializer_for__CVarEmitterSpawnRateScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarEmitterSpawnRateScale,L"r.EmitterSpawnRateScale",local_res8,
             L"A global scale upon the spawn rate of emitters. Emitters can choose to apply or ignore it via their bApplyGlobalSpawnRateScale property."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarEmitterSpawnRateScale__);
  return;
}

// `dynamic_initializer_for_'CVarEyeAdaptationQuality'' @ 140efa120

void __cdecl _dynamic_initializer_for__CVarEyeAdaptationQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEyeAdaptationQuality,L"r.EyeAdaptationQuality",local_res8,
             L"Defines the eye adaptation quality which allows to adjust for quality or performance.\n<=0: off (fastest)\n  1: low quality (e.g. non histogram based, not yet implemented)\n  2: normal quality (default)\n  3: high quality (e.g. screen position localized, not yet implemented)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarEyeAdaptationQuality__);
  return;
}

// `dynamic_initializer_for_'CVarFeatureLevelPreview'' @ 140efa170

void __cdecl _dynamic_initializer_for__CVarFeatureLevelPreview__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFeatureLevelPreview,L"r.FeatureLevelPreview",local_res8,
             L"If 1 the quick settings menu will contain an option to enable feature level preview modes"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarFeatureLevelPreview__);
  return;
}

// `dynamic_initializer_for_'CVarFinishCurrentFrame'' @ 140efa1c0

void __cdecl _dynamic_initializer_for__CVarFinishCurrentFrame__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFinishCurrentFrame,L"r.FinishCurrentFrame",local_res8,
             L"If on, the current frame will be forced to finish and render to the screen instead of being buffered.  This will improve latency, but slow down overall performance."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarFinishCurrentFrame__);
  return;
}

// `dynamic_initializer_for_'CVarFreeSkeletalMeshBuffers'' @ 140efa210

void __cdecl _dynamic_initializer_for__CVarFreeSkeletalMeshBuffers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFreeSkeletalMeshBuffers,L"r.FreeSkeletalMeshBuffers",local_res8,
             L"Controls whether skeletal mesh buffers are kept in CPU memory to support merging of skeletal meshes.\n0: Keep buffers(default)\n1: Free buffers"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarFreeSkeletalMeshBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarFreezeAtPosition'' @ 140efa260

void __cdecl _dynamic_initializer_for__CVarFreezeAtPosition__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarFreezeAtPosition,L"FreezeAtPosition",&local_18,
             L"This console variable stores the position and rotation for the FreezeAt command which allows\nto lock the camera in order to provide more deterministic render profiling.\nThe FreezeAtPosition can be set in the ConsoleVariables.ini (start the map with MAPNAME?bTourist=1).\nAlso see the FreezeAt command console command.\nThe number syntax if the same as the one used by the BugIt command:\n The first three values define the position, the next three define the rotation.\nExample:\n FreezeAtPosition 2819.5520 416.2633 75.1500 65378 -25879 0"
             ,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarFreezeAtPosition__);
  return;
}

// `dynamic_initializer_for_'CVarFullscreenMode'' @ 140efa2d0

void __cdecl _dynamic_initializer_for__CVarFullscreenMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFullscreenMode,L"r.FullScreenMode",local_res8,
             L"Defines how we do full screen when requested (e.g. command line option -fullscreen or in ini [SystemSettings] fullscreen=true)\n 0: normal full screen (renders faster, more control over vsync, less GPU memory, 10bit color if possible)\n 1: windowed full screen (quick switch between applications and window mode, slight performance loss)\n any other number behaves like 0"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarFullscreenMode__);
  return;
}

// `dynamic_initializer_for_'CVarHighResScreenshotDelay'' @ 140efa320

void __cdecl _dynamic_initializer_for__CVarHighResScreenshotDelay__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHighResScreenshotDelay,L"r.HighResScreenshotDelay",local_res8,
             L"When high-res screenshots are requested there is a small delay to allow temporal effects to converge.\nDefault: 4. Using a value below the default will disable TemporalAA for improved image quality."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHighResScreenshotDelay__);
  return;
}

// `dynamic_initializer_for_'CVarIdleWhenNotForeground'' @ 140efa370

void __cdecl _dynamic_initializer_for__CVarIdleWhenNotForeground__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIdleWhenNotForeground,L"t.IdleWhenNotForeground",local_res8,
             L"Prevents the engine from taking any CPU or GPU time while not the foreground app.",1)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarIdleWhenNotForeground__);
  return;
}

// `dynamic_initializer_for_'CVarLWCTruncateMode'' @ 140efa3c0

void __cdecl _dynamic_initializer_for__CVarLWCTruncateMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLWCTruncateMode,L"r.MaterialEditor.LWCTruncateMode",local_res8,
             L"Whether or not the material compiler respects the truncate LWC node or automatic transforms.\n0: no truncate (LWC always used even if asked to truncate)\n1: respect the truncate LWC node\n2: respect the truncate LWC node and automatic transforms"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarLWCTruncateMode__);
  return;
}

// `dynamic_initializer_for_'CVarLegacyLuminanceFactors'' @ 140efa410

void __cdecl _dynamic_initializer_for__CVarLegacyLuminanceFactors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLegacyLuminanceFactors,L"r.LegacyLuminanceFactors",local_res8,
             L"Default luminance factors:\n0: Working color space coefficients (default)\n1: Legacy coefficients (inaccurate). Activate to retain the 5.4 and earlier versions behavior.\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarLegacyLuminanceFactors__);
  return;
}

// `dynamic_initializer_for_'CVarLightFunctionQuality'' @ 140efa460

void __cdecl _dynamic_initializer_for__CVarLightFunctionQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLightFunctionQuality,L"r.LightFunctionQuality",local_res8,
             L"Defines the light function quality which allows to adjust for quality or performance.\n<=0: off (fastest)\n  1: low quality (e.g. half res with blurring, not yet implemented)\n  2: normal quality (default)\n  3: high quality (e.g. super-sampled or colored, not yet implemented)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarLightFunctionQuality__);
  return;
}

// `dynamic_initializer_for_'CVarLimitRenderingFeatures'' @ 140efa4b0

void __cdecl _dynamic_initializer_for__CVarLimitRenderingFeatures__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLimitRenderingFeatures,L"r.LimitRenderingFeatures",local_res8,
             L"Allows to quickly reduce render feature to increase render performance.\nThis is just a quick way to alter multiple show flags and console variables in the game\nDisabled more feature the higher the number\n <=0:off, order is defined in code (can be documented here when we settled on an order)"
             ,0x21);
  atexit(_dynamic_atexit_destructor_for__CVarLimitRenderingFeatures__);
  return;
}

// `dynamic_initializer_for_'CVarLocalExposure'' @ 140efa500

void __cdecl _dynamic_initializer_for__CVarLocalExposure__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLocalExposure,L"r.LocalExposure",local_res8,L"Whether to support local exposure",
             0x60);
  atexit(_dynamic_atexit_destructor_for__CVarLocalExposure__);
  return;
}

// `dynamic_initializer_for_'CVarLogPlatformMemoryStats'' @ 140efa550

void __cdecl GenericPlatformMemory::_dynamic_initializer_for__CVarLogPlatformMemoryStats__(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleObject *pIVar3;
  
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
  pIVar3 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                     (IConsoleManager::Singleton,L"memory.logGenericPlatformMemoryStats",
                      &GLogPlatformMemoryStats,L"Report Platform Memory Stats)\n",0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CVarLogPlatformMemoryStats,pIVar3);
  CVarLogPlatformMemoryStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  atexit(_dynamic_atexit_destructor_for__CVarLogPlatformMemoryStats__);
  return;
}

// `dynamic_initializer_for_'CVarMSAACompositingSampleCount'' @ 140efa5f0

void __cdecl _dynamic_initializer_for__CVarMSAACompositingSampleCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMSAACompositingSampleCount,L"r.MSAA.CompositingSampleCount",local_res8,
             L"Affects the render quality of the editor 3d objects.\n 1: no MSAA, lowest quality\n 2: 2x MSAA, medium quality (medium GPU memory consumption)\n 4: 4x MSAA, high quality (high GPU memory consumption)\n 8: 8x MSAA, very high quality (insane GPU memory consumption)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMSAACompositingSampleCount__);
  return;
}

// `dynamic_initializer_for_'CVarMallocCrashNonCrashedThreadsMode'' @ 140efa640

void __cdecl _dynamic_initializer_for__CVarMallocCrashNonCrashedThreadsMode__(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleObject *pIVar3;
  
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
  pIVar3 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                     (IConsoleManager::Singleton,L"MallocCrash.NonCrashedThreadsMode",
                      &GMallocCrashNonCrashedThreadsMode,
                      L"How to process requests during a crash from threads other than the original crashed thread. 0 = Non-crashed threads suspend on allocation or free. 1 = Non-crashed threads suspend on allocation and do nothing on free. "
                      ,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMallocCrashNonCrashedThreadsMode,pIVar3);
  CVarMallocCrashNonCrashedThreadsMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  atexit(_dynamic_atexit_destructor_for__CVarMallocCrashNonCrashedThreadsMode__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialQualityLevel'' @ 140efa6e0

void __cdecl _dynamic_initializer_for__CVarMaterialQualityLevel__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaterialQualityLevel,L"r.MaterialQualityLevel",local_res8,
             L"0 corresponds to low quality materials, as defined by quality switches in materials, 1 corresponds to high, 2 for medium, and 3 for Epic."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialShadingPathNodeOverride'' @ 140efa730

void __cdecl _dynamic_initializer_for__CVarMaterialShadingPathNodeOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaterialShadingPathNodeOverride,L"r.Material.ShadingPathNodeOverride",local_res8,
             L"Material Shading Path Node Override. -1 = no override (default value), 0 = deferred rendering, 1 = forward, 2 = mobile)"
             ,0x124);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialShadingPathNodeOverride__);
  return;
}

// `dynamic_initializer_for_'CVarMaxAnistropy'' @ 140efa780

void __cdecl _dynamic_initializer_for__CVarMaxAnistropy__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxAnistropy,L"r.MaxAnisotropy",local_res8,
             L"MaxAnisotropy should range from 1 to 16. Higher values mean better texure quality when using anisotropic filtering but at a cost to performance. Default is 4."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMaxAnistropy__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryPressureCriticalThresholdMB'' @ 140efa7d0

void __cdecl
GenericPlatformMemory::_dynamic_initializer_for__CVarMemoryPressureCriticalThresholdMB__(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleObject *pIVar3;
  
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
  pIVar3 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x38))
                     (IConsoleManager::Singleton,L"memory.MemoryPressureCriticalThresholdMB",
                      &GMemoryPressureCriticalThresholdMB,
                      L"When the available physical memory drops below this threshold memory stats will consider this to be at critical pressure.\nWhere a platform can specifically state it\'s memory pressure this test maybe ignored.\n0 (default) critical pressure will not use the threshold."
                      ,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMemoryPressureCriticalThresholdMB,pIVar3);
  CVarMemoryPressureCriticalThresholdMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  atexit(_dynamic_atexit_destructor_for__CVarMemoryPressureCriticalThresholdMB__);
  return;
}

// `dynamic_initializer_for_'CVarMinLogVerbosity'' @ 140efa870

void __cdecl _dynamic_initializer_for__CVarMinLogVerbosity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMinLogVerbosity,L"con.MinLogVerbosity",local_res8,
             L"Allows to see the log in the in game console (by default deactivated to avoid spam and minor performance loss).\n 0: no logging other than console response (default)\n 1: Only fatal errors (no that useful)\n 2: additionally errors\n 3: additionally warnings\n 4: additionally display\n 5: additionally log\n..\n>=7: all"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinLogVerbosity__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowDeferredShadingOpenGL'' @ 140efa8c0

void __cdecl _dynamic_initializer_for__CVarMobileAllowDeferredShadingOpenGL__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileAllowDeferredShadingOpenGL,L"r.Mobile.AllowDeferredShadingOpenGL",local_res8
             ,
             L"0: Do not Allow Deferred Shading on OpenGL\n1: Allow Deferred Shading on OpenGL (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowDeferredShadingOpenGL__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowDistanceFieldShadows'' @ 140efa910

void __cdecl _dynamic_initializer_for__CVarMobileAllowDistanceFieldShadows__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileAllowDistanceFieldShadows,L"r.Mobile.AllowDistanceFieldShadows",local_res8,
             L"0: Do not generate shader permutations to render distance field shadows from stationary directional lights.\n1: Generate shader permutations to render distance field shadows from stationary directional lights. (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowDistanceFieldShadows__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowDitheredLODTransition'' @ 140efa960

void __cdecl _dynamic_initializer_for__CVarMobileAllowDitheredLODTransition__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMobileAllowDitheredLODTransition,L"r.Mobile.AllowDitheredLODTransition",local_res8
             ,L"Whether to support \'Dithered LOD Transition\' material option on mobile platforms",
             0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowDitheredLODTransition__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowFramebufferFetch'' @ 140efa9b0

void __cdecl _dynamic_initializer_for__CVarMobileAllowFramebufferFetch__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileAllowFramebufferFetch,L"r.Mobile.AllowFramebufferFetch",local_res8,
             L"0: Multi-pass rendering without using sub-passes in Vulkan or programmable blending on iOS and GLES. (only for a deferred shading) (default)\n1: Allow use of sub-passes and programmable blending"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowFramebufferFetch__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowPerPixelShadingModels'' @ 140efaa00

void __cdecl _dynamic_initializer_for__CVarMobileAllowPerPixelShadingModels__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileAllowPerPixelShadingModels,L"r.Mobile.AllowPerPixelShadingModels",local_res8
             ,
             L"Whether to allow \'Per-Pixel Shader Models (From Material Expression)\' in materials for Mobile feature level."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowPerPixelShadingModels__);
  return;
}

// `dynamic_initializer_for_'CVarMobileAllowPixelDepthOffset'' @ 140efaa50

void __cdecl _dynamic_initializer_for__CVarMobileAllowPixelDepthOffset__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileAllowPixelDepthOffset,L"r.Mobile.AllowPixelDepthOffset",local_res8,
             L"Whether to allow \'Pixel Depth Offset\' in materials for Mobile feature level. Depth modification in pixel shaders may reduce GPU performance"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileAllowPixelDepthOffset__);
  return;
}

// `dynamic_initializer_for_'CVarMobileContentScaleFactor'' @ 140efaaa0

void __cdecl _dynamic_initializer_for__CVarMobileContentScaleFactor__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMobileContentScaleFactor,L"r.MobileContentScaleFactor",local_res8,
             L"Content scale multiplier (equates to iOS\'s contentScaleFactor to support Retina displays"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMobileContentScaleFactor__);
  return;
}

// `dynamic_initializer_for_'CVarMobileDBuffer'' @ 140efaaf0

void __cdecl _dynamic_initializer_for__CVarMobileDBuffer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileDBuffer,L"r.Mobile.DBuffer",local_res8,
             L"Enables DBuffer decal material blend modes when using the mobile forward renderer.\nDBuffer decals are rendered before the base pass, allowing them to affect static lighting and skylighting correctly. \nWhen enabled, a full prepass will be forced which adds CPU / GPU cost.  Several texture lookups will be done in the base pass to fetch the decal properties, which adds pixel work.\n 0: off (default)\n 1: on"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileDBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarMobileDefaultAntiAliasing'' @ 140efab40

void __cdecl _dynamic_initializer_for__CVarMobileDefaultAntiAliasing__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileDefaultAntiAliasing,L"r.Mobile.AntiAliasing",local_res8,
             L"Mobile default AntiAliasingMethod\n 0: off (no anti-aliasing)\n 1: FXAA (faster than TemporalAA but much more shimmering for non static cases)\n 2: TemporalAA (default, it will fallback to FXAA if SupportsGen4TAA is disabled) \n 3: MSAA \n 4: TSR(it will fallback to TAA if SupportsGen5TAA is disabled) \n 5: SMAA"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMobileDefaultAntiAliasing__);
  return;
}

// `dynamic_initializer_for_'CVarMobileDesiredResX'' @ 140efab90

void __cdecl _dynamic_initializer_for__CVarMobileDesiredResX__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileDesiredResX,L"r.Mobile.DesiredResX",local_res8,
             L"Desired mobile X resolution (longest axis) (non-zero == use for X, calculate Y to retain aspect ratio)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMobileDesiredResX__);
  return;
}

// `dynamic_initializer_for_'CVarMobileDesiredResY'' @ 140efabe0

void __cdecl _dynamic_initializer_for__CVarMobileDesiredResY__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileDesiredResY,L"r.Mobile.DesiredResY",local_res8,
             L"Desired mobile Y resolution (shortest axis) (non-zero == use for Y, calculate X to retain aspect ratio)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMobileDesiredResY__);
  return;
}

// `dynamic_initializer_for_'CVarMobileEnableMovableLightCSMShaderCulling'' @ 140efac30

void __cdecl _dynamic_initializer_for__CVarMobileEnableMovableLightCSMShaderCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileEnableMovableLightCSMShaderCulling,
             L"r.Mobile.EnableMovableLightCSMShaderCulling",local_res8,
             L"0: All primitives lit by movable directional light render with CSM.\n1: Primitives lit by movable directional light render with the CSM shader when determined to be within CSM range. (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileEnableMovableLightCSMShaderCulling__);
  return;
}

// `dynamic_initializer_for_'CVarMobileEnableStaticAndCSMShadowReceivers'' @ 140efac80

void __cdecl _dynamic_initializer_for__CVarMobileEnableStaticAndCSMShadowReceivers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileEnableStaticAndCSMShadowReceivers,
             L"r.Mobile.EnableStaticAndCSMShadowReceivers",local_res8,
             L"0: Primitives can receive only static shadowing from stationary lights.\n1: Primitives can receive both CSM and static shadowing from stationary lights. (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileEnableStaticAndCSMShadowReceivers__);
  return;
}

// `dynamic_initializer_for_'CVarMobileEnabledShadingModelsMask'' @ 140efacd0

void __cdecl _dynamic_initializer_for__CVarMobileEnabledShadingModelsMask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileEnabledShadingModelsMask,L"r.Mobile.ShadingModelsMask",local_res8,
             L"The mask that indicates which shading models are enabled on mobile platforms.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileEnabledShadingModelsMask__);
  return;
}

// `dynamic_initializer_for_'CVarMobileFloatPrecisionMode'' @ 140efad20

void __cdecl _dynamic_initializer_for__CVarMobileFloatPrecisionMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileFloatPrecisionMode,L"r.Mobile.FloatPrecisionMode",local_res8,
             L"0: Use Half-precision (default)\n1: Half precision, except Full precision for material expressions\n2: Force use of high precision in pixel shaders.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarMobileFloatPrecisionMode__);
  return;
}

// `dynamic_initializer_for_'CVarMobileForwardDecalLighting'' @ 140efad70

void __cdecl _dynamic_initializer_for__CVarMobileForwardDecalLighting__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileForwardDecalLighting,L"r.Mobile.Forward.DecalLighting",local_res8,
             L"Enables lit decals when using the mobile forward renderer without DBuffer.\n 0: off\n 1: on, lighting channel 1 is used for decal lighting\n 2: on, lighting channel 2 is used for decal lighting\n 3: on, lighting channel 3 is used for decal lighting"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileForwardDecalLighting__);
  return;
}

// `dynamic_initializer_for_'CVarMobileForwardEnableClusteredReflections'' @ 140efadc0

void __cdecl _dynamic_initializer_for__CVarMobileForwardEnableClusteredReflections__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileForwardEnableClusteredReflections,
             L"r.Mobile.Forward.EnableClusteredReflections",local_res8,
             L"Whether to enable clustered reflections on mobile forward, it\'s always supported on mobile deferred."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileForwardEnableClusteredReflections__);
  return;
}

// `dynamic_initializer_for_'CVarMobileForwardEnableIESProfiles'' @ 140efae10

void __cdecl _dynamic_initializer_for__CVarMobileForwardEnableIESProfiles__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileForwardEnableIESProfiles,L"r.Mobile.Forward.EnableIESProfiles",local_res8,
             L"0: IES profiles disabled in mobile forward (default)\n1: IES profiles enabled in mobile forward \n"
             ,0x404);
  atexit(_dynamic_atexit_destructor_for__CVarMobileForwardEnableIESProfiles__);
  return;
}

// `dynamic_initializer_for_'CVarMobileForwardEnableLocalLights'' @ 140efae60

void __cdecl _dynamic_initializer_for__CVarMobileForwardEnableLocalLights__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileForwardEnableLocalLights,L"r.Mobile.Forward.EnableLocalLights",local_res8,
             L"0: Local Lights Disabled (default)\n1: Local Lights Enabled\n2: Local Lights Buffer Enabled\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileForwardEnableLocalLights__);
  return;
}

// `dynamic_initializer_for_'CVarMobileForwardEnableParticleLights'' @ 140efaeb0

void __cdecl _dynamic_initializer_for__CVarMobileForwardEnableParticleLights__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileForwardEnableParticleLights,L"r.Mobile.Forward.EnableParticleLights",
             local_res8,
             L"0: Particle Lights Disabled (default)\n1: Particle Lights Enabled (requires local lights)\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileForwardEnableParticleLights__);
  return;
}

// `dynamic_initializer_for_'CVarMobileHDR'' @ 140efaf00

void __cdecl _dynamic_initializer_for__CVarMobileHDR__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileHDR,L"r.MobileHDR",local_res8,
             L"0: Mobile renders in LDR gamma space. (suggested for unlit games targeting low-end phones)\n1: Mobile renders in HDR linear space. (default)"
             ,0x424);
  atexit(_dynamic_atexit_destructor_for__CVarMobileHDR__);
  return;
}

// `dynamic_initializer_for_'CVarMobileRenderRectLightsAsSpotLights'' @ 140efaf50

void __cdecl _dynamic_initializer_for__CVarMobileRenderRectLightsAsSpotLights__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileRenderRectLightsAsSpotLights,
             L"r.Mobile.Forward.RenderRectLightsAsSpotLights",local_res8,
             L"0: Rect Lights are rendered as area lights\n1: Rect Lights are rendered as Spot Lights (default)\n"
             ,0x404);
  atexit(_dynamic_atexit_destructor_for__CVarMobileRenderRectLightsAsSpotLights__);
  return;
}

// `dynamic_initializer_for_'CVarMobileSceneColorFormat'' @ 140efafa0

void __cdecl _dynamic_initializer_for__CVarMobileSceneColorFormat__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileSceneColorFormat,L"r.Mobile.SceneColorFormat",local_res8,
             L"Overrides the memory layout (RGBA) used for the scene color of the mobile renderer.\nUnsupported overridden formats silently use default 0: (default) Automatically select the appropriate format depending on project settings and device support.\n 1: PF_FloatRGBA 64Bit \n 2: PF_FloatR11G11B10 32Bit\n 3: PF_B8G8R8A8 32Bit"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMobileSceneColorFormat__);
  return;
}

// `dynamic_initializer_for_'CVarMobileShadingPath'' @ 140efaff0

void __cdecl _dynamic_initializer_for__CVarMobileShadingPath__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileShadingPath,L"r.Mobile.ShadingPath",local_res8,
             L"0: Forward shading\n1: Deferred shading (Mobile HDR is required for Deferred) (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileShadingPath__);
  return;
}

// `dynamic_initializer_for_'CVarMobileSupportGPUScene'' @ 140efb040

void __cdecl _dynamic_initializer_for__CVarMobileSupportGPUScene__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileSupportGPUScene,L"r.Mobile.SupportGPUScene",local_res8,
             L"Whether to support GPU scene, required for auto-instancing (only Mobile feature level)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileSupportGPUScene__);
  return;
}

// `dynamic_initializer_for_'CVarMobileSupportsGen4TAA'' @ 140efb090

void __cdecl _dynamic_initializer_for__CVarMobileSupportsGen4TAA__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileSupportsGen4TAA,L"r.Mobile.SupportsGen4TAA",local_res8,
             L"Support desktop Gen4 TAA with mobile rendering\n0: Fallback to FXAA1: Support Desktop Gen4 TAA (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileSupportsGen4TAA__);
  return;
}

// `dynamic_initializer_for_'CVarMobileSupportsSM5MaterialNodes'' @ 140efb0e0

void __cdecl _dynamic_initializer_for__CVarMobileSupportsSM5MaterialNodes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileSupportsSM5MaterialNodes,L"r.Mobile.SupportsSM5MaterialNodes",local_res8,
             L"Whether SM5 material nodes can be utilized or not by the mobile renderer on a specific platform (disabled by default)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarMobileSupportsSM5MaterialNodes__);
  return;
}

// `dynamic_initializer_for_'CVarMobileUseCSMShaderBranch'' @ 140efb130

void __cdecl _dynamic_initializer_for__CVarMobileUseCSMShaderBranch__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMobileUseCSMShaderBranch,L"r.Mobile.UseCSMShaderBranch",local_res8,
             L"0: Use two shader permutations for CSM and non-CSM shading. (default)\n1: Use a single shader pemutation with a branch in a shader to apply CSM (only with r.AllowStaticLighting=0)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMobileUseCSMShaderBranch__);
  return;
}

// `dynamic_initializer_for_'CVarMotionBlurQuality'' @ 140efb180

void __cdecl _dynamic_initializer_for__CVarMotionBlurQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMotionBlurQuality,L"r.MotionBlurQuality",local_res8,
             L"Defines the motion blur method which allows to adjust for quality or performance.\n 0:off, 1:low, 2:medium, 3:high (default), 4: very high"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarMotionBlurQuality__);
  return;
}

// `dynamic_initializer_for_'CVarNetMontageDebug'' @ 140efb1d0

void __cdecl _dynamic_initializer_for__CVarNetMontageDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetMontageDebug,L"net.Montage.Debug",local_res8,
             L"Prints Replication information about AnimMontages\n 0: no print.\n 1: Print AnimMontage info on client side as they are played."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarNetMontageDebug__);
  return;
}

// `dynamic_initializer_for_'CVarNetPackageMapDebugAllObjects'' @ 140efb220

void __cdecl _dynamic_initializer_for__CVarNetPackageMapDebugAllObjects__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPackageMapDebugAllObjects,L"net.PackageMap.DebugAll",local_res8,
             L"Debugs PackageMap serialization of all objects",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPackageMapDebugAllObjects__);
  return;
}

// `dynamic_initializer_for_'CVarNetPackageMapDebugObject'' @ 140efb270

void __cdecl _dynamic_initializer_for__CVarNetPackageMapDebugObject__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNetPackageMapDebugObject,L"net.PackageMap.DebugObject",&local_18,
             L"Debugs PackageMap serialization of objectPartial name of object to debug",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNetPackageMapDebugObject__);
  return;
}

// `dynamic_initializer_for_'CVarNetPackageMapLongLoadThreshhold'' @ 140efb2e0

void __cdecl _dynamic_initializer_for__CVarNetPackageMapLongLoadThreshhold__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.02;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarNetPackageMapLongLoadThreshhold,L"net.PackageMap.LongLoadThreshhold",local_res8,
             L"Threshhold time in seconds for printing long load warnings in object serialization",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarNetPackageMapLongLoadThreshhold__);
  return;
}

// `dynamic_initializer_for_'CVarNormalMaps'' @ 140efb330

void __cdecl _dynamic_initializer_for__CVarNormalMaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNormalMaps,L"r.NormalMapsForStaticLighting",local_res8,
             L"Whether to allow any static lighting to use normal maps for lighting computations.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarNormalMaps__);
  return;
}

// `dynamic_initializer_for_'CVarNumBufferedOcclusionQueries'' @ 140efb380

void __cdecl _dynamic_initializer_for__CVarNumBufferedOcclusionQueries__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNumBufferedOcclusionQueries,L"r.NumBufferedOcclusionQueries",local_res8,
             L"Number of frames to buffer occlusion queries (including the current renderthread frame).\nMore frames reduces the chance of stalling the CPU waiting for results, but increases out of date query artifacts."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNumBufferedOcclusionQueries__);
  return;
}

// `dynamic_initializer_for_'CVarPostProcessingColorFormat'' @ 140efb3d0

void __cdecl _dynamic_initializer_for__CVarPostProcessingColorFormat__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPostProcessingColorFormat,L"r.PostProcessingColorFormat",local_res8,
             L"Defines the memory layout (RGBA) used for most of the post processing chain buffers.\n 0: Default\n 1: Force PF_A32B32G32R32F 128Bit (unreasonable but good for testing)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarPostProcessingColorFormat__);
  return;
}

// `dynamic_initializer_for_'CVarPreTileTextures'' @ 140efb420

void __cdecl _dynamic_initializer_for__CVarPreTileTextures__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPreTileTextures,L"r.PreTileTextures",local_res8,
             L"If set to 1, textures will be tiled during cook and are expected to be cooked at runtime"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPreTileTextures__);
  return;
}

// `dynamic_initializer_for_'CVarPrecomputedVisibilityWarning'' @ 140efb470

void __cdecl _dynamic_initializer_for__CVarPrecomputedVisibilityWarning__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPrecomputedVisibilityWarning,L"r.PrecomputedVisibilityWarning",local_res8,
             L"If set to 1, a warning will be displayed when rendering a scene from a view point without precomputed visibility."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPrecomputedVisibilityWarning__);
  return;
}

// `dynamic_initializer_for_'CVarRenderTargetPoolMin'' @ 140efb4c0

void __cdecl _dynamic_initializer_for__CVarRenderTargetPoolMin__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 400;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderTargetPoolMin,L"r.RenderTargetPoolMin",local_res8,
             L"If the render target pool size (in MB) is below this number there is no deallocation of rendertargetsDefault is 200 MB."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarRenderTargetPoolMin__);
  return;
}

// `dynamic_initializer_for_'CVarSceneColorFormat'' @ 140efb510

void __cdecl _dynamic_initializer_for__CVarSceneColorFormat__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneColorFormat,L"r.SceneColorFormat",local_res8,
             L"Defines the memory layout (RGBA) used for the scene color\n(affects performance, mostly through bandwidth, quality especially with translucency).\n 0: PF_B8G8R8A8 32Bit (mostly for testing, likely to unusable with HDR)\n 1: PF_A2B10G10R10 32Bit\n 2: PF_FloatR11G11B10 32Bit\n 3: PF_FloatRGB 32Bit\n 4: PF_FloatRGBA 64Bit (default, might be overkill, especially if translucency is mostly using SeparateTranslucency)\n 5: PF_A32B32G32R32F 128Bit (unreasonable but good for testing)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSceneColorFormat__);
  return;
}

// `dynamic_initializer_for_'CVarSceneColorFringeQuality'' @ 140efb560

void __cdecl _dynamic_initializer_for__CVarSceneColorFringeQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSceneColorFringeQuality,L"r.SceneColorFringeQuality",local_res8,
             L" 0: off but best for performance\n 1: 3 texture samples (default)",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSceneColorFringeQuality__);
  return;
}

// `dynamic_initializer_for_'CVarSetClearSceneMethod'' @ 140efb5b0

void __cdecl _dynamic_initializer_for__CVarSetClearSceneMethod__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSetClearSceneMethod,L"r.ClearSceneMethod",local_res8,
             L"Select how the g-buffer is cleared in game mode (only affects deferred shading).\n 0: No clear\n 1: RHIClear (default)\n 2: Quad at max z"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSetClearSceneMethod__);
  return;
}

// `dynamic_initializer_for_'CVarSetVSyncEnabled'' @ 140efb600

void __cdecl _dynamic_initializer_for__CVarSetVSyncEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSetVSyncEnabled,L"r.VSync",local_res8,
             L"0: VSync is disabled.(default)\n1: VSync is enabled.",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSetVSyncEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarShadowCSMTransitionScale'' @ 140efb650

void __cdecl _dynamic_initializer_for__CVarShadowCSMTransitionScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarShadowCSMTransitionScale,L"r.Shadow.CSM.TransitionScale",local_res8,
             L"Allows to scale the cascaded shadow map transition region. Clamped within 0..2.\n0: no transition (fastest)\n1: as specific in the light settings (default)\n2: 2x larger than what was specified in the light"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarShadowCSMTransitionScale__);
  return;
}

// `dynamic_initializer_for_'CVarShadowDistanceScale'' @ 140efb6a0

void __cdecl _dynamic_initializer_for__CVarShadowDistanceScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarShadowDistanceScale,L"r.Shadow.DistanceScale",local_res8,
             L"Scalability option to trade shadow distance versus performance for directional lights (clamped within a reasonable range).\n<1: shorter distance\n 1: normal (default)\n>1: larger distance"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarShadowDistanceScale__);
  return;
}

// `dynamic_initializer_for_'CVarShadowMaxCSMShadowResolution'' @ 140efb6f0

void __cdecl _dynamic_initializer_for__CVarShadowMaxCSMShadowResolution__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShadowMaxCSMShadowResolution,L"r.Shadow.MaxCSMResolution",local_res8,
             L"Max square dimensions (in texels) allowed for rendering Cascaded Shadow depths. Range 4 to hardware limit. Higher = better quality shadows but at a performance cost."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarShadowMaxCSMShadowResolution__);
  return;
}

// `dynamic_initializer_for_'CVarShadowMaxResolution'' @ 140efb740

void __cdecl _dynamic_initializer_for__CVarShadowMaxResolution__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShadowMaxResolution,L"r.Shadow.MaxResolution",local_res8,
             L"Max square dimensions (in texels) allowed for rendering shadow depths. Range 4 to hardware limit. Higher = better quality shadows but at a performance cost."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarShadowMaxResolution__);
  return;
}

// `dynamic_initializer_for_'CVarShadowQuality'' @ 140efb790

void __cdecl _dynamic_initializer_for__CVarShadowQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShadowQuality,L"r.ShadowQuality",local_res8,
             L"Defines the shadow method which allows to adjust for quality or performance.\n 0:off, 1:low(unfiltered), 2:low .. 5:max (default)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarShadowQuality__);
  return;
}

// `dynamic_initializer_for_'CVarShowWireframe'' @ 140efb7e0

void __cdecl _dynamic_initializer_for__CVarShowWireframe__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShowWireframe,L"r.GeometryInspection.DrawWireframe",local_res8,
             L"Controls if wireframe is drawn in Geometry Inspection modes",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarShowWireframe__);
  return;
}

// `dynamic_initializer_for_'CVarSkeletalMeshLODRadiusScale'' @ 140efb830

void __cdecl _dynamic_initializer_for__CVarSkeletalMeshLODRadiusScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSkeletalMeshLODRadiusScale,L"r.SkeletalMeshLODRadiusScale",local_res8,
             L"Scale factor for the screen radius used in computing discrete LOD for skeletal meshes. (0.25-1)"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSkeletalMeshLODRadiusScale__);
  return;
}

// `dynamic_initializer_for_'CVarSkyLightingQuality'' @ 140efb880

void __cdecl _dynamic_initializer_for__CVarSkyLightingQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSkyLightingQuality,L"r.SkyLightingQuality",local_res8,
             L"Defines the sky lighting quality which allows to adjust for performance.\n<=0: off (fastest)\n  1: on\n"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarSkyLightingQuality__);
  return;
}

// `dynamic_initializer_for_'CVarTrackCsvNamedEvents'' @ 140efb8d0

void __cdecl _dynamic_initializer_for__CVarTrackCsvNamedEvents__(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleObject *pIVar3;
  
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
  pIVar3 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x48))
                     (IConsoleManager::Singleton,L"r.TrackCsvNamedEvents",&GTrackCsvNamedEvents,
                      L"Whether to record named events in the csv profiler",0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackCsvNamedEvents,pIVar3);
  CVarTrackCsvNamedEvents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  atexit(_dynamic_atexit_destructor_for__CVarTrackCsvNamedEvents__);
  return;
}

// `dynamic_initializer_for_'CVarTranslucentSortPolicy'' @ 140efb970

void __cdecl _dynamic_initializer_for__CVarTranslucentSortPolicy__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTranslucentSortPolicy,L"r.TranslucentSortPolicy",local_res8,
             L"0: Sort based on distance from camera centerpoint to bounding sphere centerpoint. (default, best for 3D games)\n1: Sort based on projected distance to camera.\n2: Sort based on the projection onto a fixed axis. (best for 2D games)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTranslucentSortPolicy__);
  return;
}

// `dynamic_initializer_for_'CVarUniformBufferPooling'' @ 140efb9c0

void __cdecl _dynamic_initializer_for__CVarUniformBufferPooling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUniformBufferPooling,L"r.UniformBufferPooling",local_res8,
             L"If we pool object in RHICreateUniformBuffer to have less real API calls to create buffers\n 0: off (for debugging)\n 1: on (optimization)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarUniformBufferPooling__);
  return;
}

// `dynamic_initializer_for_'CVarUseDXT5NormalMaps'' @ 140efba10

void __cdecl _dynamic_initializer_for__CVarUseDXT5NormalMaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseDXT5NormalMaps,L"Compat.UseDXT5NormalMaps",local_res8,
             L"Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware.\nBoth formats require the same amount of memory (if driver doesn\'t emulate the format).\nChanging this will cause normal maps to be recompressed on next load (or when using recompile shaders)\n 0: Use BC5 texture format (default)\n 1: Use DXT5 texture format (lower quality)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarUseDXT5NormalMaps__);
  return;
}

// `dynamic_initializer_for_'CVarVerifyPeer'' @ 140efba60

void __cdecl _dynamic_initializer_for__CVarVerifyPeer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVerifyPeer,L"n.VerifyPeer",local_res8,
             L"Sets libcurl\'s CURLOPT_SSL_VERIFYPEER option to verify authenticity of the peer\'s certificate.\n  0 = disable (allows self-signed certificates)\n  1 = enable [default]"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVerifyPeer__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale'' @ 140efbab0

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale,L"r.ViewDistanceScale",local_res8,
             L"Controls the view distance scale. A primitive\'s MaxDrawDistance is scaled by this value.\nHigher values will increase view distance but at a performance cost.\nDefault = 1."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScaleApplySecondaryScale'' @ 140efbb00

void __cdecl _dynamic_initializer_for__CVarViewDistanceScaleApplySecondaryScale__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarViewDistanceScaleApplySecondaryScale,L"r.ViewDistanceScale.ApplySecondaryScale",
             local_res8,
             L"If true applies the secondary view distance scale to primitive draw distances.\nDefault = 0."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScaleApplySecondaryScale__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScaleSecondaryScale'' @ 140efbb50

void __cdecl _dynamic_initializer_for__CVarViewDistanceScaleSecondaryScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScaleSecondaryScale,L"r.ViewDistanceScale.SecondaryScale",local_res8,
             L"Controls the secondary view distance scale, Default = 1.0.\nThis is an optional scale intended to allow some features or gamemodes to opt-in.\n"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScaleSecondaryScale__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_FieldOfViewAffectsHLOD'' @ 140efbba0

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_FieldOfViewAffectsHLOD__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarViewDistanceScale_FieldOfViewAffectsHLOD,
             L"r.ViewDistanceScale.FieldOfViewAffectsHLOD",local_res8,
             L"If enabled, applies the field of view scaling to HLOD draw distances as well as non-HLODs."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewAffectsHLOD__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_FieldOfViewMaxAngle'' @ 140efbbf0

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_FieldOfViewMaxAngle__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 90.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale_FieldOfViewMaxAngle,L"r.ViewDistanceScale.FieldOfViewMaxAngle",
             local_res8,
             L"Scales the scene view distance scale with camera field of view.\nMaximum angle of the blend range.\nApplies the maximum scale when the camera is at or above this angle."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMaxAngle__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_FieldOfViewMaxAngleScale'' @ 140efbc40

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_FieldOfViewMaxAngleScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale_FieldOfViewMaxAngleScale,
             L"r.ViewDistanceScale.FieldOfViewMaxAngleScale",local_res8,
             L"Scales the scene view distance scale with camera field of view.\nThis value is applied when the camera is at or above the maximum angle."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMaxAngleScale__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_FieldOfViewMinAngle'' @ 140efbc90

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_FieldOfViewMinAngle__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 45.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale_FieldOfViewMinAngle,L"r.ViewDistanceScale.FieldOfViewMinAngle",
             local_res8,
             L"Scales the scene view distance scale with camera field of view.\nMinimum angle of the blend range.\nApplies the minimum scale when the camera is at or below this angle."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMinAngle__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_FieldOfViewMinAngleScale'' @ 140efbce0

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_FieldOfViewMinAngleScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale_FieldOfViewMinAngleScale,
             L"r.ViewDistanceScale.FieldOfViewMinAngleScale",local_res8,
             L"Scales the scene view distance scale with camera field of view.\nThis value is applied when the camera is at or below the minimum angle."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMinAngleScale__);
  return;
}

// `dynamic_initializer_for_'CVarViewDistanceScale_SkeletalMeshOverlay'' @ 140efbd30

void __cdecl _dynamic_initializer_for__CVarViewDistanceScale_SkeletalMeshOverlay__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarViewDistanceScale_SkeletalMeshOverlay,L"r.ViewDistanceScale.SkeletalMeshOverlay",
             local_res8,
             L"Controls the distance scale for skeletal mesh overlay, Default = 1.0. \nHigher values will increase skeletal mesh overlay draw distance. This value is applied together with r.ViewDistanceScale"
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarViewDistanceScale_SkeletalMeshOverlay__);
  return;
}

// `dynamic_initializer_for_'CriticalSection'' @ 140efbd80

void __cdecl NCached::_dynamic_initializer_for__CriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CriticalSection,4000);
  atexit(_dynamic_atexit_destructor_for__CriticalSection__);
  return;
}

// `dynamic_initializer_for_'EnabledPluginsList'' @ 140efbdb0

void __cdecl NCached::_dynamic_initializer_for__EnabledPluginsList__(void)

{
  atexit(_dynamic_atexit_destructor_for__EnabledPluginsList__);
  return;
}

// `dynamic_initializer_for_'EngineData'' @ 140efbdd0

void __cdecl NCached::_dynamic_initializer_for__EngineData__(void)

{
  atexit(_dynamic_atexit_destructor_for__EngineData__);
  return;
}

// `dynamic_initializer_for_'FGenericPlatformStricmpTestAutomationTestInstance'' @ 140efbdf0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FGenericPlatformStricmpTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGenericPlatformStricmpTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FGenericPlatformStricmpTestAutomationTestInstance,&local_18,
             false);
  FGenericPlatformStricmpTestAutomationTestInstance._0_8_ = &FGenericPlatformStricmpTest::_vftable_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGenericPlatformStricmpTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMMapFileReadTestAutomationTestInstance'' @ 140efbe50

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FMMapFileReadTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMMapFileReadTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMMapFileReadTestAutomationTestInstance,&local_18,false);
  FMMapFileReadTestAutomationTestInstance._0_8_ = &___7FMMapFileReadTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMMapFileReadTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMMapFileWriteTestAutomationTestInstance'' @ 140efbeb0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FMMapFileWriteTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMMapFileWriteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMMapFileWriteTestAutomationTestInstance,&local_18,false);
  FMMapFileWriteTestAutomationTestInstance._0_8_ = &___7FMMapFileWriteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMMapFileWriteTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FileJournalFileHandleInvalid'' @ 140efbf10

void __cdecl _dynamic_initializer_for__FileJournalFileHandleInvalid__(void)

{
  FileJournalFileHandleInvalid.Bytes[0] = '\0';
  FileJournalFileHandleInvalid.Bytes[1] = '\0';
  FileJournalFileHandleInvalid.Bytes[2] = '\0';
  FileJournalFileHandleInvalid.Bytes[3] = '\0';
  FileJournalFileHandleInvalid.Bytes[4] = '\0';
  FileJournalFileHandleInvalid.Bytes[5] = '\0';
  FileJournalFileHandleInvalid.Bytes[6] = '\0';
  FileJournalFileHandleInvalid.Bytes[7] = '\0';
  FileJournalFileHandleInvalid.Bytes[8] = '\0';
  FileJournalFileHandleInvalid.Bytes[9] = '\0';
  FileJournalFileHandleInvalid.Bytes[10] = '\0';
  FileJournalFileHandleInvalid.Bytes[0xb] = '\0';
  FileJournalFileHandleInvalid.Bytes[0xc] = '\0';
  FileJournalFileHandleInvalid.Bytes[0xd] = '\0';
  FileJournalFileHandleInvalid.Bytes[0xe] = '\0';
  FileJournalFileHandleInvalid.Bytes[0xf] = '\0';
  FileJournalFileHandleInvalid.Bytes[0x10] = '\0';
  FileJournalFileHandleInvalid.Bytes[0x11] = '\0';
  FileJournalFileHandleInvalid.Bytes[0x12] = '\0';
  FileJournalFileHandleInvalid.Bytes[0x13] = '\0';
  return;
}

// `dynamic_initializer_for_'FilePaths'' @ 140efbf30

void __cdecl NCached::_dynamic_initializer_for__FilePaths__(void)

{
  atexit(_dynamic_atexit_destructor_for__FilePaths__);
  return;
}

// `dynamic_initializer_for_'GOverrideProjectDir'' @ 140efbf50

void __cdecl _dynamic_initializer_for__GOverrideProjectDir__(void)

{
  atexit(_dynamic_atexit_destructor_for__GOverrideProjectDir__);
  return;
}

// `dynamic_initializer_for_'GPUBreadcrumbs'' @ 140efbf70

void __cdecl NCached::_dynamic_initializer_for__GPUBreadcrumbs__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUBreadcrumbs__);
  return;
}

// `dynamic_initializer_for_'GSpecialDPNameForPremadePlatformKey'' @ 140efbf90

void __cdecl _dynamic_initializer_for__GSpecialDPNameForPremadePlatformKey__(void)

{
  FString::FString(&GSpecialDPNameForPremadePlatformKey,L"/");
  atexit(_dynamic_atexit_destructor_for__GSpecialDPNameForPremadePlatformKey__);
  return;
}

// `dynamic_initializer_for_'GameData'' @ 140efbfc0

void __cdecl NCached::_dynamic_initializer_for__GameData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GameData__);
  return;
}

// `dynamic_initializer_for_'Generic_ShaderDir'' @ 140efbfe0

void __cdecl _dynamic_initializer_for__Generic_ShaderDir__(void)

{
  atexit(_dynamic_atexit_destructor_for__Generic_ShaderDir__);
  return;
}

// `dynamic_initializer_for_'LogChunkInstaller'' @ 140efc000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChunkInstaller__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChunkInstaller,L"LogChunkInstaller",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChunkInstaller__);
  return;
}

// `dynamic_initializer_for_'LogConsoleManager'' @ 140efc040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogConsoleManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogConsoleManager,L"LogConsoleManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogConsoleManager__);
  return;
}

// `dynamic_initializer_for_'LogConsoleResponse'' @ 140efc080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogConsoleResponse__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogConsoleResponse,L"LogConsoleResponse",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogConsoleResponse__);
  return;
}

// `dynamic_initializer_for_'LogCrashContext'' @ 140efc0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCrashContext__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCrashContext,L"LogCrashContext",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogCrashContext__);
  return;
}

// `dynamic_initializer_for_'LogGenericPlatformMisc'' @ 140efc100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericPlatformMisc__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGenericPlatformMisc,L"LogGenericPlatformMisc",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericPlatformMisc__);
  return;
}

// `dynamic_initializer_for_'LogGenericPlatformString'' @ 140efc140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericPlatformString__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGenericPlatformString,L"LogGenericPlatformString",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericPlatformString__);
  return;
}

// `dynamic_initializer_for_'LogGenericPlatformSymbolication'' @ 140efc180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericPlatformSymbolication__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGenericPlatformSymbolication,L"LogGenericPlatformSymbolication"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericPlatformSymbolication__);
  return;
}

// `dynamic_initializer_for_'LogGenericPlatformTime'' @ 140efc1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGenericPlatformTime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGenericPlatformTime,L"LogGenericPlatformTime",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGenericPlatformTime__);
  return;
}

// `dynamic_initializer_for_'PlatformToDeviceProfileMap'' @ 140efc200

void __cdecl
ConsoleVariablePlatformMapping::_dynamic_initializer_for__PlatformToDeviceProfileMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__PlatformToDeviceProfileMap__);
  return;
}

// `dynamic_initializer_for_'Session'' @ 140efc220

void __cdecl NCached::_dynamic_initializer_for__Session__(void)

{
  FGenericPlatformMemoryConstants *pFVar1;
  
  pFVar1 = FWindowsPlatformMemory::GetConstants();
  Session.MemoryStats._padding_ = pFVar1->TotalPhysical;
  Session.MemoryStats._padding_ = pFVar1->TotalVirtual;
  Session.MemoryStats._padding_ = pFVar1->PageSize;
  Session.MemoryStats._padding_ = pFVar1->OsAllocationGranularity;
  Session.MemoryStats._padding_ = pFVar1->BinnedPageSize;
  Session.MemoryStats._padding_ = pFVar1->BinnedAllocationGranularity;
  Session.MemoryStats._padding_ = pFVar1->AddressStart;
  Session.MemoryStats._padding_ = pFVar1->AddressLimit;
  Session.MemoryStats._padding_ = *(longlong *)&pFVar1->TotalPhysicalGB;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats._padding_ = 0;
  Session.MemoryStats.WindowsSpecificMemoryStat = 0;
  Session.MemoryStats.MemoryPressureStatus = Unknown;
  return;
}

// `dynamic_initializer_for_'ShaderPlatformToPlatformMap'' @ 140efc2a0

void __cdecl
ConsoleVariablePlatformMapping::_dynamic_initializer_for__ShaderPlatformToPlatformMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__ShaderPlatformToPlatformMap__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_GPU'' @ 140efc2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_GPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_GPU == (FThreadSafeStaticStat<FStat_MCR_GPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_GPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_GPU,*pFVar1,L"GPU Memory Pool [GPU]",
               "STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
               MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_Physical'' @ 140efc350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_Physical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_Physical == (FThreadSafeStaticStat<FStat_MCR_Physical>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_Physical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_Physical,*pFVar1,
               L"Physical Memory Pool [Physical]","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_PhysicalLLM'' @ 140efc3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_PhysicalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_PhysicalLLM == (FThreadSafeStaticStat<FStat_MCR_PhysicalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_PhysicalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_PhysicalLLM,*pFVar1,
               L"Total Physical Memory Pool (CPU + GPU) [PhysicalLLM]","STATGROUP_Memory",
               "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_StreamingPool'' @ 140efc470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_StreamingPool__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_StreamingPool == (FThreadSafeStaticStat<FStat_MCR_StreamingPool>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_StreamingPool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_StreamingPool,*pFVar1,
               L"Streaming Texture Pool [Streaming]","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
               ,true,false,ST_int64,false,false,MCR_StreamingPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_TexturePool'' @ 140efc500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_TexturePool__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_TexturePool == (FThreadSafeStaticStat<FStat_MCR_TexturePool>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_TexturePool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_TexturePool,*pFVar1,
               L"Texture Memory Pool [Texture]","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
               ,false,ST_int64,false,false,MCR_TexturePool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MCR_UsedStreamingPool'' @ 140efc590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MCR_UsedStreamingPool__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MCR_UsedStreamingPool == (FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool>)0x0) {
    pFVar1 = FName::FName(local_res8,"MCR_UsedStreamingPool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MCR_UsedStreamingPool,*pFVar1,
               L"Used Streaming Pool [Wanted]","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
               false,ST_int64,false,false,MCR_UsedStreamingPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncFileHandles'' @ 140efc620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncFileHandles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncFileHandles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar1,
               L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncFileMemory'' @ 140efc6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncFileMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncFileMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar1,
               L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncFileRequests'' @ 140efc740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncFileRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncFileRequests == (FThreadSafeStaticStat<FStat_STAT_AsyncFileRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncFileRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileRequests,*pFVar1,
               L"Num Async File Requests","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AvailablePhysical'' @ 140efc7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AvailablePhysical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AvailablePhysical == (FThreadSafeStaticStat<FStat_STAT_AvailablePhysical>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AvailablePhysical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailablePhysical,*pFVar1,
               L"Available Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
               L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AvailableVirtual'' @ 140efc860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AvailableVirtual__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AvailableVirtual == (FThreadSafeStaticStat<FStat_STAT_AvailableVirtual>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AvailableVirtual");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailableVirtual,*pFVar1,
               L"Available Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EventWait'' @ 140efc8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EventWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EventWait == (FThreadSafeStaticStat<FStat_STAT_EventWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EventWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventWait,*pFVar1,
               L"CPU Stall - Wait For Event","STATGROUP_CPUStalls","STATCAT_Advanced",L"CPU Stalls",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MappedFileHandles'' @ 140efc980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MappedFileHandles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MappedFileHandles == (FThreadSafeStaticStat<FStat_STAT_MappedFileHandles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MappedFileHandles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileHandles,*pFVar1,
               L"Num Mapped File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MappedFileMemory'' @ 140efca10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MappedFileMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MappedFileMemory == (FThreadSafeStaticStat<FStat_STAT_MappedFileMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MappedFileMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileMemory,*pFVar1,
               L"Mapped File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MappedFileRegions'' @ 140efcaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MappedFileRegions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MappedFileRegions == (FThreadSafeStaticStat<FStat_STAT_MappedFileRegions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MappedFileRegions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileRegions,*pFVar1,
               L"Num Mapped File Regions","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PageSize'' @ 140efcb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PageSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PageSize == (FThreadSafeStaticStat<FStat_STAT_PageSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PageSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageSize,*pFVar1,L"Page Size",
               "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PeakUsedPhysical'' @ 140efcbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PeakUsedPhysical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PeakUsedPhysical == (FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PeakUsedPhysical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedPhysical,*pFVar1,
               L"Peak Used Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
               L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PeakUsedVirtual'' @ 140efcc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PeakUsedVirtual__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PeakUsedVirtual == (FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PeakUsedVirtual");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedVirtual,*pFVar1,
               L"Peak Used Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Sleep'' @ 140efcce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Sleep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Sleep == (FThreadSafeStaticStat<FStat_STAT_Sleep>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Sleep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Sleep,*pFVar1,L"CPU Stall - Sleep",
               "STATGROUP_CPUStalls","STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalPhysical'' @ 140efcd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalPhysical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalPhysical == (FThreadSafeStaticStat<FStat_STAT_TotalPhysical>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalPhysical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysical,*pFVar1,L"Total Physical",
               "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalPhysicalGB'' @ 140efce00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalPhysicalGB__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalPhysicalGB == (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalPhysicalGB");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicalGB,*pFVar1,
               L"Total Physical GB","STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalVirtual'' @ 140efce90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalVirtual__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalVirtual == (FThreadSafeStaticStat<FStat_STAT_TotalVirtual>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalVirtual");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalVirtual,*pFVar1,L"Total Virtual",
               "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UsedPhysical'' @ 140efcf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UsedPhysical__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UsedPhysical == (FThreadSafeStaticStat<FStat_STAT_UsedPhysical>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UsedPhysical");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedPhysical,*pFVar1,L"Used Physical",
               "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UsedVirtual'' @ 140efcfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UsedVirtual__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UsedVirtual == (FThreadSafeStaticStat<FStat_STAT_UsedVirtual>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UsedVirtual");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedVirtual,*pFVar1,L"Used Virtual",
               "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'TaggedCVars'' @ 140efd040

void __cdecl UE::ConsoleManager::Private::_dynamic_initializer_for__TaggedCVars__(void)

{
  atexit(_dynamic_atexit_destructor_for__TaggedCVars__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryAvailablePhysical'' @ 140efd060

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryAvailablePhysical__(void)

{
  __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/AvailablePhysical",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryAvailablePhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryAvailableVirtual'' @ 140efd0a0

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryAvailableVirtual__(void)

{
  __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/AvailableVirtual",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryAvailableVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryPageSize'' @ 140efd0e0

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryPageSize__(void)

{
  __GTraceCounterPlatformMemoryPageSize.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/PageSize",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryPageSize.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPageSize__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryPeakUsedPhysical'' @ 140efd120

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryPeakUsedPhysical__(void)

{
  __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/PeakUsedPhysical",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPeakUsedPhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryPeakUsedVirtual'' @ 140efd160

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryPeakUsedVirtual__(void)

{
  __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/PeakUsedVirtual",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPeakUsedVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryTotalPhysical'' @ 140efd1a0

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryTotalPhysical__(void)

{
  __GTraceCounterPlatformMemoryTotalPhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/TotalPhysical",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterPlatformMemoryTotalPhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryTotalPhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryTotalVirtual'' @ 140efd1e0

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryTotalVirtual__(void)

{
  __GTraceCounterPlatformMemoryTotalVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/TotalVirtual",TraceCounterType_Int,TraceCounterDisplayHint_Memory
                 );
  LOCK();
  __GTraceCounterPlatformMemoryTotalVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryTotalVirtual__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryUsedPhysical'' @ 140efd220

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryUsedPhysical__(void)

{
  __GTraceCounterPlatformMemoryUsedPhysical.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/UsedPhysical",TraceCounterType_Int,TraceCounterDisplayHint_Memory
                 );
  LOCK();
  __GTraceCounterPlatformMemoryUsedPhysical.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryUsedPhysical__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterPlatformMemoryUsedVirtual'' @ 140efd260

void __cdecl _dynamic_initializer_for____GTraceCounterPlatformMemoryUsedVirtual__(void)

{
  __GTraceCounterPlatformMemoryUsedVirtual.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"PlatformMemory/UsedVirtual",TraceCounterType_Int,TraceCounterDisplayHint_Memory)
  ;
  LOCK();
  __GTraceCounterPlatformMemoryUsedVirtual.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryUsedVirtual__);
  return;
}

// `scalar_deleting_destructor' @ 14160a990

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160ac50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160b430

void * __thiscall
FMMapFileReadTest::_scalar_deleting_destructor_(FMMapFileReadTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160bc20

void * __thiscall
FMMapFileWriteTest::_scalar_deleting_destructor_(FMMapFileWriteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160bc60

void * __thiscall
TAutoConsoleVariable<FString>::_scalar_deleting_destructor_
          (TAutoConsoleVariable<FString> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160bca0

void * __thiscall
TAutoConsoleVariable<bool>::_scalar_deleting_destructor_
          (TAutoConsoleVariable<bool> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160bce0

void * __thiscall
TAutoConsoleVariable<int>::_scalar_deleting_destructor_
          (TAutoConsoleVariable<int> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160bd20

void * __thiscall
TAutoConsoleVariable<float>::_scalar_deleting_destructor_
          (TAutoConsoleVariable<float> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14160c010

void * __thiscall
FGenericPlatformStricmpTest::_scalar_deleting_destructor_
          (FGenericPlatformStricmpTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// operator<<<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_> @ 14160c140

FArchive * __cdecl
operator<<<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  FGenericPlatformSymbolData *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FGenericPlatformSymbolData,int>
                ((FGenericPlatformSymbolData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              operator<<(param_1,(FGenericPlatformSymbolData *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FGenericPlatformSymbolData *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FGenericPlatformSymbolData,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_> @ 14160c150

FArchive * __cdecl
operator<<<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar10 = 0;
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
                (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            operator<<(param_1,(FGenericPlatformSymbolInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x20));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
        ;
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          operator<<(param_1,(FGenericPlatformSymbolInfo *)(pFVar3 + (longlong)iVar6 * 0x20));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FString,TSizedDefaultAllocator<32>_> @ 14160c160

FArchive * __cdecl
operator<<<FString,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
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
      DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FString *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)&pFVar9->field_0x0 = 0;
          *(undefined8 *)(pFVar9 + 8) = 0;
          operator<<(param_1,(FString *)pFVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// AddLambda<`FGenericCrashContext::Initialize'::__l57::<lambda_1>_> @ 14160cb70

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l57::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`57'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_3>_> @ 14160cda0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_4>_> @ 14160cfd0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_4>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_4> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_5>_> @ 14160d200

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_5>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_5> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_6>_> @ 14160d430

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_6>_>
          (TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_6> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCrashOverrideParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_7>_> @ 14160d660

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_7>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_7> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_8>_> @ 14160d890

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_8>_>
          (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          <lambda_8> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FGenericCrashContext::Initialize'::__l2::<lambda_9>_> @ 14160dac0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_9>_>(void *this,<lambda_9> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14160e5e0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14160e660

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14160e6e0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14160e760

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// DefaultConstructItems<FGenericPlatformSymbolData,int> @ 14160f490

void __cdecl DefaultConstructItems<FGenericPlatformSymbolData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGenericPlatformSymbolInfo,int> @ 14160f4c0

void __cdecl DefaultConstructItems<FGenericPlatformSymbolInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FProgramCounterSymbolInfo,int> @ 14160f4d0

void __cdecl DefaultConstructItems<FProgramCounterSymbolInfo,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0xbff);
    do {
      *(undefined8 *)(puVar1 + 1) = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0x11) = 0;
      strncpy(puVar1 + -0xbff,"",0x400);
      puVar1[-0x800] = 0;
      strncpy(puVar1 + -0x7ff,"",0x400);
      puVar1[-0x400] = 0;
      strncpy(puVar1 + -0x3ff,"",0x400);
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStackWalkModuleInfo,int> @ 14160f580

void __cdecl DefaultConstructItems<FStackWalkModuleInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int> @ 14160f590

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
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

// DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int> @ 14160f620

void __cdecl
DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int> @ 14160f660

void __cdecl
DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int> @ 14160f6a0

void __cdecl
DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      DestructItems<TTuple<FName,TConsoleVariableData<FString>_>,int>
                ((TTuple<FName,TConsoleVariableData<FString>_> *)*puVar1,*(int *)(puVar1 + 1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int> @ 14160f6f0

void __cdecl
DestructItems<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TConsoleVariableData<FString>_>,int> @ 14160f730

void __cdecl
DestructItems<TTuple<FName,TConsoleVariableData<FString>_>,int>
          (TTuple<FName,TConsoleVariableData<FString>_> *param_1,int param_2)

{
  TTuple<FName,TConsoleVariableData<FString>_> *pTVar1;
  longlong lVar2;
  TTuple<FName,TConsoleVariableData<FString>_> *pTVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1 = param_1 + 1;
    lVar2 = 2;
    pTVar3 = param_1;
    do {
      pTVar1 = pTVar3 + -1;
      pTVar3 = (TTuple<FName,TConsoleVariableData<FString>_> *)&pTVar3[-1].field_0x18;
      lVar2 = lVar2 + -1;
      if (*(void **)&pTVar1->field_0x18 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1->field_0x18);
      }
    } while (lVar2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,FFormatArgumentValue>,int> @ 14160f7a0

void __cdecl
DestructItems<TTuple<FString,FFormatArgumentValue>,int>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong **)&param_1->field_0x20 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&param_1->field_0x20 + 0x10))();
    }
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FCrashStackFrame,int> @ 14160f7f0

void __cdecl DestructItems<FCrashStackFrame,int>(FCrashStackFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ModuleName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGenericPlatformSymbolData,int> @ 14160f830

void __cdecl
DestructItems<FGenericPlatformSymbolData,int>(FGenericPlatformSymbolData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SymbolInfo;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FThreadStackFrames,int> @ 14160f870

void __cdecl DestructItems<FThreadStackFrames,int>(FThreadStackFrames *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->StackFrames;
    do {
      DestructItems<FCrashStackFrame,int>
                ((FCrashStackFrame *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = (TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int> @ 14160f8d0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
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

// DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int> @ 14160f950

void __cdecl
DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int> @ 14160f9a0

void __cdecl
DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// FindOrCreateTypedPlatformCVar<int> @ 141612c40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariable<int> * __cdecl
FindOrCreateTypedPlatformCVar<int>(FConsoleVariableExtendedData<int> *param_1,FName param_2)

{
  code *pcVar1;
  IConsoleManager *this;
  IConsoleVariable *pIVar2;
  bool bVar3;
  EConsoleVariableFlags EVar4;
  int iVar5;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar6;
  FConsoleVariableExtendedData<int> *this_00;
  FConsoleVariable<int> *pFVar7;
  int local_res8 [2];
  FName local_res10;
  TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&> local_res18;
  TSharedPtr<IConsoleVariable,1> local_78;
  TSharedPtr<IConsoleVariable,1> local_68;
  FName *local_58;
  TSharedPtr<IConsoleVariable,1> *local_50;
  TSharedPtr<IConsoleVariable,1> local_48;
  
  local_res10 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  pTVar6 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&param_1->PlatformValues,local_res10);
  if (pTVar6 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    local_78.Object = (IConsoleVariable *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78.Object = *(IConsoleVariable **)&pTVar6->field_0x8;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pTVar6->field_0x10;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FConsoleVariable<int> *)local_78.Object != (FConsoleVariable<int> *)0x0)
    goto LAB_141612e02;
  }
  this_00 = operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<int> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<int> *)0x0;
  }
  else {
    EVar4 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    iVar5 = FConsoleVariableExtendedData<int>::GetDefaultTypedValue(param_1);
    local_res8[0] = iVar5;
    FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
              (this_00,local_res8,L"Platform CVar copy",EVar4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_H__6B_;
    *(int *)&this_00[1]._padding_ = iVar5;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar5;
    this_00[1]._padding_ = (longlong)param_1;
  }
  local_68.Object = (IConsoleVariable *)this_00;
  local_68.SharedReferenceCount.ReferenceController = operator_new(0x18);
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__FConsoleVariable_H__U__DefaultDeleter_V__FConsoleVariable_H___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_68.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
  }
  TSharedPtr<IConsoleVariable,1>::operator=(&local_78,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_58 = &local_res10;
  local_50 = &local_78;
  TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformValues,&local_res18,(bool *)&local_58);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FConsoleVariable<int> *)(*pcVar1)();
    return pFVar7;
  }
  this = IConsoleManager::Singleton;
  local_48.Object = local_78.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FConsoleManager::OnCreatedPlatformCVar
            ((FConsoleManager *)this,(IConsoleVariable *)param_1,&local_48,local_res10);
LAB_141612e02:
  pIVar2 = local_78.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  return (FConsoleVariable<int> *)pIVar2;
}

// FindOrCreateTypedPlatformCVar<float> @ 141612e30

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariable<float> * __cdecl
FindOrCreateTypedPlatformCVar<float>(FConsoleVariableExtendedData<float> *param_1,FName param_2)

{
  code *pcVar1;
  IConsoleManager *this;
  IConsoleVariable *pIVar2;
  bool bVar3;
  EConsoleVariableFlags EVar4;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar5;
  FConsoleVariableExtendedData<float> *this_00;
  FConsoleVariable<float> *pFVar6;
  float fVar7;
  float local_res8 [2];
  FName local_res10 [2];
  TSharedPtr<IConsoleVariable,1> local_78;
  TSharedPtr<IConsoleVariable,1> local_68;
  FName *local_58;
  TSharedPtr<IConsoleVariable,1> *local_50;
  TSharedPtr<IConsoleVariable,1> local_48 [2];
  
  local_res10[0] = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  pTVar5 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&param_1->PlatformValues,local_res10[0]);
  if (pTVar5 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    local_78.Object = (IConsoleVariable *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78.Object = *(IConsoleVariable **)&pTVar5->field_0x8;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FConsoleVariable<float> *)local_78.Object != (FConsoleVariable<float> *)0x0)
    goto LAB_141612ffe;
  }
  this_00 = operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<float> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<float> *)0x0;
  }
  else {
    EVar4 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    fVar7 = FConsoleVariableExtendedData<float>::GetDefaultTypedValue(param_1);
    local_res8[0] = fVar7;
    FConsoleVariableExtendedData<float>::FConsoleVariableExtendedData<float>
              (this_00,local_res8,L"Platform CVar copy",EVar4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_M__6B_;
    *(float *)&this_00[1]._padding_ = fVar7;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = fVar7;
    this_00[1]._padding_ = (longlong)param_1;
  }
  local_68.Object = (IConsoleVariable *)this_00;
  local_68.SharedReferenceCount.ReferenceController = operator_new(0x18);
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__FConsoleVariable_M__U__DefaultDeleter_V__FConsoleVariable_M___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_68.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
  }
  TSharedPtr<IConsoleVariable,1>::operator=(&local_78,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_58 = local_res10;
  local_50 = &local_78;
  TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformValues,
             (TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&> *)
             (local_res10 + 1),(bool *)&local_58);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FConsoleVariable<float> *)(*pcVar1)();
    return pFVar6;
  }
  this = IConsoleManager::Singleton;
  local_48[0].Object = local_78.Object;
  local_48[0].SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FConsoleManager::OnCreatedPlatformCVar
            ((FConsoleManager *)this,(IConsoleVariable *)param_1,local_48,local_res10[0]);
LAB_141612ffe:
  pIVar2 = local_78.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  return (FConsoleVariable<float> *)pIVar2;
}

// FindOrCreateTypedPlatformCVar<FString> @ 141613030

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariable<FString> * __cdecl
FindOrCreateTypedPlatformCVar<FString>(FConsoleVariableExtendedData<FString> *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *this;
  IConsoleVariable *pIVar3;
  bool bVar4;
  EConsoleVariableFlags EVar5;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar6;
  FConsoleVariableExtendedData<FString> *this_00;
  FString *pFVar7;
  FString *pFVar8;
  FConsoleVariable<FString> *pFVar9;
  TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&> local_res8;
  TSharedPtr<IConsoleVariable,1> local_88;
  TSharedPtr<IConsoleVariable,1> local_78;
  TSharedPtr<IConsoleVariable,1> **local_68;
  TSharedPtr<IConsoleVariable,1> *local_60;
  TSharedPtr<IConsoleVariable,1> local_58;
  FString local_48;
  FString local_38;
  
  local_res8.Value = (TSharedPtr<IConsoleVariable,1> *)param_2;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  pTVar6 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&param_1->PlatformValues,(FName)local_res8.Value);
  if (pTVar6 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    local_88.Object = (IConsoleVariable *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_88.Object = *(IConsoleVariable **)&pTVar6->field_0x8;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pTVar6->field_0x10;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FConsoleVariable<FString> *)local_88.Object != (FConsoleVariable<FString> *)0x0)
    goto LAB_14161321e;
  }
  this_00 = operator_new(0xe0);
  if (this_00 == (FConsoleVariableExtendedData<FString> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<FString> *)0x0;
  }
  else {
    EVar5 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    pFVar7 = FConsoleVariableExtendedData<FString>::GetDefaultTypedValue(param_1,&local_48);
    FConsoleVariableExtendedData<FString>::FConsoleVariableExtendedData<FString>
              (this_00,pFVar7,L"Platform CVar copy",EVar5);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_VFString____6B_;
    pFVar8 = FString::FString(&local_38,pFVar7);
    TConsoleVariableData<FString>::TConsoleVariableData<FString>
              ((TConsoleVariableData<FString> *)(this_00 + 1),pFVar8);
    this_00[1]._padding_ = (longlong)param_1;
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  local_78.Object = (IConsoleVariable *)this_00;
  local_78.SharedReferenceCount.ReferenceController = operator_new(0x18);
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_78.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__FConsoleVariable_VFString____U__DefaultDeleter_V__FConsoleVariable_VFString_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_78.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
  }
  TSharedPtr<IConsoleVariable,1>::operator=(&local_88,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  local_68 = &local_res8.Value;
  local_60 = &local_88;
  TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformValues,&local_res8,(bool *)&local_68);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FConsoleVariable<FString> *)(*pcVar2)();
    return pFVar9;
  }
  this = IConsoleManager::Singleton;
  local_58.Object = local_88.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FConsoleManager::OnCreatedPlatformCVar
            ((FConsoleManager *)this,(IConsoleVariable *)param_1,&local_58,(FName)local_res8.Value);
LAB_14161321e:
  pIVar3 = local_88.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  return (FConsoleVariable<FString> *)pIVar3;
}

// FindOrCreateTypedPlatformCVar<bool> @ 141613250

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariable<bool> * __cdecl
FindOrCreateTypedPlatformCVar<bool>(FConsoleVariableExtendedData<bool> *param_1,FName param_2)

{
  code *pcVar1;
  IConsoleManager *this;
  IConsoleVariable *pIVar2;
  bool bVar3;
  EConsoleVariableFlags EVar4;
  TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *pTVar5;
  FConsoleVariableExtendedData<bool> *this_00;
  FConsoleVariable<bool> *pFVar6;
  bool local_res8 [8];
  FName local_res10;
  TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&> local_res18;
  TSharedPtr<IConsoleVariable,1> local_78;
  TSharedPtr<IConsoleVariable,1> local_68;
  FName *local_58;
  TSharedPtr<IConsoleVariable,1> *local_50;
  TSharedPtr<IConsoleVariable,1> local_48;
  
  local_res10 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  pTVar5 = TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
                   *)&param_1->PlatformValues,local_res10);
  if (pTVar5 == (TTuple<FName,TSharedPtr<IConsoleVariable,1>_> *)0x0) {
    local_78.Object = (IConsoleVariable *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78.Object = *(IConsoleVariable **)&pTVar5->field_0x8;
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FConsoleVariable<bool> *)local_78.Object != (FConsoleVariable<bool> *)0x0)
    goto LAB_141613415;
  }
  this_00 = operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<bool> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<bool> *)0x0;
  }
  else {
    EVar4 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
    bVar3 = FConsoleVariableExtendedData<bool>::GetDefaultTypedValue(param_1);
    local_res8[0] = bVar3;
    FConsoleVariableExtendedData<bool>::FConsoleVariableExtendedData<bool>
              (this_00,local_res8,L"Platform CVar copy",EVar4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable__N__6B_;
    *(bool *)&this_00[1]._padding_ = bVar3;
    *(bool *)((longlong)&this_00[1]._padding_ + 1) = bVar3;
    this_00[1]._padding_ = (longlong)param_1;
  }
  local_68.Object = (IConsoleVariable *)this_00;
  local_68.SharedReferenceCount.ReferenceController = operator_new(0x18);
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__FConsoleVariable__N__U__DefaultDeleter_V__FConsoleVariable__N___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_68.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
  }
  TSharedPtr<IConsoleVariable,1>::operator=(&local_78,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_58 = &local_res10;
  local_50 = &local_78;
  TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<IConsoleVariable,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<IConsoleVariable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IConsoleVariable,1>,0>,FDefaultSetAllocator>
              *)&param_1->PlatformValues,&local_res18,(bool *)&local_58);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FConsoleVariable<bool> *)(*pcVar1)();
    return pFVar6;
  }
  this = IConsoleManager::Singleton;
  local_48.Object = local_78.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FConsoleManager::OnCreatedPlatformCVar
            ((FConsoleManager *)this,(IConsoleVariable *)param_1,&local_48,local_res10);
LAB_141613415:
  pIVar2 = local_78.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PlatformValuesLock);
  return (FConsoleVariable<bool> *)pIVar2;
}

// LexToString<FString,unsigned_int> @ 141613b80

FString * __cdecl LexToString<FString,unsigned_int>(FString *__return_storage_ptr__,uint *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// LexToString<FString,float> @ 141613bb0

FString * __cdecl LexToString<FString,float>(FString *__return_storage_ptr__,float *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// LexToString<FString,unsigned___int64> @ 141613be0

FString * __cdecl
LexToString<FString,unsigned___int64>(FString *__return_storage_ptr__,ulong64 *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// LexToString<FString,wchar_t> @ 141613c10

FString * __cdecl LexToString<FString,wchar_t>(FString *__return_storage_ptr__,wchar_t *param_1)

{
  FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 141613c30

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 141613c80

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 141613cd0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 141613d20

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141613d70

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,FString *param_3,
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_2) {
    iVar2 = (param_3->Data).ArrayNum;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      if (iVar2 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar5;
}

// OnCVarChange<int> @ 1416140b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
OnCVarChange<int>(int *param_1,int *param_2,EConsoleVariableFlags param_3,
                 EConsoleVariableFlags param_4)

{
  IConsoleManager IVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  
  if ((param_4 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = IConsoleManager::Singleton;
    bVar4 = IsInGameThread();
    if ((bVar4) || (bVar4 = IsReloadActive(), bVar4)) {
      if (((param_3 & ECVF_RenderThreadSafe) == ECVF_Default) ||
         (IVar1 = pIVar3[0x20], IVar1 == (IConsoleManager)0x0)) {
        *param_1 = *param_2;
      }
      else {
        (**(code **)(*(longlong *)IVar1 + 0x20))(IVar1,param_1,*param_2);
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_4 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
    }
  }
  else {
    *param_1 = *param_2;
  }
  return;
}

// OnCVarChange<float> @ 1416141c0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
OnCVarChange<float>(float *param_1,float *param_2,EConsoleVariableFlags param_3,
                   EConsoleVariableFlags param_4)

{
  IConsoleManager IVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  
  if ((param_4 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = IConsoleManager::Singleton;
    bVar4 = IsInGameThread();
    if ((bVar4) || (bVar4 = IsReloadActive(), bVar4)) {
      if (((param_3 & ECVF_RenderThreadSafe) == ECVF_Default) ||
         (IVar1 = pIVar3[0x20], IVar1 == (IConsoleManager)0x0)) {
        *param_1 = *param_2;
      }
      else {
        (**(code **)(*(longlong *)IVar1 + 0x18))(IVar1,param_1,*param_2);
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_4 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
    }
  }
  else {
    *param_1 = *param_2;
  }
  return;
}

// OnCVarChange<FName> @ 1416142d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
OnCVarChange<FName>(FName *param_1,FName *param_2,EConsoleVariableFlags param_3,
                   EConsoleVariableFlags param_4)

{
  IConsoleManager IVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  
  if ((param_4 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = IConsoleManager::Singleton;
    bVar4 = IsInGameThread();
    if ((bVar4) || (bVar4 = IsReloadActive(), bVar4)) {
      if (((param_3 & ECVF_RenderThreadSafe) == ECVF_Default) ||
         (IVar1 = pIVar3[0x20], IVar1 == (IConsoleManager)0x0)) {
        *param_1 = *param_2;
      }
      else {
        (*(code *)**(undefined8 **)IVar1)(IVar1,param_1,param_2);
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_4 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
    }
  }
  else {
    *param_1 = *param_2;
  }
  return;
}

// OnCVarChange<FString> @ 1416143e0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
OnCVarChange<FString>
          (FString *param_1,FString *param_2,EConsoleVariableFlags param_3,
          EConsoleVariableFlags param_4)

{
  IConsoleManager IVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  
  if ((param_4 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = IConsoleManager::Singleton;
    bVar4 = IsInGameThread();
    if ((bVar4) || (bVar4 = IsReloadActive(), bVar4)) {
      if (((param_3 & ECVF_RenderThreadSafe) == ECVF_Default) ||
         (IVar1 = pIVar3[0x20], IVar1 == (IConsoleManager)0x0)) {
        FString::operator=(param_1,param_2);
      }
      else {
        (**(code **)(*(longlong *)IVar1 + 8))(IVar1,param_1,param_2);
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_4 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
    }
  }
  else {
    FString::operator=(param_1,param_2);
  }
  return;
}

// OnCVarChange<bool> @ 1416144f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
OnCVarChange<bool>(bool *param_1,bool *param_2,EConsoleVariableFlags param_3,
                  EConsoleVariableFlags param_4)

{
  IConsoleManager IVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  
  if ((param_4 >> 0x11 & 1) == 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar3 = IConsoleManager::Singleton;
    bVar4 = IsInGameThread();
    if ((bVar4) || (bVar4 = IsReloadActive(), bVar4)) {
      if (((param_3 & ECVF_RenderThreadSafe) == ECVF_Default) ||
         (IVar1 = pIVar3[0x20], IVar1 == (IConsoleManager)0x0)) {
        *param_1 = *param_2;
      }
      else {
        (**(code **)(*(longlong *)IVar1 + 0x10))(IVar1,param_1,*param_2);
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x1e6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_4 >> 0x10 & 1) == 0) {
      *(undefined1 *)(pIVar3 + 0x3a) = 1;
    }
  }
  else {
    *param_1 = *param_2;
  }
  return;
}

// ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 141614600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> *param_7)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  atomic<int> aVar12;
  ETaskTag EVar13;
  int iVar14;
  FName *pFVar15;
  TStatId TVar16;
  FParallelForData *pFVar17;
  FTaskGraphInterface *pFVar18;
  bool *pbVar19;
  wchar_t *pwVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  FSourceLocation *pFVar24;
  ETaskPriority EVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  FSourceLocation *pFVar29;
  FEventRef local_c8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
  local_c0;
  int local_b8;
  char local_b4;
  FName local_b0;
  byte local_a8;
  IPlatformFile *local_a0;
  code *local_98;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
  local_90;
  FSourceLocation local_88;
  undefined **local_68;
  EDirectoryVisitorFlags local_60;
  FDirectoryVisitor *local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_50;
  FName local_48 [2];
  
  if (param_2 == 0) {
    return;
  }
  TVar16.StatIdPtr = (TStatIdData *)StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar15 = ::FName::FName(local_48,"STAT_ParallelFor");
    TVar16.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar15,L"ParallelFor",
                    "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  local_88.Impl._Line = 0x7e;
  local_88.Impl._Function =
       "void __cdecl ParallelForImpl::ParallelForInternal<class IPlatformFile::IterateDirectoryRecursively::<lambda_1>,class ParallelForWithTaskContext::<lambda_1>,class TArray<class FString,class TSizedDefaultAllocator<32> >>(const wchar_t *,int,int,class IPlatformFile::IterateDirectoryRecursively::<lambda_1>,class ParallelForWithTaskContext::<lambda_1>,enum EParallelForFlags,const class TArrayView<class TArray<class FString,class TSizedDefaultAllocator<32> >,int> &)"
  ;
  pFVar29 = &local_88;
  local_88.Impl._Column = 3;
  local_88.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_b0,TVar16,CycleStat|ClearEveryFrame,false,pFVar29);
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
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
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar14 = param_7->ArrayNum;
  iVar22 = iVar10;
  if ((iVar14 != 0) && (iVar22 = iVar14, iVar10 < iVar14)) {
    iVar22 = iVar10;
  }
  if (iVar22 < 2) {
    uVar21 = 0;
    if (0 < param_2) {
      lVar26 = 0;
      pFVar24 = (FSourceLocation *)0x0;
      do {
        if (param_7->ArrayNum < 1) {
          pFVar29 = (FSourceLocation *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_58 = param_4->Visitor;
        local_60 = local_58->DirectoryVisitorFlags;
        local_50 = param_7->DataPtr;
        local_68 = &`IPlatformFile::IterateDirectoryRecursively'::`2'::FRecurse::_vftable_;
        if (*param_4->bResult != (atomic<bool>)0x0) {
          local_a0 = param_4->__this;
          pTVar4 = param_4->DirectoriesToVisit;
          local_98 = *(code **)((longlong)*local_a0 + 0x140);
          uVar11 = 0;
          if ((int)uVar21 < pTVar4->ArrayNum) {
            uVar11 = ~uVar21 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (pFVar29 = pFVar24,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          if (*(int *)(pFVar5 + lVar26 + 8) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = *(wchar_t **)(pFVar5 + lVar26);
          }
          cVar9 = (*local_98)(local_a0,pwVar20,&local_68,local_a0,pFVar29);
          if (cVar9 == '\0') {
            *param_4->bResult = (atomic<bool>)0x0;
          }
        }
        uVar21 = uVar21 + 1;
        pFVar24 = (FSourceLocation *)((longlong)&(pFVar24->Impl)._Line + 1);
        local_68 = &___7FDirectoryVisitor_IPlatformFile__6B_;
        lVar26 = lVar26 + 0x10;
      } while ((int)uVar21 < param_2);
    }
    goto LAB_141614bdb;
  }
  uVar27 = 1;
  iVar14 = 1;
  aVar12 = (atomic<int>)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar23 = 6;
    iVar10 = iVar22 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar27 = uVar6 & 0xffffffff;
        iVar14 = (int)uVar6;
        aVar12 = (atomic<int>)((param_2 + -1 + iVar14) / iVar14);
        if (iVar22 <= (int)aVar12) break;
      }
      iVar14 = (int)uVar27;
      iVar10 = iVar10 - iVar22;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  iVar22 = iVar22 + -1;
  EVar13 = FTaskTagScope::GetCurrentTag();
  EVar25 = Inherit;
  if ((EVar13 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_14161493c;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    EVar25 = High;
  }
  else {
LAB_14161493c:
    EVar25 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_c8,ManualReset);
  pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar17 == (FParallelForData *)0x0) {
    pFVar17 = (FParallelForData *)0x0;
  }
  else {
    pFVar17->Num = param_2;
    *(undefined4 *)&pFVar17->field_0x8 = 0;
    *(undefined4 *)&pFVar17->field_0x80 = 0;
    *(undefined ***)pFVar17 =
         &`ParallelForImpl::
          ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
          ::`2'::FParallelForData::_vftable_;
    pFVar17->DebugName = param_1;
    pFVar17->Contexts = (TArrayView<std::nullptr_t,int> *)param_7;
    pFVar17->Body = (TFunctionRef<void___cdecl(int)> *)param_4;
    pFVar17->FinishedSignal = &local_c8;
    pFVar17->BatchItem = (atomic<int>)0x0;
    pFVar17->IncompleteBatches = (atomic<int>)0x0;
    pFVar17->LaunchedWorkers = (atomic<int>)0x0;
    *(undefined8 *)&pFVar17->Tasks = 0;
    *(undefined4 *)&pFVar17->field_0x84 = 0;
    pFVar17->BatchSize = iVar14;
    pFVar17->NumBatches = (int)aVar12;
    pFVar17->Priority = EVar25;
    pFVar17->IncompleteBatches = aVar12;
    iVar14 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask>_>
                       (0x48,8,iVar22,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar17->Tasks,(int *)&pFVar17->field_0x80,(int *)&pFVar17->field_0x84);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)&pFVar17->Tasks + (longlong)iVar14 * 0x48),iVar22);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar17->field_0x10);
    LOCK();
    *(int *)&pFVar17->field_0x8 = *(int *)&pFVar17->field_0x8 + 1;
    UNLOCK();
  }
  LOCK();
  paVar1 = &pFVar17->LaunchedWorkers;
  aVar12 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (*(int *)&pFVar17->field_0x80 <= (int)aVar12) {
    aVar12 = (atomic<int>)0xffffffff;
  }
  if (aVar12 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar17->field_0x8 = *(int *)&pFVar17->field_0x8 + 1;
    UNLOCK();
    local_90.Reference = pFVar17;
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::LaunchTask(&local_90,(int)aVar12,true);
    if (local_90.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_90.Reference)->field_0x8;
      LOCK();
      iVar14 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (((iVar14 == 1) && (puVar2 != (undefined1 *)0x0)) &&
         (local_90.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_90.Reference)(local_90.Reference,1);
      }
    }
  }
  local_b4 = '\0';
  local_c0.Reference = pFVar17;
  local_b8 = iVar22;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
          ::__l2::FParallelExecutor::operator()(&local_c0,true);
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
        (**(code **)((local_c8.Event)->_padding_ + 0x20))(local_c8.Event,0xffffffff,0);
      }
      else {
        pbVar19 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar3 = *pbVar19;
        *pbVar19 = false;
        (**(code **)((local_c8.Event)->_padding_ + 0x20))(local_c8.Event,0xffffffff,0);
        *pbVar19 = bVar3;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_c8.Event)->_padding_ + 0x20))(local_c8.Event,1,0);
      while (cVar9 == '\0') {
        pFVar18 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar18 + 0x48))
                  (pFVar18,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_c8.Event)->_padding_ + 0x20))(local_c8.Event,1,0);
      }
    }
  }
  if (local_c0.Reference != (FParallelForData *)0x0) {
    if (local_b4 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
      ::__l2::FParallelExecutor::LaunchTask(&local_c0,local_b8,true);
    }
    if (local_c0.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_c0.Reference)->field_0x8;
      LOCK();
      iVar14 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar14 == 1) && (puVar2 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_c0.Reference)(local_c0.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_c8);
LAB_141614bdb:
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((local_a8 & 1) != 0) &&
      (bVar28 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar28)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if ((local_a8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a8 & 4) != 0) {
    FThreadStats::AddMessage(local_b0,CycleScopeEnd);
  }
  return;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask>_> @ 141614db0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FTracedTask>
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
    else if (iVar4 < 0) goto LAB_141614ec6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_141614ec6:
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

// RemoveAll<`FConsoleManager::UnregisterConsoleVariableSink_Handle'::__l2::<lambda_1>_> @ 141614ee0

int __thiscall
TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>::
RemoveAll<_FConsoleManager::UnregisterConsoleVariableSink_Handle_::__l2::<lambda_1>_>
          (TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  atomic<unsigned___int64> aVar2;
  longlong *plVar3;
  byte bVar4;
  ulong64 *puVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  byte local_res18 [8];
  int local_res20;
  undefined1 local_68 [8];
  FReadAccessScope local_60;
  
  iVar1 = this->ArrayNum;
  lVar12 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar8 = 0;
  iVar11 = 0;
  this_00 = (this->AllocatorInstance).Data;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_60);
  if ((*(int *)&((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State == 0) ||
     (aVar2 = ((FMRSWRecursiveAccessDetector *)&this_00[8].field_0x0)->State,
     aVar2 == (atomic<unsigned___int64>)0x0)) {
    uVar6 = 0;
  }
  else {
    puVar5 = (ulong64 *)(**(code **)(*(longlong *)aVar2 + 0x40))(aVar2,local_res18);
    uVar6 = *puVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  local_res18[0] = uVar6 != (param_1->Handle).Handle.ID;
  lVar10 = 0;
  do {
    bVar4 = local_res18[0];
    iVar9 = iVar8 + 1;
    lVar10 = lVar10 + 1;
    local_res20 = iVar8;
    if (lVar10 < lVar12) {
      pFVar7 = this_00 + (lVar10 * 3 + 1) * 8;
      do {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + -8),&local_60
                  );
        if ((*(int *)&pFVar7[8].field_0x0 == 0) ||
           (plVar3 = *(longlong **)&pFVar7->field_0x0, plVar3 == (longlong *)0x0)) {
          uVar6 = 0;
        }
        else {
          puVar5 = (ulong64 *)(**(code **)(*plVar3 + 0x40))(plVar3,local_68);
          uVar6 = *puVar5;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        if ((bool)bVar4 != (uVar6 != (param_1->Handle).Handle.ID)) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
        pFVar7 = pFVar7 + 0x18;
      } while (lVar10 < lVar12);
    }
    iVar8 = iVar9;
    bVar4 = local_res18[0];
    iVar9 = iVar8 - local_res20;
    if (local_res18[0] == 0) {
      DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (this_00 + (longlong)local_res20 * 0x18),iVar9);
    }
    else {
      if (iVar11 != local_res20) {
        memmove(this_00 + (longlong)iVar11 * 0x18,this_00 + (longlong)local_res20 * 0x18,
                (longlong)iVar9 * 0x18);
      }
      iVar11 = iVar11 + iVar9;
    }
    local_res18[0] = bVar4 ^ 1;
    if (lVar12 <= lVar10) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// Reverse<TTuple<FString,enum_EConsoleVariableFlags>_*> @ 141615b30

void __cdecl
AlgoImpl::Reverse<TTuple<FString,enum_EConsoleVariableFlags>_*>
          (TTuple<FString,EConsoleVariableFlags> **param_1,int param_2)

{
  TTuple<FString,EConsoleVariableFlags> *pTVar1;
  TTuple<FString,EConsoleVariableFlags> **ppTVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppTVar2 = param_1 + (param_2 + -1);
    do {
      pTVar1 = param_1[lVar3];
      param_1[lVar3] = *ppTVar2;
      lVar3 = lVar3 + 1;
      *ppTVar2 = pTVar1;
      ppTVar2 = ppTVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RunStricmpTests<char> @ 141615b90

void __cdecl RunStricmpTests<char>(FAutomationTestBase *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  byte local_b8 [8];
  byte local_b0 [4];
  byte local_ac [8];
  byte local_a4 [4];
  FString local_a0;
  byte local_90 [8];
  byte local_88 [8];
  byte local_80 [8];
  byte local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  longlong lVar10;
  
  local_b8[4] = 0;
  uVar16 = 0xfffffffe;
  local_b8[1] = 0;
  local_b0[1] = 0;
  local_a4[1] = 0;
  lVar10 = 0;
  iVar9 = 0;
  iVar17 = 1;
  do {
    local_b8[0] = (byte)uVar16;
    local_b0[0] = local_b8[0] + 1;
    uVar3 = uVar16 & 0xff;
    local_a4[0] = local_b8[0] + 0x20;
    for (pbVar2 = local_b8; ((char)uVar3 != '\0' || (*pbVar2 != 0)); pbVar2 = pbVar2 + 1) {
      uVar3 = (uint)pbVar2[1];
    }
    pbVar2 = local_b8;
    do {
      bVar14 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar14 != 0);
    FString::FString(&local_70,"Stricmp()");
    iVar11 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar4.Data = local_70.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,0,0);
    lVar5 = lVar10;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    while( true ) {
      bVar14 = local_b8[lVar5];
      iVar8 = 1;
      lVar15 = lVar10;
      if ((bVar14 == 0) && (local_b8[lVar5 + 4] == 0)) goto LAB_141615cb6;
      bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
      bVar1 = (-((int)(char)local_b8[lVar5 + 4] - 0x41U < 0x1a) & 0x20U) + local_b8[lVar5 + 4];
      if (bVar14 != bVar1) break;
      lVar5 = lVar5 + 1;
    }
    iVar11 = (uint)bVar14 - (uint)bVar1;
    iVar12 = iVar8;
    if (iVar11 < 1) {
LAB_141615cb6:
      iVar12 = iVar11 >> 0x1f;
    }
    do {
      while( true ) {
        bVar14 = local_b8[lVar15];
        bVar1 = local_b8[lVar15 + 4];
        iVar11 = 0;
        if (bVar14 != bVar1) break;
        lVar15 = lVar15 + 1;
        iVar13 = iVar11;
        if (bVar14 == 0) goto LAB_141615cdf;
      }
      if ((char)(bVar1 | bVar14) < '\0') {
        iVar13 = (uint)bVar14 - (uint)bVar1;
        break;
      }
      iVar13 = (uint)""[bVar14] - (uint)""[bVar1];
      lVar15 = lVar15 + 1;
    } while (iVar13 == 0);
    iVar6 = iVar8;
    if (iVar13 < 1) {
LAB_141615cdf:
      iVar6 = iVar13 >> 0x1f;
    }
    FString::FString(&local_60,"Stricmp()");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar4.Data = local_60.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar6,iVar12);
    lVar5 = lVar10;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    while( true ) {
      bVar14 = local_b8[lVar5];
      lVar15 = lVar10;
      if ((bVar14 == 0) && (iVar12 = iVar11, local_b0[lVar5] == 0)) goto LAB_141615dbb;
      bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
      bVar1 = (-((int)(char)local_b0[lVar5] - 0x41U < 0x1a) & 0x20U) + local_b0[lVar5];
      if (bVar14 != bVar1) break;
      lVar5 = lVar5 + 1;
    }
    iVar12 = (uint)bVar14 - (uint)bVar1;
    iVar13 = iVar8;
    if (iVar12 < 1) {
LAB_141615dbb:
      iVar13 = iVar12 >> 0x1f;
    }
    do {
      while( true ) {
        bVar14 = local_b8[lVar15];
        bVar1 = local_b0[lVar15];
        if (bVar14 != bVar1) break;
        lVar15 = lVar15 + 1;
        iVar12 = iVar11;
        if (bVar14 == 0) goto LAB_141615def;
      }
      if ((char)(bVar1 | bVar14) < '\0') {
        iVar12 = (uint)bVar14 - (uint)bVar1;
        break;
      }
      iVar12 = (uint)""[bVar14] - (uint)""[bVar1];
      lVar15 = lVar15 + 1;
    } while (iVar12 == 0);
    iVar6 = iVar8;
    if (iVar12 < 1) {
LAB_141615def:
      iVar6 = iVar12 >> 0x1f;
    }
    FString::FString(&local_50,"Stricmp()");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar4.Data = local_50.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar6,iVar13);
    lVar5 = lVar10;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    while( true ) {
      bVar14 = local_b0[lVar5];
      iVar12 = 1;
      lVar15 = lVar10;
      if ((bVar14 == 0) && (iVar13 = iVar11, local_b8[lVar5] == 0)) goto LAB_141615ecb;
      bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
      bVar1 = (-((int)(char)local_b8[lVar5] - 0x41U < 0x1a) & 0x20U) + local_b8[lVar5];
      if (bVar14 != bVar1) break;
      lVar5 = lVar5 + 1;
    }
    iVar13 = (uint)bVar14 - (uint)bVar1;
    iVar6 = iVar12;
    if (iVar13 < 1) {
LAB_141615ecb:
      iVar6 = iVar13 >> 0x1f;
    }
    do {
      while( true ) {
        bVar14 = local_b0[lVar15];
        bVar1 = local_b8[lVar15];
        if (bVar14 != bVar1) break;
        lVar15 = lVar15 + 1;
        iVar13 = iVar11;
        if (bVar14 == 0) goto LAB_141615eff;
      }
      if ((char)(bVar1 | bVar14) < '\0') {
        iVar13 = (uint)bVar14 - (uint)bVar1;
        break;
      }
      iVar13 = (uint)""[bVar14] - (uint)""[bVar1];
      lVar15 = lVar15 + 1;
    } while (iVar13 == 0);
    iVar7 = iVar12;
    if (iVar13 < 1) {
LAB_141615eff:
      iVar7 = iVar13 >> 0x1f;
    }
    FString::FString(&local_40,"Stricmp()");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar4.Data = local_40.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar7,iVar6);
    lVar5 = lVar10;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    while( true ) {
      bVar14 = local_b8[lVar5];
      lVar15 = lVar10;
      if ((bVar14 == 0) && (iVar13 = iVar11, local_a4[lVar5] == 0)) goto LAB_141615fdb;
      bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
      bVar1 = (-((int)(char)local_a4[lVar5] - 0x41U < 0x1a) & 0x20U) + local_a4[lVar5];
      if (bVar14 != bVar1) break;
      lVar5 = lVar5 + 1;
    }
    iVar13 = (uint)bVar14 - (uint)bVar1;
    iVar6 = iVar12;
    if (iVar13 < 1) {
LAB_141615fdb:
      iVar6 = iVar13 >> 0x1f;
    }
    do {
      while( true ) {
        bVar14 = local_b8[lVar15];
        bVar1 = local_a4[lVar15];
        if (bVar14 != bVar1) break;
        lVar15 = lVar15 + 1;
        iVar13 = iVar11;
        if (bVar14 == 0) goto LAB_14161600f;
      }
      if ((char)(bVar1 | bVar14) < '\0') {
        iVar13 = (uint)bVar14 - (uint)bVar1;
        break;
      }
      iVar13 = (uint)""[bVar14] - (uint)""[bVar1];
      lVar15 = lVar15 + 1;
    } while (iVar13 == 0);
    if (iVar13 < 1) {
LAB_14161600f:
      iVar12 = iVar13 >> 0x1f;
    }
    FString::FString(&local_a0,"Stricmp()");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar4.Data = local_a0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar12,iVar6);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x100);
  local_ac[0] = 0x68;
  local_ac[1] = 0x65;
  local_ac[2] = 0x6c;
  local_ac[3] = 0x6c;
  local_ac[4] = 0x6f;
  local_ac[5] = 0;
  bVar14 = 0x68;
  local_90[0] = 0x48;
  local_90[1] = 0x45;
  local_90[2] = 0x4c;
  local_90[3] = 0x4c;
  local_90[4] = 0x4f;
  local_90[5] = 0;
  local_88[0] = 0x48;
  local_88[1] = 0x65;
  local_88[2] = 0x4c;
  local_88[3] = 0x4c;
  local_88[4] = 0x6f;
  local_88[5] = 0;
  local_80[0] = 0x68;
  local_80[1] = 0x45;
  local_80[2] = 0x6c;
  local_80[3] = 0x6c;
  local_80[4] = 0x4f;
  local_80[5] = 0;
  local_78[0] = 0x68;
  local_78[1] = 0x65;
  local_78[2] = 0x6c;
  local_78[3] = 0x6c;
  local_78[4] = 0x30;
  local_78[5] = 0;
  for (pbVar2 = local_ac; (bVar14 != 0 || (*pbVar2 != 0)); pbVar2 = pbVar2 + 1) {
    bVar14 = pbVar2[1];
  }
  pbVar2 = local_ac;
  do {
    bVar14 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar14 != 0);
  FString::FString(&local_a0,"Stricmp()");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar4.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,0,0);
  lVar5 = lVar10;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  while( true ) {
    bVar14 = local_ac[lVar5];
    lVar15 = lVar10;
    if ((bVar14 == 0) && (local_90[lVar5] == 0)) goto LAB_1416161a6;
    bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
    bVar1 = (-((int)(char)local_90[lVar5] - 0x41U < 0x1a) & 0x20U) + local_90[lVar5];
    if (bVar14 != bVar1) break;
    lVar5 = lVar5 + 1;
  }
  iVar11 = (uint)bVar14 - (uint)bVar1;
  iVar12 = iVar8;
  if (iVar11 < 1) {
LAB_1416161a6:
    iVar12 = iVar11 >> 0x1f;
  }
  do {
    while( true ) {
      bVar14 = local_ac[lVar15];
      bVar1 = local_90[lVar15];
      iVar11 = 0;
      if (bVar14 != bVar1) break;
      lVar15 = lVar15 + 1;
      iVar13 = iVar11;
      if (bVar14 == 0) goto LAB_1416161df;
    }
    if ((char)(bVar1 | bVar14) < '\0') {
      iVar13 = (uint)bVar14 - (uint)bVar1;
      break;
    }
    iVar13 = (uint)""[bVar14] - (uint)""[bVar1];
    lVar15 = lVar15 + 1;
  } while (iVar13 == 0);
  iVar6 = iVar8;
  if (iVar13 < 1) {
LAB_1416161df:
    iVar6 = iVar13 >> 0x1f;
  }
  FString::FString(&local_a0,"Stricmp()");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar4.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar6,iVar12);
  lVar5 = lVar10;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  while( true ) {
    bVar14 = local_ac[lVar5];
    lVar15 = lVar10;
    if ((bVar14 == 0) && (iVar12 = iVar11, local_88[lVar5] == 0)) goto LAB_1416162b1;
    bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
    bVar1 = (-((int)(char)local_88[lVar5] - 0x41U < 0x1a) & 0x20U) + local_88[lVar5];
    if (bVar14 != bVar1) break;
    lVar5 = lVar5 + 1;
  }
  iVar12 = (uint)bVar14 - (uint)bVar1;
  iVar13 = iVar8;
  if (iVar12 < 1) {
LAB_1416162b1:
    iVar13 = iVar12 >> 0x1f;
  }
  do {
    while( true ) {
      bVar14 = local_ac[lVar15];
      bVar1 = local_88[lVar15];
      if (bVar14 != bVar1) break;
      lVar15 = lVar15 + 1;
      iVar12 = iVar11;
      if (bVar14 == 0) goto LAB_1416162df;
    }
    if ((char)(bVar1 | bVar14) < '\0') {
      iVar12 = (uint)bVar14 - (uint)bVar1;
      break;
    }
    iVar12 = (uint)""[bVar14] - (uint)""[bVar1];
    lVar15 = lVar15 + 1;
  } while (iVar12 == 0);
  iVar6 = iVar8;
  if (iVar12 < 1) {
LAB_1416162df:
    iVar6 = iVar12 >> 0x1f;
  }
  FString::FString(&local_a0,"Stricmp()");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar4.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar6,iVar13);
  lVar5 = lVar10;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  while( true ) {
    bVar14 = local_ac[lVar5];
    lVar15 = lVar10;
    if ((bVar14 == 0) && (iVar12 = iVar11, local_80[lVar5] == 0)) goto LAB_1416163b1;
    bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
    bVar1 = (-((int)(char)local_80[lVar5] - 0x41U < 0x1a) & 0x20U) + local_80[lVar5];
    if (bVar14 != bVar1) break;
    lVar5 = lVar5 + 1;
  }
  iVar12 = (uint)bVar14 - (uint)bVar1;
  iVar13 = iVar8;
  if (iVar12 < 1) {
LAB_1416163b1:
    iVar13 = iVar12 >> 0x1f;
  }
  do {
    while( true ) {
      bVar14 = local_ac[lVar15];
      bVar1 = local_80[lVar15];
      if (bVar14 != bVar1) break;
      lVar15 = lVar15 + 1;
      iVar12 = iVar11;
      if (bVar14 == 0) goto LAB_1416163df;
    }
    if ((char)(bVar1 | bVar14) < '\0') {
      iVar12 = (uint)bVar14 - (uint)bVar1;
      break;
    }
    iVar12 = (uint)""[bVar14] - (uint)""[bVar1];
    lVar15 = lVar15 + 1;
  } while (iVar12 == 0);
  iVar6 = iVar8;
  if (iVar12 < 1) {
LAB_1416163df:
    iVar6 = iVar12 >> 0x1f;
  }
  FString::FString(&local_a0,"Stricmp()");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar4.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar6,iVar13);
  lVar5 = lVar10;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  while( true ) {
    bVar14 = local_ac[lVar5];
    if ((bVar14 == 0) && (local_78[lVar5] == 0)) goto LAB_1416164b1;
    bVar14 = (-((int)(char)bVar14 - 0x41U < 0x1a) & 0x20U) + bVar14;
    bVar1 = (-((int)(char)local_78[lVar5] - 0x41U < 0x1a) & 0x20U) + local_78[lVar5];
    if (bVar14 != bVar1) break;
    lVar5 = lVar5 + 1;
  }
  iVar11 = (uint)bVar14 - (uint)bVar1;
  if (iVar11 < 1) {
LAB_1416164b1:
    iVar8 = iVar11 >> 0x1f;
  }
  while( true ) {
    while( true ) {
      bVar14 = local_ac[lVar10];
      bVar1 = local_78[lVar10];
      lVar10 = lVar10 + 1;
      if (bVar14 != bVar1) break;
      if (bVar14 == 0) goto LAB_141616515;
    }
    if ((char)(bVar1 | bVar14) < '\0') break;
    iVar11 = (uint)""[bVar14] - (uint)""[bVar1];
    if (iVar11 != 0) {
LAB_141616511:
      iVar9 = iVar11;
      if (iVar11 < 1) {
LAB_141616515:
        iVar17 = iVar9 >> 0x1f;
      }
      FString::FString(&local_a0,"Stricmp()");
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_a0.Data.ArrayNum != 0) {
        FVar4.Data = local_a0.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar4.Data,iVar17,iVar8);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      return;
    }
  }
  iVar11 = (uint)bVar14 - (uint)bVar1;
  goto LAB_141616511;
}

// RunStricmpTests<wchar_t> @ 141616580

void __cdecl RunStricmpTests<wchar_t>(FAutomationTestBase *param_1)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  ushort uVar2;
  ushort *puVar3;
  FString *pFVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ushort local_a8 [8];
  FString local_98;
  FString local_88;
  ushort local_78 [4];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  longlong lVar17;
  
  lVar17 = 0;
  iVar16 = 0;
  local_a8[2] = 0;
  local_a8[1] = 0;
  uVar21 = 0xfffffffe;
  local_a8[5] = 0;
  iVar20 = 1;
  local_78[1] = 0;
  do {
    local_a8[0] = (ushort)uVar21;
    local_a8[4] = local_a8[0] + 1;
    uVar6 = uVar21 & 0xffff;
    local_78[0] = local_a8[0] + 0x20;
    for (puVar3 = local_a8; ((short)uVar6 != 0 || (*puVar3 != 0)); puVar3 = puVar3 + 1) {
      uVar6 = (uint)puVar3[1];
    }
    puVar3 = local_a8;
    do {
      uVar7 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (uVar7 != 0);
    FString::FString(&local_40,"Stricmp()");
    iVar13 = 0;
    pwVar8 = L"";
    if (local_40.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)
               CONCAT44(local_40.Data.AllocatorInstance.Data._4_4_,
                        local_40.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(param_1,pwVar8,0,0);
    lVar18 = lVar17;
    if ((void *)CONCAT44(local_40.Data.AllocatorInstance.Data._4_4_,
                         local_40.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_40.Data.AllocatorInstance.Data._4_4_,
                                     local_40.Data.AllocatorInstance.Data._0_4_));
    }
    while( true ) {
      uVar7 = *(ushort *)((longlong)local_a8 + lVar18);
      iVar12 = 1;
      lVar19 = lVar17;
      if ((uVar7 == 0) && (*(short *)((longlong)local_a8 + lVar18 + 4) == 0)) goto LAB_1416166af;
      uVar2 = *(ushort *)((longlong)local_a8 + lVar18 + 4);
      uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
      uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
      if (uVar7 != uVar2) break;
      lVar18 = lVar18 + 2;
    }
    iVar13 = (uint)uVar7 - (uint)uVar2;
    iVar14 = iVar12;
    if (iVar13 < 1) {
LAB_1416166af:
      iVar14 = iVar13 >> 0x1f;
    }
    do {
      while( true ) {
        uVar7 = *(ushort *)((longlong)local_a8 + lVar19);
        uVar2 = *(ushort *)((longlong)local_a8 + lVar19 + 4);
        iVar13 = 0;
        if (uVar7 != uVar2) break;
        lVar19 = lVar19 + 2;
        iVar15 = iVar13;
        if (uVar7 == 0) goto LAB_1416166e1;
      }
      if (((uVar2 | uVar7) & 0xff80) != 0) {
        iVar15 = (uint)uVar7 - (uint)uVar2;
        break;
      }
      iVar15 = (uint)""[uVar7] - (uint)""[uVar2];
      lVar19 = lVar19 + 2;
    } while (iVar15 == 0);
    iVar10 = iVar12;
    if (iVar15 < 1) {
LAB_1416166e1:
      iVar10 = iVar15 >> 0x1f;
    }
    FString::FString(&local_50,"Stricmp()");
    pwVar8 = L"";
    if (local_50.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)
               CONCAT44(local_50.Data.AllocatorInstance.Data._4_4_,
                        local_50.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(param_1,pwVar8,iVar10,iVar14);
    lVar18 = lVar17;
    if ((void *)CONCAT44(local_50.Data.AllocatorInstance.Data._4_4_,
                         local_50.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_50.Data.AllocatorInstance.Data._4_4_,
                                     local_50.Data.AllocatorInstance.Data._0_4_));
    }
    while( true ) {
      uVar7 = *(ushort *)((longlong)local_a8 + lVar18);
      lVar19 = lVar17;
      if ((uVar7 == 0) && (iVar14 = iVar13, *(short *)((longlong)local_a8 + lVar18 + 8) == 0))
      goto LAB_1416167c7;
      uVar2 = *(ushort *)((longlong)local_a8 + lVar18 + 8);
      uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
      uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
      if (uVar7 != uVar2) break;
      lVar18 = lVar18 + 2;
    }
    iVar14 = (uint)uVar7 - (uint)uVar2;
    iVar15 = iVar12;
    if (iVar14 < 1) {
LAB_1416167c7:
      iVar15 = iVar14 >> 0x1f;
    }
    do {
      while( true ) {
        uVar7 = *(ushort *)((longlong)local_a8 + lVar19);
        uVar2 = *(ushort *)((longlong)local_a8 + lVar19 + 8);
        if (uVar7 != uVar2) break;
        lVar19 = lVar19 + 2;
        iVar14 = iVar13;
        if (uVar7 == 0) goto LAB_1416167f1;
      }
      if (((uVar2 | uVar7) & 0xff80) != 0) {
        iVar14 = (uint)uVar7 - (uint)uVar2;
        break;
      }
      iVar14 = (uint)""[uVar7] - (uint)""[uVar2];
      lVar19 = lVar19 + 2;
    } while (iVar14 == 0);
    iVar10 = iVar12;
    if (iVar14 < 1) {
LAB_1416167f1:
      iVar10 = iVar14 >> 0x1f;
    }
    FString::FString(&local_60,"Stricmp()");
    pwVar8 = L"";
    if (local_60.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)
               CONCAT44(local_60.Data.AllocatorInstance.Data._4_4_,
                        local_60.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(param_1,pwVar8,iVar10,iVar15);
    lVar18 = lVar17;
    if ((void *)CONCAT44(local_60.Data.AllocatorInstance.Data._4_4_,
                         local_60.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_60.Data.AllocatorInstance.Data._4_4_,
                                     local_60.Data.AllocatorInstance.Data._0_4_));
    }
    while( true ) {
      uVar7 = *(ushort *)((longlong)local_a8 + lVar18 + 8);
      iVar14 = 1;
      lVar19 = lVar17;
      if ((uVar7 == 0) && (iVar15 = iVar13, *(short *)((longlong)local_a8 + lVar18) == 0))
      goto LAB_1416168d7;
      uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
      uVar2 = (-(ushort)(*(ushort *)((longlong)local_a8 + lVar18) - 0x41 < 0x1a) & 0x20) +
              *(ushort *)((longlong)local_a8 + lVar18);
      if (uVar7 != uVar2) break;
      lVar18 = lVar18 + 2;
    }
    iVar15 = (uint)uVar7 - (uint)uVar2;
    iVar10 = iVar14;
    if (iVar15 < 1) {
LAB_1416168d7:
      iVar10 = iVar15 >> 0x1f;
    }
    do {
      while( true ) {
        uVar7 = *(ushort *)((longlong)local_a8 + lVar19 + 8);
        uVar2 = *(ushort *)((longlong)local_a8 + lVar19);
        if (uVar7 != uVar2) break;
        lVar19 = lVar19 + 2;
        iVar15 = iVar13;
        if (uVar7 == 0) goto LAB_141616901;
      }
      if (((uVar2 | uVar7) & 0xff80) != 0) {
        iVar15 = (uint)uVar7 - (uint)uVar2;
        break;
      }
      iVar15 = (uint)""[uVar7] - (uint)""[uVar2];
      lVar19 = lVar19 + 2;
    } while (iVar15 == 0);
    iVar11 = iVar14;
    if (iVar15 < 1) {
LAB_141616901:
      iVar11 = iVar15 >> 0x1f;
    }
    FString::FString(&local_70,"Stricmp()");
    pwVar8 = L"";
    if (local_70.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)
               CONCAT44(local_70.Data.AllocatorInstance.Data._4_4_,
                        local_70.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(param_1,pwVar8,iVar11,iVar10);
    lVar18 = lVar17;
    if ((void *)CONCAT44(local_70.Data.AllocatorInstance.Data._4_4_,
                         local_70.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_70.Data.AllocatorInstance.Data._4_4_,
                                     local_70.Data.AllocatorInstance.Data._0_4_));
    }
    while( true ) {
      uVar7 = *(ushort *)((longlong)local_a8 + lVar18);
      lVar19 = lVar17;
      if ((uVar7 == 0) && (iVar15 = iVar13, *(short *)((longlong)local_78 + lVar18) == 0))
      goto LAB_1416169e7;
      uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
      uVar2 = (-(ushort)(*(ushort *)((longlong)local_78 + lVar18) - 0x41 < 0x1a) & 0x20) +
              *(ushort *)((longlong)local_78 + lVar18);
      if (uVar7 != uVar2) break;
      lVar18 = lVar18 + 2;
    }
    iVar15 = (uint)uVar7 - (uint)uVar2;
    iVar10 = iVar14;
    if (iVar15 < 1) {
LAB_1416169e7:
      iVar10 = iVar15 >> 0x1f;
    }
    do {
      while( true ) {
        uVar7 = *(ushort *)((longlong)local_a8 + lVar19);
        uVar2 = *(ushort *)((longlong)local_78 + lVar19);
        if (uVar7 != uVar2) break;
        lVar19 = lVar19 + 2;
        iVar15 = iVar13;
        if (uVar7 == 0) goto LAB_141616a21;
      }
      if (((uVar2 | uVar7) & 0xff80) != 0) {
        iVar15 = (uint)uVar7 - (uint)uVar2;
        break;
      }
      iVar15 = (uint)""[uVar7] - (uint)""[uVar2];
      lVar19 = lVar19 + 2;
    } while (iVar15 == 0);
    if (iVar15 < 1) {
LAB_141616a21:
      iVar14 = iVar15 >> 0x1f;
    }
    FString::FString(&local_98,"Stricmp()");
    pwVar8 = L"";
    if (local_98.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)
               CONCAT44(local_98.Data.AllocatorInstance.Data._4_4_,
                        local_98.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(param_1,pwVar8,iVar14,iVar10);
    if ((void *)CONCAT44(local_98.Data.AllocatorInstance.Data._4_4_,
                         local_98.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_98.Data.AllocatorInstance.Data._4_4_,
                                     local_98.Data.AllocatorInstance.Data._0_4_));
    }
    uVar21 = uVar21 + 1;
  } while ((int)uVar21 < 0x100);
  sVar5 = 0x68;
  local_98.Data.AllocatorInstance.Data._0_4_ = 0x650068;
  local_98.Data.AllocatorInstance.Data._4_4_ = 0x6c006c;
  pFVar4 = &local_98;
  local_98.Data.ArrayNum = 0x6f;
  local_70.Data.AllocatorInstance.Data._0_4_ = 0x450048;
  local_70.Data.AllocatorInstance.Data._4_4_ = 0x4c004c;
  local_70.Data.ArrayNum = 0x4f;
  local_60.Data.AllocatorInstance.Data._0_4_ = 0x650048;
  local_60.Data.AllocatorInstance.Data._4_4_ = 0x4c004c;
  local_60.Data.ArrayNum = 0x6f;
  local_50.Data.AllocatorInstance.Data._0_4_ = 0x450068;
  local_50.Data.AllocatorInstance.Data._4_4_ = 0x6c006c;
  local_50.Data.ArrayNum = 0x4f;
  local_40.Data.AllocatorInstance.Data._0_4_ = 0x650068;
  local_40.Data.AllocatorInstance.Data._4_4_ = 0x6c006c;
  local_40.Data.ArrayNum = 0x30;
  while ((sVar5 != 0 || (*(short *)&(pFVar4->Data).AllocatorInstance.Data != 0))) {
    sVar5 = *(short *)((longlong)&(pFVar4->Data).AllocatorInstance.Data + 2);
    pFVar4 = (FString *)((longlong)&(pFVar4->Data).AllocatorInstance.Data + 2);
  }
  pFVar4 = &local_98;
  do {
    pTVar1 = &pFVar4->Data;
    pFVar4 = (FString *)((longlong)&(pFVar4->Data).AllocatorInstance.Data + 2);
  } while (*(short *)&(pTVar1->AllocatorInstance).Data != 0);
  FString::FString(&local_88,"Stricmp()");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar9.Data,0,0);
  lVar18 = lVar17;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  while( true ) {
    uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar18);
    lVar19 = lVar17;
    if ((uVar7 == 0) && (*(short *)((longlong)&local_70.Data.AllocatorInstance.Data + lVar18) == 0))
    goto LAB_141616bef;
    uVar2 = *(ushort *)((longlong)&local_70.Data.AllocatorInstance.Data + lVar18);
    uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
    uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    if (uVar7 != uVar2) break;
    lVar18 = lVar18 + 2;
  }
  iVar13 = (uint)uVar7 - (uint)uVar2;
  iVar14 = iVar12;
  if (iVar13 < 1) {
LAB_141616bef:
    iVar14 = iVar13 >> 0x1f;
  }
  do {
    while( true ) {
      uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar19);
      uVar2 = *(ushort *)((longlong)&local_70.Data.AllocatorInstance.Data + lVar19);
      iVar13 = 0;
      if (uVar7 != uVar2) break;
      lVar19 = lVar19 + 2;
      iVar15 = iVar13;
      if (uVar7 == 0) goto LAB_141616c21;
    }
    if (((uVar2 | uVar7) & 0xff80) != 0) {
      iVar15 = (uint)uVar7 - (uint)uVar2;
      break;
    }
    iVar15 = (uint)""[uVar7] - (uint)""[uVar2];
    lVar19 = lVar19 + 2;
  } while (iVar15 == 0);
  iVar10 = iVar12;
  if (iVar15 < 1) {
LAB_141616c21:
    iVar10 = iVar15 >> 0x1f;
  }
  FString::FString(&local_88,"Stricmp()");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar9.Data,iVar10,iVar14);
  lVar18 = lVar17;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  while( true ) {
    uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar18);
    lVar19 = lVar17;
    if ((uVar7 == 0) &&
       (iVar14 = iVar13, *(short *)((longlong)&local_60.Data.AllocatorInstance.Data + lVar18) == 0))
    goto LAB_141616d01;
    uVar2 = *(ushort *)((longlong)&local_60.Data.AllocatorInstance.Data + lVar18);
    uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
    uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    if (uVar7 != uVar2) break;
    lVar18 = lVar18 + 2;
  }
  iVar14 = (uint)uVar7 - (uint)uVar2;
  iVar15 = iVar12;
  if (iVar14 < 1) {
LAB_141616d01:
    iVar15 = iVar14 >> 0x1f;
  }
  do {
    while( true ) {
      uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar19);
      uVar2 = *(ushort *)((longlong)&local_60.Data.AllocatorInstance.Data + lVar19);
      if (uVar7 != uVar2) break;
      lVar19 = lVar19 + 2;
      iVar14 = iVar13;
      if (uVar7 == 0) goto LAB_141616d31;
    }
    if (((uVar2 | uVar7) & 0xff80) != 0) {
      iVar14 = (uint)uVar7 - (uint)uVar2;
      break;
    }
    iVar14 = (uint)""[uVar7] - (uint)""[uVar2];
    lVar19 = lVar19 + 2;
  } while (iVar14 == 0);
  iVar10 = iVar12;
  if (iVar14 < 1) {
LAB_141616d31:
    iVar10 = iVar14 >> 0x1f;
  }
  FString::FString(&local_88,"Stricmp()");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar9.Data,iVar10,iVar15);
  lVar18 = lVar17;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  while( true ) {
    uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar18);
    lVar19 = lVar17;
    if ((uVar7 == 0) &&
       (iVar14 = iVar13, *(short *)((longlong)&local_50.Data.AllocatorInstance.Data + lVar18) == 0))
    goto LAB_141616e11;
    uVar2 = *(ushort *)((longlong)&local_50.Data.AllocatorInstance.Data + lVar18);
    uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
    uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    if (uVar7 != uVar2) break;
    lVar18 = lVar18 + 2;
  }
  iVar14 = (uint)uVar7 - (uint)uVar2;
  iVar15 = iVar12;
  if (iVar14 < 1) {
LAB_141616e11:
    iVar15 = iVar14 >> 0x1f;
  }
  do {
    while( true ) {
      uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar19);
      uVar2 = *(ushort *)((longlong)&local_50.Data.AllocatorInstance.Data + lVar19);
      if (uVar7 != uVar2) break;
      lVar19 = lVar19 + 2;
      iVar14 = iVar13;
      if (uVar7 == 0) goto LAB_141616e41;
    }
    if (((uVar2 | uVar7) & 0xff80) != 0) {
      iVar14 = (uint)uVar7 - (uint)uVar2;
      break;
    }
    iVar14 = (uint)""[uVar7] - (uint)""[uVar2];
    lVar19 = lVar19 + 2;
  } while (iVar14 == 0);
  iVar10 = iVar12;
  if (iVar14 < 1) {
LAB_141616e41:
    iVar10 = iVar14 >> 0x1f;
  }
  FString::FString(&local_88,"Stricmp()");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar9.Data,iVar10,iVar15);
  lVar18 = lVar17;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  while( true ) {
    uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar18);
    if ((uVar7 == 0) && (*(short *)((longlong)&local_40.Data.AllocatorInstance.Data + lVar18) == 0))
    goto LAB_141616f21;
    uVar2 = *(ushort *)((longlong)&local_40.Data.AllocatorInstance.Data + lVar18);
    uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
    uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    if (uVar7 != uVar2) break;
    lVar18 = lVar18 + 2;
  }
  iVar13 = (uint)uVar7 - (uint)uVar2;
  if (iVar13 < 1) {
LAB_141616f21:
    iVar12 = iVar13 >> 0x1f;
  }
  while( true ) {
    while( true ) {
      uVar7 = *(ushort *)((longlong)&local_98.Data.AllocatorInstance.Data + lVar17);
      uVar2 = *(ushort *)((longlong)&local_40.Data.AllocatorInstance.Data + lVar17);
      lVar17 = lVar17 + 2;
      if (uVar7 != uVar2) break;
      if (uVar7 == 0) goto LAB_141616f8a;
    }
    if (((uVar2 | uVar7) & 0xff80) != 0) break;
    iVar13 = (uint)""[uVar7] - (uint)""[uVar2];
    if (iVar13 != 0) {
LAB_141616f86:
      iVar16 = iVar13;
      if (iVar13 < 1) {
LAB_141616f8a:
        iVar20 = iVar16 >> 0x1f;
      }
      FString::FString(&local_88,"Stricmp()");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(param_1,(wchar_t *)FVar9.Data,iVar20,iVar12);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return;
    }
  }
  iVar13 = (uint)uVar7 - (uint)uVar2;
  goto LAB_141616f86;
}

// Set<256,wchar_t> @ 1416176c0

void __cdecl NCached::Set<256,wchar_t>(wchar_t (*param_1) [256],wchar_t *param_2)

{
  wcsncpy(*param_1,param_2,0xff);
  (*param_1)[0xff] = L'\0';
  return;
}

// Set<512,wchar_t> @ 1416176f0

void __cdecl NCached::Set<512,wchar_t>(wchar_t (*param_1) [512],wchar_t *param_2)

{
  wcsncpy(*param_1,param_2,0x1ff);
  (*param_1)[0x1ff] = L'\0';
  return;
}

// Set<64,wchar_t> @ 141617720

void __cdecl NCached::Set<64,wchar_t>(wchar_t (*param_1) [64],wchar_t *param_2)

{
  wcsncpy(*param_1,param_2,0x3f);
  (*param_1)[0x3f] = L'\0';
  return;
}

// Set<1024,wchar_t> @ 141617750

void __cdecl NCached::Set<1024,wchar_t>(wchar_t (*param_1) [1024],wchar_t *param_2)

{
  wcsncpy(*param_1,param_2,0x3ff);
  (*param_1)[0x3ff] = L'\0';
  return;
}

// Set<128,wchar_t> @ 141617780

void __cdecl NCached::Set<128,wchar_t>(wchar_t (*param_1) [128],wchar_t *param_2)

{
  wcsncpy(*param_1,param_2,0x7f);
  (*param_1)[0x7f] = L'\0';
  return;
}

// StricmpExpected<char> @ 141617860

int __cdecl StricmpExpected<char>(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1 - (longlong)param_2;
  while( true ) {
    cVar1 = param_2[lVar4];
    if ((cVar1 == '\0') && (*param_2 == '\0')) break;
    bVar3 = (-((int)cVar1 - 0x41U < 0x1a) & 0x20U) + cVar1;
    bVar2 = (-((int)*param_2 - 0x41U < 0x1a) & 0x20U) + *param_2;
    if (bVar3 != bVar2) {
      return (uint)bVar3 - (uint)bVar2;
    }
    param_2 = param_2 + 1;
  }
  return 0;
}

// StricmpExpected<wchar_t> @ 1416178c0

int __cdecl StricmpExpected<wchar_t>(wchar_t *param_1,wchar_t *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  for (; (uVar2 = *(ushort *)(lVar3 + (longlong)param_2), uVar2 != 0 || (*param_2 != L'\0'));
      param_2 = param_2 + 1) {
    uVar2 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    uVar1 = (-(ushort)((ushort)*param_2 - 0x41 < 0x1a) & 0x20) + *param_2;
    if (uVar2 != uVar1) {
      return (uint)uVar2 - (uint)uVar1;
    }
  }
  return 0;
}

// StricmpImpl<char,char> @ 141617930

int __cdecl StricmpImpl<char,char>(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar1 | bVar2) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// StricmpImpl<char,unsigned_short> @ 1416179b0

int __cdecl StricmpImpl<char,unsigned_short>(char *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != uVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | (uint)uVar2) & 0xffffff80) != 0) {
      return (uint)bVar1 - (uint)uVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[uVar2] == 0);
  return (uint)""[bVar1] - (uint)""[uVar2];
}

// StricmpImpl<char,char8_t> @ 141617a30

int __cdecl StricmpImpl<char,char8_t>(char *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar1 | bVar2) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// StricmpImpl<char,char32_t> @ 141617ab0

int __cdecl StricmpImpl<char,char32_t>(char *param_1,wchar32 *param_2)

{
  byte bVar1;
  wchar32 wVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != wVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | wVar2) & 0xffffff80U) != 0) {
      return (uint)bVar1 - wVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[(uint)wVar2] == 0);
  return (uint)""[bVar1] - (uint)""[(uint)wVar2];
}

// StricmpImpl<char,wchar_t> @ 141617b10

int __cdecl StricmpImpl<char,wchar_t>(char *param_1,wchar_t *param_2)

{
  byte bVar1;
  wchar_t wVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((ushort)bVar1 != wVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | (uint)(ushort)wVar2) & 0xffffff80) != 0) {
      return (uint)bVar1 - (uint)(ushort)wVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[(ushort)wVar2] == 0);
  return (uint)""[bVar1] - (uint)""[(ushort)wVar2];
}

// StricmpImpl<unsigned_short,char> @ 141617b90

int __cdecl StricmpImpl<unsigned_short,char>(ushort *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  
  do {
    while( true ) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (uVar2 != bVar1) break;
      if (uVar2 == 0) {
        return 0;
      }
    }
    if ((((uint)uVar2 | (uint)bVar1) & 0xffffff80) != 0) {
      return (uint)uVar2 - (uint)bVar1;
    }
  } while ((uint)""[uVar2] - (uint)""[bVar1] == 0);
  return (uint)""[uVar2] - (uint)""[bVar1];
}

// StricmpImpl<unsigned_short,unsigned_short> @ 141617c10

int __cdecl StricmpImpl<unsigned_short,unsigned_short>(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      uVar1 = *(ushort *)(lVar3 + (longlong)param_2);
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (((uVar1 | uVar2) & 0xff80) != 0) {
      return (uint)uVar1 - (uint)uVar2;
    }
  } while ((uint)""[uVar1] - (uint)""[uVar2] == 0);
  return (uint)""[uVar1] - (uint)""[uVar2];
}

// StricmpImpl<char8_t,char> @ 141617c90

int __cdecl StricmpImpl<char8_t,char>(uchar *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar1 | bVar2) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// StricmpImpl<char8_t,char8_t> @ 141617d10

int __cdecl StricmpImpl<char8_t,char8_t>(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar1 | bVar2) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// StricmpImpl<char32_t,char> @ 141617d90

int __cdecl StricmpImpl<char32_t,char>(wchar32 *param_1,char *param_2)

{
  byte bVar1;
  wchar32 wVar2;
  
  do {
    while( true ) {
      wVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (wVar2 != (uint)bVar1) break;
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    if ((((uint)bVar1 | wVar2) & 0xffffff80U) != 0) {
      return wVar2 - (uint)bVar1;
    }
  } while ((uint)""[(uint)wVar2] - (uint)""[bVar1] == 0);
  return (uint)""[(uint)wVar2] - (uint)""[bVar1];
}

// StricmpImpl<char32_t,char32_t> @ 141617de0

int __cdecl StricmpImpl<char32_t,char32_t>(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 wVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      wVar1 = *(wchar32 *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    if (((wVar2 | wVar1) & 0xffffff80U) != 0) {
      return wVar1 - wVar2;
    }
  } while ((uint)""[(uint)wVar1] - (uint)""[(uint)wVar2] == 0);
  return (uint)""[(uint)wVar1] - (uint)""[(uint)wVar2];
}

// StricmpImpl<wchar_t,char> @ 141617e30

int __cdecl StricmpImpl<wchar_t,char>(wchar_t *param_1,char *param_2)

{
  byte bVar1;
  wchar_t wVar2;
  
  do {
    while( true ) {
      wVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (wVar2 != (ushort)bVar1) break;
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    if ((((uint)(ushort)wVar2 | (uint)bVar1) & 0xffffff80) != 0) {
      return (uint)(ushort)wVar2 - (uint)bVar1;
    }
  } while ((uint)""[(ushort)wVar2] - (uint)""[bVar1] == 0);
  return (uint)""[(ushort)wVar2] - (uint)""[bVar1];
}

// StricmpImpl<wchar_t,wchar_t> @ 141617eb0

int __cdecl StricmpImpl<wchar_t,wchar_t>(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    if (((wVar1 | wVar2) & 0xff80U) != 0) {
      return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
    }
  } while ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] == 0);
  return (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
}

// StringCast<char,128,wchar_t> @ 141617f30

TStringConversion<TStringConvert<wchar_t,char>,128> * __cdecl
StringCast<char,128,wchar_t>
          (TStringConversion<TStringConvert<wchar_t,char>,128> *__return_storage_ptr__,
          wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar7 = 0;
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    __return_storage_ptr__->Ptr = (char *)0x0;
    __return_storage_ptr__->StringLength = 0;
  }
  else {
    sVar4 = wcslen(param_1);
    __return_storage_ptr__->StringLength = (int)sVar4;
    iVar8 = (int)sVar4 + 1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
    ResizeAllocation((ForElementType<char> *)__return_storage_ptr__,0,iVar8,1);
    lVar9 = (longlong)iVar8;
    pTVar5 = __return_storage_ptr__;
    if ((TStringConversion<TStringConvert<wchar_t,char>,128> *)__return_storage_ptr__->_padding_ !=
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)0x0) {
      pTVar5 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)
               __return_storage_ptr__->_padding_;
    }
    bVar3 = false;
    __return_storage_ptr__->Ptr = (char *)pTVar5;
    lVar6 = lVar7;
    if (0 < lVar9) {
      do {
        wVar1 = param_1[lVar6];
        *(char *)((longlong)&pTVar5->_padding_ + lVar6) = (char)wVar1;
        lVar6 = lVar6 + 1;
        bVar3 = (bool)(bVar3 | 0x7f < (ushort)wVar1);
      } while (lVar6 < lVar9);
      if (bVar3) {
        do {
          if (0x7f < (ushort)param_1[lVar7]) {
            *(undefined1 *)((longlong)&pTVar5->_padding_ + lVar7) = 0x3f;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
    }
    if (((longlong)&pTVar5->_padding_ + lVar9 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// StrncmpImpl<char,char> @ 141618050

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char,char>(char *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// StrncmpImpl<char,char8_t> @ 141618090

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char,char8_t>
          (char *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((int)(char)bVar1 != (uint)bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// StrncmpImpl<char,wchar_t> @ 1416180e0

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char,wchar_t>
          (char *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 != (uint)(ushort)wVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)bVar1 - (uint)(ushort)wVar2;
}

// StrncmpImpl<char8_t,char> @ 141618130

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char8_t,char>
          (uchar *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = *param_2;
      bVar2 = param_2[lVar3];
      param_2 = param_2 + 1;
      if ((uint)bVar2 != (int)(char)bVar1) {
        return (uint)bVar2 - (uint)bVar1;
      }
    } while ((bVar2 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// StrncmpImpl<char8_t,char8_t> @ 141618180

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char8_t,char8_t>
          (uchar *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while ((bVar1 != 0) && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// StrncmpImpl<char8_t,wchar_t> @ 1416181c0

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<char8_t,wchar_t>
          (uchar *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((ushort)bVar1 != wVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)bVar1 - (uint)(ushort)wVar2;
}

// StrncmpImpl<wchar_t,char> @ 141618200

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<wchar_t,char>
          (wchar_t *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)(ushort)wVar2 != (int)(char)bVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)(ushort)wVar2 - (uint)bVar1;
}

// StrncmpImpl<wchar_t,char8_t> @ 141618240

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<wchar_t,char8_t>
          (wchar_t *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    if (wVar2 != (ushort)bVar1) break;
    if (wVar2 == L'\0') {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  return (uint)(ushort)wVar2 - (uint)bVar1;
}

// StrncmpImpl<wchar_t,wchar_t> @ 141618280

int __cdecl
GenericPlatformStringPrivate::StrncmpImpl<wchar_t,wchar_t>
          (wchar_t *param_1,wchar_t *param_2,ulong64 param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) {
        return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
      }
    } while ((wVar1 != L'\0') && (param_3 = param_3 - 1, param_3 != 0));
  }
  return 0;
}

// StrnicmpImpl<char,char> @ 1416182c0

int __cdecl StrnicmpImpl<char,char>(char *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if (bVar1 == bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (((bVar2 | bVar1) & 0x80) != 0) {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char,unsigned_short> @ 141618340

int __cdecl StrnicmpImpl<char,unsigned_short>(char *param_1,ushort *param_2,ulong64 param_3)

{
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)uVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)uVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)uVar2;
      }
      if ((uint)""[bVar1] - (uint)""[uVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[uVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char,char8_t> @ 1416183c0

int __cdecl StrnicmpImpl<char,char8_t>(char *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)bVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char,char32_t> @ 141618440

int __cdecl StrnicmpImpl<char,char32_t>(char *param_1,wchar32 *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar32 wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((char)bVar1 == wVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((char)bVar1 | wVar2) & 0xffffff80U) != 0) {
        return (uint)bVar1 - wVar2;
      }
      if ((uint)""[bVar1] - (uint)""[(uint)wVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[(uint)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char,wchar_t> @ 1416184c0

int __cdecl StrnicmpImpl<char,wchar_t>(char *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)(ushort)wVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)(ushort)wVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)(ushort)wVar2;
      }
      if ((uint)""[bVar1] - (uint)""[(ushort)wVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[(ushort)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<unsigned_short,char> @ 141618540

int __cdecl StrnicmpImpl<unsigned_short,char>(ushort *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)uVar2 == (int)(char)bVar1) {
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)uVar2) & 0xffffff80) != 0) {
        return (uint)uVar2 - (uint)bVar1;
      }
      if ((uint)""[uVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[uVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<unsigned_short,unsigned_short> @ 1416185c0

int __cdecl
StrnicmpImpl<unsigned_short,unsigned_short>(ushort *param_1,ushort *param_2,ulong64 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    uVar1 = *(ushort *)(lVar3 + (longlong)param_2);
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    if (uVar1 == uVar2) {
      if (uVar1 == 0) {
        return 0;
      }
    }
    else {
      if (((uVar1 | uVar2) & 0xff80) != 0) {
        return (uint)uVar1 - (uint)uVar2;
      }
      if ((uint)""[uVar1] - (uint)""[uVar2] != 0) {
        return (uint)""[uVar1] - (uint)""[uVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char8_t,char> @ 141618680

int __cdecl StrnicmpImpl<char8_t,char>(uchar *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = *param_2;
    bVar2 = param_2[lVar3];
    param_2 = param_2 + 1;
    if ((uint)bVar2 == (int)(char)bVar1) {
      if (bVar2 == 0) {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)bVar2) & 0xffffff80) != 0) {
        return (uint)bVar2 - (uint)bVar1;
      }
      if ((uint)""[bVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[bVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char8_t,char8_t> @ 1416186f0

int __cdecl StrnicmpImpl<char8_t,char8_t>(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if (bVar1 == bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((char)(bVar1 | bVar2) < '\0') {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char32_t,char> @ 1416187b0

int __cdecl StrnicmpImpl<char32_t,char>(wchar32 *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar32 wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if (wVar2 == (char)bVar1) {
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    else {
      if ((((char)bVar1 | wVar2) & 0xffffff80U) != 0) {
        return wVar2 - (uint)bVar1;
      }
      if ((uint)""[(uint)wVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[(uint)wVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<char32_t,char32_t> @ 141618830

int __cdecl StrnicmpImpl<char32_t,char32_t>(wchar32 *param_1,wchar32 *param_2,ulong64 param_3)

{
  wchar32 wVar1;
  wchar32 wVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    wVar1 = *(wchar32 *)(lVar3 + (longlong)param_2);
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if (wVar1 == wVar2) {
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    else {
      if (((wVar2 | wVar1) & 0xffffff80U) != 0) {
        return wVar1 - wVar2;
      }
      if ((uint)""[(uint)wVar1] - (uint)""[(uint)wVar2] != 0) {
        return (uint)""[(uint)wVar1] - (uint)""[(uint)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<wchar_t,char> @ 1416188a0

int __cdecl StrnicmpImpl<wchar_t,char>(wchar_t *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)(ushort)wVar2 == (int)(char)bVar1) {
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)(ushort)wVar2) & 0xffffff80) != 0) {
        return (uint)(ushort)wVar2 - (uint)bVar1;
      }
      if ((uint)""[(ushort)wVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[(ushort)wVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// StrnicmpImpl<wchar_t,wchar_t> @ 141618920

int __cdecl StrnicmpImpl<wchar_t,wchar_t>(wchar_t *param_1,wchar_t *param_2,ulong64 param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if (wVar1 == wVar2) {
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    else {
      if (((wVar1 | wVar2) & 0xff80U) != 0) {
        return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
      }
      if ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] != 0) {
        return (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// TestStricmp<char> @ 1416189e0

void __cdecl TestStricmp<char>(char *param_1,char *param_2,FAutomationTestBase *param_3)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  FString local_18;
  
  pcVar2 = param_2;
  while( true ) {
    cVar1 = pcVar2[(longlong)param_1 - (longlong)param_2];
    iVar7 = 1;
    if ((cVar1 == '\0') && (*pcVar2 == '\0')) break;
    bVar8 = (-((int)cVar1 - 0x41U < 0x1a) & 0x20U) + cVar1;
    bVar3 = (-((int)*pcVar2 - 0x41U < 0x1a) & 0x20U) + *pcVar2;
    if (bVar8 != bVar3) {
      iVar6 = (uint)bVar8 - (uint)bVar3;
      iVar5 = iVar7;
      if (iVar6 < 1) {
LAB_141618a51:
        iVar5 = iVar6 >> 0x1f;
      }
      iVar6 = StricmpImpl<char,char>(param_1,param_2);
      if (iVar6 < 1) {
        iVar7 = iVar6 >> 0x1f;
      }
      FString::FString(&local_18,"Stricmp()");
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(param_3,(wchar_t *)FVar4.Data,iVar7,iVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return;
    }
    pcVar2 = pcVar2 + 1;
  }
  iVar6 = 0;
  goto LAB_141618a51;
}

// TestStricmp<wchar_t> @ 141618ae0

void __cdecl TestStricmp<wchar_t>(wchar_t *param_1,wchar_t *param_2,FAutomationTestBase *param_3)

{
  wchar_t *pwVar1;
  ushort uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  FString local_18;
  
  pwVar1 = param_2;
  while( true ) {
    uVar7 = *(ushort *)(((longlong)param_1 - (longlong)param_2) + (longlong)pwVar1);
    iVar6 = 1;
    if ((uVar7 == 0) && (*pwVar1 == L'\0')) break;
    uVar7 = (-(ushort)(uVar7 - 0x41 < 0x1a) & 0x20) + uVar7;
    uVar2 = (-(ushort)((ushort)*pwVar1 - 0x41 < 0x1a) & 0x20) + *pwVar1;
    if (uVar7 != uVar2) {
      iVar5 = (uint)uVar7 - (uint)uVar2;
      iVar4 = iVar6;
      if (iVar5 < 1) {
LAB_141618b5b:
        iVar4 = iVar5 >> 0x1f;
      }
      iVar5 = StricmpImpl<wchar_t,wchar_t>(param_1,param_2);
      if (iVar5 < 1) {
        iVar6 = iVar5 >> 0x1f;
      }
      FString::FString(&local_18,"Stricmp()");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(param_3,(wchar_t *)FVar3.Data,iVar6,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return;
    }
    pwVar1 = pwVar1 + 1;
  }
  iVar5 = 0;
  goto LAB_141618b5b;
}

// TransformAccumulate<int,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int_(__cdecl_TArray<FString,TSizedDefaultAllocator<32>_>::*)(void)const_,TPlus<void>_> @ 141618be0

int __cdecl
Algo::
TransformAccumulate<int,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int_(__cdecl_TArray<FString,TSizedDefaultAllocator<32>_>::*)(void)const_,TPlus<void>_>
          (TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          pmf_8e01a532 param_2,int param_3,TPlus<void> param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<FString,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (*(code *)param_2)(pFVar3);
    param_3 = param_3 + iVar2;
    pFVar3 = pFVar3 + 0x10;
  }
  return param_3;
}

// WriteToString<16,TStringView<wchar_t>_> @ 141618db0

TStringBuilderWithBuffer<wchar_t,16> * __cdecl
WriteToString<16,TStringView<wchar_t>_>
          (TStringBuilderWithBuffer<wchar_t,16> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// get<1,TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_&> @ 141618df0

FQueueData * __cdecl
get<1,TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_&>
          (TTuple<FString,FGPUBreadcrumbCrashData::FQueueData> *param_1)

{
  return (FQueueData *)&param_1->field_0x10;
}

// get<0,TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_&> @ 141618e00

FString * __cdecl
get<0,TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_&>
          (TTuple<FString,FGPUBreadcrumbCrashData::FQueueData> *param_1)

{
  return (FString *)param_1;
}

// FThreadSafeStaticStat<`FGenericReadRequestWorker::GetStatId'::__l2::FStat_FGenericReadRequestWorker> @ 141619af0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FGenericReadRequestWorker::GetStatId(void)const_::_2_::FStat_FGenericReadRequestWorker>
* __thiscall
FThreadSafeStaticStat<`FGenericReadRequestWorker::GetStatId'::__l2::FStat_FGenericReadRequestWorker>
::
FThreadSafeStaticStat<_FGenericReadRequestWorker::GetStatId_::__l2::FStat_FGenericReadRequestWorker>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FGenericReadRequestWorker");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FGenericReadRequestWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14161fdf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FGenericPlatformChunkInstall::AsyncInit_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014161fe13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 14161fe20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 14161fe40

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// operator<< @ 141621ae0

FArchive * __cdecl operator<<(FArchive *param_1,FGenericPlatformSymbolData *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  int *piVar4;
  FArchive *pFVar5;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Start);
    }
  }
  else {
    param_2->Start = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->Length;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar1 = &param_2->NameIdx;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar5 = TArrayPrivateFriend::Serialize<FGenericPlatformSymbolInfo,TSizedDefaultAllocator<32>_>
                     (param_1,&param_2->SymbolInfo);
  return pFVar5;
}

// operator<< @ 141621bf0

FArchive * __cdecl operator<<(FArchive *param_1,FGenericPlatformSymbolInfo *param_2)

{
  ulong64 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ulong64 *puVar5;
  int *piVar6;
  
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Line);
    }
  }
  else {
    param_2->Line = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->Start;
  puVar3 = &param_1->field_0x2a;
  puVar5 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->Length;
  puVar5 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar2 = &param_2->PathIdx;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar6 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar3 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// operator/ @ 141621e50

FString * __cdecl operator/(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  
  sVar3 = wcslen(param_2);
  iVar2 = (int)sVar3;
  if (((param_1->Data).ArrayNum != 0) || (iVar4 = 2, iVar2 == -1)) {
    iVar4 = 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar2 + iVar4 == 0)) {
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    uVar5 = iVar1 + iVar2 + iVar4;
    if ((int)uVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar5,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               &(__return_storage_ptr__->Data).ArrayMax);
    if (iVar1 != 0) {
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  FString::PathAppend(__return_storage_ptr__,param_2,iVar2);
  return __return_storage_ptr__;
}

// operator/ @ 141621f30

FString * __cdecl operator/(FString *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  FString local_18;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar2 = 1;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  pTVar1 = &FString::FString(&local_18,param_1)->Data;
  if ((pTVar1->ArrayNum != 0) || (iVar3 == 0)) {
    iVar2 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar1,iVar2 + iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar2 = (param_2->Data).ArrayNum;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  FString::PathAppend(__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3
                     );
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{64}' @ 141623a04

/* [thunk]:public: virtual void * __ptr64 __cdecl FConsoleCommandShadow::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
FConsoleCommandShadow::_vector_deleting_destructor__adjustor_64__
          (FConsoleCommandShadow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FConsoleCommandShadow *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 141623a14

/* [thunk]:public: virtual void * __ptr64 __cdecl FConsoleVariableShadow::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
FConsoleVariableShadow::_vector_deleting_destructor__adjustor_64__
          (FConsoleVariableShadow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FConsoleVariableShadow *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 141623a30

void * __thiscall
FAsyncTask<FGenericReadRequestWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FGenericReadRequestWorker> *this,uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623a70

void * __thiscall
FConsoleVariable<int>::_scalar_deleting_destructor_(FConsoleVariable<int> *this,uint param_1)

{
  FConsoleVariableExtendedData<int>::~FConsoleVariableExtendedData<int>
            ((FConsoleVariableExtendedData<int> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623ab0

void * __thiscall
FConsoleVariable<float>::_scalar_deleting_destructor_(FConsoleVariable<float> *this,uint param_1)

{
  FConsoleVariableExtendedData<float>::~FConsoleVariableExtendedData<float>
            ((FConsoleVariableExtendedData<float> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623af0

void * __thiscall
FConsoleVariable<FString>::_scalar_deleting_destructor_
          (FConsoleVariable<FString> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = (FString *)&this->ParentVariable;
  lVar2 = 2;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  FConsoleVariableExtendedData<FString>::~FConsoleVariableExtendedData<FString>
            ((FConsoleVariableExtendedData<FString> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623b80

void * __thiscall
FConsoleVariable<bool>::_scalar_deleting_destructor_(FConsoleVariable<bool> *this,uint param_1)

{
  FConsoleVariableExtendedData<bool>::~FConsoleVariableExtendedData<bool>
            ((FConsoleVariableExtendedData<bool> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623bc0

void * __thiscall
FConsoleVariableExtendedData<int>::_scalar_deleting_destructor_
          (FConsoleVariableExtendedData<int> *this,uint param_1)

{
  ~FConsoleVariableExtendedData<int>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623c00

void * __thiscall
FConsoleVariableExtendedData<float>::_scalar_deleting_destructor_
          (FConsoleVariableExtendedData<float> *this,uint param_1)

{
  ~FConsoleVariableExtendedData<float>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623c40

void * __thiscall
FConsoleVariableExtendedData<FString>::_scalar_deleting_destructor_
          (FConsoleVariableExtendedData<FString> *this,uint param_1)

{
  ~FConsoleVariableExtendedData<FString>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623c80

void * __thiscall
FConsoleVariableExtendedData<bool>::_scalar_deleting_destructor_
          (FConsoleVariableExtendedData<bool> *this,uint param_1)

{
  ~FConsoleVariableExtendedData<bool>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623cc0

void * __thiscall
FConsoleVariableRef<int>::_scalar_deleting_destructor_(FConsoleVariableRef<int> *this,uint param_1)

{
  FConsoleVariableExtendedData<int>::~FConsoleVariableExtendedData<int>
            ((FConsoleVariableExtendedData<int> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623d00

void * __thiscall
FConsoleVariableRef<float>::_scalar_deleting_destructor_
          (FConsoleVariableRef<float> *this,uint param_1)

{
  FConsoleVariableExtendedData<float>::~FConsoleVariableExtendedData<float>
            ((FConsoleVariableExtendedData<float> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623d40

void * __thiscall
FConsoleVariableRef<bool>::_scalar_deleting_destructor_
          (FConsoleVariableRef<bool> *this,uint param_1)

{
  FConsoleVariableExtendedData<bool>::~FConsoleVariableExtendedData<bool>
            ((FConsoleVariableExtendedData<bool> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623d80

void * __thiscall
FRangedConsoleVariable<int>::_scalar_deleting_destructor_
          (FRangedConsoleVariable<int> *this,uint param_1)

{
  FConsoleVariableExtendedData<int>::~FConsoleVariableExtendedData<int>
            ((FConsoleVariableExtendedData<int> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623dc0

void * __thiscall
FRangedConsoleVariable<float>::_scalar_deleting_destructor_
          (FRangedConsoleVariable<float> *this,uint param_1)

{
  FConsoleVariableExtendedData<float>::~FConsoleVariableExtendedData<float>
            ((FConsoleVariableExtendedData<float> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623e00

void * __thiscall
IBaseDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623e30

void * __thiscall
IBaseDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623e60

void * __thiscall
IBaseDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623e90

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623ec0

void * __thiscall
IBaseDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623ef0

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623f20

void * __thiscall
TAutoRangedConsoleVariable<int>::_scalar_deleting_destructor_
          (TAutoRangedConsoleVariable<int> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623f60

void * __thiscall
TAutoRangedConsoleVariable<float>::_scalar_deleting_destructor_
          (TAutoRangedConsoleVariable<float> *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623fa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141623fd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624000

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624030

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624090

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416240c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<int>::FRangedConsoleVariable<int>'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416240f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FRangedConsoleVariable<float>::FRangedConsoleVariable<float>'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624120

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`IConsoleManager::VisitPlatformCVarsForEmulation'::__l80::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l57::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416241b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416241e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624210

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624240

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624270

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416242a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416242d0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624300

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624330

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624360

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624390

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416243c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416243f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624420

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(wchar_t_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(wchar_t_const_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXPEB_W_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624460

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void),1,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(void),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416244a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
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

// `scalar_deleting_destructor' @ 141624500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::FWindowsRecursiveMutex,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::FWindowsRecursiveMutex,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624590

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<int>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<int>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConsoleVariable<int>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<int>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416245d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<float>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<float>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConsoleVariable<float>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<float>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624610

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<FString>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<FString>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConsoleVariable<FString>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<FString>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624650

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<bool>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<bool>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FConsoleVariable<bool>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<bool>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624690

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericProcessSentinel,SharedPointerInternals::DefaultDeleter<FGenericProcessSentinel>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGenericProcessSentinel,SharedPointerInternals::DefaultDeleter<FGenericProcessSentinel>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416246d0

void * __thiscall
TThreadSingleton<UE::Stats::FThreadIdleStats>::_scalar_deleting_destructor_
          (TThreadSingleton<UE::Stats::FThreadIdleStats> *this,uint param_1)

{
  ~TThreadSingleton<UE::Stats::FThreadIdleStats>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624710

void * __thiscall FAsyncTaskBase::_scalar_deleting_destructor_(FAsyncTaskBase *this,uint param_1)

{
  ~FAsyncTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624750

void * __thiscall
FAutoConsoleCommand::_scalar_deleting_destructor_(FAutoConsoleCommand *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624790

void * __thiscall
FAutoConsoleObject::_scalar_deleting_destructor_(FAutoConsoleObject *this,uint param_1)

{
  ~FAutoConsoleObject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416247d0

void * __thiscall
FAutoConsoleVariable::_scalar_deleting_destructor_(FAutoConsoleVariable *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624810

void * __thiscall
FConsoleCommanWithArgsAndOutputDevice::_scalar_deleting_destructor_
          (FConsoleCommanWithArgsAndOutputDevice *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624870

void * __thiscall FConsoleCommand::_scalar_deleting_destructor_(FConsoleCommand *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416248d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void * __thiscall
FConsoleCommandBase::_scalar_deleting_destructor_(FConsoleCommandBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Help).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624920

void * __thiscall
FConsoleCommandExec::_scalar_deleting_destructor_(FConsoleCommandExec *this,uint param_1)

{
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624970

void * __thiscall
FConsoleCommandShadow::_scalar_deleting_destructor_(FConsoleCommandShadow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  this->_padding_ = (longlong)&___7FConsoleObjectShadowData__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416249f0

void * __thiscall
FConsoleCommandWithArgs::_scalar_deleting_destructor_(FConsoleCommandWithArgs *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624a50

void * __thiscall
FConsoleCommandWithOutputDevice::_scalar_deleting_destructor_
          (FConsoleCommandWithOutputDevice *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624ab0

void * __thiscall
FConsoleCommandWithWorld::_scalar_deleting_destructor_(FConsoleCommandWithWorld *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624b10

void * __thiscall
FConsoleCommandWithWorldAndArgs::_scalar_deleting_destructor_
          (FConsoleCommandWithWorldAndArgs *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624b70

void * __thiscall
FConsoleCommandWithWorldArgsAndOutputDevice::_scalar_deleting_destructor_
          (FConsoleCommandWithWorldArgsAndOutputDevice *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624bd0

void * __thiscall FConsoleManager::_scalar_deleting_destructor_(FConsoleManager *this,uint param_1)

{
  ~FConsoleManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624c10

void * __thiscall
FConsoleObjectShadowData::_scalar_deleting_destructor_(FConsoleObjectShadowData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FConsoleObjectShadowData__6B_;
  pFVar1 = (this->DeprecationMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeprecatedVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShadowName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624c80

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void * __thiscall
FConsoleVariableBase::_scalar_deleting_destructor_(FConsoleVariableBase *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedCallback).field_0x8,*(int *)&(this->OnChangedCallback).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedCallback);
  pFVar2 = (this->Help).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624d00

void * __thiscall
FConsoleVariableBitRef::_scalar_deleting_destructor_(FConsoleVariableBitRef *this,uint param_1)

{
  FConsoleVariableExtendedData<int>::~FConsoleVariableExtendedData<int>
            ((FConsoleVariableExtendedData<int> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624d40

void * __thiscall
FConsoleVariableNameRef::_scalar_deleting_destructor_(FConsoleVariableNameRef *this,uint param_1)

{
  FConsoleVariableExtendedData<FString>::~FConsoleVariableExtendedData<FString>
            ((FConsoleVariableExtendedData<FString> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624d80

void * __thiscall
FConsoleVariableShadow::_scalar_deleting_destructor_(FConsoleVariableShadow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  this->_padding_ = (longlong)&___7FConsoleObjectShadowData__6B_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624e00

void * __thiscall
FConsoleVariableStringRef::_scalar_deleting_destructor_
          (FConsoleVariableStringRef *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MainValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FConsoleVariableExtendedData<FString>::~FConsoleVariableExtendedData<FString>
            ((FConsoleVariableExtendedData<FString> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624e50

void * __thiscall
`IPlatformFile::CopyDirectoryTree'::__l2::FCopyFilesAndDirs::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624e90

void * __thiscall
FCrashContextExtendedWriter::_scalar_deleting_destructor_
          (FCrashContextExtendedWriter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624ec0

void * __thiscall
FCrashContextExtendedWriterImpl::_scalar_deleting_destructor_
          (FCrashContextExtendedWriterImpl *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624ef0

void * __thiscall
IPlatformFile::FDirectoryStatVisitor::_scalar_deleting_destructor_
          (FDirectoryStatVisitor *this,uint param_1)

{
  *this = (FDirectoryStatVisitor)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624f30

void * __thiscall
FDirectoryStatVisitorFuncWrapper::_scalar_deleting_destructor_
          (FDirectoryStatVisitorFuncWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624f70

void * __thiscall
IPlatformFile::FDirectoryVisitor::_scalar_deleting_destructor_(FDirectoryVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624fb0

void * __thiscall
FDirectoryVisitorFuncWrapper::_scalar_deleting_destructor_
          (FDirectoryVisitorFuncWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141624ff0

void * __thiscall FEvent::_scalar_deleting_destructor_(FEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625030

void * __thiscall FExec::_scalar_deleting_destructor_(FExec *this,uint param_1)

{
  ~FExec(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625070

void * __thiscall
FFeedbackContextAnsi::_scalar_deleting_destructor_(FFeedbackContextAnsi *this,uint param_1)

{
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416250b0

void * __thiscall
FFindFilesVisitor::_scalar_deleting_destructor_(FFindFilesVisitor *this,uint param_1)

{
  ~FFindFilesVisitor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416250f0

void * __thiscall
FGenericAsyncReadFileHandle::_scalar_deleting_destructor_
          (FGenericAsyncReadFileHandle *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  lpCriticalSection = &this->LiveRequestsCritical;
  this->_padding_ = (longlong)&___7FGenericAsyncReadFileHandle__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->LiveRequests).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LiveRequests.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                       ,0x10d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  pIVar1 = this->HandleCache[0];
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = this->HandleCache[1];
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = this->HandleCache[2];
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = this->HandleCache[3];
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HandleCacheCritical);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->LiveRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IAsyncReadFileHandle::~IAsyncReadFileHandle((IAsyncReadFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625220

void * __thiscall
FGenericBaseRequest::_scalar_deleting_destructor_(FGenericBaseRequest *this,uint param_1)

{
  FAsyncTask<FGenericReadRequestWorker> *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericBaseRequest__6B_;
  if (this->Task != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<FGenericReadRequestWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625290

void * __thiscall
FGenericCrashContext::_scalar_deleting_destructor_(FGenericCrashContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericCrashContext__6B_;
  pFVar1 = (this->CommonBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModulesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FThreadStackFrames,int>
            ((FThreadStackFrames *)(this->ThreadCallStacks).AllocatorInstance.Data,
             (this->ThreadCallStacks).ArrayNum);
  pFVar1 = (this->ThreadCallStacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCrashStackFrame,int>
            ((FCrashStackFrame *)(this->CallStack).AllocatorInstance.Data,(this->CallStack).ArrayNum
            );
  pFVar1 = (this->CallStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625320

void * __thiscall
FGenericPlatformChunkInstall::_scalar_deleting_destructor_
          (FGenericPlatformChunkInstall *this,uint param_1)

{
  ~FGenericPlatformChunkInstall(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625360

void * __thiscall
FGenericPlatformHostCommunication::_scalar_deleting_destructor_
          (FGenericPlatformHostCommunication *this,uint param_1)

{
  *this = (FGenericPlatformHostCommunication)&___7IPlatformHostCommunication__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416253a0

void * __thiscall
FGenericPlatformMallocCrash::_scalar_deleting_destructor_
          (FGenericPlatformMallocCrash *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericPlatformMallocCrash__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InternalLock);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625410

void * __thiscall
FGenericPlatformNamedPipe::_scalar_deleting_destructor_
          (FGenericPlatformNamedPipe *this,uint param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->NamePtr;
  this->_padding_ = (longlong)&___7FGenericPlatformNamedPipe__6B_;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
  }
  this->NamePtr = (FString *)0x0;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625490

void * __thiscall
FGenericProcessSentinel::_scalar_deleting_destructor_(FGenericProcessSentinel *this,uint param_1)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  
  this->_padding_ = (longlong)&___7FGenericProcessSentinel__6B_;
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (this->FileHandle).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pIVar3 = IFileManager::Get();
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,pwVar4,0,0,0);
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->SavedFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625540

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FGenericReadRequest::_scalar_deleting_destructor_(FGenericReadRequest *this,uint param_1)

{
  ~FGenericReadRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625580

void * __thiscall
FGenericSizeRequest::_scalar_deleting_destructor_(FGenericSizeRequest *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FGenericBaseRequest__6B_;
  if (*(FAsyncTaskBase **)&this->field_0x48 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x48,true,false);
    plVar1 = *(longlong **)&this->field_0x48;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416255f0

void * __thiscall
FGenericStackBasedMallocCrash::_scalar_deleting_destructor_
          (FGenericStackBasedMallocCrash *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericStackBasedMallocCrash__6B_;
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625650

void * __thiscall FMalloc::_scalar_deleting_destructor_(FMalloc *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416256b0

void * __thiscall
FOutputDeviceArchiveWrapper::_scalar_deleting_destructor_
          (FOutputDeviceArchiveWrapper *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416256f0

void * __thiscall
FOutputDeviceDebug::_scalar_deleting_destructor_(FOutputDeviceDebug *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625730

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
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
       &ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
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

// `scalar_deleting_destructor' @ 141625840

void * __thiscall
`IPlatformFile::DeleteDirectoryRecursively'::__l2::FRecurse::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625880

void * __thiscall
`IPlatformFile::IterateDirectoryRecursively'::__l2::FRecurse::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416258c0

void * __thiscall
FSafeRecyclableEvent::_scalar_deleting_destructor_(FSafeRecyclableEvent *this,uint param_1)

{
  this->InnerEvent = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625900

void * __thiscall
FGenericPlatformProcess::FSemaphore::_scalar_deleting_destructor_(FSemaphore *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625940

void * __thiscall
`IPlatformFile::IterateDirectoryStatRecursively'::__l2::FStatRecurse::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined ***)this = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625980

void * __thiscall
UE::Stats::FThreadIdleStats::_scalar_deleting_destructor_(FThreadIdleStats *this,uint param_1)

{
  TThreadSingleton<UE::Stats::FThreadIdleStats>::~TThreadSingleton<UE::Stats::FThreadIdleStats>
            ((TThreadSingleton<UE::Stats::FThreadIdleStats> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1416259c0

void * __thiscall
IAsyncReadFileHandle::_scalar_deleting_destructor_(IAsyncReadFileHandle *this,uint param_1)

{
  ~IAsyncReadFileHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625a00

void * __thiscall
IAsyncReadRequest::_scalar_deleting_destructor_(IAsyncReadRequest *this,uint param_1)

{
  ~IAsyncReadRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625a40

void * __thiscall
IAsyncReadRequestFixLayout::_scalar_deleting_destructor_
          (IAsyncReadRequestFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625a70

void * __thiscall IConsoleCommand::_scalar_deleting_destructor_(IConsoleCommand *this,uint param_1)

{
  *(undefined ***)this = &___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625ab0

void * __thiscall IConsoleManager::_scalar_deleting_destructor_(IConsoleManager *this,uint param_1)

{
  *this = (IConsoleManager)&___7IConsoleManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625af0

void * __thiscall IConsoleObject::_scalar_deleting_destructor_(IConsoleObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625b30

void * __thiscall
IConsoleVariable::_scalar_deleting_destructor_(IConsoleVariable *this,uint param_1)

{
  *(undefined ***)this = &___7IConsoleObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625b70

void * __thiscall
IPlatformChunkInstall::_scalar_deleting_destructor_(IPlatformChunkInstall *this,uint param_1)

{
  *this = (IPlatformChunkInstall)&___7IPlatformChunkInstall__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625bb0

void * __thiscall IPlatformFile::_scalar_deleting_destructor_(IPlatformFile *this,uint param_1)

{
  *this = (IPlatformFile)&___7IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625bf0

void * __thiscall
IPlatformHostCommunication::_scalar_deleting_destructor_
          (IPlatformHostCommunication *this,uint param_1)

{
  *this = (IPlatformHostCommunication)&___7IPlatformHostCommunication__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141625c30

void * __thiscall IQueuedWork::_scalar_deleting_destructor_(IQueuedWork *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  IQueuedWorkInternalData *pIVar3;
  
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  pIVar3 = (this->InternalData).Reference;
  if (pIVar3 != (IQueuedWorkInternalData *)0x0) {
    puVar1 = &pIVar3->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pIVar3)(pIVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_copy_constructor_iterator' @ 141625ca0

void __cdecl
_vector_copy_constructor_iterator_
          (void *param_1,void *param_2,ulong64 param_3,ulong64 param_4,
          _func___cdecl_void_ptr_void_ptr_void_ptr *param_5)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      (*param_5)((void *)(lVar1 + (longlong)param_2),param_2);
      param_2 = (void *)((longlong)param_2 + param_3);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}

// AttendedStatusToString @ 14162a2e0

wchar_t * __cdecl AttendedStatusToString(EUnattendedStatus param_1)

{
  if (param_1 != Unknown) {
    if (param_1 == Attended) {
      return L"Attended";
    }
    if (param_1 == Unattended) {
      return L"Unattended";
    }
  }
  return L"Unknown";
}

// CheckForRemappedDP @ 14162e080

FString * __cdecl CheckForRemappedDP(FString *__return_storage_ptr__,FName param_1,FString *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  TTuple<FName,FName> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FName local_res18 [2];
  
  pwVar5 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  do {
    while( true ) {
      wVar1 = *(wchar_t *)
               ((FScriptContainerElement *)((longlong)pwVar4 + -0x15060d16c) + (longlong)pwVar5);
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
LAB_14162e11d:
        pTVar3 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)&ConsoleVariablePlatformMapping::PlatformToDeviceProfileMap,param_1);
        if (pTVar3 == (TTuple<FName,FName> *)0x0) {
          local_res18[0].ComparisonIndex.Value = 0;
          local_res18[0].Number = 0;
        }
        else {
          local_res18[0].ComparisonIndex.Value = *(uint *)&pTVar3->field_0x8;
          local_res18[0].Number = *(uint *)&pTVar3->field_0xc;
        }
        if (local_res18[0] != (FName)0x0) {
          FName::ToString(local_res18,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        goto LAB_14162e0f7;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) goto LAB_14162e11d;
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
LAB_14162e0f7:
  FString::FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// CreateConsoleVariables @ 141630bb0

void __cdecl CreateConsoleVariables(void)

{
  IConsoleManager *pIVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&LLMScope_Name3638,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name3638,false,None,Default,true);
  FMemScope::FMemScope(local_res10,&LLMScope_Name3638,true);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x40))
            (pIVar1,L"r.DumpingMovie",&GIsDumpingMovie,
             L"Allows to dump each rendered frame to disk (slow fps, names MovieFrame..).\n<=0:off (default), <0:remains on, >0:remains on for n frames (n is the number specified)"
             ,1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"VisualizeTexture",L"To visualize internal textures",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,L"Vis",L"short version of visualizetexture",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,L"VisRT",L"GUI for visualizetexture",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"HighResShot",
             L"High resolution screenshots ResolutionX(int32)xResolutionY(int32) Or Magnification(float) [CaptureRegionX(int32) CaptureRegionY(int32) CaptureRegionWidth(int32) CaptureRegionHeight(int32) MaskEnabled(int32) DumpBufferVisualizationTargets(int32) CaptureHDR(int32)]\nExample: HighResShot 500x500 50 50 120 500 1 1 1"
             ,1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"DumpUnbuiltLightInteractions",
             L"Logs all lights and primitives that have an unbuilt interaction.",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,L"Stat MapBuildData",L"",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"r.ResetViewState",
             L"Reset some state (e.g. TemporalAA index) to make rendering more deterministic (for automated screenshot verification)"
             ,1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,L"r.RHI.Name",L"Show current RHI\'s name",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"r.ResetRenderTargetsExtent",L"To reset internal render target extents",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"DumpGPU",L"Dump one frame of rendering intermediary resources to disk.",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"GPUDebugCrash",L"Crash GPU intentionally for debugging.",1);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"RedirectToFile",
             L"Creates a file inside Project\'s Saved folder and outputs command result into it as well as into the log.\nUsage: RedirectToFile <filepath/filename> <command> [command arguments]\nExample: RedirectToFile Profiling/CSV/objlist.csv obj list -csv -all\nDirectory structure under Project/Saved folder specified by <filepath> will be created for you if it doesn\'t exist."
             ,0);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"DumpCVars",
             L"List all console variables, their values, and how they were last modified.\nUsage: DumpCVars [prefix] [-showhelp] [-deprecated] [-csv[=path]]\nprefix      - Only list variables that start with this string\n-showhelp   - Show help information for each variable\n-deprecated - Only list deprecated variables. Values are not shown for deprecated variables.\n-csv        - Save results to a csv file. If a file is not specified, it will be created in the Project Logs directory."
             ,0);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"DumpCCmds",
             L"List all registered console commands.\nNot all commands are registered. Unregistered commands will not be listed by this command\nUse DumpConsoleCommands if you need to list unregistered commands as well\nUsage: DumpCCmds [prefix] [-showhelp] [-deprecated] [-csv[=path]]\nprefix      - Only list commands that start with this string\n-showhelp   - Show help information for each command\n-deprecated - Only list deprecated commands\n-csv        - Save results to a csv file. If a file is not specified, it will be created in the Project Logs directory."
             ,0);
  pIVar1 = IConsoleManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x70))
            (pIVar1,L"DumpConsoleCommands",
             L"List all console commands, both registered and unregistered\nUsage: DumpConsoleCommands [prefix]\nprefix      - Only list commands that start with this string\n"
             ,0);
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExpandScalabilityCVar @ 141639a40

void __cdecl
ExpandScalabilityCVar
          (FConfigCacheIni *param_1,FString *param_2,FString *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4,bool param_5)

{
  longlong *plVar1;
  FName *this;
  ulonglong uVar2;
  uint uVar3;
  FName _Src;
  FScriptContainerElement *_Src_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FConfigSection *pFVar7;
  bool bVar8;
  int iVar9;
  FConfigSection *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_00;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  undefined4 local_res18 [2];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_res20;
  FString local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FConfigSection *local_e8;
  int iStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined1 local_b4 [20];
  FString local_a0;
  FConfigSection *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString *local_60;
  ForAnyElementType *local_58;
  FString local_50;
  
  bVar6 = false;
  bVar5 = false;
  local_res18[0] = 0;
  local_res20 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)param_4;
  FString::RightChop(param_2,(FString *)(local_b4 + 4),3);
  FString::PrintfImpl(&local_a0,L"%s@%s");
  if ((void *)local_b4._4_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b4._4_8_);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar13.Data = local_a0.Data.AllocatorInstance.Data;
  }
  pFVar10 = FConfigCacheIni::GetSection(param_1,(wchar_t *)FVar13.Data,false,&GScalabilityIni);
  if (pFVar10 != (FConfigSection *)0x0) {
    iVar9 = (int)pFVar10->_padding_;
    iStack_e0 = 0;
    plVar1 = &pFVar10->_padding_;
    uStack_dc = 1;
    local_c8 = 0;
    iStack_cc = 0;
    if (iVar9 != 0) {
      plVar16 = (longlong *)pFVar10->_padding_;
      if ((longlong *)pFVar10->_padding_ == (longlong *)0x0) {
        plVar16 = plVar1;
      }
      uVar14 = (uint)*plVar16;
      while (uVar14 == 0) {
        lVar12 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_141639b8e;
        uVar14 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
      }
      uStack_dc = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_b8 = (int)lVar12;
      iStack_cc = local_c8 + -1 + local_b8;
      if (iVar9 < iStack_cc) {
        iStack_cc = iVar9;
      }
    }
LAB_141639b8e:
    uVar14 = (uint)pFVar10->_padding_;
    uVar17 = uVar14 & 0xffffffe0;
    iStack_c0 = (int)pFVar10->_padding_ - *(int *)((longlong)&pFVar10->_padding_ + 4);
    uStack_d0 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_dc,iStack_e0);
    TStack_88.CurrentBitIndex = iStack_cc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_88._28_4_ = iStack_cc;
    TStack_88.BaseBitIndex = local_c8;
    uStack_68 = CONCAT44(uStack_bc,iStack_c0);
    local_e8 = pFVar10;
    local_d8 = plVar1;
    iStack_c4 = iStack_cc;
    local_90 = pFVar10;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
    if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = (uint)pFVar10->_padding_;
    this_00 = local_res20;
    if (uVar14 != uVar3) {
      plVar16 = (longlong *)pFVar10->_padding_;
      if ((longlong *)pFVar10->_padding_ == (longlong *)0x0) {
        plVar16 = plVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141639ca0;
        uVar14 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar17;
      if ((int)uVar3 < (int)uVar14) {
        uVar14 = uVar3;
      }
    }
LAB_141639ca0:
    do {
      pFVar7 = local_90;
      if ((int)local_90->_padding_ - *(int *)((longlong)&local_90->_padding_ + 4) != (int)uStack_68)
      {
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar14) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
         (pFVar7 == pFVar10)) break;
      this = (FName *)(pFVar7->_padding_ + (longlong)TStack_88.CurrentBitIndex * 0x28);
      FName::ToString(this,&local_f8);
      if (param_5) {
LAB_141639d29:
        if (*(char *)((longlong)&this[3].Number + 1) == '\0') {
          uVar17 = this[2].ComparisonIndex.Value;
          _Src = this[1];
          bVar5 = true;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = uVar17;
          if (uVar17 == 0) {
            local_118.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar17,0,(ForAnyElementType *)&local_118,uVar17,&local_118.Data.ArrayMax)
            ;
            memcpy(local_118.Data.AllocatorInstance.Data,(void *)_Src,(longlong)(int)uVar17 * 2);
          }
          pFVar11 = &local_118;
        }
        else {
          bVar6 = true;
          pFVar11 = FConfigValue::ExpandValue(&local_50,(FString *)(this + 1));
        }
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = (pFVar11->Data).ArrayNum;
        lVar12 = (longlong)local_100;
        _Src_00 = (pFVar11->Data).AllocatorInstance.Data;
        if (local_100 == 0) {
          local_fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100,0,&local_108,local_100,&local_fc);
          memcpy(local_108.Data,_Src_00,lVar12 * 2);
        }
        if ((bVar5) &&
           (bVar5 = false, local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if ((bVar6) &&
           (bVar6 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        local_60 = &local_f8;
        local_58 = &local_108;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  (local_res20,(TPairInitializer<FString_const_&,FString_&&> *)local_b4,
                   (bool *)&local_60);
        this_00 = local_res20;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
          this_00 = local_res20;
        }
      }
      else {
        iVar9 = local_f8.Data.ArrayNum + -1;
        FVar13.Data = local_f8.Data.AllocatorInstance.Data;
        if (local_f8.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar13.Data = (FScriptContainerElement *)L"";
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
        iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(this_00,uVar17,&local_f8);
        if (iVar9 == -1) goto LAB_141639d29;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    } while( true );
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

// FindOrCreatePlatformCVar @ 14163b7b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FConsoleVariableBase * __cdecl FindOrCreatePlatformCVar(IConsoleVariable *param_1,FName param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FConsoleVariable<bool> *pFVar4;
  FConsoleVariable<int> *pFVar5;
  FConsoleVariable<float> *pFVar6;
  FConsoleVariable<FString> *pFVar7;
  FConsoleVariableBase *pFVar8;
  
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x40))();
  if (cVar2 != '\0') {
    pFVar4 = FindOrCreateTypedPlatformCVar<bool>
                       ((FConsoleVariableExtendedData<bool> *)param_1,param_2);
    return (FConsoleVariableBase *)pFVar4;
  }
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x48))();
  if (cVar2 != '\0') {
    pFVar5 = FindOrCreateTypedPlatformCVar<int>
                       ((FConsoleVariableExtendedData<int> *)param_1,param_2);
    return (FConsoleVariableBase *)pFVar5;
  }
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x50))();
  if (cVar2 != '\0') {
    pFVar6 = FindOrCreateTypedPlatformCVar<float>
                       ((FConsoleVariableExtendedData<float> *)param_1,param_2);
    return (FConsoleVariableBase *)pFVar6;
  }
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x58))();
  if (cVar2 != '\0') {
    pFVar7 = FindOrCreateTypedPlatformCVar<FString>
                       ((FConsoleVariableExtendedData<FString> *)param_1,param_2);
    return (FConsoleVariableBase *)pFVar7;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                     ,0x5e0,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FConsoleVariableBase *)(*pcVar1)();
    return pFVar8;
  }
  return (FConsoleVariableBase *)0x0;
}

// GPUBreadcrumbsFromSharedContext @ 14163d230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGPUBreadcrumbCrashData * __cdecl
GPUBreadcrumbsFromSharedContext
          (FGPUBreadcrumbCrashData *__return_storage_ptr__,FGPUBreadcrumbsSharedContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  FGPUBreadcrumbCrashData *pFVar5;
  uint uVar6;
  FQueueData *pFVar8;
  undefined1 auStack_d8 [32];
  TPairInitializer<wchar_t_const_(&)[64],FGPUBreadcrumbCrashData::FQueueData_&&> local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FQueueData *local_88;
  FString *local_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  uchar local_48 [40];
  ulonglong local_20;
  ulonglong uVar7;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar7 = 0;
  *(undefined8 *)&__return_storage_ptr__->Queues = 0;
  *(undefined8 *)&(__return_storage_ptr__->Queues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Queues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Queues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Queues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Queues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Queues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Queues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Queues).field_0x48 = 0;
  FString::FString(&__return_storage_ptr__->SourceName,param_1->SourceName);
  FString::FString(&__return_storage_ptr__->Version,param_1->Version);
  if (param_1->NumQueues != 0) {
    do {
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      local_48[0x14] = '\0';
      local_48[0x15] = '\0';
      local_48[0x16] = '\0';
      local_48[0x17] = '\0';
      local_48[0x18] = '\0';
      local_48[0x19] = '\0';
      local_48[0x1a] = '\0';
      local_48[0x1b] = '\0';
      local_48[0x1c] = '\0';
      local_48[0x1d] = '\0';
      local_48[0x1e] = '\0';
      local_48[0x1f] = '\0';
      local_48[0x20] = '\0';
      local_48[0x21] = '\0';
      local_48[0x22] = '\0';
      local_48[0x23] = '\0';
      iVar3 = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar8 = param_1->Queues + uVar7;
      local_48[0x10] = '\0';
      local_48[0x11] = '\0';
      local_48[0x12] = '\0';
      local_48[0x13] = '\0';
      local_48[0x24] = '\0';
      local_48[0x25] = '\0';
      local_48[0x26] = '\0';
      local_48[0x27] = '\0';
      local_a8 = pFVar8->ActiveHash;
      if (local_a8 != (wchar_t *)0x0) {
        sVar4 = wcslen(local_a8);
        iVar3 = (int)sVar4;
      }
      iStack_a0 = iVar3;
      if ((iVar3 != 0x28) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Src.Len() == GetStringLen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                             ,0x109,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGPUBreadcrumbCrashData *)(*pcVar1)();
        return pFVar5;
      }
      local_78._12_4_ = uStack_9c;
      local_78.Size = iStack_a0;
      local_78.DataPtr = local_a8;
      UE::String::HexToBytes(&local_78,local_48 + 0x14);
      local_98 = pFVar8->FullHash;
      iVar3 = 0;
      if (local_98 != (wchar_t *)0x0) {
        sVar4 = wcslen(local_98);
        iVar3 = (int)sVar4;
      }
      iStack_90 = iVar3;
      if ((iVar3 != 0x28) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Src.Len() == GetStringLen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                             ,0x109,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGPUBreadcrumbCrashData *)(*pcVar1)();
        return pFVar5;
      }
      local_68._12_4_ = uStack_8c;
      local_68.Size = iStack_90;
      local_68.DataPtr = local_98;
      UE::String::HexToBytes(&local_68,local_48);
      FString::operator=(&local_58,pFVar8->Breadcrumbs);
      local_80 = &local_58;
      local_88 = pFVar8;
      TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<wchar_t_const_(&)[64],FGPUBreadcrumbCrashData::FQueueData_&&>_>
                ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_b8,(bool *)&local_88);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < param_1->NumQueues);
  }
  return __return_storage_ptr__;
}

// GPUBreadcrumbsToSharedContext @ 14163d460

void __cdecl
GPUBreadcrumbsToSharedContext
          (FGPUBreadcrumbCrashData *param_1,FGPUBreadcrumbsSharedContext *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FGPUBreadcrumbCrashData *pFVar6;
  bool bVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  FQueueData *_Dest;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_b8;
  FString local_a8;
  FGPUBreadcrumbCrashData *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FGPUBreadcrumbCrashData *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1->Version).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Version).Data.AllocatorInstance.Data;
  }
  wcsncpy(param_2->Version,pwVar10,0x3f);
  param_2->Version[0x3f] = L'\0';
  if ((param_1->SourceName).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->SourceName).Data.AllocatorInstance.Data;
  }
  wcsncpy(param_2->SourceName,pwVar10,0x3f);
  param_2->SourceName[0x3f] = L'\0';
  puVar1 = &(param_1->Queues).field_0x10;
  param_2->NumQueues = 0;
  iStack_90 = 0;
  iVar3 = *(int *)&(param_1->Queues).field_0x28;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Queues).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    local_78 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14163d55d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14163d55d:
  uVar12 = *(uint *)&(param_1->Queues).field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Queues).field_0x8 - *(int *)&(param_1->Queues).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Queues).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->Queues).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14163d660;
      uVar12 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14163d660:
  do {
    pFVar6 = local_68;
    if (*(int *)&(local_68->Queues).field_0x8 - *(int *)&(local_68->Queues).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == param_1))
    {
      return;
    }
    puVar13 = (undefined8 *)
              ((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)&pFVar6->Queues);
    if ((1 < *(int *)(puVar13 + 3)) && (*(int *)(puVar13 + 3) + -1 < 0x2000)) {
      _Dest = param_2->Queues + param_2->NumQueues;
      if (*(int *)(puVar13 + 1) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*puVar13;
      }
      wcsncpy(_Dest->QueueName,pwVar10,0x3f);
      _Dest->QueueName[0x3f] = L'\0';
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      BytesToHex((uchar *)(puVar13 + 4),0x14,&local_b8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar9.Data = local_b8.Data.AllocatorInstance.Data;
      }
      wcsncpy(_Dest->FullHash,(wchar_t *)FVar9.Data,0x3f);
      _Dest->FullHash[0x3f] = L'\0';
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      BytesToHex((uchar *)((longlong)puVar13 + 0x34),0x14,&local_a8);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar9.Data = local_a8.Data.AllocatorInstance.Data;
      }
      wcsncpy(_Dest->ActiveHash,(wchar_t *)FVar9.Data,0x3f);
      _Dest->ActiveHash[0x3f] = L'\0';
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (*(int *)(puVar13 + 3) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)puVar13[2];
      }
      wcsncpy(_Dest->Breadcrumbs,pwVar10,0x1fff);
      _Dest->Breadcrumbs[0x1fff] = L'\0';
      param_2->NumQueues = param_2->NumQueues + 1;
      if (1 < param_2->NumQueues) {
        return;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GenericPlatformMisc_GetProjectFilePathProjectDir @ 14163dab0

void __cdecl GenericPlatformMisc_GetProjectFilePathProjectDir(FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  pFVar2 = FPaths::GetProjectFilePath(&local_18);
  FPaths::GetPath(&local_28,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeFilename(&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar2 = FFileManagerGeneric::DefaultConvertToRelativePath(&local_18,(wchar_t *)FVar3.Data);
  if (&local_28 != pFVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FString::FString(&local_18,"/");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  bVar1 = FString::EndsWith(&local_28,(wchar_t *)FVar3.Data,iVar4,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    FString::AppendChars(&local_28,L"/",1);
  }
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  FString::AssignRange(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAdditionalProviderLock @ 14163e320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWindowsRecursiveMutex * __cdecl GetAdditionalProviderLock(void)

{
  atomic<int> *paVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  FWindowsRecursiveMutex *pFVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FVar5.ReferenceController = operator_new(0x38);
      if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        GAdditionalProviderLock = ___xmm_00000000000000000000000000000010;
        FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (FVar5.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FVar5.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFWindowsRecursiveMutex_UE___00_SharedPointerInternals__6B_
        ;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)(FVar5.ReferenceController + 1),4000);
        if (FVar5.ReferenceController + 1 == (TReferenceControllerBase<1> *)0x0) {
          bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FWindowsRecursiveMutex *)(*pcVar3)();
            return pFVar6;
          }
        }
        GAdditionalProviderLock.SharedReferenceCount.ReferenceController = FVar5.ReferenceController
        ;
        GAdditionalProviderLock.Object = (FWindowsRecursiveMutex *)(FVar5.ReferenceController + 1);
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      atexit(`GetAdditionalProviderLock'::__l2::
             _dynamic_atexit_destructor_for__GAdditionalProviderLock__);
      _Init_thread_footer(&_TSS0);
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  if ((*(uint *)(lVar2 + 0x1d8) & 1) == 0) {
    *(uint *)(lVar2 + 0x1d8) = *(uint *)(lVar2 + 0x1d8) | 1;
    *(undefined8 *)(lVar2 + 0x1c8) = GAdditionalProviderLock.Object;
    FVar5.ReferenceController = GAdditionalProviderLock.SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(lVar2 + 0x1d0) =
         GAdditionalProviderLock.SharedReferenceCount.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    __tlregdtor(`GetAdditionalProviderLock'::__l2::
                _dynamic_atexit_destructor_for__GAdditionalProviderLockLocal__);
  }
  return *(FWindowsRecursiveMutex **)(lVar2 + 0x1c8);
}

// GetConsoleVariableSetByName @ 14163f1b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

wchar_t * __cdecl GetConsoleVariableSetByName(EConsoleVariableFlags param_1)

{
  EConsoleVariableFlags EVar1;
  wchar_t *pwVar2;
  
  EVar1 = param_1 & ECVF_SetByMask;
  if (0x8000000 < (int)EVar1) {
    if (0xc000000 < (int)EVar1) {
      if (EVar1 == ECVF_SetByCommandline) {
        return L"Commandline";
      }
      if (EVar1 != ECVF_SetByCode) {
        pwVar2 = L"Console";
        if (EVar1 != ECVF_SetByConsole) {
          pwVar2 = L"<UNKNOWN>";
        }
        return pwVar2;
      }
      return L"Code";
    }
    if (EVar1 == ECVF_SetByPreview) {
      return L"Preview";
    }
    if (EVar1 != ECVF_SetByGameOverride) {
      if (EVar1 != ECVF_SetByConsoleVariablesIni) {
        pwVar2 = L"<UNKNOWN>";
        if (EVar1 == ECVF_SetByHotfix) {
          pwVar2 = L"Hotfix";
        }
        return pwVar2;
      }
      return L"ConsoleVariablesIni";
    }
    return L"GameOverride";
  }
  if (EVar1 == ECVF_SetByPluginHighPriority) {
    return L"PluginHighPriority";
  }
  if (0x4000000 < (int)EVar1) {
    if (EVar1 == ECVF_SetBySystemSettingsIni) {
      return L"SystemSettingsIni";
    }
    if (EVar1 != ECVF_SetByPluginLowPriority) {
      pwVar2 = L"<UNKNOWN>";
      if (EVar1 == ECVF_SetByDeviceProfile) {
        pwVar2 = L"DeviceProfile";
      }
      return pwVar2;
    }
    return L"PluginLowPriority";
  }
  if (EVar1 == ECVF_SetByProjectSetting) {
    return L"ProjectSetting";
  }
  if (EVar1 != ECVF_Default) {
    if (EVar1 != ECVF_SetByScalability) {
      pwVar2 = L"<UNKNOWN>";
      if (EVar1 == ECVF_SetByGameSetting) {
        pwVar2 = L"GameSetting";
      }
      return pwVar2;
    }
    return L"Scalability";
  }
  return L"Constructor";
}

// GetConsoleVariableSetByValue @ 14163f2f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __cdecl GetConsoleVariableSetByValue(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ushort uVar3;
  ushort uVar4;
  EConsoleVariableFlags EVar5;
  wchar_t *pwVar6;
  ushort *puVar7;
  
  pwVar6 = L"Constructor";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324874) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_Default;
      }
    }
    if (((wVar1 | wVar2) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_Default;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Scalability";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324880) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByScalability;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByScalability;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"GameSetting";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa832488c) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByGameSetting;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByGameSetting;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"ProjectSetting";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324898) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByProjectSetting;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByProjectSetting;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"SystemSettingsIni";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa83248a8) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetBySystemSettingsIni;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetBySystemSettingsIni;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"PluginLowPriority";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa83248bc) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByPluginLowPriority;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByPluginLowPriority;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"DeviceProfile";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa83248d0) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByDeviceProfile;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByDeviceProfile;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"PluginHighPriority";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa83248e0) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByPluginHighPriority;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByPluginHighPriority;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"GameOverride";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa83248f4) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByGameOverride;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByGameOverride;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"ConsoleVariablesIni";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324904) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByConsoleVariablesIni;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByConsoleVariablesIni;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Hotfix";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324918) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByHotfix;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByHotfix;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Preview";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324920) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByPreview;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByPreview;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Commandline";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa8324928) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return ECVF_SetByCommandline;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        return ECVF_SetByCommandline;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  puVar7 = (ushort *)&u_Code;
  while( true ) {
    while( true ) {
      uVar3 = *(ushort *)((longlong)(param_1 + -0xa8324934) + (longlong)puVar7);
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      if (uVar3 != uVar4) break;
      if (uVar3 == 0) {
        return ECVF_SetByCode;
      }
    }
    if (((uVar4 | uVar3) & 0xff80) != 0) break;
    if (""[uVar3] != ""[uVar4]) {
LAB_14163f889:
      pwVar6 = L"Console";
      do {
        while( true ) {
          wVar1 = *(wchar_t *)((longlong)(param_1 + -0xa832493c) + (longlong)pwVar6);
          wVar2 = *pwVar6;
          pwVar6 = pwVar6 + 1;
          if (wVar1 != wVar2) break;
          if (wVar1 == L'\0') {
            return ECVF_SetByConsole;
          }
        }
        if (((wVar2 | wVar1) & 0xff80U) != 0) {
          EVar5 = ECVF_SetByMask;
          if (wVar1 == wVar2) {
            EVar5 = ECVF_SetByConsole;
          }
          return EVar5;
        }
      } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
      return ECVF_SetByMask;
    }
  }
  if (uVar3 == uVar4) {
    return ECVF_SetByCode;
  }
  goto LAB_14163f889;
}

// GetPlatformToDeviceProfileMapping @ 141644b50

FName __cdecl ConsoleVariablePlatformMapping::GetPlatformToDeviceProfileMapping(FName param_1)

{
  TTuple<FName,FName> *pTVar1;
  FName in_RDX;
  
  pTVar1 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                   *)&PlatformToDeviceProfileMap,in_RDX);
  if (pTVar1 != (TTuple<FName,FName> *)0x0) {
    *(undefined8 *)param_1 = *(undefined8 *)&pTVar1->field_0x8;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// GetPreviewFlagsOfCvar @ 141645890

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __cdecl GetPreviewFlagsOfCvar(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  longlong *plVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,param_1,0);
  if (plVar4 != (longlong *)0x0) {
    EVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    return EVar3 & ECVF_Preview;
  }
  return ECVF_Default;
}

// GetRecoveryServerName @ 141645c20

FString * __cdecl RecoveryService::GetRecoveryServerName(FString *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGuid::NewGuid(&RecoverySessionGuid);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&RecoverySessionGuid,__return_storage_ptr__,Digits);
  return __return_storage_ptr__;
}

// GetShaderPlatformToPlatformMapping @ 141645e50

FName __cdecl ConsoleVariablePlatformMapping::GetShaderPlatformToPlatformMapping(int param_1)

{
  int iVar1;
  uint in_register_0000000c;
  FName FVar2;
  uint in_EDX;
  longlong lVar3;
  
  FVar2.Number = in_register_0000000c;
  FVar2.ComparisonIndex.Value = param_1;
  if (ShaderPlatformToPlatformMap._8_4_ != ShaderPlatformToPlatformMap._52_4_) {
    lVar3 = 0x154b76f08;
    if (ShaderPlatformToPlatformMap._64_8_ != 0) {
      lVar3 = ShaderPlatformToPlatformMap._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(ShaderPlatformToPlatformMap._72_4_ - 1 & in_EDX) * 4);
    while (iVar1 != -1) {
      lVar3 = ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar1 * 0x14) == in_EDX) {
        if (lVar3 != 0) {
          *(undefined8 *)FVar2 = *(undefined8 *)(lVar3 + 4);
          return FVar2;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  *(undefined8 *)FVar2 = 0;
  return FVar2;
}

// InternalCreateDirectoryTree @ 141649a70

bool __cdecl InternalCreateDirectoryTree(IPlatformFile *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  DWORD dwErrCode;
  int iVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  FString local_18;
  
  pwVar8 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*param_1 + 0x120))(param_1,pwVar7);
  if (cVar3 == '\0') {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    pFVar6 = pFVar2 + (longlong)iVar1 * 2;
    do {
      if (pFVar6 == pFVar2) goto LAB_141649b59;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x2f);
    iVar9 = (int)((longlong)pFVar6 - (longlong)pFVar2 >> 1);
    if (1 < iVar9 + 1U) {
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if (iVar9 < iVar5) {
        iVar5 = iVar9;
      }
      iVar9 = 0;
      if (0 < iVar5) {
        iVar9 = iVar5;
      }
      pFVar6 = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        pFVar6 = pFVar2;
      }
      FString::ConstructFromPtrSize(&local_18,(wchar_t *)pFVar6,iVar9);
      bVar4 = InternalCreateDirectoryTree(param_1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return false;
      }
      if ((param_2->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*param_1 + 0x120))(param_1,pwVar7);
      if (cVar3 != '\0') goto LAB_141649b8e;
    }
LAB_141649b59:
    dwErrCode = FWindowsPlatformMisc::GetLastError();
    if ((param_2->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*param_1 + 0x118))(param_1,pwVar8);
    if (cVar3 == '\0') {
      FWindowsPlatformMisc::SetLastError(dwErrCode);
    }
  }
  else {
LAB_141649b8e:
    cVar3 = '\x01';
  }
  return (bool)cVar3;
}

// InternalGetProcessorGroupDesc @ 141649bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FProcessorGroupDesc * __cdecl
InternalGetProcessorGroupDesc(FProcessorGroupDesc *__return_storage_ptr__)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar2 = _UNK_15060db28;
  uVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  __return_storage_ptr__->NumProcessorGroups = 1;
  __return_storage_ptr__->ThreadAffinities[0] = uVar1;
  __return_storage_ptr__->ThreadAffinities[1] = uVar2;
  __return_storage_ptr__->ThreadAffinities[2] = uVar1;
  __return_storage_ptr__->ThreadAffinities[3] = uVar2;
  __return_storage_ptr__->ThreadAffinities[4] = uVar1;
  __return_storage_ptr__->ThreadAffinities[5] = uVar2;
  __return_storage_ptr__->ThreadAffinities[6] = uVar1;
  __return_storage_ptr__->ThreadAffinities[7] = uVar2;
  __return_storage_ptr__->ThreadAffinities[8] = uVar1;
  __return_storage_ptr__->ThreadAffinities[9] = uVar2;
  __return_storage_ptr__->ThreadAffinities[10] = uVar1;
  __return_storage_ptr__->ThreadAffinities[0xb] = uVar2;
  __return_storage_ptr__->ThreadAffinities[0xc] = uVar1;
  __return_storage_ptr__->ThreadAffinities[0xd] = uVar2;
  __return_storage_ptr__->ThreadAffinities[0xe] = uVar1;
  __return_storage_ptr__->ThreadAffinities[0xf] = uVar2;
  return __return_storage_ptr__;
}

// IsGoodHelpString @ 141649e10

bool __cdecl IsGoodHelpString(wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("In",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x74,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  wVar1 = *param_1;
  if (wVar1 != L'\0') {
    do {
      param_1 = param_1 + 1;
      bVar3 = true;
      if (((ushort)wVar1 < 0x21) && ((0x100002600U >> ((ulonglong)(ushort)wVar1 & 0x3f) & 1) != 0))
      {
        bVar3 = false;
      }
      wVar1 = *param_1;
    } while (wVar1 != L'\0');
    return bVar3;
  }
  return false;
}

// LexToString @ 14164b040

wchar_t * __cdecl LexToString(EBuildConfiguration param_1)

{
  if (param_1 == Debug) {
    return L"Debug";
  }
  if (param_1 == DebugGame) {
    return L"DebugGame";
  }
  if (param_1 == Development) {
    return L"Development";
  }
  if (param_1 != Shipping) {
    if (param_1 != Test) {
      return L"Unknown";
    }
    return L"Test";
  }
  return L"Shipping";
}

// LexToString @ 14164b0a0

wchar_t * __cdecl LexToString(EBuildTargetType param_1)

{
  if (param_1 == Game) {
    return L"Game";
  }
  if (param_1 == Server) {
    return L"Server";
  }
  if (param_1 == Client) {
    return L"Client";
  }
  if (param_1 != Editor) {
    if (param_1 != Program) {
      return L"Unknown";
    }
    return L"Program";
  }
  return L"Editor";
}

// LexToString @ 14164b100

wchar_t * __cdecl LexToString(ENetworkConnectionStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Unknown) {
    if (param_1 == Disabled) {
      return L"Disabled";
    }
    if (param_1 == Local) {
      return L"Local";
    }
    if (param_1 == Connected) {
      return L"Connected";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x1cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Unknown";
}

// LexToString @ 14164b180

wchar_t * __cdecl LexToString(ENetworkConnectionType param_1)

{
  switch(param_1) {
  case None:
    return L"None";
  case AirplaneMode:
    return L"AirplaneMode";
  case Cell:
    return L"Cell";
  case WiFi:
    return L"WiFi";
  case WiMAX:
    return L"WiMAX";
  case Bluetooth:
    return L"Bluetooth";
  case Ethernet:
    return L"Ethernet";
  default:
    return L"Unknown";
  }
}

// LexToString @ 14164b210

wchar_t * __cdecl LexToString(Type param_1)

{
  switch(param_1) {
  case No:
    return L"No";
  case Yes:
    return L"Yes";
  case YesAll:
    return L"YesAll";
  case NoAll:
    return L"NoAll";
  case Cancel:
    return L"Cancel";
  case Ok:
    return L"Ok";
  case Retry:
    return L"Retry";
  case Continue:
    return L"Continue";
  default:
    return L"Unknown";
  }
}

// LexTryParseString @ 14164b2a0

bool __cdecl LexTryParseString(EBuildConfiguration *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ushort *puVar7;
  
  pwVar6 = L"Debug";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_2 + -0xa8322798) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        *param_1 = Debug;
        return true;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        *param_1 = Debug;
        return true;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"DebugGame";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_2 + -0xa83227a0) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        *param_1 = DebugGame;
        return true;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        *param_1 = DebugGame;
        return true;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Development";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_2 + -0xa83227ac) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        *param_1 = Development;
        return true;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        *param_1 = Development;
        return true;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  pwVar6 = L"Shipping";
  do {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)(param_2 + -0xa83227b8) + (longlong)pwVar6);
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        *param_1 = Shipping;
        return true;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) {
      if (wVar1 == wVar2) {
        *param_1 = Shipping;
        return true;
      }
      break;
    }
  } while (""[(ushort)wVar1] == ""[(ushort)wVar2]);
  puVar7 = (ushort *)&u_Test;
  do {
    while( true ) {
      uVar3 = *(ushort *)((longlong)(param_2 + -0xa83227c4) + (longlong)puVar7);
      uVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      if (uVar3 != uVar4) break;
      if (uVar3 == 0) {
        *param_1 = Test;
        return true;
      }
    }
    if (((uVar4 | uVar3) & 0xff80) != 0) {
      if (uVar3 == uVar4) {
        *param_1 = Test;
        return true;
      }
      break;
    }
  } while (""[uVar3] == ""[uVar4]);
  pwVar6 = L"Unknown";
  while( true ) {
    while( true ) {
      wVar1 = *(wchar_t *)((longlong)pwVar6 + (longlong)(param_2 + -0xa830fe90));
      wVar2 = *pwVar6;
      pwVar6 = pwVar6 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        bVar5 = true;
        goto LAB_14164b538;
      }
    }
    if (((wVar2 | wVar1) & 0xff80U) != 0) break;
    if (""[(ushort)wVar1] != ""[(ushort)wVar2]) {
      bVar5 = false;
LAB_14164b538:
      *param_1 = Unknown;
      return bVar5;
    }
  }
  bVar5 = wVar1 == wVar2;
  goto LAB_14164b538;
}

// LexTryParseString @ 14164b560

bool __cdecl LexTryParseString(EBuildTargetType *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = wcscmp(param_2,L"Editor");
  if (iVar1 == 0) {
    *param_1 = Editor;
    return true;
  }
  iVar1 = wcscmp(param_2,L"Game");
  if (iVar1 == 0) {
    *param_1 = Game;
    return true;
  }
  iVar1 = wcscmp(param_2,L"Server");
  if (iVar1 == 0) {
    *param_1 = Server;
    return true;
  }
  iVar1 = wcscmp(param_2,L"Client");
  if (iVar1 == 0) {
    *param_1 = Client;
    return true;
  }
  iVar1 = wcscmp(param_2,L"Program");
  if (iVar1 == 0) {
    *param_1 = Program;
    return true;
  }
  iVar1 = wcscmp(param_2,L"Unknown");
  *param_1 = Unknown;
  return iVar1 == 0;
}

// MakeEngineDir @ 14164d170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl MakeEngineDir(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FPlatformFileManager *this;
  IPlatformFile *pIVar3;
  wchar_t *pwVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FString local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  FString::FString(&local_58,L"../../../Engine/");
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  this = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this);
  pwVar4 = FWindowsPlatformProcess::BaseDir();
  iVar8 = local_58.Data.ArrayNum;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 1;
  }
  pTVar5 = &FString::FString(&local_28,pwVar4)->Data;
  if ((pTVar5->ArrayNum != 0) || (iVar7 = 1, iVar8 == 0)) {
    iVar7 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar5,iVar7 + iVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar8 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  FString::PathAppend((FString *)&local_38,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_38,10 - (uint)(local_38.ArrayNum != 0));
  FString::PathAppend((FString *)&local_48,L"Binaries",8);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.ArrayNum != 0) {
    FVar6.Data = local_48.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar3 + 0x118))(pIVar3,FVar6.Data);
  if (cVar2 == '\0') {
    if (GForeignEngineDir != (wchar_t *)0x0) {
      pTVar5 = &FString::FString(&local_28,GForeignEngineDir)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_38,pTVar5,10 - (uint)(pTVar5->ArrayNum != 0));
      FString::PathAppend((FString *)&local_38,L"Binaries",8);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      local_48.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = local_38.ArrayNum;
      local_48.ArrayMax = local_38.ArrayMax;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.ArrayNum != 0) {
        FVar6.Data = local_48.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x118))(pIVar3,FVar6.Data);
      if (cVar2 != '\0') {
        FString::operator=(param_1,GForeignEngineDir);
        goto LAB_14164d38a;
      }
    }
    if (2 < (byte)LogGenericPlatformMisc._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
    }
  }
  if (param_1 != &local_58) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_58.Data.ArrayNum;
    iVar8 = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    (param_1->Data).ArrayMax = iVar8;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
LAB_14164d38a:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// MakePlatformKey @ 14164d440

FName __cdecl MakePlatformKey(FName param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString *in_R8;
  bool bVar6;
  FName local_res10;
  undefined4 local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (in_R8->Data).ArrayNum;
  local_res18 = 0;
  local_res10 = (FName)param_2;
  if (iVar1 == GSpecialDPNameForPremadePlatformKey.Data.ArrayNum) {
    if (iVar1 < 2) goto LAB_14164d592;
    iVar2 = StricmpImpl<wchar_t,wchar_t>
                      ((wchar_t *)(in_R8->Data).AllocatorInstance.Data,
                       (wchar_t *)GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data);
    bVar6 = iVar2 == 0;
  }
  else {
    bVar6 = GSpecialDPNameForPremadePlatformKey.Data.ArrayNum + iVar1 == 1;
  }
  if ((!bVar6) && (param_2 != (FString *)0x0)) {
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    bVar6 = iVar2 == 0;
    if (bVar6) {
      pFVar3 = FName::ToString(&local_res10,&local_38);
    }
    else {
      pFVar3 = FString::FString(&local_28,in_R8);
    }
    pFVar4 = FName::ToString(&local_res10,&local_48);
    FString::ConcatFC(&local_58,pFVar4,L"/");
    FString::ConcatFF(&local_68,&local_58,pFVar3);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FName::FName((FName *)param_1,(wchar_t *)FVar5.Data);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      return param_1;
    }
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return param_1;
    }
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    return param_1;
  }
LAB_14164d592:
  *(FString **)param_1 = param_2;
  return param_1;
}

// MakeSessionName @ 14164d5c0

FString * __cdecl RecoveryService::MakeSessionName(FString *__return_storage_ptr__)

{
  FDateTime this;
  FString local_28;
  FString local_18;
  
  this = FDateTime::UtcNow();
  FDateTime::ToString((FDateTime *)this.Ticks,&local_18);
  LOCK();
  SessionNum = (TAtomic<int>)((int)SessionNum + 1);
  UNLOCK();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FGuid::NewGuid(&RecoverySessionGuid);
    _Init_thread_footer(&::_TSS0);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(&RecoverySessionGuid,&local_28,Digits);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%d_%s_%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RegisterPlatformToDeviceProfileMapping @ 141654640

void __cdecl
ConsoleVariablePlatformMapping::RegisterPlatformToDeviceProfileMapping(FName param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,FName> *pTVar5;
  FName FVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  TPairInitializer<FName_const_&,FName_const_&> local_res18;
  FName *local_58;
  FName *local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8 = param_1;
  local_res10 = param_2;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (PlatformToDeviceProfileMap._8_4_ != PlatformToDeviceProfileMap._52_4_) {
    lVar7 = 0x154b76f58;
    if (PlatformToDeviceProfileMap._64_8_ != 0) {
      lVar7 = PlatformToDeviceProfileMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar7 + (ulonglong)
                                  (PlatformToDeviceProfileMap._72_4_ - 1 & param_1.Number + uVar4) *
                                  4); iVar1 != -1;
        iVar1 = *(int *)(PlatformToDeviceProfileMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(FName *)(PlatformToDeviceProfileMap._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        pTVar5 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)&PlatformToDeviceProfileMap,local_res8);
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
        if (pTVar5 != (TTuple<FName,FName> *)0x0) {
          FVar6.ComparisonIndex.Value = *(uint *)&pTVar5->field_0x8;
          FVar6.Number = *(uint *)&pTVar5->field_0xc;
        }
        if (FVar6 != local_res10) {
          ::FName::ToString(&local_res10,&local_28);
          ::FName::ToString(&local_res8,&local_38);
          pTVar5 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                           *)&PlatformToDeviceProfileMap,local_res8);
          if (pTVar5 == (TTuple<FName,FName> *)0x0) {
            local_res18.Value = (FName *)0x0;
          }
          else {
            local_res18.Value = *(FName **)&pTVar5->field_0x8;
          }
          ::FName::ToString((FName *)&local_res18.Value,&local_48);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!PlatformToDeviceProfileMap.Contains(PlatformName) || PlatformToDeviceProfileMap.FindRef(PlatformName) == DeviceProfileName"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                             ,0x1470,
                             L"There\'s already a DP (%s) being used for platform %s, when setting mapping to %s"
                            );
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        break;
      }
    }
  }
  local_58 = &local_res8;
  local_50 = &local_res10;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&PlatformToDeviceProfileMap,&local_res18,(bool *)&local_58);
  return;
}

// RegisterShaderPlatformToPlatformMapping @ 141654860

void __cdecl
ConsoleVariablePlatformMapping::RegisterShaderPlatformToPlatformMapping(int param_1,FName param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FName FVar6;
  uint local_res8 [2];
  FName local_res10;
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  uint *local_58;
  FName *local_50;
  FString local_48;
  FString local_38;
  
  local_res8[0] = param_1;
  local_res10 = param_2;
  if (ShaderPlatformToPlatformMap._8_4_ != ShaderPlatformToPlatformMap._52_4_) {
    lVar5 = 0x154b76f08;
    if (ShaderPlatformToPlatformMap._64_8_ != 0) {
      lVar5 = ShaderPlatformToPlatformMap._64_8_;
    }
    lVar1 = (ulonglong)(ShaderPlatformToPlatformMap._72_4_ - 1 & param_1) * 4;
    for (iVar2 = *(int *)(lVar1 + lVar5); iVar2 != -1;
        iVar2 = *(int *)(ShaderPlatformToPlatformMap._0_8_ + 0xc + (longlong)iVar2 * 0x14)) {
      if (*(int *)(ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar2 * 0x14) == param_1) {
        lVar5 = 0x154b76f08;
        if (ShaderPlatformToPlatformMap._64_8_ != 0) {
          lVar5 = ShaderPlatformToPlatformMap._64_8_;
        }
        iVar2 = *(int *)(lVar1 + lVar5);
        goto joined_r0x0001416548fc;
      }
    }
  }
  goto LAB_141654a64;
joined_r0x0001416548fc:
  if (iVar2 == -1) goto LAB_141654919;
  lVar5 = ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar2 * 0x14;
  if (*(int *)(ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar2 * 0x14) == param_1) {
    if (lVar5 != 0) {
      FVar6 = *(FName *)(lVar5 + 4);
      goto LAB_14165491b;
    }
    goto LAB_141654919;
  }
  iVar2 = *(int *)(lVar5 + 0xc);
  goto joined_r0x0001416548fc;
LAB_141654919:
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
LAB_14165491b:
  if (FVar6 != param_2) {
    ::FName::ToString(&local_res10,&local_38);
    if (ShaderPlatformToPlatformMap._8_4_ != ShaderPlatformToPlatformMap._52_4_) {
      lVar5 = 0x154b76f08;
      if (ShaderPlatformToPlatformMap._64_8_ != 0) {
        lVar5 = ShaderPlatformToPlatformMap._64_8_;
      }
      iVar2 = *(int *)(lVar5 + (ulonglong)(ShaderPlatformToPlatformMap._72_4_ - 1 & local_res8[0]) *
                               4);
      while (iVar2 != -1) {
        lVar5 = ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar2 * 0x14;
        if (*(uint *)(ShaderPlatformToPlatformMap._0_8_ + (longlong)iVar2 * 0x14) == local_res8[0])
        {
          if (lVar5 != 0) {
            local_res18.Value = *(FName **)(lVar5 + 4);
            goto LAB_1416549d7;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0xc);
      }
    }
    local_res18.Value = (FName *)0x0;
LAB_1416549d7:
    ::FName::ToString((FName *)&local_res18.Value,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShaderPlatformToPlatformMap.Contains(ShaderPlatform) || ShaderPlatformToPlatformMap.FindRef(ShaderPlatform) == PlatformName"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x1467,
                       L"There\'s already a platform (%s) targeting ShaderPlatform %d, when setting mapping to %s"
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_141654a64:
  local_58 = local_res8;
  local_50 = &local_res10;
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,FName_const_&>_>
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&ShaderPlatformToPlatformMap,&local_res18,(bool *)&local_58);
  return;
}

// SetUnsetCVar @ 14165ebd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
SetUnsetCVar(TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
             *param_1,wchar_t *param_2,FOutputDevice *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  EConsoleVariableFlags EVar6;
  FString *pFVar7;
  longlong lVar8;
  IConsoleVariable *this;
  FName *pFVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FName local_res8;
  wchar_t *local_res10;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  uint local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  
  local_res10 = param_2;
  FParse::Token(&local_b8,&local_res10,false);
  pFVar17 = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  iVar14 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar14 = iVar12;
  }
  if (iVar14 == 0) {
    pwVar15 = 
    L"Usage: SetCVar [Platform@]CVarName Value [-setby=Priority] [-tag=SomeTag] [-replacecurrent]";
    if (!param_4) {
      pwVar15 = L"Usage: UnsetCVar [Platform@]CVarName [-setby=Priority] [-tag=SomeTag]";
    }
    FOutputDevice::Log(param_3,pwVar15);
    FOutputDevice::Log(param_3,L"   Priority can be one of the following (default is Console):");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::LogfImpl(param_3,L"      %s%s");
    FOutputDevice::Log(param_3,
                       L"      [*] Array type priorities, used for dynamic setting/unsetting");
    FOutputDevice::Log(param_3,
                       L"   Tag should be set for the ones marked as Array types, for ability to set and unset"
                      );
  }
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  iVar3 = FString::Find(&local_b8,L"@",1,IgnoreCase,FromStart,-1);
  iVar14 = 0;
  if (0 < iVar3) {
    pFVar7 = FString::Mid(&local_b8,&local_98,0,iVar3);
    if (&local_c8 != pFVar7) {
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_c8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    iVar4 = FString::Find(&local_c8,L"/",1,IgnoreCase,FromStart,-1);
    if (iVar4 != -1) {
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FString::FString(&local_68,L"/");
      FString::Split(&local_c8,&local_68,&local_d8,&local_a8);
      if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar13.Data = local_d8.Data.AllocatorInstance.Data;
      }
      FString::operator=(&local_c8,(wchar_t *)FVar13.Data);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    FString::RightChop(&local_b8,&local_d8,iVar3 + 1);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_d8.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_d8.Data.ArrayMax;
  }
  if (local_b8.Data.ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    iVar12 = local_b8.Data.ArrayNum + -1;
    pwVar15 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar15);
  iVar12 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                       *)param_1,uVar5,&local_b8);
  if ((((iVar12 == -1) || (lVar8 = (longlong)iVar12 * 0x20 + *(longlong *)param_1, lVar8 == 0)) ||
      (plVar10 = *(longlong **)(lVar8 + 0x10), plVar10 == (longlong *)0x0)) ||
     (this = (IConsoleVariable *)(**(code **)(*plVar10 + 0x38))(), this == (IConsoleVariable *)0x0))
  {
    pwVar15 = L"No CVar named %s";
LAB_14165f1da:
    FOutputDevice::LogfImpl(param_3,pwVar15);
    goto LAB_14165f1e5;
  }
  iVar12 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar12 = iVar14;
  }
  if (iVar12 != 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar13.Data = local_a8.Data.AllocatorInstance.Data;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x100);
    FString::FString(&local_98,(wchar_t *)FVar13.Data);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar13.Data = local_c8.Data.AllocatorInstance.Data;
    }
    pFVar9 = FName::FName((FName *)&local_68,(wchar_t *)FVar13.Data);
    plVar10 = (longlong *)(*pcVar1)(this,local_58,*pFVar9,&local_98);
    this = (IConsoleVariable *)*plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (this == (IConsoleVariable *)0x0) {
      pwVar15 = L"Failed to get CVar for platform %s";
      goto LAB_14165f1da;
    }
  }
  if (param_4) {
    pFVar7 = FParse::Token(&local_d8,&local_res10,false);
    iVar14 = 0;
    if (&local_48 != pFVar7) {
      pFVar17 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = (pFVar7->Data).ArrayNum;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    bVar2 = FParse::Param(local_res10,L"-replacecurrent");
    if (!bVar2) goto LAB_14165f106;
    local_80 = 0;
    local_78 = 2;
    pFVar16 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar16 = pFVar17;
    }
    local_84 = 1;
    local_70 = 0x1000000;
    local_74 = 0xf000000;
    local_88 = (**(code **)(*(longlong *)this + 0x18))(this);
    lVar8 = *(longlong *)this;
    local_88 = local_88 & 0xff000000;
    uVar11 = (**(code **)(lVar8 + 0xa8))(this,&local_d8,&local_88);
    (**(code **)(lVar8 + 0xb0))(this,pFVar16,uVar11);
  }
  else {
LAB_14165f106:
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    EVar6 = ECVF_SetByConsole;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    bVar2 = FParse::Value(local_res10,L"-setby=",&local_d8,true,(wchar_t **)0x0);
    if (bVar2) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar13.Data = local_d8.Data.AllocatorInstance.Data;
      }
      EVar6 = GetConsoleVariableSetByValue((wchar_t *)FVar13.Data);
    }
    bVar2 = FParse::Value(local_res10,L"-tag=",&local_d8,true,(wchar_t **)0x0);
    if (bVar2) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar13.Data = local_d8.Data.AllocatorInstance.Data;
      }
      FName::FName(&local_res8,(wchar_t *)FVar13.Data);
    }
    if (param_4) {
      pFVar16 = (FScriptContainerElement *)L"";
      if (iVar14 != 0) {
        pFVar16 = pFVar17;
      }
      IConsoleVariable::Set<wchar_t_const_*>(this,(wchar_t *)pFVar16,EVar6,local_res8);
    }
    else {
      (**(code **)(*(longlong *)this + 0xb8))(this,EVar6);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
LAB_14165f1e5:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// TokenizeSessionName @ 141664590

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
RecoveryService::TokenizeSessionName
          (FString *param_1,FString *param_2,int *param_3,FString *param_4,FDateTime *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *_Str;
  FString local_48;
  FRegexPattern local_38;
  FRegexMatcher local_28;
  
  ::FString::FString(&local_48,L"(^[A-Z0-9]+)_([0-9])+_([0-9\\.-]+)_(.+)");
  FRegexPattern::FRegexPattern(&local_38,&local_48,None);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&local_38,param_1);
  bVar2 = FRegexMatcher::FindNext(&local_28);
  if (bVar2) {
    if (param_2 != (FString *)0x0) {
      pFVar4 = FRegexMatcher::GetCaptureGroup(&local_28,&local_48,1);
      if (param_2 != pFVar4) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar4->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_3 != (int *)0x0) {
      pFVar4 = FRegexMatcher::GetCaptureGroup(&local_28,&local_48,2);
      if ((pFVar4->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      iVar3 = _wtoi(_Str);
      *param_3 = iVar3;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_4 != (FString *)0x0) {
      pFVar4 = FRegexMatcher::GetCaptureGroup(&local_28,&local_48,4);
      if (param_4 != pFVar4) {
        pFVar1 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_4->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_4->Data).ArrayNum = (pFVar4->Data).ArrayNum;
        (param_4->Data).ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_5 == (FDateTime *)0x0) {
      bVar2 = true;
    }
    else {
      pFVar4 = FRegexMatcher::GetCaptureGroup(&local_28,&local_48,3);
      bVar2 = FDateTime::Parse(pFVar4,param_5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Implementation.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// UnsetCVarTag @ 141668d00

void __cdecl UnsetCVarTag(wchar_t *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FName *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *local_res8;
  FName local_res18;
  FString local_18;
  
  local_res8 = param_1;
  FParse::Token(&local_18,&local_res8,false);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x130);
  pFVar4 = FName::FName(&local_res18,(wchar_t *)FVar5.Data);
  (*pcVar1)(pIVar2,*pFVar4,0xff000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// wprintf @ 14166b720

int __cdecl wprintf(wchar_t *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong64 *puVar3;
  undefined1 local_res10 [24];
  
  uVar2 = __acrt_iob_func(1);
  puVar3 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfwprintf(*puVar3,uVar2,param_1,0,local_res10);
  return iVar1;
}

// AdditionalCrashContextDelegate'' @ 1503387f0

void __cdecl
`dynamic_atexit_destructor_for_'FGenericCrashContext::AdditionalCrashContextDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGenericCrashContext::AdditionalCrashContextDelegate._8_8_,
             FGenericCrashContext::AdditionalCrashContextDelegate._16_4_);
  if (FGenericCrashContext::AdditionalCrashContextDelegate._8_8_ != 0) {
    FMemory::Free((void *)FGenericCrashContext::AdditionalCrashContextDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGenericCrashContext::AdditionalCrashContextDelegate);
  return;
}

// LogFilenameLock'' @ 150338830

void __cdecl `dynamic_atexit_destructor_for_'FGenericPlatformOutputDevices::LogFilenameLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150338837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FGenericPlatformOutputDevices::LogFilenameLock);
  return;
}

// OnEngineDataReset'' @ 150338850

void __cdecl `dynamic_atexit_destructor_for_'FGenericCrashContext::OnEngineDataReset__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGenericCrashContext::OnEngineDataReset._8_8_,
             FGenericCrashContext::OnEngineDataReset._16_4_);
  if (FGenericCrashContext::OnEngineDataReset._8_8_ != 0) {
    FMemory::Free((void *)FGenericCrashContext::OnEngineDataReset._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGenericCrashContext::OnEngineDataReset);
  return;
}

// OnEngineDataSet'' @ 150338890

void __cdecl `dynamic_atexit_destructor_for_'FGenericCrashContext::OnEngineDataSet__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGenericCrashContext::OnEngineDataSet._8_8_,
             FGenericCrashContext::OnEngineDataSet._16_4_);
  if (FGenericCrashContext::OnEngineDataSet._8_8_ != 0) {
    FMemory::Free((void *)FGenericCrashContext::OnEngineDataSet._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGenericCrashContext::OnEngineDataSet);
  return;
}

// OnGameDataReset'' @ 1503388d0

void __cdecl `dynamic_atexit_destructor_for_'FGenericCrashContext::OnGameDataReset__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGenericCrashContext::OnGameDataReset._8_8_,
             FGenericCrashContext::OnGameDataReset._16_4_);
  if (FGenericCrashContext::OnGameDataReset._8_8_ != 0) {
    FMemory::Free((void *)FGenericCrashContext::OnGameDataReset._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGenericCrashContext::OnGameDataReset);
  return;
}

// OnGameDataSet'' @ 150338910

void __cdecl `dynamic_atexit_destructor_for_'FGenericCrashContext::OnGameDataSet__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGenericCrashContext::OnGameDataSet._8_8_,FGenericCrashContext::OnGameDataSet._16_4_);
  if (FGenericCrashContext::OnGameDataSet._8_8_ != 0) {
    FMemory::Free((void *)FGenericCrashContext::OnGameDataSet._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGenericCrashContext::OnGameDataSet);
  return;
}

// `dynamic_atexit_destructor_for_'CPUTimeDumpCommand'' @ 150338950

void __cdecl _dynamic_atexit_destructor_for__CPUTimeDumpCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CPUTimeDumpCommand._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503389b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CPUTimeDumpCommand._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowStaticLighting'' @ 1503389d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowStaticLighting__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarAllowStaticLighting._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarAllowStaticLighting._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowStaticLightingInWorldPartitionMaps'' @ 150338a50

void __cdecl _dynamic_atexit_destructor_for__CVarAllowStaticLightingInWorldPartitionMaps__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarAllowStaticLightingInWorldPartitionMaps._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarAllowStaticLightingInWorldPartitionMaps._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAmbientOcclusionRadiusScale'' @ 150338ad0

void __cdecl _dynamic_atexit_destructor_for__CVarAmbientOcclusionRadiusScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarAmbientOcclusionRadiusScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarAmbientOcclusionRadiusScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAmbientOcclusionStaticFraction'' @ 150338b50

void __cdecl _dynamic_atexit_destructor_for__CVarAmbientOcclusionStaticFraction__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarAmbientOcclusionStaticFraction._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarAmbientOcclusionStaticFraction._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAndroidOverrideExternalTextureSupport'' @ 150338bd0

void __cdecl _dynamic_atexit_destructor_for__CVarAndroidOverrideExternalTextureSupport__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarAndroidOverrideExternalTextureSupport._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarAndroidOverrideExternalTextureSupport._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBloomQuality'' @ 150338c50

void __cdecl _dynamic_atexit_destructor_for__CVarBloomQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarBloomQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarBloomQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheHandleForPakFilesOnly'' @ 150338cd0

void __cdecl _dynamic_atexit_destructor_for__CVarCacheHandleForPakFilesOnly__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarCacheHandleForPakFilesOnly._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarCacheHandleForPakFilesOnly._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCheckSRVTransitions'' @ 150338d50

void __cdecl _dynamic_atexit_destructor_for__CVarCheckSRVTransitions__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarCheckSRVTransitions._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarCheckSRVTransitions._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompileShadersForDevelopment'' @ 150338dd0

void __cdecl _dynamic_atexit_destructor_for__CVarCompileShadersForDevelopment__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarCompileShadersForDevelopment._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarCompileShadersForDevelopment._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarContactShadows'' @ 150338e50

void __cdecl _dynamic_atexit_destructor_for__CVarContactShadows__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarContactShadows._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarContactShadows._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarContactShadowsNonShadowCastingIntensity'' @ 150338ed0

void __cdecl _dynamic_atexit_destructor_for__CVarContactShadowsNonShadowCastingIntensity__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarContactShadowsNonShadowCastingIntensity._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarContactShadowsNonShadowCastingIntensity._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCookOutUnusedDetailModeComponents'' @ 150338f50

void __cdecl _dynamic_atexit_destructor_for__CVarCookOutUnusedDetailModeComponents__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarCookOutUnusedDetailModeComponents._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150338fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarCookOutUnusedDetailModeComponents._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCustomUnsafeZones'' @ 150338fd0

void __cdecl _dynamic_atexit_destructor_for__CVarCustomUnsafeZones__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarCustomUnsafeZones._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarCustomUnsafeZones._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDBuffer'' @ 150339050

void __cdecl _dynamic_atexit_destructor_for__CVarDBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDBuffer._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503390b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDBuffer._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDemotedLocalMemoryWarning'' @ 1503390d0

void __cdecl _dynamic_atexit_destructor_for__CVarDemotedLocalMemoryWarning__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDemotedLocalMemoryWarning._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDemotedLocalMemoryWarning._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDepthOfFieldQuality'' @ 150339150

void __cdecl _dynamic_atexit_destructor_for__CVarDepthOfFieldQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDepthOfFieldQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503391b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDepthOfFieldQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDetailMode'' @ 1503391d0

void __cdecl _dynamic_atexit_destructor_for__CVarDetailMode__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDetailMode._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDetailMode._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableAndroidGLASTCSupport'' @ 150339250

void __cdecl _dynamic_atexit_destructor_for__CVarDisableAndroidGLASTCSupport__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableAndroidGLASTCSupport._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503392b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableAndroidGLASTCSupport._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableOpenGLES31Support'' @ 1503392d0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableOpenGLES31Support__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableOpenGLES31Support._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableOpenGLES31Support._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableOpenGLTextureStreamingSupport'' @ 150339350

void __cdecl _dynamic_atexit_destructor_for__CVarDisableOpenGLTextureStreamingSupport__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableOpenGLTextureStreamingSupport._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503393b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableOpenGLTextureStreamingSupport._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableThreadedRendering'' @ 1503393d0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableThreadedRendering__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableThreadedRendering._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableThreadedRendering._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableThreadedRenderingFirstLoad'' @ 150339450

void __cdecl _dynamic_atexit_destructor_for__CVarDisableThreadedRenderingFirstLoad__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableThreadedRenderingFirstLoad._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503394b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableThreadedRenderingFirstLoad._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableVulkanSM5Support'' @ 1503394d0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableVulkanSM5Support__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableVulkanSM5Support._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableVulkanSM5Support._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableVulkanSupport'' @ 150339550

void __cdecl _dynamic_atexit_destructor_for__CVarDisableVulkanSupport__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDisableVulkanSupport._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503395b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDisableVulkanSupport._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDontLimitOnBattery'' @ 1503395d0

void __cdecl _dynamic_atexit_destructor_for__CVarDontLimitOnBattery__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarDontLimitOnBattery._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarDontLimitOnBattery._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEmitterSpawnRateScale'' @ 150339650

void __cdecl _dynamic_atexit_destructor_for__CVarEmitterSpawnRateScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarEmitterSpawnRateScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503396b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarEmitterSpawnRateScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEyeAdaptationQuality'' @ 1503396d0

void __cdecl _dynamic_atexit_destructor_for__CVarEyeAdaptationQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarEyeAdaptationQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarEyeAdaptationQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFeatureLevelPreview'' @ 150339750

void __cdecl _dynamic_atexit_destructor_for__CVarFeatureLevelPreview__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarFeatureLevelPreview._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503397b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarFeatureLevelPreview._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFinishCurrentFrame'' @ 1503397d0

void __cdecl _dynamic_atexit_destructor_for__CVarFinishCurrentFrame__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarFinishCurrentFrame._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarFinishCurrentFrame._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFreeSkeletalMeshBuffers'' @ 150339850

void __cdecl _dynamic_atexit_destructor_for__CVarFreeSkeletalMeshBuffers__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarFreeSkeletalMeshBuffers._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503398b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarFreeSkeletalMeshBuffers._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFreezeAtPosition'' @ 1503398d0

void __cdecl _dynamic_atexit_destructor_for__CVarFreezeAtPosition__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarFreezeAtPosition._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarFreezeAtPosition._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFullscreenMode'' @ 150339950

void __cdecl _dynamic_atexit_destructor_for__CVarFullscreenMode__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarFullscreenMode._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x0001503399b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarFullscreenMode._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHighResScreenshotDelay'' @ 1503399d0

void __cdecl _dynamic_atexit_destructor_for__CVarHighResScreenshotDelay__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarHighResScreenshotDelay._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarHighResScreenshotDelay._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIdleWhenNotForeground'' @ 150339a50

void __cdecl _dynamic_atexit_destructor_for__CVarIdleWhenNotForeground__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarIdleWhenNotForeground._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarIdleWhenNotForeground._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLWCTruncateMode'' @ 150339ad0

void __cdecl _dynamic_atexit_destructor_for__CVarLWCTruncateMode__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLWCTruncateMode._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLWCTruncateMode._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLegacyLuminanceFactors'' @ 150339b50

void __cdecl _dynamic_atexit_destructor_for__CVarLegacyLuminanceFactors__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLegacyLuminanceFactors._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLegacyLuminanceFactors._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLightFunctionQuality'' @ 150339bd0

void __cdecl _dynamic_atexit_destructor_for__CVarLightFunctionQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLightFunctionQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLightFunctionQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLimitRenderingFeatures'' @ 150339c50

void __cdecl _dynamic_atexit_destructor_for__CVarLimitRenderingFeatures__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLimitRenderingFeatures._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLimitRenderingFeatures._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLocalExposure'' @ 150339cd0

void __cdecl _dynamic_atexit_destructor_for__CVarLocalExposure__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLocalExposure._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLocalExposure._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogPlatformMemoryStats'' @ 150339d50

void __cdecl
GenericPlatformMemory::_dynamic_atexit_destructor_for__CVarLogPlatformMemoryStats__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarLogPlatformMemoryStats._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarLogPlatformMemoryStats._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMSAACompositingSampleCount'' @ 150339dd0

void __cdecl _dynamic_atexit_destructor_for__CVarMSAACompositingSampleCount__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMSAACompositingSampleCount._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMSAACompositingSampleCount._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMallocCrashNonCrashedThreadsMode'' @ 150339e50

void __cdecl _dynamic_atexit_destructor_for__CVarMallocCrashNonCrashedThreadsMode__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMallocCrashNonCrashedThreadsMode._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMallocCrashNonCrashedThreadsMode._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialQualityLevel'' @ 150339ed0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialQualityLevel__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMaterialQualityLevel._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMaterialQualityLevel._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialShadingPathNodeOverride'' @ 150339f50

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialShadingPathNodeOverride__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMaterialShadingPathNodeOverride._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x000150339fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMaterialShadingPathNodeOverride._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxAnistropy'' @ 150339fd0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxAnistropy__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMaxAnistropy._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMaxAnistropy._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryPressureCriticalThresholdMB'' @ 15033a050

void __cdecl
GenericPlatformMemory::_dynamic_atexit_destructor_for__CVarMemoryPressureCriticalThresholdMB__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMemoryPressureCriticalThresholdMB._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMemoryPressureCriticalThresholdMB._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinLogVerbosity'' @ 15033a0d0

void __cdecl _dynamic_atexit_destructor_for__CVarMinLogVerbosity__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMinLogVerbosity._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMinLogVerbosity._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowDeferredShadingOpenGL'' @ 15033a150

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowDeferredShadingOpenGL__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowDeferredShadingOpenGL._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowDeferredShadingOpenGL._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowDistanceFieldShadows'' @ 15033a1d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowDistanceFieldShadows__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowDistanceFieldShadows._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowDistanceFieldShadows._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowDitheredLODTransition'' @ 15033a250

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowDitheredLODTransition__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowDitheredLODTransition._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowDitheredLODTransition._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowFramebufferFetch'' @ 15033a2d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowFramebufferFetch__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowFramebufferFetch._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowFramebufferFetch._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowPerPixelShadingModels'' @ 15033a350

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowPerPixelShadingModels__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowPerPixelShadingModels._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a3b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowPerPixelShadingModels._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileAllowPixelDepthOffset'' @ 15033a3d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileAllowPixelDepthOffset__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileAllowPixelDepthOffset._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileAllowPixelDepthOffset._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileContentScaleFactor'' @ 15033a450

void __cdecl _dynamic_atexit_destructor_for__CVarMobileContentScaleFactor__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileContentScaleFactor._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileContentScaleFactor._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileDBuffer'' @ 15033a4d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileDBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileDBuffer._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileDBuffer._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileDefaultAntiAliasing'' @ 15033a550

void __cdecl _dynamic_atexit_destructor_for__CVarMobileDefaultAntiAliasing__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileDefaultAntiAliasing._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileDefaultAntiAliasing._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileDesiredResX'' @ 15033a5d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileDesiredResX__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileDesiredResX._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileDesiredResX._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileDesiredResY'' @ 15033a650

void __cdecl _dynamic_atexit_destructor_for__CVarMobileDesiredResY__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileDesiredResY._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileDesiredResY._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileEnableMovableLightCSMShaderCulling'' @ 15033a6d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileEnableMovableLightCSMShaderCulling__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileEnableMovableLightCSMShaderCulling._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileEnableMovableLightCSMShaderCulling._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileEnableStaticAndCSMShadowReceivers'' @ 15033a750

void __cdecl _dynamic_atexit_destructor_for__CVarMobileEnableStaticAndCSMShadowReceivers__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileEnableStaticAndCSMShadowReceivers._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileEnableStaticAndCSMShadowReceivers._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileEnabledShadingModelsMask'' @ 15033a7d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileEnabledShadingModelsMask__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileEnabledShadingModelsMask._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileEnabledShadingModelsMask._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileFloatPrecisionMode'' @ 15033a850

void __cdecl _dynamic_atexit_destructor_for__CVarMobileFloatPrecisionMode__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileFloatPrecisionMode._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileFloatPrecisionMode._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileForwardDecalLighting'' @ 15033a8d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileForwardDecalLighting__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileForwardDecalLighting._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileForwardDecalLighting._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileForwardEnableClusteredReflections'' @ 15033a950

void __cdecl _dynamic_atexit_destructor_for__CVarMobileForwardEnableClusteredReflections__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileForwardEnableClusteredReflections._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033a9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileForwardEnableClusteredReflections._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileForwardEnableIESProfiles'' @ 15033a9d0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileForwardEnableIESProfiles__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileForwardEnableIESProfiles._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033aa39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileForwardEnableIESProfiles._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileForwardEnableLocalLights'' @ 15033aa50

void __cdecl _dynamic_atexit_destructor_for__CVarMobileForwardEnableLocalLights__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileForwardEnableLocalLights._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033aab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileForwardEnableLocalLights._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileForwardEnableParticleLights'' @ 15033aad0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileForwardEnableParticleLights__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileForwardEnableParticleLights._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033ab39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileForwardEnableParticleLights._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileHDR'' @ 15033ab50

void __cdecl _dynamic_atexit_destructor_for__CVarMobileHDR__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileHDR._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033abb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileHDR._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileRenderRectLightsAsSpotLights'' @ 15033abd0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileRenderRectLightsAsSpotLights__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileRenderRectLightsAsSpotLights._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033ac39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileRenderRectLightsAsSpotLights._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileSceneColorFormat'' @ 15033ac50

void __cdecl _dynamic_atexit_destructor_for__CVarMobileSceneColorFormat__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileSceneColorFormat._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033acb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileSceneColorFormat._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileShadingPath'' @ 15033acd0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileShadingPath__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileShadingPath._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033ad39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileShadingPath._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileSupportGPUScene'' @ 15033ad50

void __cdecl _dynamic_atexit_destructor_for__CVarMobileSupportGPUScene__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileSupportGPUScene._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033adb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileSupportGPUScene._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileSupportsGen4TAA'' @ 15033add0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileSupportsGen4TAA__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileSupportsGen4TAA._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033ae39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileSupportsGen4TAA._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileSupportsSM5MaterialNodes'' @ 15033ae50

void __cdecl _dynamic_atexit_destructor_for__CVarMobileSupportsSM5MaterialNodes__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileSupportsSM5MaterialNodes._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033aeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileSupportsSM5MaterialNodes._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMobileUseCSMShaderBranch'' @ 15033aed0

void __cdecl _dynamic_atexit_destructor_for__CVarMobileUseCSMShaderBranch__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMobileUseCSMShaderBranch._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033af39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMobileUseCSMShaderBranch._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMotionBlurQuality'' @ 15033af50

void __cdecl _dynamic_atexit_destructor_for__CVarMotionBlurQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarMotionBlurQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033afb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarMotionBlurQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetMontageDebug'' @ 15033afd0

void __cdecl _dynamic_atexit_destructor_for__CVarNetMontageDebug__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNetMontageDebug._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNetMontageDebug._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPackageMapDebugAllObjects'' @ 15033b050

void __cdecl _dynamic_atexit_destructor_for__CVarNetPackageMapDebugAllObjects__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNetPackageMapDebugAllObjects._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNetPackageMapDebugAllObjects._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPackageMapDebugObject'' @ 15033b0d0

void __cdecl _dynamic_atexit_destructor_for__CVarNetPackageMapDebugObject__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNetPackageMapDebugObject._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNetPackageMapDebugObject._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPackageMapLongLoadThreshhold'' @ 15033b150

void __cdecl _dynamic_atexit_destructor_for__CVarNetPackageMapLongLoadThreshhold__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNetPackageMapLongLoadThreshhold._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNetPackageMapLongLoadThreshhold._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNormalMaps'' @ 15033b1d0

void __cdecl _dynamic_atexit_destructor_for__CVarNormalMaps__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNormalMaps._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNormalMaps._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumBufferedOcclusionQueries'' @ 15033b250

void __cdecl _dynamic_atexit_destructor_for__CVarNumBufferedOcclusionQueries__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarNumBufferedOcclusionQueries._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarNumBufferedOcclusionQueries._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPostProcessingColorFormat'' @ 15033b2d0

void __cdecl _dynamic_atexit_destructor_for__CVarPostProcessingColorFormat__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarPostProcessingColorFormat._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarPostProcessingColorFormat._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPreTileTextures'' @ 15033b350

void __cdecl _dynamic_atexit_destructor_for__CVarPreTileTextures__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarPreTileTextures._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b3b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarPreTileTextures._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrecomputedVisibilityWarning'' @ 15033b3d0

void __cdecl _dynamic_atexit_destructor_for__CVarPrecomputedVisibilityWarning__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarPrecomputedVisibilityWarning._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarPrecomputedVisibilityWarning._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderTargetPoolMin'' @ 15033b450

void __cdecl _dynamic_atexit_destructor_for__CVarRenderTargetPoolMin__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarRenderTargetPoolMin._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarRenderTargetPoolMin._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneColorFormat'' @ 15033b4d0

void __cdecl _dynamic_atexit_destructor_for__CVarSceneColorFormat__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSceneColorFormat._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSceneColorFormat._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSceneColorFringeQuality'' @ 15033b550

void __cdecl _dynamic_atexit_destructor_for__CVarSceneColorFringeQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSceneColorFringeQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSceneColorFringeQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetClearSceneMethod'' @ 15033b5d0

void __cdecl _dynamic_atexit_destructor_for__CVarSetClearSceneMethod__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSetClearSceneMethod._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSetClearSceneMethod._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetVSyncEnabled'' @ 15033b650

void __cdecl _dynamic_atexit_destructor_for__CVarSetVSyncEnabled__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSetVSyncEnabled._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSetVSyncEnabled._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadowCSMTransitionScale'' @ 15033b6d0

void __cdecl _dynamic_atexit_destructor_for__CVarShadowCSMTransitionScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShadowCSMTransitionScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShadowCSMTransitionScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadowDistanceScale'' @ 15033b750

void __cdecl _dynamic_atexit_destructor_for__CVarShadowDistanceScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShadowDistanceScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShadowDistanceScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadowMaxCSMShadowResolution'' @ 15033b7d0

void __cdecl _dynamic_atexit_destructor_for__CVarShadowMaxCSMShadowResolution__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShadowMaxCSMShadowResolution._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShadowMaxCSMShadowResolution._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadowMaxResolution'' @ 15033b850

void __cdecl _dynamic_atexit_destructor_for__CVarShadowMaxResolution__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShadowMaxResolution._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShadowMaxResolution._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadowQuality'' @ 15033b8d0

void __cdecl _dynamic_atexit_destructor_for__CVarShadowQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShadowQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShadowQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowWireframe'' @ 15033b950

void __cdecl _dynamic_atexit_destructor_for__CVarShowWireframe__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarShowWireframe._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033b9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarShowWireframe._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkeletalMeshLODRadiusScale'' @ 15033b9d0

void __cdecl _dynamic_atexit_destructor_for__CVarSkeletalMeshLODRadiusScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSkeletalMeshLODRadiusScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033ba39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSkeletalMeshLODRadiusScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkyLightingQuality'' @ 15033ba50

void __cdecl _dynamic_atexit_destructor_for__CVarSkyLightingQuality__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarSkyLightingQuality._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarSkyLightingQuality._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackCsvNamedEvents'' @ 15033bad0

void __cdecl _dynamic_atexit_destructor_for__CVarTrackCsvNamedEvents__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarTrackCsvNamedEvents._0_8_ = FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bb39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarTrackCsvNamedEvents._8_8_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTranslucentSortPolicy'' @ 15033bb50

void __cdecl _dynamic_atexit_destructor_for__CVarTranslucentSortPolicy__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarTranslucentSortPolicy._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bbb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarTranslucentSortPolicy._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUniformBufferPooling'' @ 15033bbd0

void __cdecl _dynamic_atexit_destructor_for__CVarUniformBufferPooling__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarUniformBufferPooling._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bc39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarUniformBufferPooling._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDXT5NormalMaps'' @ 15033bc50

void __cdecl _dynamic_atexit_destructor_for__CVarUseDXT5NormalMaps__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarUseDXT5NormalMaps._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bcb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarUseDXT5NormalMaps._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerifyPeer'' @ 15033bcd0

void __cdecl _dynamic_atexit_destructor_for__CVarVerifyPeer__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarVerifyPeer._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bd39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarVerifyPeer._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale'' @ 15033bd50

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bdb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScaleApplySecondaryScale'' @ 15033bdd0

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScaleApplySecondaryScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScaleApplySecondaryScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033be39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScaleApplySecondaryScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScaleSecondaryScale'' @ 15033be50

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScaleSecondaryScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScaleSecondaryScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033beb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScaleSecondaryScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_FieldOfViewAffectsHLOD'' @ 15033bed0

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewAffectsHLOD__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_FieldOfViewAffectsHLOD._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bf39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_FieldOfViewAffectsHLOD._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_FieldOfViewMaxAngle'' @ 15033bf50

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMaxAngle__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_FieldOfViewMaxAngle._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033bfb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_FieldOfViewMaxAngle._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_FieldOfViewMaxAngleScale'' @ 15033bfd0

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMaxAngleScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_FieldOfViewMaxAngleScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033c039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_FieldOfViewMaxAngleScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_FieldOfViewMinAngle'' @ 15033c050

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMinAngle__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_FieldOfViewMinAngle._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033c0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_FieldOfViewMinAngle._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_FieldOfViewMinAngleScale'' @ 15033c0d0

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_FieldOfViewMinAngleScale__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_FieldOfViewMinAngleScale._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033c139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_FieldOfViewMinAngleScale._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewDistanceScale_SkeletalMeshOverlay'' @ 15033c150

void __cdecl _dynamic_atexit_destructor_for__CVarViewDistanceScale_SkeletalMeshOverlay__(void)

{
  code *pcVar1;
  bool bVar2;
  
  CVarViewDistanceScale_SkeletalMeshOverlay._padding_ = (longlong)FAutoConsoleObject::vftable;
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
                    /* WARNING: Could not recover jumptable at 0x00015033c1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,CVarViewDistanceScale_SkeletalMeshOverlay._padding_,1);
  return;
}

// `dynamic_atexit_destructor_for_'ConsoleVariablesIni'' @ 15033c1d0

void __cdecl
`IConsoleManager::VisitPlatformCVarsForEmulation'::__l82::
_dynamic_atexit_destructor_for__ConsoleVariablesIni__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ConsoleVariablesIni.Data.AllocatorInstance.Data;
  if (ConsoleVariablesIni.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ConsoleVariablesIni.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CrashConfigFolder'' @ 15033c1f0

void __cdecl
`FGenericCrashContext::GetCrashConfigFolder'::__l2::
_dynamic_atexit_destructor_for__CrashConfigFolder__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CrashConfigFolder.Data.AllocatorInstance.Data;
  if (CrashConfigFolder.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CrashConfigFolder.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CrashMalloc'' @ 15033c210

void __cdecl
`FGenericPlatformMallocCrash::Get'::__l2::_dynamic_atexit_destructor_for__CrashMalloc__(void)

{
  CrashMalloc._padding_ = (longlong)&___7FGenericPlatformMallocCrash__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&CrashMalloc.InternalLock);
  FExec::~FExec((FExec *)&CrashMalloc);
  return;
}

// `dynamic_atexit_destructor_for_'CrashMalloc'' @ 15033c250

void __cdecl
`FGenericStackBasedMallocCrash::Get'::__l2::_dynamic_atexit_destructor_for__CrashMalloc__(void)

{
  CrashMalloc._padding_ = (longlong)&___7FGenericStackBasedMallocCrash__6B_;
  FExec::~FExec((FExec *)&CrashMalloc);
  return;
}

// `dynamic_atexit_destructor_for_'CriticalSection'' @ 15033c270

void __cdecl NCached::_dynamic_atexit_destructor_for__CriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033c277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15033c290

void __cdecl
`FConsoleVariableHistory<FString>::GetMaxValue'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &`public:_class_TConsoleVariableData<FString>_const&___ptr64___cdecl_FConsoleVariableHistory<FString>::GetMaxValue(EConsoleVariableFlags&___ptr64)___ptr64'
            ::__l2::_thread_safe_static_guard_0__;
  lVar2 = 2;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'DesktopShaderChangeCvars'' @ 15033c2e0

void __cdecl
`FAutoConsoleObject::AccessDesktopShaderChangeCvars'::__l2::
_dynamic_atexit_destructor_for__DesktopShaderChangeCvars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DesktopShaderChangeCvars.AllocatorInstance.Data;
  if (DesktopShaderChangeCvars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DesktopShaderChangeCvars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dir'' @ 15033c300

void __cdecl
`FGenericPlatformMisc::GeneratedConfigDir'::__l2::_dynamic_atexit_destructor_for__Dir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Dir.Data.AllocatorInstance.Data;
  if (Dir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Dir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 15033c320

void __cdecl
`FConsoleVariableShadow::OnChangedDelegate'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (DAT_154ea8268,DAT_154ea8270);
  if (DAT_154ea8268 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(DAT_154ea8268);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
              ::__l2::Dummy);
  return;
}

// `dynamic_atexit_destructor_for_'EnabledPluginsList'' @ 15033c360

void __cdecl NCached::_dynamic_atexit_destructor_for__EnabledPluginsList__(void)

{
  DestructItems<FString,int>
            ((FString *)EnabledPluginsList.AllocatorInstance.Data,EnabledPluginsList.ArrayNum);
  if (EnabledPluginsList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EnabledPluginsList.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EngineData'' @ 15033c3a0

void __cdecl NCached::_dynamic_atexit_destructor_for__EngineData__(void)

{
  EngineData._72_4_ = 0;
  if (EngineData._64_8_ != 0) {
    FMemory::Free((void *)EngineData._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&EngineData);
  return;
}

// `dynamic_atexit_destructor_for_'FGenericPlatformStricmpTestAutomationTestInstance'' @ 15033c3e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FGenericPlatformStricmpTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGenericPlatformStricmpTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMMapFileReadTestAutomationTestInstance'' @ 15033c400

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FMMapFileReadTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMMapFileReadTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMMapFileWriteTestAutomationTestInstance'' @ 15033c420

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FMMapFileWriteTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMMapFileWriteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FilePaths'' @ 15033c440

void __cdecl NCached::_dynamic_atexit_destructor_for__FilePaths__(void)

{
  DestructItems<FString,int>((FString *)FilePaths.AllocatorInstance.Data,FilePaths.ArrayNum);
  if (FilePaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FilePaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GAdditionalProviderLock'' @ 15033c480

void __cdecl
`GetAdditionalProviderLock'::__l2::_dynamic_atexit_destructor_for__GAdditionalProviderLock__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GAdditionalProviderLock.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GAdditionalProviderLockLocal'' @ 15033c4a0

void __cdecl
`GetAdditionalProviderLock'::__l2::_dynamic_atexit_destructor_for__GAdditionalProviderLockLocal__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x1d0));
  return;
}

// `dynamic_atexit_destructor_for_'GOverrideProjectDir'' @ 15033c4d0

void __cdecl _dynamic_atexit_destructor_for__GOverrideProjectDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GOverrideProjectDir.Data.AllocatorInstance.Data;
  if (GOverrideProjectDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GOverrideProjectDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GPUBreadcrumbs'' @ 15033c4f0

void __cdecl NCached::_dynamic_atexit_destructor_for__GPUBreadcrumbs__(void)

{
  if (GPUBreadcrumbs.bIsSet) {
    if (GPUBreadcrumbs.TypedValue.Version.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(GPUBreadcrumbs.TypedValue.Version.Data.AllocatorInstance.Data);
    }
    if (GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(GPUBreadcrumbs.TypedValue.SourceName.Data.AllocatorInstance.Data);
    }
    GPUBreadcrumbs.TypedValue.Queues._72_4_ = 0;
    if (GPUBreadcrumbs.TypedValue.Queues._64_8_ != 0) {
      FMemory::Free((void *)GPUBreadcrumbs.TypedValue.Queues._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&GPUBreadcrumbs);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSpecialDPNameForPremadePlatformKey'' @ 15033c560

void __cdecl _dynamic_atexit_destructor_for__GSpecialDPNameForPremadePlatformKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data;
  if (GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSpecialDPNameForPremadePlatformKey.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GameData'' @ 15033c580

void __cdecl NCached::_dynamic_atexit_destructor_for__GameData__(void)

{
  GameData._72_4_ = 0;
  if (GameData._64_8_ != 0) {
    FMemory::Free((void *)GameData._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GameData);
  return;
}

// `dynamic_atexit_destructor_for_'GeneralShaderChangeCvars'' @ 15033c5c0

void __cdecl
`FAutoConsoleObject::AccessGeneralShaderChangeCvars'::__l2::
_dynamic_atexit_destructor_for__GeneralShaderChangeCvars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GeneralShaderChangeCvars.AllocatorInstance.Data;
  if (GeneralShaderChangeCvars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GeneralShaderChangeCvars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Generic_ShaderDir'' @ 15033c5e0

void __cdecl _dynamic_atexit_destructor_for__Generic_ShaderDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Generic_ShaderDir.Data.AllocatorInstance.Data;
  if (Generic_ShaderDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Generic_ShaderDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogChunkInstaller'' @ 15033c600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChunkInstaller__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChunkInstaller);
  return;
}

// `dynamic_atexit_destructor_for_'LogConsoleManager'' @ 15033c620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogConsoleManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogConsoleManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogConsoleResponse'' @ 15033c640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogConsoleResponse__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogConsoleResponse);
  return;
}

// `dynamic_atexit_destructor_for_'LogCrashContext'' @ 15033c660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCrashContext__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCrashContext);
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericPlatformMisc'' @ 15033c680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGenericPlatformMisc__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGenericPlatformMisc);
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericPlatformString'' @ 15033c6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGenericPlatformString__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGenericPlatformString);
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericPlatformSymbolication'' @ 15033c6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGenericPlatformSymbolication__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGenericPlatformSymbolication);
  return;
}

// `dynamic_atexit_destructor_for_'LogGenericPlatformTime'' @ 15033c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGenericPlatformTime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGenericPlatformTime);
  return;
}

// `dynamic_atexit_destructor_for_'MobileShaderChangeCvars'' @ 15033c700

void __cdecl
`FAutoConsoleObject::AccessMobileShaderChangeCvars'::__l2::
_dynamic_atexit_destructor_for__MobileShaderChangeCvars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MobileShaderChangeCvars.AllocatorInstance.Data;
  if (MobileShaderChangeCvars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MobileShaderChangeCvars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PerNameNullFindCallCount'' @ 15033c720

void __cdecl
`FConsoleManager::FindConsoleObject'::__l31::
_dynamic_atexit_destructor_for__PerNameNullFindCallCount__(void)

{
  PerNameNullFindCallCount._72_4_ = 0;
  if (PerNameNullFindCallCount._64_8_ != 0) {
    FMemory::Free((void *)PerNameNullFindCallCount._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&PerNameNullFindCallCount);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformToDeviceProfileMap'' @ 15033c760

void __cdecl
ConsoleVariablePlatformMapping::_dynamic_atexit_destructor_for__PlatformToDeviceProfileMap__(void)

{
  PlatformToDeviceProfileMap._72_4_ = 0;
  if (PlatformToDeviceProfileMap._64_8_ != 0) {
    FMemory::Free((void *)PlatformToDeviceProfileMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&PlatformToDeviceProfileMap);
  return;
}

// `dynamic_atexit_destructor_for_'ShaderPlatformToPlatformMap'' @ 15033c7a0

void __cdecl
ConsoleVariablePlatformMapping::_dynamic_atexit_destructor_for__ShaderPlatformToPlatformMap__(void)

{
  ShaderPlatformToPlatformMap._72_4_ = 0;
  if (ShaderPlatformToPlatformMap._64_8_ != 0) {
    FMemory::Free((void *)ShaderPlatformToPlatformMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ShaderPlatformToPlatformMap);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c7e0

void __cdecl `FCPUTimeDump::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
       Singleton.CPUTimeDumpDelegateHandle.WeakReferenceCount.ReferenceController;
  if (`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimeDumpDelegateHandle.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
               Singleton.CPUTimeDumpDelegateHandle.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
    }
  }
  FVar3.ReferenceController =
       `public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
       Singleton.GetCPUTimeDelegateHandle.WeakReferenceCount.ReferenceController;
  if (`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .GetCPUTimeDelegateHandle.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
               Singleton.GetCPUTimeDelegateHandle.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
              Singleton.CPUTimeDumpDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::
              Singleton.GetCPUTimeDelegate);
  if (`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::__l2::Singleton
      .CPUTimes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_struct_FCPUTimeDump&___ptr64___cdecl_FCPUTimeDump::Get(void)'::
                  __l2::Singleton.CPUTimes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c870

void __cdecl
`FGenericPlatformOutputDevices::GetError'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c890

void __cdecl
`FGenericPlatformOutputDevices::GetFeedbackContext'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c8b0

void __cdecl
`TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TLazySingleton<FGenericPlatformMisc::FStaticData>::Reset
            ((TLazySingleton<FGenericPlatformMisc::FStaticData> *)
             &`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c8d0

void __cdecl
`TLazySingleton<TEventPool<1>_>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FLockFreePointerListLIFOBase<FEvent,64,1> *this;
  FEvent *pFVar1;
  
  this = DAT_154ea8400;
  if (DAT_154ea8400 != (FLockFreePointerListLIFOBase<FEvent,64,1> *)0x0) {
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop(DAT_154ea8400);
    while (pFVar1 != (FEvent *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
      pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop(this);
    }
    FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>(this);
    DAT_154ea8400 = (FLockFreePointerListLIFOBase<FEvent,64,1> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c930

void __cdecl
`TLazySingleton<TEventPool<0>_>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FLockFreePointerListLIFOBase<FEvent,64,1> *this;
  FEvent *pFVar1;
  
  this = DAT_154ea8340;
  if (DAT_154ea8340 != (FLockFreePointerListLIFOBase<FEvent,64,1> *)0x0) {
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop(DAT_154ea8340);
    while (pFVar1 != (FEvent *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
      pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop(this);
    }
    FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>(this);
    DAT_154ea8340 = (FLockFreePointerListLIFOBase<FEvent,64,1> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c990

void __cdecl
`FGenericPlatformOutputDevices::GetLog'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (::Singleton.LogDevice.Ptr != (FOutputDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)::Singleton.LogDevice.Ptr)(::Singleton.LogDevice.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033c9b0

void __cdecl
`FGenericPlatformMisc::GetPlatformChunkInstall'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Singleton.NamedChunkCompleteDelegate._8_8_,
             ::Singleton.NamedChunkCompleteDelegate._16_4_);
  if (::Singleton.NamedChunkCompleteDelegate._8_8_ != 0) {
    FMemory::Free((void *)::Singleton.NamedChunkCompleteDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Singleton.NamedChunkCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Singleton.InstallDelegate._8_8_,::Singleton.InstallDelegate._16_4_);
  if (::Singleton.InstallDelegate._8_8_ != 0) {
    FMemory::Free((void *)::Singleton.InstallDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Singleton.InstallDelegate);
  ::Singleton._padding_ = (longlong)&___7IPlatformChunkInstall__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033ca30

void __cdecl
`FGenericPlatformMisc::GetPlatformHostCommunication'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  (**(code **)((longlong)::Singleton.HostCommunication + 8))(&::Singleton);
  ::Singleton.HostCommunication =
       (FGenericPlatformHostCommunication)&___7IPlatformHostCommunication__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'TaggedCVars'' @ 15033ca60

void __cdecl UE::ConsoleManager::Private::_dynamic_atexit_destructor_for__TaggedCVars__(void)

{
  TaggedCVars._72_4_ = 0;
  if (TaggedCVars._64_8_ != 0) {
    FMemory::Free((void *)TaggedCVars._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TaggedCVars);
  return;
}

// `dynamic_atexit_destructor_for_'Temp'' @ 15033caa0

void __cdecl
`FGenericPlatformMisc::GetConfigRuleVars'::__l2::_dynamic_atexit_destructor_for__Temp__(void)

{
  Temp._72_4_ = 0;
  if (Temp._64_8_ != 0) {
    FMemory::Free((void *)Temp._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Temp);
  return;
}

// `dynamic_atexit_destructor_for_'ThreadContextProvider'' @ 15033cae0

void __cdecl
`FAdditionalCrashContextStack::GetThreadContextProvider'::__l2::
_dynamic_atexit_destructor_for__ThreadContextProvider__(void)

{
  FAdditionalCrashContextStack *pFVar1;
  FAdditionalCrashContextStack *pFVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  FAdditionalCrashContextStack *pFVar3;
  
  pFVar3 = (FAdditionalCrashContextStack *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x130);
  lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar1 = (FAdditionalCrashContextStack *)&GProviderHead;
  for (pFVar2 = GProviderHead; pFVar2 != pFVar3; pFVar2 = pFVar2->Next) {
    pFVar1 = pFVar2;
  }
  pFVar1->Next = pFVar3->Next;
                    /* WARNING: Could not recover jumptable at 0x00015033cb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryAvailablePhysical'' @ 15033cb70

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryAvailablePhysical__(void)

{
  if ((__GTraceCounterPlatformMemoryAvailablePhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryAvailablePhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryAvailableVirtual'' @ 15033cb90

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryAvailableVirtual__(void)

{
  if ((__GTraceCounterPlatformMemoryAvailableVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryAvailableVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryPageSize'' @ 15033cbb0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPageSize__(void)

{
  if ((__GTraceCounterPlatformMemoryPageSize.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryPageSize.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryPeakUsedPhysical'' @ 15033cbd0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPeakUsedPhysical__(void)

{
  if ((__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryPeakUsedVirtual'' @ 15033cbf0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryPeakUsedVirtual__(void)

{
  if ((__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryTotalPhysical'' @ 15033cc10

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryTotalPhysical__(void)

{
  if ((__GTraceCounterPlatformMemoryTotalPhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryTotalPhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryTotalVirtual'' @ 15033cc30

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryTotalVirtual__(void)

{
  if ((__GTraceCounterPlatformMemoryTotalVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryTotalVirtual.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryUsedPhysical'' @ 15033cc50

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryUsedPhysical__(void)

{
  if ((__GTraceCounterPlatformMemoryUsedPhysical.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryUsedPhysical.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterPlatformMemoryUsedVirtual'' @ 15033cc70

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterPlatformMemoryUsedVirtual__(void)

{
  if ((__GTraceCounterPlatformMemoryUsedVirtual.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterPlatformMemoryUsedVirtual.CounterName);
    return;
  }
  return;
}

