// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 421

// BuildTimeBuildMilliseconds'' @ 14115dcc0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::BuildTimeBuildMilliseconds__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::BuildTimeBuildMilliseconds,L"BuildTimeBuildMilliseconds"
                );
  return;
}

// BuildTimeLoadMilliseconds'' @ 14115dce0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::BuildTimeLoadMilliseconds__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::BuildTimeLoadMilliseconds,L"BuildTimeLoadMilliseconds");
  return;
}

// BuildTimeTotalMilliseconds'' @ 14115dd00

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::BuildTimeTotalMilliseconds__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::BuildTimeTotalMilliseconds,L"BuildTimeTotalMilliseconds"
                );
  return;
}

// CVarEnableServerStreaming'' @ 14115dd20

void __cdecl `dynamic_initializer_for_'UWorldPartition::CVarEnableServerStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartition::CVarEnableServerStreaming,L"wp.Runtime.EnableServerStreaming",
             &UWorldPartition::GlobalEnableServerStreaming,
             L"Set to 1 to enable server streaming, set to 2 to only enable it in PIE.\nChanging the value while the game is running won\'t be considered."
             ,4);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartition::CVarEnableServerStreaming__);
  return;
}

// CVarEnableServerStreamingOut'' @ 14115dd70

void __cdecl `dynamic_initializer_for_'UWorldPartition::CVarEnableServerStreamingOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartition::CVarEnableServerStreamingOut,L"wp.Runtime.EnableServerStreamingOut",
             &UWorldPartition::bGlobalEnableServerStreamingOut,
             L"Turn on/off to allow or not the server to stream out levels (only relevant when server streaming is enabled)\nChanging the value while the game is running won\'t be considered."
             ,4);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartition::CVarEnableServerStreamingOut__);
  return;
}

// CVarUseMakingInvisibleTransactionRequests'' @ 14115ddc0

void __cdecl
`dynamic_initializer_for_'UWorldPartition::CVarUseMakingInvisibleTransactionRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartition::CVarUseMakingInvisibleTransactionRequests,
             L"wp.Runtime.UseMakingInvisibleTransactionRequests",
             &UWorldPartition::bUseMakingInvisibleTransactionRequests,
             L"Whether the client should wait for the server to acknowledge visibility update before making partitioned world streaming levels invisible.\nChanging the value while the game is running won\'t be considered."
             ,4);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartition::
         CVarUseMakingInvisibleTransactionRequests__);
  return;
}

// CVarUseMakingVisibleTransactionRequests'' @ 14115de10

void __cdecl
`dynamic_initializer_for_'UWorldPartition::CVarUseMakingVisibleTransactionRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartition::CVarUseMakingVisibleTransactionRequests,
             L"wp.Runtime.UseMakingVisibleTransactionRequests",
             &UWorldPartition::bUseMakingVisibleTransactionRequests,
             L"Whether the client should wait for the server to acknowledge visibility update before making partitioned world streaming levels visible.\nChanging the value while the game is running won\'t be considered."
             ,4);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartition::CVarUseMakingVisibleTransactionRequests__)
  ;
  return;
}

// EnableHLODCommand'' @ 14115de60

void __cdecl
`dynamic_initializer_for_'UWorldPartitionHLODRuntimeSubsystem::EnableHLODCommand__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionHLODRuntimeSubsystem::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UWorldPartitionHLODRuntimeSubsystem::EnableHLODCommand,L"wp.Runtime.HLOD",
             L"Turn on/off loading & rendering of world partition HLODs.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionHLODRuntimeSubsystem::EnableHLODCommand__);
  return;
}

// InputActorCount'' @ 14115df90

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::InputActorCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::InputActorCount,L"InputActorCount");
  return;
}

// InputTriangleCount'' @ 14115dfb0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::InputTriangleCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::InputTriangleCount,L"InputTriangleCount");
  return;
}

// InputVertexCount'' @ 14115dfd0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::InputVertexCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::InputVertexCount,L"InputVertexCount");
  return;
}

// MaterialBaseColorTextureSize'' @ 14115dff0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialBaseColorTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialBaseColorTextureSize,
                 L"MaterialBaseColorTextureSize");
  return;
}

// MaterialEmissiveTextureSize'' @ 14115e010

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialEmissiveTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialEmissiveTextureSize,
                 L"MaterialEmissiveTextureSize");
  return;
}

// MaterialMetallicTextureSize'' @ 14115e030

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialMetallicTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialMetallicTextureSize,
                 L"MaterialMetallicTextureSize");
  return;
}

// MaterialNormalTextureSize'' @ 14115e050

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialNormalTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialNormalTextureSize,L"MaterialNormalTextureSize");
  return;
}

// MaterialRoughnessTextureSize'' @ 14115e070

void __cdecl
`dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialRoughnessTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialRoughnessTextureSize,
                 L"MaterialRoughnessTextureSize");
  return;
}

// MaterialSpecularTextureSize'' @ 14115e090

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MaterialSpecularTextureSize__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MaterialSpecularTextureSize,
                 L"MaterialSpecularTextureSize");
  return;
}

// MemoryDiskSizeBytes'' @ 14115e0b0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MemoryDiskSizeBytes__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MemoryDiskSizeBytes,L"MemoryDiskSizeBytes");
  return;
}

// MemoryMeshResourceSizeBytes'' @ 14115e0d0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MemoryMeshResourceSizeBytes__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MemoryMeshResourceSizeBytes,
                 L"MemoryMeshResourceSizeBytes");
  return;
}

// MemoryTexturesResourceSizeBytes'' @ 14115e0f0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionHLODStats::MemoryTexturesResourceSizeBytes__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MemoryTexturesResourceSizeBytes,
                 L"MemoryTexturesResourceSizeBytes");
  return;
}

// MeshInstanceCount'' @ 14115e110

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshInstanceCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshInstanceCount,L"MeshInstanceCount");
  return;
}

// MeshNaniteTriangleCount'' @ 14115e130

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshNaniteTriangleCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshNaniteTriangleCount,L"MeshNaniteTriangleCount");
  return;
}

// MeshNaniteVertexCount'' @ 14115e150

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshNaniteVertexCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshNaniteVertexCount,L"MeshNaniteVertexCount");
  return;
}

// MeshTriangleCount'' @ 14115e170

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshTriangleCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshTriangleCount,L"MeshTriangleCount");
  return;
}

// MeshUVChannelCount'' @ 14115e190

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshUVChannelCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshUVChannelCount,L"MeshUVChannelCount");
  return;
}

// MeshVertexCount'' @ 14115e1b0

void __cdecl `dynamic_initializer_for_'FWorldPartitionHLODStats::MeshVertexCount__(void)

{
  ::FName::FName(&FWorldPartitionHLODStats::MeshVertexCount,L"MeshVertexCount");
  return;
}

// `dynamic_initializer_for_'CVarHLODSink'' @ 14115e1d0

void __cdecl _dynamic_initializer_for__CVarHLODSink__(void)

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
    puVar3[3] = HLODRuntimeSubsystemCVarSinkFunction;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarHLODSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarHLODSink.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarHLODSink.Handle.Handle.ID = (FDelegateHandle)0;
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
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarHLODSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
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
  atexit(_dynamic_atexit_destructor_for__CVarHLODSink__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupDebugDraw'' @ 14115e360

void __cdecl _dynamic_initializer_for__CVarHLODWarmupDebugDraw__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupDebugDraw,L"wp.Runtime.HLOD.WarmupDebugDraw",local_res8,
             L"Draw debug display for the warmup requests",0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupDebugDraw__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupEnabled'' @ 14115e3b0

void __cdecl _dynamic_initializer_for__CVarHLODWarmupEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupEnabled,L"wp.Runtime.HLOD.WarmupEnabled",local_res8,
             L"Enable HLOD assets warmup. Will delay unloading of cells & transition to HLODs for wp.Runtime.HLOD.WarmupNumFrames frames."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupNanite'' @ 14115e400

void __cdecl _dynamic_initializer_for__CVarHLODWarmupNanite__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupNanite,L"wp.Runtime.HLOD.WarmupNanite",local_res8,
             L"Enable Nanite warmup for HLOD assets. Requires wp.Runtime.HLOD.WarmupEnabled to be 1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupNanite__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupNumFrames'' @ 14115e450

void __cdecl _dynamic_initializer_for__CVarHLODWarmupNumFrames__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupNumFrames,L"wp.Runtime.HLOD.WarmupNumFrames",local_res8,
             L"Delay unloading of a cell for this amount of frames to ensure HLOD assets are ready to be shown at the proper resolution. Set to 0 to force disable warmup."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupNumFrames__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupVT'' @ 14115e4a0

void __cdecl _dynamic_initializer_for__CVarHLODWarmupVT__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupVT,L"wp.Runtime.HLOD.WarmupVT",local_res8,
             L"Enable virtual texture warmup for HLOD assets. Requires wp.Runtime.HLOD.WarmupEnabled to be 1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupVT__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupVTScaleFactor'' @ 14115e4f0

void __cdecl _dynamic_initializer_for__CVarHLODWarmupVTScaleFactor__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 2.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarHLODWarmupVTScaleFactor,L"wp.Runtime.HLOD.WarmupVTScaleFactor",local_res8,
             L"Scale the VT size we ask to prefetch by this factor.",0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupVTScaleFactor__);
  return;
}

// `dynamic_initializer_for_'CVarHLODWarmupVTSizeClamp'' @ 14115e540

void __cdecl _dynamic_initializer_for__CVarHLODWarmupVTSizeClamp__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODWarmupVTSizeClamp,L"wp.Runtime.HLOD.WarmupVTSizeClamp",local_res8,
             L"Clamp VT warmup requests for safety.",0);
  atexit(_dynamic_atexit_destructor_for__CVarHLODWarmupVTSizeClamp__);
  return;
}

// `dynamic_initializer_for_'CVarShowRuntimeHashSetDebugDisplayLevel'' @ 14115e590

void __cdecl _dynamic_initializer_for__CVarShowRuntimeHashSetDebugDisplayLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRuntimeHashSetDebugDisplayLevel,L"wp.Runtime.HashSet.ShowDebugDisplayLevel",
             &GShowRuntimeHashSetDebugDisplayLevel,
             L"Used to choose which level to display when showing runtime partitions.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayLevel__);
  return;
}

// `dynamic_initializer_for_'CVarShowRuntimeHashSetDebugDisplayLevelCount'' @ 14115e5e0

void __cdecl _dynamic_initializer_for__CVarShowRuntimeHashSetDebugDisplayLevelCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRuntimeHashSetDebugDisplayLevelCount,
             L"wp.Runtime.HashSet.ShowDebugDisplayLevelCount",
             &GShowRuntimeHashSetDebugDisplayLevelCount,
             L"Used to choose how many levels to display when showing runtime partitions.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayLevelCount__);
  return;
}

// `dynamic_initializer_for_'CVarShowRuntimeHashSetDebugDisplayMode'' @ 14115e630

void __cdecl _dynamic_initializer_for__CVarShowRuntimeHashSetDebugDisplayMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRuntimeHashSetDebugDisplayMode,L"wp.Runtime.HashSet.ShowDebugDisplayMode",
             &GShowRuntimeHashSetDebugDisplayMode,
             L"Used to choose what mode to display when showing runtime partitions (0=Level Streaming State, 1=Data Layers, 2=Content Bundles, 3=Level Streaming State Without Data Layers/Content Bundles)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayMode__);
  return;
}

// `dynamic_initializer_for_'LogHLODBuilder'' @ 14115e680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLODBuilder__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHLODBuilder,L"LogHLODBuilder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLODBuilder__);
  return;
}

// `dynamic_initializer_for_'LogHLODLayer'' @ 14115e6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLODLayer__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHLODLayer,L"LogHLODLayer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLODLayer__);
  return;
}

// `dynamic_initializer_for_'LogHLODRuntimeSubsystem'' @ 14115e700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLODRuntimeSubsystem__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogHLODRuntimeSubsystem,L"LogHLODRuntimeSubsystem",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLODRuntimeSubsystem__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14115e740

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag'' @ 14115e760

void __cdecl
_dynamic_initializer_for__NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag__
          (void)

{
  FName::FName(&NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag,
               L"GetHLODDestructionTag");
  return;
}

// `dynamic_initializer_for_'NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag'' @ 14115e780

void __cdecl
_dynamic_initializer_for__NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag__
          (void)

{
  FName::FName(&NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag,
               L"SetHLODDestructionTag");
  return;
}

// `dynamic_initializer_for_'SetLogWorldPartitionVerbosity'' @ 14115e7a0

void __cdecl _dynamic_initializer_for__SetLogWorldPartitionVerbosity__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SetLogWorldPartitionVerbosity,L"wp.Runtime.SetLogWorldPartitionVerbosity",
             L"Change the WorldPartition log verbosity.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__SetLogWorldPartitionVerbosity__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h__Script_Engine_1572579684'' @ 14115e8d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h__Script_Engine_1572579684__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_WorldPartition_LevelInstance_LevelInstancePropertyOverrideContainer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h__Script_Engine_2930095216'' @ 14115e910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h__Script_Engine_2930095216__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h__Script_Engine_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h__Script_Engine_1580276961'' @ 14115e960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h__Script_Engine_1580276961__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h__Script_Engine_2645631916'' @ 14115e9b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h__Script_Engine_2645631916__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedSkinnedMeshComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h__Script_Engine_2493361731'' @ 14115ea00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h__Script_Engine_2493361731__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h__Script_Engine_1997290175'' @ 14115ea50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h__Script_Engine_1997290175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h__Script_Engine_3358805594'' @ 14115eaa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h__Script_Engine_3358805594__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h__Script_Engine_3798255620'' @ 14115eae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h__Script_Engine_3798255620__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODOnlyLevelInstanceActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h__Script_Engine_1235301564'' @ 14115eb20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h__Script_Engine_1235301564__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODProviderInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h__Script_Engine_3231746988'' @ 14115eb60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h__Script_Engine_3231746988__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODRuntimeSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h__Script_Engine_1016036499'' @ 14115eba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h__Script_Engine_1016036499__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromCell_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h__Script_Engine_907070601'' @ 14115ebe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h__Script_Engine_907070601__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h__Script_Engine_3182598192'' @ 14115ec20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h__Script_Engine_3182598192__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h__Script_Engine_2634513676'' @ 14115ec60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h__Script_Engine_2634513676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_MaterialParameterCollectionHLODModifier_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h__Script_Engine_1200179706'' @ 14115ecb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h__Script_Engine_1200179706__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h__Script_Engine_688928165'' @ 14115ecf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h__Script_Engine_688928165__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_StandaloneHLODSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h__Script_Engine_227784747'' @ 14115ed30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h__Script_Engine_227784747__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_LevelInstance_LevelInstanceContainerInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h__Script_Engine_1517932018'' @ 14115ed70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h__Script_Engine_1517932018__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h__Script_Engine_3432146660'' @ 14115edb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h__Script_Engine_3432146660__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h__Script_Engine_1519523287'' @ 14115edf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h__Script_Engine_1519523287__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h__Script_Engine_2087455044'' @ 14115ee30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h__Script_Engine_2087455044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionPersistent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h__Script_Engine_1016327371'' @ 14115ee70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h__Script_Engine_1016327371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h__Script_Engine_3756579162'' @ 14115eec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h__Script_Engine_3756579162__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeCellDataHashSet_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h__Script_Engine_800683220'' @ 14115ef00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h__Script_Engine_800683220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h__Script_Engine_1248513815'' @ 14115ef50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h__Script_Engine_1248513815__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_MapBuildDataActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h__Script_Engine_3952874577'' @ 14115ef90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h__Script_Engine_3952874577__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_StaticLightingData_VolumetricLightmapGrid_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h__Script_Engine_933604152'' @ 14115efd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h__Script_Engine_933604152__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h__Script_Engine_3875112700'' @ 14115f010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h__Script_Engine_3875112700__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag @ 148a71240

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag @ 148a712d0

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD @ 148a714b0

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD @ 148a714f0

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_URuntimePartition @ 148a71570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimePartition(void)

{
  if (Z_Registration_Info_UClass_URuntimePartition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimePartition.OuterSingleton,
               &Z_Construct_UClass_URuntimePartition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimePartition.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod @ 148a715b0

UEnum * __cdecl Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod(void)

{
  if (Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.InnerSingleton;
}

// ERuntimePartitionCellBoundsMethod_StaticEnum @ 148a715f0

UEnum * __cdecl ERuntimePartitionCellBoundsMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod,(UObject *)pUVar1,
                       L"ERuntimePartitionCellBoundsMethod");
  }
  return Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton;
}

// NewProp_bBlockOnSlowStreaming_SetBit @ 148a71630

void __cdecl
Z_Construct_UClass_URuntimePartition_Statics::NewProp_bBlockOnSlowStreaming_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bClientOnlyVisible_SetBit @ 148a71640

void __cdecl
Z_Construct_UClass_URuntimePartition_Statics::NewProp_bClientOnlyVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent @ 148a71650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.OuterSingleton;
}

// NewStructOps @ 148a71750

void * __cdecl
Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODSkinnedMeshComponentDescriptor,&UE::CoreUObject::Private::Construct<FHLODSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FHLODSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FHLODSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Copy<FHLODSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FHLODSkinnedMeshComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URuntimePartitionLevelStreaming @ 148a71850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimePartitionLevelStreaming(void)

{
  if (Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton,
               &Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.OuterSingleton;
}

// Z_Construct_UClass_UHLODInstancedStaticMeshComponent @ 148a718d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHLODInstancedStaticMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton;
}

// NewStructOps @ 148a71a60

void * __cdecl Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODISMComponentDescriptor,&UE::CoreUObject::Private::Construct<FHLODISMComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FHLODISMComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FHLODISMComponentDescriptor>,&UE::CoreUObject::Private::Copy<FHLODISMComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FHLODISMComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URuntimePartitionLHGrid @ 148a71aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimePartitionLHGrid(void)

{
  if (Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton,
               &Z_Construct_UClass_URuntimePartitionLHGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148a71d60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_URuntimePartitionPersistent @ 148a71e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimePartitionPersistent(void)

{
  if (Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton,
               &Z_Construct_UClass_URuntimePartitionPersistent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimePartitionPersistent.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet @ 148a72010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.OuterSingleton;
}

// NewProp_bIs2D_SetBit @ 148a72050

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_Statics::NewProp_bIs2D_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
  return;
}

// Z_Construct_UClass_UHLODLayer @ 148a72110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHLODLayer(void)

{
  if (Z_Registration_Info_UClass_UHLODLayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHLODLayer.OuterSingleton,
               &Z_Construct_UClass_UHLODLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHLODLayer.OuterSingleton;
}

// EHLODLayerType_StaticEnum @ 148a72150

UEnum * __cdecl EHLODLayerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EHLODLayerType,(UObject *)pUVar1,L"EHLODLayerType");
  }
  return Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148a724d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionHLODRuntimeSubsystem::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionHLODRuntimeSubsystem::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UWorldPartitionHLODModifier @ 148a72700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODModifier(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton;
}

// Z_Construct_UScriptStruct_FVolumetricLightMapGridCell @ 148a728f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVolumetricLightMapGridCell(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridCell.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridCell.InnerSingleton,
               &Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridCell.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridCell.InnerSingleton;
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

// NewStructOps @ 148a72970

void * __cdecl Z_Construct_UScriptStruct_FVolumetricLightMapGridCell_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVolumetricLightMapGridCell,&UE::CoreUObject::Private::Construct<FVolumetricLightMapGridCell>,&UE::CoreUObject::Private::ConstructForTests<FVolumetricLightMapGridCell>,&UE::CoreUObject::Private::Destruct<FVolumetricLightMapGridCell>,&UE::CoreUObject::Private::Copy<FVolumetricLightMapGridCell>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem @ 148a729b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartition @ 148a729f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartition(void)

{
  if (Z_Registration_Info_UClass_UWorldPartition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartition.OuterSingleton,
               &Z_Construct_UClass_UWorldPartition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartition.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator @ 148a72a30

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode @ 148a72a70

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode @ 148a72ab0

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.InnerSingleton;
}

// EWorldPartitionServerStreamingMode_StaticEnum @ 148a72af0

UEnum * __cdecl EWorldPartitionServerStreamingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode,(UObject *)pUVar1
                       ,L"EWorldPartitionServerStreamingMode");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton;
}

// Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance @ 148a72b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.OuterSingleton;
}

// EWorldPartitionServerStreamingOutMode_StaticEnum @ 148a72c10

UEnum * __cdecl EWorldPartitionServerStreamingOutMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode,
                       (UObject *)pUVar1,L"EWorldPartitionServerStreamingOutMode");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton;
}

// NewStructOps @ 148a72d90

void * __cdecl Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVolumetricLightMapGridDesc,&UE::CoreUObject::Private::Construct<FVolumetricLightMapGridDesc>,&UE::CoreUObject::Private::ConstructForTests<FVolumetricLightMapGridDesc>,&UE::CoreUObject::Private::Destruct<FVolumetricLightMapGridDesc>,&UE::CoreUObject::Private::Copy<FVolumetricLightMapGridDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EWorldPartitionDataLayersLogicOperator_StaticEnum @ 148a72dd0

UEnum * __cdecl EWorldPartitionDataLayersLogicOperator_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator,
                       (UObject *)pUVar1,L"EWorldPartitionDataLayersLogicOperator");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton;
}

// Z_Construct_UClass_AMapBuildDataActor @ 148a72e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMapBuildDataActor(void)

