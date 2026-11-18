// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 479

// LatentActionsChangedDelegate'' @ 141105c90

void __cdecl `dynamic_initializer_for_'FLatentActionManager::LatentActionsChangedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLatentActionManager::LatentActionsChangedDelegate__);
  return;
}

// LevelAnnotations'' @ 141105cb0

void __cdecl `dynamic_initializer_for_'ULevelStreaming::LevelAnnotations__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ULevelStreaming::LevelAnnotations__);
  return;
}

// LevelDirtiedEvent'' @ 141105cd0

void __cdecl `dynamic_initializer_for_'ULevel::LevelDirtiedEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ULevel::LevelDirtiedEvent__);
  return;
}

// StreamedLevelsOwningWorld'' @ 141105cf0

void __cdecl `dynamic_initializer_for_'ULevel::StreamedLevelsOwningWorld__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ULevel::StreamedLevelsOwningWorld__);
  return;
}

// `dynamic_initializer_for_'CVarActorClusteringEnabled'' @ 141105d10

void __cdecl _dynamic_initializer_for__CVarActorClusteringEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarActorClusteringEnabled,L"gc.ActorClusteringEnabled",&GActorClusteringEnabled,
             L"Whether to allow levels to create actor clusters for GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarActorClusteringEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarActorClusteringFixStalePointers'' @ 141105d60

void __cdecl _dynamic_initializer_for__CVarActorClusteringFixStalePointers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarActorClusteringFixStalePointers,L"gc.ActorClusteringFixStalePointers",
             &GActorClusteringFixStalePointers,L"Enables fix for stale pointers.",0);
  atexit(_dynamic_atexit_destructor_for__CVarActorClusteringFixStalePointers__);
  return;
}

// `dynamic_initializer_for_'CVarAllowDestroyNonNetworkActors'' @ 141105db0

void __cdecl _dynamic_initializer_for__CVarAllowDestroyNonNetworkActors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowDestroyNonNetworkActors,L"p.AllowDestroyNonNetworkActors",local_res8,
             L"When enabled, allows Clients in Networked Games to destroy non-networked actors (AActor::Role == ROLE_None). Does not change behavior on Servers or Standalone games."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowDestroyNonNetworkActors__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncrementalPreRegisterComponents'' @ 141105e00

void __cdecl _dynamic_initializer_for__CVarAllowIncrementalPreRegisterComponents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowIncrementalPreRegisterComponents,
             L"LevelStreaming.AllowIncrementalPreRegisterComponents",
             &GAllowIncrementalPreRegisterComponents,
             L"Whether to allow level streaming incremental pre-registration of actor components.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncrementalPreRegisterComponents__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncrementalPreUnregisterComponents'' @ 141105e50

void __cdecl _dynamic_initializer_for__CVarAllowIncrementalPreUnregisterComponents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowIncrementalPreUnregisterComponents,
             L"LevelStreaming.AllowIncrementalPreUnregisterComponents",
             &GAllowIncrementalPreUnregisterComponents,
             L"Whether to allow level streaming incremental pre-unregistration of actor components."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncrementalPreUnregisterComponents__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncrementalRemovalWhilePendingVisibility'' @ 141105ea0

void __cdecl
LevelStreamingCVars::_dynamic_initializer_for__CVarAllowIncrementalRemovalWhilePendingVisibility__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowIncrementalRemovalWhilePendingVisibility,
             L"LevelStreaming.AllowIncrementalRemovalWhilePendingVisibility",
             &bAllowIncrementalRemovalWhilePendingVisibility,
             L"Whether incremental removal of a streaming level can be done while there\'s a pending visible streaming level being processed.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncrementalRemovalWhilePendingVisibility__);
  return;
}

// `dynamic_initializer_for_'CVarAutoPixelCountMultiplier'' @ 141105ef0

void __cdecl _dynamic_initializer_for__CVarAutoPixelCountMultiplier__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarAutoPixelCountMultiplier,L"r.ScreenPercentage.Auto.PixelCountMultiplier",
             local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutoPixelCountMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultAllowClientUseMakingInvisibleTransactionRequests'' @ 141105f40

void __cdecl
LevelStreamingCVars::
_dynamic_initializer_for__CVarDefaultAllowClientUseMakingInvisibleTransactionRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultAllowClientUseMakingInvisibleTransactionRequests,
             L"LevelStreaming.DefaultAllowClientUseMakingInvisibleTransactionRequests",
             &bDefaultAllowClientUseMakingInvisibleTransactionRequests,
             L"Flag combined with world support to use making invisible transaction requests to the server\nthat determines whether the client should wait for the server to acknowledge visibility update before making streaming levels invisible.\n0: Disable, 1: Enable"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarDefaultAllowClientUseMakingInvisibleTransactionRequests__
        );
  return;
}

// `dynamic_initializer_for_'CVarDefaultAllowClientUseMakingVisibleTransactionRequests'' @ 141105f90

void __cdecl
LevelStreamingCVars::
_dynamic_initializer_for__CVarDefaultAllowClientUseMakingVisibleTransactionRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultAllowClientUseMakingVisibleTransactionRequests,
             L"LevelStreaming.DefaultAllowClientUseMakingVisibleTransactionRequests",
             &bDefaultAllowClientUseMakingVisibleTransactionRequests,
             L"Flag combined with world support to use making visible transaction requests to the server\nthat determines whether the client should wait for the server to acknowledge visibility update before making streaming levels visible.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultAllowClientUseMakingVisibleTransactionRequests__
        );
  return;
}

// `dynamic_initializer_for_'CVarDelayOnActorSpawnedUntilFinishedSpawning'' @ 141105fe0

void __cdecl
UE::Gameplay::CVars::_dynamic_initializer_for__CVarDelayOnActorSpawnedUntilFinishedSpawning__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDelayOnActorSpawnedUntilFinishedSpawning,
             L"s.DelayOnActorSpawnedUntilFinishedSpawning",
             &bDelayOnActorSpawnedUntilFinishedSpawning,
             L"Default: True (new/fixed). Introduced in UE5.6 that UWorld::OnActorSpawned will run only after the Actor has FinishedSpawning (is fully initialized).  False to keep old behavior."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayOnActorSpawnedUntilFinishedSpawning__);
  return;
}

// `dynamic_initializer_for_'CVarEncroachEpsilon'' @ 141106030

void __cdecl _dynamic_initializer_for__CVarEncroachEpsilon__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.15;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarEncroachEpsilon,L"p.EncroachEpsilon",local_res8,
             L"Epsilon value used during encroachment checking for shape components\n0: use full sized shape. > 0: shrink shape size by this amount (world units)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEncroachEpsilon__);
  return;
}

// `dynamic_initializer_for_'CVarLatentActionGuaranteeEngineTickDelay'' @ 141106080

void __cdecl
LatentActionCVars::_dynamic_initializer_for__CVarLatentActionGuaranteeEngineTickDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLatentActionGuaranteeEngineTickDelay,L"LatentActions.GuaranteeNextTickDelay",
             &GuaranteeEngineTickDelay,
             L"If true, latent actions delayed until next tick will guarantee the engine frame has advanced. If false, these would always run at the end of the same engine tick (default behavior prior to 5.5)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLatentActionGuaranteeEngineTickDelay__);
  return;
}

// `dynamic_initializer_for_'CVarLevelStreamingPriorityBias'' @ 1411060d0

void __cdecl LevelStreamingCVars::_dynamic_initializer_for__CVarLevelStreamingPriorityBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelStreamingPriorityBias,L"LevelStreaming.LevelStreamingPriorityBias",
             &GLevelStreamingPriorityBias,
             L"PriorityBias added to level streaming priority when making async load requests",0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelStreamingPriorityBias__);
  return;
}

// `dynamic_initializer_for_'CVarOptimizeActorRegistration'' @ 141106120

void __cdecl _dynamic_initializer_for__CVarOptimizeActorRegistration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOptimizeActorRegistration,L"s.OptimizeActorRegistration",
             &GOptimizeActorRegistration,
             L"Enables optimizations to actor component registration functions like PostRegisterAllComponents\n 0: Disable optimizations for legacy code that depends on redundant calls to registration functions\n 1: Enables optimizations and assumes the code is working properly\n 2: Enables optimization logic, but ensures it is working properly in non shipping builds"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOptimizeActorRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarRouteActorInitializationWorkUnitWeighting'' @ 141106170

void __cdecl _dynamic_initializer_for__CVarRouteActorInitializationWorkUnitWeighting__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRouteActorInitializationWorkUnitWeighting,
             L"s.RouteActorInitializationWorkUnitWeighting",
             &GRouteActorInitializationWorkUnitWeighting,
             L"Weighting to apply to RouteActorInitialization when computing work units (relative to component init)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRouteActorInitializationWorkUnitWeighting__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentage'' @ 1411061c0

void __cdecl _dynamic_initializer_for__CVarScreenPercentage__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarScreenPercentage,L"r.ScreenPercentage",local_res8,
             L"To render in lower resolution and upscale for better performance (combined up with the blenable post process setting).\n70 is a good value for low aliasing and performance, can be verified with \'show TestImage\'\nin percent, >0 and <=100, larger numbers are possible (supersampling) but the downsampling quality is improvable.<=0 compute the screen percentage is determined by r.ScreenPercentage.Default cvars."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageDefault'' @ 141106210

void __cdecl _dynamic_initializer_for__CVarScreenPercentageDefault__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 100.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarScreenPercentageDefault,L"r.ScreenPercentage.Default",local_res8,L"",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageDefault__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageDefaultDesktopMode'' @ 141106260

void __cdecl _dynamic_initializer_for__CVarScreenPercentageDefaultDesktopMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenPercentageDefaultDesktopMode,L"r.ScreenPercentage.Default.Desktop.Mode",
             local_res8,L"",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageDefaultDesktopMode__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageDefaultMobileMode'' @ 1411062b0

void __cdecl _dynamic_initializer_for__CVarScreenPercentageDefaultMobileMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenPercentageDefaultMobileMode,L"r.ScreenPercentage.Default.Mobile.Mode",
             local_res8,L"",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageDefaultMobileMode__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageDefaultPathTracerMode'' @ 141106300

void __cdecl _dynamic_initializer_for__CVarScreenPercentageDefaultPathTracerMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenPercentageDefaultPathTracerMode,
             L"r.ScreenPercentage.Default.PathTracer.Mode",local_res8,L"",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageDefaultPathTracerMode__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageDefaultVRMode'' @ 141106350

void __cdecl _dynamic_initializer_for__CVarScreenPercentageDefaultVRMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenPercentageDefaultVRMode,L"r.ScreenPercentage.Default.VR.Mode",local_res8,L""
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageDefaultVRMode__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageMaxResolution'' @ 1411063a0

void __cdecl _dynamic_initializer_for__CVarScreenPercentageMaxResolution__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarScreenPercentageMaxResolution,L"r.ScreenPercentage.MaxResolution",local_res8,
             L"Controls the absolute maximum number of rendered pixel before any upscaling such that doesn\'t go higher than the specified 16:9 resolution of this variable. For instance set this value to 1440 so that you are not rendering more than 2560x1440 = 3.6M pixels. This is useful to set this on PC in your project\'s DefaultEditor.ini so you are not rendering more pixel on PC in PIE that you would in average on console with your project specific dynamic resolution settings."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageMaxResolution__);
  return;
}

// `dynamic_initializer_for_'CVarScreenPercentageMinResolution'' @ 1411063f0

void __cdecl _dynamic_initializer_for__CVarScreenPercentageMinResolution__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarScreenPercentageMinResolution,L"r.ScreenPercentage.MinResolution",local_res8,
             L"Controls the absolute minimum number of rendered pixel.",0);
  atexit(_dynamic_atexit_destructor_for__CVarScreenPercentageMinResolution__);
  return;
}

// `dynamic_initializer_for_'CVarShouldReuseUnloadedButStillAroundLevels'' @ 141106440

void __cdecl
LevelStreamingCVars::_dynamic_initializer_for__CVarShouldReuseUnloadedButStillAroundLevels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShouldReuseUnloadedButStillAroundLevels,
             L"LevelStreaming.ShouldReuseUnloadedButStillAroundLevels",
             &bShouldReuseUnloadedButStillAroundLevels,
             L"Whether level streaming will reuse the unloaded levels that aren\'t GC\'d yet.\n0: Disable, 1: Enable"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarShouldReuseUnloadedButStillAroundLevels__);
  return;
}

// `dynamic_initializer_for_'CVarShouldServerUseMakingVisibleTransactionRequest'' @ 141106490

void __cdecl
LevelStreamingCVars::_dynamic_initializer_for__CVarShouldServerUseMakingVisibleTransactionRequest__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShouldServerUseMakingVisibleTransactionRequest,
             L"LevelStreaming.ShouldServerUseMakingVisibleTransactionRequest",
             &bShouldServerUseMakingVisibleTransactionRequest,
             L"Whether server should wait for client to acknowledge visibility update before treating streaming levels as visible by the client.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldServerUseMakingVisibleTransactionRequest__);
  return;
}

// `dynamic_initializer_for_'FBox2DEntry'' @ 1411064e0

void __cdecl _dynamic_initializer_for__FBox2DEntry__(void)

{
  FBox2DEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FBox2DEntry;
  return;
}

// `dynamic_initializer_for_'FDeprecateVector2DEntry'' @ 141106510

void __cdecl _dynamic_initializer_for__FDeprecateVector2DEntry__(void)

{
  FDeprecateVector2DEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FDeprecateVector2DEntry;
  return;
}

// `dynamic_initializer_for_'FMatrixEntry'' @ 141106540

void __cdecl _dynamic_initializer_for__FMatrixEntry__(void)

{
  FMatrixEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FMatrixEntry;
  return;
}

// `dynamic_initializer_for_'FPlaneEntry'' @ 141106570

void __cdecl _dynamic_initializer_for__FPlaneEntry__(void)

{
  FPlaneEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FPlaneEntry;
  return;
}

// `dynamic_initializer_for_'FQuatEntry'' @ 1411065a0

void __cdecl _dynamic_initializer_for__FQuatEntry__(void)

{
  FQuatEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FQuatEntry;
  return;
}

// `dynamic_initializer_for_'FRotatorEntry'' @ 1411065d0

void __cdecl _dynamic_initializer_for__FRotatorEntry__(void)

{
  FRotatorEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FRotatorEntry;
  return;
}

// `dynamic_initializer_for_'FTransformEntry'' @ 141106600

void __cdecl _dynamic_initializer_for__FTransformEntry__(void)

{
  FTransformEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FTransformEntry;
  return;
}

// `dynamic_initializer_for_'FVector2DEntry'' @ 141106630

void __cdecl _dynamic_initializer_for__FVector2DEntry__(void)

{
  FVector2DEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FVector2DEntry;
  return;
}

// `dynamic_initializer_for_'FVector4Entry'' @ 141106660

void __cdecl _dynamic_initializer_for__FVector4Entry__(void)

{
  FVector4Entry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FVector4Entry;
  return;
}

// `dynamic_initializer_for_'FVectorEntry'' @ 141106690

void __cdecl _dynamic_initializer_for__FVectorEntry__(void)

{
  FVectorEntry.NextEntry =
       `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
       ::__l2::ListHead;
  `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
  ::__l2::ListHead = &FVectorEntry;
  return;
}

// `dynamic_initializer_for_'LogLevel'' @ 1411066c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLevel__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLevel,L"LogLevel",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLevel__);
  return;
}

// `dynamic_initializer_for_'LogLevelActorContainer'' @ 141106700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLevelActorContainer__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLevelActorContainer,L"LogLevelActorContainer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLevelActorContainer__);
  return;
}

// `dynamic_initializer_for_'LogLevelInstance'' @ 141106740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLevelInstance__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLevelInstance,L"LogLevelInstance",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLevelInstance__);
  return;
}

// `dynamic_initializer_for_'LogLevelStreaming'' @ 141106780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLevelStreaming__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLevelStreaming,L"LogLevelStreaming",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLevelStreaming__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411067c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_ALevelScriptActor_LevelReset'' @ 1411067e0

void __cdecl _dynamic_initializer_for__NAME_ALevelScriptActor_LevelReset__(void)

{
  FName::FName(&NAME_ALevelScriptActor_LevelReset,L"LevelReset");
  return;
}

// `dynamic_initializer_for_'NAME_ALevelScriptActor_WorldOriginLocationChanged'' @ 141106800

void __cdecl _dynamic_initializer_for__NAME_ALevelScriptActor_WorldOriginLocationChanged__(void)

{
  FName::FName(&NAME_ALevelScriptActor_WorldOriginLocationChanged,L"WorldOriginLocationChanged");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeferredUpdateBodies'' @ 141106820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeferredUpdateBodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeferredUpdateBodies ==
      (FThreadSafeStaticStat<FStat_STAT_DeferredUpdateBodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DeferredUpdateBodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeferredUpdateBodies,*pFVar1,
               L"Deferred Init Bodies","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DestroyActor'' @ 1411068b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DestroyActor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DestroyActor == (FThreadSafeStaticStat<FStat_STAT_DestroyActor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DestroyActor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyActor,*pFVar1,L"Destroy Actor",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RemoveLatentActions'' @ 141106940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RemoveLatentActions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RemoveLatentActions == (FThreadSafeStaticStat<FStat_STAT_RemoveLatentActions>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_RemoveLatentActions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveLatentActions,*pFVar1,
               L"Remove Latent Actions","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickLatentActions'' @ 1411069d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickLatentActions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickLatentActions == (FThreadSafeStaticStat<FStat_STAT_TickLatentActions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickLatentActions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickLatentActions,*pFVar1,
               L"Blueprint Latent Actions","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'ThisFramePawnSpawns'' @ 141106a60

void __cdecl _dynamic_initializer_for__ThisFramePawnSpawns__(void)

{
  atexit(_dynamic_atexit_destructor_for__ThisFramePawnSpawns__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h__Script_Engine_3703674576'' @ 141106a80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h__Script_Engine_3703674576__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h__Script_Engine_993150439'' @ 141106ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h__Script_Engine_993150439__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h__Script_Engine_3471032936'' @ 141106b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h__Script_Engine_3471032936__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h__Script_Engine_3410303979'' @ 141106b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h__Script_Engine_3410303979__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h__Script_Engine_1100668759'' @ 141106b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h__Script_Engine_1100668759__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h__Script_Engine_2908770055'' @ 141106bc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h__Script_Engine_2908770055__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h__Script_Engine_456757383'' @ 141106c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h__Script_Engine_456757383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h__Script_Engine_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h__Script_Engine_180201713'' @ 141106c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h__Script_Engine_180201713__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_ImportanceSamplingLibrary_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h__Script_Engine_178454675'' @ 141106ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h__Script_Engine_178454675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h__Script_Engine_322864024'' @ 141106cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h__Script_Engine_322864024__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Kismet_BlueprintTypeConversions_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h__Script_Engine_2317609502'' @ 141106d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h__Script_Engine_2317609502__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h__Script_Engine_330712776'' @ 141106d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h__Script_Engine_330712776__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorPropertyOverrideLevelStreaming_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h__Script_Engine_122393248'' @ 141106db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h__Script_Engine_122393248__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_LevelInstance_Test_LevelInstancePropertyOverrideSamplePolicy_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h__Script_Engine_2694986211'' @ 141106df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h__Script_Engine_2694986211__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h__Script_Engine_72660948'' @ 141106e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h__Script_Engine_72660948__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h__Script_Engine_3962774096'' @ 141106e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h__Script_Engine_3962774096__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h__Script_Engine_848617102'' @ 141106ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h__Script_Engine_848617102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h__Script_Engine_2622458925'' @ 141106f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h__Script_Engine_2622458925__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h__Script_Engine_3762001590'' @ 141106f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h__Script_Engine_3762001590__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h__Script_Engine_4201799013'' @ 141106f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h__Script_Engine_4201799013__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h__Script_Engine_400546000'' @ 141106fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h__Script_Engine_400546000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h__Script_Engine_1164190033'' @ 141107000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h__Script_Engine_1164190033__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverrideAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h__Script_Engine_1187015890'' @ 141107040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h__Script_Engine_1187015890__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstancePropertyOverridePolicy_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h__Script_Engine_1167133234'' @ 141107080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h__Script_Engine_1167133234__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h__Script_Engine_2033052650'' @ 1411070c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h__Script_Engine_2033052650__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample @ 147e411f0

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture @ 147e41230

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D @ 147e41270

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D @ 147e412f0

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat @ 147e413f0

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D @ 147e41430

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D @ 147e41470

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat @ 147e414b0

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelInstanceComponent @ 147e415b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceComponent(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147e415f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UClass_ALevelInstanceEditorInstanceActor @ 147e41630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelInstanceEditorInstanceActor(void)

{
  if (Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton,
               &Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton;
}

// Z_Construct_UClass_ULevelStreaming_NoRegister @ 147e416f0

UClass * __cdecl Z_Construct_UClass_ULevelStreaming_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreaming",
               &Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton,
               ULevelStreaming::StaticRegisterNativesULevelStreaming,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreaming>,InternalVTableHelperCtorCaller<ULevelStreaming>,
               local_res8,UObject::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreaming.InnerSingleton;
}

// Z_Construct_UClass_ULevelStreamingLevelInstanceEditor @ 147e41870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelStreamingLevelInstanceEditor(void)

{
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton,
               &Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton;
}

// EViewStatusForScreenPercentage_StaticEnum @ 147e41960

UEnum * __cdecl EViewStatusForScreenPercentage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage,(UObject *)pUVar1,
                       L"EViewStatusForScreenPercentage");
  }
  return Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton;
}

// EScreenPercentageMode_StaticEnum @ 147e419a0

UEnum * __cdecl EScreenPercentageMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EScreenPercentageMode,(UObject *)pUVar1,
                       L"EScreenPercentageMode");
  }
  return Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton;
}

// Z_Construct_UClass_ULevelInstanceEditorObject @ 147e419e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceEditorObject(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceEditorObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorObject.OuterSingleton;
}

// Z_Construct_UClass_ULevelInstanceSubsystem @ 147e41a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceSubsystem(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton;
}

// NewStructOps @ 147e41b20

void * __cdecl Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLatentActionInfo,&UE::CoreUObject::Private::Construct<FLatentActionInfo>,&UE::CoreUObject::Private::ConstructForTests<FLatentActionInfo>,&UE::CoreUObject::Private::Destruct<FLatentActionInfo>,&UE::CoreUObject::Private::Copy<FLatentActionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ALevelInstancePivot @ 147e41b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelInstancePivot(void)

{
  if (Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton,
               &Z_Construct_UClass_ALevelInstancePivot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton;
}

// NewStructOps @ 147e41ba0

void * __cdecl Z_Construct_UScriptStruct_FLatentActionManager_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLatentActionManager,&UE::CoreUObject::Private::Construct<FLatentActionManager>,&UE::CoreUObject::Private::ConstructForTests<FLatentActionManager>,&UE::CoreUObject::Private::Destruct<FLatentActionManager>,&UE::CoreUObject::Private::Copy<FLatentActionManager>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride @ 147e41d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride(void)

{
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
                OuterSingleton,
               &Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
         OuterSingleton;
}

// Z_Construct_UClass_ULevelActorContainer_NoRegister @ 147e41e60

UClass * __cdecl Z_Construct_UClass_ULevelActorContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelActorContainer",
               &Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton,
               ULevelActorContainer::StaticRegisterNativesULevelActorContainer,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULevelActorContainer>,
               InternalVTableHelperCtorCaller<ULevelActorContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelActorContainer.InnerSingleton;
}

// Z_Construct_UClass_UActorContainer @ 147e41fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorContainer(void)

{
  if (Z_Registration_Info_UClass_UActorContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorContainer.OuterSingleton,
               &Z_Construct_UClass_UActorContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorContainer.OuterSingleton;
}

// Z_Construct_UClass_ULevel @ 147e42000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevel(void)

{
  if (Z_Registration_Info_UClass_ULevel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevel.OuterSingleton,
               &Z_Construct_UClass_ULevel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevel.OuterSingleton;
}

// Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo @ 147e42040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FReplicatedStaticActorDestructionInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FReplicatedStaticActorDestructionInfo.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FReplicatedStaticActorDestructionInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FReplicatedStaticActorDestructionInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStreamableTextureInstance @ 147e420c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamableTextureInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamableTextureInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamableTextureInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamableTextureInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamableTextureInstance.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UClass_ULevelInstanceInterface @ 147e42200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceInterface(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton;
}

// NewStructOps @ 147e42300

void * __cdecl Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorFolderSet,&UE::CoreUObject::Private::Construct<FActorFolderSet>,&UE::CoreUObject::Private::ConstructForTests<FActorFolderSet>,&UE::CoreUObject::Private::Destruct<FActorFolderSet>,&UE::CoreUObject::Private::Copy<FActorFolderSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel @ 147e42340

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALevelScriptActor_NoRegister @ 147e42380

UClass * __cdecl Z_Construct_UClass_ALevelScriptActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelScriptActor",
               &Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton,
               ALevelScriptActor::StaticRegisterNativesALevelScriptActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelScriptActor>,
               InternalVTableHelperCtorCaller<ALevelScriptActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelScriptActor.InnerSingleton;
}

// Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset @ 147e42440

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e42540

void __cdecl
Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147e42550

void * __cdecl Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamableTextureInstance,&UE::CoreUObject::Private::Construct<FStreamableTextureInstance>,&UE::CoreUObject::Private::ConstructForTests<FStreamableTextureInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded @ 147e42590

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance @ 147e425d0

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e42610

void __cdecl
Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAttached_SetBit @ 147e42620

void __cdecl
Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 147e42630

void * __cdecl Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicTextureInstance,&UE::CoreUObject::Private::Construct<FDynamicTextureInstance>,&UE::CoreUObject::Private::ConstructForTests<FDynamicTextureInstance>,&UE::CoreUObject::Private::Destruct<FDynamicTextureInstance>,&UE::CoreUObject::Private::Copy<FDynamicTextureInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset @ 147e42670

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelStreaming @ 147e42760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelStreaming(void)

{
  if (Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton,
               &Z_Construct_UClass_ULevelStreaming_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature @ 147e427a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature @ 147e427e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance @ 147e42820

UFunction * __cdecl Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_CreateInstance @ 147e42860

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_CreateInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e428a0

void __cdecl
Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bCreatePackagePerAsset_SetBit @ 147e428b0

void __cdecl
Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bOverrideLandscapeExportLOD_SetBit @ 147e428c0

void __cdecl
Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::
NewProp_bOverrideLandscapeExportLOD_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bBakeFoliageToLandscape_SetBit @ 147e428d0

void __cdecl
Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::
NewProp_bBakeFoliageToLandscape_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// NewProp_bBakeGrassToLandscape_SetBit @ 147e428e0

void __cdecl
Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x151) = 1;
  return;
}

// NewStructOps @ 147e428f0

void * __cdecl Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSimplificationDetails,&UE::CoreUObject::Private::Construct<FLevelSimplificationDetails>,&UE::CoreUObject::Private::ConstructForTests<FLevelSimplificationDetails>,&UE::CoreUObject::Private::Destruct<FLevelSimplificationDetails>,&UE::CoreUObject::Private::Copy<FLevelSimplificationDetails>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval @ 147e42930

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBlueprintTypeConversions @ 147e42970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintTypeConversions(void)

{
  if (Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton,
               &Z_Construct_UClass_UBlueprintTypeConversions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintTypeConversions.OuterSingleton;
}

// Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor @ 147e429b0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel @ 147e429f0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType @ 147e42a30

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertArrayType_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName @ 147e42b30

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 147e42b70

void * __cdecl
Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FReplicatedStaticActorDestructionInfo,&UE::CoreUObject::Private::Construct<FReplicatedStaticActorDestructionInfo>,&UE::CoreUObject::Private::ConstructForTests<FReplicatedStaticActorDestructionInfo>,&UE::CoreUObject::Private::Destruct<FReplicatedStaticActorDestructionInfo>,&UE::CoreUObject::Private::Copy<FReplicatedStaticActorDestructionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f @ 147e42bb0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2dToFBox2f_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e42bf0

void __cdecl
Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_ULevel_NoRegister @ 147e42c00

UClass * __cdecl Z_Construct_UClass_ULevel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULevel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Level",&Z_Registration_Info_UClass_ULevel.InnerSingleton,
               ULevel::StaticRegisterNativesULevel,0x3f0,8,CLASS_Intrinsic,CASTCLASS_ULevel,
               L"Engine",InternalConstructor<ULevel>,InternalVTableHelperCtorCaller<ULevel>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevel.InnerSingleton;
}

// Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded @ 147e42cc0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d @ 147e42d10

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFBox2fToFBox2d_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e42d50

void __cdecl
Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f @ 147e42d60

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44dToFMatrix44f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_IsLevelVisible @ 147e42da0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_IsLevelVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e42de0

void __cdecl
Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d @ 147e42eb0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFMatrix44fToFMatrix44d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending @ 147e42ef0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRequestingUnloadAndRemoval_SetBit @ 147e42f30

void __cdecl
Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::
NewProp_bInIsRequestingUnloadAndRemoval_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsLightingScenario_SetBit @ 147e42f40

void __cdecl Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x240) = *(byte *)((longlong)param_1 + 0x240) | 1;
  return;
}

// NewProp_bTextureStreamingRotationChanged_SetBit @ 147e42f50

void __cdecl
Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x240) = *(byte *)((longlong)param_1 + 0x240) | 8;
  return;
}

// NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit @ 147e42f60

void __cdecl
Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x240) = *(byte *)((longlong)param_1 + 0x240) | 0x10;
  return;
}

// NewProp_bIsVisible_SetBit @ 147e42f70

void __cdecl Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x240) = *(byte *)((longlong)param_1 + 0x240) | 0x20;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f @ 147e42f80

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4dToFPlane4f_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsPartitioned_SetBit @ 147e42fc0

void __cdecl Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x243) = *(byte *)((longlong)param_1 + 0x243) | 2;
  return;
}

// Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval @ 147e42fd0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d @ 147e43010

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFPlane4fToFPlane4d_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex @ 147e43050

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f @ 147e43090

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4dToFQuat4f_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_SetPriority @ 147e430d0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_SetPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d @ 147e43110

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFQuat4fToFQuat4d_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInShouldBeLoaded_SetBit @ 147e43150

void __cdecl
Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_ULevelStreamingLevelInstance @ 147e43160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelStreamingLevelInstance(void)

{
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton,
               &Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton;
}

// Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded @ 147e431a0

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f @ 147e431e0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3dToFRotator3f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInShouldBeVisible_SetBit @ 147e43220

void __cdecl
Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible @ 147e43230

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d @ 147e43270

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFRotator3fToFRotator3d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e432b0

void __cdecl
Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f @ 147e432c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3dToFTransform3f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded @ 147e43300

UFunction * __cdecl Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALevelScriptActor @ 147e43340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelScriptActor(void)

{
  if (Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton,
               &Z_Construct_UClass_ALevelScriptActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d @ 147e43380

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFTransform3fToFTransform3d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bClientOnlyVisible_SetBit @ 147e433c0

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bShouldBeVisible_SetBit @ 147e433d0

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf8) = *(byte *)((longlong)param_1 + 0xf8) | 8;
  return;
}

// NewProp_bShouldBeLoaded_SetBit @ 147e433e0

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf8) = *(byte *)((longlong)param_1 + 0xf8) | 0x10;
  return;
}

// NewProp_bLocked_SetBit @ 147e433f0

void __cdecl Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 1;
  return;
}

// NewProp_bIsStatic_SetBit @ 147e43400

void __cdecl Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 2;
  return;
}

// NewProp_bShouldBlockOnLoad_SetBit @ 147e43410

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 4;
  return;
}

// NewProp_bShouldBlockOnUnload_SetBit @ 147e43420

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 8;
  return;
}

// NewProp_bDisableDistanceStreaming_SetBit @ 147e43430

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x10;
  return;
}

// NewProp_bDrawOnLevelStatusMap_SetBit @ 147e43440

void __cdecl
Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x20;
  return;
}

// Z_Construct_UFunction_ALevelScriptActor_LevelReset @ 147e43450

UFunction * __cdecl Z_Construct_UFunction_ALevelScriptActor_LevelReset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f @ 147e43490

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2dToFVector2f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e434d0

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d @ 147e434e0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector2fToFVector2d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelScriptActor_RemoteEvent @ 147e43520

UFunction * __cdecl Z_Construct_UFunction_ALevelScriptActor_RemoteEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCinematicMode_SetBit @ 147e43560

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bHidePlayer_SetBit @ 147e43570

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bAffectsHUD_SetBit @ 147e43580

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f @ 147e43590

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3dToFVector3f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAffectsMovement_SetBit @ 147e435d0

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bAffectsTurning_SetBit @ 147e435e0

void __cdecl
Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d @ 147e435f0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector3fToFVector3d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode @ 147e43630

UFunction * __cdecl Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f @ 147e43670

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4dToFVector4f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d @ 147e436b0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertFVector4fToFVector4d_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged @ 147e436f0

UFunction * __cdecl Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInputEnabled_SetBit @ 147e43730

void __cdecl
Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c0) = *(uint *)((longlong)param_1 + 0x2c0) | 1;
  return;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType @ 147e43740

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertMapType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType @ 147e43780

UFunction * __cdecl Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintTypeConversions_ConvertSetType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideAsset @ 147e437c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideAsset(void)

{
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton,
               &Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.OuterSingleton;
}

// Z_Construct_UClass_ULevelInstancePropertyOverridePolicy @ 147e43800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverridePolicy(void)

{
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton,
               &Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.OuterSingleton;
}

// Z_Construct_UClass_ULevelInstanceSettings @ 147e439b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceSettings(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSettings.OuterSingleton;
}

// Z_Construct_UClass_ULevelScriptBlueprint @ 147e43ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelScriptBlueprint(void)