{
  if (Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton,
               &Z_Construct_UClass_AMapBuildDataActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMapBuildDataActor.OuterSingleton;
}

// NewStructOps @ 148a72e50

void * __cdecl Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimeCellTransformerInstance,&UE::CoreUObject::Private::Construct<FRuntimeCellTransformerInstance>,&UE::CoreUObject::Private::ConstructForTests<FRuntimeCellTransformerInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UHLODBuilder @ 148a72f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHLODBuilder(void)

{
  if (Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton,
               &Z_Construct_UClass_UHLODBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton;
}

// Z_Construct_UClass_UHLODBuilderSettings @ 148a72f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHLODBuilderSettings(void)

{
  if (Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton,
               &Z_Construct_UClass_UHLODBuilderSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton;
}

// Z_Construct_UClass_UNullHLODBuilder @ 148a72fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNullHLODBuilder(void)

{
  if (Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton,
               &Z_Construct_UClass_UNullHLODBuilder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton;
}

// Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets @ 148a73000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODBuildInputReferencedAssets.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODBuildInputReferencedAssets.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODBuildInputReferencedAssets.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODBuildInputReferencedAssets.InnerSingleton;
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

// NewProp_bEnableStreaming_SetBit @ 148a73140

void __cdecl
Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActors @ 148a73150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActors(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton;
}

// NewProp_bHasStandaloneHLOD_SetBit @ 148a73190

void __cdecl
Z_Construct_UClass_UWorldPartition_Statics::NewProp_bHasStandaloneHLOD_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 1;
  return;
}

// NewProp_bIsStandaloneHLODWorld_SetBit @ 148a731a0

void __cdecl
Z_Construct_UClass_UWorldPartition_Statics::NewProp_bIsStandaloneHLODWorld_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return;
}

// NewProp_bDisableContentBundles_SetBit @ 148a731b0

void __cdecl
Z_Construct_UClass_UWorldPartition_Statics::NewProp_bDisableContentBundles_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 4;
  return;
}

// NewStructOps @ 148a73420

void * __cdecl Z_Construct_UScriptStruct_FHLODBuildInputReferencedAssets_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODBuildInputReferencedAssets,&UE::CoreUObject::Private::Construct<FHLODBuildInputReferencedAssets>,&UE::CoreUObject::Private::ConstructForTests<FHLODBuildInputReferencedAssets>,&UE::CoreUObject::Private::Destruct<FHLODBuildInputReferencedAssets>,&UE::CoreUObject::Private::Copy<FHLODBuildInputReferencedAssets>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URuntimeHashSetExternalStreamingObject @ 148a73610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimeHashSetExternalStreamingObject(void)

{
  if (Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton,
               &Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeHashSet @ 148a73650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeHashSet(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell @ 148a73690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRuntimePartitionDesc @ 148a736d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionDesc.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimePartitionDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionDesc.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRuntimePartitionDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup @ 148a73750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionHLODSetup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimePartitionHLODSetup.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionHLODSetup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimePartitionHLODSetup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimePartitionStreamingData @ 148a737d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionStreamingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimePartitionStreamingData.InnerSingleton;
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

// NewProp_bIsSpatiallyLoaded_SetBit @ 148a73850

void __cdecl
Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewProp_bIsSpatiallyLoaded_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 148a73860

void * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimePartitionHLODSetup,&UE::CoreUObject::Private::Construct<FRuntimePartitionHLODSetup>,&UE::CoreUObject::Private::ConstructForTests<FRuntimePartitionHLODSetup>,&UE::CoreUObject::Private::Destruct<FRuntimePartitionHLODSetup>,&UE::CoreUObject::Private::Copy<FRuntimePartitionHLODSetup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148a738a0

void * __cdecl Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODBuildInputStats,&UE::CoreUObject::Private::Construct<FHLODBuildInputStats>,&UE::CoreUObject::Private::ConstructForTests<FHLODBuildInputStats>,&UE::CoreUObject::Private::Destruct<FHLODBuildInputStats>,&UE::CoreUObject::Private::Copy<FHLODBuildInputStats>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148a73920

void * __thiscall
FHLODSkinnedMeshComponentDescriptor::_scalar_deleting_destructor_
          (FHLODSkinnedMeshComponentDescriptor *this,uint param_1)

{
  FSkinnedMeshComponentDescriptor::~FSkinnedMeshComponentDescriptor
            ((FSkinnedMeshComponentDescriptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// NewStructOps @ 148a73a20

void * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimePartitionDesc,&UE::CoreUObject::Private::Construct<FRuntimePartitionDesc>,&UE::CoreUObject::Private::ConstructForTests<FRuntimePartitionDesc>,&UE::CoreUObject::Private::Destruct<FRuntimePartitionDesc>,&UE::CoreUObject::Private::Copy<FRuntimePartitionDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionHLODProvider @ 148a73ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODProvider(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODProvider.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel @ 148a73b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton;
}

// NewStructOps @ 148a73bb0

void * __cdecl Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimePartitionStreamingData,&UE::CoreUObject::Private::Construct<FRuntimePartitionStreamingData>,&UE::CoreUObject::Private::ConstructForTests<FRuntimePartitionStreamingData>,&UE::CoreUObject::Private::Destruct<FRuntimePartitionStreamingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister @ 148a73dd0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODInterface",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton
               ,UWorldPartitionDestructibleInHLODInterface::
                StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.InnerSingleton;
}

// Z_Construct_UClass_UMaterialParameterCollectionHLODModifier @ 148a73ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialParameterCollectionHLODModifier(void)

{
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.OuterSingleton,
               &Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.OuterSingleton;
}

// Z_Construct_UScriptStruct_FHLODModifierScalarParameter @ 148a73f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODModifierScalarParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODModifierScalarParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODModifierScalarParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODModifierScalarParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODModifierScalarParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODModifierScalarParameter.InnerSingleton;
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

// NewStructOps @ 148a73f90

void * __cdecl Z_Construct_UScriptStruct_FHLODModifierScalarParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODModifierScalarParameter,&UE::CoreUObject::Private::Construct<FHLODModifierScalarParameter>,&UE::CoreUObject::Private::ConstructForTests<FHLODModifierScalarParameter>,&UE::CoreUObject::Private::Destruct<FHLODModifierScalarParameter>,&UE::CoreUObject::Private::Copy<FHLODModifierScalarParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AWorldPartitionStandaloneHLOD @ 148a74250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionStandaloneHLOD(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionStandaloneHLOD_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem @ 148a74350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.OuterSingleton;
}

// Z_Construct_UClass_ULevelInstanceContainerInstance @ 148a74450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstanceContainerInstance(void)

{
  if (Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton,
               &Z_Construct_UClass_ULevelInstanceContainerInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstanceContainerInstance.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148a74650

void * __thiscall
FHLODISMComponentDescriptor::_scalar_deleting_destructor_
          (FHLODISMComponentDescriptor *this,uint param_1)

{
  FISMComponentDescriptor::~FISMComponentDescriptor((FISMComponentDescriptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideContainer @ 148a74690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideContainer(void)

{
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton,
               &Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.OuterSingleton;
}

// Z_Construct_UClass_ANavigationDataChunkActor @ 148a74a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationDataChunkActor(void)

{
  if (Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton,
               &Z_Construct_UClass_ANavigationDataChunkActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton;
}

// Z_Construct_UClass_URuntimePartition_NoRegister @ 148a74b40

UClass * __cdecl Z_Construct_UClass_URuntimePartition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartition",
               &Z_Registration_Info_UClass_URuntimePartition.InnerSingleton,
               URuntimePartition::StaticRegisterNativesURuntimePartition,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimePartition>,
               InternalVTableHelperCtorCaller<URuntimePartition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartition.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionActorLoaderInterface @ 148a75010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionActorLoaderInterface(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface @ 148a75110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton
               ,&Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary @ 148a75150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag @ 148a75190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionHLODDestructionTag.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionHLODDestructionTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionHLODDestructionTag.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionHLODDestructionTag.InnerSingleton;
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

// NewStructOps @ 148a75210

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionHLODDestructionTag,&UE::CoreUObject::Private::Construct<FWorldPartitionHLODDestructionTag>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionHLODDestructionTag>,&UE::CoreUObject::Private::Destruct<FWorldPartitionHLODDestructionTag>,&UE::CoreUObject::Private::Copy<FWorldPartitionHLODDestructionTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister @ 148a75250

UClass * __cdecl Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects =
         URuntimeHashSetExternalStreamingObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashSetExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton,
               URuntimeHashSetExternalStreamingObject::
               StaticRegisterNativesURuntimeHashSetExternalStreamingObject,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimeHashSetExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeHashSetExternalStreamingObject>,local_res8,
               URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton;
}

// CastChecked<URuntimeHashSetExternalStreamingObject,URuntimeHashExternalStreamingObjectBase> @ 148a76540

URuntimeHashSetExternalStreamingObject * __cdecl
CastChecked<URuntimeHashSetExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
          (URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    pFVar3 = GetTypeName<URuntimeHashSetExternalStreamingObject>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = URuntimeHashSetExternalStreamingObject::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (URuntimeHashSetExternalStreamingObject *)param_1;
  }
  pFVar3 = GetTypeName<URuntimeHashSetExternalStreamingObject>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<URuntimeHashExternalStreamingObjectBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWorldPartitionRuntimeCellDataHashSet,UWorldPartitionRuntimeCellData> @ 148a76600

UWorldPartitionRuntimeCellDataHashSet * __cdecl
CastChecked<UWorldPartitionRuntimeCellDataHashSet,UWorldPartitionRuntimeCellData>
          (TObjectPtr<UWorldPartitionRuntimeCellData> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UWorldPartitionRuntimeCellDataHashSet *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UWorldPartitionRuntimeCellData *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UWorldPartitionRuntimeCellDataHashSet>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UWorldPartitionRuntimeCellDataHashSet *)0x0;
  }
  else {
    pUVar2 = UWorldPartitionRuntimeCellDataHashSet::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UWorldPartitionRuntimeCellDataHashSet *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UWorldPartitionRuntimeCellDataHashSet *)0x0)) {
      pFVar3 = GetTypeName<UWorldPartitionRuntimeCellDataHashSet>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
                         (&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// ConstructItems<TObjectPtr<UWorldPartitionRuntimeCell>,TObjectPtr<UWorldPartitionRuntimeCell>,int> @ 148a766c0

void __cdecl
ConstructItems<TObjectPtr<UWorldPartitionRuntimeCell>,TObjectPtr<UWorldPartitionRuntimeCell>,int>
          (void *param_1,TObjectPtr<UWorldPartitionRuntimeCell> *param_2,int param_3)

{
  TObjectPtr<UWorldPartitionRuntimeCell> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UWorldPartitionRuntimeCell>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UWorldPartitionRuntimeCell>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UWorldPartitionRuntimeCell *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TTuple<FString,FLinearColor>,TTuple<FString,FLinearColor>,int> @ 148a76720

void __cdecl
ConstructItems<TTuple<FString,FLinearColor>,TTuple<FString,FLinearColor>,int>
          (void *param_1,TTuple<FString,FLinearColor> *param_2,int param_3)

{
  undefined1 *puVar1;
  FString *this;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar4 + (longlong)param_2);
      FString::FString(this,(FString *)param_2);
      puVar1 = &param_2->field_0x10;
      uVar2 = *(undefined4 *)&param_2->field_0x18;
      uVar3 = *(undefined4 *)&param_2->field_0x1c;
      param_2 = param_2 + 1;
      this[1].Data.AllocatorInstance.Data = *(FScriptContainerElement **)puVar1;
      this[1].Data.ArrayNum = uVar2;
      this[1].Data.ArrayMax = uVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRuntimePartitionHLODSetup,FRuntimePartitionHLODSetup,int> @ 148a76790

void __cdecl
ConstructItems<FRuntimePartitionHLODSetup,FRuntimePartitionHLODSetup,int>
          (void *param_1,FRuntimePartitionHLODSetup *param_2,int param_3)

{
  bool bVar1;
  TObjectPtr<URuntimePartition> TVar2;
  undefined1 *puVar3;
  bool *pbVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined1 *)((longlong)param_1 + 0x10);
    pbVar4 = &param_2->bIsSpatiallyLoaded;
    do {
      *(undefined8 *)(puVar3 + -0x10) =
           *(undefined8 *)(puVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      TVar2.field0_0x0 =
           (TObjectPtr<URuntimePartition>_u_0)
           ((TObjectPtr<URuntimePartition>_u_0 *)(pbVar4 + -8))->DebugPtr;
      ((TObjectPtr<URuntimePartition>_u_0 *)(puVar3 + -8))->DebugPtr =
           (URuntimePartition *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (URuntimePartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 0x18;
      *puVar3 = bVar1;
      puVar3 = puVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVolumetricLightMapGridCell,FVolumetricLightMapGridCell,int> @ 148a76820

void __cdecl
ConstructItems<FVolumetricLightMapGridCell,FVolumetricLightMapGridCell,int>
          (void *param_1,FVolumetricLightMapGridCell *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_3 != 0) {
    puVar4 = (uint *)((longlong)param_1 + 0x60);
    puVar5 = &param_2->CellID;
    do {
      puVar1 = (undefined8 *)((longlong)param_2 + (-0x60 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *(undefined8 *)(puVar4 + -0x18) = *puVar1;
      *(undefined8 *)(puVar4 + -0x16) = uVar3;
      puVar1 = (undefined8 *)((longlong)param_2 + (-0x50 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *(undefined8 *)(puVar4 + -0x14) = *puVar1;
      *(undefined8 *)(puVar4 + -0x12) = uVar3;
      puVar1 = (undefined8 *)((longlong)param_2 + (-0x40 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *(undefined8 *)(puVar4 + -0x10) = *puVar1;
      *(undefined8 *)(puVar4 + -0xe) = uVar3;
      *(undefined8 *)(puVar4 + -0xc) =
           *(undefined8 *)((longlong)param_2 + (-0x30 - (longlong)param_1) + (longlong)puVar4);
      FBulkData::FBulkData((FBulkData *)(puVar4 + -10),(FBulkData *)(puVar5 + -10));
      uVar2 = *puVar5;
      puVar5 = puVar5 + 0x1a;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_>,int> @ 148a768f0

void __cdecl
DestructItems<TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_>,int>
          (TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,FLinearColor>,int> @ 148a76930

void __cdecl
DestructItems<TTuple<FString,FLinearColor>,int>(TTuple<FString,FLinearColor> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int> @ 148a76970

void __cdecl
DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
          (FNode *param_1,int param_2)

{
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Content;
    do {
      UE::Core::Private::
      TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
      ::Destruct((ulonglong)pTVar1->TypeIndex,pTVar1);
      pTVar1 = (TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
                *)((longlong)(pTVar1 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int> @ 148a769b0

void __cdecl
DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
          (FNode *param_1,int param_2)

{
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Content;
    do {
      UE::Core::Private::
      TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
      ::Destruct((ulonglong)pTVar1->TypeIndex,pTVar1);
      pTVar1 = pTVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRuntimePartitionDesc,int> @ 148a769f0

void __cdecl DestructItems<FRuntimePartitionDesc,int>(FRuntimePartitionDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRuntimePartitionHLODSetup,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->HLODSetups;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FRuntimePartitionHLODSetup,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRuntimePartitionStreamingData,int> @ 148a76a30

void __cdecl
DestructItems<FRuntimePartitionStreamingData,int>
          (FRuntimePartitionStreamingData *param_1,int param_2)

{
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *pTVar1;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>_>
  *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->SpatialIndexForce2D;
    do {
      pTVar1 = pTVar4[1].Ptr;
      if (pTVar1 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                     *)0x0) {
        (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
      }
      pTVar1 = pTVar4->Ptr;
      if (pTVar1 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
                     *)0x0) {
        (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
      }
      pTVar2 = ((TUniquePtr<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>,TDefaultDelete<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>_>
                 *)(pTVar4 + -1))->Ptr;
      if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                     *)0x0) {
        (*(code *)**(undefined8 **)pTVar2)(pTVar2,1);
      }
      pFVar3 = (((TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>_> *)
                (pTVar4 + -3))->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (((TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>_> *)
                (pTVar4 + -5))->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pTVar4 = pTVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWorldPartitionStreamingSource,int> @ 148a76ac0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FWorldPartitionStreamingSource,int>
          (FWorldPartitionStreamingSource *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TargetHLODLayers).Hash.SecondaryData;
    do {
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`MakeHLODRenderResourcesResident'::__l5::TSTR_MakeHLODRenderResourcesResident915>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148a787e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_MakeHLODRenderResourcesResident_::__l5::TSTR_MakeHLODRenderResourcesResident915>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`MakeHLODRenderResourcesResident'::__l5::TSTR_MakeHLODRenderResourcesResident915>
            ::Get();
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
      if (bVar8) goto LAB_148a78931;
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
    goto LAB_148a78b25;
  }
LAB_148a78931:
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
LAB_148a78a0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148a78a0f;
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
LAB_148a78b25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindByPredicate<`UWorldPartitionRuntimeHashSet::ResolveRuntimePartition'::__l5::<lambda_1>_> @ 148a792e0

FRuntimePartitionDesc * __thiscall
TArray<FRuntimePartitionDesc,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UWorldPartitionRuntimeHashSet::ResolveRuntimePartition_::__l5::<lambda_1>_>
          (TArray<FRuntimePartitionDesc,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  code *pcVar1;
  bool bVar2;
  FRuntimePartitionDesc *pFVar3;
  FRuntimePartitionDesc *pFVar4;
  
  pFVar4 = (FRuntimePartitionDesc *)(this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return (FRuntimePartitionDesc *)0x0;
    }
    if (((param_1.MainPartitionTokens)->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (pFVar4->Name == *(FName *)((param_1.MainPartitionTokens)->AllocatorInstance).Data) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FRuntimePartitionDesc *)(*pcVar1)();
  return pFVar3;
}

// FindByPredicate<`UWorldPartitionRuntimeHashSet::ResolveRuntimePartition'::__l19::<lambda_2>_> @ 148a79380

FRuntimePartitionHLODSetup * __thiscall
TArray<FRuntimePartitionHLODSetup,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UWorldPartitionRuntimeHashSet::ResolveRuntimePartition_::__l19::<lambda_2>_>
          (TArray<FRuntimePartitionHLODSetup,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  code *pcVar1;
  bool bVar2;
  FRuntimePartitionHLODSetup *pFVar3;
  FRuntimePartitionHLODSetup *pFVar4;
  
  pFVar4 = (FRuntimePartitionHLODSetup *)(this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return (FRuntimePartitionHLODSetup *)0x0;
    }
    if (((param_1.HLODPartitionTokens)->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (pFVar4->Name == *(FName *)((param_1.HLODPartitionTokens)->AllocatorInstance).Data) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FRuntimePartitionHLODSetup *)(*pcVar1)();
  return pFVar3;
}

// ForEach<TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex'::__l5::<lambda_1>_> @ 148a79980

void __cdecl
Algo::
ForEach<TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_1>_>
          (TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2)

{
  int iVar1;
  TBox2<double> *pTVar2;
  TBox2<double> *pTVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pTVar3 = (TBox2<double> *)(param_1->AllocatorInstance).Data;
  pTVar2 = (TBox2<double> *)((longlong)pTVar3 + (longlong)iVar1 * 0x30);
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar3 == pTVar2) break;
    UE::Math::TBox2<double>::operator+=(param_2.ElementsBox,pTVar3);
    pTVar3 = (TBox2<double> *)((longlong)&pTVar3[1].Min.field0_0x0 + 8);
  }
  return;
}

// ForEach<TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex'::__l5::<lambda_1>_> @ 148a799f0

void __cdecl
Algo::
ForEach<TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex_::__l5::<lambda_1>_>
          (TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2)

{
  int iVar1;
  TBox<double> *pTVar2;
  TBox<double> *pTVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pTVar3 = (TBox<double> *)(param_1->AllocatorInstance).Data;
  pTVar2 = (TBox<double> *)((longlong)pTVar3 + (longlong)iVar1 * 0x40);
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar3 == pTVar2) break;
    UE::Math::TBox<double>::operator+=(param_2.ElementsBox,pTVar3);
    pTVar3 = (TBox<double> *)((longlong)&pTVar3[1].Min.field0_0x0 + 8);
  }
  return;
}

// GetFullNameForCastLogError<URuntimeHashExternalStreamingObjectBase> @ 148a79cf0

FString * __cdecl
GetFullNameForCastLogError<URuntimeHashExternalStreamingObjectBase>
          (FString *__return_storage_ptr__,URuntimeHashExternalStreamingObjectBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UWorldPartitionRuntimeCellData> @ 148a79d20

FString * __cdecl
GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
          (FString *__return_storage_ptr__,UWorldPartitionRuntimeCellData *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<URuntimeHashSetExternalStreamingObject> @ 148a79d50

FString * __cdecl
GetTypeName<URuntimeHashSetExternalStreamingObject>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = URuntimeHashSetExternalStreamingObject::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWorldPartitionRuntimeCellDataHashSet> @ 148a79d90

FString * __cdecl
GetTypeName<UWorldPartitionRuntimeCellDataHashSet>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWorldPartitionRuntimeCellDataHashSet::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex'::__l5::<lambda_2>_>_> @ 148a79dd0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
          (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  <lambda_2> *p<Var10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar15;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar16;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar17;
  int iVar18;
  <lambda_2> *local_res20;
  undefined1 local_90 [48];
  undefined1 local_60 [56];
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>
              *)&local_res20);
  iVar18 = param_2 + -1;
  lVar12 = (longlong)iVar18;
  if (0 < iVar18) {
    pTVar17 = param_1 + lVar12;
    do {
      uVar3 = *(undefined8 *)&pTVar17->field_0x8;
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)&param_1->field_0x10;
      uVar7 = *(undefined8 *)&param_1->field_0x18;
      uVar8 = *(undefined8 *)&param_1->field_0x20;
      uVar9 = *(undefined8 *)&param_1->field_0x28;
      *(undefined8 *)param_1 = *(undefined8 *)pTVar17;
      *(undefined8 *)&param_1->field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pTVar17->field_0x18;
      *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar17->field_0x10;
      *(undefined8 *)&param_1->field_0x18 = uVar3;
      uVar3 = *(undefined8 *)&pTVar17->field_0x28;
      *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pTVar17->field_0x20;
      *(undefined8 *)&param_1->field_0x28 = uVar3;
      *(undefined8 *)pTVar17 = uVar4;
      *(undefined8 *)&pTVar17->field_0x8 = uVar5;
      *(undefined8 *)&pTVar17->field_0x10 = uVar6;
      *(undefined8 *)&pTVar17->field_0x18 = uVar7;
      *(undefined8 *)&pTVar17->field_0x20 = uVar8;
      *(undefined8 *)&pTVar17->field_0x28 = uVar9;
      iVar14 = 0;
      if (1 < iVar18) {
        do {
          p<Var10 = local_res20;
          iVar2 = iVar14 * 2;
          iVar13 = iVar2 + 1;
          if (iVar2 + 2 < iVar18) {
            local_90._0_8_ = *(undefined8 *)(param_1 + iVar13);
            local_90._8_8_ = *(undefined8 *)&param_1[iVar13].field_0x8;
            local_90._16_8_ = *(undefined8 *)&param_1[iVar13].field_0x10;
            local_90._24_8_ = *(undefined8 *)(&param_1[iVar13].field_0x10 + 8);
            local_90._32_8_ = *(undefined8 *)&param_1[iVar13].field_0x20;
            local_90._40_8_ = *(undefined8 *)&param_1[iVar13].field_0x28;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_90._40_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_90._40_8_);
            }
            bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                     ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                               (p<Var10,param_1 + (iVar2 + 2),
                                (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                                 *)local_90);
            if (bVar11) {
              iVar13 = iVar2;
            }
            iVar13 = iVar13 + 1;
          }
          p<Var10 = local_res20;
          pTVar15 = param_1 + iVar14;
          pTVar16 = param_1 + iVar13;
          local_60._0_8_ = *(undefined8 *)pTVar16;
          local_60._8_8_ = *(undefined8 *)&pTVar16->field_0x8;
          local_60._40_8_ = *(undefined8 *)&pTVar16->field_0x28;
          local_60._16_8_ = *(undefined8 *)&pTVar16->field_0x10;
          local_60._24_8_ = *(undefined8 *)&pTVar16->field_0x18;
          local_60._32_8_ = *(undefined8 *)&pTVar16->field_0x20;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_60._40_8_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_60._40_8_);
          }
          bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                   ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                             (p<Var10,pTVar15,
                              (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                               *)local_60);
          if (!bVar11) break;
          uVar3 = *(undefined8 *)&pTVar16->field_0x8;
          uVar4 = *(undefined8 *)pTVar15;
          uVar5 = *(undefined8 *)&pTVar15->field_0x8;
          uVar6 = *(undefined8 *)&pTVar15->field_0x10;
          uVar7 = *(undefined8 *)&pTVar15->field_0x18;
          uVar8 = *(undefined8 *)&pTVar15->field_0x20;
          uVar9 = *(undefined8 *)&pTVar15->field_0x28;
          *(undefined8 *)pTVar15 = *(undefined8 *)pTVar16;
          *(undefined8 *)&pTVar15->field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&pTVar16->field_0x18;
          *(undefined8 *)&pTVar15->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
          *(undefined8 *)&pTVar15->field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&pTVar16->field_0x28;
          *(undefined8 *)&pTVar15->field_0x20 = *(undefined8 *)&pTVar16->field_0x20;
          *(undefined8 *)&pTVar15->field_0x28 = uVar3;
          *(undefined8 *)pTVar16 = uVar4;
          *(undefined8 *)&pTVar16->field_0x8 = uVar5;
          *(undefined8 *)&pTVar16->field_0x10 = uVar6;
          *(undefined8 *)&pTVar16->field_0x18 = uVar7;
          *(undefined8 *)&pTVar16->field_0x20 = uVar8;
          *(undefined8 *)&pTVar16->field_0x28 = uVar9;
          iVar14 = iVar13;
        } while (iVar13 * 2 + 1 < iVar18);
      }
      lVar12 = lVar12 + -1;
      iVar18 = iVar18 + -1;
      pTVar17 = pTVar17 + -1;
    } while (0 < lVar12);
  }
  return;
}

// HeapSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex'::__l5::<lambda_2>_>_> @ 148a7a050

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
          (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar19;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar20;
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar14 = iVar12 * 2 + 1;
  iVar18 = iVar14;
  iVar13 = iVar12;
  do {
    while (param_2 <= iVar14) {
LAB_148a7a254:
      if (iVar13 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pTVar15 = param_1 + lVar16;
          do {
            uVar2 = *(undefined8 *)&pTVar15->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            uVar5 = *(undefined8 *)&param_1->field_0x10;
            uVar6 = *(undefined8 *)&param_1->field_0x18;
            uVar7 = *(undefined8 *)&param_1->field_0x20;
            uVar8 = *(undefined8 *)&param_1->field_0x28;
            uVar9 = *(undefined8 *)&param_1->field_0x30;
            uVar10 = *(undefined8 *)&param_1->field_0x38;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar15;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            uVar2 = *(undefined8 *)&pTVar15->field_0x18;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar15->field_0x10;
            *(undefined8 *)&param_1->field_0x18 = uVar2;
            uVar2 = *(undefined8 *)&pTVar15->field_0x28;
            *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pTVar15->field_0x20;
            *(undefined8 *)&param_1->field_0x28 = uVar2;
            uVar2 = *(undefined8 *)&pTVar15->field_0x38;
            *(undefined8 *)&param_1->field_0x30 = *(undefined8 *)&pTVar15->field_0x30;
            *(undefined8 *)&param_1->field_0x38 = uVar2;
            *(undefined8 *)pTVar15 = uVar3;
            *(undefined8 *)&pTVar15->field_0x8 = uVar4;
            *(undefined8 *)&pTVar15->field_0x10 = uVar5;
            *(undefined8 *)&pTVar15->field_0x18 = uVar6;
            *(undefined8 *)&pTVar15->field_0x20 = uVar7;
            *(undefined8 *)&pTVar15->field_0x28 = uVar8;
            *(undefined8 *)&pTVar15->field_0x30 = uVar9;
            *(undefined8 *)&pTVar15->field_0x38 = uVar10;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar18 * 2;
                iVar12 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  local_a8._0_8_ = *(undefined8 *)(param_1 + iVar12);
                  local_a8._8_8_ = *(undefined8 *)&param_1[iVar12].field_0x8;
                  local_a8._56_8_ = *(undefined8 *)&param_1[iVar12].field_0x38;
                  local_a8._16_8_ = *(undefined8 *)&param_1[iVar12].field_0x10;
                  local_a8._24_8_ = *(undefined8 *)(&param_1[iVar12].field_0x10 + 8);
                  local_a8._32_8_ = *(undefined8 *)&param_1[iVar12].field_0x20;
                  local_a8._40_8_ = *(undefined8 *)(&param_1[iVar12].field_0x20 + 8);
                  local_a8._48_8_ = *(undefined8 *)&param_1[iVar12].field_0x30;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     ((UObject *)local_a8._56_8_ != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_a8._56_8_);
                  }
                  bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
                           ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                                     (param_4.Predicate,param_1 + (iVar13 + 2),
                                      (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                                       *)local_a8);
                  if (bVar11) {
                    iVar12 = iVar13;
                  }
                  iVar12 = iVar12 + 1;
                }
                pTVar20 = param_1 + iVar18;
                pTVar19 = param_1 + iVar12;
                local_68._0_8_ = *(undefined8 *)pTVar19;
                local_68._8_8_ = *(undefined8 *)&pTVar19->field_0x8;
                local_68._56_8_ = *(undefined8 *)&pTVar19->field_0x38;
                local_68._16_8_ = *(undefined8 *)&pTVar19->field_0x10;
                local_68._24_8_ = *(undefined8 *)&pTVar19->field_0x18;
                local_68._32_8_ = *(undefined8 *)&pTVar19->field_0x20;
                local_68._40_8_ = *(undefined8 *)&pTVar19->field_0x28;
                local_68._48_8_ = *(undefined8 *)&pTVar19->field_0x30;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   ((UObject *)local_68._56_8_ != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_68._56_8_);
                }
                bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
                         ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                                   (param_4.Predicate,pTVar20,
                                    (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                                     *)local_68);
                if (!bVar11) break;
                uVar2 = *(undefined8 *)&pTVar19->field_0x8;
                uVar3 = *(undefined8 *)pTVar20;
                uVar4 = *(undefined8 *)&pTVar20->field_0x8;
                uVar5 = *(undefined8 *)&pTVar20->field_0x10;
                uVar6 = *(undefined8 *)&pTVar20->field_0x18;
                uVar7 = *(undefined8 *)&pTVar20->field_0x20;
                uVar8 = *(undefined8 *)&pTVar20->field_0x28;
                uVar9 = *(undefined8 *)&pTVar20->field_0x30;
                uVar10 = *(undefined8 *)&pTVar20->field_0x38;
                *(undefined8 *)pTVar20 = *(undefined8 *)pTVar19;
                *(undefined8 *)&pTVar20->field_0x8 = uVar2;
                uVar2 = *(undefined8 *)&pTVar19->field_0x18;
                *(undefined8 *)&pTVar20->field_0x10 = *(undefined8 *)&pTVar19->field_0x10;
                *(undefined8 *)&pTVar20->field_0x18 = uVar2;
                uVar2 = *(undefined8 *)&pTVar19->field_0x28;
                *(undefined8 *)&pTVar20->field_0x20 = *(undefined8 *)&pTVar19->field_0x20;
                *(undefined8 *)&pTVar20->field_0x28 = uVar2;
                uVar2 = *(undefined8 *)&pTVar19->field_0x38;
                *(undefined8 *)&pTVar20->field_0x30 = *(undefined8 *)&pTVar19->field_0x30;
                *(undefined8 *)&pTVar20->field_0x38 = uVar2;
                *(undefined8 *)pTVar19 = uVar3;
                *(undefined8 *)&pTVar19->field_0x8 = uVar4;
                *(undefined8 *)&pTVar19->field_0x10 = uVar5;
                *(undefined8 *)&pTVar19->field_0x18 = uVar6;
                *(undefined8 *)&pTVar19->field_0x20 = uVar7;
                *(undefined8 *)&pTVar19->field_0x28 = uVar8;
                *(undefined8 *)&pTVar19->field_0x30 = uVar9;
                *(undefined8 *)&pTVar19->field_0x38 = uVar10;
                iVar18 = iVar12;
              } while (iVar12 * 2 + 1 < iVar14);
            }
            lVar16 = lVar16 + -1;
            pTVar15 = pTVar15 + -1;
            iVar14 = iVar14 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar12 = iVar13 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar13 = iVar12;
    }
    iVar14 = iVar12 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      local_128._0_8_ = *(undefined8 *)(param_1 + iVar17);
      local_128._8_8_ = *(undefined8 *)&param_1[iVar17].field_0x8;
      local_128._56_8_ = *(undefined8 *)&param_1[iVar17].field_0x38;
      local_128._16_8_ = *(undefined8 *)&param_1[iVar17].field_0x10;
      local_128._24_8_ = *(undefined8 *)(&param_1[iVar17].field_0x10 + 8);
      local_128._32_8_ = *(undefined8 *)&param_1[iVar17].field_0x20;
      local_128._40_8_ = *(undefined8 *)(&param_1[iVar17].field_0x20 + 8);
      local_128._48_8_ = *(undefined8 *)&param_1[iVar17].field_0x30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_128._56_8_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_128._56_8_);
      }
      bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
               ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                         (param_4.Predicate,param_1 + (iVar14 + 2),
                          (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                          local_128);
      if (bVar11) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    pTVar19 = param_1 + iVar12;
    pTVar15 = param_1 + iVar17;
    local_e8._0_8_ = *(undefined8 *)pTVar15;
    local_e8._8_8_ = *(undefined8 *)&pTVar15->field_0x8;
    local_e8._56_8_ = *(undefined8 *)&pTVar15->field_0x38;
    local_e8._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
    local_e8._24_8_ = *(undefined8 *)&pTVar15->field_0x18;
    local_e8._32_8_ = *(undefined8 *)&pTVar15->field_0x20;
    local_e8._40_8_ = *(undefined8 *)&pTVar15->field_0x28;
    local_e8._48_8_ = *(undefined8 *)&pTVar15->field_0x30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_e8._56_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8._56_8_);
    }
    bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
             ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                       (param_4.Predicate,pTVar19,
                        (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                        local_e8);
    if (!bVar11) goto LAB_148a7a254;
    uVar2 = *(undefined8 *)&pTVar15->field_0x8;
    iVar14 = iVar17 * 2 + 1;
    uVar3 = *(undefined8 *)pTVar19;
    uVar4 = *(undefined8 *)&pTVar19->field_0x8;
    uVar5 = *(undefined8 *)&pTVar19->field_0x10;
    uVar6 = *(undefined8 *)&pTVar19->field_0x18;
    uVar7 = *(undefined8 *)&pTVar19->field_0x20;
    uVar8 = *(undefined8 *)&pTVar19->field_0x28;
    uVar9 = *(undefined8 *)&pTVar19->field_0x30;
    uVar10 = *(undefined8 *)&pTVar19->field_0x38;
    *(undefined8 *)pTVar19 = *(undefined8 *)pTVar15;
    *(undefined8 *)&pTVar19->field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15->field_0x18;
    *(undefined8 *)&pTVar19->field_0x10 = *(undefined8 *)&pTVar15->field_0x10;
    *(undefined8 *)&pTVar19->field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15->field_0x28;
    *(undefined8 *)&pTVar19->field_0x20 = *(undefined8 *)&pTVar15->field_0x20;
    *(undefined8 *)&pTVar19->field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15->field_0x38;
    *(undefined8 *)&pTVar19->field_0x30 = *(undefined8 *)&pTVar15->field_0x30;
    *(undefined8 *)&pTVar19->field_0x38 = uVar2;
    *(undefined8 *)pTVar15 = uVar3;
    *(undefined8 *)&pTVar15->field_0x8 = uVar4;
    *(undefined8 *)&pTVar15->field_0x10 = uVar5;
    *(undefined8 *)&pTVar15->field_0x18 = uVar6;
    *(undefined8 *)&pTVar15->field_0x20 = uVar7;
    *(undefined8 *)&pTVar15->field_0x28 = uVar8;
    *(undefined8 *)&pTVar15->field_0x30 = uVar9;
    *(undefined8 *)&pTVar15->field_0x38 = uVar10;
    iVar12 = iVar17;
  } while( true );
}

// HeapifyInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex'::__l5::<lambda_2>_>_>_> @ 148a7a480

void __cdecl
AlgoImpl::
HeapifyInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>_>
          (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>_>
          param_4)

{
  <lambda_2> *p<Var1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar14;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar15;
  int iVar16;
  int iVar17;
  undefined1 local_90 [48];
  undefined1 local_60 [56];
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar17 = iVar12 * 2 + 1;
  iVar3 = iVar17;
  iVar13 = iVar12;
  do {
    while (param_2 <= iVar17) {
LAB_148a7a659:
      if (iVar13 == 0) {
        return;
      }
      iVar12 = iVar13 + -1;
      iVar17 = iVar3 + -2;
      iVar3 = iVar17;
      iVar13 = iVar12;
    }
    iVar17 = iVar12 * 2;
    iVar16 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      p<Var1 = (param_4.Predicate)->Predicate;
      local_90._0_8_ = *(undefined8 *)(param_1 + iVar16);
      local_90._8_8_ = *(undefined8 *)&param_1[iVar16].field_0x8;
      local_90._16_8_ = *(undefined8 *)&param_1[iVar16].field_0x10;
      local_90._24_8_ = *(undefined8 *)(&param_1[iVar16].field_0x10 + 8);
      local_90._32_8_ = *(undefined8 *)&param_1[iVar16].field_0x20;
      local_90._40_8_ = *(undefined8 *)&param_1[iVar16].field_0x28;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_90._40_8_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_90._40_8_);
      }
      bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
               ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                         (p<Var1,param_1 + (iVar17 + 2),
                          (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *
                          )local_90);
      if (bVar11) {
        iVar16 = iVar17;
      }
      iVar16 = iVar16 + 1;
    }
    p<Var1 = (param_4.Predicate)->Predicate;
    pTVar14 = param_1 + iVar12;
    pTVar15 = param_1 + iVar16;
    local_60._0_8_ = *(undefined8 *)pTVar15;
    local_60._8_8_ = *(undefined8 *)&pTVar15->field_0x8;
    local_60._40_8_ = *(undefined8 *)&pTVar15->field_0x28;
    local_60._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
    local_60._24_8_ = *(undefined8 *)&pTVar15->field_0x18;
    local_60._32_8_ = *(undefined8 *)&pTVar15->field_0x20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_60._40_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_60._40_8_);
    }
    bVar11 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
             ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                       (p<Var1,pTVar14,
                        (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                        local_60);
    if (!bVar11) goto LAB_148a7a659;
    uVar4 = *(undefined8 *)&pTVar15->field_0x8;
    iVar17 = iVar16 * 2 + 1;
    uVar5 = *(undefined8 *)pTVar14;
    uVar6 = *(undefined8 *)&pTVar14->field_0x8;
    uVar7 = *(undefined8 *)&pTVar14->field_0x10;
    uVar8 = *(undefined8 *)&pTVar14->field_0x18;
    uVar9 = *(undefined8 *)&pTVar14->field_0x20;
    uVar10 = *(undefined8 *)&pTVar14->field_0x28;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar15;
    *(undefined8 *)&pTVar14->field_0x8 = uVar4;
    uVar4 = *(undefined8 *)&pTVar15->field_0x18;
    *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar15->field_0x10;
    *(undefined8 *)&pTVar14->field_0x18 = uVar4;
    uVar4 = *(undefined8 *)&pTVar15->field_0x28;
    *(undefined8 *)&pTVar14->field_0x20 = *(undefined8 *)&pTVar15->field_0x20;
    *(undefined8 *)&pTVar14->field_0x28 = uVar4;
    *(undefined8 *)pTVar15 = uVar5;
    *(undefined8 *)&pTVar15->field_0x8 = uVar6;
    *(undefined8 *)&pTVar15->field_0x10 = uVar7;
    *(undefined8 *)&pTVar15->field_0x18 = uVar8;
    *(undefined8 *)&pTVar15->field_0x20 = uVar9;
    *(undefined8 *)&pTVar15->field_0x28 = uVar10;
    iVar12 = iVar16;
  } while( true );
}

// InternalConstructor<AMapBuildDataActor> @ 148a7a6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AMapBuildDataActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole.Value = '\0';
  }
  return;
}

// InternalConstructor<ANavigationDataChunkActor> @ 148a7a710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANavigationDataChunkActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    APartitionActor::APartitionActor((APartitionActor *)this,param_1);
    this->_padding_ = (longlong)&___7ANavigationDataChunkActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryActorTick._padding_ = 0;
    AActor::SetCanBeDamaged(this,false);
    AActor::SetActorEnableCollision(this,false);
    return;
  }
  return;
}

// InternalConstructor<AWorldPartitionHLODOnlyLevelInstance> @ 148a7a770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionHLODOnlyLevelInstance>(FObjectInitializer *param_1)

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
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionHLODOnlyLevelInstance::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ =
         (longlong)&AWorldPartitionHLODOnlyLevelInstance::_vftable__for__ILevelInstanceInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = (longlong)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined ***)&this[1].field_0x58 = &___7FLevelInstanceActorImpl__6B_;
    *(AActor **)&this[1].RemoteRole = this + 1;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    pFVar2 = FName::FName(&local_res8,L"Root");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
    (pUVar4->Mobility).Value = '\0';
    this->bIsEditorOnlyActor = '\x01';
  }
  return;
}

// InternalConstructor<AWorldPartitionStandaloneHLOD> @ 148a7a8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionStandaloneHLOD>(FObjectInitializer *param_1)

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
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionStandaloneHLOD::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ =
         (longlong)&AWorldPartitionStandaloneHLOD::_vftable__for__ILevelInstanceInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = (longlong)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined ***)&this[1].field_0x58 = &___7FLevelInstanceActorImpl__6B_;
    *(AActor **)&this[1].RemoteRole = this + 1;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    pFVar2 = FName::FName(&local_res8,L"Root");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
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

// InternalConstructor<UHLODBuilder> @ 148a7aa30

void __cdecl InternalConstructor<UHLODBuilder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UHLODBuilder__6B_;
  }
  return;
}

// InternalConstructor<UHLODBuilderSettings> @ 148a7aa60

void __cdecl InternalConstructor<UHLODBuilderSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UHLODBuilderSettings__6B_;
  }
  return;
}

// InternalConstructor<UHLODInstancedSkinnedMeshComponent> @ 148a7aa90

void __cdecl InternalConstructor<UHLODInstancedSkinnedMeshComponent>(FObjectInitializer *param_1)

{
  UInstancedSkinnedMeshComponent *this;
  
  this = (UInstancedSkinnedMeshComponent *)param_1->Obj;
  if (this != (UInstancedSkinnedMeshComponent *)0x0) {
    UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent(this,param_1);
    *(undefined ***)this = &UHLODInstancedSkinnedMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x590 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__ILODSyncInterface__;
    *(undefined ***)&this->field_0x598 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IClothSimulationDataProvider__;
  }
  return;
}

// InternalConstructor<UHLODInstancedStaticMeshComponent> @ 148a7ab20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UHLODInstancedStaticMeshComponent>(FObjectInitializer *param_1)

{
  UInstancedStaticMeshComponent *this;
  
  this = (UInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UHLODInstancedStaticMeshComponent__6B_;
  }
  return;
}

// InternalConstructor<UHLODLayer> @ 148a7aba0

void __cdecl InternalConstructor<UHLODLayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UHLODLayer__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstanceContainerInstance> @ 148a7abd0

void __cdecl InternalConstructor<ULevelInstanceContainerInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULevelInstanceContainerInstance__6B_;
  }
  return;
}

// InternalConstructor<ULevelInstancePropertyOverrideContainer> @ 148a7ac00

void __cdecl
InternalConstructor<ULevelInstancePropertyOverrideContainer>(FObjectInitializer *param_1)

{
  UActorDescContainer *this;
  FObjectInitializer *pFVar1;
  
  this = (UActorDescContainer *)param_1->Obj;
  if (this != (UActorDescContainer *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UActorDescContainer::UActorDescContainer(this,pFVar1);
    *(undefined ***)this = &___7ULevelInstancePropertyOverrideContainer__6B_;
  }
  return;
}

// InternalConstructor<UMaterialParameterCollectionHLODModifier> @ 148a7ac40

void __cdecl
InternalConstructor<UMaterialParameterCollectionHLODModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMaterialParameterCollectionHLODModifier__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UNullHLODBuilder> @ 148a7ac90

void __cdecl InternalConstructor<UNullHLODBuilder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNullHLODBuilder__6B_;
  }
  return;
}

// InternalConstructor<URuntimeHashSetExternalStreamingObject> @ 148a7acc0

void __cdecl
InternalConstructor<URuntimeHashSetExternalStreamingObject>(FObjectInitializer *param_1)

{
  URuntimeHashExternalStreamingObjectBase *this;
  
  this = (URuntimeHashExternalStreamingObjectBase *)param_1->Obj;
  if (this != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(this,param_1);
    this->_padding_ = (longlong)&URuntimeHashSetExternalStreamingObject::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &URuntimeHashSetExternalStreamingObject::_vftable__for__IWorldPartitionCookPackageObject__;
    this->_padding_ =
         (longlong)
         &URuntimeHashSetExternalStreamingObject::_vftable__for__IDataLayerInstanceProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<URuntimePartition> @ 148a7ad20

void __cdecl InternalConstructor<URuntimePartition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URuntimePartition__6B_;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<URuntimePartitionLHGrid> @ 148a7ad60

void __cdecl InternalConstructor<URuntimePartitionLHGrid>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7URuntimePartitionLHGrid__6B_;
  }
  return;
}

// InternalConstructor<URuntimePartitionLevelStreaming> @ 148a7ada0

void __cdecl InternalConstructor<URuntimePartitionLevelStreaming>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7URuntimePartitionLevelStreaming__6B_;
  }
  return;
}

// InternalConstructor<URuntimePartitionPersistent> @ 148a7ade0

void __cdecl InternalConstructor<URuntimePartitionPersistent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7URuntimePartitionPersistent__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartition> @ 148a7ae20

void __cdecl InternalConstructor<UWorldPartition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartition__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)(this + 3) = 0xffffffff;
    *(undefined4 *)&this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0;
    this[1].field_0x14 = this[1].field_0x14 & 0xf8;
    *(undefined4 *)&this[3].field_0x20 = 0;
    this[6].field_0x10 = 0;
    this[6].field_0x20 = 1;
    this[6].field_0x22 = 0;
    this[6].field_0x24 = 0;
    this[6].field_0x26 = 0;
    *(undefined1 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)&this[1].field_0x10 = 1;
    *(undefined4 *)&this[7].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionActorLoaderInterface> @ 148a7aef0