{
  if (Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton,
               &Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton;
}

// Z_Construct_UClass_ULevelActorContainer @ 147e43b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelActorContainer(void)

{
  if (Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton,
               &Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton;
}

// Z_Construct_UClass_ULayer @ 147e43e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULayer(void)

{
  if (Z_Registration_Info_UClass_ULayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULayer.OuterSingleton,
               &Z_Construct_UClass_ULayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULayer.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLayerActorStats @ 147e43e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLayerActorStats(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLayerActorStats.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLayerActorStats.InnerSingleton,
               &Z_Construct_UScriptStruct_FLayerActorStats_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLayerActorStats.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLayerActorStats.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 147e43f10

void * __cdecl Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLayerActorStats,&UE::CoreUObject::Private::Construct<FLayerActorStats>,&UE::CoreUObject::Private::ConstructForTests<FLayerActorStats>,&UE::CoreUObject::Private::Destruct<FLayerActorStats>,&UE::CoreUObject::Private::Copy<FLayerActorStats>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsVisible_SetBit @ 147e43f90

void __cdecl Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy @ 147e44150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy(void)

{
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton
               ,&Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.OuterSingleton;
}

// Z_Construct_UClass_ALevelBounds @ 147e44430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelBounds(void)

{
  if (Z_Registration_Info_UClass_ALevelBounds.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelBounds.OuterSingleton,
               &Z_Construct_UClass_ALevelBounds_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelBounds.OuterSingleton;
}

// NewProp_bAutoUpdateBounds_SetBit @ 147e44470

void __cdecl
Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 1;
  return;
}

// Z_Construct_UClass_UImportanceSamplingLibrary @ 147e44af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImportanceSamplingLibrary(void)

{
  if (Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton,
               &Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImportanceSamplingLibrary.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EImportanceWeight @ 147e44b30

UEnum * __cdecl Z_Construct_UEnum_Engine_EImportanceWeight(void)

{
  if (Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton,
               &Z_Construct_UEnum_Engine_EImportanceWeight_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EImportanceWeight.InnerSingleton;
}

// Z_Construct_UScriptStruct_FImportanceTexture @ 147e44b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImportanceTexture(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImportanceTexture.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImportanceTexture.InnerSingleton,
               &Z_Construct_UScriptStruct_FImportanceTexture_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImportanceTexture.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImportanceTexture.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EImportanceWeight_StaticEnum @ 147e44bf0

UEnum * __cdecl EImportanceWeight_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight,(UObject *)pUVar1,
                       L"EImportanceWeight");
  }
  return Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton;
}

// NewStructOps @ 147e44d70

void * __cdecl Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImportanceTexture,&UE::CoreUObject::Private::Construct<FImportanceTexture>,&UE::CoreUObject::Private::ConstructForTests<FImportanceTexture>,&UE::CoreUObject::Private::Destruct<FImportanceTexture>,&UE::CoreUObject::Private::Copy<FImportanceTexture>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelInstanceComponent_NoRegister @ 147e44de0

UClass * __cdecl Z_Construct_UClass_ULevelInstanceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceComponent",
               &Z_Registration_Info_UClass_ULevelInstanceComponent.InnerSingleton,
               ULevelInstanceComponent::StaticRegisterNativesULevelInstanceComponent,0x250,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceComponent>,
               InternalVTableHelperCtorCaller<ULevelInstanceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceComponent.InnerSingleton;
}

// Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture @ 147e44f60

UFunction * __cdecl Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALevelInstance @ 147e44fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelInstance(void)

{
  if (Z_Registration_Info_UClass_ALevelInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelInstance.OuterSingleton,
               &Z_Construct_UClass_ALevelInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelInstance.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 147e44fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
`CollectReferences<UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>,FActorClusterReferenceProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<FActorClusterReferenceProcessor,UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// operator<<<AActor_*,TSizedDefaultAllocator<32>_> @ 147e45190

FArchive * __cdecl
operator<<<AActor_*,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

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
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
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
            (**(code **)(*(longlong *)param_1 + 0x168))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
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
        TArray<AActor_*,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x168))(param_1);
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

// operator<<<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_> @ 147e451a0

FArchive * __cdecl
operator<<<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_> *param_2)

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
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
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
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
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
        TArray<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
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

// operator<<<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 147e451b0

FArchive * __cdecl
operator<<<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4effe;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147e4effe:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147e4f0db;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147e4f0db:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (ulonglong *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 147e451c0

FArchive * __cdecl
operator<<<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4f2ce;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_147e4f2ce:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147e4f3ab;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_147e4f3ab:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (ulonglong *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator> @ 147e451d0

FArchive * __cdecl
operator<<<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147e4f59e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147e4f59e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147e4f67b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147e4f67b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FDynamicTextureInstance,TSizedDefaultAllocator<32>_> @ 147e451e0

FArchive * __cdecl
operator<<<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FDynamicTextureInstance *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x58);
  iVar11 = 0;
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
                (0x58,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8bb)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FDynamicTextureInstance *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x58));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x858,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FDynamicTextureInstance *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x58);
              DefaultConstructItems<FDynamicTextureInstance,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// operator<<<FStreamableTextureInstance,TSizedDefaultAllocator<32>_> @ 147e451f0

FArchive * __cdecl
operator<<<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_> *param_2
          )

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
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
                (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
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
            operator<<(param_1,(FStreamableTextureInstance *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48));
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
        TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
        ;
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FStreamableTextureInstance *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x48));
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

// operator<<<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e45200

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e4550c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_147e4550c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar7);
        TArrayPrivateFriend::Serialize<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_> *)
                           (lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,puVar10);
        TArrayPrivateFriend::Serialize<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_> *)
                           (puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e45590

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e4589c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_147e4589c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar7);
        TArrayPrivateFriend::Serialize<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_> *)
                           (lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,puVar10);
        TArrayPrivateFriend::Serialize<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_> *)
                           (puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e45920

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e45c2c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_147e45c2c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar8 = *(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,lVar8);
        operator<<(param_1,(bool *)(lVar8 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar11 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined1 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          puVar11 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,puVar11);
        operator<<(param_1,(bool *)(puVar11 + 1));
        uVar10 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_> @ 147e45cb0

FArchive * __cdecl
operator<<<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  FCompressedVisibilityChunk *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
      DestructItems<FCompressedVisibilityChunk,int>
                ((FCompressedVisibilityChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
              operator<<(param_1,(FCompressedVisibilityChunk *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FCompressedVisibilityChunk *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FCompressedVisibilityChunk,int>(pFVar2,1);
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

// operator<<<FPrecomputedVisibilityBucket,TSizedDefaultAllocator<32>_> @ 147e45cc0

FArchive * __cdecl
operator<<<FPrecomputedVisibilityBucket,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FPrecomputedVisibilityBucket,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FPrecomputedVisibilityBucket *pFVar2;
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
      DestructItems<FPrecomputedVisibilityBucket,int>
                ((FPrecomputedVisibilityBucket *)(param_2->AllocatorInstance).Data,param_2->ArrayNum
                );
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
              operator<<(param_1,(FPrecomputedVisibilityBucket *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FPrecomputedVisibilityBucket,TSizedDefaultAllocator<32>_>::Empty
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
              pFVar2 = (FPrecomputedVisibilityBucket *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FPrecomputedVisibilityBucket,int>(pFVar2,1);
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

// operator<<<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_> @ 147e45cd0

FArchive * __cdecl
operator<<<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_> *param_2
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
            operator<<(param_1,(FPrecomputedVisibilityCell *)
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
        TArray<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
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
          operator<<(param_1,(FPrecomputedVisibilityCell *)(pFVar3 + (longlong)iVar6 * 0x20));
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

// CastChecked<AActor,ILevelInstanceInterface_const_> @ 147e45ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl
CastChecked<AActor,ILevelInstanceInterface_const_>(ILevelInstanceInterface *param_1)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (ILevelInstanceInterface *)0x0) {
    pFVar4 = GetTypeName<AActor>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pAVar2 = (AActor *)(**(code **)((longlong)*param_1 + 8))();
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  pFVar4 = GetTypeName<AActor>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<ILevelInstanceInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// CastChecked<AActor,ILevelInstanceInterface> @ 147e45db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl CastChecked<AActor,ILevelInstanceInterface>(ILevelInstanceInterface *param_1)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (ILevelInstanceInterface *)0x0) {
    pFVar4 = GetTypeName<AActor>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pAVar2 = (AActor *)(**(code **)((longlong)*param_1 + 8))();
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  pFVar4 = GetTypeName<AActor>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<ILevelInstanceInterface>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// CastChecked<ABrush,AActor> @ 147e45e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABrush * __cdecl CastChecked<ABrush,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ABrush *)0x0;
    }
    pFVar3 = GetTypeName<ABrush>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ABrush_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ABrush *)param_1;
  }
  pFVar3 = GetTypeName<ABrush>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULevelInstanceSubsystem,UObject> @ 147e45f60

ULevelInstanceSubsystem * __cdecl CastChecked<ULevelInstanceSubsystem,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULevelInstanceSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ULevelInstanceSubsystem::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULevelInstanceSubsystem *)param_1;
  }
  pFVar3 = GetTypeName<ULevelInstanceSubsystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWorld,UObject> @ 147e46020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl CastChecked<UWorld,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWorld>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWorld *)param_1;
  }
  pFVar3 = GetTypeName<UWorld>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int> @ 147e460e0

void __cdecl
ConstructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int>
          (void *param_1,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>
          *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    plVar2 = (longlong *)((longlong)param_1 + 0x10);
    do {
      plVar2[-2] = *(longlong *)((longlong)plVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1))
      ;
      plVar2[-1] = plVar3[-1];
      lVar1 = *plVar3;
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar3 = plVar3 + 3;
      plVar2 = plVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FDynamicTextureInstance,int> @ 147e46f10

void __cdecl DefaultConstructItems<FDynamicTextureInstance,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x50);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStreamableTextureInstance,int> @ 147e46f40

void __cdecl DefaultConstructItems<FStreamableTextureInstance,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FCompressedVisibilityChunk,int> @ 147e46f50

void __cdecl DefaultConstructItems<FCompressedVisibilityChunk,int>(void *param_1,int param_2)

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

// DefaultConstructItems<FPrecomputedVisibilityBucket,int> @ 147e46f80

void __cdecl DefaultConstructItems<FPrecomputedVisibilityBucket,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPrecomputedVisibilityCell,int> @ 147e46fb0

void __cdecl DefaultConstructItems<FPrecomputedVisibilityCell,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int> @ 147e46fe0

void __cdecl
DestructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int>
          (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FText,TSoftObjectPtr<UWorld>_>,int> @ 147e47020

void __cdecl
DestructItems<TTuple<FText,TSoftObjectPtr<UWorld>_>,int>
          (TTuple<FText,TSoftObjectPtr<UWorld>_> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)&param_1->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x28);
    }
    if (*(longlong **)param_1 != (longlong *)0x0) {
      (**(code **)(**(longlong **)param_1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FReplicatedStaticActorDestructionInfo,int> @ 147e47070

void __cdecl
DestructItems<FReplicatedStaticActorDestructionInfo,int>
          (FReplicatedStaticActorDestructionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FullName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCompressedVisibilityChunk,int> @ 147e470b0

void __cdecl
DestructItems<FCompressedVisibilityChunk,int>(FCompressedVisibilityChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FCompressedVisibilityChunk *)(&param_1->Data + 1);
  }
  return;
}

// DestructItems<FPrecomputedVisibilityBucket,int> @ 147e470f0

void __cdecl
DestructItems<FPrecomputedVisibilityBucket,int>(FPrecomputedVisibilityBucket *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CellDataChunks;
    do {
      DestructItems<FCompressedVisibilityChunk,int>
                ((FCompressedVisibilityChunk *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l15::TSTR_ApplyWorldOffset_PLV4877>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e49140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ULevel::ApplyWorldOffset_::__l15::TSTR_ApplyWorldOffset_PLV4877>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l15::TSTR_ApplyWorldOffset_PLV4877>::Get
                      ();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e49291;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e49485;
  }
LAB_147e49291:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e4936f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e4936f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e49485:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l28::TSTR_ApplyWorldOffset_PLV4903>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e494c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ULevel::ApplyWorldOffset_::__l28::TSTR_ApplyWorldOffset_PLV4903>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l28::TSTR_ApplyWorldOffset_PLV4903>::Get
                      ();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e49611;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e49805;
  }
LAB_147e49611:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e496ef:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e496ef;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e49805:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FetchTextureData<FColor> @ 147e49840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FetchTextureData<FColor>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> *param_2,
          int *param_3,UTexture2D *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TIntPoint<int>_u_0 TVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 local_88 [8];
  longlong local_80;
  int local_78;
  int iStack_74;
  longlong local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar7 = UTexture2D::GetNumMips(param_4);
  iVar15 = iVar7 + -0xb;
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  iVar7 = iVar7 - iVar15;
  *param_3 = iVar7;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar7,&local_68,(int *)&local_60,(int *)((longlong)&local_60 + 4));
  memset(local_68.Data + (longlong)iVar8 * 8,0,(longlong)iVar7 << 3);
  UTexture2D::GetMipData(param_4,iVar15,(void **)local_68.Data);
  iVar7 = UTexture2D::GetSizeY(param_4);
  iVar8 = UTexture2D::GetSizeX(param_4);
  iVar7 = iVar7 + -1 >> ((byte)iVar15 & 0x1f);
  iVar15 = iVar8 + -1 >> ((byte)iVar15 & 0x1f);
  iStack_74 = iVar7 + 1;
  local_78 = iVar15 + 1;
  TVar3._s_0.Y = iStack_74;
  TVar3._s_0.X = local_78;
  param_2->field0_0x0 = TVar3;
  bVar10 = (char)*param_3 - 1;
  iVar15 = iStack_74 * local_78 * 4 -
           ((iVar7 >> (bVar10 & 0x1f)) + 1) * ((iVar15 >> (bVar10 & 0x1f)) + 1);
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,iVar15 / 3 + (iVar15 >> 0x1f) +
                     (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f
                          ),Default);
  fVar4 = __real_3b808081;
  uVar13 = 0;
  if (0 < *param_3) {
    local_80 = 0;
    do {
      uVar14 = 0;
      iVar15 = (param_2->field0_0x0)._s_0.X;
      iVar7 = (param_2->field0_0x0)._s_0.Y;
      iVar8 = ((iVar7 + -1 >> ((byte)uVar13 & 0x1f)) + 1) *
              ((iVar15 + -1 >> ((byte)uVar13 & 0x1f)) + 1);
      local_70 = (longlong)iVar8;
      if (0 < iVar8) {
        uVar16 = uVar14;
        do {
          lVar5 = local_80;
          uVar9 = 0;
          if ((int)uVar13 < (int)local_60) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = *(uint *)(*(longlong *)(local_68.Data + lVar5) + uVar14 * 4);
          fStack_4c = (float)(uVar9 >> 0x18) * fVar4;
          if ((param_4->_padding_ & 0x1000000000000) == 0) {
            local_58 = (float)(uVar9 >> 0x10 & 0xff) * fVar4;
            fStack_54 = (float)(uVar9 >> 8 & 0xff) * fVar4;
            fStack_50 = (float)(uVar9 & 0xff) * fVar4;
          }
          else {
            local_58 = FLinearColor::sRGBToLinearTable[uVar9 >> 0x10 & 0xff];
            fStack_54 = FLinearColor::sRGBToLinearTable[uVar9 >> 8 & 0xff];
            fStack_50 = FLinearColor::sRGBToLinearTable[uVar9 & 0xff];
          }
          uVar11 = (int)uVar16 + ((iVar7 * iVar15 - iVar8) * 4) / 3;
          uVar9 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar14 = uVar14 + 1;
          pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
          *(ulonglong *)pFVar1 = CONCAT44(fStack_54,local_58);
          *(ulonglong *)(pFVar1 + 8) = CONCAT44(fStack_4c,fStack_50);
        } while ((longlong)uVar14 < local_70);
      }
      local_80 = local_80 + 8;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *param_3);
  }
  iVar15 = (int)local_60;
  uVar14 = (ulonglong)(int)local_60;
  pFVar1 = local_68.Data + uVar14 * 8;
  FVar12.Data = local_68.Data;
  while( true ) {
    if ((int)uVar14 != iVar15) {
      `TCheckedPointerIterator<FColor_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
    }
    if (FVar12.Data == pFVar1) break;
    FMemory::Free(*(void **)FVar12.Data);
    uVar14 = local_60 & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// FetchTextureData<FLinearColor> @ 147e49c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FetchTextureData<FLinearColor>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> *param_2,
          int *param_3,UTexture2D *param_4)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 local_78 [8];
  longlong local_70;
  int local_68;
  int iStack_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar15 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  iVar7 = UTexture2D::GetNumMips(param_4);
  iVar16 = iVar7 + -0xb;
  if (iVar7 + -0xb < 0) {
    iVar16 = 0;
  }
  iVar7 = iVar7 - iVar16;
  *param_3 = iVar7;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar7,&local_60,(int *)&local_58,(int *)((longlong)&local_58 + 4));
  memset(local_60.Data + (longlong)iVar8 * 8,0,(longlong)iVar7 << 3);
  UTexture2D::GetMipData(param_4,iVar16,(void **)local_60.Data);
  iVar7 = UTexture2D::GetSizeY(param_4);
  iVar8 = UTexture2D::GetSizeX(param_4);
  iVar7 = iVar7 + -1 >> ((byte)iVar16 & 0x1f);
  iVar16 = iVar8 + -1 >> ((byte)iVar16 & 0x1f);
  iStack_64 = iVar7 + 1;
  local_68 = iVar16 + 1;
  TVar4._s_0.Y = iStack_64;
  TVar4._s_0.X = local_68;
  param_2->field0_0x0 = TVar4;
  bVar10 = (char)*param_3 - 1;
  iVar16 = iStack_64 * local_68 * 4 -
           ((iVar7 >> (bVar10 & 0x1f)) + 1) * ((iVar16 >> (bVar10 & 0x1f)) + 1);
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,iVar16 / 3 + (iVar16 >> 0x1f) +
                     (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f
                          ),Default);
  if (0 < *param_3) {
    local_70 = 0;
    do {
      iVar16 = (param_2->field0_0x0)._s_0.Y;
      iVar7 = (param_2->field0_0x0)._s_0.X;
      iVar17 = ((iVar7 + -1 >> ((byte)uVar15 & 0x1f)) + 1) *
               ((iVar16 + -1 >> ((byte)uVar15 & 0x1f)) + 1);
      lVar18 = (longlong)iVar17;
      iVar8 = 0;
      if (0 < iVar17) {
        lVar14 = 0;
        do {
          lVar5 = local_70;
          uVar9 = 0;
          if ((int)uVar15 < (int)local_58) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar12 = ((iVar7 * iVar16 - iVar17) * 4) / 3 + iVar8;
          puVar1 = (undefined4 *)(*(longlong *)(local_60.Data + lVar5) + lVar14);
          local_50 = *puVar1;
          uStack_4c = puVar1[1];
          uStack_48 = puVar1[2];
          uStack_44 = puVar1[3];
          uVar9 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = iVar8 + 1;
          lVar14 = lVar14 + 0x10;
          pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
          *(undefined4 *)pFVar2 = local_50;
          *(undefined4 *)(pFVar2 + 4) = uStack_4c;
          *(undefined4 *)(pFVar2 + 8) = uStack_48;
          *(undefined4 *)(pFVar2 + 0xc) = uStack_44;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      local_70 = local_70 + 8;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < *param_3);
  }
  iVar16 = (int)local_58;
  uVar11 = (ulonglong)(int)local_58;
  pFVar2 = local_60.Data + uVar11 * 8;
  FVar13.Data = local_60.Data;
  while( true ) {
    if ((int)uVar11 != iVar16) {
      `TCheckedPointerIterator<FLinearColor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_78);
    }
    if (FVar13.Data == pFVar2) break;
    FMemory::Free(*(void **)FVar13.Data);
    uVar11 = local_58 & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// FetchTextureData<FFloat16Color> @ 147e49f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FetchTextureData<FFloat16Color>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> *param_2,
          int *param_3,UTexture2D *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FLinearColor *pFVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 local_88 [8];
  FFloat16Color local_80;
  longlong local_78;
  int local_70;
  int iStack_6c;
  ForAnyElementType local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  FLinearColor local_48;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar6 = UTexture2D::GetNumMips(param_4);
  iVar16 = iVar6 + -0xb;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  iVar6 = iVar6 - iVar16;
  *param_3 = iVar6;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,&local_68,(int *)&local_60,(int *)((longlong)&local_60 + 4));
  memset(local_68.Data + (longlong)iVar7 * 8,0,(longlong)iVar6 << 3);
  UTexture2D::GetMipData(param_4,iVar16,(void **)local_68.Data);
  iVar6 = UTexture2D::GetSizeY(param_4);
  iVar7 = UTexture2D::GetSizeX(param_4);
  iVar6 = iVar6 + -1 >> ((byte)iVar16 & 0x1f);
  iVar16 = iVar7 + -1 >> ((byte)iVar16 & 0x1f);
  iStack_6c = iVar6 + 1;
  local_70 = iVar16 + 1;
  TVar4._s_0.Y = iStack_6c;
  TVar4._s_0.X = local_70;
  param_2->field0_0x0 = TVar4;
  bVar10 = (char)*param_3 - 1;
  iVar16 = iStack_6c * local_70 * 4 -
           ((iVar6 >> (bVar10 & 0x1f)) + 1) * ((iVar16 >> (bVar10 & 0x1f)) + 1);
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,iVar16 / 3 + (iVar16 >> 0x1f) +
                     (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f
                          ),Default);
  uVar14 = 0;
  if (0 < *param_3) {
    local_78 = 0;
    do {
      uVar11 = 0;
      iVar16 = (param_2->field0_0x0)._s_0.Y;
      iVar6 = (param_2->field0_0x0)._s_0.X;
      iVar7 = ((iVar6 + -1 >> ((byte)uVar14 & 0x1f)) + 1) *
              ((iVar16 + -1 >> ((byte)uVar14 & 0x1f)) + 1);
      if (0 < iVar7) {
        uVar15 = uVar11;
        do {
          lVar2 = local_78;
          uVar8 = 0;
          if ((int)uVar14 < (int)local_60) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)(local_68.Data + lVar2);
          local_80.R.Encoded = *(ushort *)(lVar2 + uVar15 * 8);
          local_80.G.Encoded = *(ushort *)(lVar2 + 2 + uVar15 * 8);
          local_80.B.Encoded = *(ushort *)(lVar2 + 4 + uVar15 * 8);
          local_80.A.Encoded = *(ushort *)(lVar2 + 6 + uVar15 * 8);
          pFVar9 = FLinearColor::FLinearColor(&local_48,&local_80);
          uVar12 = ((iVar6 * iVar16 - iVar7) * 4) / 3 + (int)uVar11;
          local_58 = (pFVar9->field0_0x0)._s_0.R;
          fStack_54 = (pFVar9->field0_0x0)._s_0.G;
          fStack_50 = (pFVar9->field0_0x0)._s_0.B;
          fStack_4c = (pFVar9->field0_0x0)._s_0.A;
          uVar8 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar15 = uVar15 + 1;
          pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
          *(float *)pFVar1 = local_58;
          *(float *)(pFVar1 + 4) = fStack_54;
          *(float *)(pFVar1 + 8) = fStack_50;
          *(float *)(pFVar1 + 0xc) = fStack_4c;
        } while ((longlong)uVar15 < (longlong)iVar7);
      }
      local_78 = local_78 + 8;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *param_3);
  }
  iVar16 = (int)local_60;
  uVar11 = (ulonglong)(int)local_60;
  pFVar1 = local_68.Data + uVar11 * 8;
  FVar13.Data = local_68.Data;
  while( true ) {
    if ((int)uVar11 != iVar16) {
      `TCheckedPointerIterator<FFloat16Color_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_88);
    }
    if (FVar13.Data == pFVar1) break;
    FMemory::Free(*(void **)FVar13.Data);
    uVar11 = local_60 & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,1,`ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>_> @ 147e4a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  longlong local_1a0;
  longlong *local_198;
  TObjectPtr<UClass>_u_0 local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147e4a820;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e4a820:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147e4a8bf;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_164 = local_1a8 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_147e4a8bf:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e4a9c0;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar15 = local_1a4 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_147e4a9c0:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      local_1a0 = lVar14;
      if (((*(byte *)(lVar14 + 0x98) & 1) == 0) && ((*(byte *)(lVar14 + 0x99) & 0x20) != 0)) {
        local_198 = &local_1a0;
        ``ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::
        operator()(&local_198);
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1b0 = *(longlong *)(lVar14 + 600), local_1b0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1b0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1d0 = (longlong)local_38;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_100.SecondaryData;
            }
            local_1d8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,0,`ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>_> @ 147e4ac40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,0,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  longlong local_b8;
  longlong *local_b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar9->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar4 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar4 * 8) != &pUVar10->_padding_
       )) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_147e4ad42;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_147e4ad42:
  iStack_a0 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  pTVar2 = &this->OwnedComponents;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_147e4adcd;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_9c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_8c = (int)lVar11 + -1 + local_88;
    if (iVar4 < iStack_8c) {
      iStack_8c = iVar4;
    }
  }
LAB_147e4adcd:
  uStack_84 = local_2c;
  iStack_80 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_90 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_70._28_4_ = local_2c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_147e4aed1;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_147e4aed1:
  while( true ) {
    pTVar7 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar11 = *(longlong *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (((lVar11 != 0) && (local_b8 = lVar11, (*(byte *)(lVar11 + 0x98) & 1) == 0)) &&
       ((*(byte *)(lVar11 + 0x99) & 0x20) != 0)) {
      local_b0 = &local_b8;
      ``ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::
      operator()(&local_b0);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,1,`ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>_> @ 147e4af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147e4b05f;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e4b05f:
  local_3c = 0x18;
  local_1b0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_147e4b111;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b8 = (int)lVar14;
    iStack_16c = local_1b8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_147e4b111:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1b0;
  local_178 = puVar3;
  local_158 = local_1b0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1b0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e4b220;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b4 = (int)lVar14;
    uVar19 = local_1b4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147e4b220:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
          (local_1a8 = lVar14, (*(byte *)(lVar14 + 0x98) & 1) == 0)) &&
         ((*(byte *)(lVar14 + 0x99) & 0x20) != 0)) {
        local_1a0 = &local_1a8;
        ``ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::
        operator()(&local_1a0);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1c0 = *(longlong *)(lVar14 + 600), local_1c0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1c0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,0,`ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>_> @ 147e4b4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,0,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  UClass *pUVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  longlong local_c8;
  longlong *local_c0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_147e4b59a;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e4b59a:
  iStack_b0 = 0;
  pTVar16 = &this->OwnedComponents;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      iStack_b0 = iStack_b0 + 1;
      local_98 = local_98 + 0x20;
      iStack_9c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_b0) goto LAB_147e4b622;
      uVar13 = puVar15[iStack_b0];
    }
    uStack_ac = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_9c = local_res20 + -1 + local_98;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_147e4b622:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_a0 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar16;
  local_a8 = puVar2;
  local_88 = pTVar16;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar14 = puVar6;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      iVar12 = iVar12 + 1;
      uVar17 = uVar17 + 0x20;
      uVar13 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar12) goto LAB_147e4b730;
      uVar13 = *(uint *)(puVar14 + (longlong)iVar12 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_147e4b730:
  while( true ) {
    pTVar9 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar16))
    break;
    lVar7 = *(longlong *)
             (*(longlong *)&pTVar9->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    if (lVar7 != 0) {
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         ((local_c8 = lVar7, (*(byte *)(lVar7 + 0x98) & 1) == 0 &&
          ((*(byte *)(lVar7 + 0x99) & 0x20) != 0)))) {
        local_c0 = &local_c8;
        ``ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::
        operator()(&local_c0);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// GetFullNameForCastLogError<ILevelInstanceInterface_const_> @ 147e4b820

FString * __cdecl
GetFullNameForCastLogError<ILevelInstanceInterface_const_>
          (FString *__return_storage_ptr__,ILevelInstanceInterface *param_1)

{
  UObjectBaseUtility *this;
  
  if (param_1 != (ILevelInstanceInterface *)0x0) {
    this = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this != (UObjectBaseUtility *)0x0) goto LAB_147e4b83e;
  }
  this = (UObjectBaseUtility *)0x0;
LAB_147e4b83e:
  UObjectBaseUtility::GetFullName(this,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<ILevelInstanceInterface> @ 147e4b860

FString * __cdecl
GetFullNameForCastLogError<ILevelInstanceInterface>
          (FString *__return_storage_ptr__,ILevelInstanceInterface *param_1)

{
  UObjectBaseUtility *this;
  
  if (param_1 != (ILevelInstanceInterface *)0x0) {
    this = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this != (UObjectBaseUtility *)0x0) goto LAB_147e4b87e;
  }
  this = (UObjectBaseUtility *)0x0;
LAB_147e4b87e:
  UObjectBaseUtility::GetFullName(this,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ABrush> @ 147e4b930

FString * __cdecl GetTypeName<ABrush>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ABrush_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ULevelInstanceSubsystem> @ 147e4b970

FString * __cdecl GetTypeName<ULevelInstanceSubsystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ULevelInstanceSubsystem::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWorld> @ 147e4b9b0

FString * __cdecl GetTypeName<UWorld>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<ALevelBounds> @ 147e4b9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelBounds>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  USceneComponent *pUVar3;
  longlong lVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),Never);
    this->_padding_ = (longlong)&ALevelBounds::_vftable__for__AActor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&ALevelBounds::_vftable__for__FTickableGameObject__;
    pFVar5 = FName::FName(&local_res8,L"BoxComponent0");
    FVar2 = *pFVar5;
    pUVar6 = Z_Construct_UClass_UBoxComponent_NoRegister();
    pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    this[1]._padding_ = (longlong)pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    pUVar3 = (USceneComponent *)this[1]._padding_;
    (this->RootComponent).field0_0x0.DebugPtr = pUVar3;
    (pUVar3->Mobility).Value = '\x02';
    local_28._s_0.X = DefaultLevelSize.field0_0x0._s_0.X;
    local_28._s_0.Y = DefaultLevelSize.field0_0x0._s_0.Y;
    local_28._s_0.Z = DefaultLevelSize.field0_0x0._s_0.Z;
    USceneComponent::SetRelativeScale3D
              ((USceneComponent *)this[1]._padding_,(TVector<double> *)&local_28._s_0);
    UActorComponent::SetCanEverAffectNavigation((UActorComponent *)this[1]._padding_,false);
    *(undefined1 *)&this[1]._padding_ = 1;
    pbVar1 = (byte *)(this[1]._padding_ + 0x554);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(this[1]._padding_ + 0x1a9);
    *pbVar1 = *pbVar1 & 0xdf;
    pbVar1 = (byte *)(this[1]._padding_ + 0x281);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(*(longlong *)this[1]._padding_ + 0x788))
              ((longlong *)this[1]._padding_,UCollisionProfile::NoCollision_ProfileName,1);
    lVar4 = this[1]._padding_;
    *(undefined8 *)(lVar4 + 0x568) = 0x3fe0000000000000;
    *(undefined8 *)(lVar4 + 0x570) = 0x3fe0000000000000;
    *(undefined8 *)(lVar4 + 0x578) = 0x3fe0000000000000;
    AActor::SetCanBeDamaged(this,false);
  }
  return;
}

// InternalConstructor<ALevelInstance> @ 147e4bb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelInstance>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  USceneComponent *pUVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ALevelInstance::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ = (longlong)&ALevelInstance::_vftable__for__ILevelInstanceInterface__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].PrimaryActorTick,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = (longlong)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined ***)&this[1].RemoteRole = &___7FLevelInstanceActorImpl__6B_;
    *(AActor **)&this[1].CustomTimeDilation = this + 1;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    pFVar3 = FName::FName(&local_res8,L"Root");
    FVar1 = *pFVar3;
    pUVar4 = ULevelInstanceComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pUVar2 = (USceneComponent *)this[1]._padding_;
    (this->RootComponent).field0_0x0.DebugPtr = pUVar2;
    (pUVar2->Mobility).Value = '\0';
  }
  return;
}

// InternalConstructor<ALevelInstanceEditorInstanceActor> @ 147e4bd10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelInstanceEditorInstanceActor>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelInstanceEditorInstanceActor__6B_;
    pFVar3 = FName::FName(&local_res8,L"RootComponent");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar5 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar5;
    (pUVar5->Mobility).Value = '\0';
    ((this->RootComponent).field0_0x0.DebugPtr)->bIsNotRenderAttachmentRoot = '\x01';
  }
  return;
}

// InternalConstructor<ALevelInstancePivot> @ 147e4bdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelInstancePivot>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&ALevelInstancePivot::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&ALevelInstancePivot::_vftable__for__ILevelInstanceEditorPivotInterface__;
    pFVar2 = FName::FName(&local_res8,L"RootComponent");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
    (pUVar4->Mobility).Value = '\0';
  }
  return;
}

// InternalConstructor<ALevelScriptActor> @ 147e4be70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelScriptActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
    AActor::SetCanBeDamaged(this,false);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 1;
    this->bReplicates = '\x01';
    this->bAlwaysRelevant = '\x01';
    this->bReplayRewindable = '\x01';
    (this->RemoteRole).Value = '\x01';
  }
  return;
}

// InternalConstructor<UActorContainer> @ 147e4bec0

void __cdecl InternalConstructor<UActorContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UActorContainer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UBlueprintTypeConversions> @ 147e4bf20

void __cdecl InternalConstructor<UBlueprintTypeConversions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintTypeConversions__6B_;
  }
  return;
}

// InternalConstructor<UImportanceSamplingLibrary> @ 147e4bf50

void __cdecl InternalConstructor<UImportanceSamplingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UImportanceSamplingLibrary__6B_;
  }
  return;
}

// InternalConstructor<ULayer> @ 147e4bf80

void __cdecl InternalConstructor<ULayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULayer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(uint *)&this[1].field_0x8 = *(uint *)&this[1].field_0x8 | 1;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<ULevel> @ 147e4bfd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevel>(FObjectInitializer *param_1)

{
  if ((ULevel *)param_1->Obj != (ULevel *)0x0) {
    ULevel::ULevel((ULevel *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULevelActorContainer> @ 147e4bff0

void __cdecl InternalConstructor<ULevelActorContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULevelActorContainer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULevelInstanceComponent> @ 147e4c030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelInstanceComponent>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&ULevelInstanceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelInstanceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULevelInstanceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<ULevelInstanceEditorObject> @ 147e4c080

void __cdecl InternalConstructor<ULevelInstanceEditorObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULevelInstanceEditorObject__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstanceInterface> @ 147e4c0b0

void __cdecl InternalConstructor<ULevelInstanceInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7ULevelInstanceInterface__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstancePropertyOverrideAsset> @ 147e4c0e0

void __cdecl InternalConstructor<ULevelInstancePropertyOverrideAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULevelInstancePropertyOverrideAsset__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstancePropertyOverridePolicy> @ 147e4c110

void __cdecl InternalConstructor<ULevelInstancePropertyOverridePolicy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULevelInstancePropertyOverridePolicy__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstancePropertyOverrideSamplePolicy> @ 147e4c140

void __cdecl
InternalConstructor<ULevelInstancePropertyOverrideSamplePolicy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULevelInstancePropertyOverrideSamplePolicy__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstanceSettings> @ 147e4c170

void __cdecl InternalConstructor<ULevelInstanceSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULevelInstanceSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULevelInstanceSubsystem> @ 147e4c1b0

void __cdecl InternalConstructor<ULevelInstanceSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&ULevelInstanceSubsystem::_vftable__for__UWorldSubsystem__;
    this[1]._padding_ =
         (longlong)&ULevelInstanceSubsystem::_vftable__for__IStreamingWorldSubsystemInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].field_0x30 = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x34 = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined8 *)&this[6].field_0x30 = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULevelScriptBlueprint> @ 147e4c330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelScriptBlueprint>(FObjectInitializer *param_1)

{
  UBlueprint *this;
  
  this = (UBlueprint *)param_1->Obj;
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ = (longlong)&ULevelScriptBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)&ULevelScriptBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
  }
  return;
}

// InternalConstructor<ULevelStreaming> @ 147e4c370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelStreaming>(FObjectInitializer *param_1)

{
  if ((ULevelStreaming *)param_1->Obj != (ULevelStreaming *)0x0) {
    ULevelStreaming::ULevelStreaming((ULevelStreaming *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ULevelStreamingLevelInstance> @ 147e4c390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelStreamingLevelInstance>(FObjectInitializer *param_1)

{
  ULevelStreaming *this;
  
  this = (ULevelStreaming *)param_1->Obj;
  if (this != (ULevelStreaming *)0x0) {
    ULevelStreaming::ULevelStreaming(this,param_1);
    this->_padding_ = (longlong)&___7ULevelStreamingLevelInstance__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].WorldAsset.SoftObjectPtr = 0;
    *(undefined8 *)&this[1].WorldAsset.SoftObjectPtr.field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULevelStreamingLevelInstanceEditor> @ 147e4c3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelStreamingLevelInstanceEditor>(FObjectInitializer *param_1)

{
  ULevelStreaming *this;
  bool bVar1;
  UWorld *this_00;
  
  this = (ULevelStreaming *)param_1->Obj;
  if (this != (ULevelStreaming *)0x0) {
    ULevelStreaming::ULevelStreaming(this,param_1);
    this->_padding_ = (longlong)&___7ULevelStreamingAlwaysLoaded__6B_;
    if (this->bShouldBeVisible == '\0') {
      this->field_0xf8 = this->field_0xf8 | 8;
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        this_00 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
        if (this_00 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,this);
        }
      }
    }
    this->_padding_ = (longlong)&___7ULevelStreamingLevelInstanceEditor__6B_;
  }
  return;
}

// InternalConstructor<ULevelStreamingLevelInstanceEditorPropertyOverride> @ 147e4c470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
InternalConstructor<ULevelStreamingLevelInstanceEditorPropertyOverride>(FObjectInitializer *param_1)

{
  ULevelStreaming *this;
  
  this = (ULevelStreaming *)param_1->Obj;
  if (this != (ULevelStreaming *)0x0) {
    ULevelStreaming::ULevelStreaming(this,param_1);
    this->_padding_ = (longlong)&___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ALevelBounds> @ 147e4c4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelBounds>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  AActor *pAVar3;
  
  pAVar3 = (AActor *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelBounds::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ = (longlong)&ALevelBounds::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ALevelBounds::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    pAVar3 = this;
  }
  return (UObject *)pAVar3;
}

// InternalVTableHelperCtorCaller<ALevelInstance> @ 147e4c570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelInstance::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this->_padding_ = (longlong)&ALevelInstance::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ = (longlong)&ALevelInstance::_vftable__for__ILevelInstanceInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].PrimaryActorTick,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined ***)&this[1].RemoteRole = &___7FLevelInstanceActorImpl__6B_;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALevelInstanceEditorInstanceActor> @ 147e4c6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ALevelInstanceEditorInstanceActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelInstanceEditorInstanceActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelInstanceEditorInstanceActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALevelInstancePivot> @ 147e4c770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelInstancePivot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelInstancePivot::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&ALevelInstancePivot::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&ALevelInstancePivot::_vftable__for__ILevelInstanceEditorPivotInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALevelScriptActor> @ 147e4c830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelScriptActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelScriptActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorContainer> @ 147e4c8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActorContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintTypeConversions> @ 147e4c9c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintTypeConversions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintTypeConversions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintTypeConversions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UImportanceSamplingLibrary> @ 147e4ca70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UImportanceSamplingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImportanceSamplingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UImportanceSamplingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULayer> @ 147e4cb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULayer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevel> @ 147e4cbe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevel *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevel::GetPrivateStaticClass();
  pUVar3 = (ULevel *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (ULevel *)0x0) {
    pUVar3 = ULevel::ULevel(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelActorContainer> @ 147e4cc80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelActorContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelActorContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelActorContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceComponent> @ 147e4cd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelInstanceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&ULevelInstanceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelInstanceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&ULevelInstanceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceEditorObject> @ 147e4ce00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelInstanceEditorObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceEditorObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstanceEditorObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceInterface> @ 147e4ceb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelInstanceInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstanceInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideAsset> @ 147e4cf60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstancePropertyOverrideAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldPartitionPropertyOverride::UWorldPartitionPropertyOverride
              ((UWorldPartitionPropertyOverride *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstancePropertyOverrideAsset__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstancePropertyOverridePolicy> @ 147e4d010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelInstancePropertyOverridePolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstancePropertyOverridePolicy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldPartitionPropertyOverridePolicy::UWorldPartitionPropertyOverridePolicy
              ((UWorldPartitionPropertyOverridePolicy *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstancePropertyOverridePolicy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideSamplePolicy> @ 147e4d0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideSamplePolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstancePropertyOverrideSamplePolicy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldPartitionPropertyOverridePolicy::UWorldPartitionPropertyOverridePolicy
              ((UWorldPartitionPropertyOverridePolicy *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstancePropertyOverrideSamplePolicy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceSettings> @ 147e4d170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelInstanceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstanceSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceSubsystem> @ 147e4d230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelInstanceSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ULevelInstanceSubsystem::_vftable__for__UWorldSubsystem__;
    this[1]._padding_ =
         (longlong)&ULevelInstanceSubsystem::_vftable__for__IStreamingWorldSubsystemInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x34 = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].field_0x30 = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x34 = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined8 *)&this[6].field_0x30 = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelScriptBlueprint> @ 147e4d420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelScriptBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprint *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelScriptBlueprint::GetPrivateStaticClass();
  this = (UBlueprint *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ = (longlong)&ULevelScriptBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)&ULevelScriptBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelStreaming> @ 147e4d4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelStreaming>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevelStreaming *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelStreaming::GetPrivateStaticClass();
  pUVar3 = (ULevelStreaming *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (ULevelStreaming *)0x0) {
    pUVar3 = ULevelStreaming::ULevelStreaming(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelStreamingLevelInstance> @ 147e4d580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelStreamingLevelInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevelStreamingDynamic *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelStreamingLevelInstance::GetPrivateStaticClass();
  this = (ULevelStreamingDynamic *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULevelStreamingDynamic *)0x0) {
    ULevelStreamingDynamic::ULevelStreamingDynamic(this,param_1);
    *(undefined ***)this = &___7ULevelStreamingLevelInstance__6B_;
    *(undefined8 *)&this->field_0x1f8 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditor> @ 147e4d660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevelStreamingAlwaysLoaded *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelStreamingLevelInstanceEditor::GetPrivateStaticClass();
  this = (ULevelStreamingAlwaysLoaded *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULevelStreamingAlwaysLoaded *)0x0) {
    ULevelStreamingAlwaysLoaded::ULevelStreamingAlwaysLoaded(this,param_1);
    *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditorPropertyOverride> @ 147e4d710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditorPropertyOverride>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevelStreamingDynamic *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelStreamingLevelInstanceEditorPropertyOverride::GetPrivateStaticClass();
  this = (ULevelStreamingDynamic *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULevelStreamingDynamic *)0x0) {
    ULevelStreamingDynamic::ULevelStreamingDynamic(this,param_1);
    *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<AWorldDataLayers,AWorldDataLayers_*,0> @ 147e4d810

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWorldDataLayers,AWorldDataLayers_*,0>
          (TObjectPtr<AWorldDataLayers> *param_1,AWorldDataLayers **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWorldDataLayers *)0x0) {
    return *param_2 == (AWorldDataLayers *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<AWorldSettings,AWorldSettings_*,0> @ 147e4d830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWorldSettings,AWorldSettings_*,0>
          (TObjectPtr<AWorldSettings> *param_1,AWorldSettings **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWorldSettings *)0x0) {
    return *param_2 == (AWorldSettings *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<AWorldSettings,AActor_*,0> @ 147e4d850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWorldSettings,AActor_*,0>
          (TObjectPtr<AWorldSettings> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWorldSettings *)0x0) {
    return (AWorldSettings *)*param_2 == (AWorldSettings *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (AWorldSettings *)*param_2;
}

// IsObjectPtrEqual<ULevel,ULevel_const_*,0> @ 147e4d870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULevel,ULevel_const_*,0>
          (TObjectPtr<ULevel> *param_1,ULevel **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULevel *)0x0) {
    return *param_2 == (ULevel *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TObjectPtr<UTexture2D>_> @ 147e4d890

TMutableView<TObjectPtr<UTexture2D>_> __cdecl
MutableView<TObjectPtr<UTexture2D>_>(TObjectPtr<UTexture2D> *param_1)

{
  TObjectPtr<UTexture2D>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UTexture2D>_>)(UTexture2D **)param_1;
}

// NewObject<ULevelActorContainer> @ 147e4d8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelActorContainer * __cdecl
NewObject<ULevelActorContainer>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  ULevelActorContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULevelActorContainer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (ULevelActorContainer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULevelStreaming> @ 147e4d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreaming * __cdecl
NewObject<ULevelStreaming>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULevelStreaming *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULevelStreaming::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULevelStreaming *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULevelStreamingDynamic> @ 147e4da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
NewObject<ULevelStreamingDynamic>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULevelStreamingDynamic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULevelStreamingDynamic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMapBuildDataRegistry> @ 147e4db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __cdecl
NewObject<UMapBuildDataRegistry>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMapBuildDataRegistry *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMapBuildDataRegistry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<UTexture2D_*,TObjectPtr<UTexture2D>_> @ 147e4dc80

TObjectPtr<UTexture2D> * __cdecl
ObjectPtrWrap<UTexture2D_*,TObjectPtr<UTexture2D>_>(UTexture2D **param_1)

{
  return (TObjectPtr<UTexture2D> *)param_1;
}

// ObjectPtrWrap<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_> @ 147e4dc90

TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrWrap<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)param_1;
}

// Sort<TObjectPtr<AActor>,`SortActorsHierarchy'::__l2::<lambda_2>_> @ 147e50230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
Sort<TObjectPtr<AActor>,_SortActorsHierarchy_::__l2::<lambda_2>_>
          (TObjectPtr<AActor> *param_1,int param_2,<lambda_2> *param_3)

{
  TObjectPtr<AActor> TVar1;
  TObjectPtr<AActor> TVar2;
  TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator> *this;
  TObjectPtr<AActor>_u_0 TVar3;
  ulonglong uVar4;
  TTuple<AActor_*,int> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  TObjectPtr<AActor>_u_0 TVar11;
  int iVar12;
  ulonglong uVar13;
  TObjectPtr<AActor>_u_0 *pTVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  TObjectPtr<AActor> *pTVar19;
  int iVar20;
  int iVar21;
  int local_98;
  int local_84;
  int local_80;
  longlong local_78;
  
  uVar13 = (ulonglong)param_2;
  uVar9 = uVar13;
  if (0 < param_2) {
    lVar10 = 0;
    iVar20 = 1;
    do {
      if (iVar20 < (int)uVar9) {
        TVar1.field0_0x0 = (TObjectPtr<AActor>_u_0)param_1[lVar10 + 1].field0_0x0.DebugPtr;
        TVar2.field0_0x0 = (TObjectPtr<AActor>_u_0)param_1[lVar10].field0_0x0.DebugPtr;
        if (TVar1.field0_0x0 == (AActor *)0x0) {
          iVar7 = 0x7fffffff;
        }
        else {
          pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           *)param_3->DepthMap,(AActor *)TVar1.field0_0x0);
          if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)&pTVar5->field_0x8;
          }
        }
        if (TVar2.field0_0x0 == (AActor *)0x0) {
          iVar21 = 0x7fffffff;
        }
        else {
          pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           *)param_3->DepthMap,(AActor *)TVar2.field0_0x0);
          if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
            iVar21 = 0;
          }
          else {
            iVar21 = *(int *)&pTVar5->field_0x8;
          }
        }
        if (iVar7 < iVar21) {
          param_1[lVar10].field0_0x0.DebugPtr = (AActor *)TVar1.field0_0x0;
          param_1[lVar10 + 1].field0_0x0.DebugPtr = (AActor *)TVar2.field0_0x0;
        }
        uVar9 = (ulonglong)(uint)param_2;
      }
      iVar20 = iVar20 + 2;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar13);
  }
  local_80 = 2;
  if (2 < (int)uVar9) {
    do {
      local_78 = 0;
      local_84 = 0;
      pTVar19 = param_1;
      do {
        iVar20 = local_84 + (int)uVar9;
        if (local_80 * 2 < iVar20) {
          iVar20 = local_80 * 2;
        }
        local_98 = 0;
        iVar7 = local_80;
        if (0 < local_80) {
          do {
            if (iVar20 <= iVar7) break;
            this = (TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                    *)param_3->DepthMap;
            iVar21 = 0;
            if (0 < iVar7 - local_98) {
              TVar1.field0_0x0 = (TObjectPtr<AActor>_u_0)pTVar19[iVar7].field0_0x0.DebugPtr;
              uVar17 = iVar7 - local_98;
              do {
                uVar15 = uVar17 >> 1;
                TVar2.field0_0x0 =
                     (TObjectPtr<AActor>_u_0)
                     pTVar19[(longlong)(int)(uVar15 + iVar21) + (longlong)local_98].field0_0x0.
                     DebugPtr;
                if (TVar1.field0_0x0 == (AActor *)0x0) {
                  iVar16 = 0x7fffffff;
                }
                else {
                  pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           ::Find(this,(AActor *)TVar1.field0_0x0);
                  if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = *(int *)&pTVar5->field_0x8;
                  }
                }
                if (TVar2.field0_0x0 == (AActor *)0x0) {
                  iVar8 = 0x7fffffff;
                }
                else {
                  pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           ::Find(this,(AActor *)TVar2.field0_0x0);
                  if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)&pTVar5->field_0x8;
                  }
                }
                if (iVar8 <= iVar16) {
                  iVar21 = uVar15 + iVar21 + (uVar17 & 1);
                }
                uVar17 = uVar15;
              } while (uVar15 != 0);
            }
            local_98 = local_98 + iVar21;
            if (iVar7 <= local_98) break;
            iVar21 = 0;
            if (0 < iVar20 - iVar7) {
              TVar1.field0_0x0 = (TObjectPtr<AActor>_u_0)pTVar19[local_98].field0_0x0.DebugPtr;
              uVar17 = iVar20 - iVar7;
              do {
                uVar15 = uVar17 >> 1;
                if (pTVar19[(longlong)(int)(uVar15 + iVar21) + (longlong)iVar7].field0_0x0.DebugPtr
                    == (AActor *)0x0) {
                  iVar16 = 0x7fffffff;
                }
                else {
                  pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           ::Find(this,pTVar19[(longlong)(int)(uVar15 + iVar21) + (longlong)iVar7].
                                       field0_0x0.DebugPtr);
                  if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = *(int *)&pTVar5->field_0x8;
                  }
                }
                if (TVar1.field0_0x0 == (AActor *)0x0) {
                  iVar8 = 0x7fffffff;
                }
                else {
                  pTVar5 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                           ::Find(this,(AActor *)TVar1.field0_0x0);
                  if (pTVar5 == (TTuple<AActor_*,int> *)0x0) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)&pTVar5->field_0x8;
                  }
                }
                if (iVar16 < iVar8) {
                  iVar21 = uVar15 + iVar21 + (uVar17 & 1);
                }
                uVar17 = uVar15;
              } while (uVar15 != 0);
            }
            if (iVar21 != 0) {
              iVar12 = (iVar21 - local_98) + iVar7;
              iVar16 = iVar12;
              iVar8 = iVar21;
              do {
                iVar6 = iVar8;
                iVar8 = iVar16 % iVar6;
                iVar16 = iVar6;
              } while (iVar8 != 0);
              uVar9 = 0;
              if (0 < iVar6) {
                pTVar14 = &pTVar19[local_98].field0_0x0;
                do {
                  TVar11 = (TObjectPtr<AActor>_u_0)pTVar14->DebugPtr;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (TVar11 != (AActor *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)TVar11);
                  }
                  iVar16 = (int)uVar9;
                  uVar18 = (longlong)iVar12 / (longlong)iVar6 & 0xffffffff;
                  if (0 < (int)((longlong)iVar12 / (longlong)iVar6)) {
                    do {
                      uVar4 = (longlong)((int)uVar9 + iVar21) % (longlong)iVar12;
                      uVar9 = uVar4 & 0xffffffff;
                      iVar8 = (int)uVar4 + local_98;
                      TVar3 = pTVar19[iVar8].field0_0x0;
                      pTVar19[iVar8].field0_0x0 = TVar11;
                      uVar18 = uVar18 - 1;
                      TVar11 = TVar3;
                    } while (uVar18 != 0);
                  }
                  uVar17 = iVar16 + 1;
                  uVar9 = (ulonglong)uVar17;
                  pTVar14 = pTVar14 + 1;
                } while ((int)uVar17 < iVar6);
              }
            }
            local_98 = local_98 + 1 + iVar21;
            iVar7 = iVar7 + iVar21;
          } while (local_98 < iVar7);
          uVar9 = (ulonglong)(uint)param_2;
        }
        local_78 = local_78 + (longlong)local_80 * 2;
        pTVar19 = pTVar19 + (longlong)local_80 * 2;
        local_84 = local_84 + local_80 * -2;
      } while (local_78 < (longlong)uVar13);
      local_80 = local_80 * 2;
    } while (local_80 < (int)uVar9);
  }
  return;
}