void __cdecl InternalConstructor<UWorldPartitionActorLoaderInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionActorLoaderInterface__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionDestructibleInHLODInterface> @ 148a7af20

void __cdecl
InternalConstructor<UWorldPartitionDestructibleInHLODInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODInterface__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionDestructibleInHLODSupportLibrary> @ 148a7af50

void __cdecl
InternalConstructor<UWorldPartitionDestructibleInHLODSupportLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionHLODModifier> @ 148a7af80

void __cdecl InternalConstructor<UWorldPartitionHLODModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionHLODModifier__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionHLODProvider> @ 148a7afb0

void __cdecl InternalConstructor<UWorldPartitionHLODProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionHLODProvider__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionHLODRuntimeSubsystem> @ 148a7afe0

void __cdecl InternalConstructor<UWorldPartitionHLODRuntimeSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this == (UWorldSubsystem *)0x0) {
    return;
  }
  UWorldSubsystem::UWorldSubsystem(this);
  this->_padding_ = (longlong)&___7UWorldPartitionHLODRuntimeSubsystem__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[2]._padding_ = 0;
  this[1]._padding_ = 2;
  *(undefined4 *)&this[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
  this[2]._padding_ = 0;
  *(undefined4 *)&this[2].field_0x30 = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined4 *)&this[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x34 = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4]._padding_ = 0;
  this[4]._padding_ = 0;
  this[4]._padding_ = 0;
  this[5]._padding_ = 0;
  *(undefined4 *)&this[5]._padding_ = 0;
  *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[5]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
  this[5]._padding_ = 0;
  *(undefined4 *)&this[5]._padding_ = 0;
  this[5].field_0x30 = 1;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 0;
  this[6]._padding_ = 2;
  *(undefined8 *)&this[6].field_0x30 = 0;
  this[7]._padding_ = 0;
  this[7]._padding_ = 0;
  this[7]._padding_ = 2;
  this[7]._padding_ = 0;
  this[7]._padding_ = 0;
  this[7]._padding_ = 0;
  *(undefined8 *)&this[7].field_0x30 = 2;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 2;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[9]._padding_ = 0;
  *(undefined4 *)&this[9]._padding_ = 0;
  *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[9]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
  this[9]._padding_ = 0;
  *(undefined4 *)&this[9].field_0x30 = 0;
  this[10]._padding_ = 0;
  this[10]._padding_ = 0;
  this[10]._padding_ = 0;
  *(undefined4 *)&this[10]._padding_ = 0;
  *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[10].field_0x30 = 0xffffffff;
  *(undefined4 *)&this[10].field_0x34 = 0;
  this[0xb]._padding_ = 0;
  *(undefined4 *)&this[0xb]._padding_ = 0;
  this[0xb]._padding_ = 0;
  this[0xb]._padding_ = 0;
  this[0xc]._padding_ = 0;
  *(undefined4 *)&this[0xc]._padding_ = 0;
  *(undefined4 *)((longlong)&this[0xc]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[0xc]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[0xc]._padding_ + 4) = 0;
  this[0xc]._padding_ = 0;
  *(undefined4 *)&this[0xc]._padding_ = 0;
  return;
}