// StaticEnum<enum_EScreenPercentageMode> @ 147e50660

UEnum * __cdecl StaticEnum<enum_EScreenPercentageMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EScreenPercentageMode,(UObject *)pUVar1,
                       L"EScreenPercentageMode");
  }
  return Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton;
}

// StaticEnum<enum_EViewStatusForScreenPercentage> @ 147e506a0

UEnum * __cdecl StaticEnum<enum_EViewStatusForScreenPercentage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage,(UObject *)pUVar1,
                       L"EViewStatusForScreenPercentage");
  }
  return Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.OuterSingleton;
}

// StaticEnum<enum_EImportanceWeight::Type> @ 147e506e0

UEnum * __cdecl StaticEnum<enum_EImportanceWeight::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight,(UObject *)pUVar1,
                       L"EImportanceWeight");
  }
  return Z_Registration_Info_UEnum_EImportanceWeight.OuterSingleton;
}

// WriteToString<512,FName_&,wchar_t_const_(&)[2],FString> @ 147e53be0

TStringBuilderWithBuffer<wchar_t,512> * __cdecl
WriteToString<512,FName_&,wchar_t_const_(&)[2],FString>
          (TStringBuilderWithBuffer<wchar_t,512> *__return_storage_ptr__,FName *param_1,
          wchar_t (*param_2) [2],FString *param_3)

{
  int iVar1;
  int iVar2;
  TStringBuilderBase<wchar_t> *this;
  size_t sVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  iVar2 = 0;
  if (param_2 != (wchar_t (*) [2])0x0) {
    sVar3 = wcslen(*param_2);
    iVar2 = (int)sVar3;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_2,iVar2);
  iVar1 = (param_3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar2);
  return __return_storage_ptr__;
}

// WriteToString<512,FName_const_&,wchar_t_const_(&)[2],FString_&> @ 147e53c80

TStringBuilderWithBuffer<wchar_t,512> * __cdecl
WriteToString<512,FName_const_&,wchar_t_const_(&)[2],FString_&>
          (TStringBuilderWithBuffer<wchar_t,512> *__return_storage_ptr__,FName *param_1,
          wchar_t (*param_2) [2],FString *param_3)

{
  int iVar1;
  int iVar2;
  TStringBuilderBase<wchar_t> *this;
  size_t sVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  iVar2 = 0;
  if (param_2 != (wchar_t (*) [2])0x0) {
    sVar3 = wcslen(*param_2);
    iVar2 = (int)sVar3;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_2,iVar2);
  iVar1 = (param_3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar2);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`SortActorsHierarchy'::__l2::<lambda_1>,0,1> @ 147e56780

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SortActorsHierarchy'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_SortActorsHierarchy_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SortActorsHierarchy'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l15::<lambda_1>,1,1> @ 147e567a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l15::<lambda_1>,1,1>::
~TFunction_OwnedObject<_ULevel::ApplyWorldOffset_::__l15::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`15'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l28::<lambda_2>,1,1> @ 147e567c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l28::<lambda_2>,1,1>::
~TFunction_OwnedObject<_ULevel::ApplyWorldOffset_::__l28::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`28'::<lambda_2>,1,1>::_vftable_;
  return;
}

// operator<< @ 147e584c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FLevelInstanceActorGuid *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FArchive *pFVar6;
  FGuid *pFVar7;
  FGuid local_18;
  
  if ((param_2->Actor).field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("LevelInstanceActorGuid.Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x2b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar5 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)(param_2->Actor).field0_0x0.DebugPtr,
                       RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar5) {
      if ((((param_2->ActorGuid).D != 0 || (param_2->ActorGuid).C != 0) ||
          (param_2->ActorGuid).B != 0) || (param_2->ActorGuid).A != 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("!LevelInstanceActorGuid.ActorGuid.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                           ,0x46,L"");
        if (!bVar5) {
          return param_1;
        }
code_r0x000147e585c8:
        pcVar1 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar1)();
        return pFVar6;
      }
    }
    else {
      if ((*(uint *)&param_1->field_0x34 & 0x1000) != 0) {
        pFVar7 = FGuid::NewGuid(&local_18);
        uVar2 = pFVar7->B;
        uVar3 = pFVar7->C;
        uVar4 = pFVar7->D;
        (param_2->ActorGuid).A = pFVar7->A;
        (param_2->ActorGuid).B = uVar2;
        (param_2->ActorGuid).C = uVar3;
        (param_2->ActorGuid).D = uVar4;
        return param_1;
      }
      if ((param_1->field_0x29 & 1) != 0) {
        operator<<(param_1,&param_2->ActorGuid);
        if ((((param_2->ActorGuid).D == 0 && (param_2->ActorGuid).C == 0) &&
            (param_2->ActorGuid).B == 0) && (param_2->ActorGuid).A == 0) {
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("LevelInstanceActorGuid.ActorGuid.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                             ,0x4f,L"");
          if (bVar5) goto code_r0x000147e585c8;
        }
      }
    }
  }
  return param_1;
}

// operator<< @ 147e585e0

FArchive * __cdecl operator<<(FArchive *param_1,FCompressedVisibilityChunk *param_2)

{
  int *piVar1;
  FArchive *this;
  
  this = operator<<(param_1,&param_2->bCompressed);
  piVar1 = (int *)**(undefined8 **)&this->field_0x8;
  if ((int *)(*(undefined8 **)&this->field_0x8)[1] < piVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,&param_2->UncompressedSize,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)&param_2->UncompressedSize);
    }
  }
  else {
    param_2->UncompressedSize = *piVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(this,&param_2->Data);
  return param_1;
}

// operator<< @ 147e58670

FArchive * __cdecl operator<<(FArchive *param_1,FPrecomputedVisibilityBucket *param_2)

{
  int *piVar1;
  FArchive *pFVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->CellDataSize = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar2 = TArrayPrivateFriend::Serialize<FPrecomputedVisibilityCell,TSizedDefaultAllocator<32>_>
                     (param_1,&param_2->Cells);
  TArrayPrivateFriend::Serialize<FCompressedVisibilityChunk,TSizedDefaultAllocator<32>_>
            (pFVar2,&param_2->CellDataChunks);
  return param_1;
}

// operator<< @ 147e586f0

FArchive * __cdecl operator<<(FArchive *param_1,FPrecomputedVisibilityCell *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  FArchive *this;
  
  this = UE::Math::operator<<(param_1,&param_2->Min);
  puVar1 = (ushort *)**(undefined8 **)&this->field_0x8;
  if ((ushort *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,&param_2->ChunkIndex,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,&param_2->ChunkIndex);
    }
  }
  else {
    param_2->ChunkIndex = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
  }
  puVar1 = &param_2->DataOffset;
  puVar2 = (ushort *)**(undefined8 **)&this->field_0x8;
  if ((ushort *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
  }
  return param_1;
}

// operator<< @ 147e587d0

FArchive * __cdecl operator<<(FArchive *param_1,FPrecomputedVisibilityHandler *param_2)

{
  float *pfVar1;
  int *piVar2;
  longlong *plVar3;
  float *pfVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  FArchive *pFVar8;
  undefined1 *puVar9;
  float local_res8 [2];
  float local_res10 [2];
  
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                         ,0x30f,L"float -> double conversion applied outside of load!");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar6)();
        return pFVar8;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    (param_2->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.X = (double)local_res10[0];
    (param_2->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y = (double)local_res8[0];
  }
  else {
    pFVar8 = operator<<(param_1,(double *)param_2);
    operator<<(pFVar8,&(param_2->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y);
  }
  puVar9 = &param_1->field_0x2a;
  pfVar1 = &param_2->PrecomputedVisibilityCellSizeXY;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->PrecomputedVisibilityCellSizeZ;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->PrecomputedVisibilityCellBucketSizeXY;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->PrecomputedVisibilityNumCellBuckets;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FPrecomputedVisibilityBucket,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PrecomputedVisibilityCellBuckets);
  if ((param_1->field_0x28 & 1) != 0) {
    FPrecomputedVisibilityHandler::UpdateVisibilityStats(param_2,true);
  }
  return param_1;
}

// operator<< @ 147e58a20

FArchive * __cdecl operator<<(FArchive *param_1,FPrecomputedVolumeDistanceField *param_2)

{
  uchar *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  float *pfVar4;
  uchar *puVar5;
  int *piVar6;
  FArchive *pFVar7;
  
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->VolumeMaxDistance = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &(param_2->VolumeBox).IsValid;
  puVar3 = &param_1->field_0x2a;
  pFVar7 = UE::Math::operator<<(param_1,&(param_2->VolumeBox).Min);
  pFVar7 = UE::Math::operator<<(pFVar7,&(param_2->VolumeBox).Max);
  puVar5 = (uchar *)**(undefined8 **)&pFVar7->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,puVar1,1);
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 1;
  }
  piVar2 = &param_2->VolumeSizeX;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->VolumeSizeY;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->VolumeSizeZ;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FColor,TSizedDefaultAllocator<32>_>(param_1,&param_2->Data);
  return param_1;
}

// operator() @ 147e58dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall `SortActorsHierarchy'::__l2::<lambda_1>::operator()(void *this,AActor *param_1)

{
  ForElementType<AActor_*> *pFVar1;
  ForElementType<AActor_*> FVar2;
  int iVar3;
  ForElementType<AActor_*> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TTuple<AActor_*,int> *pTVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  ForElementType<AActor_*> FVar11;
  ForElementType<AActor_*> FVar12;
  int iVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  AActor *local_res10;
  int local_res18 [4];
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  AActor **local_48;
  int *local_40;
  
  iVar7 = 0;
  local_res18[0] = 0;
  local_res10 = param_1;
  pTVar8 = TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
           ::Find(*(TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
                    **)this,param_1);
  if ((pTVar8 != (TTuple<AActor_*,int> *)0x0) && (&pTVar8->field_0x8 != (undefined1 *)0x0)) {
    return *(int *)&pTVar8->field_0x8;
  }
  pUVar9 = Z_Construct_UClass_AWorldSettings_NoRegister();
  pAVar10 = local_res10;
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar9->_padding_)) {
    if (local_res10 == *(AActor **)((longlong)this + 0x20)) {
      local_res18[0] = -0x7fffffff;
    }
    else {
      pUVar9 = Z_Construct_UClass_AMapBuildDataActor_NoRegister();
      iVar3 = (int)pUVar9->_padding_;
      if ((*(int *)(pAVar10->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        pAVar10 = AActor::GetAttachParentActor(local_res10);
        if (pAVar10 != (AActor *)0x0) {
          FVar12 = *(ForElementType<AActor_*> *)((longlong)this + 8);
          lVar14 = (longlong)
                   *(int *)((ForElementType<AActor_*> *)((longlong)FVar12 + 0x58))->InlineData;
          pFVar1 = (ForElementType<AActor_*> *)((longlong)FVar12 + 0x58);
          FVar4 = *(ForElementType<AActor_*> *)((longlong)FVar12 + 0x50);
          FVar11 = FVar4;
          if (FVar4 == (ForElementType<AActor_*>)0x0) {
            FVar11 = FVar12;
          }
          FVar2 = (ForElementType<AActor_*>)((longlong)FVar11 + lVar14 * 8);
          for (; FVar11 != FVar2; FVar11 = (ForElementType<AActor_*>)((longlong)FVar11 + 8)) {
            if (*(AActor **)FVar11 == pAVar10) {
              local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.Data.ArrayNum = 0;
              local_88.Data.ArrayMax = 0;
              iVar3 = *(int *)pFVar1->InlineData;
              if (FVar4 != (ForElementType<AActor_*>)0x0) {
                FVar12 = FVar4;
              }
              FVar4 = (ForElementType<AActor_*>)((longlong)FVar12 + lVar14 * 8);
              while( true ) {
                if (*(int *)pFVar1->InlineData != iVar3) {
                  `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res8);
                }
                if (FVar12 == FVar4) break;
                local_98 = *(FName *)(*(longlong *)FVar12 + 0x18);
                ::FName::ToString(&local_98,&local_58);
                ::FString::ConcatFC(&local_78,&local_58,L" -> ");
                iVar13 = iVar7;
                if (local_78.Data.ArrayNum != 0) {
                  iVar13 = local_78.Data.ArrayNum + -1;
                }
                ::FString::AppendChars
                          (&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar13);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                FVar12 = (ForElementType<AActor_*>)((longlong)FVar12 + 8);
              }
              local_90 = (FName)local_res10->_padding_;
              ::FName::ToString(&local_90,&local_68);
              if (local_68.Data.ArrayNum != 0) {
                iVar7 = local_68.Data.ArrayNum + -1;
              }
              ::FString::AppendChars
                        (&local_88,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar7);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (2 < (byte)LogLevel._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              goto LAB_147e59132;
            }
          }
          FVar11 = FVar12;
          if (FVar4 != (ForElementType<AActor_*>)0x0) {
            FVar11 = FVar4;
          }
          if ((ulonglong)FVar11 <= &local_res10) {
            FVar11 = FVar12;
            if (FVar4 != (ForElementType<AActor_*>)0x0) {
              FVar11 = FVar4;
            }
            if ((&local_res10 <
                 (AActor **)((longlong)FVar11 + (longlong)*(int *)((longlong)FVar12 + 0x5c) * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar7 = (*pcVar5)();
              return iVar7;
            }
          }
          iVar7 = *(int *)pFVar1->InlineData;
          if (iVar7 == *(int *)((longlong)FVar12 + 0x5c)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                              (0x808,(ForElementType<AActor_*> *)FVar12,
                               (int *)((longlong)FVar12 + 0x5c));
          }
          *(int *)pFVar1->InlineData = iVar7 + 1;
          if (*(ForElementType<AActor_*> *)((longlong)FVar12 + 0x50) !=
              (ForElementType<AActor_*>)0x0) {
            FVar12 = *(ForElementType<AActor_*> *)((longlong)FVar12 + 0x50);
          }
          *(AActor **)((longlong)FVar12 + (longlong)iVar7 * 8) = local_res10;
          bVar6 = AActor::IsChildActor(pAVar10);
          if (bVar6) {
            local_res18[0] =
                 UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>
                 ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>
                                **)((longlong)this + 0x10),pAVar10);
            local_res18[0] = local_res18[0] + -1;
          }
          else {
            local_res18[0] =
                 UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>
                 ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(AActor_*)>
                                **)((longlong)this + 0x10),pAVar10);
            local_res18[0] = local_res18[0] + 1;
          }
        }
      }
      else {
        local_res18[0] = -0x7ffffffe;
      }
    }
  }
  else if (**(char **)((longlong)this + 0x18) == '\0') {
    local_res18[0] = -0x80000000;
    **(char **)((longlong)this + 0x18) = '\x01';
  }
  else if (2 < (byte)LogLevel._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
  }
LAB_147e59132:
  local_48 = &local_res10;
  local_40 = local_res18;
  TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<AActor_*_const_&,int_const_&>_>
            (*(TSet<TTuple<AActor_*,int>,TDefaultMapHashableKeyFuncs<AActor_*,int,0>,FDefaultSetAllocator>
               **)this,(TPairInitializer<AActor_*_const_&,int_const_&> *)(local_res18 + 2),
             (bool *)&local_48);
  return local_res18[0];
}

// `vector_deleting_destructor'`adjustor{704}' @ 147e59790

/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelBounds::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALevelBounds::_vector_deleting_destructor__adjustor_704__(ALevelBounds *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelBounds *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 147e597a4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelInstance::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALevelInstance::_vector_deleting_destructor__adjustor_704__(ALevelInstance *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelInstance *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 147e597b8

/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelInstancePivot::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALevelInstancePivot::_vector_deleting_destructor__adjustor_704__
          (ALevelInstancePivot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelInstancePivot *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147e597cc

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelInstanceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULevelInstanceComponent::_vector_deleting_destructor__adjustor_40__
          (ULevelInstanceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelInstanceComponent *)&this[-1].field_0x228,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 147e597dc

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelInstanceSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
ULevelInstanceSubsystem::_vector_deleting_destructor__adjustor_56__
          (ULevelInstanceSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULevelInstanceSubsystem *)&this[-1].RegisteredLevelInstances.field_0x18,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 147e597ec

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelScriptBlueprint::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
ULevelScriptBlueprint::_vector_deleting_destructor__adjustor_80__
          (ULevelScriptBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelScriptBlueprint *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147e59800

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULevelStreaming,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::GC::TDefaultCollector<FActorClusterReferenceProcessor>::_scalar_deleting_destructor_
          (TDefaultCollector<FActorClusterReferenceProcessor> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFLinearColor__PEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e598b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SortActorsHierarchy'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SortActorsHierarchy'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e598f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l15::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`15'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::__l28::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`28'::<lambda_2>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59970

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLatentActionManager::FObjectActions,SharedPointerInternals::DefaultDeleter<FLatentActionManager::FObjectActions>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLatentActionManager::FObjectActions,SharedPointerInternals::DefaultDeleter<FLatentActionManager::FObjectActions>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e599b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e599f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ALevelBounds::_scalar_deleting_destructor_(ALevelBounds *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ALevelInstance::_scalar_deleting_destructor_(ALevelInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  (this->LevelInstanceActorImpl)._padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  pFVar1 = (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->CookedWorldAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7ILevelInstanceInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ALevelInstanceEditorInstanceActor::_scalar_deleting_destructor_
          (ALevelInstanceEditorInstanceActor *this,uint param_1)

{
  *(undefined ***)this = &___7ALevelInstanceEditorInstanceActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ALevelInstancePivot::_scalar_deleting_destructor_(ALevelInstancePivot *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &___7ILevelInstanceEditorPivotInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ALevelScriptActor::_scalar_deleting_destructor_(ALevelScriptActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ALevelScriptActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59c50

void * __thiscall
FLegacyScreenPercentageDriver::_scalar_deleting_destructor_
          (FLegacyScreenPercentageDriver *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISceneViewFamilyExtention__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59c90

void * __thiscall
FLevelInstanceActorImpl::_scalar_deleting_destructor_(FLevelInstanceActorImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  pFVar1 = (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59ce0

void * __thiscall
FStreamLevelAction::_scalar_deleting_destructor_(FStreamLevelAction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59d20

void * __thiscall
ILevelInstanceEditorPivotInterface::_scalar_deleting_destructor_
          (ILevelInstanceEditorPivotInterface *this,uint param_1)

{
  *this = (ILevelInstanceEditorPivotInterface)&___7ILevelInstanceEditorPivotInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59d60

void * __thiscall
ILevelInstanceInterface::_scalar_deleting_destructor_(ILevelInstanceInterface *this,uint param_1)

{
  *this = (ILevelInstanceInterface)&___7ILevelInstanceInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59da0

void * __thiscall
IStreamingWorldSubsystemInterface::_scalar_deleting_destructor_
          (IStreamingWorldSubsystemInterface *this,uint param_1)

{
  *this = (IStreamingWorldSubsystemInterface)&___7IStreamingWorldSubsystemInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59de0

void * __thiscall UActorContainer::_scalar_deleting_destructor_(UActorContainer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UActorContainer__6B_;
  *(undefined4 *)&(this->Actors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Actors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Actors);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59e70

void * __thiscall
UBlueprintTypeConversions::_scalar_deleting_destructor_
          (UBlueprintTypeConversions *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintTypeConversions__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59ed0

void * __thiscall
UImportanceSamplingLibrary::_scalar_deleting_destructor_
          (UImportanceSamplingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UImportanceSamplingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59f30

void * __thiscall ULayer::_scalar_deleting_destructor_(ULayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULayer__6B_;
  pFVar1 = (this->ActorStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e59fa0

void * __thiscall
ULevelActorContainer::_scalar_deleting_destructor_(ULevelActorContainer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelActorContainer__6B_;
  pFVar1 = (this->Actors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULevelInstanceComponent::_scalar_deleting_destructor_(ULevelInstanceComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a090

void * __thiscall
ULevelInstanceEditorObject::_scalar_deleting_destructor_
          (ULevelInstanceEditorObject *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelInstanceEditorObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a0f0

void * __thiscall
ULevelInstanceInterface::_scalar_deleting_destructor_(ULevelInstanceInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a150

void * __thiscall
ULevelInstancePropertyOverrideAsset::_scalar_deleting_destructor_
          (ULevelInstancePropertyOverrideAsset *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a1b0

void * __thiscall
ULevelInstancePropertyOverridePolicy::_scalar_deleting_destructor_
          (ULevelInstancePropertyOverridePolicy *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a210

void * __thiscall
ULevelInstancePropertyOverrideSamplePolicy::_scalar_deleting_destructor_
          (ULevelInstancePropertyOverrideSamplePolicy *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a270

void * __thiscall
ULevelInstanceSettings::_scalar_deleting_destructor_(ULevelInstanceSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelInstanceSettings__6B_;
  pFVar1 = (this->PropertyOverridePolicyClass).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a2e0

void * __thiscall
ULevelInstanceSubsystem::_scalar_deleting_destructor_(ULevelInstanceSubsystem *this,uint param_1)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IStreamingWorldSubsystemInterface__;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredLevelInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredLevelInstances);
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LoadedLevelInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedLevelInstances);
  (this->LoadingLevelInstances).HashSize = 0;
  FVar2 = (this->LoadingLevelInstances).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadingLevelInstances).Elements);
  (this->LevelInstancesToUnload).HashSize = 0;
  FVar2 = (this->LevelInstancesToUnload).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelInstancesToUnload).Elements);
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelInstancesToLoadOrUpdate).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelInstancesToLoadOrUpdate);
  this->_padding_ = (longlong)&___7IStreamingWorldSubsystemInterface__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1d0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULevelScriptBlueprint::_scalar_deleting_destructor_(ULevelScriptBlueprint *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ULevelStreaming::_scalar_deleting_destructor_(ULevelStreaming *this,uint param_1)

{
  ~ULevelStreaming(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a4e0

void * __thiscall
ULevelStreamingLevelInstance::_scalar_deleting_destructor_
          (ULevelStreamingLevelInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7ULevelStreamingLevelInstance__6B_;
  pFVar1 = (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a560

void * __thiscall
ULevelStreamingLevelInstanceEditor::_scalar_deleting_destructor_
          (ULevelStreamingLevelInstanceEditor *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditor__6B_;
  ULevelStreamingAlwaysLoaded::~ULevelStreamingAlwaysLoaded((ULevelStreamingAlwaysLoaded *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a5c0

void * __thiscall
ULevelStreamingLevelInstanceEditorPropertyOverride::_scalar_deleting_destructor_
          (ULevelStreamingLevelInstanceEditorPropertyOverride *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelStreamingLevelInstanceEditorPropertyOverride__6B_;
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a620

void * __thiscall
UWorldPartitionPropertyOverride::_scalar_deleting_destructor_
          (UWorldPartitionPropertyOverride *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e5a680

void * __thiscall
UWorldPartitionPropertyOverridePolicy::_scalar_deleting_destructor_
          (UWorldPartitionPropertyOverridePolicy *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// ComponentEncroachesBlockingGeometry_NoAdjustment @ 147e606f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ComponentEncroachesBlockingGeometry_NoAdjustment
          (UWorld *param_1,AActor *param_2,UPrimitiveComponent *param_3,TTransform<double> *param_4,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  schar sVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  FCollisionEnabledMask *pFVar10;
  FName *pFVar11;
  undefined1 auStackY_348 [32];
  FCollisionEnabledMask local_2e8 [4];
  FName local_2e4;
  AActor *local_2d8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_2d0;
  TTransform<double> *local_2c8;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_2c0;
  TStatId local_2b0;
  UWorld *local_2a8;
  FName local_2a0;
  TStatId local_298;
  FString local_290;
  FString local_280;
  FCollisionShape local_270;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  FCollisionResponseParams local_210;
  FCollisionResponseContainer local_1f0;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  FComponentQueryParams local_188;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  pTVar6 = CVarEncroachEpsilon.Ref;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2d0 = param_5;
  local_2d8 = param_2;
  local_2c8 = param_4;
  local_2a8 = param_1;
  bVar7 = IsInParallelGameThread();
  if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  fVar1 = pTVar6->ShadowedValue[0];
  if ((param_1 == (UWorld *)0x0) || (param_3 == (UPrimitiveComponent *)0x0)) {
    return false;
  }
  local_2e4.ComparisonIndex.Value = (**(code **)(*(longlong *)param_3 + 0x5f0))(param_3);
  (**(code **)(*(longlong *)param_3 + 0x8b8))
            (param_3,&local_270,(uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  if (local_270.ShapeType == Box) {
    pUVar9 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar9->_padding_)) {
      if ((param_3->field_0x98 & 1) == 0) {
        if ((byte)LogPhysics._0_1_ < 5) {
          return false;
        }
        local_2e4 = (FName)param_2->_padding_;
        FName::ToString(&local_2e4,&local_280);
        local_2a0.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
        local_2a0.Number = *(uint *)&param_3->field_0x1c;
        FName::ToString(&local_2a0,&local_290);
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        if (local_280.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
        return false;
      }
      local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c0.ArrayNum = 0;
      local_2c0.ArrayMax = 0;
      pFVar10 = FCollisionEnabledMask::FCollisionEnabledMask(local_2e8,'\0');
      sVar2 = pFVar10->Bits;
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment =
             (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_NoAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_11_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_NoAdjustment>
              )0x0;
        pFVar11 = FName::FName(&local_260,"ComponentEncroachesBlockingGeometry_NoAdjustment");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment,*pFVar11,
                   L"ComponentEncroachesBlockingGeometry_NoAdjustment","STATGROUP_CollisionTags",
                   "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&_TSS0);
      }
      local_2b0.StatIdPtr = (TStatIdData *)StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment;
      if (StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment ==
          (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_NoAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_11_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_NoAdjustment>
           )0x0) {
        pFVar11 = FName::FName(&local_258,"ComponentEncroachesBlockingGeometry_NoAdjustment");
        local_2b0.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment,*pFVar11,
                        L"ComponentEncroachesBlockingGeometry_NoAdjustment",
                        "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                        ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        FName::FName(&StaticName,"ComponentEncroachesBlockingGeometry_NoAdjustment");
        _Init_thread_footer(&_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams
                ((FCollisionQueryParams *)&local_188,StaticName,&local_2b0,false,local_2d8);
      local_188.ShapeCollisionMask.Bits = sVar2;
      FCollisionResponseContainer::FCollisionResponseContainer(&local_1f0);
      FCollisionResponseContainer::SetAllChannels(&local_1f0,ECR_Block);
      (**(code **)(*(longlong *)param_3 + 0x8b0))(param_3,&local_188,&local_1f0);
      FCollisionQueryParams::AddIgnoredActors((FCollisionQueryParams *)&local_188,local_2d0);
      local_1c8.X = (local_2c8->Rotation).XY.m128d_f64[0];
      local_1c8.Y = (local_2c8->Rotation).XY.m128d_f64[1];
      local_1c8.Z = (local_2c8->Rotation).ZW.m128d_f64[0];
      local_1c8.W = (local_2c8->Rotation).ZW.m128d_f64[1];
      local_240._s_0.X = (local_2c8->Translation).XY.m128d_f64[0];
      local_240._s_0.Y = (local_2c8->Translation).XY.m128d_f64[1];
      local_240._s_0.Z = (local_2c8->Translation).ZW.m128d_f64[0];
      bVar7 = UWorld::ComponentOverlapMultiByChannel
                        (local_2a8,&local_2c0,param_3,(TVector<double> *)&local_240._s_0,&local_1c8,
                         local_2e4.ComparisonIndex.Value,&local_188,
                         &FCollisionObjectQueryParams::DefaultObjectQueryParam);
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
      local_f8.IgnoreComponents.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)local_2c0.AllocatorInstance.Data;
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
        local_f8.IgnoreComponents.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)local_2c0.AllocatorInstance.Data;
      }
      goto LAB_147e609e8;
    }
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment =
         (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_NoAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_33_::<lambda_4>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_NoAdjustment>
          )0x0;
    pFVar11 = FName::FName(&local_250,"ComponentEncroachesBlockingGeometry_NoAdjustment");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment,*pFVar11,
               L"ComponentEncroachesBlockingGeometry_NoAdjustment","STATGROUP_CollisionTags",
               "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&_TSS0);
  }
  local_298.StatIdPtr = (TStatIdData *)StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment;
  if (StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment ==
      (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_NoAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_33_::<lambda_4>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_NoAdjustment>
       )0x0) {
    pFVar11 = FName::FName(&local_248,"ComponentEncroachesBlockingGeometry_NoAdjustment");
    local_298.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &StatPtr_ComponentEncroachesBlockingGeometry_NoAdjustment,*pFVar11,
                    L"ComponentEncroachesBlockingGeometry_NoAdjustment","STATGROUP_CollisionTags",
                    "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&StaticName,"ComponentEncroachesBlockingGeometry_NoAdjustment");
    _Init_thread_footer(&_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_f8,StaticName,&local_298,false,local_2d8);
  FCollisionResponseContainer::FCollisionResponseContainer(&local_210.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels(&local_210.CollisionResponse,ECR_Block);
  (**(code **)(*(longlong *)param_3 + 0x8b0))(param_3,&local_f8,&local_210);
  FCollisionQueryParams::AddIgnoredActors(&local_f8,local_2d0);
  local_1a8.X = (local_2c8->Rotation).XY.m128d_f64[0];
  local_1a8.Y = (local_2c8->Rotation).XY.m128d_f64[1];
  local_1a8.Z = (local_2c8->Rotation).ZW.m128d_f64[0];
  local_1a8.W = (local_2c8->Rotation).ZW.m128d_f64[1];
  local_228._s_0.X = (local_2c8->Translation).XY.m128d_f64[0];
  local_228._s_0.Y = (local_2c8->Translation).XY.m128d_f64[1];
  local_228._s_0.Z = (local_2c8->Translation).ZW.m128d_f64[0];
  bVar7 = UWorld::OverlapBlockingTestByChannel
                    (param_1,(TVector<double> *)&local_228._s_0,&local_1a8,
                     local_2e4.ComparisonIndex.Value,&local_270,&local_f8,&local_210);
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
LAB_147e609e8:
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar7;
}

// ComponentEncroachesBlockingGeometry_WithAdjustment @ 147e60e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ComponentEncroachesBlockingGeometry_WithAdjustment
          (UWorld *param_1,AActor *param_2,UPrimitiveComponent *param_3,TTransform<double> *param_4,
          TVector<double> *param_5,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_6)

{
  VectorRegister4Double *pVVar1;
  float fVar2;
  schar sVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  TConsoleVariableData<float> *pTVar9;
  AActor *pAVar10;
  TTransform<double> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  FCollisionEnabledMask *pFVar17;
  FName *pFVar18;
  UObject *pUVar19;
  FBodyInstance *this;
  uint uVar20;
  int iVar21;
  double dVar22;
  uint uVar23;
  undefined1 auStackY_428 [32];
  bool local_3c8;
  FCollisionEnabledMask local_3c7 [3];
  ECollisionChannel local_3c4;
  AActor *local_3c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_3a8;
  UWorld *local_3a0;
  TTransform<double> *local_398;
  undefined8 local_390;
  TVector<double>_u_0 local_388;
  undefined8 uStack_370;
  TStatId local_368;
  FName local_360;
  FName local_358;
  TStatId local_350;
  FString local_348;
  FString local_338;
  FCollisionShape local_328;
  FName local_318;
  FName local_310;
  FName local_308;
  FCollisionShape local_300;
  FCollisionShape local_2f0;
  TVector<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  FName local_280;
  FCollisionResponseParams local_278;
  FCollisionResponseContainer local_258;
  TQuat<double> local_238;
  TQuat<double> local_218;
  TQuat<double> local_1f8;
  TQuat<double> local_1d8;
  FComponentQueryParams local_1b8;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_428;
  (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y = (double)uVar8;
  (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar9 = CVarEncroachEpsilon.Ref;
  local_3a8 = param_6;
  local_3c0 = param_2;
  local_3a0 = param_1;
  local_398 = param_4;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  fVar2 = pTVar9->ShadowedValue[0];
  if ((param_1 == (UWorld *)0x0) || (param_3 == (UPrimitiveComponent *)0x0)) {
    return false;
  }
  local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.ArrayNum = 0;
  local_3b8.ArrayMax = 0;
  local_3c8 = false;
  bVar12 = true;
  local_3c4 = (**(code **)(*(longlong *)param_3 + 0x5f0))(param_3);
  uVar7 = _UNK_150651574;
  uVar23 = (uint)fVar2 ^ __xmm_80000000800000008000000080000000;
  (**(code **)(*(longlong *)param_3 + 0x8b8))(param_3,&local_328,CONCAT44(_UNK_150651574,uVar23));
  if (local_328.ShapeType == Box) {
    pUVar16 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar21 = (int)pUVar16->_padding_;
    if ((iVar21 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar21 * 8) ==
        &pUVar16->_padding_)) goto LAB_147e611cb;
    if ((param_3->field_0x98 & 1) == 0) {
      if (4 < (byte)LogPhysics._0_1_) {
        local_360 = (FName)param_2->_padding_;
        FName::ToString(&local_360,&local_348);
        local_358.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
        local_358.Number = *(uint *)&param_3->field_0x1c;
        FName::ToString(&local_358,&local_338);
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        local_3c8 = false;
      }
      goto LAB_147e6171d;
    }
    pFVar17 = FCollisionEnabledMask::FCollisionEnabledMask(local_3c7,'\0');
    sVar3 = pFVar17->Bits;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment =
           (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_WithAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_11_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_WithAdjustment>
            )0x0;
      pFVar18 = FName::FName(&local_318,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment,*pFVar18,
                 L"ComponentEncroachesBlockingGeometry_WithAdjustment","STATGROUP_CollisionTags",
                 "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&_TSS0);
    }
    local_368.StatIdPtr = (TStatIdData *)StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment;
    if (StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment ==
        (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_WithAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_11_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_WithAdjustment>
         )0x0) {
      pFVar18 = FName::FName(&local_310,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      local_368.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment,*pFVar18,
                      L"ComponentEncroachesBlockingGeometry_WithAdjustment",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      FName::FName(&StaticName,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      _Init_thread_footer(&_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              ((FCollisionQueryParams *)&local_1b8,StaticName,&local_368,false,local_3c0);
    local_1b8.ShapeCollisionMask.Bits = sVar3;
    FCollisionResponseContainer::FCollisionResponseContainer(&local_258);
    FCollisionResponseContainer::SetAllChannels(&local_258,ECR_Block);
    (**(code **)(*(longlong *)param_3 + 0x8b0))(param_3,&local_1b8,&local_258);
    FCollisionQueryParams::AddIgnoredActors((FCollisionQueryParams *)&local_1b8,local_3a8);
    local_238.X = (local_398->Rotation).XY.m128d_f64[0];
    local_238.Y = (local_398->Rotation).XY.m128d_f64[1];
    local_238.Z = (local_398->Rotation).ZW.m128d_f64[0];
    local_238.W = (local_398->Rotation).ZW.m128d_f64[1];
    local_3c0 = (AActor *)&local_398->Translation;
    local_2e0._s_0.X = (((VectorRegister4Double *)local_3c0)->XY).m128d_f64[0];
    local_2e0._s_0.Y = (local_398->Translation).XY.m128d_f64[1];
    local_2e0._s_0.Z = (local_398->Translation).ZW.m128d_f64[0];
    local_3c8 = UWorld::ComponentOverlapMultiByChannel
                          (local_3a0,&local_3b8,param_3,(TVector<double> *)&local_2e0._s_0,
                           &local_238,local_3c4,&local_1b8,
                           &FCollisionObjectQueryParams::DefaultObjectQueryParam);
    bVar12 = false;
    if ((void *)local_1b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1b8._padding_);
    }
    if ((void *)local_1b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1b8._padding_);
    }
  }
  else {
LAB_147e611cb:
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment =
           (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_WithAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_33_::<lambda_4>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_WithAdjustment>
            )0x0;
      pFVar18 = FName::FName(&local_308,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment,*pFVar18,
                 L"ComponentEncroachesBlockingGeometry_WithAdjustment","STATGROUP_CollisionTags",
                 "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&_TSS0);
    }
    local_350.StatIdPtr = (TStatIdData *)StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment;
    if (StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment ==
        (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentEncroachesBlockingGeometry_WithAdjustment(UWorld_const_*,AActor_const_*,UPrimitiveComponent_const_*,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&)_::_33_::<lambda_4>::operator()(void)const_::_2_::FStat_ComponentEncroachesBlockingGeometry_WithAdjustment>
         )0x0) {
      pFVar18 = FName::FName(&local_280,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      local_350.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_ComponentEncroachesBlockingGeometry_WithAdjustment,*pFVar18,
                      L"ComponentEncroachesBlockingGeometry_WithAdjustment",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      FName::FName(&StaticName,"ComponentEncroachesBlockingGeometry_WithAdjustment");
      _Init_thread_footer(&_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_128,StaticName,&local_350,false,local_3c0);
    FCollisionResponseContainer::FCollisionResponseContainer(&local_278.CollisionResponse);
    FCollisionResponseContainer::SetAllChannels(&local_278.CollisionResponse,ECR_Block);
    (**(code **)(*(longlong *)param_3 + 0x8b0))(param_3,&local_128,&local_278);
    FCollisionQueryParams::AddIgnoredActors(&local_128,local_3a8);
    pVVar1 = &local_398->Translation;
    local_218.X = (local_398->Rotation).XY.m128d_f64[0];
    local_218.Y = (local_398->Rotation).XY.m128d_f64[1];
    local_218.Z = (local_398->Rotation).ZW.m128d_f64[0];
    local_218.W = (local_398->Rotation).ZW.m128d_f64[1];
    local_2c8._s_0.Z = (local_398->Translation).ZW.m128d_f64[0];
    local_2c8._s_0.X = (pVVar1->XY).m128d_f64[0];
    local_2c8._s_0.Y = (local_398->Translation).XY.m128d_f64[1];
    local_3c0 = (AActor *)pVVar1;
    local_3c8 = UWorld::OverlapMultiByChannel
                          (local_3a0,&local_3b8,(TVector<double> *)&local_2c8._s_0,&local_218,
                           local_3c4,&local_328,&local_128,&local_278);
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
      local_3c0 = (AActor *)pVVar1;
    }
  }
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  if ((local_3c8 != false) && (bVar12)) {
    iVar21 = 0;
    uVar20 = 0;
    local_388._s_0.X = 0.0;
    local_388._s_0.Y = 0.0;
    local_388._s_0.Z = 0.0;
    uStack_370 = 0;
    if (0 < local_3b8.ArrayNum) {
      do {
        local_3a8 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)CONCAT44(local_3a8._4_4_,iVar21)
        ;
        uVar14 = 0;
        if ((int)uVar20 < local_3b8.ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (local_3b8.AllocatorInstance.Data +
                                      ((longlong)(int)uVar20 * 9 + 4) * 8));
        if ((pUVar19 != (UObject *)0x0) &&
           (iVar15 = (**(code **)(*(longlong *)pUVar19 + 0x5e8))(pUVar19,local_3c4), iVar15 == 2)) {
          iVar21 = iVar21 + 1;
          (**(code **)(*(longlong *)param_3 + 0x8b8))(param_3,&local_300,0);
          local_3a0 = *(UWorld **)(*(longlong *)pUVar19 + 0x818);
          uVar14 = 0;
          if ((int)uVar20 < local_3b8.ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          iVar15 = FOverlapResult::GetItemIndex
                             ((FOverlapResult *)
                              (local_3b8.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x48));
          local_390 = 0;
          this = (FBodyInstance *)(*(code *)local_3a0)(pUVar19,0,1,iVar15);
          pTVar11 = local_398;
          pAVar10 = local_3c0;
          if (this != (FBodyInstance *)0x0) {
            local_1f8.X = (local_398->Rotation).XY.m128d_f64[0];
            local_1f8.Y = (local_398->Rotation).XY.m128d_f64[1];
            local_1f8.Z = (local_398->Rotation).ZW.m128d_f64[0];
            local_1f8.W = (local_398->Rotation).ZW.m128d_f64[1];
            local_2b0._s_0.Z = (double)local_3c0->_padding_;
            local_2b0._s_0.X = (double)local_3c0->_padding_;
            local_2b0._s_0.Y = (double)local_3c0->_padding_;
            bVar12 = FBodyInstance::OverlapTest
                               (this,(TVector<double> *)&local_2b0._s_0,&local_1f8,&local_300,
                                (FMTDResult *)&local_388._s_0,false);
            if (bVar12) {
              dVar22 = (double)(float)uStack_370;
              (param_5->field0_0x0)._s_0.X =
                   local_388._s_0.X * dVar22 + (param_5->field0_0x0)._s_0.X;
              (param_5->field0_0x0)._s_0.Y =
                   local_388._s_0.Y * dVar22 + (param_5->field0_0x0)._s_0.Y;
              (param_5->field0_0x0)._s_0.Z =
                   local_388._s_0.Z * dVar22 + (param_5->field0_0x0)._s_0.Z;
              if ((float)((uint)(float)uStack_370 & uVar6) <= fVar2) {
                (**(code **)(*(longlong *)param_3 + 0x8b8))
                          (param_3,&local_2f0,CONCAT44(uVar7,uVar23));
                local_1d8.X = (pTVar11->Rotation).XY.m128d_f64[0];
                local_1d8.Y = (pTVar11->Rotation).XY.m128d_f64[1];
                local_1d8.Z = (pTVar11->Rotation).ZW.m128d_f64[0];
                local_1d8.W = (pTVar11->Rotation).ZW.m128d_f64[1];
                local_298._s_0.Z = (double)pAVar10->_padding_;
                local_298._s_0.X = (double)pAVar10->_padding_;
                local_298._s_0.Y = (double)pAVar10->_padding_;
                bVar12 = FBodyInstance::OverlapTest
                                   (this,(TVector<double> *)&local_298._s_0,&local_1d8,&local_2f0,
                                    (FMTDResult *)&local_388._s_0,false);
                if (bVar12) {
                  dVar22 = (double)(float)uStack_370;
                  (param_5->field0_0x0)._s_0.X =
                       local_388._s_0.X * dVar22 + (param_5->field0_0x0)._s_0.X;
                  (param_5->field0_0x0)._s_0.Y =
                       local_388._s_0.Y * dVar22 + (param_5->field0_0x0)._s_0.Y;
                  (param_5->field0_0x0)._s_0.Z =
                       local_388._s_0.Z * dVar22 + (param_5->field0_0x0)._s_0.Z;
                }
                else {
                  if (4 < (byte)LogPhysics._0_1_) {
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
                  }
                  iVar21 = (int)local_3a8;
                }
              }
              goto LAB_147e6169a;
            }
          }
          if (4 < (byte)LogPhysics._0_1_) {
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
          }
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_3c8 = true;
          (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          (param_5->field0_0x0)._s_0.Y = (double)uVar8;
          (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          goto LAB_147e6171d;
        }
LAB_147e6169a:
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < local_3b8.ArrayNum);
      if (iVar21 != 0) goto LAB_147e6171d;
    }
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3c8 = false;
    (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_5->field0_0x0)._s_0.Y = (double)uVar8;
    (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
LAB_147e6171d:
  if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.AllocatorInstance.Data);
  }
  return local_3c8;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintTypeConversions @ 147e64300

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintTypeConversions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary @ 147e64310

void __cdecl EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLatentActionManager @ 147e64320

void __cdecl EmptyLinkFunctionForGeneratedCodeLatentActionManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLayer @ 147e64330

void __cdecl EmptyLinkFunctionForGeneratedCodeLayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLegacyScreenPercentageDriver @ 147e64340

void __cdecl EmptyLinkFunctionForGeneratedCodeLegacyScreenPercentageDriver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevel @ 147e64350

void __cdecl EmptyLinkFunctionForGeneratedCodeLevel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelActorContainer @ 147e64360

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelActorContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelBounds @ 147e64370

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelBounds(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceActor @ 147e64380

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceComponent @ 147e64390

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorInstanceActor @ 147e643a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorInstanceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorLevelStreaming @ 147e643b0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorLevelStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorObject @ 147e643c0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPivotActor @ 147e643d0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPivotActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPropertyOverrideLevelStreaming @ 147e643e0

void __cdecl
EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPropertyOverrideLevelStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceInterface @ 147e643f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceLevelStreaming @ 147e64400

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceLevelStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideAsset @ 147e64410

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverridePolicy @ 147e64420

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverridePolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideSamplePolicy @ 147e64430

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideSamplePolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceSettings @ 147e64440

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceSubsystem @ 147e64450

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelScriptActor @ 147e64460

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelScriptActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint @ 147e64470

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelStreaming @ 147e64480

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelStreaming(void)

{
  return;
}

// EnumToString @ 147e64d80

wchar_t * __cdecl EnumToString(ELevelStreamingState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Removed:
    return L"Removed";
  case Unloaded:
    return L"Unloaded";
  case FailedToLoad:
    return L"FailedToLoad";
  case Loading:
    return L"Loading";
  case LoadedNotVisible:
    return L"LoadedNotVisible";
  case MakingVisible:
    return L"MakingVisible";
  case LoadedVisible:
    return L"LoadedVisible";
  case MakingInvisible:
    return L"MakingInvisible";
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3914447087793601293>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                     ,0x4f3,"false");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// EnumToString @ 147e64e60

wchar_t * __cdecl EnumToString(ELevelStreamingTargetState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Unloaded) {
    return L"Unloaded";
  }
  if (param_1 == UnloadedAndRemoved) {
    return L"UnloadedAndRemoved";
  }
  if (param_1 == LoadedNotVisible) {
    return L"LoadedNotVisible";
  }
  if (param_1 != LoadedVisible) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3914447087793601276>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                       ,0x504,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unknown";
  }
  return L"LoadedVisible";
}

// FLevelStreamingLoadedStatus_DelegateWrapper @ 147e65070

void __cdecl
FLevelStreamingLoadedStatus_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FLevelStreamingVisibilityStatus_DelegateWrapper @ 147e65080

void __cdecl
FLevelStreamingVisibilityStatus_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// InitScreenPercentage @ 147e6cda0

void __cdecl InitScreenPercentage(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  lVar2 = CVarScreenPercentage._padding_;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)CVarScreenPercentage._padding_ + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = OnScreenPercentageChange;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  (*pcVar1)(lVar2,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// NetDriverRenameStreamingLevelPackageForPIE @ 147e70a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl NetDriverRenameStreamingLevelPackageForPIE(UWorld *param_1,FName param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  FWorldContext *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_e0;
  int iStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  pFVar9 = UEngine::GetWorldContextFromWorld(GEngine,param_1);
  if ((pFVar9 != (FWorldContext *)0x0) && ((pFVar9->WorldType).Value == '\x03')) {
    uVar3 = (pFVar9->ActiveNetDrivers).ArrayNum;
    uVar11 = (ulonglong)(int)uVar3;
    pFVar18 = (pFVar9->ActiveNetDrivers).AllocatorInstance.Data;
    pFVar16 = pFVar18 + uVar11 * 0x10;
    local_e8 = pFVar16;
    while( true ) {
      if ((pFVar9->ActiveNetDrivers).ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar18 == pFVar16) break;
      if ((*(longlong *)pFVar18 != 0) &&
         (lVar13 = *(longlong *)(*(longlong *)pFVar18 + 0x1c8), lVar13 != 0)) {
        iVar4 = *(int *)(lVar13 + 0x30);
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x18);
        iStack_d8 = 0;
        plVar2 = (longlong *)(lVar13 + 8);
        local_c0 = 0;
        uStack_d4 = 1;
        iStack_c4 = 0;
        if (iVar4 != 0) {
          pTVar19 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x28);
          }
          uVar15 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
          while (uVar15 == 0) {
            lVar12 = (longlong)iStack_d8;
            local_c0 = local_c0 + 0x20;
            iStack_d8 = iStack_d8 + 1;
            iStack_c4 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8)
            goto LAB_147e70bc0;
            uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
          }
          uStack_d4 = -uVar15 & uVar15;
          uVar11 = (ulonglong)uStack_d4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iStack_c4 = local_c0 + -1 + (int)lVar12;
          if (iVar4 < iStack_c4) {
            iStack_c4 = iVar4;
          }
        }
LAB_147e70bc0:
        uVar15 = *(uint *)(lVar13 + 0x30);
        uStack_bc = local_44;
        iStack_b8 = *(int *)(lVar13 + 0x10) - *(int *)(lVar13 + 0x3c);
        uVar20 = uVar15 & 0xffffffe0;
        TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
        uStack_c8 = 0xffffffff;
        TStack_a8.CurrentBitIndex = iStack_c4;
        TStack_a8.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar15 >> 5;
        TStack_a8._28_4_ = local_44;
        TStack_a8.BaseBitIndex = local_c0;
        uStack_88 = CONCAT44(uStack_b4,iStack_b8);
        local_e0 = plVar2;
        local_d0 = pTVar1;
        local_b0 = plVar2;
        TStack_a8.Array = pTVar1;
        if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar5 = *(uint *)(lVar13 + 0x30);
        if (uVar15 != uVar5) {
          pTVar19 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x28);
          }
          uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                   *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
          while (uVar15 == 0) {
            lVar13 = (longlong)iVar17;
            uVar20 = uVar20 + 0x20;
            iVar17 = iVar17 + 1;
            uVar15 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_147e70ce0;
            uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uVar11 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar15 = (int)lVar13 + -1 + uVar20;
          if ((int)uVar5 < (int)uVar15) {
            uVar15 = uVar5;
          }
        }
LAB_147e70ce0:
        while( true ) {
          plVar7 = local_b0;
          if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,FNetGuidCacheObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_a8.CurrentBitIndex == uVar15) && (TStack_a8.Array == pTVar1)) &&
             (pFVar16 = local_e8, plVar7 == plVar2)) break;
          lVar13 = *plVar7;
          lVar12 = (longlong)TStack_a8.CurrentBitIndex * 0x40;
          if ((((*(byte *)(lVar12 + lVar13) & 1) != 0) &&
              (*(longlong *)(lVar12 + 0x10 + lVar13) == 0)) &&
             (*(FName *)(lVar12 + 0x18 + lVar13) == param_2)) {
            iVar4 = pFVar9->PIEInstance;
            pFVar10 = FName::ToString((FName *)(lVar12 + lVar13 + 0x18),local_70);
            pFVar10 = UWorld::ConvertToPIEPackageName(&local_80,pFVar10,iVar4);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FName::FName(&local_f0,pwVar14);
            *(FName *)(lVar12 + lVar13 + 0x18) = local_f0;
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
            }
          }
          TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
        }
      }
      pFVar18 = pFVar18 + 0x10;
      uVar11 = (ulonglong)uVar3;
    }
  }
  return;
}

// OnScreenPercentageChange @ 147e71bb0

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

void __cdecl OnScreenPercentageChange(IConsoleVariable *param_1)

{
  FStaticBasicLogRecord *pFVar1;
  undefined1 auStack_268 [32];
  FDynamicResolutionStateInfos local_248;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_268;
  (**(code **)(*(longlong *)param_1 + 0xd0))();
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  if ((GEngine->GameViewport).field0_0x0.DebugPtr == (UGameViewportClient *)0x0) {
    return;
  }
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_248.ResolutionFractionApproximations);
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_248.ResolutionFractionUpperBounds);
  UEngine::GetDynamicResolutionCurrentStateInfos(GEngine,&local_248);
  if (local_248.Status == Enabled) {
    if ((byte)LogEngine._0_1_ < 4) goto LAB_147e71c6a;
    pFVar1 = &LOG_Static;
  }
  else {
    if ((local_248.Status != DebugForceEnabled) || ((byte)LogEngine._0_1_ < 4)) goto LAB_147e71c6a;
    pFVar1 = &LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar1,(FLogCategoryBase *)&LogEngine);
LAB_147e71c6a:
  if (local_248.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_248.ResolutionFractionUpperBounds.Array.AllocatorInstance.
                          SecondaryData);
  }
  if (local_248.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_248.ResolutionFractionApproximations.Array.AllocatorInstance.
                          SecondaryData);
  }
  return;
}

// ReturnNullVariant @ 147e7c8c0

UScriptStruct * __cdecl ReturnNullVariant(void)

{
  return (UScriptStruct *)0x0;
}

// SortActorsHierarchy @ 147e7fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
SortActorsHierarchy(TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_1,ULevel *param_2)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  UClass *pUVar11;
  undefined8 uVar12;
  UPackage *pUVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStackY_258 [32];
  undefined1 local_218;
  undefined1 local_217 [3];
  undefined4 local_214;
  uint local_210;
  uint uStack_20c;
  ForElementType<unsigned_int> FStack_208;
  undefined4 local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  ULevel *local_1f0;
  FString local_1e8;
  int local_1d8;
  LARGE_INTEGER local_1d0;
  longlong local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  <lambda_2> local_1b0;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  FName local_198;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  undefined1 local_168 [32];
  ForElementType<unsigned_int> local_148;
  uint local_140;
  int local_13c;
  int local_138;
  int local_134;
  FScriptContainerElement local_130 [8];
  ForAnyElementType local_128;
  uint local_120;
  code *local_118 [2];
  longlong local_108 [3];
  longlong *local_f0;
  ForElementType<AActor_*> local_e8;
  undefined4 local_90;
  int local_8c;
  ulonglong local_88;
  
  FVar2 = (ForElementType<unsigned_int>)((longlong)local_168 + 0x10);
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar22 = 0;
  local_214 = 0;
  bVar23 = -1 < CpuChannel->Enabled;
  local_1f0 = param_2;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1685,"SortActorsHierarchy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp",
               0x695);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1685);
  }
  QueryPerformanceCounter(&local_1d0);
  uVar17 = param_1->ArrayNum;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (ForElementType<unsigned_int>)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = -1;
  local_134 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_e8.SecondaryData = (ForElementType<AActor_*>)0x0;
  local_90 = 0;
  local_8c = 10;
  dVar5 = (double)local_1d0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (uVar17 == 0) goto LAB_147e80043;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_168,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_214 = (undefined4)lVar3;
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_120 != 0) && ((int)uVar17 <= (int)local_120)) goto LAB_147e80043;
  local_120 = uVar17;
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_147e7fe6e;
      }
    }
    else {
LAB_147e7fe6e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      uVar19 = uVar22;
      do {
        FVar14.Data = local_130;
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_128.Data;
        }
        uVar9 = uVar19 & (longlong)(int)uVar17 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar14.Data + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_120 != 0) {
    local_210 = 0;
    uStack_20c = 1;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uVar19 = uVar22;
    if (local_140 != 0) {
      FVar21 = FVar2;
      if (local_148 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_148;
      }
      uVar17 = *(uint *)FVar21;
      uVar20 = uVar22;
      while (uVar17 == 0) {
        uStack_1f8 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_1f8;
        iVar8 = (int)uVar19;
        local_210 = iVar8 + 1;
        uVar19 = (ulonglong)local_210;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_210)
        goto LAB_147e7ff82;
        uVar17 = ((uint *)((longlong)FVar21 + 4))[iVar8];
      }
      uStack_20c = -uVar17 & uVar17;
      uVar19 = (ulonglong)uStack_20c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_1d8 = (int)lVar3;
      uStack_1fc = local_1d8 + -1 + (int)uVar20;
      uVar19 = (ulonglong)uStack_1fc;
      if ((int)local_140 < (int)uStack_1fc) {
LAB_147e7ff82:
        uVar19 = (ulonglong)local_140;
        uStack_1fc = local_140;
      }
    }
    local_200 = 0xffffffff;
    local_190 = (longlong *)local_168;
    local_188._padding_ = CONCAT44(uStack_20c,local_210);
    local_188.CurrentBitIndex = uStack_1fc;
    local_188.UnvisitedBitMask = 0xffffffff;
    local_188._28_4_ = uStack_1f4;
    local_188.BaseBitIndex = uStack_1f8;
    FStack_208 = FVar2;
    local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    if ((int)uVar19 < (int)local_140) {
      do {
        lVar3 = *local_190;
        lVar10 = (longlong)(int)uVar19;
        uVar20 = *(ulonglong *)(lVar3 + lVar10 * 0x18);
        uVar17 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_120 - 1;
        *(uint *)(lVar3 + 0x14 + lVar10 * 0x18) = uVar17;
        FVar14.Data = local_130;
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_128.Data;
        }
        uVar20 = (longlong)(int)local_120 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) = *(undefined4 *)(FVar14.Data + uVar20 * 4);
        *(int *)(FVar14.Data + uVar20 * 4) = (int)uVar19;
        local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
        uVar19 = (ulonglong)(uint)local_188.CurrentBitIndex;
      } while (local_188.CurrentBitIndex < (int)*(uint *)((longlong)local_188.Array + 0x18));
    }
  }
LAB_147e80043:
  local_218 = 0;
  uVar19 = uVar22;
  if ((1 < param_1->ArrayNum) &&
     (pFVar16 = (param_1->AllocatorInstance).Data, *(longlong *)(pFVar16 + 8) != 0)) {
    pUVar11 = Z_Construct_UClass_ABrush_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(pFVar16 + 8),pUVar11);
    if (bVar6) {
      uVar19 = *(ulonglong *)(pFVar16 + 8);
    }
  }
  local_118[0] = (code *)0x0;
  local_f0 = FMemory::Malloc(0x30,8);
  *local_f0 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`SortActorsHierarchy'::`2'::<lambda_1>,0,1>::_vftable_;
  local_f0[1] = (longlong)local_168;
  local_f0[2] = (longlong)&local_e8;
  local_f0[3] = (longlong)local_118;
  local_f0[4] = (longlong)&local_218;
  local_f0[5] = uVar19;
  pFVar16 = (param_1->AllocatorInstance).Data;
  if (local_f0 + 1 != (longlong *)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`SortActorsHierarchy'::__l2::<lambda_1>,int,AActor_*>::Call;
  }
  iVar8 = param_1->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar8 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_217[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_217);
    }
    if (pFVar16 == pFVar1) break;
    if (*(longlong *)pFVar16 != 0) {
      local_1c8 = *(longlong *)pFVar16;
      UE::Core::Private::Function::CheckCallable(local_118[0]);
      pcVar4 = local_118[0];
      plVar15 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar15 = local_f0;
      }
      uVar12 = (**(code **)(*plVar15 + 8))();
      (*pcVar4)(uVar12,&local_1c8);
      local_90 = 0;
      if ((local_8c < 0) && (local_8c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                  (8,8,0,&local_e8,0,&local_8c);
      }
    }
    pFVar16 = pFVar16 + 8;
  }
  QueryPerformanceCounter(&local_1c0);
  local_1b0.DepthMap =
       (TMap<AActor_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,int,0>_> *)
       local_168;
  QueryPerformanceCounter(&local_1b8);
  TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
  Sort<TObjectPtr<AActor>,_SortActorsHierarchy_::__l2::<lambda_2>_>
            ((TObjectPtr<AActor> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,&local_1b0);
  QueryPerformanceCounter(&local_1a8);
  QueryPerformanceCounter(&local_1a0);
  if (((__real_3ff0000000000000 <
        (double)local_1a0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) &&
      (bVar6 = FApp::IsUnattended(), !bVar6)) && (2 < (byte)LogLevel._0_1_)) {
    if (local_1f0 != (ULevel *)0x0) {
      pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)local_1f0);
      if (pUVar13 == (UPackage *)0x0) {
        FString::FString(&local_1e8,L"None");
      }
      else {
        local_198 = (FName)pUVar13->_padding_;
        FName::ToString(&local_198,&local_1e8);
      }
      uVar22 = 1;
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogLevel);
    if ((uVar22 != 0) && (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  uVar17 = param_1->ArrayNum;
  uVar19 = (ulonglong)(int)uVar17;
  uVar22 = uVar19;
  uVar18 = uVar17;
  if (0 < (int)uVar17) {
    do {
      uVar17 = (uint)uVar19;
      uVar7 = 0;
      if ((int)(uVar18 - 1) < param_1->ArrayNum) {
        uVar7 = -uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((param_1->AllocatorInstance).Data + uVar22 * 8 + -8) != 0) break;
      uVar17 = uVar17 - 1;
      uVar19 = (ulonglong)uVar17;
      uVar22 = uVar22 - 1;
      uVar18 = uVar18 - 1;
    } while (0 < (longlong)uVar22);
  }
  if ((int)uVar17 < param_1->ArrayNum) {
    uVar18 = param_1->ArrayNum - uVar17;
    if (((int)(uVar18 | uVar17) < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar18 != 0) {
      pFVar16 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 8;
      iVar8 = (param_1->ArrayNum - uVar18) - uVar17;
      if (iVar8 != 0) {
        memmove(pFVar16,pFVar16 + (longlong)(int)uVar18 * 8,(longlong)iVar8 << 3);
      }
      iVar8 = param_1->ArrayNum - uVar18;
      param_1->ArrayNum = iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&param_1->AllocatorInstance,iVar8,&param_1->ArrayMax);
    }
  }
  if (local_118[0] != (code *)0x0) {
    plVar15 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar15 = local_f0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (local_e8.SecondaryData != (ForElementType<AActor_*>)0x0) {
    FMemory::Free((void *)local_e8.SecondaryData);
  }
  local_120 = 0;
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AActor_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Z_Construct_UClass_ALevelBounds_NoRegister @ 147e86ec0

UClass * __cdecl Z_Construct_UClass_ALevelBounds_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelBounds",
               &Z_Registration_Info_UClass_ALevelBounds.InnerSingleton,
               ALevelBounds::StaticRegisterNativesALevelBounds,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelBounds>,
               InternalVTableHelperCtorCaller<ALevelBounds>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelBounds.InnerSingleton;
}

// Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister @ 147e86f80

UClass * __cdecl Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorInstanceActor",
               &Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton,
               ALevelInstanceEditorInstanceActor::
               StaticRegisterNativesALevelInstanceEditorInstanceActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstanceEditorInstanceActor>,
               InternalVTableHelperCtorCaller<ALevelInstanceEditorInstanceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton;
}

// Z_Construct_UClass_ALevelInstancePivot_NoRegister @ 147e87040

UClass * __cdecl Z_Construct_UClass_ALevelInstancePivot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePivot",
               &Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton,
               ALevelInstancePivot::StaticRegisterNativesALevelInstancePivot,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstancePivot>,
               InternalVTableHelperCtorCaller<ALevelInstancePivot>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton;
}

// Z_Construct_UClass_ALevelInstance_NoRegister @ 147e87100

UClass * __cdecl Z_Construct_UClass_ALevelInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstance",
               &Z_Registration_Info_UClass_ALevelInstance.InnerSingleton,
               ALevelInstance::StaticRegisterNativesALevelInstance,0x360,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstance>,InternalVTableHelperCtorCaller<ALevelInstance>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstance.InnerSingleton;
}

// Z_Construct_UClass_UActorContainer_NoRegister @ 147e871c0

UClass * __cdecl Z_Construct_UClass_UActorContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UActorContainer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorContainer",
               &Z_Registration_Info_UClass_UActorContainer.InnerSingleton,
               UActorContainer::StaticRegisterNativesUActorContainer,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorContainer>,
               InternalVTableHelperCtorCaller<UActorContainer>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorContainer.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintTypeConversions_NoRegister @ 147e871d0

UClass * __cdecl Z_Construct_UClass_UBlueprintTypeConversions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintTypeConversions",
               &Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton,
               UBlueprintTypeConversions::StaticRegisterNativesUBlueprintTypeConversions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintTypeConversions>,
               InternalVTableHelperCtorCaller<UBlueprintTypeConversions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton;
}

// Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister @ 147e87280

UClass * __cdecl Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ImportanceSamplingLibrary",
               &Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton,
               UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UImportanceSamplingLibrary>,
               InternalVTableHelperCtorCaller<UImportanceSamplingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton;
}

// Z_Construct_UClass_ULayer_NoRegister @ 147e87340

UClass * __cdecl Z_Construct_UClass_ULayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Layer",&Z_Registration_Info_UClass_ULayer.InnerSingleton,
               ULayer::StaticRegisterNativesULayer,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULayer>,InternalVTableHelperCtorCaller<ULayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayer.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstanceEditorObject_NoRegister @ 147e873f0

UClass * __cdecl Z_Construct_UClass_ULevelInstanceEditorObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorObject",
               &Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton,
               ULevelInstanceEditorObject::StaticRegisterNativesULevelInstanceEditorObject,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceEditorObject>,
               InternalVTableHelperCtorCaller<ULevelInstanceEditorObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstanceInterface_NoRegister @ 147e874a0

UClass * __cdecl Z_Construct_UClass_ULevelInstanceInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceInterface",
               &Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton,
               ULevelInstanceInterface::StaticRegisterNativesULevelInstanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceInterface>,
               InternalVTableHelperCtorCaller<ULevelInstanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister @ 147e87560

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideAsset",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton,
               ULevelInstancePropertyOverrideAsset::
               StaticRegisterNativesULevelInstancePropertyOverrideAsset,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideAsset>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideAsset>,local_res8,
               UWorldPartitionPropertyOverride::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideAsset.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister @ 147e87620

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverridePolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverridePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton,
               ULevelInstancePropertyOverridePolicy::
               StaticRegisterNativesULevelInstancePropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverridePolicy>,local_res8,
               UWorldPartitionPropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverridePolicy.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_NoRegister @ 147e876e0

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideSamplePolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideSamplePolicy",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton
               ,ULevelInstancePropertyOverrideSamplePolicy::
                StaticRegisterNativesULevelInstancePropertyOverrideSamplePolicy,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstancePropertyOverrideSamplePolicy>,
               InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideSamplePolicy>,local_res8
               ,ULevelInstancePropertyOverridePolicy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideSamplePolicy.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstanceSettings_NoRegister @ 147e877a0

UClass * __cdecl Z_Construct_UClass_ULevelInstanceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSettings",
               &Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton,
               ULevelInstanceSettings::StaticRegisterNativesULevelInstanceSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceSettings>,
               InternalVTableHelperCtorCaller<ULevelInstanceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSettings.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister @ 147e87850

UClass * __cdecl Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULevelInstanceSubsystem::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSubsystem",
               &Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton,
               ULevelInstanceSubsystem::StaticRegisterNativesULevelInstanceSubsystem,0x1d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstanceSubsystem>
               ,InternalVTableHelperCtorCaller<ULevelInstanceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton;
}

// Z_Construct_UClass_ULevelScriptBlueprint_NoRegister @ 147e87910

UClass * __cdecl Z_Construct_UClass_ULevelScriptBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelScriptBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelScriptBlueprint",
               &Z_Registration_Info_UClass_ULevelScriptBlueprint.InnerSingleton,
               ULevelScriptBlueprint::StaticRegisterNativesULevelScriptBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelScriptBlueprint>,
               InternalVTableHelperCtorCaller<ULevelScriptBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelScriptBlueprint.InnerSingleton;
}

// Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_NoRegister @ 147e879d0

UClass * __cdecl
Z_Construct_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditorPropertyOverride",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
                InnerSingleton,
               ULevelStreamingLevelInstanceEditorPropertyOverride::
               StaticRegisterNativesULevelStreamingLevelInstanceEditorPropertyOverride,0x200,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditorPropertyOverride>,
               local_res8,ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditorPropertyOverride.
         InnerSingleton;
}

// Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister @ 147e87a90

UClass * __cdecl Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstanceEditor",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton,
               ULevelStreamingLevelInstanceEditor::
               StaticRegisterNativesULevelStreamingLevelInstanceEditor,0x1f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstanceEditor>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstanceEditor>,local_res8,
               ULevelStreamingAlwaysLoaded::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.InnerSingleton;
}

// Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister @ 147e87b50

UClass * __cdecl Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstance",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton,
               ULevelStreamingLevelInstance::StaticRegisterNativesULevelStreamingLevelInstance,0x230
               ,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstance>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstance>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EScreenPercentageMode @ 147e87c10

UEnum * __cdecl Z_Construct_UEnum_Engine_EScreenPercentageMode(void)

{
  if (Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage @ 147e87c50

UEnum * __cdecl Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage(void)

{
  if (Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton,
               &Z_Construct_UEnum_Engine_EViewStatusForScreenPercentage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EViewStatusForScreenPercentage.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorFolderSet @ 147e87c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorFolderSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorFolderSet.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorFolderSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorFolderSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorFolderSet.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorFolderSet.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDynamicTextureInstance @ 147e87d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicTextureInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicTextureInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicTextureInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicTextureInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDynamicTextureInstance.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FLatentActionInfo @ 147e87d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLatentActionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLatentActionInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLatentActionInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FLatentActionInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLatentActionInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLatentActionInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FLatentActionManager @ 147e87e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLatentActionManager(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLatentActionManager.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLatentActionManager.InnerSingleton,
               &Z_Construct_UScriptStruct_FLatentActionManager_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLatentActionManager.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLatentActionManager.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FLevelSimplificationDetails @ 147e87e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSimplificationDetails(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// LatentActionsChangedDelegate'' @ 1503f2270

void __cdecl
`dynamic_atexit_destructor_for_'FLatentActionManager::LatentActionsChangedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLatentActionManager::LatentActionsChangedDelegate._8_8_,
             FLatentActionManager::LatentActionsChangedDelegate._16_4_);
  if (FLatentActionManager::LatentActionsChangedDelegate._8_8_ != 0) {
    FMemory::Free((void *)FLatentActionManager::LatentActionsChangedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FLatentActionManager::LatentActionsChangedDelegate);
  return;
}

// LevelAnnotations'' @ 1503f22b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'ULevelStreaming::LevelAnnotations__(void)

{
  FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
  ~FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>(&ULevelStreaming::LevelAnnotations)
  ;
  return;
}

// LevelDirtiedEvent'' @ 1503f22d0

void __cdecl `dynamic_atexit_destructor_for_'ULevel::LevelDirtiedEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)ULevel::LevelDirtiedEvent._8_8_,
             ULevel::LevelDirtiedEvent._16_4_);
  if (ULevel::LevelDirtiedEvent._8_8_ != 0) {
    FMemory::Free((void *)ULevel::LevelDirtiedEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&ULevel::LevelDirtiedEvent);
  return;
}

// StreamedLevelsOwningWorld'' @ 1503f2310

void __cdecl `dynamic_atexit_destructor_for_'ULevel::StreamedLevelsOwningWorld__(void)

{
  ULevel::StreamedLevelsOwningWorld._72_4_ = 0;
  if (ULevel::StreamedLevelsOwningWorld._64_8_ != 0) {
    FMemory::Free((void *)ULevel::StreamedLevelsOwningWorld._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ULevel::StreamedLevelsOwningWorld);
  return;
}

// `dynamic_atexit_destructor_for_'CVarActorClusteringEnabled'' @ 1503f2350

void __cdecl _dynamic_atexit_destructor_for__CVarActorClusteringEnabled__(void)

{
  CVarActorClusteringEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarActorClusteringEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarActorClusteringFixStalePointers'' @ 1503f2370

void __cdecl _dynamic_atexit_destructor_for__CVarActorClusteringFixStalePointers__(void)

{
  CVarActorClusteringFixStalePointers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarActorClusteringFixStalePointers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowDestroyNonNetworkActors'' @ 1503f2390

void __cdecl _dynamic_atexit_destructor_for__CVarAllowDestroyNonNetworkActors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowDestroyNonNetworkActors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncrementalPreRegisterComponents'' @ 1503f23b0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowIncrementalPreRegisterComponents__(void)

{
  CVarAllowIncrementalPreRegisterComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowIncrementalPreRegisterComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncrementalPreUnregisterComponents'' @ 1503f23d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowIncrementalPreUnregisterComponents__(void)

{
  CVarAllowIncrementalPreUnregisterComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowIncrementalPreUnregisterComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncrementalRemovalWhilePendingVisibility'' @ 1503f23f0

void __cdecl
LevelStreamingCVars::
_dynamic_atexit_destructor_for__CVarAllowIncrementalRemovalWhilePendingVisibility__(void)

{
  CVarAllowIncrementalRemovalWhilePendingVisibility._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowIncrementalRemovalWhilePendingVisibility);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoPixelCountMultiplier'' @ 1503f2410

void __cdecl _dynamic_atexit_destructor_for__CVarAutoPixelCountMultiplier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutoPixelCountMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultAllowClientUseMakingInvisibleTransactionRequests'' @ 1503f2430

void __cdecl
LevelStreamingCVars::
_dynamic_atexit_destructor_for__CVarDefaultAllowClientUseMakingInvisibleTransactionRequests__(void)

{
  CVarDefaultAllowClientUseMakingInvisibleTransactionRequests._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultAllowClientUseMakingInvisibleTransactionRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultAllowClientUseMakingVisibleTransactionRequests'' @ 1503f2450

void __cdecl
LevelStreamingCVars::
_dynamic_atexit_destructor_for__CVarDefaultAllowClientUseMakingVisibleTransactionRequests__(void)

{
  CVarDefaultAllowClientUseMakingVisibleTransactionRequests._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultAllowClientUseMakingVisibleTransactionRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayOnActorSpawnedUntilFinishedSpawning'' @ 1503f2470

void __cdecl
UE::Gameplay::CVars::_dynamic_atexit_destructor_for__CVarDelayOnActorSpawnedUntilFinishedSpawning__
          (void)

{
  CVarDelayOnActorSpawnedUntilFinishedSpawning._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDelayOnActorSpawnedUntilFinishedSpawning);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEncroachEpsilon'' @ 1503f2490

void __cdecl _dynamic_atexit_destructor_for__CVarEncroachEpsilon__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEncroachEpsilon);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLatentActionGuaranteeEngineTickDelay'' @ 1503f24b0

void __cdecl
LatentActionCVars::_dynamic_atexit_destructor_for__CVarLatentActionGuaranteeEngineTickDelay__(void)

{
  CVarLatentActionGuaranteeEngineTickDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLatentActionGuaranteeEngineTickDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelStreamingPriorityBias'' @ 1503f24d0

void __cdecl
LevelStreamingCVars::_dynamic_atexit_destructor_for__CVarLevelStreamingPriorityBias__(void)

{
  CVarLevelStreamingPriorityBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLevelStreamingPriorityBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOptimizeActorRegistration'' @ 1503f24f0

void __cdecl _dynamic_atexit_destructor_for__CVarOptimizeActorRegistration__(void)

{
  CVarOptimizeActorRegistration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOptimizeActorRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRouteActorInitializationWorkUnitWeighting'' @ 1503f2510

void __cdecl _dynamic_atexit_destructor_for__CVarRouteActorInitializationWorkUnitWeighting__(void)

{
  CVarRouteActorInitializationWorkUnitWeighting._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRouteActorInitializationWorkUnitWeighting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentage'' @ 1503f2530

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageDefault'' @ 1503f2550

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageDefault__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenPercentageDefault);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageDefaultDesktopMode'' @ 1503f2570

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageDefaultDesktopMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarScreenPercentageDefaultDesktopMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageDefaultMobileMode'' @ 1503f2590

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageDefaultMobileMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarScreenPercentageDefaultMobileMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageDefaultPathTracerMode'' @ 1503f25b0

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageDefaultPathTracerMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarScreenPercentageDefaultPathTracerMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageDefaultVRMode'' @ 1503f25d0

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageDefaultVRMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenPercentageDefaultVRMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageMaxResolution'' @ 1503f25f0

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageMaxResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenPercentageMaxResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenPercentageMinResolution'' @ 1503f2610

void __cdecl _dynamic_atexit_destructor_for__CVarScreenPercentageMinResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenPercentageMinResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldReuseUnloadedButStillAroundLevels'' @ 1503f2630

void __cdecl
LevelStreamingCVars::_dynamic_atexit_destructor_for__CVarShouldReuseUnloadedButStillAroundLevels__
          (void)

{
  CVarShouldReuseUnloadedButStillAroundLevels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShouldReuseUnloadedButStillAroundLevels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldServerUseMakingVisibleTransactionRequest'' @ 1503f2650

void __cdecl
LevelStreamingCVars::
_dynamic_atexit_destructor_for__CVarShouldServerUseMakingVisibleTransactionRequest__(void)

{
  CVarShouldServerUseMakingVisibleTransactionRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShouldServerUseMakingVisibleTransactionRequest);
  return;
}

// `dynamic_atexit_destructor_for_'LogLevel'' @ 1503f2670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLevel__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLevel);
  return;
}

// `dynamic_atexit_destructor_for_'LogLevelActorContainer'' @ 1503f2690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLevelActorContainer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLevelActorContainer);
  return;
}

// `dynamic_atexit_destructor_for_'LogLevelInstance'' @ 1503f26b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLevelInstance__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLevelInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogLevelStreaming'' @ 1503f26d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLevelStreaming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLevelStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'ThisFramePawnSpawns'' @ 1503f26f0

void __cdecl _dynamic_atexit_destructor_for__ThisFramePawnSpawns__(void)

{
  DestructItems<FString,int>
            ((FString *)ThisFramePawnSpawns.AllocatorInstance.Data,ThisFramePawnSpawns.ArrayNum);
  if (ThisFramePawnSpawns.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ThisFramePawnSpawns.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 15051c050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
``ULevel::Serialize'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  ULevel *this_00;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1878737386691625661>);
  if (bVar5) {
    this_00 = AActor::GetLevel((AActor *)**(undefined8 **)this);
    if (this_00 == (ULevel *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    }
    if (*(UObjectBaseUtility **)((longlong)this + 8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)((longlong)this + 8),&local_38,(UObject *)0x0);
    }
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_48,(UObject *)0x0);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1878737386691625661>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15051c188;
    }
  }
  bVar5 = false;
LAB_15051c188:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15051c1f0

bool __thiscall
``ULevel::IncrementalRegisterComponents'::__l20::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1878737386691626968>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1878737386691626968>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051c25d;
    }
  }
  bVar2 = false;
LAB_15051c25d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