// InternalConstructor<UWorldPartitionHLODSourceActors> @ 148a7b000

void __cdecl InternalConstructor<UWorldPartitionHLODSourceActors>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionHLODSourceActorsFromCell> @ 148a7b030

void __cdecl
InternalConstructor<UWorldPartitionHLODSourceActorsFromCell>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromCell__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionHLODSourceActorsFromLevel> @ 148a7b060

void __cdecl
InternalConstructor<UWorldPartitionHLODSourceActorsFromLevel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromLevel__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellDataHashSet> @ 148a7b090

void __cdecl InternalConstructor<UWorldPartitionRuntimeCellDataHashSet>(FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellData *this;
  
  this = (UWorldPartitionRuntimeCellData *)param_1->Obj;
  if (this != (UWorldPartitionRuntimeCellData *)0x0) {
    UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataHashSet__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeHashSet> @ 148a7b0c0

void __cdecl InternalConstructor<UWorldPartitionRuntimeHashSet>(FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeHash *this;
  
  this = (UWorldPartitionRuntimeHash *)param_1->Obj;
  if (this != (UWorldPartitionRuntimeHash *)0x0) {
    UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.Elements = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x24 = 0x80;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x2c = 0;
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[0] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[1] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[2] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[3] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash._padding_ = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Hash.SecondaryData = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.HashSize = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements = 0xffffffff;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x4 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x10 = 0;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x28 = 0;
    this[2].InjectedExternalStreamingObjects.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
    ;
    this[2].InjectedExternalStreamingObjects.HashSize = 0;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.field_0x4c = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.Elements = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x24 = 0x80;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x2c = 0;
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[0] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[1] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[2] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[3] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash._padding_ = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Hash.SecondaryData = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.HashSize = 0;
    this[4]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionStandaloneHLODSubsystem> @ 148a7b230

void __cdecl
InternalConstructor<UWorldPartitionStandaloneHLODSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UWorldPartitionStandaloneHLODSubsystem__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<AMapBuildDataActor> @ 148a7b260

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

UObject * __cdecl InternalVTableHelperCtorCaller<AMapBuildDataActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMapBuildDataActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationDataChunkActor> @ 148a7b340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationDataChunkActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  APartitionActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationDataChunkActor::GetPrivateStaticClass();
  this = (APartitionActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (APartitionActor *)0x0) {
    APartitionActor::APartitionActor(this,param_1);
    *(undefined ***)this = &___7ANavigationDataChunkActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionHLODOnlyLevelInstance> @ 148a7b400

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
InternalVTableHelperCtorCaller<AWorldPartitionHLODOnlyLevelInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionHLODOnlyLevelInstance::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionHLODOnlyLevelInstance::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ =
         (longlong)&AWorldPartitionHLODOnlyLevelInstance::_vftable__for__ILevelInstanceInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined ***)&this[1].field_0x58 = &___7FLevelInstanceActorImpl__6B_;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionStandaloneHLOD> @ 148a7b550

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
InternalVTableHelperCtorCaller<AWorldPartitionStandaloneHLOD>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionStandaloneHLOD::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionStandaloneHLOD::_vftable__for__AActor__;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1]._padding_ =
         (longlong)&AWorldPartitionStandaloneHLOD::_vftable__for__ILevelInstanceInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined ***)&this[1].field_0x58 = &___7FLevelInstanceActorImpl__6B_;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHLODBuilder> @ 148a7b6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHLODBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHLODBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHLODBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHLODBuilderSettings> @ 148a7b750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHLODBuilderSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHLODBuilderSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHLODBuilderSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHLODInstancedSkinnedMeshComponent> @ 148a7b800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UHLODInstancedSkinnedMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInstancedSkinnedMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHLODInstancedSkinnedMeshComponent::GetPrivateStaticClass();
  this = (UInstancedSkinnedMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInstancedSkinnedMeshComponent *)0x0) {
    UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent(this,param_1);
    *(undefined ***)this = &UHLODInstancedSkinnedMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x590 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__ILODSyncInterface__;
    *(undefined ***)&this->field_0x598 =
         &UHLODInstancedSkinnedMeshComponent::_vftable__for__IClothSimulationDataProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHLODInstancedStaticMeshComponent> @ 148a7b910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UHLODInstancedStaticMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHLODInstancedStaticMeshComponent::GetPrivateStaticClass();
  this = (UInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UHLODInstancedStaticMeshComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UHLODInstancedStaticMeshComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHLODLayer> @ 148a7ba10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHLODLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHLODLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHLODLayer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstanceContainerInstance> @ 148a7bac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelInstanceContainerInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstanceContainerInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UActorDescContainerInstance::UActorDescContainerInstance
              ((UActorDescContainerInstance *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstanceContainerInstance__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideContainer> @ 148a7bb70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelInstancePropertyOverrideContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UActorDescContainer::UActorDescContainer((UActorDescContainer *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelInstancePropertyOverrideContainer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialParameterCollectionHLODModifier> @ 148a7bc20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialParameterCollectionHLODModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialParameterCollectionHLODModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMaterialParameterCollectionHLODModifier__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNullHLODBuilder> @ 148a7bce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNullHLODBuilder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNullHLODBuilder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNullHLODBuilder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimeHashSetExternalStreamingObject> @ 148a7bd90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URuntimeHashSetExternalStreamingObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URuntimeHashExternalStreamingObjectBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimeHashSetExternalStreamingObject::GetPrivateStaticClass();
  this = (URuntimeHashExternalStreamingObjectBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(this,param_1);
    this->_padding_ = (longlong)&URuntimeHashSetExternalStreamingObject::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &URuntimeHashSetExternalStreamingObject::_vftable__for__IWorldPartitionCookPackageObject__;
    this->_padding_ =
         (longlong)
         &URuntimeHashSetExternalStreamingObject::_vftable__for__IDataLayerInstanceProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimePartition> @ 148a7be60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URuntimePartition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimePartition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7URuntimePartition__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimePartitionLHGrid> @ 148a7bf20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URuntimePartitionLHGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimePartitionLHGrid::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URuntimePartitionLHGrid__6B_;
    pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimePartitionLevelStreaming> @ 148a7bfe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URuntimePartitionLevelStreaming>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimePartitionLevelStreaming::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URuntimePartitionLevelStreaming__6B_;
    pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimePartitionPersistent> @ 148a7c0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URuntimePartitionPersistent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimePartitionPersistent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URuntimePartitionPersistent__6B_;
    pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartition> @ 148a7c160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartition__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    pUVar1[6].field_0x10 = 0;
    pUVar1[6].field_0x22 = 0;
    pUVar1[6].field_0x24 = 0;
    pUVar1[6].field_0x26 = 0;
    *(undefined1 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionActorLoaderInterface> @ 148a7c280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionActorLoaderInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionActorLoaderInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionActorLoaderInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODInterface> @ 148a7c330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionDestructibleInHLODInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionDestructibleInHLODInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODSupportLibrary> @ 148a7c3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODSupportLibrary>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionDestructibleInHLODSupportLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODModifier> @ 148a7c490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionHLODModifier__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODProvider> @ 148a7c540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionHLODProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODRuntimeSubsystem> @ 148a7c5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODRuntimeSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionHLODRuntimeSubsystem *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODRuntimeSubsystem::GetPrivateStaticClass();
  pUVar3 = (UWorldPartitionHLODRuntimeSubsystem *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWorldPartitionHLODRuntimeSubsystem *)0x0) {
    pUVar3 = UWorldPartitionHLODRuntimeSubsystem::UWorldPartitionHLODRuntimeSubsystem
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActors> @ 148a7c690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActors>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODSourceActors::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionHLODSourceActors__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromCell> @ 148a7c740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromCell>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODSourceActorsFromCell::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionHLODSourceActorsFromCell__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromLevel> @ 148a7c7f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromLevel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionHLODSourceActorsFromLevel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionHLODSourceActorsFromLevel__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataHashSet> @ 148a7c8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataHashSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionRuntimeCellData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellDataHashSet::GetPrivateStaticClass();
  this = (UWorldPartitionRuntimeCellData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionRuntimeCellData *)0x0) {
    UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataHashSet__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHashSet> @ 148a7c950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHashSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionRuntimeHash *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeHashSet::GetPrivateStaticClass();
  this = (UWorldPartitionRuntimeHash *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionRuntimeHash *)0x0) {
    UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.Elements = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x24 = 0x80;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Elements.field_0x2c = 0;
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[0] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[1] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[2] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash.InlineData[3] = '\0';
    this[1].InjectedExternalStreamingObjects.Hash._padding_ = 0;
    *(undefined4 *)&this[1].InjectedExternalStreamingObjects.Hash.SecondaryData = 0;
    *(undefined8 *)&this[1].InjectedExternalStreamingObjects.HashSize = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements = 0xffffffff;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x4 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x10 = 0;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined8 *)&this[2].InjectedExternalStreamingObjects.Elements.field_0x28 = 0;
    this[2].InjectedExternalStreamingObjects.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
    ;
    this[2].InjectedExternalStreamingObjects.HashSize = 0;
    *(undefined4 *)&this[2].InjectedExternalStreamingObjects.field_0x4c = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.Elements = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x18 = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x20 = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x24 = 0x80;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x28 = 0xffffffff;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Elements.field_0x2c = 0;
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[0] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[1] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[2] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash.InlineData[3] = '\0';
    this[3].InjectedExternalStreamingObjects.Hash._padding_ = 0;
    *(undefined4 *)&this[3].InjectedExternalStreamingObjects.Hash.SecondaryData = 0;
    *(undefined8 *)&this[3].InjectedExternalStreamingObjects.HashSize = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionStandaloneHLODSubsystem> @ 148a7cb30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionStandaloneHLODSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionStandaloneHLODSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionStandaloneHLODSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex'::__l5::<lambda_2>_>_> @ 148a7cbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
          (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar11;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar12;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar13;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> **ppTVar14;
  int iVar15;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar16;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar17;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar18;
  float fVar19;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [64];
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_358;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_348;
  TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppTVar14 = &local_348;
    do {
      pTVar18 = ppTVar14[1];
      pTVar12 = *ppTVar14;
      local_358 = ppTVar14[2];
      iVar10 = (int)(((longlong)pTVar18 - (longlong)pTVar12) / 0x30) + 1;
      pTVar11 = pTVar12;
      iVar15 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148a7ccd0:
        if (8 < iVar10) {
          uVar1 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar16 = pTVar18 + 1;
          pTVar12 = pTVar11 + iVar10 / 2;
          uVar2 = *(undefined8 *)pTVar12;
          uVar3 = *(undefined8 *)&pTVar12->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x10;
          uVar5 = *(undefined8 *)&pTVar12->field_0x18;
          uVar6 = *(undefined8 *)&pTVar12->field_0x20;
          uVar7 = *(undefined8 *)&pTVar12->field_0x28;
          *(undefined8 *)pTVar12 = *(undefined8 *)pTVar11;
          *(undefined8 *)&pTVar12->field_0x8 = uVar1;
          uVar1 = *(undefined8 *)&pTVar11->field_0x18;
          *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&pTVar11->field_0x10;
          *(undefined8 *)&pTVar12->field_0x18 = uVar1;
          uVar1 = *(undefined8 *)&pTVar11->field_0x28;
          *(undefined8 *)&pTVar12->field_0x20 = *(undefined8 *)&pTVar11->field_0x20;
          *(undefined8 *)&pTVar12->field_0x28 = uVar1;
          *(undefined8 *)pTVar11 = uVar2;
          *(undefined8 *)&pTVar11->field_0x8 = uVar3;
          *(undefined8 *)&pTVar11->field_0x10 = uVar4;
          *(undefined8 *)&pTVar11->field_0x18 = uVar5;
          *(undefined8 *)&pTVar11->field_0x20 = uVar6;
          *(undefined8 *)&pTVar11->field_0x28 = uVar7;
          pTVar12 = pTVar11;
LAB_148a7cd23:
          pTVar13 = pTVar12;
          pTVar12 = pTVar13 + 1;
          if (pTVar12 <= pTVar18) goto code_r0x000148a7cd2c;
          goto LAB_148a7cd80;
        }
        for (; pTVar16 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar13 = pTVar16, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar18) {
            local_398._0_8_ = *(undefined8 *)pTVar12;
            local_398._8_8_ = *(undefined8 *)&pTVar12->field_0x8;
            local_398._40_8_ = *(undefined8 *)&pTVar12->field_0x28;
            local_398._16_8_ = *(undefined8 *)&pTVar12->field_0x10;
            local_398._24_8_ = *(undefined8 *)&pTVar12->field_0x18;
            local_398._32_8_ = *(undefined8 *)&pTVar12->field_0x20;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_398._40_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_398._40_8_);
            }
            bVar8 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                    ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                              (param_4.Predicate,pTVar13,
                               (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                                *)local_398);
            pTVar16 = pTVar12;
            if (!bVar8) {
              pTVar16 = pTVar13;
            }
          }
          uVar1 = *(undefined8 *)pTVar13;
          uVar2 = *(undefined8 *)&pTVar13->field_0x8;
          uVar3 = *(undefined8 *)&pTVar13->field_0x10;
          uVar4 = *(undefined8 *)&pTVar13->field_0x18;
          uVar5 = *(undefined8 *)&pTVar13->field_0x20;
          uVar6 = *(undefined8 *)&pTVar13->field_0x28;
          uVar7 = *(undefined8 *)&pTVar18->field_0x8;
          *(undefined8 *)pTVar13 = *(undefined8 *)pTVar18;
          *(undefined8 *)&pTVar13->field_0x8 = uVar7;
          uVar7 = *(undefined8 *)&pTVar18->field_0x18;
          *(undefined8 *)&pTVar13->field_0x10 = *(undefined8 *)&pTVar18->field_0x10;
          *(undefined8 *)&pTVar13->field_0x18 = uVar7;
          uVar7 = *(undefined8 *)&pTVar18->field_0x28;
          *(undefined8 *)&pTVar13->field_0x20 = *(undefined8 *)&pTVar18->field_0x20;
          *(undefined8 *)&pTVar13->field_0x28 = uVar7;
          *(undefined8 *)pTVar18 = uVar1;
          *(undefined8 *)&pTVar18->field_0x8 = uVar2;
          *(undefined8 *)&pTVar18->field_0x10 = uVar3;
          *(undefined8 *)&pTVar18->field_0x18 = uVar4;
          *(undefined8 *)&pTVar18->field_0x20 = uVar5;
          *(undefined8 *)&pTVar18->field_0x28 = uVar6;
        }
        goto LAB_148a7cf1a;
      }
LAB_148a7cf01:
      HeapSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
                (pTVar12,iVar10,param_3,param_4);
LAB_148a7cf1a:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_348 <= ppTVar14);
  }
  return;
code_r0x000148a7cd2c:
  local_398._0_8_ = *(undefined8 *)pTVar12;
  local_398._8_8_ = *(undefined8 *)&pTVar13[1].field_0x8;
  local_398._40_8_ = *(undefined8 *)&pTVar13[1].field_0x28;
  local_398._16_8_ = *(undefined8 *)&pTVar13[1].field_0x10;
  local_398._24_8_ = *(undefined8 *)&pTVar13[1].field_0x18;
  local_398._32_8_ = *(undefined8 *)&pTVar13[1].field_0x20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_398._40_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_398._40_8_);
  }
  bVar8 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
          ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                    (param_4.Predicate,pTVar11,
                     (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                     local_398);
  if (!bVar8) goto LAB_148a7cd23;
LAB_148a7cd80:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar11) break;
    local_398._0_8_ = *(undefined8 *)pTVar11;
    local_398._8_8_ = *(undefined8 *)&pTVar11->field_0x8;
    local_398._40_8_ = *(undefined8 *)&pTVar11->field_0x28;
    local_398._16_8_ = *(undefined8 *)&pTVar11->field_0x10;
    local_398._24_8_ = *(undefined8 *)&pTVar11->field_0x18;
    local_398._32_8_ = *(undefined8 *)&pTVar11->field_0x20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_398._40_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_398._40_8_);
    }
    bVar8 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
            ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                      (param_4.Predicate,pTVar16,
                       (TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                       local_398);
  } while (!bVar8);
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x8;
  if (pTVar12 <= pTVar16) {
    uVar2 = *(undefined8 *)pTVar12;
    uVar3 = *(undefined8 *)&pTVar13[1].field_0x8;
    uVar4 = *(undefined8 *)&pTVar13[1].field_0x10;
    uVar5 = *(undefined8 *)&pTVar13[1].field_0x18;
    uVar6 = *(undefined8 *)&pTVar13[1].field_0x20;
    uVar7 = *(undefined8 *)&pTVar13[1].field_0x28;
    *(undefined8 *)pTVar12 = *(undefined8 *)pTVar16;
    *(undefined8 *)&pTVar13[1].field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar17[-1].field_0x18;
    *(undefined8 *)&pTVar13[1].field_0x10 = *(undefined8 *)&pTVar17[-1].field_0x10;
    *(undefined8 *)&pTVar13[1].field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pTVar17[-1].field_0x28;
    *(undefined8 *)&pTVar13[1].field_0x20 = *(undefined8 *)&pTVar17[-1].field_0x20;
    *(undefined8 *)&pTVar13[1].field_0x28 = uVar1;
    *(undefined8 *)pTVar16 = uVar2;
    *(undefined8 *)&pTVar17[-1].field_0x8 = uVar3;
    *(undefined8 *)&pTVar17[-1].field_0x10 = uVar4;
    *(undefined8 *)&pTVar17[-1].field_0x18 = uVar5;
    *(undefined8 *)&pTVar17[-1].field_0x20 = uVar6;
    *(undefined8 *)&pTVar17[-1].field_0x28 = uVar7;
    goto LAB_148a7cd23;
  }
  uVar2 = *(undefined8 *)pTVar11;
  uVar3 = *(undefined8 *)&pTVar11->field_0x8;
  uVar4 = *(undefined8 *)&pTVar11->field_0x10;
  uVar5 = *(undefined8 *)&pTVar11->field_0x18;
  uVar6 = *(undefined8 *)&pTVar11->field_0x20;
  uVar7 = *(undefined8 *)&pTVar11->field_0x28;
  lVar9 = (longlong)pTVar16 + (-0x30 - (longlong)pTVar11);
  iVar15 = iVar15 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  *(undefined8 *)pTVar11 = *(undefined8 *)pTVar16;
  *(undefined8 *)&pTVar11->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x18;
  *(undefined8 *)&pTVar11->field_0x10 = *(undefined8 *)&pTVar17[-1].field_0x10;
  *(undefined8 *)&pTVar11->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x28;
  *(undefined8 *)&pTVar11->field_0x20 = *(undefined8 *)&pTVar17[-1].field_0x20;
  *(undefined8 *)&pTVar11->field_0x28 = uVar1;
  *(undefined8 *)pTVar16 = uVar2;
  *(undefined8 *)&pTVar17[-1].field_0x8 = uVar3;
  *(undefined8 *)&pTVar17[-1].field_0x10 = uVar4;
  *(undefined8 *)&pTVar17[-1].field_0x18 = uVar5;
  *(undefined8 *)&pTVar17[-1].field_0x20 = uVar6;
  *(undefined8 *)&pTVar17[-1].field_0x28 = uVar7;
  if ((lVar9 >> 3) - (lVar9 >> 0x3f) < ((longlong)pTVar18 - (longlong)pTVar12) / 0x30) {
    if (pTVar12 < pTVar18) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar18;
      *(int *)(ppTVar14 + 2) = iVar15;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar16 <= pTVar11 + 1) goto LAB_148a7cf1a;
    pTVar18 = pTVar17 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar16) {
      *ppTVar14 = pTVar11;
      ppTVar14[1] = pTVar17 + -2;
      *(int *)(ppTVar14 + 2) = iVar15;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar18 <= pTVar12) goto LAB_148a7cf1a;
  }
  iVar10 = (int)(((longlong)pTVar18 - (longlong)pTVar12) / 0x30) + 1;
  pTVar11 = pTVar12;
  if (iVar15 == 0) goto LAB_148a7cf01;
  goto LAB_148a7ccd0;
}

// IntroSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex'::__l5::<lambda_2>_>_> @ 148a7d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
          (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_private:_void___cdecl_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex(void)_::_5_::<lambda_2>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar12;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> **ppTVar13;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar14;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar15;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar16;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar17;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *pTVar18;
  float fVar19;
  undefined1 auStack_3c8 [32];
  FIdentityFunctor local_3a8;
  int local_3a4;
  undefined1 local_3a0 [80];
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_350;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_348;
  TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3c8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3a8 = param_3;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppTVar13 = &local_348;
    do {
      pTVar14 = ppTVar13[1];
      pTVar16 = *ppTVar13;
      local_350 = ppTVar13[2];
      iVar11 = (int)((longlong)pTVar14 - (longlong)pTVar16 >> 6) + 1;
      local_3a4 = (int)local_350;
      pTVar15 = pTVar16;
      if ((int)local_350 != 0) {
LAB_148a7d103:
        if (8 < iVar11) {
          uVar1 = *(undefined8 *)&pTVar15->field_0x8;
          pTVar17 = pTVar14 + 1;
          pTVar16 = pTVar15 + iVar11 / 2;
          uVar2 = *(undefined8 *)pTVar16;
          uVar3 = *(undefined8 *)&pTVar16->field_0x8;
          uVar4 = *(undefined8 *)&pTVar16->field_0x10;
          uVar5 = *(undefined8 *)&pTVar16->field_0x18;
          uVar6 = *(undefined8 *)&pTVar16->field_0x20;
          uVar7 = *(undefined8 *)&pTVar16->field_0x28;
          uVar8 = *(undefined8 *)&pTVar16->field_0x30;
          uVar9 = *(undefined8 *)&pTVar16->field_0x38;
          *(undefined8 *)pTVar16 = *(undefined8 *)pTVar15;
          *(undefined8 *)&pTVar16->field_0x8 = uVar1;
          uVar1 = *(undefined8 *)&pTVar15->field_0x18;
          *(undefined8 *)&pTVar16->field_0x10 = *(undefined8 *)&pTVar15->field_0x10;
          *(undefined8 *)&pTVar16->field_0x18 = uVar1;
          uVar1 = *(undefined8 *)&pTVar15->field_0x28;
          *(undefined8 *)&pTVar16->field_0x20 = *(undefined8 *)&pTVar15->field_0x20;
          *(undefined8 *)&pTVar16->field_0x28 = uVar1;
          uVar1 = *(undefined8 *)&pTVar15->field_0x38;
          *(undefined8 *)&pTVar16->field_0x30 = *(undefined8 *)&pTVar15->field_0x30;
          *(undefined8 *)&pTVar16->field_0x38 = uVar1;
          *(undefined8 *)pTVar15 = uVar2;
          *(undefined8 *)&pTVar15->field_0x8 = uVar3;
          *(undefined8 *)&pTVar15->field_0x10 = uVar4;
          *(undefined8 *)&pTVar15->field_0x18 = uVar5;
          *(undefined8 *)&pTVar15->field_0x20 = uVar6;
          *(undefined8 *)&pTVar15->field_0x28 = uVar7;
          *(undefined8 *)&pTVar15->field_0x30 = uVar8;
          *(undefined8 *)&pTVar15->field_0x38 = uVar9;
          pTVar16 = pTVar15;
LAB_148a7d166:
          pTVar12 = pTVar16;
          pTVar16 = pTVar12 + 1;
          if (pTVar16 <= pTVar14) goto code_r0x000148a7d16f;
          goto LAB_148a7d1c4;
        }
        for (; pTVar16 = pTVar15, pTVar17 = pTVar15, pTVar15 < pTVar14; pTVar14 = pTVar14 + -1) {
          while (pTVar12 = pTVar16, pTVar16 = pTVar17 + 1, pTVar16 <= pTVar14) {
            local_3a0._0_8_ = *(undefined8 *)pTVar16;
            local_3a0._8_8_ = *(undefined8 *)&pTVar17[1].field_0x8;
            local_3a0._56_8_ = *(undefined8 *)&pTVar17[1].field_0x38;
            local_3a0._16_8_ = *(undefined8 *)&pTVar17[1].field_0x10;
            local_3a0._24_8_ = *(undefined8 *)&pTVar17[1].field_0x18;
            local_3a0._32_8_ = *(undefined8 *)&pTVar17[1].field_0x20;
            local_3a0._40_8_ = *(undefined8 *)&pTVar17[1].field_0x28;
            local_3a0._48_8_ = *(undefined8 *)&pTVar17[1].field_0x30;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_3a0._56_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_3a0._56_8_);
            }
            bVar10 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
                     ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                               (param_4.Predicate,pTVar12,
                                (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>
                                 *)local_3a0);
            pTVar17 = pTVar16;
            if (!bVar10) {
              pTVar16 = pTVar12;
            }
          }
          uVar1 = *(undefined8 *)pTVar12;
          uVar2 = *(undefined8 *)&pTVar12->field_0x8;
          uVar3 = *(undefined8 *)&pTVar12->field_0x10;
          uVar4 = *(undefined8 *)&pTVar12->field_0x18;
          uVar5 = *(undefined8 *)&pTVar12->field_0x20;
          uVar6 = *(undefined8 *)&pTVar12->field_0x28;
          uVar7 = *(undefined8 *)&pTVar14->field_0x8;
          uVar8 = *(undefined8 *)&pTVar12->field_0x30;
          uVar9 = *(undefined8 *)&pTVar12->field_0x38;
          *(undefined8 *)pTVar12 = *(undefined8 *)pTVar14;
          *(undefined8 *)&pTVar12->field_0x8 = uVar7;
          uVar7 = *(undefined8 *)&pTVar14->field_0x18;
          *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&pTVar14->field_0x10;
          *(undefined8 *)&pTVar12->field_0x18 = uVar7;
          uVar7 = *(undefined8 *)&pTVar14->field_0x28;
          *(undefined8 *)&pTVar12->field_0x20 = *(undefined8 *)&pTVar14->field_0x20;
          *(undefined8 *)&pTVar12->field_0x28 = uVar7;
          uVar7 = *(undefined8 *)&pTVar14->field_0x38;
          *(undefined8 *)&pTVar12->field_0x30 = *(undefined8 *)&pTVar14->field_0x30;
          *(undefined8 *)&pTVar12->field_0x38 = uVar7;
          *(undefined8 *)pTVar14 = uVar1;
          *(undefined8 *)&pTVar14->field_0x8 = uVar2;
          *(undefined8 *)&pTVar14->field_0x10 = uVar3;
          *(undefined8 *)&pTVar14->field_0x18 = uVar4;
          *(undefined8 *)&pTVar14->field_0x20 = uVar5;
          *(undefined8 *)&pTVar14->field_0x28 = uVar6;
          *(undefined8 *)&pTVar14->field_0x30 = uVar8;
          *(undefined8 *)&pTVar14->field_0x38 = uVar9;
          param_3 = local_3a8;
        }
        goto LAB_148a7d355;
      }
LAB_148a7d344:
      HeapSortInternal<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
                (pTVar16,iVar11,param_3,param_4);
LAB_148a7d355:
      ppTVar13 = ppTVar13 + -3;
    } while (&local_348 <= ppTVar13);
  }
  return;
code_r0x000148a7d16f:
  local_3a0._0_8_ = *(undefined8 *)pTVar16;
  local_3a0._8_8_ = *(undefined8 *)&pTVar12[1].field_0x8;
  local_3a0._56_8_ = *(undefined8 *)&pTVar12[1].field_0x38;
  local_3a0._16_8_ = *(undefined8 *)&pTVar12[1].field_0x10;
  local_3a0._24_8_ = *(undefined8 *)&pTVar12[1].field_0x18;
  local_3a0._32_8_ = *(undefined8 *)&pTVar12[1].field_0x20;
  local_3a0._40_8_ = *(undefined8 *)&pTVar12[1].field_0x28;
  local_3a0._48_8_ = *(undefined8 *)&pTVar12[1].field_0x30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_3a0._56_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3a0._56_8_);
  }
  bVar10 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
           ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                     (param_4.Predicate,pTVar15,
                      (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                      local_3a0);
  if (!bVar10) goto LAB_148a7d166;
LAB_148a7d1c4:
  do {
    pTVar18 = pTVar17;
    pTVar17 = pTVar18 + -1;
    if (pTVar17 <= pTVar15) break;
    local_3a0._0_8_ = *(undefined8 *)pTVar15;
    local_3a0._8_8_ = *(undefined8 *)&pTVar15->field_0x8;
    local_3a0._56_8_ = *(undefined8 *)&pTVar15->field_0x38;
    local_3a0._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
    local_3a0._24_8_ = *(undefined8 *)&pTVar15->field_0x18;
    local_3a0._32_8_ = *(undefined8 *)&pTVar15->field_0x20;
    local_3a0._40_8_ = *(undefined8 *)&pTVar15->field_0x28;
    local_3a0._48_8_ = *(undefined8 *)&pTVar15->field_0x30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_3a0._56_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3a0._56_8_);
    }
    bVar10 = `TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
             ::InitSpatialIndex'::__l5::<lambda_2>::operator()
                       (param_4.Predicate,pTVar17,
                        (TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
                        local_3a0);
  } while (!bVar10);
  uVar1 = *(undefined8 *)&pTVar18[-1].field_0x8;
  if (pTVar16 <= pTVar17) {
    uVar2 = *(undefined8 *)pTVar16;
    uVar3 = *(undefined8 *)&pTVar12[1].field_0x8;
    uVar4 = *(undefined8 *)&pTVar12[1].field_0x10;
    uVar5 = *(undefined8 *)&pTVar12[1].field_0x18;
    uVar6 = *(undefined8 *)&pTVar12[1].field_0x20;
    uVar7 = *(undefined8 *)&pTVar12[1].field_0x28;
    uVar8 = *(undefined8 *)&pTVar12[1].field_0x30;
    uVar9 = *(undefined8 *)&pTVar12[1].field_0x38;
    *(undefined8 *)pTVar16 = *(undefined8 *)pTVar17;
    *(undefined8 *)&pTVar12[1].field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar18[-1].field_0x18;
    *(undefined8 *)&pTVar12[1].field_0x10 = *(undefined8 *)&pTVar18[-1].field_0x10;
    *(undefined8 *)&pTVar12[1].field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pTVar18[-1].field_0x28;
    *(undefined8 *)&pTVar12[1].field_0x20 = *(undefined8 *)&pTVar18[-1].field_0x20;
    *(undefined8 *)&pTVar12[1].field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&pTVar18[-1].field_0x38;
    *(undefined8 *)&pTVar12[1].field_0x30 = *(undefined8 *)&pTVar18[-1].field_0x30;
    *(undefined8 *)&pTVar12[1].field_0x38 = uVar1;
    *(undefined8 *)pTVar17 = uVar2;
    *(undefined8 *)&pTVar18[-1].field_0x8 = uVar3;
    *(undefined8 *)&pTVar18[-1].field_0x10 = uVar4;
    *(undefined8 *)&pTVar18[-1].field_0x18 = uVar5;
    *(undefined8 *)&pTVar18[-1].field_0x20 = uVar6;
    *(undefined8 *)&pTVar18[-1].field_0x28 = uVar7;
    *(undefined8 *)&pTVar18[-1].field_0x30 = uVar8;
    *(undefined8 *)&pTVar18[-1].field_0x38 = uVar9;
    goto LAB_148a7d166;
  }
  uVar2 = *(undefined8 *)pTVar15;
  uVar3 = *(undefined8 *)&pTVar15->field_0x8;
  uVar4 = *(undefined8 *)&pTVar15->field_0x10;
  uVar5 = *(undefined8 *)&pTVar15->field_0x18;
  local_3a4 = local_3a4 + -1;
  uVar6 = *(undefined8 *)&pTVar15->field_0x20;
  uVar7 = *(undefined8 *)&pTVar15->field_0x28;
  uVar8 = *(undefined8 *)&pTVar15->field_0x30;
  uVar9 = *(undefined8 *)&pTVar15->field_0x38;
  *(undefined8 *)pTVar15 = *(undefined8 *)pTVar17;
  *(undefined8 *)&pTVar15->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&pTVar18[-1].field_0x18;
  *(undefined8 *)&pTVar15->field_0x10 = *(undefined8 *)&pTVar18[-1].field_0x10;
  *(undefined8 *)&pTVar15->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&pTVar18[-1].field_0x28;
  *(undefined8 *)&pTVar15->field_0x20 = *(undefined8 *)&pTVar18[-1].field_0x20;
  *(undefined8 *)&pTVar15->field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&pTVar18[-1].field_0x38;
  *(undefined8 *)&pTVar15->field_0x30 = *(undefined8 *)&pTVar18[-1].field_0x30;
  *(undefined8 *)&pTVar15->field_0x38 = uVar1;
  *(undefined8 *)pTVar17 = uVar2;
  *(undefined8 *)&pTVar18[-1].field_0x8 = uVar3;
  *(undefined8 *)&pTVar18[-1].field_0x10 = uVar4;
  *(undefined8 *)&pTVar18[-1].field_0x18 = uVar5;
  *(undefined8 *)&pTVar18[-1].field_0x20 = uVar6;
  *(undefined8 *)&pTVar18[-1].field_0x28 = uVar7;
  *(undefined8 *)&pTVar18[-1].field_0x30 = uVar8;
  *(undefined8 *)&pTVar18[-1].field_0x38 = uVar9;
  if ((longlong)((longlong)pTVar17 + (-0x40 - (longlong)pTVar15) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pTVar14 - (longlong)pTVar16 & 0xffffffffffffffc0U)) {
    if (pTVar16 < pTVar14) {
      *ppTVar13 = pTVar16;
      ppTVar13[1] = pTVar14;
      *(int *)(ppTVar13 + 2) = local_3a4;
      ppTVar13 = ppTVar13 + 3;
    }
    if (pTVar17 <= pTVar15 + 1) goto LAB_148a7d355;
    pTVar14 = pTVar18 + -2;
    pTVar16 = pTVar15;
  }
  else {
    if (pTVar15 + 1 < pTVar17) {
      *ppTVar13 = pTVar15;
      ppTVar13[1] = pTVar18 + -2;
      *(int *)(ppTVar13 + 2) = local_3a4;
      ppTVar13 = ppTVar13 + 3;
    }
    if (pTVar14 <= pTVar16) goto LAB_148a7d355;
  }
  iVar11 = (int)((longlong)pTVar14 - (longlong)pTVar16 >> 6) + 1;
  pTVar15 = pTVar16;
  if (local_3a4 == 0) goto LAB_148a7d344;
  goto LAB_148a7d103;
}

// IsObjectPtrEqual<UMapBuildDataRegistry,UMapBuildDataRegistry_*,0> @ 148a7d490

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMapBuildDataRegistry,UMapBuildDataRegistry_*,0>
          (TObjectPtr<UMapBuildDataRegistry> *param_1,UMapBuildDataRegistry **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMapBuildDataRegistry *)0x0) {
    return *param_2 == (UMapBuildDataRegistry *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMapBuildDataRegistry,UObject_*,0> @ 148a7d4b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMapBuildDataRegistry,UObject_*,0>
          (TObjectPtr<UMapBuildDataRegistry> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMapBuildDataRegistry *)0x0) {
    return (UMapBuildDataRegistry *)*param_2 == (UMapBuildDataRegistry *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UMapBuildDataRegistry *)*param_2;
}

// NewObject<UDataLayerManager> @ 148a7d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataLayerManager * __cdecl
NewObject<UDataLayerManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDataLayerManager *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDataLayerManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDataLayerManager *)
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

// NewObject<UExternalDataLayerManager> @ 148a7d5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UExternalDataLayerManager * __cdecl
NewObject<UExternalDataLayerManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UExternalDataLayerManager *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UExternalDataLayerManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UExternalDataLayerManager *)
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

// StaticEnum<enum_EHLODLayerType> @ 148a7df50

UEnum * __cdecl StaticEnum<enum_EHLODLayerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EHLODLayerType,(UObject *)pUVar1,L"EHLODLayerType");
  }
  return Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton;
}

// StaticEnum<enum_ERuntimePartitionCellBoundsMethod> @ 148a7df90

UEnum * __cdecl StaticEnum<enum_ERuntimePartitionCellBoundsMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimePartitionCellBoundsMethod,(UObject *)pUVar1,
                       L"ERuntimePartitionCellBoundsMethod");
  }
  return Z_Registration_Info_UEnum_ERuntimePartitionCellBoundsMethod.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionDataLayersLogicOperator> @ 148a7dfd0

UEnum * __cdecl StaticEnum<enum_EWorldPartitionDataLayersLogicOperator>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionDataLayersLogicOperator,
                       (UObject *)pUVar1,L"EWorldPartitionDataLayersLogicOperator");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionDataLayersLogicOperator.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionServerStreamingMode> @ 148a7e010

UEnum * __cdecl StaticEnum<enum_EWorldPartitionServerStreamingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingMode,(UObject *)pUVar1
                       ,L"EWorldPartitionServerStreamingMode");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingMode.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionServerStreamingOutMode> @ 148a7e050

UEnum * __cdecl StaticEnum<enum_EWorldPartitionServerStreamingOutMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionServerStreamingOutMode,
                       (UObject *)pUVar1,L"EWorldPartitionServerStreamingOutMode");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionServerStreamingOutMode.OuterSingleton;
}

// Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,`FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex'::__l19::<lambda_2>_> @ 148a7e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l19::<lambda_2>_>
          (TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_2> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  UObject *local_f8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_98;
  undefined1 local_90 [56];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_128[0] = 0;
      `TCheckedPointerIterator<UWorldPartitionRuntimeCell_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    if (pFVar11 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar11;
    plVar4 = *(longlong **)&pUVar3[4].field_0x8;
    if (pUVar3[2].field_0xa == '\0') {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f8))(plVar4,local_58);
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f0))(plVar4,local_90);
    }
    local_120 = *puVar9;
    uStack_118 = puVar9[1];
    local_d0 = 1;
    local_98 = puVar9[6];
    local_110 = *(undefined4 *)(puVar9 + 3);
    uStack_10c = *(undefined4 *)((longlong)puVar9 + 0x1c);
    uStack_108 = *(undefined4 *)(puVar9 + 4);
    uStack_104 = *(undefined4 *)((longlong)puVar9 + 0x24);
    local_100 = CONCAT71(uStack_cf,1);
    local_f8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar5 = (param_2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_120) &&
       ((FScriptContainerElement *)&local_120 < pFVar5 + (longlong)param_2->ArrayMax * 0x30)) {
      local_140 = (longlong)param_2->ArrayNum;
      local_138 = 0x30;
      local_158 = &local_120;
      local_150 = pFVar5;
      local_148 = (longlong)param_2->ArrayMax;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    lVar10 = (longlong)iVar8;
    param_2->ArrayNum = iVar8 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x30) = local_120;
    *(undefined8 *)(pFVar5 + lVar10 * 0x30 + 8) = uStack_118;
    *(ulonglong *)(pFVar5 + lVar10 * 0x30 + 0x10) = CONCAT44(uStack_10c,local_110);
    *(ulonglong *)(pFVar5 + lVar10 * 0x30 + 0x10 + 8) = CONCAT44(uStack_104,uStack_108);
    *(undefined8 *)(pFVar5 + lVar10 * 0x30 + 0x20) = local_100;
    *(UObject **)(pFVar5 + lVar10 * 0x30 + 0x28) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,`FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex'::__l23::<lambda_3>_> @ 148a7e2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l23::<lambda_3>_>
          (TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_3> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  UObject *local_f8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_98;
  undefined1 local_90 [56];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_128[0] = 0;
      `TCheckedPointerIterator<UWorldPartitionRuntimeCell_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    if (pFVar11 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar11;
    plVar4 = *(longlong **)&pUVar3[4].field_0x8;
    if (pUVar3[2].field_0xa == '\0') {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f8))(plVar4,local_58);
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f0))(plVar4,local_90);
    }
    local_120 = *puVar9;
    uStack_118 = puVar9[1];
    local_d0 = 1;
    local_98 = puVar9[6];
    local_110 = *(undefined4 *)(puVar9 + 3);
    uStack_10c = *(undefined4 *)((longlong)puVar9 + 0x1c);
    uStack_108 = *(undefined4 *)(puVar9 + 4);
    uStack_104 = *(undefined4 *)((longlong)puVar9 + 0x24);
    local_100 = CONCAT71(uStack_cf,1);
    local_f8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar5 = (param_2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_120) &&
       ((FScriptContainerElement *)&local_120 < pFVar5 + (longlong)param_2->ArrayMax * 0x30)) {
      local_140 = (longlong)param_2->ArrayNum;
      local_138 = 0x30;
      local_158 = &local_120;
      local_150 = pFVar5;
      local_148 = (longlong)param_2->ArrayMax;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    lVar10 = (longlong)iVar8;
    param_2->ArrayNum = iVar8 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + lVar10 * 0x30) = local_120;
    *(undefined8 *)(pFVar5 + lVar10 * 0x30 + 8) = uStack_118;
    *(ulonglong *)(pFVar5 + lVar10 * 0x30 + 0x10) = CONCAT44(uStack_10c,local_110);
    *(ulonglong *)(pFVar5 + lVar10 * 0x30 + 0x10 + 8) = CONCAT44(uStack_104,uStack_108);
    *(undefined8 *)(pFVar5 + lVar10 * 0x30 + 0x20) = local_100;
    *(UObject **)(pFVar5 + lVar10 * 0x30 + 0x28) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,`FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex'::__l18::<lambda_1>_> @ 148a7e4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Algo::
Transform<TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_>,TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>_&,_FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex_::__l18::<lambda_1>_>
          (TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  UObject *local_a0;
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<UWorldPartitionRuntimeCell_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (pFVar11 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar11;
    plVar4 = *(longlong **)&pUVar3[4].field_0x8;
    if (pUVar3[2].field_0xa == '\0') {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f8))(plVar4,local_60);
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x2f0))(plVar4,local_98);
    }
    local_d8 = *puVar9;
    uStack_d0 = puVar9[1];
    local_c8 = puVar9[2];
    uStack_c0 = puVar9[3];
    local_b8 = puVar9[4];
    uStack_b0 = puVar9[5];
    local_a8 = puVar9[6];
    local_a0 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar5 = (param_2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
       ((FScriptContainerElement *)&local_d8 < pFVar5 + (longlong)param_2->ArrayMax * 0x40)) {
      local_100 = (longlong)param_2->ArrayNum;
      local_f8 = 0x40;
      local_118 = &local_d8;
      local_110 = pFVar5;
      local_108 = (longlong)param_2->ArrayMax;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    lVar10 = (longlong)iVar8 * 0x40;
    *(undefined8 *)(pFVar5 + lVar10) = local_d8;
    *(undefined8 *)(pFVar5 + lVar10 + 8) = uStack_d0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x10) = local_c8;
    *(undefined8 *)(pFVar5 + lVar10 + 0x10 + 8) = uStack_c0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x20) = local_b8;
    *(undefined8 *)(pFVar5 + lVar10 + 0x20 + 8) = uStack_b0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x30) = local_a8;
    *(UObject **)(pFVar5 + lVar10 + 0x38) = local_a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// get<1,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_&> @ 148a7e6d0

TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> * __cdecl
get<1,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_&>
          (TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)
         &param_1->field_0x8;
}

// get<1,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_const_&> @ 148a7e6e0

TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> * __cdecl
get<1,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_const_&>
          (TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)
         &param_1->field_0x8;
}

// get<0,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_&> @ 148a7e6f0

FName * __cdecl
get<0,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_&>
          (TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (FName *)param_1;
}

// get<0,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_const_&> @ 148a7e700

FName * __cdecl
get<0,TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_const_&>
          (TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (FName *)param_1;
}

// ~TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0> @ 148a80be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile2D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0> @ 148a80c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile3D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::__l5::<lambda_1>,1,1> @ 148a80c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_MakeHLODRenderResourcesResident_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::`5'::<lambda_1>,1,1>::_vftable_;
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x58));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::__l8::<lambda_1>,0,1> @ 148a80c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::__l8::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible_::__l8::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// operator() @ 148a82b60

void __thiscall
``UWorldPartitionRuntimeHashSet::UnregisterWorldAssetStreaming'::__l5::<lambda_1>::operator()'::__l2
::<lambda_1>::operator()(void *this,UObject *param_1)

{
  FName FVar1;
  code *pcVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FString *pFVar4;
  wchar_t *pwVar5;
  EUniqueObjectNameOptions local_res10 [2];
  FName local_res18 [2];
  undefined4 uVar6;
  FString local_18;
  
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
  FVar1.Number = *(uint *)&param_1->field_0x14;
  local_res10[0] = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar3.Value);
  local_res10[1] = 0;
  uVar6 = 0;
  MakeUniqueObjectName((UObject *)local_res18,*(UClass **)&param_1->field_0x20,FVar1,local_res10[0])
  ;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x170);
  pFVar4 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(param_1,pwVar5,0,0x34,uVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148a82c00

void __thiscall
``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2
::<lambda_1>::operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  UWorldPartitionRuntimeCellData *pUVar1;
  code *pcVar2;
  bool bVar3;
  EDataLayerRuntimeState EVar4;
  undefined1 local_res8 [8];
  UWorldPartitionRuntimeCell *local_res10;
  
  bVar3 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                    (*(UWorldPartitionRuntimeHash **)this,param_1->bClientOnlyVisible);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCellRelevantFor(Cell->GetClientOnlyVisible())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                       ,0x2c7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar4 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                    (param_1,*(FWorldPartitionStreamingContext **)((longlong)this + 0x18));
  if (EVar4 != Unloaded) {
    pUVar1 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2c8))
              (pUVar1,*(undefined8 *)((longlong)this + 8),*(undefined8 *)((longlong)this + 0x10),
               *(undefined8 *)((longlong)this + 0x18),param_1->bBlockOnSlowLoading);
    if ((EVar4 == Loaded) || (*(char *)(*(longlong *)((longlong)this + 8) + 0x38) == '\0')) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = 1;
    }
    local_res10 = param_1;
    (*(code *)**(undefined8 **)((longlong)this + 0x20))
              ((*(undefined8 **)((longlong)this + 0x20))[1],&local_res10,local_res8);
  }
  return;
}

// operator() @ 148a847d0

void __thiscall
``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::
operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'
::__l5::<lambda_1>::operator()(void *this,FSphericalSector *param_1)

{
  TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this_00;
  FNode *pFVar1;
  uint uVar2;
  uint uVar3;
  TVector2<double>_u_0 local_c8;
  FSphericalSector *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *local_a0;
  TVector2<double>_u_0 *local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  FSphericalSector *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_60;
  undefined1 *local_58;
  FCone local_48;
  
  local_88 = *(undefined8 *)((longlong)this + 8);
  uStack_80 = *(undefined8 *)((longlong)this + 0x10);
  uStack_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_48.Angle = param_1->Angle;
  local_c8._s_0.X = (double)*(undefined8 *)this;
  this_00 = (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
            ((longlong)local_c8._s_0.X + 0x18);
  uVar2 = SUB84(local_48.Angle - __real_4076800000000000,0) &
          (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)(local_48.Angle - __real_4076800000000000) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_90[0] = 1;
  local_b8 = param_1;
  local_78 = param_1;
  uStack_70 = uStack_b0;
  local_68 = local_a8;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar3,uVar2) == __real_3e45798ee2308c3a) {
    local_c8._s_0.Y = (param_1->Center).field0_0x0._s_0.Y;
    local_58 = local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
               ::Call;
    local_98 = (TVector2<double>_u_0 *)&local_60;
    pFVar1 = (FNode *)((longlong)local_c8._s_0.X + 0x20);
    local_60 = local_c8._s_0.X;
    local_c8._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
    ForEachIntersectingElementRecursive
              (this_00,pFVar1,(TVector2<double> *)&local_c8._s_0,param_1->Radius * param_1->Radius,
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_a0);
    return;
  }
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.X;
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Y;
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Z;
  local_48._padding_ = (longlong)param_1->Radius;
  local_48.Axis.field0_0x0._s_0.Z = (param_1->Axis).field0_0x0._s_0.Z;
  local_c8._s_0.Y = (double)local_90;
  local_48.Axis.field0_0x0._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
  local_48.Axis.field0_0x0._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
  local_98 = &local_c8;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
             ::Call;
  FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
  ForEachIntersectingElement
            (this_00,&local_48,(TFunctionRef<bool___cdecl(unsigned_int)> *)&local_a0);
  return;
}

// operator() @ 148a84930

void __thiscall
``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::
operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'
::__l5::<lambda_1>::operator()(void *this,FSphericalSector *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  TVector<double>_u_0 local_c8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  double local_78;
  double dStack_70;
  FSphericalSector *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  FCone local_48;
  
  local_c8._s_0.X = *(double *)((longlong)this + 8);
  local_c8._s_0.Y = *(double *)((longlong)this + 0x10);
  uStack_b0 = *(undefined8 *)((longlong)this + 0x18);
  local_a8 = *(undefined8 *)((longlong)this + 0x20);
  local_48.Angle = param_1->Angle;
  lVar1 = *(longlong *)this;
  uVar2 = SUB84(local_48.Angle - __real_4076800000000000,0) &
          (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)(local_48.Angle - __real_4076800000000000) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_80[0] = 1;
  local_78 = local_c8._s_0.X;
  dStack_70 = local_c8._s_0.Y;
  local_68 = param_1;
  uStack_60 = uStack_b0;
  local_58 = local_a8;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar3,uVar2) == __real_3e45798ee2308c3a) {
    local_a0._8_8_ = local_80;
    local_90._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
         ::Call;
    local_90._8_8_ = local_a0;
    local_c8._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    local_c8._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    local_c8._s_0.Y = (param_1->Center).field0_0x0._s_0.Y;
    local_a0._0_8_ = lVar1;
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
    ForEachIntersectingElementRecursive
              ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)(lVar1 + 0x18),
               (FNode *)(lVar1 + 0x20),(TVector<double> *)&local_c8._s_0,
               param_1->Radius * param_1->Radius,
               (TFunctionRef<bool___cdecl(unsigned_int)> *)local_90);
    return;
  }
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.X;
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Y;
  local_90._8_8_ = local_80;
  local_48._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Z;
  local_48._padding_ = (longlong)param_1->Radius;
  local_a0._8_8_ = local_90;
  local_48.Axis.field0_0x0._s_0.Z = (param_1->Axis).field0_0x0._s_0.Z;
  local_48.Axis.field0_0x0._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
  local_48.Axis.field0_0x0._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
  local_a0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
       ::Call;
  local_c8._s_0.Z = (double)param_1;
  local_90._0_8_ = lVar1;
  FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
  ForEachIntersectingElement
            ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)(lVar1 + 0x18),
             &local_48,(TFunctionRef<bool___cdecl(unsigned_int)> *)local_a0);
  return;
}

// operator() @ 148a84b30

void __thiscall
`MakeHLODRenderResourcesResident'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  IRendererModule *pIVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  undefined4 uStack_124;
  undefined4 uStack_e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  undefined4 local_54;
  
  iVar14 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  local_158 = 1;
  iVar17 = 0;
  iVar19 = 0;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar14 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    iVar19 = 0;
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        iVar20 = *(int *)((longlong)this + 0x28);
        uVar9 = 1;
        iVar10 = iVar14;
        goto LAB_148a84be5;
      }
      uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    iVar20 = *(int *)((longlong)this + 0x28);
    uVar9 = -uVar9 & uVar9;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (int)lVar13 + -1 + iVar19;
    if (iVar20 < iVar10) {
      iVar10 = iVar14;
    }
  }
LAB_148a84be5:
  uVar16 = *(uint *)((longlong)this + 0x28);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uVar9,iVar17);
  TStack_d8.CurrentBitIndex = iVar10;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_d8._28_4_ = local_54;
  TStack_d8.BaseBitIndex = iVar19;
  uStack_b8 = CONCAT44(uStack_124,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34));
  TStack_d8.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar20 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)((longlong)this + 0x28);
  if (uVar16 != uVar9) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a84d00;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_148a84d00:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_b8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar13 = (longlong)TStack_d8.CurrentBitIndex;
    if ((TStack_d8.CurrentBitIndex == uVar16) && (TStack_d8.Array == pTVar1)) break;
    lVar5 = *(longlong *)this;
    uVar11 = (**(code **)(**(longlong **)(lVar5 + lVar13 * 0x18) + 0x310))();
    pIVar12 = GetRendererModule();
    local_80 = (double)*(float *)(lVar5 + 8 + lVar13 * 0x18);
    dStack_78 = local_80;
    (**(code **)((longlong)*pIVar12 + 0x1a0))
              (pIVar12,uVar11,&local_80,*(undefined4 *)((longlong)this + 0xa0));
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  iVar14 = *(int *)((longlong)this + 0x78);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x60);
  plVar2 = (longlong *)((longlong)this + 0x50);
  iVar20 = 0;
  iVar17 = 0;
  iVar19 = 0;
  if (iVar14 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar20;
      iVar17 = iVar17 + 0x20;
      iVar20 = iVar20 + 1;
      iVar19 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_148a84e23;
      uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    local_158 = -uVar9 & uVar9;
    uVar4 = (ulonglong)local_158 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar19 = iVar17 + -1 + (int)lVar13;
    if (iVar14 < iVar19) {
      iVar19 = iVar14;
    }
  }
LAB_148a84e23:
  uVar9 = *(uint *)((longlong)this + 0x78);
  uVar16 = uVar9 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(local_158,iVar20);
  TStack_a8.CurrentBitIndex = iVar19;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar9 >> 5;
  TStack_a8._28_4_ = iVar10;
  TStack_a8.BaseBitIndex = iVar17;
  uStack_88 = CONCAT44(uStack_e4,*(int *)((longlong)this + 0x58) - *(int *)((longlong)this + 0x84));
  local_b0 = plVar2;
  TStack_a8.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar14 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = *(uint *)((longlong)this + 0x78);
  if (uVar9 != uVar15) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x70);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x70) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar20;
      uVar16 = uVar16 + 0x20;
      iVar20 = iVar20 + 1;
      uVar9 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_148a84f50;
      uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar9 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar15 < (int)uVar9) {
      uVar9 = uVar15;
    }
  }
LAB_148a84f50:
  while( true ) {
    plVar7 = local_b0;
    if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_a8.CurrentBitIndex == uVar9) && (TStack_a8.Array == pTVar1)) && (plVar7 == plVar2))
    break;
    puVar3 = (undefined8 *)(*plVar7 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
    uVar11 = *puVar3;
    uVar4 = puVar3[1];
    pIVar12 = GetRendererModule();
    (**(code **)((longlong)*pIVar12 + 0x200))(pIVar12,uVar11,uVar4 & 0xffffffff);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  return;
}

// operator() @ 148a852a0

void __thiscall
``UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>::
operator()(void *this,FSphericalSector *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_fc;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  FCone local_a8;
  TVector<double>_u_0 local_68;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_40 = *(longlong *)this;
  local_30 = *(longlong *)((longlong)this + 0x18);
  dStack_18 = *(double *)((longlong)this + 0x30);
  local_10 = *(double *)((longlong)this + 0x38);
  local_a8.Angle = param_1->Angle;
  dStack_28 = *(double *)((longlong)this + 0x20);
  uVar1 = SUB84(local_a8.Angle - __real_4076800000000000,0) &
          (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)(local_a8.Angle - __real_4076800000000000) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_20 = *(double *)((longlong)this + 0x28);
  if ((double)CONCAT44(uVar2,uVar1) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar2,uVar1) == __real_3e45798ee2308c3a) {
    local_d0._8_8_ = &local_a8;
    local_d0._0_8_ = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x30);
    local_a8._padding_ = CONCAT44(uStack_fc,*(undefined4 *)((longlong)this + 0x10));
    local_c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
         ::Call;
    local_c0._8_8_ = local_d0;
    local_a8._padding_ = CONCAT71(local_a8._padding_._1_7_,1);
    local_68._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    local_68._s_0.Y = (param_1->Center).field0_0x0._s_0.Y;
    local_68._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    local_a8._padding_ = local_40;
    local_a8._padding_ = local_30;
    local_a8.Axis.field0_0x0._s_0.X = dStack_28;
    local_a8.Axis.field0_0x0._s_0.Y = local_20;
    local_a8.Axis.field0_0x0._s_0.Z = dStack_18;
    local_a8.Angle = local_10;
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
    ForEachIntersectingElementRecursive
              ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)
               (local_d0._0_8_ + 0x18),(FNode *)(local_d0._0_8_ + 0x20),
               (TVector<double> *)&local_68._s_0,param_1->Radius * param_1->Radius,
               (TFunctionRef<bool___cdecl(unsigned_int)> *)local_c0);
    return;
  }
  local_a8._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.X;
  local_a8._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Y;
  local_c0._0_8_ = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x30);
  local_c0._8_8_ = local_48;
  local_a8._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Z;
  local_a8._padding_ = (longlong)param_1->Radius;
  local_d0._8_8_ = local_c0;
  local_a8.Axis.field0_0x0._s_0.Z = (param_1->Axis).field0_0x0._s_0.Z;
  local_a8.Axis.field0_0x0._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
  local_a8.Axis.field0_0x0._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
  uStack_38 = CONCAT44(uStack_fc,*(undefined4 *)((longlong)this + 0x10));
  local_48[0] = 1;
  local_d0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
       ::Call;
  FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
  ForEachIntersectingElement
            ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)
             (local_c0._0_8_ + 0x18),&local_a8,(TFunctionRef<bool___cdecl(unsigned_int)> *)local_d0)
  ;
  return;
}

// operator() @ 148a86750

void __thiscall
``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::
operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldPartitionRuntimeCell *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar4 = IsDebugCellShown(param_1);
  if (bVar4) {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UWorldPartitionRuntimeCell **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// operator() @ 148a88850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l54::<lambda_3>::
operator()(void *this,FSphericalSector *param_1)

{
  int *piVar1;
  FWorldPartitionCanvasItems *pFVar2;
  float fVar3;
  double dVar4;
  byte *pbVar5;
  FWorldPartitionDraw2DContext *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  TVector<double> *pTVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  double local_2f8;
  double dStack_2f0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_2e8;
  float local_2d8;
  TVector<double>_u_0 local_2d0;
  FLinearColor_u_0 local_2b8;
  FLinearColor_u_0 local_2a8;
  FLinearColor_u_0 local_298;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  TRotator<double> local_238;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  TVector<double>_u_0 local_1c0;
  TRotator<double> local_1a8;
  TVector2<double> local_190;
  TVector2<double> local_180;
  TVector2<double> local_170;
  TVector2<double> local_160;
  undefined1 local_150 [16];
  TVector2<double> local_140;
  TVector2<double> local_130;
  TVector2<double> local_120;
  TVector2<double> local_110;
  TVector<double> local_100 [8];
  
  bVar11 = FSphericalSector::IsNearlyZero(param_1);
  if ((bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Shape.IsNearlyZero()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSetDebugDraw.cpp"
                          ,0xf0,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar17 = param_1->Angle;
  local_2f8 = (param_1->Center).field0_0x0._s_0.X;
  dStack_2f0 = (param_1->Center).field0_0x0._s_0.Y;
  local_150 = *(undefined1 (*) [16])&(param_1->Axis).field0_0x0;
  uVar29 = local_150._0_4_;
  uVar30 = local_150._4_4_;
  uVar31 = local_150._8_4_;
  uVar32 = local_150._12_4_;
  dVar4 = param_1->Radius;
  local_1a8.Pitch = 0.0;
  local_1a8.Yaw = dVar17 * __real_bfe0000000000000;
  local_1a8.Roll = 0.0;
  lVar15 = -((longlong)ROUND(__real_bfe0000000000000 - dVar17 * ___real_3fd6c16c16c16c17) >> 1);
  iVar14 = (int)lVar15;
  if (lVar15 < 4) {
    iVar14 = 4;
  }
  local_238.Roll = (param_1->Axis).field0_0x0._s_0.Z;
  local_1c0._s_0.X = local_150._0_8_ * dVar4;
  local_1c0._s_0.Y = local_150._8_8_ * dVar4;
  local_1c0._s_0.Z = dVar4 * (param_1->Axis).field0_0x0._s_0.Z;
  fVar26 = (float)(dVar17 / (double)iVar14);
  local_2d8 = fVar26;
  UE::Math::TRotator<double>::RotateVector
            (&local_1a8,(TVector<double> *)&local_2d0._s_0,(TVector<double> *)&local_1c0._s_0);
  fVar28 = __real_40000000;
  fVar9 = __real_3b808081;
  dVar17 = param_1->Angle - __real_4076800000000000;
  uVar18 = SUB84(local_2d0._s_0.X,0);
  uVar19 = (undefined4)((ulonglong)local_2d0._0_8_ >> 0x20);
  uVar20 = SUB84(local_2d0._s_0.Y,0);
  uVar21 = (undefined4)((ulonglong)local_2d0._8_8_ >> 0x20);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pbVar5 = *(byte **)this;
    local_220 = local_2d0._s_0.X + local_2f8;
    local_218 = local_2d0._s_0.Y + dStack_2f0;
    pFVar6 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x18);
    local_res8[0] = 1;
    local_2b8._s_0.R = FLinearColor::sRGBToLinearTable[pbVar5[2]];
    local_2b8._s_0.G = FLinearColor::sRGBToLinearTable[pbVar5[1]];
    local_2b8._s_0.B = FLinearColor::sRGBToLinearTable[*pbVar5];
    local_2b8._s_0.A = (float)pbVar5[3] * __real_3b808081;
    (**(code **)**(longlong **)((longlong)this + 8))
              (&local_190,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_220,
               local_res8);
    local_res10[0] = 1;
    (**(code **)**(longlong **)((longlong)this + 8))
              (&local_180,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_2f8,
               local_res10);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (pFVar6,*(TBox2<double> **)((longlong)this + 0x10),&local_180,&local_190,
               (FLinearColor *)&local_2b8._s_0,fVar28);
  }
  iVar16 = 1;
  uVar22 = uVar18;
  uVar23 = uVar19;
  uVar24 = uVar20;
  uVar25 = uVar21;
  if (0 < iVar14) {
    do {
      local_238.Pitch = 0.0;
      local_238.Roll = 0.0;
      local_238.Yaw = (double)((float)iVar16 * fVar26);
      pTVar13 = UE::Math::TRotator<double>::RotateVector
                          (&local_238,local_100,(TVector<double> *)&local_2d0._s_0);
      pbVar5 = *(byte **)this;
      local_210 = *(double *)&pTVar13->field0_0x0;
      uVar22 = SUB84(local_210,0);
      uVar23 = (undefined4)((ulonglong)local_210 >> 0x20);
      local_208 = *(double *)((longlong)&pTVar13->field0_0x0 + 8);
      uVar24 = SUB84(local_208,0);
      uVar25 = (undefined4)((ulonglong)local_208 >> 0x20);
      local_210 = local_2f8 + local_210;
      local_208 = dStack_2f0 + local_208;
      pFVar6 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x18);
      local_res18[0] = 1;
      fVar28 = FLinearColor::sRGBToLinearTable[pbVar5[2]];
      fVar26 = FLinearColor::sRGBToLinearTable[pbVar5[1]];
      fVar3 = FLinearColor::sRGBToLinearTable[*pbVar5];
      fVar27 = (float)pbVar5[3] * fVar9;
      (**(code **)**(longlong **)((longlong)this + 8))
                (&local_170,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_210,
                 local_res18);
      local_200 = (double)CONCAT44(uVar19,uVar18) + local_2f8;
      local_1f8 = (double)CONCAT44(uVar21,uVar20) + dStack_2f0;
      local_res20[0] = 1;
      (**(code **)**(longlong **)((longlong)this + 8))
                (&local_160,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_200,
                 local_res20);
      local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e8.ArrayNum = 0;
      local_2e8.ArrayMax = 0;
      bVar11 = FWorldPartitionDraw2DContext::BoxSegmentIntersect
                         (pFVar6,*(TBox2<double> **)((longlong)this + 0x10),&local_160,&local_170,
                          &local_2e8);
      if (bVar11) {
        if (local_2e8.ArrayNum < 2) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar10.Data = local_2e8.AllocatorInstance.Data;
        if ((local_2e8.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_278 = *(undefined8 *)local_2e8.AllocatorInstance.Data;
        uStack_270 = *(undefined8 *)(local_2e8.AllocatorInstance.Data + 8);
        local_268 = 0;
        uStack_260 = *(undefined8 *)(FVar10.Data + 0x10);
        local_258 = *(undefined8 *)(FVar10.Data + 0x18);
        pFVar2 = &pFVar6->CanvasItems;
        local_248 = 0x40000000;
        uStack_250 = 0;
        pFVar7 = (pFVar2->Lines).AllocatorInstance.Data;
        local_288 = fVar28;
        fStack_284 = fVar26;
        fStack_280 = fVar3;
        fStack_27c = fVar27;
        if (((pFVar7 <= (FScriptContainerElement *)&local_288) &&
            ((FScriptContainerElement *)&local_288 <
             pFVar7 + (longlong)(pFVar6->CanvasItems).Lines.ArrayMax * 0x48)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (pFVar6->CanvasItems).Lines.ArrayNum;
        piVar1 = &(pFVar6->CanvasItems).Lines.ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)pFVar2,piVar1);
        }
        (pFVar6->CanvasItems).Lines.ArrayNum = iVar12 + 1;
        lVar15 = (longlong)iVar12;
        pFVar7 = (pFVar2->Lines).AllocatorInstance.Data;
        *(ulonglong *)(pFVar7 + lVar15 * 0x48) = CONCAT44(fStack_284,local_288);
        *(ulonglong *)(pFVar7 + lVar15 * 0x48 + 8) = CONCAT44(fStack_27c,fStack_280);
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x10) = local_278;
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x10 + 8) = uStack_270;
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x20) = local_268;
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x20 + 8) = uStack_260;
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x30) = local_258;
        *(undefined8 *)(pFVar7 + lVar15 * 0x48 + 0x30 + 8) = uStack_250;
        *(ulonglong *)(pFVar7 + lVar15 * 0x48 + 0x40) = CONCAT44(uStack_244,local_248);
        if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.AllocatorInstance.Data);
        }
      }
      else if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.AllocatorInstance.Data);
      }
      iVar16 = iVar16 + 1;
      uVar18 = uVar22;
      uVar19 = uVar23;
      uVar20 = uVar24;
      uVar21 = uVar25;
      fVar26 = local_2d8;
    } while (iVar16 <= iVar14);
    fVar28 = __real_40000000;
    uVar29 = local_150._0_4_;
    uVar30 = local_150._4_4_;
    uVar31 = local_150._8_4_;
    uVar32 = local_150._12_4_;
  }
  pbVar5 = *(byte **)this;
  pFVar6 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x18);
  local_2a8._s_0.R = FLinearColor::sRGBToLinearTable[pbVar5[2]];
  local_2a8._s_0.G = FLinearColor::sRGBToLinearTable[pbVar5[1]];
  local_2a8._s_0.B = FLinearColor::sRGBToLinearTable[*pbVar5];
  dVar17 = param_1->Angle - __real_4076800000000000;
  local_2a8._s_0.A = (float)pbVar5[3] * fVar9;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_2d0._s_0.X = (double)UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    local_2d0._s_0.Y = (double)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  local_1f0 = local_2d0._s_0.X + local_2f8;
  local_1e8 = dStack_2f0 + local_2d0._s_0.Y;
  local_318[0] = 1;
  (**(code **)**(longlong **)((longlong)this + 8))
            (&local_140,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_1f0,local_318)
  ;
  local_1e0 = (double)CONCAT44(uVar23,uVar22) + local_2f8;
  local_1d8 = (double)CONCAT44(uVar25,uVar24) + dStack_2f0;
  local_310[0] = 1;
  (**(code **)**(longlong **)((longlong)this + 8))
            (&local_130,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_1e0,local_310)
  ;
  FWorldPartitionDraw2DContext::PushDrawSegment
            (pFVar6,*(TBox2<double> **)((longlong)this + 0x10),&local_130,&local_140,
             (FLinearColor *)&local_2a8._s_0,fVar28);
  pbVar5 = *(byte **)this;
  pFVar6 = *(FWorldPartitionDraw2DContext **)((longlong)this + 0x18);
  local_308[0] = 1;
  local_298._s_0.R = FLinearColor::sRGBToLinearTable[pbVar5[2]];
  local_298._s_0.G = FLinearColor::sRGBToLinearTable[pbVar5[1]];
  local_298._s_0.B = FLinearColor::sRGBToLinearTable[*pbVar5];
  local_1d0 = (double)CONCAT44(uVar30,uVar29) * param_1->Radius + local_2f8;
  local_1c8 = (double)CONCAT44(uVar32,uVar31) * param_1->Radius + dStack_2f0;
  local_298._s_0.A = (float)pbVar5[3] * fVar9;
  (**(code **)**(longlong **)((longlong)this + 8))
            (&local_120,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_1d0,local_308)
  ;
  local_300[0] = 1;
  (**(code **)**(longlong **)((longlong)this + 8))
            (&local_110,((undefined8 *)**(longlong **)((longlong)this + 8))[1],&local_2f8,local_300)
  ;
  FWorldPartitionDraw2DContext::PushDrawSegment
            (pFVar6,*(TBox2<double> **)((longlong)this + 0x10),&local_110,&local_120,
             (FLinearColor *)&local_298._s_0,__real_40800000);
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 148a89554

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AWorldPartitionHLODOnlyLevelInstance::`vector
   deleting destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AWorldPartitionHLODOnlyLevelInstance::_vector_deleting_destructor__adjustor_704__
          (AWorldPartitionHLODOnlyLevelInstance *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AWorldPartitionHLODOnlyLevelInstance *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 148a89568

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AWorldPartitionStandaloneHLOD::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AWorldPartitionStandaloneHLOD::_vector_deleting_destructor__adjustor_704__
          (AWorldPartitionStandaloneHLOD *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AWorldPartitionStandaloneHLOD *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 148a8957c

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedSkinnedMeshComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedSkinnedMeshComponent *)&this[-1].field_0x880,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 148a89590

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedSkinnedMeshComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedSkinnedMeshComponent *)&this[-1].field_0x878,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 148a895a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedSkinnedMeshComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedSkinnedMeshComponent *)&this[-1].field_0x870,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148a895b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedSkinnedMeshComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedSkinnedMeshComponent *)&this[-1].field_0xaa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 148a895c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedSkinnedMeshComponent::`vector
   deleting destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_vector_deleting_destructor__adjustor_1424__
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedSkinnedMeshComponent *)&this[-1].field_0x540,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 148a895dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedStaticMeshComponent *)&this[-1].field_0x7b0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 148a895f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedStaticMeshComponent *)&this[-1].field_0x7a8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 148a89604

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedStaticMeshComponent *)&this[-1].field_0x7a0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148a89618

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedStaticMeshComponent *)&this[-1].field_0x9d8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 148a89628

/* [thunk]:public: virtual void * __ptr64 __cdecl UHLODInstancedStaticMeshComponent::`vector
   deleting destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UHLODInstancedStaticMeshComponent::_vector_deleting_destructor__adjustor_1616__
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UHLODInstancedStaticMeshComponent *)&this[-1].field_0x3b0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148a8963c

/* [thunk]:public: virtual void * __ptr64 __cdecl URuntimeHashSetExternalStreamingObject::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URuntimeHashSetExternalStreamingObject::_vector_deleting_destructor__adjustor_40__
          (URuntimeHashSetExternalStreamingObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeHashSetExternalStreamingObject *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148a8964c

/* [thunk]:public: virtual void * __ptr64 __cdecl URuntimeHashSetExternalStreamingObject::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
URuntimeHashSetExternalStreamingObject::_vector_deleting_destructor__adjustor_48__
          (URuntimeHashSetExternalStreamingObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeHashSetExternalStreamingObject *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148a89660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartition,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89690

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartition,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartition,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a896c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionHLODRuntimeSubsystem,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartitionHLODRuntimeSubsystem,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a896f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionHLODRuntimeSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy,ULevel_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartitionHLODRuntimeSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy,ULevel_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89720

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,ULevel_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,ULevel_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile2D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile3D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a897d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::`5'::<lambda_1>,1,1>::_vftable_;
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x58));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::__l8::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::`8'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a898b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHLODResourcesResidencySceneViewExtension,SharedPointerInternals::DefaultDeleter<FHLODResourcesResidencySceneViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHLODResourcesResidencySceneViewExtension,SharedPointerInternals::DefaultDeleter<FHLODResourcesResidencySceneViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a898f0

void * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::_scalar_deleting_destructor_
          (TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::
  TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
  ::Destruct((ulonglong)(this->SpatialIndex).RootNode.Content.TypeIndex,
             &(this->SpatialIndex).RootNode.Content);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)
       &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile2D_FStaticSpatialIndex____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89950

void * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::_scalar_deleting_destructor_
          (TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::
  TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
  ::Destruct((ulonglong)(this->SpatialIndex).RootNode.Content.TypeIndex,
             &(this->SpatialIndex).RootNode.Content);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)
       &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile3D_FStaticSpatialIndex____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a899b0

void * __thiscall
TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile2D>::
_scalar_deleting_destructor_
          (TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile2D> *this,
          uint param_1)

{
  *this = (TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile2D>)
          &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile2D_FStaticSpatialIndex____6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a899f0

void * __thiscall
TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile3D>::
_scalar_deleting_destructor_
          (TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile3D> *this,
          uint param_1)

{
  *this = (TStaticSpatialIndexDataInterface<FStaticSpatialIndex::FSpatialIndexProfile3D>)
          &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile3D_FStaticSpatialIndex____6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89a30

void * __thiscall
TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
::_scalar_deleting_destructor_
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
           *this,uint param_1)

{
  UE::Core::Private::
  TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
  ::Destruct((ulonglong)(byte)this->field_0x50,&this->field_0x40);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this =
       &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile2D_FStaticSpatialIndex____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89a90

void * __thiscall
TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
::_scalar_deleting_destructor_
          (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
           *this,uint param_1)

{
  UE::Core::Private::
  TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
  ::Destruct((ulonglong)(byte)this->field_0x60,&this->field_0x50);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this =
       &___7__TStaticSpatialIndexDataInterface_UFSpatialIndexProfile3D_FStaticSpatialIndex____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89af0

void * __thiscall
TVersionedReader<FBulkDataReader>::_scalar_deleting_destructor_
          (TVersionedReader<FBulkDataReader> *this,uint param_1)

{
  ~TVersionedReader<FBulkDataReader>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89b30

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
AMapBuildDataActor::_scalar_deleting_destructor_(AMapBuildDataActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89b90

void * __thiscall
ANavigationDataChunkActor::_scalar_deleting_destructor_
          (ANavigationDataChunkActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANavigationDataChunkActor__6B_;
  pFVar1 = (this->NavDataChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APartitionActor::~APartitionActor((APartitionActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89c10

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
AWorldPartitionHLODOnlyLevelInstance::_scalar_deleting_destructor_
          (AWorldPartitionHLODOnlyLevelInstance *this,uint param_1)

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
  pvVar2 = *(void **)&(this->WorldAsset).SoftObjectPtr.field_0x18;
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
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89cc0

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
AWorldPartitionStandaloneHLOD::_scalar_deleting_destructor_
          (AWorldPartitionStandaloneHLOD *this,uint param_1)

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
  pvVar2 = *(void **)&(this->WorldAsset).SoftObjectPtr.field_0x18;
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
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89d70

void * __thiscall
FHLODResourcesResidencySceneViewExtension::_scalar_deleting_destructor_
          (FHLODResourcesResidencySceneViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89db0

void * __thiscall UHLODBuilder::_scalar_deleting_destructor_(UHLODBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UHLODBuilder__6B_;
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

// `scalar_deleting_destructor' @ 148a89e10

void * __thiscall
UHLODBuilderSettings::_scalar_deleting_destructor_(UHLODBuilderSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UHLODBuilderSettings__6B_;
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

// `scalar_deleting_destructor' @ 148a89e70

void * __thiscall
UHLODInstancedSkinnedMeshComponent::_scalar_deleting_destructor_
          (UHLODInstancedSkinnedMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__IClothSimulationDataProvider__;
  UInstancedSkinnedMeshComponent::~UInstancedSkinnedMeshComponent
            ((UInstancedSkinnedMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xad0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UHLODInstancedStaticMeshComponent::_scalar_deleting_destructor_
          (UHLODInstancedStaticMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHLODInstancedStaticMeshComponent__6B_;
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a89fe0

void * __thiscall UHLODLayer::_scalar_deleting_destructor_(UHLODLayer *this,uint param_1)

{
  *(undefined ***)this = &___7UHLODLayer__6B_;
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

// `scalar_deleting_destructor' @ 148a8a040

void * __thiscall
ULevelInstanceContainerInstance::_scalar_deleting_destructor_
          (ULevelInstanceContainerInstance *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelInstanceContainerInstance__6B_;
  UActorDescContainerInstance::~UActorDescContainerInstance((UActorDescContainerInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a0a0

void * __thiscall
ULevelInstancePropertyOverrideContainer::_scalar_deleting_destructor_
          (ULevelInstancePropertyOverrideContainer *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelInstancePropertyOverrideContainer__6B_;
  UActorDescContainer::~UActorDescContainer((UActorDescContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UMaterialParameterCollectionHLODModifier::_scalar_deleting_destructor_
          (UMaterialParameterCollectionHLODModifier *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionHLODModifier__6B_;
  pFVar1 = (this->CachedScalarParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionHLODModifier__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a190

void * __thiscall
UNullHLODBuilder::_scalar_deleting_destructor_(UNullHLODBuilder *this,uint param_1)

{
  *(undefined ***)this = &___7UHLODBuilder__6B_;
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

// `scalar_deleting_destructor' @ 148a8a1f0

void * __thiscall
URuntimeHashSetExternalStreamingObject::_scalar_deleting_destructor_
          (URuntimeHashSetExternalStreamingObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  DestructItems<FRuntimePartitionStreamingData,int>
            ((FRuntimePartitionStreamingData *)(this->RuntimeStreamingData).AllocatorInstance.Data,
             (this->RuntimeStreamingData).ArrayNum);
  pFVar1 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a290

void * __thiscall
URuntimePartition::_scalar_deleting_destructor_(URuntimePartition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a2f0

void * __thiscall
URuntimePartitionLHGrid::_scalar_deleting_destructor_(URuntimePartitionLHGrid *this,uint param_1)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a350

void * __thiscall
URuntimePartitionLevelStreaming::_scalar_deleting_destructor_
          (URuntimePartitionLevelStreaming *this,uint param_1)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a3b0

void * __thiscall
URuntimePartitionPersistent::_scalar_deleting_destructor_
          (URuntimePartitionPersistent *this,uint param_1)

{
  *(undefined ***)this = &___7URuntimePartition__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall UWorldPartition::_scalar_deleting_destructor_(UWorldPartition *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  *(undefined ***)this = &___7UWorldPartition__6B_;
  (this->ReferencedObjects).HashSize = 0;
  FVar1 = (this->ReferencedObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedObjects).Elements);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a4b0

void * __thiscall
UWorldPartitionActorLoaderInterface::_scalar_deleting_destructor_
          (UWorldPartitionActorLoaderInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148a8a510

void * __thiscall
UWorldPartitionDestructibleInHLODInterface::_scalar_deleting_destructor_
          (UWorldPartitionDestructibleInHLODInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148a8a570

void * __thiscall
UWorldPartitionDestructibleInHLODSupportLibrary::_scalar_deleting_destructor_
          (UWorldPartitionDestructibleInHLODSupportLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
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

// `scalar_deleting_destructor' @ 148a8a5d0

void * __thiscall
UWorldPartitionHLODModifier::_scalar_deleting_destructor_
          (UWorldPartitionHLODModifier *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionHLODModifier__6B_;
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

// `scalar_deleting_destructor' @ 148a8a630

void * __thiscall
UWorldPartitionHLODProvider::_scalar_deleting_destructor_
          (UWorldPartitionHLODProvider *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148a8a690

void * __thiscall
UWorldPartitionHLODRuntimeSubsystem::_scalar_deleting_destructor_
          (UWorldPartitionHLODRuntimeSubsystem *this,uint param_1)

{
  ~UWorldPartitionHLODRuntimeSubsystem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a6f0

void * __thiscall
UWorldPartitionHLODSourceActors::_scalar_deleting_destructor_
          (UWorldPartitionHLODSourceActors *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
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

// `scalar_deleting_destructor' @ 148a8a750

void * __thiscall
UWorldPartitionHLODSourceActorsFromCell::_scalar_deleting_destructor_
          (UWorldPartitionHLODSourceActorsFromCell *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
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

// `scalar_deleting_destructor' @ 148a8a7b0

void * __thiscall
UWorldPartitionHLODSourceActorsFromLevel::_scalar_deleting_destructor_
          (UWorldPartitionHLODSourceActorsFromLevel *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
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

// `scalar_deleting_destructor' @ 148a8a810

void * __thiscall
UWorldPartitionRuntimeCellData::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  pFVar1 = (this->DebugName).String.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a890

void * __thiscall
UWorldPartitionRuntimeCellDataHashSet::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellDataHashSet *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8a910

void * __thiscall
UWorldPartitionRuntimeHashSet::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeHashSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
  pFVar1 = (this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RuntimeSpatiallyLoadedDataGridMap);
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CustomHLODActorToSourceCellsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomHLODActorToSourceCellsMap);
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StandaloneHLODActorToSourceCellsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StandaloneHLODActorToSourceCellsMap);
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldAssetStreamingObjects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldAssetStreamingObjects);
  DestructItems<FRuntimePartitionStreamingData,int>
            ((FRuntimePartitionStreamingData *)(this->RuntimeStreamingData).AllocatorInstance.Data,
             (this->RuntimeStreamingData).ArrayNum);
  pFVar1 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRuntimePartitionDesc,int>
            ((FRuntimePartitionDesc *)(this->RuntimePartitions).AllocatorInstance.Data,
             (this->RuntimePartitions).ArrayNum);
  pFVar1 = (this->RuntimePartitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldPartitionRuntimeHash::~UWorldPartitionRuntimeHash((UWorldPartitionRuntimeHash *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1e8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a8aa60

void * __thiscall
UWorldPartitionStandaloneHLODSubsystem::_scalar_deleting_destructor_
          (UWorldPartitionStandaloneHLODSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionStandaloneHLODSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeHLODBuilder @ 148a8f3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODBuilder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODDestruction @ 148a8f3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODDestruction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODInstancedSkinnedMeshComponent @ 148a8f3f0

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODInstancedSkinnedMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODInstancedStaticMeshComponent @ 148a8f400

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODInstancedStaticMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODLayer @ 148a8f410

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODLayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODModifier @ 148a8f420

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODModifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODOnlyLevelInstanceActor @ 148a8f430

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODOnlyLevelInstanceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODProviderInterface @ 148a8f440

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODProviderInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODRuntimeSubsystem @ 148a8f450

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODRuntimeSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODSourceActors @ 148a8f460

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODSourceActors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromCell @ 148a8f470

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromCell(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromLevel @ 148a8f480

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromLevel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstanceContainerInstance @ 148a8f490

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstanceContainerInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideContainer @ 148a8f4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelInstancePropertyOverrideContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMapBuildDataActor @ 148a8f4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMapBuildDataActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionHLODModifier @ 148a8f4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionHLODModifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationDataChunkActor @ 148a8f4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationDataChunkActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRuntimePartition @ 148a8f4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeRuntimePartition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRuntimePartitionLHGrid @ 148a8f4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeRuntimePartitionLHGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRuntimePartitionLevelStreaming @ 148a8f500

void __cdecl EmptyLinkFunctionForGeneratedCodeRuntimePartitionLevelStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRuntimePartitionPersistent @ 148a8f510

void __cdecl EmptyLinkFunctionForGeneratedCodeRuntimePartitionPersistent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStandaloneHLODActor @ 148a8f520

void __cdecl EmptyLinkFunctionForGeneratedCodeStandaloneHLODActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStandaloneHLODSubsystem @ 148a8f530

void __cdecl EmptyLinkFunctionForGeneratedCodeStandaloneHLODSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVolumetricLightmapGrid @ 148a8f540

void __cdecl EmptyLinkFunctionForGeneratedCodeVolumetricLightmapGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartition @ 148a8f550

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionActorLoaderInterface @ 148a8f560

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionActorLoaderInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataHashSet @ 148a8f570

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataHashSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHashSet @ 148a8f580

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHashSet(void)

{
  return;
}

// GetDestructionTagForActor @ 148a95140

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWorldPartitionHLODDestructionTag * __cdecl
`anonymous_namespace'::GetDestructionTagForActor
          (FWorldPartitionHLODDestructionTag *__return_storage_ptr__,AActor *param_1)

{
  UWorldPartitionDestructibleHLODComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FWorldPartitionHLODDestructionTag *pFVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  longlong *plVar9;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_48;
  int local_40;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_38;
  int local_30;
  undefined1 local_28 [16];
  FWorldPartitionHLODDestructionTag local_18;
  
  if ((param_1 == (AActor *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("O != 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                         ,0x70,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FWorldPartitionHLODDestructionTag *)(*pcVar2)();
    return pFVar4;
  }
  pUVar8 = (UClass *)param_1->_padding_;
  pUVar5 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
  bVar3 = UClass::ImplementsInterface(pUVar8,pUVar5);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass())"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                         ,0x71,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FWorldPartitionHLODDestructionTag *)(*pcVar2)();
    return pFVar4;
  }
  local_48.DebugPtr = (UWorldPartitionDestructibleHLODComponent *)0x0;
  local_40 = -1;
  pUVar6 = UObject::FindFunction
                     ((UObject *)param_1,
                      NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag);
  if (pUVar6 == (UFunction *)0x0) {
    pUVar8 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(**(code **)*puVar7)(puVar7,local_28);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)*puVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)*puVar7);
      }
      local_48.DebugPtr = (UWorldPartitionDestructibleHLODComponent *)*puVar7;
      local_40 = *(int *)(puVar7 + 1);
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,&local_48);
  }
  (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
  pUVar1 = (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr;
  __return_storage_ptr__->ActorIndex = local_40;
  if ((pUVar1 == (UWorldPartitionDestructibleHLODComponent *)0x0) || (local_40 == -1)) {
    pFVar4 = ResolveHLODDestructionTagForActor(&local_18,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (pFVar4->HLODDestructionComponent).field0_0x0.DebugPtr,
       pUVar1 != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (__return_storage_ptr__->HLODDestructionComponent).field0_0x0 =
         (pFVar4->HLODDestructionComponent).field0_0x0;
    __return_storage_ptr__->ActorIndex = pFVar4->ActorIndex;
    pUVar8 = (UClass *)param_1->_padding_;
    pUVar5 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar8,pUVar5);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass())"
                           ,
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\HLODDestruction.gen.cpp"
                           ,0xb9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWorldPartitionHLODDestructionTag *)(*pcVar2)();
      return pFVar4;
    }
    pUVar6 = UObject::FindFunction
                       ((UObject *)param_1,
                        NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag);
    if (pUVar6 != (UFunction *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr,
         pUVar1 != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_38 = (__return_storage_ptr__->HLODDestructionComponent).field0_0x0;
      local_30 = __return_storage_ptr__->ActorIndex;
      (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,&local_38);
      return __return_storage_ptr__;
    }
    pUVar8 = UWorldPartitionDestructibleInHLODInterface::StaticClass();
    plVar9 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9,__return_storage_ptr__);
    }
  }
  return __return_storage_ptr__;
}

// HLODRuntimeSubsystemCVarSinkFunction @ 148a97390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl HLODRuntimeSubsystemCVarSinkFunction(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ForAnyElementType _Src;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UWorldPartitionHLODRuntimeSubsystem *this;
  uint uVar10;
  longlong lVar11;
  TObjectIterator<UWorld> local_38;
  TObjectIterator<UWorld> local_20;
  
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  local_20.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
  GetObjectsOfClass(pUVar8,&local_20.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<UWorld>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar11 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar4 = local_20.Index;
    uVar10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar11 << 3);
    uVar4 = local_20.Index;
    uVar10 = local_20.ObjectArray.ArrayNum;
  }
  do {
    local_38.Index = uVar4;
    if (uVar4 == uVar10) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar4 < local_38.ObjectArray.ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = *(longlong *)(local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    cVar1 = *(char *)(lVar11 + 0x18a);
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      pUVar8 = UWorldPartitionHLODRuntimeSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UClass *)0x0) goto LAB_148a974e8;
LAB_148a97516:
        pUVar8 = (UClass *)0x0;
      }
      else {
        if (pUVar8 == (UClass *)0x0) goto LAB_148a97516;
        UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_148a974e8:
        pUVar9 = UWorldPartitionHLODRuntimeSubsystem::StaticClass();
        if (pUVar9 == (UClass *)0x0) goto LAB_148a97516;
        iVar2 = (int)pUVar9->_padding_;
        if (((int)pUVar8->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_148a97516;
      }
      this = (UWorldPartitionHLODRuntimeSubsystem *)
             FSubsystemCollectionBase::GetSubsystemInternal
                       ((FSubsystemCollectionBase *)(lVar11 + 0xac0),pUVar8);
      if (this != (UWorldPartitionHLODRuntimeSubsystem *)0x0) {
        bVar5 = UWorldPartitionHLODRuntimeSubsystem::ShouldPerformWarmup(this);
        this->bCachedShouldPerformWarmup = bVar5;
      }
    }
    TObjectIterator<UWorld>::Advance(&local_38);
    uVar4 = local_38.Index;
  } while( true );
}

// IsDebugCellShown @ 148a9a070

bool __cdecl IsDebugCellShown(UWorldPartitionRuntimeCell *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  
  iVar1 = ((param_1->RuntimeCellData).field0_0x0.DebugPtr)->HierarchicalLevel;
  if (iVar1 < GShowRuntimeHashSetDebugDisplayLevel) {
    return false;
  }
  if (GShowRuntimeHashSetDebugDisplayLevel + GShowRuntimeHashSetDebugDisplayLevelCount <= iVar1) {
    return false;
  }
  if (GShowRuntimeHashSetDebugDisplayMode == 3) {
    lVar3 = (**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
    if (*(int *)(lVar3 + 8) != 0) {
      return false;
    }
    piVar4 = (int *)(**(code **)(param_1->_padding_ + 800))(param_1);
    if (((piVar4[3] != 0 || piVar4[2] != 0) || piVar4[1] != 0) || *piVar4 != 0) {
      return false;
    }
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0x350))(param_1);
  if (cVar2 == '\0') {
    return false;
  }
  return true;
}

// MakeHLODRenderResourcesResident @ 148a9a9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MakeHLODRenderResourcesResident
          (TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
           *param_1,
          TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
          *param_2,FSceneViewFamily *param_3)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  uint uVar6;
  code **ppcVar7;
  FRenderCommandList *this;
  FRenderCommandTag *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  undefined1 local_118 [40];
  code **local_f0;
  byte local_e8;
  undefined1 local_d8 [72];
  undefined4 local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  Type local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) ||
     (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
    TVar5 = FSceneViewFamily::GetFeatureLevel(param_3);
    TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
    ::
    TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
              ((TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
                *)local_d8,param_1);
    TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
    ::
    TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
              ((TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
                *)local_88,param_2);
    local_148[0] = (code *)0x0;
    local_38 = TVar5;
    ppcVar7 = FMemory::Malloc(0xb0,8);
    *ppcVar7 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`MakeHLODRenderResourcesResident'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    local_120 = ppcVar7;
    TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
    ::
    TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
              ((TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
                *)(ppcVar7 + 1),
               (TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
                *)local_d8);
    TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
    ::
    TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
              ((TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
                *)(ppcVar7 + 0xb),
               (TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
                *)local_88);
    *(Type *)(ppcVar7 + 0x15) = local_38;
    if ((TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
         *)(ppcVar7 + 1) !=
        (TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
         *)0x0) {
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`MakeHLODRenderResourcesResident'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_MakeHLODRenderResourcesResident_::__l5::TSTR_MakeHLODRenderResourcesResident915>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      if (this->bInitialized == 0) {
        FRenderCommandList::Init(this);
      }
      iVar1 = (this->CommandLists).ArrayNum;
      uVar9 = iVar1 - 1;
      uVar6 = 0;
      if ((int)uVar9 < iVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_158 = (longlong)(int)uVar9;
        local_150 = (longlong)iVar1;
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (this->CommandLists).ArrayNum;
      local_118._16_8_ = local_138[0];
      local_118._24_8_ = local_138[1];
      local_118._32_8_ = local_138[2];
      local_e8 = 2;
      pFVar2 = (this->CommandLists).AllocatorInstance.Data;
      local_118._0_8_ = local_148[0];
      local_f0 = local_120;
      local_120 = (code **)0x0;
      local_148[0] = (code *)0x0;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`MakeHLODRenderResourcesResident'::__l5::TSTR_MakeHLODRenderResourcesResident915>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar2 + (iVar1 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_118,pFVar8);
      uVar10 = (ulonglong)local_e8;
      if (2 < uVar10) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_118 + 0x10);
          if (local_f0 != (code **)0x0) {
            ppcVar7 = local_f0;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_118);
      }
    }
    if (local_148[0] != (code *)0x0) {
      ppcVar7 = local_148 + 2;
      if (local_120 != (code **)0x0) {
        ppcVar7 = local_120;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    local_40 = 0;
    if ((void *)local_88._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    local_90 = 0;
    if ((void *)local_d8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
  }
  return;
}

// PrepareNaniteRequests @ 148a9d800

void __cdecl
PrepareNaniteRequests
          (TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
           *param_1,UStaticMesh *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FStaticMeshRenderData *pFVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  int local_res10 [2];
  FResources *local_res20;
  FResources **local_18 [2];
  
  if ((param_2 == (UStaticMesh *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InStaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                         ,0x27e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UStaticMesh::HasValidNaniteData(param_2);
  if (bVar2) {
    pFVar4 = UStaticMesh::GetRenderData(param_2);
    local_res20 = (pFVar4->NaniteResourcesPtr).Ptr;
    uVar6 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res20 >> 4))
            * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
      puVar7 = *(undefined1 **)&param_1->field_0x40;
      if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
        puVar7 = &param_1->field_0x38;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar6) * 4);
      if (iVar3 != -1) {
        do {
          lVar5 = *(longlong *)param_1 + (longlong)iVar3 * 0x18;
          if (*(FResources **)(*(longlong *)param_1 + (longlong)iVar3 * 0x18) == local_res20) {
            if (lVar5 != 0) goto LAB_148a9d917;
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_18[0] = &local_res20;
    TSet<TTuple<Nanite::FResources_*,int>,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<Nanite::FResources_*_&&>_>
              ((TSet<TTuple<Nanite::FResources_*,int>,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>,FDefaultSetAllocator>
                *)param_1,(uint)local_res10,
               (TKeyInitializer<Nanite::FResources_*_&&> *)(ulonglong)uVar6,(bool *)local_18);
    lVar5 = *(longlong *)param_1 + (longlong)local_res10[0] * 0x18;
LAB_148a9d917:
    iVar3 = 1;
    if (1 < param_3) {
      iVar3 = param_3;
    }
    *(int *)(lVar5 + 8) = iVar3;
  }
  return;
}

// ResolveHLODDestructionTagForActor @ 148aa17b0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWorldPartitionHLODDestructionTag * __cdecl
`anonymous_namespace'::ResolveHLODDestructionTagForActor
          (FWorldPartitionHLODDestructionTag *__return_storage_ptr__,AActor *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 *puVar6;
  UWorldPartitionDestructibleHLODComponent *this;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ULevel *pUVar12;
  ULevelStreaming *pUVar13;
  longlong *plVar14;
  UWorldPartitionRuntimeCell *pUVar15;
  UClass *pUVar16;
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  FCellData *pFVar17;
  longlong lVar18;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar19;
  FWorldPartitionHLODDestructionTag *pFVar20;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar21;
  int iVar22;
  TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 *puVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  bool bVar32;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`ResolveHLODDestructionTagForActor'::`2'::__CpuProfilerEventSpecId26,
               "ResolveHLODDestructionTagForActor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODDestruction.cpp"
               ,0x1a);
    FCpuProfilerTrace::OutputBeginEvent
              (`ResolveHLODDestructionTagForActor'::`2'::__CpuProfilerEventSpecId26);
  }
  pUVar12 = AActor::GetLevel(param_1);
  pUVar13 = FLevelUtils::FindStreamingLevel(pUVar12);
  if (pUVar13 == (ULevelStreaming *)0x0) {
    (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr =
         (UWorldPartitionDestructibleHLODComponent *)0x0;
    __return_storage_ptr__->ActorIndex = -1;
    goto LAB_148aa1c94;
  }
  plVar14 = (longlong *)(**(code **)(pUVar13->_padding_ + 0x2b0))(pUVar13);
  if ((plVar14 == (longlong *)0x0) ||
     (pUVar15 = (UWorldPartitionRuntimeCell *)(**(code **)(*plVar14 + 8))(plVar14),
     pUVar15 == (UWorldPartitionRuntimeCell *)0x0)) {
LAB_148aa188a:
    pUVar15 = (UWorldPartitionRuntimeCell *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
    iVar22 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar16->_padding_)) goto LAB_148aa188a;
  }
  lVar4 = param_1->_padding_;
  (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)0x0;
  __return_storage_ptr__->ActorIndex = -1;
  if (pUVar15 != (UWorldPartitionRuntimeCell *)0x0) {
    this_00 = AActor::GetWorld(param_1);
    this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
    pFVar17 = UWorldPartitionHLODRuntimeSubsystem::GetCellData(this_01,pUVar15);
    if (pFVar17 == (FCellData *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UWorldPartitionHLODRuntimeSubsystem::GetHLODObjectsForCell'::__l2::
               _dynamic_atexit_destructor_for__DummyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar23 = &DummyArray;
    }
    else {
      pTVar23 = &pFVar17->LoadedHLODs;
    }
    local_res20 = pTVar23->ArrayNum;
    uVar25 = (ulonglong)(int)local_res20;
    pFVar31 = (pTVar23->AllocatorInstance).Data;
    pFVar2 = pFVar31 + uVar25 * 8;
    while( true ) {
      if (pTVar23->ArrayNum != (int)uVar25) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IWorldPartitionHLODObject_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar31 == pFVar2) break;
      lVar18 = (**(code **)**(undefined8 **)pFVar31)();
      if (lVar18 == 0) {
LAB_148aa1977:
        lVar18 = 0;
      }
      else {
        pUVar16 = Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
        iVar22 = (int)pUVar16->_padding_;
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < iVar22) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar22 * 8) !=
            &pUVar16->_padding_)) goto LAB_148aa1977;
      }
      if (lVar18 != 0) {
        pTVar19 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                              *)(lVar18 + 0x248));
        iVar22 = *(int *)&(pTVar19->Elements).field_0x28;
        iVar26 = 0;
        iVar28 = 0;
        puVar1 = &(pTVar19->Elements).field_0x10;
        uVar10 = 1;
        iVar11 = 0;
        if (iVar22 != 0) {
          puVar5 = *(uint **)&(pTVar19->Elements).field_0x20;
          puVar29 = (uint *)puVar1;
          if (puVar5 != (uint *)0x0) {
            puVar29 = puVar5;
          }
          uVar30 = *puVar29;
          while (uVar30 == 0) {
            iVar26 = iVar26 + 1;
            iVar28 = iVar28 + 0x20;
            iVar11 = iVar22;
            if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_148aa1a25;
            uVar30 = puVar29[iVar26];
          }
          uVar10 = ~(uVar30 - 1) & uVar30;
          uVar25 = (ulonglong)uVar10 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar11 = (int)lVar18 + -1 + iVar28;
          if (iVar22 < iVar11) {
            iVar11 = iVar22;
          }
        }
LAB_148aa1a25:
        uVar30 = *(uint *)&(pTVar19->Elements).field_0x28;
        TStack_90._padding_ = CONCAT44(uVar10,iVar26);
        uVar10 = uVar30 & 0xffffffe0;
        TStack_90.CurrentBitIndex = iVar11;
        TStack_90.UnvisitedBitMask = 0xffffffff;
        iVar26 = (int)uVar30 >> 5;
        TStack_90._28_4_ = local_4c;
        TStack_90.BaseBitIndex = iVar28;
        uStack_70 = CONCAT44(uStack_9c,
                             *(int *)&(pTVar19->Elements).field_0x8 -
                             *(int *)&(pTVar19->Elements).field_0x34);
        TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar30 < 0) || (iVar22 < (int)uVar30)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FWorldPartitionHLODDestructionTag *)(*pcVar8)();
          return pFVar20;
        }
        uVar3 = *(uint *)&(pTVar19->Elements).field_0x28;
        if (uVar30 != uVar3) {
          puVar6 = *(undefined1 **)&(pTVar19->Elements).field_0x20;
          puVar27 = puVar1;
          if (puVar6 != (undefined1 *)0x0) {
            puVar27 = puVar6;
          }
          uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar26 * 4);
          while (uVar30 == 0) {
            iVar26 = iVar26 + 1;
            uVar10 = uVar10 + 0x20;
            uVar30 = uVar3;
            if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar26)
            goto LAB_148aa1b50;
            uVar30 = *(uint *)(puVar27 + (longlong)iVar26 * 4);
          }
          uVar25 = (ulonglong)(~(uVar30 - 1) & uVar30) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar30 = (int)lVar18 + -1 + uVar10;
          if ((int)uVar3 < (int)uVar30) {
            uVar30 = uVar3;
          }
        }
LAB_148aa1b50:
        while( true ) {
          if (*(int *)&(pTVar19->Elements).field_0x8 - *(int *)&(pTVar19->Elements).field_0x34 !=
              (int)uStack_70) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if ((TStack_90.CurrentBitIndex == uVar30) &&
             (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
          this = *(UWorldPartitionDestructibleHLODComponent **)
                  (*(longlong *)&pTVar19->Elements + (longlong)TStack_90.CurrentBitIndex * 0x10);
          if (this != (UWorldPartitionDestructibleHLODComponent *)0x0) {
            pUVar16 = Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();
            iVar22 = (int)pUVar16->_padding_;
            if ((iVar22 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
                &pUVar16->_padding_)) {
              pTVar21 = UWorldPartitionDestructibleHLODComponent::GetDestructibleActors(this);
              pFVar7 = (pTVar21->AllocatorInstance).Data;
              for (pFVar24 = pFVar7; pFVar24 != pFVar7 + (longlong)pTVar21->ArrayNum * 8;
                  pFVar24 = pFVar24 + 8) {
                if (*(longlong *)pFVar24 == lVar4) {
                  iVar22 = (int)((longlong)pFVar24 - (longlong)pFVar7 >> 3);
                  if (iVar22 != -1) {
                    __return_storage_ptr__->ActorIndex = iVar22;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this);
                    }
                    (__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr = this;
                    goto LAB_148aa1c38;
                  }
                  break;
                }
              }
            }
          }
          TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        }
      }
LAB_148aa1c38:
      if (((__return_storage_ptr__->HLODDestructionComponent).field0_0x0.DebugPtr !=
           (UWorldPartitionDestructibleHLODComponent *)0x0) &&
         (__return_storage_ptr__->ActorIndex != -1)) break;
      pFVar31 = pFVar31 + 8;
      uVar25 = (ulonglong)local_res20;
    }
  }
LAB_148aa1c94:
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_AMapBuildDataActor_NoRegister @ 148aa4360

UClass * __cdecl Z_Construct_UClass_AMapBuildDataActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MapBuildDataActor",
               &Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton,
               AMapBuildDataActor::StaticRegisterNativesAMapBuildDataActor,0x328,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AMapBuildDataActor>,
               InternalVTableHelperCtorCaller<AMapBuildDataActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton;
}

// Z_Construct_UClass_ANavigationDataChunkActor_NoRegister @ 148aa4420

UClass * __cdecl Z_Construct_UClass_ANavigationDataChunkActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataChunkActor",
               &Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton,
               ANavigationDataChunkActor::StaticRegisterNativesANavigationDataChunkActor,0x308,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationDataChunkActor>,
               InternalVTableHelperCtorCaller<ANavigationDataChunkActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationDataChunkActor.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_NoRegister @ 148aa44e0

UClass * __cdecl Z_Construct_UClass_AWorldPartitionHLODOnlyLevelInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODOnlyLevelInstance",
               &Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton,
               AWorldPartitionHLODOnlyLevelInstance::
               StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance,0x358,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionHLODOnlyLevelInstance>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLODOnlyLevelInstance>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionStandaloneHLOD_NoRegister @ 148aa45a0

UClass * __cdecl Z_Construct_UClass_AWorldPartitionStandaloneHLOD_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton,
               AWorldPartitionStandaloneHLOD::StaticRegisterNativesAWorldPartitionStandaloneHLOD,
               0x358,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionStandaloneHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionStandaloneHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton;
}

// Z_Construct_UClass_UHLODBuilderSettings_NoRegister @ 148aa4660

UClass * __cdecl Z_Construct_UClass_UHLODBuilderSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilderSettings",
               &Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton,
               UHLODBuilderSettings::StaticRegisterNativesUHLODBuilderSettings,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UHLODBuilderSettings>,
               InternalVTableHelperCtorCaller<UHLODBuilderSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton;
}

// Z_Construct_UClass_UHLODBuilder_NoRegister @ 148aa4710

UClass * __cdecl Z_Construct_UClass_UHLODBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilder",
               &Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton,
               UHLODBuilder::StaticRegisterNativesUHLODBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Editor",
               InternalConstructor<UHLODBuilder>,InternalVTableHelperCtorCaller<UHLODBuilder>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilder.InnerSingleton;
}

// Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_NoRegister @ 148aa47c0

UClass * __cdecl Z_Construct_UClass_UHLODInstancedSkinnedMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedSkinnedMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton,
               UHLODInstancedSkinnedMeshComponent::
               StaticRegisterNativesUHLODInstancedSkinnedMeshComponent,0xad0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedSkinnedMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedSkinnedMeshComponent>,local_res8,
               UInstancedSkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedSkinnedMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister @ 148aa4880

UClass * __cdecl Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton,
               UHLODInstancedStaticMeshComponent::
               StaticRegisterNativesUHLODInstancedStaticMeshComponent,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UHLODInstancedStaticMeshComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UHLODLayer_NoRegister @ 148aa4940

UClass * __cdecl Z_Construct_UClass_UHLODLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODLayer",&Z_Registration_Info_UClass_UHLODLayer.InnerSingleton,
               UHLODLayer::StaticRegisterNativesUHLODLayer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHLODLayer>,InternalVTableHelperCtorCaller<UHLODLayer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODLayer.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister @ 148aa49f0

UClass * __cdecl Z_Construct_UClass_ULevelInstanceContainerInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceContainerInstance",
               &Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton,
               ULevelInstanceContainerInstance::StaticRegisterNativesULevelInstanceContainerInstance
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceContainerInstance>,
               InternalVTableHelperCtorCaller<ULevelInstanceContainerInstance>,local_res8,
               UActorDescContainerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton;
}

// Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_NoRegister @ 148aa4ab0

UClass * __cdecl Z_Construct_UClass_ULevelInstancePropertyOverrideContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePropertyOverrideContainer",
               &Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton,
               ULevelInstancePropertyOverrideContainer::
               StaticRegisterNativesULevelInstancePropertyOverrideContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstancePropertyOverrideContainer>
               ,InternalVTableHelperCtorCaller<ULevelInstancePropertyOverrideContainer>,local_res8,
               UActorDescContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstancePropertyOverrideContainer.InnerSingleton;
}

// Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_NoRegister @ 148aa4b70

UClass * __cdecl Z_Construct_UClass_UMaterialParameterCollectionHLODModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollectionHLODModifier",
               &Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton,
               UMaterialParameterCollectionHLODModifier::
               StaticRegisterNativesUMaterialParameterCollectionHLODModifier,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialParameterCollectionHLODModifier>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollectionHLODModifier>,local_res8,
               UWorldPartitionHLODModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton;
}

// Z_Construct_UClass_UNullHLODBuilder_NoRegister @ 148aa4c30

UClass * __cdecl Z_Construct_UClass_UNullHLODBuilder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullHLODBuilder",
               &Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton,
               UNullHLODBuilder::StaticRegisterNativesUNullHLODBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<UNullHLODBuilder>,
               InternalVTableHelperCtorCaller<UNullHLODBuilder>,local_res8,UHLODBuilder::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullHLODBuilder.InnerSingleton;
}

// Z_Construct_UClass_URuntimePartitionLHGrid_NoRegister @ 148aa4cf0

UClass * __cdecl Z_Construct_UClass_URuntimePartitionLHGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLHGrid",
               &Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton,
               URuntimePartitionLHGrid::StaticRegisterNativesURuntimePartitionLHGrid,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<URuntimePartitionLHGrid>
               ,InternalVTableHelperCtorCaller<URuntimePartitionLHGrid>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLHGrid.InnerSingleton;
}

// Z_Construct_UClass_URuntimePartitionLevelStreaming_NoRegister @ 148aa4db0

UClass * __cdecl Z_Construct_UClass_URuntimePartitionLevelStreaming_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionLevelStreaming",
               &Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton,
               URuntimePartitionLevelStreaming::StaticRegisterNativesURuntimePartitionLevelStreaming
               ,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimePartitionLevelStreaming>,
               InternalVTableHelperCtorCaller<URuntimePartitionLevelStreaming>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionLevelStreaming.InnerSingleton;
}

// Z_Construct_UClass_URuntimePartitionPersistent_NoRegister @ 148aa4e70

UClass * __cdecl Z_Construct_UClass_URuntimePartitionPersistent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimePartitionPersistent",
               &Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton,
               URuntimePartitionPersistent::StaticRegisterNativesURuntimePartitionPersistent,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimePartitionPersistent>,
               InternalVTableHelperCtorCaller<URuntimePartitionPersistent>,local_res8,
               URuntimePartition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimePartitionPersistent.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister @ 148aa4f30

UClass * __cdecl Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionActorLoaderInterface",
               &Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton,
               UWorldPartitionActorLoaderInterface::
               StaticRegisterNativesUWorldPartitionActorLoaderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionActorLoaderInterface>,
               InternalVTableHelperCtorCaller<UWorldPartitionActorLoaderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister @ 148aa4ff0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODSupportLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.
                InnerSingleton,
               UWorldPartitionDestructibleInHLODSupportLibrary::
               StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODSupportLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister @ 148aa50b0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODModifier",
               &Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton,
               UWorldPartitionHLODModifier::StaticRegisterNativesUWorldPartitionHLODModifier,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODModifier>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODModifier>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister @ 148aa5160

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODProvider",
               &Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton,
               UWorldPartitionHLODProvider::StaticRegisterNativesUWorldPartitionHLODProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODProvider>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODProvider.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister @ 148aa5220

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODRuntimeSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton,
               UWorldPartitionHLODRuntimeSubsystem::
               StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem,0x2d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODRuntimeSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODRuntimeSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_NoRegister @ 148aa52e0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromCell_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromCell",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton,
               UWorldPartitionHLODSourceActorsFromCell::
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODSourceActorsFromCell>
               ,InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromCell>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister @ 148aa53a0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromLevel",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton,
               UWorldPartitionHLODSourceActorsFromLevel::
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActorsFromLevel>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromLevel>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister @ 148aa5460

UClass * __cdecl Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActors",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton,
               UWorldPartitionHLODSourceActors::StaticRegisterNativesUWorldPartitionHLODSourceActors
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActors>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActors>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_NoRegister @ 148aa5510

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellDataHashSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton,
               UWorldPartitionRuntimeCellDataHashSet::
               StaticRegisterNativesUWorldPartitionRuntimeCellDataHashSet,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeCellDataHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataHashSet>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataHashSet.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister @ 148aa55d0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeHashSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton,
               UWorldPartitionRuntimeHashSet::StaticRegisterNativesUWorldPartitionRuntimeHashSet,
               0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHashSet>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_NoRegister @ 148aa5690

UClass * __cdecl Z_Construct_UClass_UWorldPartitionStandaloneHLODSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLODSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton,
               UWorldPartitionStandaloneHLODSubsystem::
               StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionStandaloneHLODSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionStandaloneHLODSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartition_NoRegister @ 148aa5750

UClass * __cdecl Z_Construct_UClass_UWorldPartition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UWorldPartition::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartition",
               &Z_Registration_Info_UClass_UWorldPartition.InnerSingleton,
               UWorldPartition::StaticRegisterNativesUWorldPartition,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartition>,
               InternalVTableHelperCtorCaller<UWorldPartition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartition.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EHLODLayerType @ 148aa5800

UEnum * __cdecl Z_Construct_UEnum_Engine_EHLODLayerType(void)

{
  if (Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EHLODLayerType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FHLODBuildInputStats @ 148aa5840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODBuildInputStats(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODBuildInputStats.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODBuildInputStats.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODBuildInputStats_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODBuildInputStats.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FHLODBuildInputStats.InnerSingleton;
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

// Z_Construct_UScriptStruct_FHLODISMComponentDescriptor @ 148aa58c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODISMComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODISMComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODISMComponentDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODISMComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODISMComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor @ 148aa5940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODSkinnedMeshComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODSkinnedMeshComponentDescriptor.InnerSingleton
               ,&Z_Construct_UScriptStruct_FHLODSkinnedMeshComponentDescriptor_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FHLODSkinnedMeshComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODSkinnedMeshComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance @ 148aa59c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimeCellTransformerInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimeCellTransformerInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc @ 148aa5a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FVolumetricLightMapGridDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVolumetricLightMapGridDesc.InnerSingleton;
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

// CVarEnableServerStreaming'' @ 150408e30

void __cdecl `dynamic_atexit_destructor_for_'UWorldPartition::CVarEnableServerStreaming__(void)

{
  UWorldPartition::CVarEnableServerStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartition::CVarEnableServerStreaming);
  return;
}

// CVarEnableServerStreamingOut'' @ 150408e50

void __cdecl `dynamic_atexit_destructor_for_'UWorldPartition::CVarEnableServerStreamingOut__(void)

{
  UWorldPartition::CVarEnableServerStreamingOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartition::CVarEnableServerStreamingOut);
  return;
}

// CVarUseMakingInvisibleTransactionRequests'' @ 150408e70

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartition::CVarUseMakingInvisibleTransactionRequests__(void)

{
  UWorldPartition::CVarUseMakingInvisibleTransactionRequests._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartition::CVarUseMakingInvisibleTransactionRequests);
  return;
}

// CVarUseMakingVisibleTransactionRequests'' @ 150408e90

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartition::CVarUseMakingVisibleTransactionRequests__(void)

{
  UWorldPartition::CVarUseMakingVisibleTransactionRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartition::CVarUseMakingVisibleTransactionRequests);
  return;
}

// EnableHLODCommand'' @ 150408eb0

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionHLODRuntimeSubsystem::EnableHLODCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartitionHLODRuntimeSubsystem::EnableHLODCommand);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODSink'' @ 150408ed0

void __cdecl _dynamic_atexit_destructor_for__CVarHLODSink__(void)

{
  CVarHLODSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupDebugDraw'' @ 150408ef0

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupDebugDraw__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupDebugDraw);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupEnabled'' @ 150408f10

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupNanite'' @ 150408f30

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupNanite__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupNanite);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupNumFrames'' @ 150408f50

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupNumFrames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupNumFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupVT'' @ 150408f70

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupVT__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupVT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupVTScaleFactor'' @ 150408f90

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupVTScaleFactor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupVTScaleFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODWarmupVTSizeClamp'' @ 150408fb0

void __cdecl _dynamic_atexit_destructor_for__CVarHLODWarmupVTSizeClamp__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODWarmupVTSizeClamp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRuntimeHashSetDebugDisplayLevel'' @ 150408fd0

void __cdecl _dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayLevel__(void)

{
  CVarShowRuntimeHashSetDebugDisplayLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRuntimeHashSetDebugDisplayLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRuntimeHashSetDebugDisplayLevelCount'' @ 150408ff0

void __cdecl _dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayLevelCount__(void)

{
  CVarShowRuntimeHashSetDebugDisplayLevelCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRuntimeHashSetDebugDisplayLevelCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRuntimeHashSetDebugDisplayMode'' @ 150409010

void __cdecl _dynamic_atexit_destructor_for__CVarShowRuntimeHashSetDebugDisplayMode__(void)

{
  CVarShowRuntimeHashSetDebugDisplayMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRuntimeHashSetDebugDisplayMode);
  return;
}

// `dynamic_atexit_destructor_for_'DummyArray'' @ 150409030

void __cdecl
`UWorldPartitionHLODRuntimeSubsystem::GetHLODObjectsForCell'::__l2::
_dynamic_atexit_destructor_for__DummyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyArray.AllocatorInstance.Data;
  if (DummyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyStreamingSources'' @ 150409050

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`UWorldPartition::GetStreamingSources'::__l2::
_dynamic_atexit_destructor_for__EmptyStreamingSources__(void)

{
  DestructItems<FWorldPartitionStreamingSource,int>
            ((FWorldPartitionStreamingSource *)EmptyStreamingSources.AllocatorInstance.Data,
             EmptyStreamingSources.ArrayNum);
  if (EmptyStreamingSources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyStreamingSources.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogHLODBuilder'' @ 150409090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLODBuilder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLODBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'LogHLODLayer'' @ 1504090b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLODLayer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLODLayer);
  return;
}

// `dynamic_atexit_destructor_for_'LogHLODRuntimeSubsystem'' @ 1504090d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLODRuntimeSubsystem__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLODRuntimeSubsystem);
  return;
}

// `dynamic_atexit_destructor_for_'SetLogWorldPartitionVerbosity'' @ 1504090f0

void __cdecl _dynamic_atexit_destructor_for__SetLogWorldPartitionVerbosity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SetLogWorldPartitionVerbosity);
  return;
}

