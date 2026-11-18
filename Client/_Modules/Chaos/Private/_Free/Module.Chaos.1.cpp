// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 357

// GlobalFrame'' @ 140f50d30

void __cdecl `dynamic_initializer_for_'ChaosDD::Private::FChaosDDContext::GlobalFrame__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ChaosDD::Private::FChaosDDContext::GlobalFrame__);
  return;
}

// GlobalFrameCS'' @ 140f50d50

void __cdecl `dynamic_initializer_for_'ChaosDD::Private::FChaosDDContext::GlobalFrameCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&ChaosDD::Private::FChaosDDContext::GlobalFrameCS,4000);
  atexit(`dynamic_atexit_destructor_for_'ChaosDD::Private::FChaosDDContext::GlobalFrameCS__);
  return;
}

// `dynamic_initializer_for_'CVarChaosThreadEnabled'' @ 140f50d80

void __cdecl _dynamic_initializer_for__CVarChaosThreadEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarChaosThreadEnabled,L"p.Chaos.DedicatedThreadEnabled",local_res8,
             L"Enables a dedicated physics task/thread for Chaos tasks.0: Disabled1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosThreadEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaos_DebugDraw_EnableGlobalQueue'' @ 140f50dd0

void __cdecl
ChaosDD::Private::_dynamic_initializer_for__CVarChaos_DebugDraw_EnableGlobalQueue__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaos_DebugDraw_EnableGlobalQueue,L"p.Chaos.DebugDraw.EnableGlobalQueue",
             &bChaosDebugDraw_EnableGlobalQueue,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaos_DebugDraw_EnableGlobalQueue__);
  return;
}

// `dynamic_initializer_for_'CVarDedicatedThreadDesiredHz'' @ 140f50e20

void __cdecl _dynamic_initializer_for__CVarDedicatedThreadDesiredHz__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 60.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDedicatedThreadDesiredHz,L"p.Chaos.Thread.DesiredHz",local_res8,
             L"Desired update rate of the dedicated physics thread in Hz/FPS (Default 60.0f)",0);
  atexit(_dynamic_atexit_destructor_for__CVarDedicatedThreadDesiredHz__);
  return;
}

// `dynamic_initializer_for_'CVarDedicatedThreadSyncThreshold'' @ 140f50e70

void __cdecl _dynamic_initializer_for__CVarDedicatedThreadSyncThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDedicatedThreadSyncThreshold,L"p.Chaos.Thread.WaitThreshold",local_res8,
             L"Desired wait time in ms before the game thread stops waiting to sync physics and just takes the last result. (default 16ms)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDedicatedThreadSyncThreshold__);
  return;
}

// `dynamic_initializer_for_'ChaosLocksChannelReg'' @ 140f50ec0

void __cdecl _dynamic_initializer_for__ChaosLocksChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&ChaosLocksChannelObject,"ChaosLocksChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'DumpHier_ElementBuckets'' @ 140f50ef0

void __cdecl _dynamic_initializer_for__DumpHier_ElementBuckets__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"1,4,8,16,32,64,128,256,512");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&DumpHier_ElementBuckets,L"p.Chaos.DumpHierElementBuckets",&local_18,
             L"Distribution buckets for dump hierarchy stats command",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__DumpHier_ElementBuckets__);
  return;
}

// `dynamic_initializer_for_'GDefaultChaosSettings'' @ 140f50f60

void __cdecl Chaos::_dynamic_initializer_for__GDefaultChaosSettings__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDefaultChaosSettings__);
  return;
}

// `dynamic_initializer_for_'LogChaos'' @ 140f50f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaos__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogChaos,L"LogChaos",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaos__);
  return;
}

// `dynamic_initializer_for_'LogChaosDD'' @ 140f50fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosDD__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogChaosDD,L"LogChaosDD",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosDD__);
  return;
}

// `dynamic_initializer_for_'LogChaosDataflow'' @ 140f51000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosDataflow__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChaosDataflow,L"LogChaosDataflow",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosDataflow__);
  return;
}

// `dynamic_initializer_for_'LogChaosDebug'' @ 140f51040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosDebug__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogChaosDebug,L"LogChaosDebug",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosDebug__);
  return;
}

// `dynamic_initializer_for_'LogChaosGeneral'' @ 140f51080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosGeneral__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChaosGeneral,L"LogChaosGeneral",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosGeneral__);
  return;
}

// `dynamic_initializer_for_'LogChaosSimulation'' @ 140f510c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosSimulation__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogChaosSimulation,L"LogChaosSimulation",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosSimulation__);
  return;
}

// `dynamic_initializer_for_'LogChaosThread'' @ 140f51100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogChaosThread__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogChaosThread,L"LogChaosThread",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogChaosThread__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantChaos'' @ 140f51140

void __cdecl _dynamic_initializer_for__ModuleRegistrantChaos__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Chaos";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Chaos",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FChaosEngineModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f51190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f51220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f512b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f51340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccelerationStructureReset'' @ 140f513d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccelerationStructureReset__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccelerationStructureReset ==
      (FThreadSafeStaticStat<FStat_STAT_AccelerationStructureReset>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccelerationStructureReset");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccelerationStructureReset,*pFVar1,
               L"Acceleration Structure Reset","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AdvanceEventWaits'' @ 140f51460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AdvanceEventWaits__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AdvanceEventWaits == (FThreadSafeStaticStat<FStat_STAT_AdvanceEventWaits>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AdvanceEventWaits");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AdvanceEventWaits,*pFVar1,
               L"AdvanceOneTimestep Event Waits","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BeginFrame'' @ 140f514f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BeginFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BeginFrame == (FThreadSafeStaticStat<FStat_STAT_BeginFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BeginFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginFrame,*pFVar1,L"Begin Frame",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f51580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f51610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f516a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f51730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f517c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f51850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BreakingCallback'' @ 140f518e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BreakingCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BreakingCallback == (FThreadSafeStaticStat<FStat_STAT_BreakingCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BreakingCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakingCallback,*pFVar1,
               L"Breaking Data Generation","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BufferPhysicsResults'' @ 140f51970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BufferPhysicsResults__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BufferPhysicsResults ==
      (FThreadSafeStaticStat<FStat_STAT_BufferPhysicsResults>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BufferPhysicsResults");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferPhysicsResults,*pFVar1,
               L"BufferPhysicsResults","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BufferPhysicsResultsParticleLoop'' @ 140f51a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BufferPhysicsResultsParticleLoop__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BufferPhysicsResultsParticleLoop ==
      (FThreadSafeStaticStat<FStat_STAT_BufferPhysicsResultsParticleLoop>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BufferPhysicsResultsParticleLoop");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferPhysicsResultsParticleLoop,*pFVar1,
               L"Particle Loop","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CacheResultGeomCollection'' @ 140f51a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CacheResultGeomCollection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CacheResultGeomCollection ==
      (FThreadSafeStaticStat<FStat_STAT_CacheResultGeomCollection>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CacheResultGeomCollection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheResultGeomCollection,*pFVar1,
               L"[BufferPhysicsResults] - Geometry Collection","STATGROUP_ChaosWide",
               "STATCAT_Advanced",L"ChaosWide",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CacheResultStaticMesh'' @ 140f51b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CacheResultStaticMesh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CacheResultStaticMesh ==
      (FThreadSafeStaticStat<FStat_STAT_CacheResultStaticMesh>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CacheResultStaticMesh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheResultStaticMesh,*pFVar1,
               L"[BufferPhysicsResults] - StaticMesh","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalcGlobalGCBounds'' @ 140f51bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalcGlobalGCBounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalcGlobalGCBounds == (FThreadSafeStaticStat<FStat_STAT_CalcGlobalGCBounds>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_CalcGlobalGCBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcGlobalGCBounds,*pFVar1,
               L"Calc Global Bounds","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalcGlobalGCMatrices'' @ 140f51c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalcGlobalGCMatrices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalcGlobalGCMatrices ==
      (FThreadSafeStaticStat<FStat_STAT_CalcGlobalGCMatrices>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CalcGlobalGCMatrices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcGlobalGCMatrices,*pFVar1,
               L"Calc Global Matrices","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalcParticleToWorld'' @ 140f51cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalcParticleToWorld__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalcParticleToWorld == (FThreadSafeStaticStat<FStat_STAT_CalcParticleToWorld>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_CalcParticleToWorld");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcParticleToWorld,*pFVar1,
               L"Calc ParticleToWorld","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CaptureDisabledState'' @ 140f51d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CaptureDisabledState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CaptureDisabledState ==
      (FThreadSafeStaticStat<FStat_STAT_CaptureDisabledState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CaptureDisabledState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CaptureDisabledState,*pFVar1,
               L"Capture Disabled State","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CaptureSolverData'' @ 140f51df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CaptureSolverData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CaptureSolverData == (FThreadSafeStaticStat<FStat_STAT_CaptureSolverData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CaptureSolverData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CaptureSolverData,*pFVar1,
               L"Capture Solver Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosTick'' @ 140f51e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosTick == (FThreadSafeStaticStat<FStat_STAT_ChaosTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosTick,*pFVar1,L"Physics Tick",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CollisionContactsCallback'' @ 140f51f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CollisionContactsCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CollisionContactsCallback ==
      (FThreadSafeStaticStat<FStat_STAT_CollisionContactsCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CollisionContactsCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CollisionContactsCallback,*pFVar1,
               L"Collision Data Generation","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_Apply'' @ 140f51fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_Apply__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_Apply == (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_Apply");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Apply,*pFVar1,
               L"Collisions::Apply","STATGROUP_ChaosCollision","STATCAT_Advanced",L"ChaosCollision",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_ApplyPushOut'' @ 140f52030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_ApplyPushOut__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_ApplyPushOut ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_ApplyPushOut");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ApplyPushOut,*pFVar1,
               L"Collisions::ApplyPushOut","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_AssignMidPhases'' @ 140f520c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_AssignMidPhases__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_AssignMidPhases ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_AssignMidPhases>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_AssignMidPhases");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_AssignMidPhases,*pFVar1,
               L"Collisions::AssignMidPhases","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_BroadPhase'' @ 140f52150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_BroadPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_BroadPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_BroadPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_BroadPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_BroadPhase,*pFVar1,
               L"Collisions::MidPhase","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_Detect'' @ 140f521e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_Detect__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_Detect == (FThreadSafeStaticStat<FStat_STAT_Collisions_Detect>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_Detect");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Detect,*pFVar1,
               L"Collisions::Detect","STATGROUP_ChaosCollision","STATCAT_Advanced",L"ChaosCollision"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_Gather'' @ 140f52270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_Gather__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_Gather == (FThreadSafeStaticStat<FStat_STAT_Collisions_Gather>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_Gather");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Gather,*pFVar1,
               L"Collisions::Gather","STATGROUP_ChaosCollision","STATCAT_Advanced",L"ChaosCollision"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_GenerateCollisions'' @ 140f52300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_GenerateCollisions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_GenerateCollisions ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_GenerateCollisions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_GenerateCollisions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_GenerateCollisions,*pFVar1,
               L"Collisions::GenerateCollisions","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_NarrowPhase'' @ 140f52390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_NarrowPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_NarrowPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_NarrowPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_NarrowPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_NarrowPhase,*pFVar1,
               L"Collisions::NarrowPhase","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_ParticlePairBroadPhase'' @ 140f52420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_ParticlePairBroadPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_ParticlePairBroadPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ParticlePairBroadPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_ParticlePairBroadPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ParticlePairBroadPhase,*pFVar1,
               L"Collisions::BroadPhase::ParticlePair","STATGROUP_ChaosCollision","STATCAT_Advanced"
               ,L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_Scatter'' @ 140f524b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_Scatter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_Scatter == (FThreadSafeStaticStat<FStat_STAT_Collisions_Scatter>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_Scatter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Scatter,*pFVar1,
               L"Collisions::Scatter","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_SimplifyConvexes'' @ 140f52540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_SimplifyConvexes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_SimplifyConvexes ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_SimplifyConvexes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_SimplifyConvexes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SimplifyConvexes,*pFVar1,
               L"Collisions::SimplifyConvexes","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Collisions_SpatialBroadPhase'' @ 140f525d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Collisions_SpatialBroadPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Collisions_SpatialBroadPhase ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_SpatialBroadPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Collisions_SpatialBroadPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_SpatialBroadPhase,*pFVar1,
               L"Collisions::BroadPhase::Spatial","STATGROUP_ChaosCollision","STATCAT_Advanced",
               L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ConditionalApplyRewind'' @ 140f52660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ConditionalApplyRewind__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ConditionalApplyRewind ==
      (FThreadSafeStaticStat<FStat_STAT_ConditionalApplyRewind>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ConditionalApplyRewind");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConditionalApplyRewind,*pFVar1,
               L"Conditional Apply Rewind","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateBodies'' @ 140f526f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateBodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateBodies == (FThreadSafeStaticStat<FStat_STAT_CreateBodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateBodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateBodies,*pFVar1,L"Create bodies",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DestroyPendingProxies'' @ 140f52780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DestroyPendingProxies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DestroyPendingProxies ==
      (FThreadSafeStaticStat<FStat_STAT_DestroyPendingProxies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DestroyPendingProxies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DestroyPendingProxies,*pFVar1,
               L"Destroy Pending Proxies","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DisableCollisions'' @ 140f52810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DisableCollisions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DisableCollisions == (FThreadSafeStaticStat<FStat_STAT_DisableCollisions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DisableCollisions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DisableCollisions,*pFVar1,
               L"Disable collisions","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DispatchBreakEvents'' @ 140f528a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DispatchBreakEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DispatchBreakEvents == (FThreadSafeStaticStat<FStat_STAT_DispatchBreakEvents>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_DispatchBreakEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchBreakEvents,*pFVar1,
               L"Dispatch Break Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DispatchCollisionEvents'' @ 140f52930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DispatchCollisionEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DispatchCollisionEvents ==
      (FThreadSafeStaticStat<FStat_STAT_DispatchCollisionEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DispatchCollisionEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchCollisionEvents,*pFVar1,
               L"Dispatch Collision Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DispatchCrumblingEvents'' @ 140f529c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DispatchCrumblingEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DispatchCrumblingEvents ==
      (FThreadSafeStaticStat<FStat_STAT_DispatchCrumblingEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DispatchCrumblingEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchCrumblingEvents,*pFVar1,
               L"Dispatch Crumbling Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DispatchEventNotifies'' @ 140f52a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DispatchEventNotifies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DispatchEventNotifies ==
      (FThreadSafeStaticStat<FStat_STAT_DispatchEventNotifies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DispatchEventNotifies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchEventNotifies,*pFVar1,
               L"Dispatch Event Notifies","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EndFrame'' @ 140f52ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EndFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EndFrame == (FThreadSafeStaticStat<FStat_STAT_EndFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EndFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EndFrame,*pFVar1,L"End Frame",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EventDataGathering'' @ 140f52b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EventDataGathering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EventDataGathering == (FThreadSafeStaticStat<FStat_STAT_EventDataGathering>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_EventDataGathering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventDataGathering,*pFVar1,
               L"Gathering Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EvolutionAndKinematicUpdate'' @ 140f52c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EvolutionAndKinematicUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EvolutionAndKinematicUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_EvolutionAndKinematicUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EvolutionAndKinematicUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvolutionAndKinematicUpdate,*pFVar1,
               L"Evolution/Kinematic update and forces","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FillProducerData'' @ 140f52c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FillProducerData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FillProducerData == (FThreadSafeStaticStat<FStat_STAT_FillProducerData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FillProducerData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FillProducerData,*pFVar1,
               L"Fill Event Producer Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeCallbacks'' @ 140f52d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizeCallbacks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeCallbacks == (FThreadSafeStaticStat<FStat_STAT_FinalizeCallbacks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeCallbacks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizeCallbacks,*pFVar1,
               L"Finalize Sim Callbacks","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizePullData'' @ 140f52db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizePullData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizePullData == (FThreadSafeStaticStat<FStat_STAT_FinalizePullData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizePullData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizePullData,*pFVar1,
               L"Finalize Pull Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FlipBuffersIfRequired'' @ 140f52e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FlipBuffersIfRequired__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FlipBuffersIfRequired ==
      (FThreadSafeStaticStat<FStat_STAT_FlipBuffersIfRequired>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FlipBuffersIfRequired");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlipBuffersIfRequired,*pFVar1,
               L"Flip Event Buffer","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FlipResults'' @ 140f52ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FlipResults__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FlipResults == (FThreadSafeStaticStat<FStat_STAT_FlipResults>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FlipResults");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlipResults,*pFVar1,L"Flip Results",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ForceUpdateField_AngularTorque'' @ 140f52f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ForceUpdateField_AngularTorque__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ForceUpdateField_AngularTorque ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ForceUpdateField_AngularTorque");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_AngularTorque,*pFVar1,
               L"[Field Update] AngularTorque","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ForceUpdateField_LinearForce'' @ 140f52ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ForceUpdateField_LinearForce__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ForceUpdateField_LinearForce ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ForceUpdateField_LinearForce");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_LinearForce,*pFVar1,
               L"[Field Update] LinearForce","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ForceUpdateField_LinearImpulse'' @ 140f53080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ForceUpdateField_LinearImpulse__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ForceUpdateField_LinearImpulse ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearImpulse>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ForceUpdateField_LinearImpulse");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_LinearImpulse,*pFVar1,
               L"[Field Update] Impulse","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ForceUpdateField_Object'' @ 140f53110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ForceUpdateField_Object__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ForceUpdateField_Object ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_Object>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ForceUpdateField_Object");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_Object,*pFVar1,
               L"Field System Object Force Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCCUGlobalMatrices'' @ 140f531a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCCUGlobalMatrices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCCUGlobalMatrices == (FThreadSafeStaticStat<FStat_STAT_GCCUGlobalMatrices>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_GCCUGlobalMatrices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCCUGlobalMatrices,*pFVar1,
               L"Geometry Collection Component CalculateGlobalMatrices","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCCUpdateBounds'' @ 140f53230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCCUpdateBounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCCUpdateBounds == (FThreadSafeStaticStat<FStat_STAT_GCCUpdateBounds>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCCUpdateBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCCUpdateBounds,*pFVar1,
               L"Geometry Collection Component UpdateBounds","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCChangedTransforms'' @ 140f532c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCChangedTransforms__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCChangedTransforms == (FThreadSafeStaticStat<FStat_STAT_GCChangedTransforms>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_GCChangedTransforms");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCChangedTransforms,*pFVar1,
               L"Geometry Collection Changed Transforms","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCFullyDecayedBroadcast'' @ 140f53350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCFullyDecayedBroadcast__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCFullyDecayedBroadcast ==
      (FThreadSafeStaticStat<FStat_STAT_GCFullyDecayedBroadcast>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCFullyDecayedBroadcast");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCFullyDecayedBroadcast,*pFVar1,
               L"Geometry Collection Component FullyDecayed event Broadcast","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCInitDynamicData'' @ 140f533e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCInitDynamicData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCInitDynamicData == (FThreadSafeStaticStat<FStat_STAT_GCInitDynamicData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCInitDynamicData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCInitDynamicData,*pFVar1,
               L"Geometry Collection InitDynamicData","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCOverlap'' @ 140f53470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCOverlap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCOverlap == (FThreadSafeStaticStat<FStat_STAT_GCOverlap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCOverlap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCOverlap,*pFVar1,
               L"Geometry Collection Overlap","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCPostPhysicsSync'' @ 140f53500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCPostPhysicsSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCPostPhysicsSync == (FThreadSafeStaticStat<FStat_STAT_GCPostPhysicsSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCPostPhysicsSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCPostPhysicsSync,*pFVar1,
               L"Geometry Collection Component OnPostPhysicsSync","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCRaycast'' @ 140f53590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCRaycast__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCRaycast == (FThreadSafeStaticStat<FStat_STAT_GCRaycast>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCRaycast");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCRaycast,*pFVar1,
               L"Geometry Collection Raycast","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCReplicatedClusters'' @ 140f53620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCReplicatedClusters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCReplicatedClusters ==
      (FThreadSafeStaticStat<FStat_STAT_GCReplicatedClusters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCReplicatedClusters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCReplicatedClusters,*pFVar1,
               L"Geometry Collection Replicated Clusters","STATGROUP_ChaosCounters",
               "STATCAT_Advanced",L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCReplicatedFractures'' @ 140f536b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCReplicatedFractures__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCReplicatedFractures ==
      (FThreadSafeStaticStat<FStat_STAT_GCReplicatedFractures>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCReplicatedFractures");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCReplicatedFractures,*pFVar1,
               L"Geometry Collection Replicated Fractures","STATGROUP_ChaosCounters",
               "STATCAT_Advanced",L"ChaosCounters",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCSweep'' @ 140f53740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCSweep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCSweep == (FThreadSafeStaticStat<FStat_STAT_GCSweep>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCSweep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCSweep,*pFVar1,
               L"Geometry Collection Sweep","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCTotalTransforms'' @ 140f537d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCTotalTransforms__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCTotalTransforms == (FThreadSafeStaticStat<FStat_STAT_GCTotalTransforms>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCTotalTransforms");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCTotalTransforms,*pFVar1,
               L"Geometry Collection Total Transforms","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCUpdateFilterData'' @ 140f53860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCUpdateFilterData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCUpdateFilterData == (FThreadSafeStaticStat<FStat_STAT_GCUpdateFilterData>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_GCUpdateFilterData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCUpdateFilterData,*pFVar1,
               L"Geoemtry Collection Update Filter Data","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherBreakingEvent'' @ 140f538f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherBreakingEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherBreakingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherBreakingEvent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherBreakingEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherBreakingEvent,*pFVar1,
               L"Gathering Breaking Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherCollisionEvent'' @ 140f53980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherCollisionEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherCollisionEvent ==
      (FThreadSafeStaticStat<FStat_STAT_GatherCollisionEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherCollisionEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherCollisionEvent,*pFVar1,
               L"Gathering Collision Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherCrumblingEvent'' @ 140f53a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherCrumblingEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherCrumblingEvent ==
      (FThreadSafeStaticStat<FStat_STAT_GatherCrumblingEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherCrumblingEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherCrumblingEvent,*pFVar1,
               L"Gathering Crumbling Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherSleepingEvent'' @ 140f53aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherSleepingEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherSleepingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherSleepingEvent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherSleepingEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherSleepingEvent,*pFVar1,
               L"Gathering Sleeping Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherTrailingEvent'' @ 140f53b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherTrailingEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherTrailingEvent == (FThreadSafeStaticStat<FStat_STAT_GatherTrailingEvent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherTrailingEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherTrailingEvent,*pFVar1,
               L"Gathering Trailing Event Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeomBeginFrame'' @ 140f53bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GeomBeginFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeomBeginFrame == (FThreadSafeStaticStat<FStat_STAT_GeomBeginFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GeomBeginFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GeomBeginFrame,*pFVar1,
               L"Geometry Collection Begin Frame","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleSolverCommands'' @ 140f53c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HandleSolverCommands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HandleSolverCommands ==
      (FThreadSafeStaticStat<FStat_STAT_HandleSolverCommands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HandleSolverCommands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleSolverCommands,*pFVar1,
               L"Handle Solver Commands","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f53ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HandleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HandleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_HandleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HandleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleViewParallelForImp,*pFVar1,
               L"HandleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IntegrateSolver'' @ 140f53d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IntegrateSolver__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IntegrateSolver == (FThreadSafeStaticStat<FStat_STAT_IntegrateSolver>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IntegrateSolver");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IntegrateSolver,*pFVar1,
               L"Integrate Solver","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KinematicUpdate'' @ 140f53e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KinematicUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KinematicUpdate == (FThreadSafeStaticStat<FStat_STAT_KinematicUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KinematicUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KinematicUpdate,*pFVar1,
               L"Kinematic Particle Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LockWaits'' @ 140f53e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LockWaits__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LockWaits == (FThreadSafeStaticStat<FStat_STAT_LockWaits>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LockWaits");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LockWaits,*pFVar1,L"Physics Lock Waits",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraUpdateField_Object'' @ 140f53f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraUpdateField_Object__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraUpdateField_Object ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraUpdateField_Object>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraUpdateField_Object");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraUpdateField_Object,*pFVar1,
               L"Field System Object Niagara Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActiveCollisionPointsDedicated'' @ 140f53fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActiveCollisionPointsDedicated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActiveCollisionPointsDedicated ==
      (FThreadSafeStaticStat<FStat_STAT_NumActiveCollisionPointsDedicated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActiveCollisionPointsDedicated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActiveCollisionPointsDedicated,*pFVar1,
               L"NumActiveCollisionPoints","STATGROUP_ChaosDedicated","STATCAT_Advanced",
               L"ChaosDedicated",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActiveConstraintsDedicated'' @ 140f54040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActiveConstraintsDedicated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActiveConstraintsDedicated ==
      (FThreadSafeStaticStat<FStat_STAT_NumActiveConstraintsDedicated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActiveConstraintsDedicated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActiveConstraintsDedicated,*pFVar1,
               L"NumActiveConstraints","STATGROUP_ChaosDedicated","STATCAT_Advanced",
               L"ChaosDedicated",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActiveParticlesDedicated'' @ 140f540d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActiveParticlesDedicated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActiveParticlesDedicated ==
      (FThreadSafeStaticStat<FStat_STAT_NumActiveParticlesDedicated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActiveParticlesDedicated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActiveParticlesDedicated,*pFVar1,
               L"NumActiveParticles","STATGROUP_ChaosDedicated","STATCAT_Advanced",L"ChaosDedicated"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActiveShapesDedicated'' @ 140f54160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActiveShapesDedicated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActiveShapesDedicated ==
      (FThreadSafeStaticStat<FStat_STAT_NumActiveShapesDedicated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActiveShapesDedicated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActiveShapesDedicated,*pFVar1,
               L"NumActiveShapes","STATGROUP_ChaosDedicated","STATCAT_Advanced",L"ChaosDedicated",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField'' @ 140f541f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField == (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField,*pFVar1,
               L"Field Parameter Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_ActivateDisabled'' @ 140f54280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_ActivateDisabled__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_ActivateDisabled ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ActivateDisabled>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_ActivateDisabled");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_ActivateDisabled,*pFVar1,
               L"[Field Update] ActivateDisabled","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_AngularVelocity'' @ 140f54310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_AngularVelocity__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_AngularVelocity ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_AngularVelocity");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_AngularVelocity,*pFVar1,
               L"[Field Update] AngularVelocity","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_CollisionGroup'' @ 140f543a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_CollisionGroup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_CollisionGroup ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_CollisionGroup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_CollisionGroup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_CollisionGroup,*pFVar1,
               L"[Field Update] CollisionGroup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_DisableThreshold'' @ 140f54430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_DisableThreshold__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_DisableThreshold ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_DisableThreshold");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_DisableThreshold,*pFVar1,
               L"[Field Update] DisableThreshold","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_DynamicConstraint'' @ 140f544c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_DynamicConstraint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_DynamicConstraint ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicConstraint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_DynamicConstraint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_DynamicConstraint,*pFVar1
               ,L"[Field Update] DynamicConstraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_DynamicState'' @ 140f54550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_DynamicState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_DynamicState ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_DynamicState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_DynamicState,*pFVar1,
               L"[Field Update] DynamicState","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_ExternalClusterStrain'' @ 140f545e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_ExternalClusterStrain__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_ExternalClusterStrain ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_ExternalClusterStrain");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_ExternalClusterStrain,
               *pFVar1,L"[Field Update] ExternalClusterStrain","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_InternalClusterStrain'' @ 140f54670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_InternalClusterStrain__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_InternalClusterStrain ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_InternalClusterStrain");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_InternalClusterStrain,
               *pFVar1,L"[Field Update] InternalClusterStrain","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_Kill'' @ 140f54700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_Kill__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_Kill ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_Kill");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_Kill,*pFVar1,
               L"[Field Update] Kill","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_LinearVelocity'' @ 140f54790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_LinearVelocity__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_LinearVelocity ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_LinearVelocity");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_LinearVelocity,*pFVar1,
               L"[Field Update] LinearVelocity","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_Object'' @ 140f54820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_Object__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_Object ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Object>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_Object");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_Object,*pFVar1,
               L"Field System Object Parameter Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_PositionAnimated'' @ 140f548b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_PositionAnimated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_PositionAnimated ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_PositionAnimated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_PositionAnimated,*pFVar1,
               L"[Field Update] PositionAnimated","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_PositionStatic'' @ 140f54940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_PositionStatic__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_PositionStatic ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionStatic>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_PositionStatic");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_PositionStatic,*pFVar1,
               L"[Field Update] PositionStatic","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_PositionTarget'' @ 140f549d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_PositionTarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_PositionTarget ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_PositionTarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_PositionTarget,*pFVar1,
               L"[Field Update] PositionTarget","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateField_SleepingThreshold'' @ 140f54a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateField_SleepingThreshold__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateField_SleepingThreshold ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateField_SleepingThreshold");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_SleepingThreshold,*pFVar1
               ,L"[Field Update] SleepingThreshold","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParamUpdateObject'' @ 140f54af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParamUpdateObject__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParamUpdateObject == (FThreadSafeStaticStat<FStat_STAT_ParamUpdateObject>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParamUpdateObject");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateObject,*pFVar1,
               L"Object Parameter Update","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f54b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleViewParallelForImp,*pFVar1,
               L"ParticleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f54c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesParallelFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesParallelFor,*pFVar1,
               L"ParticlesParallelFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f54ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSequentialFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSequentialFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesSequentialFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSequentialFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSequentialFor,*pFVar1,
               L"ParticlesSequentialFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysCommands'' @ 140f54d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysCommands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysCommands == (FThreadSafeStaticStat<FStat_STAT_PhysCommands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysCommands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysCommands,*pFVar1,
               L"Handle Physics Commands","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsAdvance'' @ 140f54dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsAdvance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsAdvance == (FThreadSafeStaticStat<FStat_STAT_PhysicsAdvance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsAdvance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsAdvance,*pFVar1,L"Physics Advance",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsDedicatedStats'' @ 140f54e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsDedicatedStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsDedicatedStats ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsDedicatedStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsDedicatedStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsDedicatedStats,*pFVar1,
               L"PhysicsDedicatedStats","STATGROUP_ChaosDedicated","STATCAT_Advanced",
               L"ChaosDedicated",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsStatUpdate'' @ 140f54ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsStatUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsStatUpdate == (FThreadSafeStaticStat<FStat_STAT_PhysicsStatUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsStatUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsStatUpdate,*pFVar1,
               L"Physics Thread Stat Update","STATGROUP_ChaosThread","STATCAT_Advanced",
               L"ChaosThread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsThreadFps'' @ 140f54f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsThreadFps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsThreadFps == (FThreadSafeStaticStat<FStat_STAT_PhysicsThreadFps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsThreadFps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsThreadFps,*pFVar1,
               L"Physics Thread FPS Actual","STATGROUP_ChaosThread","STATCAT_Advanced",
               L"ChaosThread",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsThreadFpsEff'' @ 140f55000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsThreadFpsEff__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsThreadFpsEff == (FThreadSafeStaticStat<FStat_STAT_PhysicsThreadFpsEff>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsThreadFpsEff");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsThreadFpsEff,*pFVar1,
               L"Physics Thread FPS Effective","STATGROUP_ChaosThread","STATCAT_Advanced",
               L"ChaosThread",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsThreadTime'' @ 140f55090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsThreadTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsThreadTime == (FThreadSafeStaticStat<FStat_STAT_PhysicsThreadTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsThreadTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsThreadTime,*pFVar1,
               L"Physics Thread Time Actual (ms)","STATGROUP_ChaosThread","STATCAT_Advanced",
               L"ChaosThread",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsThreadTimeEff'' @ 140f55120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsThreadTimeEff__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsThreadTimeEff ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsThreadTimeEff>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsThreadTimeEff");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsThreadTimeEff,*pFVar1,
               L"Physics Thread Time Effective (ms)","STATGROUP_ChaosThread","STATCAT_Advanced",
               L"ChaosThread",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsThreadTotalTime'' @ 140f551b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsThreadTotalTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsThreadTotalTime ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsThreadTotalTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsThreadTotalTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsThreadTotalTime,*pFVar1,
               L"PhysicsThreadTotalTime(ms)","STATGROUP_ChaosDedicated","STATCAT_Advanced",
               L"ChaosDedicated",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProcessDeferredCreatePhysicsState'' @ 140f55240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProcessDeferredCreatePhysicsState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProcessDeferredCreatePhysicsState ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessDeferredCreatePhysicsState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProcessDeferredCreatePhysicsState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessDeferredCreatePhysicsState,*pFVar1,
               L"ProcessDeferredCreatePhysicsState","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResetClusteringEvents'' @ 140f552d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResetClusteringEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResetClusteringEvents ==
      (FThreadSafeStaticStat<FStat_STAT_ResetClusteringEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ResetClusteringEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetClusteringEvents,*pFVar1,
               L"Reset Clustering Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResetCollisionRule'' @ 140f55360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResetCollisionRule__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResetCollisionRule == (FThreadSafeStaticStat<FStat_STAT_ResetCollisionRule>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ResetCollisionRule");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetCollisionRule,*pFVar1,
               L"Reset Collision Rule","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResetMarshallingData'' @ 140f553f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResetMarshallingData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResetMarshallingData ==
      (FThreadSafeStaticStat<FStat_STAT_ResetMarshallingData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ResetMarshallingData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetMarshallingData,*pFVar1,
               L"Reset Marshalling Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RewindFinishFrame'' @ 140f55480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RewindFinishFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RewindFinishFrame == (FThreadSafeStaticStat<FStat_STAT_RewindFinishFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RewindFinishFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RewindFinishFrame,*pFVar1,
               L"Rewind Finish Frame","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Scene_EndFrame'' @ 140f55510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Scene_EndFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Scene_EndFrame == (FThreadSafeStaticStat<FStat_STAT_Scene_EndFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Scene_EndFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Scene_EndFrame,*pFVar1,
               L"[Scene] - EndFrame","STATGROUP_ChaosEngine","STATCAT_Advanced",L"ChaosEngine",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Scene_StartFrame'' @ 140f555a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Scene_StartFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Scene_StartFrame == (FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Scene_StartFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Scene_StartFrame,*pFVar1,
               L"[Scene] - StartFrame","STATGROUP_ChaosEngine","STATCAT_Advanced",L"ChaosEngine",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkelMeshUpdateAnim'' @ 140f55630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkelMeshUpdateAnim__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkelMeshUpdateAnim == (FThreadSafeStaticStat<FStat_STAT_SkelMeshUpdateAnim>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SkelMeshUpdateAnim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelMeshUpdateAnim,*pFVar1,
               L"Skeletal Mesh Update Anim","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SolverAdvance'' @ 140f556c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SolverAdvance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SolverAdvance == (FThreadSafeStaticStat<FStat_STAT_SolverAdvance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SolverAdvance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SolverAdvance,*pFVar1,L"Solver Advance",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SqUpdateMaterials'' @ 140f55750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SqUpdateMaterials__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SqUpdateMaterials == (FThreadSafeStaticStat<FStat_STAT_SqUpdateMaterials>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SqUpdateMaterials");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SqUpdateMaterials,*pFVar1,
               L"SQ - Update Materials","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SyncEvents_GameThread'' @ 140f557e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SyncEvents_GameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SyncEvents_GameThread ==
      (FThreadSafeStaticStat<FStat_STAT_SyncEvents_GameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SyncEvents_GameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SyncEvents_GameThread,*pFVar1,
               L"Sync Events - Game Thread","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SyncProxies'' @ 140f55870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SyncProxies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SyncProxies == (FThreadSafeStaticStat<FStat_STAT_SyncProxies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SyncProxies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SyncProxies,*pFVar1,
               L"Sync Physics Proxies","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TaskCommands'' @ 140f55900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TaskCommands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TaskCommands == (FThreadSafeStaticStat<FStat_STAT_TaskCommands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TaskCommands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskCommands,*pFVar1,
               L"Handle Task Commands","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailingCallback'' @ 140f55990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailingCallback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailingCallback == (FThreadSafeStaticStat<FStat_STAT_TrailingCallback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailingCallback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailingCallback,*pFVar1,
               L"Trailing Data Generation","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometryCollectionViews'' @ 140f55a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateGeometryCollectionViews__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometryCollectionViews ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateGeometryCollectionViews>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateGeometryCollectionViews");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometryCollectionViews,*pFVar1,
               L"Update GC Views","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateParams'' @ 140f55ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateParams__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateParams == (FThreadSafeStaticStat<FStat_STAT_UpdateParams>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateParams");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateParams,*pFVar1,L"Parameter Update",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateReverseMapping'' @ 140f55b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateReverseMapping__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateReverseMapping ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateReverseMapping>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateReverseMapping");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateReverseMapping,*pFVar1,
               L"Update Reverse Mapping","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WaitGlobalCommands'' @ 140f55bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WaitGlobalCommands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WaitGlobalCommands == (FThreadSafeStaticStat<FStat_STAT_WaitGlobalCommands>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_WaitGlobalCommands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitGlobalCommands,*pFVar1,
               L"Wait for previous global commands","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UManagedArrayLogging'' @ 140f55c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__UManagedArrayLogging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&UManagedArrayLogging,L"UManagedArrayLogging",NoLogging,All);
  atexit(_dynamic_atexit_destructor_for__UManagedArrayLogging__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h__Script_Chaos_4139424740'' @ 140f55ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h__Script_Chaos_4139424740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h__Script_Chaos_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h__Script_Chaos_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h__Script_Chaos_3929162418'' @ 140f55cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h__Script_Chaos_3929162418__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h__Script_Chaos_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h__Script_Chaos_314150383'' @ 140f55d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h__Script_Chaos_314150383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_SoftsSimulationSpace_h__Script_Chaos_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h__Script_Chaos_2886059137'' @ 140f55d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h__Script_Chaos_2886059137__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h__Script_Chaos_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h__Script_Chaos_Statics
             ::EnumInfo,0xf);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h__Script_Chaos_3501992437'' @ 140f55de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h__Script_Chaos_3501992437__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h__Script_Chaos_Statics
             ::EnumInfo,7);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h__Script_Chaos_1603098139'' @ 140f55e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h__Script_Chaos_1603098139__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h__Script_Chaos_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Chaos'' @ 140f55e80

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Chaos__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7d4544fe;
  local_res8[0].DeclarationsHash = 0xd6d1521f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Chaos,L"/Script/Chaos",
             &Z_Registration_Info_UPackage__Script_Chaos,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Chaos'' @ 140f55ec0

void __cdecl _dynamic_initializer_for___GCsvCategory_Chaos__(void)

{
  FString::operator=(&_GCsvCategory_Chaos.Name,L"Chaos");
  _GCsvCategory_Chaos.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Chaos.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Chaos__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_PhysicsCounters'' @ 140f55f10

void __cdecl _dynamic_initializer_for___GCsvCategory_PhysicsCounters__(void)

{
  FString::operator=(&_GCsvCategory_PhysicsCounters.Name,L"PhysicsCounters");
  _GCsvCategory_PhysicsCounters.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_PhysicsCounters.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_PhysicsCounters__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_PhysicsVerbose'' @ 140f55f60

void __cdecl _dynamic_initializer_for___GCsvCategory_PhysicsVerbose__(void)

{
  FString::operator=(&_GCsvCategory_PhysicsVerbose.Name,L"PhysicsVerbose");
  _GCsvCategory_PhysicsVerbose.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_PhysicsVerbose.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_PhysicsVerbose__);
  return;
}

// `scalar_deleting_destructor' @ 1436ee6f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<UE::Math::TVector<float>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<UE::Math::TVector<float>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<UE::Math::TVector<float>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<UE::Math::TVector<float>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ee750

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<FLinearColor>,SharedPointerInternals::DefaultDeleter<TManagedArray<FLinearColor>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<FLinearColor>,SharedPointerInternals::DefaultDeleter<TManagedArray<FLinearColor>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UPackage__Script_Chaos @ 1436ee790

UPackage * __cdecl Z_Construct_UPackage__Script_Chaos(void)

{
  if (Z_Registration_Info_UPackage__Script_Chaos.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Chaos.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Chaos.OuterSingleton;
}

// Z_Construct_UEnum_Chaos_EClusterUnionMethod @ 1436ee7e0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EClusterUnionMethod(void)

{
  if (Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosSolverDestructionSettings @ 1436ee820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosSolverDestructionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosSolverDestructionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosSolverDestructionSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosSolverDestructionSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosSolverDestructionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosSolverDestructionSettings.InnerSingleton;
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

// EClusterUnionMethod_StaticEnum @ 1436ee8a0

UEnum * __cdecl EClusterUnionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EClusterUnionMethod,(UObject *)pUVar1,
                       L"EClusterUnionMethod");
  }
  return Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton;
}

// NewProp_bOptimizeForRuntimeMemory_SetBit @ 1436ee910

void __cdecl
Z_Construct_UScriptStruct_FChaosSolverDestructionSettings_Statics::
NewProp_bOptimizeForRuntimeMemory_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1436ee9c0

void * __cdecl Z_Construct_UScriptStruct_FChaosSolverDestructionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosSolverDestructionSettings,&UE::CoreUObject::Private::Construct<FChaosSolverDestructionSettings>,&UE::CoreUObject::Private::ConstructForTests<FChaosSolverDestructionSettings>,&UE::CoreUObject::Private::Destruct<FChaosSolverDestructionSettings>,&UE::CoreUObject::Private::Copy<FChaosSolverDestructionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bGenerateCollisionData_SetBit @ 1436eea00

void __cdecl
Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewProp_bGenerateBreakData_SetBit @ 1436eea10

void __cdecl
Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bGenerateTrailingData_SetBit @ 1436eea20

void __cdecl
Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// NewProp_bGenerateContactGraph_SetBit @ 1436eea30

void __cdecl
Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewStructOps @ 1436eea40

void * __cdecl Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x84;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChaosSolverConfiguration,&UE::CoreUObject::Private::Construct<FChaosSolverConfiguration>,&UE::CoreUObject::Private::ConstructForTests<FChaosSolverConfiguration>,&UE::CoreUObject::Private::Destruct<FChaosSolverConfiguration>,&UE::CoreUObject::Private::Copy<FChaosSolverConfiguration>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436eec00

void * __thiscall
FManagedArrayBase::_scalar_deleting_destructor_(FManagedArrayBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ChaosDeformableSimSpace_StaticEnum @ 1436eec40

UEnum * __cdecl ChaosDeformableSimSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace,(UObject *)pUVar1,
                       L"ChaosDeformableSimSpace");
  }
  return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436ef970

void * __thiscall
TManagedArrayBase<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TManagedArrayBase<UE::Math::TVector<float>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436ef9d0

void * __thiscall
TManagedArray<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TManagedArray<UE::Math::TVector<float>_> *this,uint param_1)

{
  *(undefined ***)this = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f06a0

void * __thiscall
TManagedArrayBase<FLinearColor>::_scalar_deleting_destructor_
          (TManagedArrayBase<FLinearColor> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TManagedArrayBase_UFLinearColor____6B_;
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f0740

void * __thiscall
TManagedArray<FLinearColor>::_scalar_deleting_destructor_
          (TManagedArray<FLinearColor> *this,uint param_1)

{
  *(undefined ***)this = &___7__TManagedArrayBase_UFLinearColor____6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FManagedArrayBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f07a0

void * __thiscall
FFieldCollection::_scalar_deleting_destructor_(FFieldCollection *this,uint param_1)

{
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f08b0

void * __thiscall
IChaosSettingsProvider::_scalar_deleting_destructor_(IChaosSettingsProvider *this,uint param_1)

{
  *this = (IChaosSettingsProvider)&___7IChaosSettingsProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f08f0

void * __thiscall
Chaos::FInternalDefaultSettings::_scalar_deleting_destructor_
          (FInternalDefaultSettings *this,uint param_1)

{
  *this = (FInternalDefaultSettings)&___7IChaosSettingsProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ESetMaskConditionType_StaticEnum @ 1436f0930

UEnum * __cdecl ESetMaskConditionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ESetMaskConditionType,(UObject *)pUVar1,
                       L"ESetMaskConditionType");
  }
  return Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton;
}

// EWaveFunctionType_StaticEnum @ 1436f0970

UEnum * __cdecl EWaveFunctionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EWaveFunctionType,(UObject *)pUVar1,
                       L"EWaveFunctionType");
  }
  return Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton;
}

// EFieldOperationType_StaticEnum @ 1436f09b0

UEnum * __cdecl EFieldOperationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOperationType,(UObject *)pUVar1,
                       L"EFieldOperationType");
  }
  return Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton;
}

// EFieldCullingOperationType_StaticEnum @ 1436f09f0

UEnum * __cdecl EFieldCullingOperationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldCullingOperationType,(UObject *)pUVar1,
                       L"EFieldCullingOperationType");
  }
  return Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton;
}

// EFieldResolutionType_StaticEnum @ 1436f0a30

UEnum * __cdecl EFieldResolutionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldResolutionType,(UObject *)pUVar1,
                       L"EFieldResolutionType");
  }
  return Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton;
}

// EFieldFilterType_StaticEnum @ 1436f0a70

UEnum * __cdecl EFieldFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFilterType,(UObject *)pUVar1,
                       L"EFieldFilterType");
  }
  return Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton;
}

// EFieldObjectType_StaticEnum @ 1436f0ab0

UEnum * __cdecl EFieldObjectType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldObjectType,(UObject *)pUVar1,
                       L"EFieldObjectType");
  }
  return Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton;
}

// EFieldPositionType_StaticEnum @ 1436f0af0

UEnum * __cdecl EFieldPositionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPositionType,(UObject *)pUVar1,
                       L"EFieldPositionType");
  }
  return Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton;
}

// EFieldFalloffType_StaticEnum @ 1436f0b30

UEnum * __cdecl EFieldFalloffType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFalloffType,(UObject *)pUVar1,
                       L"EFieldFalloffType");
  }
  return Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton;
}

// EFieldPhysicsType_StaticEnum @ 1436f0b70

UEnum * __cdecl EFieldPhysicsType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsType,(UObject *)pUVar1,
                       L"EFieldPhysicsType");
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton;
}

// EFieldVectorType_StaticEnum @ 1436f0bb0

UEnum * __cdecl EFieldVectorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldVectorType,(UObject *)pUVar1,
                       L"EFieldVectorType");
  }
  return Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton;
}

// EFieldScalarType_StaticEnum @ 1436f0bf0

UEnum * __cdecl EFieldScalarType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldScalarType,(UObject *)pUVar1,
                       L"EFieldScalarType");
  }
  return Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton;
}

// EFieldIntegerType_StaticEnum @ 1436f0c30

UEnum * __cdecl EFieldIntegerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldIntegerType,(UObject *)pUVar1,
                       L"EFieldIntegerType");
  }
  return Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton;
}

// EFieldOutputType_StaticEnum @ 1436f0c70

UEnum * __cdecl EFieldOutputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOutputType,(UObject *)pUVar1,
                       L"EFieldOutputType");
  }
  return Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton;
}

// EFieldPhysicsDefaultFields_StaticEnum @ 1436f0d00

UEnum * __cdecl EFieldPhysicsDefaultFields_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields,(UObject *)pUVar1,
                       L"EFieldPhysicsDefaultFields");
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton;
}

// NewStructOps @ 1436f0d40

void * __cdecl Z_Construct_UScriptStruct_FFieldCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFieldCollection,&UE::CoreUObject::Private::Construct<FFieldCollection>,&UE::CoreUObject::Private::ConstructForTests<FFieldCollection>,&UE::CoreUObject::Private::Destruct<FFieldCollection>,&UE::CoreUObject::Private::Copy<FFieldCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1436f0e50

void * __thiscall
FChaosEngineModule::_scalar_deleting_destructor_(FChaosEngineModule *this,uint param_1)

{
  *this = (FChaosEngineModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ECollisionTypeEnum_StaticEnum @ 1436f0e90

UEnum * __cdecl ECollisionTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ECollisionTypeEnum,(UObject *)pUVar1,
                       L"ECollisionTypeEnum");
  }
  return Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton;
}

// EImplicitTypeEnum_StaticEnum @ 1436f0ed0

UEnum * __cdecl EImplicitTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EImplicitTypeEnum,(UObject *)pUVar1,
                       L"EImplicitTypeEnum");
  }
  return Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton;
}

// EObjectStateTypeEnum_StaticEnum @ 1436f0f10

UEnum * __cdecl EObjectStateTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum,(UObject *)pUVar1,
                       L"EObjectStateTypeEnum");
  }
  return Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton;
}

// EGeometryCollectionPhysicsTypeEnum_StaticEnum @ 1436f0f50

UEnum * __cdecl EGeometryCollectionPhysicsTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum,(UObject *)pUVar1,
                       L"EGeometryCollectionPhysicsTypeEnum");
  }
  return Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton;
}

// EInitialVelocityTypeEnum_StaticEnum @ 1436f0f90

UEnum * __cdecl EInitialVelocityTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum,(UObject *)pUVar1,
                       L"EInitialVelocityTypeEnum");
  }
  return Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton;
}

// EEmissionPatternTypeEnum_StaticEnum @ 1436f0fd0

UEnum * __cdecl EEmissionPatternTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum,(UObject *)pUVar1,
                       L"EEmissionPatternTypeEnum");
  }
  return Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton;
}

// EDamageModelTypeEnum_StaticEnum @ 1436f1010

UEnum * __cdecl EDamageModelTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EDamageModelTypeEnum,(UObject *)pUVar1,
                       L"EDamageModelTypeEnum");
  }
  return Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton;
}

// EChaosSolverTickMode_StaticEnum @ 1436f1050

UEnum * __cdecl EChaosSolverTickMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSolverTickMode,(UObject *)pUVar1,
                       L"EChaosSolverTickMode");
  }
  return Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton;
}

// EChaosThreadingMode_StaticEnum @ 1436f1090

UEnum * __cdecl EChaosThreadingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosThreadingMode,(UObject *)pUVar1,
                       L"EChaosThreadingMode");
  }
  return Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton;
}

// EChaosBufferMode_StaticEnum @ 1436f10d0

UEnum * __cdecl EChaosBufferMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosBufferMode,(UObject *)pUVar1,
                       L"EChaosBufferMode");
  }
  return Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton;
}

// EChaosSoftsSimulationSpace_StaticEnum @ 1436f1110

UEnum * __cdecl EChaosSoftsSimulationSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace,(UObject *)pUVar1,
                       L"EChaosSoftsSimulationSpace");
  }
  return Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton;
}

// EChaosSoftsLocalDampingSpace_StaticEnum @ 1436f11d0

UEnum * __cdecl EChaosSoftsLocalDampingSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSoftsLocalDampingSpace,(UObject *)pUVar1,
                       L"EChaosSoftsLocalDampingSpace");
  }
  return Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton;
}

// TVector<float>,TSizedDefaultAllocator<32>_> @ 1436f1310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FChaosArchive * __cdecl
Chaos::operator<<<UE::Math::TVector<float>_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FChaosArchive *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint local_res8 [2];
  
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0xc,(longlong)param_2->ArrayMax * 0xc);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = param_2->ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  if (param_2->ArrayMax < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_res8[0],&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax)
    ;
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res8[0],Default);
  uVar9 = 0;
  if (0 < (int)local_res8[0]) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar5)();
        return pFVar8;
      }
      pFVar10 = (param_2->AllocatorInstance).Data + lVar11;
      puVar3 = *(undefined4 **)param_1->_padding_;
      if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar10);
        }
      }
      else {
        *(undefined4 *)pFVar10 = *puVar3;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar1 = pFVar10 + 4;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar1);
        }
      }
      else {
        *(uint *)pFVar1 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar10 = pFVar10 + 8;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar10);
        }
      }
      else {
        *(uint *)pFVar10 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar9 < (int)local_res8[0]);
  }
  return param_1;
}

// operator<<<FLinearColor,TSizedDefaultAllocator<32>_> @ 1436f1540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FChaosArchive * __cdecl
Chaos::operator<<<FLinearColor,TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FChaosArchive *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint local_res8 [2];
  
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 4,(longlong)param_2->ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = param_2->ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  if (param_2->ArrayMax < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_res8[0],&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax
              );
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_res8[0],Default);
  uVar9 = 0;
  if (0 < (int)local_res8[0]) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar5)();
        return pFVar8;
      }
      pFVar10 = (param_2->AllocatorInstance).Data + lVar11;
      puVar3 = *(undefined4 **)param_1->_padding_;
      if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar10);
        }
      }
      else {
        *(undefined4 *)pFVar10 = *puVar3;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar1 = pFVar10 + 4;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar1);
        }
      }
      else {
        *(uint *)pFVar1 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar1 = pFVar10 + 8;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar1);
        }
      }
      else {
        *(uint *)pFVar1 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar10 = pFVar10 + 0xc;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar10);
        }
      }
      else {
        *(uint *)pFVar10 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < (int)local_res8[0]);
  }
  return param_1;
}

// ConstructItems<Chaos::FChaosPhysicsMaterialMask,Chaos::FChaosPhysicsMaterialMask,int> @ 1436f2360

void __cdecl
ConstructItems<Chaos::FChaosPhysicsMaterialMask,Chaos::FChaosPhysicsMaterialMask,int>
          (void *param_1,FChaosPhysicsMaterialMask *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x14);
    piVar5 = &param_2->SizeY;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)piVar5) =
           ((FChaosPhysicsMaterialMask *)(piVar5 + -1))->SizeX;
      piVar4[-4] = *piVar5;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar5[3];
      _Src = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(piVar5 + 1))->AllocatorInstance)
             .Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar1,iVar3,piVar4);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 2);
      }
      piVar4[1] = piVar5[5];
      piVar4[2] = piVar5[6];
      piVar2 = piVar5 + 7;
      piVar5 = piVar5 + 10;
      piVar4[3] = *piVar2;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CopyRangeHelper<UE::Math::TVector<float>_> @ 1436f2f10

void __cdecl
CopyRangeHelper<UE::Math::TVector<float>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArrayBase<UE::Math::TVector<float>_> *param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar9 = (ulonglong)param_3;
  iVar7 = (**(code **)(param_2->_padding_ + 0x60))(param_2);
  if (param_3 < iVar7) {
    lVar10 = (longlong)(param_3 + param_5) * 0xc;
    lVar12 = uVar9 * 0xc;
    do {
      uVar5 = (uint)uVar9;
      uVar11 = uVar5 + param_5;
      if (param_1->ArrayNum <= (int)uVar11) {
        return;
      }
      if (param_4 <= (int)uVar5) {
        return;
      }
      uVar8 = 0;
      if ((int)uVar5 < (param_2->Array).ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->Array).AllocatorInstance.Data;
      uVar1 = *(undefined8 *)(pFVar3 + lVar12);
      uVar2 = *(undefined4 *)(pFVar3 + lVar12 + 8);
      uVar8 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar9 = (ulonglong)(uVar5 + 1);
      lVar12 = lVar12 + 0xc;
      *(undefined8 *)(pFVar3 + lVar10) = uVar1;
      *(undefined4 *)(pFVar3 + lVar10 + 8) = uVar2;
      lVar10 = lVar10 + 0xc;
      iVar7 = (**(code **)(param_2->_padding_ + 0x60))(param_2);
    } while ((int)(uVar5 + 1) < iVar7);
  }
  return;
}

// CopyRangeHelper<FLinearColor> @ 1436f3090

void __cdecl
CopyRangeHelper<FLinearColor>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArrayBase<FLinearColor> *param_2,int param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar11 = (ulonglong)param_3;
  iVar9 = (**(code **)(param_2->_padding_ + 0x60))(param_2);
  if (param_3 < iVar9) {
    lVar12 = (longlong)(param_3 + param_5) << 4;
    lVar14 = uVar11 << 4;
    do {
      uVar3 = (uint)uVar11;
      uVar13 = uVar3 + param_5;
      if (param_1->ArrayNum <= (int)uVar13) {
        return;
      }
      if (param_4 <= (int)uVar3) {
        return;
      }
      uVar10 = 0;
      if ((int)uVar3 < (param_2->Array).ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->Array).AllocatorInstance.Data + lVar14;
      uVar4 = *(undefined4 *)pFVar1;
      uVar5 = *(undefined4 *)(pFVar1 + 4);
      uVar6 = *(undefined4 *)(pFVar1 + 8);
      uVar7 = *(undefined4 *)(pFVar1 + 0xc);
      uVar10 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (ulonglong)(uVar3 + 1);
      lVar14 = lVar14 + 0x10;
      pFVar1 = (param_1->AllocatorInstance).Data + lVar12;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      lVar12 = lVar12 + 0x10;
      iVar9 = (**(code **)(param_2->_padding_ + 0x60))(param_2);
    } while ((int)(uVar3 + 1) < iVar9);
  }
  return;
}

// CopyStaticArray<int,int,2> @ 1436f31f0

void __cdecl
Chaos::VisualDebugger::Utils::CopyStaticArray<int,int,2>(int (*param_1) [2],int (*param_2) [2])

{
  *param_2 = *param_1;
  return;
}

// DestructItems<Chaos::FLatentDrawCommand,int> @ 1436f3220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl DestructItems<Chaos::FLatentDrawCommand,int>(FLatentDrawCommand *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Text;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0x1b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,int> @ 1436f3270

void __cdecl
DestructItems<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,int>
          (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int> @ 1436f32c0

void __cdecl
DestructItems<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int>
          (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>,int> @ 1436f3300

void __cdecl
DestructItems<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>,int>
          (TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnqueueCommandImmediate<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>_> @ 1436f3780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
EnqueueCommandImmediate<_FChaosSolversModule::OnCreateMaterialMask_::__l9::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  FSimCallbackCommandObject *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_64 = 0;
  if (((!CVars::bEnableAsyncInitBody) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_58 = (FSimCallbackCommandObject *)0x0;
    puVar4 = FMemory::Malloc(0x40,8);
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::`9'::<lambda_1>,1,1>
               ::_vftable_;
    *(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)(puVar4 + 1) =
         (param_1->InHandle).InnerHandle;
    *(int *)(puVar4 + 2) = (param_1->MaterialMaskCopy).SizeX;
    *(int *)((longlong)puVar4 + 0x14) = (param_1->MaterialMaskCopy).SizeY;
    puVar4[3] = 0;
    puVar4[3] = (param_1->MaterialMaskCopy).MaskData.AllocatorInstance.Data;
    (param_1->MaterialMaskCopy).MaskData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar4 + 4) = (param_1->MaterialMaskCopy).MaskData.ArrayNum;
    *(int *)((longlong)puVar4 + 0x24) = (param_1->MaterialMaskCopy).MaskData.ArrayMax;
    (param_1->MaterialMaskCopy).MaskData.ArrayNum = 0;
    (param_1->MaterialMaskCopy).MaskData.ArrayMax = 0;
    *(int *)(puVar4 + 5) = (param_1->MaterialMaskCopy).UVChannelIndex;
    *(int *)((longlong)puVar4 + 0x2c) = (param_1->MaterialMaskCopy).AddressX;
    *(int *)(puVar4 + 6) = (param_1->MaterialMaskCopy).AddressY;
    puVar4[7] = param_1->Solver;
    if ((THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)(puVar4 + 1) !=
        (THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)0x0) {
      local_58 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar3->Func = local_58;
    *(undefined8 **)&(pFVar3->Func).field_0x28 = puVar4;
    local_30 = (longlong *)0x0;
    *(longlong *)&(pFVar3->Func).field_0x10 = local_48;
    *(undefined8 *)&(pFVar3->Func).field_0x18 = uStack_40;
    *(undefined8 *)&(pFVar3->Func).field_0x20 = local_38;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_58 = pFVar6;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar3;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) && (local_58 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar7);
  return;
}

// EnqueueCommandImmediate<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>_> @ 1436f3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
EnqueueCommandImmediate<_FChaosSolversModule::OnUpdateMaterialMask_::__l9::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  FSimCallbackCommandObject *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_64 = 0;
  if (((!CVars::bEnableAsyncInitBody) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_58 = (FSimCallbackCommandObject *)0x0;
    puVar4 = FMemory::Malloc(0x40,8);
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::`9'::<lambda_1>,1,1>
               ::_vftable_;
    *(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)(puVar4 + 1) =
         (param_1->InHandle).InnerHandle;
    *(int *)(puVar4 + 2) = (param_1->MaterialMaskCopy).SizeX;
    *(int *)((longlong)puVar4 + 0x14) = (param_1->MaterialMaskCopy).SizeY;
    puVar4[3] = 0;
    puVar4[3] = (param_1->MaterialMaskCopy).MaskData.AllocatorInstance.Data;
    (param_1->MaterialMaskCopy).MaskData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar4 + 4) = (param_1->MaterialMaskCopy).MaskData.ArrayNum;
    *(int *)((longlong)puVar4 + 0x24) = (param_1->MaterialMaskCopy).MaskData.ArrayMax;
    (param_1->MaterialMaskCopy).MaskData.ArrayNum = 0;
    (param_1->MaterialMaskCopy).MaskData.ArrayMax = 0;
    *(int *)(puVar4 + 5) = (param_1->MaterialMaskCopy).UVChannelIndex;
    *(int *)((longlong)puVar4 + 0x2c) = (param_1->MaterialMaskCopy).AddressX;
    *(int *)(puVar4 + 6) = (param_1->MaterialMaskCopy).AddressY;
    puVar4[7] = param_1->Solver;
    if ((THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)(puVar4 + 1) !=
        (THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)0x0) {
      local_58 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar3->Func = local_58;
    *(undefined8 **)&(pFVar3->Func).field_0x28 = puVar4;
    local_30 = (longlong *)0x0;
    *(longlong *)&(pFVar3->Func).field_0x10 = local_48;
    *(undefined8 *)&(pFVar3->Func).field_0x18 = uStack_40;
    *(undefined8 *)&(pFVar3->Func).field_0x20 = local_38;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_58 = pFVar6;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar3;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) && (local_58 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar7);
  return;
}

// GetUniqueIdx<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>_> @ 1436f3d90

FUniqueIdx __cdecl
Chaos::GetUniqueIdx<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>_>
          (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong in_RDX;
  
  iVar3 = *(int *)(in_RDX + 0x10);
  *(int *)&(param_1->Payload).ExternalGeometryParticle = iVar3;
  if (iVar3 == -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FUniqueIdx)iVar3;
    }
  }
  if (*(int *)&(param_1->Payload).ExternalGeometryParticle == -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FUniqueIdx)iVar3;
    }
  }
  return (FUniqueIdx)(int)param_1;
}

// GetUniqueIdx<Chaos::FAccelerationStructureHandle> @ 1436f3e20

FUniqueIdx __cdecl
Chaos::GetUniqueIdx<Chaos::FAccelerationStructureHandle>(FAccelerationStructureHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong in_RDX;
  
  iVar3 = *(int *)(in_RDX + 0x10);
  *(int *)&param_1->ExternalGeometryParticle = iVar3;
  if (iVar3 == -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7431867033672745159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,199,"Idx.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FUniqueIdx)iVar3;
    }
  }
  return (FUniqueIdx)(int)param_1;
}

// InitHelper<UE::Math::TVector<float>_> @ 1436f3e70

void __cdecl
InitHelper<UE::Math::TVector<float>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArrayBase<UE::Math::TVector<float>_> *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (0 < param_3) {
    uVar8 = 0;
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (param_2->Array).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->Array).AllocatorInstance.Data;
      uVar1 = *(undefined8 *)(pFVar3 + lVar7);
      uVar2 = *(undefined4 *)(pFVar3 + lVar7 + 8);
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(pFVar3 + lVar7) = uVar1;
      *(undefined4 *)(pFVar3 + lVar7 + 8) = uVar2;
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar8 < param_3);
  }
  return;
}

// InitHelper<FLinearColor> @ 1436f3fa0

void __cdecl
InitHelper<FLinearColor>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArrayBase<FLinearColor> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if (0 < param_3) {
    uVar9 = 0;
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (param_2->Array).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->Array).AllocatorInstance.Data + lVar10;
      uVar3 = *(undefined4 *)pFVar1;
      uVar4 = *(undefined4 *)(pFVar1 + 4);
      uVar5 = *(undefined4 *)(pFVar1 + 8);
      uVar6 = *(undefined4 *)(pFVar1 + 0xc);
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data + lVar10;
      *(undefined4 *)pFVar1 = uVar3;
      *(undefined4 *)(pFVar1 + 4) = uVar4;
      *(undefined4 *)(pFVar1 + 8) = uVar5;
      *(undefined4 *)(pFVar1 + 0xc) = uVar6;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < param_3);
  }
  return;
}

// StaticEnum<enum_ChaosDeformableSimSpace> @ 1436f43b0

UEnum * __cdecl StaticEnum<enum_ChaosDeformableSimSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace,(UObject *)pUVar1,
                       L"ChaosDeformableSimSpace");
  }
  return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton;
}

// StaticEnum<enum_EChaosBufferMode> @ 1436f43f0

UEnum * __cdecl StaticEnum<enum_EChaosBufferMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosBufferMode,(UObject *)pUVar1,
                       L"EChaosBufferMode");
  }
  return Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton;
}

// StaticEnum<enum_EChaosSoftsLocalDampingSpace> @ 1436f4430

UEnum * __cdecl StaticEnum<enum_EChaosSoftsLocalDampingSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSoftsLocalDampingSpace,(UObject *)pUVar1,
                       L"EChaosSoftsLocalDampingSpace");
  }
  return Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.OuterSingleton;
}

// StaticEnum<enum_EChaosSoftsSimulationSpace> @ 1436f4470

UEnum * __cdecl StaticEnum<enum_EChaosSoftsSimulationSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace,(UObject *)pUVar1,
                       L"EChaosSoftsSimulationSpace");
  }
  return Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.OuterSingleton;
}

// StaticEnum<enum_EChaosSolverTickMode> @ 1436f44b0

UEnum * __cdecl StaticEnum<enum_EChaosSolverTickMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSolverTickMode,(UObject *)pUVar1,
                       L"EChaosSolverTickMode");
  }
  return Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton;
}

// StaticEnum<enum_EChaosThreadingMode> @ 1436f44f0

UEnum * __cdecl StaticEnum<enum_EChaosThreadingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosThreadingMode,(UObject *)pUVar1,
                       L"EChaosThreadingMode");
  }
  return Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton;
}

// StaticEnum<enum_EClusterUnionMethod> @ 1436f4530

UEnum * __cdecl StaticEnum<enum_EClusterUnionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EClusterUnionMethod,(UObject *)pUVar1,
                       L"EClusterUnionMethod");
  }
  return Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton;
}

// StaticEnum<enum_ECollisionTypeEnum> @ 1436f4570

UEnum * __cdecl StaticEnum<enum_ECollisionTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ECollisionTypeEnum,(UObject *)pUVar1,
                       L"ECollisionTypeEnum");
  }
  return Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EDamageModelTypeEnum> @ 1436f45b0

UEnum * __cdecl StaticEnum<enum_EDamageModelTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EDamageModelTypeEnum,(UObject *)pUVar1,
                       L"EDamageModelTypeEnum");
  }
  return Z_Registration_Info_UEnum_EDamageModelTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EEmissionPatternTypeEnum> @ 1436f45f0

UEnum * __cdecl StaticEnum<enum_EEmissionPatternTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum,(UObject *)pUVar1,
                       L"EEmissionPatternTypeEnum");
  }
  return Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EFieldCullingOperationType> @ 1436f4630

UEnum * __cdecl StaticEnum<enum_EFieldCullingOperationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldCullingOperationType,(UObject *)pUVar1,
                       L"EFieldCullingOperationType");
  }
  return Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton;
}

// StaticEnum<enum_EFieldFalloffType> @ 1436f4670

UEnum * __cdecl StaticEnum<enum_EFieldFalloffType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFalloffType,(UObject *)pUVar1,
                       L"EFieldFalloffType");
  }
  return Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton;
}

// StaticEnum<enum_EFieldFilterType> @ 1436f46b0

UEnum * __cdecl StaticEnum<enum_EFieldFilterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFilterType,(UObject *)pUVar1,
                       L"EFieldFilterType");
  }
  return Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton;
}

// StaticEnum<enum_EFieldIntegerType> @ 1436f46f0

UEnum * __cdecl StaticEnum<enum_EFieldIntegerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldIntegerType,(UObject *)pUVar1,
                       L"EFieldIntegerType");
  }
  return Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton;
}

// StaticEnum<enum_EFieldObjectType> @ 1436f4730

UEnum * __cdecl StaticEnum<enum_EFieldObjectType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldObjectType,(UObject *)pUVar1,
                       L"EFieldObjectType");
  }
  return Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton;
}

// StaticEnum<enum_EFieldOperationType> @ 1436f4770

UEnum * __cdecl StaticEnum<enum_EFieldOperationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOperationType,(UObject *)pUVar1,
                       L"EFieldOperationType");
  }
  return Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton;
}

// StaticEnum<enum_EFieldOutputType> @ 1436f47b0

UEnum * __cdecl StaticEnum<enum_EFieldOutputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOutputType,(UObject *)pUVar1,
                       L"EFieldOutputType");
  }
  return Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton;
}

// StaticEnum<enum_EFieldPhysicsDefaultFields> @ 1436f47f0

UEnum * __cdecl StaticEnum<enum_EFieldPhysicsDefaultFields>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields,(UObject *)pUVar1,
                       L"EFieldPhysicsDefaultFields");
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton;
}

// StaticEnum<enum_EFieldPhysicsType> @ 1436f4830

UEnum * __cdecl StaticEnum<enum_EFieldPhysicsType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsType,(UObject *)pUVar1,
                       L"EFieldPhysicsType");
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton;
}

// StaticEnum<enum_EFieldPositionType> @ 1436f4870

UEnum * __cdecl StaticEnum<enum_EFieldPositionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPositionType,(UObject *)pUVar1,
                       L"EFieldPositionType");
  }
  return Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton;
}

// StaticEnum<enum_EFieldResolutionType> @ 1436f48b0

UEnum * __cdecl StaticEnum<enum_EFieldResolutionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldResolutionType,(UObject *)pUVar1,
                       L"EFieldResolutionType");
  }
  return Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton;
}

// StaticEnum<enum_EFieldScalarType> @ 1436f48f0

UEnum * __cdecl StaticEnum<enum_EFieldScalarType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldScalarType,(UObject *)pUVar1,
                       L"EFieldScalarType");
  }
  return Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton;
}

// StaticEnum<enum_EFieldVectorType> @ 1436f4930

UEnum * __cdecl StaticEnum<enum_EFieldVectorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldVectorType,(UObject *)pUVar1,
                       L"EFieldVectorType");
  }
  return Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton;
}

// StaticEnum<enum_EGeometryCollectionPhysicsTypeEnum> @ 1436f4970

UEnum * __cdecl StaticEnum<enum_EGeometryCollectionPhysicsTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum,(UObject *)pUVar1,
                       L"EGeometryCollectionPhysicsTypeEnum");
  }
  return Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EImplicitTypeEnum> @ 1436f49b0

UEnum * __cdecl StaticEnum<enum_EImplicitTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EImplicitTypeEnum,(UObject *)pUVar1,
                       L"EImplicitTypeEnum");
  }
  return Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EInitialVelocityTypeEnum> @ 1436f49f0

UEnum * __cdecl StaticEnum<enum_EInitialVelocityTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum,(UObject *)pUVar1,
                       L"EInitialVelocityTypeEnum");
  }
  return Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EObjectStateTypeEnum> @ 1436f4a30

UEnum * __cdecl StaticEnum<enum_EObjectStateTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum,(UObject *)pUVar1,
                       L"EObjectStateTypeEnum");
  }
  return Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton;
}

// StaticEnum<enum_ESetMaskConditionType> @ 1436f4a70

UEnum * __cdecl StaticEnum<enum_ESetMaskConditionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_ESetMaskConditionType,(UObject *)pUVar1,
                       L"ESetMaskConditionType");
  }
  return Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton;
}

// StaticEnum<enum_EWaveFunctionType> @ 1436f4ab0

UEnum * __cdecl StaticEnum<enum_EWaveFunctionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Chaos_EWaveFunctionType,(UObject *)pUVar1,
                       L"EWaveFunctionType");
  }
  return Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton;
}

// TransformStaticArray<Chaos::TAABB<double,3>,UE::Math::TBox<double>,2,UE::Math::TBox<double>_(__cdecl*)(Chaos::TAABB<double,3>_const_&)> @ 1436f4af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::VisualDebugger::Utils::
TransformStaticArray<Chaos::TAABB<double,3>,UE::Math::TBox<double>,2,UE::Math::TBox<double>_(__cdecl*)(Chaos::TAABB<double,3>_const_&)>
          (TAABB<double,3> (*param_1) [2],TBox<double> (*param_2) [2],
          _func___cdecl_TBox<double>_TAABB<double,3>_ptr *param_3)

{
  undefined1 auStack_78 [32];
  TVector<double>_u_0 local_58;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  (*param_3)((TBox<double> *)&local_58._s_0,*param_1);
  (*param_2)[0].Min.field0_0x0._s_0.X = local_58._s_0.X;
  (*param_2)[0].Min.field0_0x0._s_0.Y = local_58._s_0.Y;
  (*param_2)[0].Min.field0_0x0._s_0.Z = local_58._s_0.Z;
  (*param_2)[0].Max.field0_0x0._s_0.X = dStack_40;
  *(undefined4 *)((longlong)&(*param_2)[0].Max.field0_0x0 + 8) = local_38;
  *(undefined4 *)((longlong)&(*param_2)[0].Max.field0_0x0 + 0xc) = uStack_34;
  *(undefined4 *)((longlong)&(*param_2)[0].Max.field0_0x0 + 0x10) = uStack_30;
  *(undefined4 *)((longlong)&(*param_2)[0].Max.field0_0x0 + 0x14) = uStack_2c;
  ((TBox<double> *)((longlong)param_2 + 0))->IsValid = (undefined1)local_28;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[0] = local_28._1_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[1] = local_28._2_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[2] = local_28._3_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[3] = local_28._4_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[4] = local_28._5_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[5] = local_28._6_1_;
  ((TBox<double> *)((longlong)param_2 + 0))->Pad[6] = local_28._7_1_;
  (*param_3)((TBox<double> *)&local_58._s_0,*param_1 + 1);
  (*param_2)[1].Min.field0_0x0._s_0.X = local_58._s_0.X;
  (*param_2)[1].Min.field0_0x0._s_0.Y = local_58._s_0.Y;
  (*param_2)[1].Min.field0_0x0._s_0.Z = local_58._s_0.Z;
  (*param_2)[1].Max.field0_0x0._s_0.X = dStack_40;
  (*param_2)[1].Max.field0_0x0._s_0.Y = (double)CONCAT44(uStack_34,local_38);
  (*param_2)[1].Max.field0_0x0._s_0.Z = (double)CONCAT44(uStack_2c,uStack_30);
  ((TBox<double> *)((longlong)param_2 + 0x38))->IsValid = (undefined1)local_28;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[0] = local_28._1_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[1] = local_28._2_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[2] = local_28._3_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[3] = local_28._4_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[4] = local_28._5_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[5] = local_28._6_1_;
  ((TBox<double> *)((longlong)param_2 + 0x38))->Pad[6] = local_28._7_1_;
  return;
}

// TransformStaticArray<Chaos::TRigidTransform<double,3>,UE::Math::TTransform<double>,2,UE::Math::TTransform<double>_(__cdecl*)(Chaos::TRigidTransform<double,3>_const_&)> @ 1436f4b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::VisualDebugger::Utils::
TransformStaticArray<Chaos::TRigidTransform<double,3>,UE::Math::TTransform<double>,2,UE::Math::TTransform<double>_(__cdecl*)(Chaos::TRigidTransform<double,3>_const_&)>
          (TRigidTransform<double,3> (*param_1) [2],TTransform<double> (*param_2) [2],
          _func___cdecl_TTransform<double>_TRigidTransform<double,3>_ptr *param_3)

{
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  (*param_3)(&local_88,*param_1);
  (*param_2)[0].Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
  (*param_2)[0].Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
  (*param_2)[0].Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
  (*param_2)[0].Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
  (*param_2)[0].Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
  (*param_2)[0].Translation.XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
  (*param_2)[0].Translation.ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
  (*param_2)[0].Translation.ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
  *(undefined4 *)(*param_2)[0].Scale3D.XY.m128d_f64 = local_88.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(*param_2)[0].Scale3D.XY.m128d_f64 + 4) =
       local_88.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)((*param_2)[0].Scale3D.XY.m128d_f64 + 1) = local_88.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(*param_2)[0].Scale3D.XY.m128d_f64 + 0xc) =
       local_88.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)(*param_2)[0].Scale3D.ZW.m128d_f64 = local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(*param_2)[0].Scale3D.ZW.m128d_f64 + 4) =
       local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((*param_2)[0].Scale3D.ZW.m128d_f64 + 1) = local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(*param_2)[0].Scale3D.ZW.m128d_f64 + 0xc) =
       local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
  (*param_3)(&local_88,*param_1 + 1);
  (*param_2)[1].Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
  (*param_2)[1].Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
  (*param_2)[1].Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
  (*param_2)[1].Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
  (*param_2)[1].Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
  (*param_2)[1].Translation.XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
  (*param_2)[1].Translation.ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
  (*param_2)[1].Translation.ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
  (*param_2)[1].Scale3D.XY.m128d_f64[0] =
       (double)CONCAT44(local_88.Scale3D.XY.m128d_f64[0]._4_4_,
                        local_88.Scale3D.XY.m128d_f64[0]._0_4_);
  (*param_2)[1].Scale3D.XY.m128d_f64[1] =
       (double)CONCAT44(local_88.Scale3D.XY.m128d_f64[1]._4_4_,
                        local_88.Scale3D.XY.m128d_f64[1]._0_4_);
  (*param_2)[1].Scale3D.ZW.m128d_f64[0] =
       (double)CONCAT44(local_88.Scale3D.ZW.m128d_f64[0]._4_4_,
                        local_88.Scale3D.ZW.m128d_f64[0]._0_4_);
  (*param_2)[1].Scale3D.ZW.m128d_f64[1] =
       (double)CONCAT44(local_88.Scale3D.ZW.m128d_f64[1]._4_4_,
                        local_88.Scale3D.ZW.m128d_f64[1]._0_4_);
  return;
}

// TransformStaticArray<Chaos::TVector<float,3>,UE::Math::TVector<double>,2,UE::Math::TVector<double>_(__cdecl*)(Chaos::TVector<float,3>_const_&)> @ 1436f4c70

void __cdecl
Chaos::VisualDebugger::Utils::
TransformStaticArray<Chaos::TVector<float,3>,UE::Math::TVector<double>,2,UE::Math::TVector<double>_(__cdecl*)(Chaos::TVector<float,3>_const_&)>
          (TVector<float,3> (*param_1) [2],TVector<double> (*param_2) [2],
          _func___cdecl_TVector<double>_TVector<float,3>_ptr *param_3)

{
  TVector<double>_u_0 local_28;
  
  (*param_3)((TVector<double> *)&local_28._s_0,*param_1);
  *(undefined4 *)&(*param_2)[0].field0_0x0 = local_28._0_4_;
  *(undefined4 *)((longlong)&(*param_2)[0].field0_0x0 + 4) = local_28._4_4_;
  *(undefined4 *)((longlong)&(*param_2)[0].field0_0x0 + 8) = local_28._8_4_;
  *(undefined4 *)((longlong)&(*param_2)[0].field0_0x0 + 0xc) = local_28._12_4_;
  (*param_2)[0].field0_0x0._s_0.Z = local_28._s_0.Z;
  (*param_3)((TVector<double> *)&local_28._s_0,*param_1 + 1);
  (*param_2)[1].field0_0x0._s_0.X = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
  (*param_2)[1].field0_0x0._s_0.Y = (double)CONCAT44(local_28._12_4_,local_28._8_4_);
  (*param_2)[1].field0_0x0._s_0.Z = local_28._s_0.Z;
  return;
}

// TryBulkSerializeManagedArray<FLinearColor> @ 1436f4ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
TryBulkSerializeManagedArray<FLinearColor>
          (FChaosArchive *param_1,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint auStackX_8 [2];
  
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 4,(longlong)param_2->ArrayMax << 4);
  plVar2 = (longlong *)param_1->_padding_;
  auStackX_8[0] = param_2->ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((int)auStackX_8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_8[0]);
  }
  if (param_2->ArrayMax < (int)auStackX_8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,auStackX_8[0],&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax
              );
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum(param_2,auStackX_8[0],Default);
  uVar8 = 0;
  if (0 < (int)auStackX_8[0]) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data + lVar10;
      puVar3 = *(undefined4 **)param_1->_padding_;
      if ((undefined4 *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar9,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar9);
        }
      }
      else {
        *(undefined4 *)pFVar9 = *puVar3;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar1 = pFVar9 + 4;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar1);
        }
      }
      else {
        *(uint *)pFVar1 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar1 = pFVar9 + 8;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar1);
        }
      }
      else {
        *(uint *)pFVar1 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      pFVar9 = pFVar9 + 0xc;
      puVar4 = *(uint **)param_1->_padding_;
      if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar9,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pFVar9);
        }
      }
      else {
        *(uint *)pFVar9 = *puVar4;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar8 < (int)auStackX_8[0]);
  }
  return;
}

// VisitConstCollisions<`FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase'::__l2::<lambda_1>_> @ 1436f4cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

ECollisionVisitorResult __thiscall
Chaos::FParticlePairMidPhase::
VisitConstCollisions<_FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase_::__l2::<lambda_1>_>
          (FParticlePairMidPhase *this,<lambda_1> *param_1,ECollisionVisitorFlags param_2)

{
  int *piVar1;
  ulonglong uVar2;
  float fVar3;
  uint uVar4;
  FPBDCollisionConstraint *pFVar5;
  FChaosVDParticlePairMidPhase *pFVar6;
  FChaosVDConstraint *pFVar7;
  code *pcVar8;
  <lambda_1> *p<Var9;
  FParticlePairMidPhase *pFVar10;
  byte bVar11;
  bool bVar12;
  ECollisionVisitorResult EVar13;
  int iVar14;
  longlong lVar15;
  FParticlePairMidPhase *pFVar16;
  uint uVar17;
  TGeometryParticleHandleImp<double,3,1> **ppTVar18;
  TGeometryParticleHandleImp<double,3,1> **ppTVar19;
  FParticlePairMidPhase *pFVar20;
  uint uVar21;
  undefined1 auStack_648 [32];
  FChaosVDConstraint *local_628;
  FChaosVDConstraint *local_620;
  longlong local_618;
  longlong local_610;
  undefined8 local_608;
  undefined1 local_5f8;
  undefined1 local_5f7 [7];
  <lambda_1> *local_5f0;
  FParticlePairMidPhase *local_5e8;
  int local_5e0;
  int local_5dc;
  FParticlePairMidPhase *local_5d8;
  FParticlePairMidPhase *local_5d0;
  int iStack_5c8;
  uint uStack_5c4;
  TGeometryParticleHandleImp<double,3,1> **local_5c0;
  undefined4 uStack_5b8;
  int iStack_5b4;
  int local_5b0;
  undefined4 uStack_5ac;
  int iStack_5a8;
  undefined4 uStack_5a4;
  FParticlePairMidPhase *local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_598;
  undefined8 uStack_578;
  undefined4 local_554;
  FChaosVDConstraint local_548;
  FChaosVDConstraint local_2c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_648;
  local_5f0 = param_1;
  local_5e8 = this;
  if (this->MidPhaseType == ShapePair) {
    fVar3 = this[2].CullDistanceScale;
    pFVar16 = (FParticlePairMidPhase *)this[2].Particle1;
    if ((FParticlePairMidPhase *)this[2].Particle1 == (FParticlePairMidPhase *)0x0) {
      pFVar16 = this + 1;
    }
    pFVar20 = (FParticlePairMidPhase *)((longlong)(int)fVar3 * 0x58 + (longlong)pFVar16);
    while( true ) {
      if (this[2].CullDistanceScale != fVar3) {
        local_5f8 = 0;
        `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_5f8);
      }
      if (pFVar16 == pFVar20) break;
      pFVar5 = (FPBDCollisionConstraint *)pFVar16->Particle0;
      if (pFVar5 != (FPBDCollisionConstraint *)0x0) {
        if ((param_2 & VisitDisabled) == VisitActiveAwake) {
          bVar11 = *(byte *)&pFVar5->Flags >> 1 & 1;
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
            if (bVar11 == 0) goto LAB_1436f4dcc;
          }
          else {
            if (bVar11 == 0) goto LAB_1436f4ddc;
            bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
            if (bVar12) goto LAB_1436f4dc6;
          }
        }
        else {
LAB_1436f4dc6:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_1436f4dcc:
            bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
            if (bVar12) goto LAB_1436f4ece;
          }
LAB_1436f4ddc:
          if (((param_2 & VisitExpired) != VisitActiveAwake) || ((*(byte *)&pFVar5->Flags & 1) != 0)
             ) {
            FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint
                      (&local_548,(FPBDCollisionConstraint *)pFVar16->Particle0);
            pFVar6 = param_1->WrappedMidPhaseData;
            pFVar7 = (FChaosVDConstraint *)(pFVar6->Constraints).AllocatorInstance.Data;
            if ((pFVar7 <= &local_548) &&
               (lVar15 = (longlong)(pFVar6->Constraints).ArrayMax, &local_548 < pFVar7 + lVar15)) {
              local_610 = (longlong)(pFVar6->Constraints).ArrayNum;
              local_608 = 0x280;
              local_628 = &local_548;
              local_620 = pFVar7;
              local_618 = lVar15;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                EVar13 = (*pcVar8)();
                return EVar13;
              }
            }
            iVar14 = (pFVar6->Constraints).ArrayNum;
            piVar1 = &(pFVar6->Constraints).ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x280,0x10,&(pFVar6->Constraints).AllocatorInstance,piVar1);
            }
            (pFVar6->Constraints).ArrayNum = iVar14 + 1;
            FChaosVDConstraint::FChaosVDConstraint
                      ((FChaosVDConstraint *)
                       ((pFVar6->Constraints).AllocatorInstance.Data + (longlong)iVar14 * 0x280),
                       &local_548);
            if (local_548.ManifoldPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_548.ManifoldPoints.AllocatorInstance.Data);
            }
            if (local_548.CollisionMargins.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_548.CollisionMargins.AllocatorInstance.Data);
            }
          }
        }
      }
LAB_1436f4ece:
      pFVar16 = (FParticlePairMidPhase *)&pFVar16[1].Particle1;
    }
  }
  pFVar16 = local_5e8;
  if (local_5e8->MidPhaseType == Generic) {
    iVar14 = *(int *)&local_5e8[1].ParticlePairKey.Key;
    local_5c0 = &local_5e8[1].Particle0;
    local_5d8 = local_5e8 + 1;
    iStack_5c8 = 0;
    uStack_5c4 = 1;
    iStack_5b4 = iStack_5c8;
    local_5b0 = iStack_5c8;
    if (iVar14 != 0) {
      ppTVar19 = *(TGeometryParticleHandleImp<double,3,1> ***)&local_5e8[1].CullDistanceScale;
      if (*(TGeometryParticleHandleImp<double,3,1> ***)&local_5e8[1].CullDistanceScale ==
          (TGeometryParticleHandleImp<double,3,1> **)0x0) {
        ppTVar19 = local_5c0;
      }
      uVar17 = *(uint *)ppTVar19;
      local_5b0 = 0;
      iStack_5c8 = 0;
      while (uVar17 == 0) {
        lVar15 = (longlong)iStack_5c8;
        local_5b0 = local_5b0 + 0x20;
        iStack_5c8 = iStack_5c8 + 1;
        iStack_5b4 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_5c8)
        goto LAB_1436f4f70;
        uVar17 = *(uint *)((longlong)ppTVar19 + lVar15 * 4 + 4);
      }
      uStack_5c4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_5c4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_5e0 = (int)lVar15;
      iStack_5b4 = local_5e0 + -1 + local_5b0;
      if (iVar14 < iStack_5b4) {
        iStack_5b4 = iVar14;
      }
    }
LAB_1436f4f70:
    uStack_5ac = local_554;
    iStack_5a8 = *(int *)&local_5e8[1].MidPhaseType - local_5e8[1].NumActiveConstraints;
    uVar17 = *(uint *)&local_5e8[1].ParticlePairKey.Key;
    uStack_5b8 = 0xffffffff;
    TStack_598.CurrentBitIndex = iStack_5b4;
    TStack_598.UnvisitedBitMask = 0xffffffff;
    TStack_598._padding_ = CONCAT44(uStack_5c4,iStack_5c8);
    pFVar20 = local_5e8 + 1;
    uVar21 = uVar17 & 0xffffffe0;
    iVar14 = (int)uVar17 >> 5;
    TStack_598._28_4_ = local_554;
    TStack_598.BaseBitIndex = local_5b0;
    uStack_578 = CONCAT44(uStack_5a4,iStack_5a8);
    local_5d0 = local_5d8;
    local_5a0 = local_5d8;
    TStack_598.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5c0;
    if (((int)uVar17 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      EVar13 = (*pcVar8)();
      return EVar13;
    }
    pFVar10 = local_5d8;
    p<Var9 = local_5f0;
    uVar4 = *(uint *)&pFVar16[1].ParticlePairKey.Key;
    if (uVar17 != uVar4) {
      ppTVar19 = *(TGeometryParticleHandleImp<double,3,1> ***)&pFVar16[1].CullDistanceScale;
      ppTVar18 = &pFVar20->Particle0;
      if (ppTVar19 != (TGeometryParticleHandleImp<double,3,1> **)0x0) {
        ppTVar18 = ppTVar19;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)ppTVar18 + (longlong)iVar14 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar14;
        uVar21 = uVar21 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1436f5080;
        uVar17 = *(uint *)((longlong)ppTVar18 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_5dc = (int)lVar15;
      uVar17 = local_5dc + -1 + uVar21;
      if ((int)uVar4 < (int)uVar17) {
        uVar17 = uVar4;
      }
    }
LAB_1436f5080:
    do {
      pFVar16 = local_5a0;
      if (*(int *)&local_5a0->MidPhaseType - local_5a0->NumActiveConstraints != (int)uStack_578) {
        local_5f7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_5f7);
      }
      if (((TStack_598.CurrentBitIndex == uVar17) &&
          (TStack_598.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pFVar20->Particle0)) &&
         (pFVar16 == pFVar10)) break;
      lVar15 = (longlong)TStack_598.CurrentBitIndex * 0x20 + pFVar16->_padding_;
      pFVar5 = *(FPBDCollisionConstraint **)(lVar15 + 0x10);
      if (pFVar5 != (FPBDCollisionConstraint *)0x0) {
        if ((param_2 & VisitDisabled) == VisitActiveAwake) {
          bVar11 = *(byte *)&pFVar5->Flags >> 1 & 1;
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
            if (bVar11 == 0) goto LAB_1436f5108;
          }
          else {
            if (bVar11 == 0) goto LAB_1436f5118;
            bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
            if (bVar12) goto LAB_1436f5102;
          }
        }
        else {
LAB_1436f5102:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_1436f5108:
            bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
            if (bVar12) goto LAB_1436f5219;
          }
LAB_1436f5118:
          if (((param_2 & VisitExpired) != VisitActiveAwake) || ((*(byte *)&pFVar5->Flags & 1) != 0)
             ) {
            FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint
                      (&local_2c8,*(FPBDCollisionConstraint **)(lVar15 + 0x10));
            pFVar6 = p<Var9->WrappedMidPhaseData;
            pFVar7 = (FChaosVDConstraint *)(pFVar6->Constraints).AllocatorInstance.Data;
            if ((pFVar7 <= &local_2c8) &&
               (lVar15 = (longlong)(pFVar6->Constraints).ArrayMax, &local_2c8 < pFVar7 + lVar15)) {
              local_610 = (longlong)(pFVar6->Constraints).ArrayNum;
              local_608 = 0x280;
              local_628 = &local_2c8;
              local_620 = pFVar7;
              local_618 = lVar15;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                EVar13 = (*pcVar8)();
                return EVar13;
              }
            }
            iVar14 = (pFVar6->Constraints).ArrayNum;
            piVar1 = &(pFVar6->Constraints).ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x280,0x10,&(pFVar6->Constraints).AllocatorInstance,piVar1);
            }
            (pFVar6->Constraints).ArrayNum = iVar14 + 1;
            FChaosVDConstraint::FChaosVDConstraint
                      ((FChaosVDConstraint *)
                       ((pFVar6->Constraints).AllocatorInstance.Data + (longlong)iVar14 * 0x280),
                       &local_2c8);
            if (local_2c8.ManifoldPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.ManifoldPoints.AllocatorInstance.Data);
            }
            if (local_2c8.CollisionMargins.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2c8.CollisionMargins.AllocatorInstance.Data);
            }
          }
        }
      }
LAB_1436f5219:
      TStack_598.UnvisitedBitMask = TStack_598.UnvisitedBitMask & ~TStack_598._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_598);
    } while( true );
  }
  if (local_5e8->MidPhaseType != SphereApproximation) {
    return Continue;
  }
  pFVar5 = *(FPBDCollisionConstraint **)&local_5e8[2].ParticleCollisionsIndex0;
  if (pFVar5 == (FPBDCollisionConstraint *)0x0) {
    return Continue;
  }
  if ((param_2 & VisitDisabled) == VisitActiveAwake) {
    bVar11 = *(byte *)&pFVar5->Flags >> 1 & 1;
    if ((param_2 & VisitDefault) != VisitActiveAwake) {
      if (bVar11 == 0) goto LAB_1436f52c2;
      bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
      if (!bVar12) {
        return Continue;
      }
      goto LAB_1436f52b0;
    }
    if (bVar11 != 0) {
      return Continue;
    }
  }
  else {
LAB_1436f52b0:
    if ((param_2 & VisitDefault) != VisitActiveAwake) goto LAB_1436f52c2;
  }
  bVar12 = FPBDCollisionConstraint::IsSleeping(pFVar5);
  if (bVar12) {
    return Continue;
  }
LAB_1436f52c2:
  if (((param_2 & VisitExpired) == VisitActiveAwake) && ((*(byte *)&pFVar5->Flags & 1) == 0)) {
    return Continue;
  }
  EVar13 = `FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase'::__l2::<lambda_1>::
           operator()(local_5f0,pFVar5);
  return (uint)(EVar13 != Stop);
}

// VisitTimelines<`ChaosDD::Private::FChaosDDScene::GetFrames'::__l2::<lambda_1>_> @ 1436f52f0

void __cdecl
ChaosDD::Private::VisitTimelines<_ChaosDD::Private::FChaosDDScene::GetFrames_::__l2::<lambda_1>_>
          (TArray<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  TArray<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pFVar17 = (param_1->AllocatorInstance).Data;
  uVar1 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar1;
  pFVar12 = pFVar17 + uVar10 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar17 == pFVar12) {
      return;
    }
    pTVar14 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar14->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1436f5380;
        }
        LOCK();
        aVar8 = pTVar14->SharedReferenceCount;
        bVar18 = aVar7 == aVar8;
        if (bVar18) {
          pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar18);
      lVar3 = *(longlong *)pFVar17;
      if (lVar3 != 0) {
        pTVar4 = param_2->Frames;
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x78);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        uVar2 = *(uint *)(lVar3 + 0x28);
        uVar10 = (ulonglong)(int)uVar2;
        pFVar16 = *(FScriptContainerElement **)(lVar3 + 0x20);
        pFVar13 = pFVar16 + uVar10 * 0x10;
        while( true ) {
          if (*(int *)(lVar3 + 0x28) != (int)uVar10) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          piVar15 = &pTVar4->ArrayMax;
          if (pFVar16 == pFVar13) break;
          pFVar11 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar11 <= pFVar16) && (pFVar16 < pFVar11 + (longlong)*piVar15 * 0x10)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = pTVar4->ArrayNum;
          if (iVar9 == *piVar15) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar4->AllocatorInstance,piVar15);
          }
          pTVar4->ArrayNum = iVar9 + 1;
          pFVar11 = (pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar11 = *(undefined8 *)pFVar16;
          lVar5 = *(longlong *)(pFVar16 + 8);
          *(longlong *)(pFVar11 + 8) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          uVar10 = (ulonglong)uVar2;
          pFVar16 = pFVar16 + 0x10;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
LAB_1436f5380:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    pFVar17 = pFVar17 + 0x10;
    uVar10 = (ulonglong)uVar1;
  } while( true );
}

// ~TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::__l9::<lambda_1>,1,1> @ 1436f6f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::__l9::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FChaosSolversModule::OnCreateMaterial_::__l9::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::`9'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>,1,1> @ 1436f6f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FChaosSolversModule::OnCreateMaterialMask_::__l9::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::`9'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::__l9::<lambda_1>,1,0> @ 1436f6f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FChaosSolversModule::OnDestroyMaterial_::__l9::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::`9'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::__l9::<lambda_1>,1,0> @ 1436f6f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FChaosSolversModule::OnDestroyMaterialMask_::__l9::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::`9'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::__l9::<lambda_1>,1,1> @ 1436f6fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::__l9::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FChaosSolversModule::OnUpdateMaterial_::__l9::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::`9'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>,1,1> @ 1436f6fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FChaosSolversModule::OnUpdateMaterialMask_::__l9::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::`9'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// `scalar_deleting_destructor' @ 1436f78e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7910

void * __thiscall
IBaseDelegateInstance<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7940

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7970

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FChaosSolversModule,void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f79a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(Chaos::FMaterialHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f79d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(Chaos::FMaterialMaskHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::__l9::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterial'::`9'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnCreateMaterialMask'::`9'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterial'::`9'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnDestroyMaterialMask'::`9'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::__l9::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterial'::`9'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosSolversModule::OnUpdateMaterialMask'::`9'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7ba0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDFrame,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ChaosDD::Private::FChaosDDFrame,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7be0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDGlobalFrame,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ChaosDD::Private::FChaosDDGlobalFrame,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7c20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDTimeline,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<ChaosDD::Private::FChaosDDTimeline,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7c60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ChaosDD::Private::FChaosDDFrame,SharedPointerInternals::DefaultDeleter<ChaosDD::Private::FChaosDDFrame>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<ChaosDD::Private::FChaosDDFrame,SharedPointerInternals::DefaultDeleter<ChaosDD::Private::FChaosDDFrame>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7ca0

void * __thiscall
TThreadSingleton<ChaosDD::Private::FChaosDDContext>::_scalar_deleting_destructor_
          (TThreadSingleton<ChaosDD::Private::FChaosDDContext> *this,uint param_1)

{
  ~TThreadSingleton<ChaosDD::Private::FChaosDDContext>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7ce0

void * __thiscall
TThreadSingleton<Chaos::FPhysicsThreadContext>::_scalar_deleting_destructor_
          (TThreadSingleton<Chaos::FPhysicsThreadContext> *this,uint param_1)

{
  ~TThreadSingleton<Chaos::FPhysicsThreadContext>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7d20

void * __thiscall
ChaosDD::Private::FChaosDDContext::_scalar_deleting_destructor_(FChaosDDContext *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Frame).SharedReferenceCount.ReferenceController);
  TThreadSingleton<ChaosDD::Private::FChaosDDContext>::
  ~TThreadSingleton<ChaosDD::Private::FChaosDDContext>
            ((TThreadSingleton<ChaosDD::Private::FChaosDDContext> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7d70

void * __thiscall
ChaosDD::Private::FChaosDDFrame::_scalar_deleting_destructor_(FChaosDDFrame *this,uint param_1)

{
  ~FChaosDDFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7db0

void * __thiscall
ChaosDD::Private::FChaosDDGlobalFrame::_scalar_deleting_destructor_
          (FChaosDDGlobalFrame *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FrameWriteCS);
  FChaosDDFrame::~FChaosDDFrame((FChaosDDFrame *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7e00

void * __thiscall
Chaos::FPhysicsThreadContext::_scalar_deleting_destructor_(FPhysicsThreadContext *this,uint param_1)

{
  TThreadSingleton<Chaos::FPhysicsThreadContext>::~TThreadSingleton<Chaos::FPhysicsThreadContext>
            ((TThreadSingleton<Chaos::FPhysicsThreadContext> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7e40

void * __thiscall
Chaos::FSimCallbackCommandObject::_scalar_deleting_destructor_
          (FSimCallbackCommandObject *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Func2 != 0) {
    plVar1 = *(longlong **)&(this->Func2).field_0x28;
    plVar2 = (longlong *)&(this->Func2).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Func != 0) {
    plVar1 = *(longlong **)&(this->Func).field_0x28;
    plVar2 = (longlong *)&(this->Func).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436f7ec0

void * __thiscall
Chaos::ISimCallbackObject::_scalar_deleting_destructor_(ISimCallbackObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// AcquiredLock @ 1436f7ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Chaos::Insights::AcquiredLock(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquiredFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// BeginLockAcquireEvent @ 1436f9370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl Chaos::Insights::BeginLockAcquireEvent(ELockEventType param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireBeginFields>((TLogScope<0> *)&local_28);
    QueryPerformanceCounter(&local_30);
    *local_28 = local_30;
    *(bool *)(local_28 + 1) = (param_1 & ~RWLockWriteLock) == Mutex;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return local_38.QuadPart;
}

// ConvertToFTransform @ 1436fbe90

TTransform<double> * __cdecl
Chaos::VisualDebugger::Utils::ConvertToFTransform
          (TTransform<double> *__return_storage_ptr__,TRigidTransform<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x18;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)param_1;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)&param_1->field_0x20;
  dVar4 = *(double *)&param_1->field_0x28;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&param_1->field_0x30;
  dVar3 = *(double *)&param_1->field_0x38;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = *(double *)&param_1->field_0x40;
  dVar4 = *(double *)&param_1->field_0x48;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&param_1->field_0x50;
  dVar3 = *(double *)&param_1->field_0x58;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverProxy @ 1436fe830

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosSolverConfiguration @ 1436fe840

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosSolverConfiguration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaos_init @ 1436fe850

void __cdecl EmptyLinkFunctionForGeneratedCodeChaos_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFieldSystemTypes @ 1436fe860

void __cdecl EmptyLinkFunctionForGeneratedCodeFieldSystemTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCollectionSimulationTypes @ 1436fe870

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCollectionSimulationTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsCoreTypes @ 1436fe880

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsCoreTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoftsSimulationSpace @ 1436fe890

void __cdecl EmptyLinkFunctionForGeneratedCodeSoftsSimulationSpace(void)

{
  return;
}

// EndLockAcquireEvent @ 1436fec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Chaos::Insights::EndLockAcquireEvent(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < ChaosLocksChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireEndFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// GetGeometricGTParticleBounds @ 1436ff940

TBox<double> * __cdecl
Chaos::VisualDebugger::Utils::GetGeometricGTParticleBounds
          (TBox<double> *__return_storage_ptr__,TGeometryParticle<double,3> *param_1)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_res8 [8];
  undefined7 uStack_27;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if (param_1 != (TGeometryParticle<double,3> *)0x0) {
    iVar8 = (param_1->MShapesArray).ArrayNum;
    FVar10 = (param_1->MShapesArray).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                   )0x0) {
      FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                )&param_1->MShapesArray;
    }
    FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar10 + (longlong)iVar8 * 8);
    while( true ) {
      if ((param_1->MShapesArray).ArrayNum != iVar8) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10 == FVar1) break;
      lVar9 = *(longlong *)FVar10;
      dVar2 = *(double *)(lVar9 + 0x28);
      auVar6 = *(undefined1 (*) [16])(lVar9 + 0x30);
      auVar7 = *(undefined1 (*) [16])(lVar9 + 0x18);
      dVar3 = *(double *)(lVar9 + 0x40);
      if (__return_storage_ptr__->IsValid == '\0') {
        FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )((longlong)FVar10 + 8);
        *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar7;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = auVar6._0_8_;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = auVar6._8_8_;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3;
        __return_storage_ptr__->IsValid = 1;
        __return_storage_ptr__->Pad[0] = (char)uStack_27;
        __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_27 >> 8);
        __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_27 >> 0x10);
        __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_27 >> 0x18);
        __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_27 >> 0x20);
        __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_27 >> 0x28);
        __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_27 >> 0x30);
      }
      else {
        dVar4 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )((longlong)FVar10 + 8);
        dVar5 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        uVar11 = SUB84(dVar4,0);
        uVar12 = (int)((ulonglong)dVar4 >> 0x20);
        if (auVar7._0_8_ <= dVar4) {
          uVar11 = auVar7._0_4_;
          uVar12 = auVar7._4_4_;
        }
        uVar13 = SUB84(dVar5,0);
        uVar14 = (int)((ulonglong)dVar5 >> 0x20);
        if (auVar7._8_8_ <= dVar5) {
          uVar13 = auVar7._8_4_;
          uVar14 = auVar7._12_4_;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar12,uVar11);
        dVar4 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        uVar11 = SUB84(dVar4,0);
        uVar12 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if (dVar2 <= dVar4) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar14,uVar13);
        dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar13 = SUB84(dVar2,0);
        uVar14 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= auVar6._0_8_) {
          uVar13 = auVar6._0_4_;
          uVar14 = auVar6._4_4_;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar11);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar11 = SUB84(dVar2,0);
        uVar12 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= auVar6._8_8_) {
          uVar11 = auVar6._8_4_;
          uVar12 = auVar6._12_4_;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar14,uVar13);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar12,uVar11);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        uVar11 = SUB84(dVar2,0);
        uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= dVar3) {
          uVar11 = SUB84(dVar3,0);
          uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar11);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPayloadBounds @ 1436ffd60

TBox<double> * __cdecl
Chaos::VisualDebugger::Utils::GetPayloadBounds
          (TBox<double> *__return_storage_ptr__,FAccelerationStructureHandle *param_1)

{
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  TGeometryParticle<double,3> *pTVar5;
  longlong lVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_58 [24];
  double local_40;
  undefined1 auStack_38 [16];
  double dStack_28;
  undefined1 local_20;
  undefined7 uStack_1f;
  
  pTVar5 = param_1->ExternalGeometryParticle;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if (pTVar5 != (TGeometryParticle<double,3> *)0x0) {
    FVar7 = (pTVar5->MShapesArray).AllocatorInstance.SecondaryData;
    iVar4 = (pTVar5->MShapesArray).ArrayNum;
    if (FVar7 == (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )0x0) {
      FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
               )&pTVar5->MShapesArray;
    }
    FVar1 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
             )((longlong)FVar7 + (longlong)iVar4 * 8);
    while( true ) {
      if ((pTVar5->MShapesArray).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_58);
      }
      if (FVar7 == FVar1) break;
      lVar6 = *(longlong *)FVar7;
      local_20 = 1;
      local_40 = *(double *)(lVar6 + 0x28);
      auStack_38 = *(undefined1 (*) [16])(lVar6 + 0x30);
      auVar3 = *(undefined1 (*) [16])(lVar6 + 0x18);
      uVar9 = auVar3._8_4_;
      uVar11 = auVar3._12_4_;
      dStack_28 = *(double *)(lVar6 + 0x40);
      if (__return_storage_ptr__->IsValid == '\0') {
        FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )((longlong)FVar7 + 8);
        *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar3;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_40;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = auStack_38._0_8_;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = auStack_38._8_8_;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_28;
        __return_storage_ptr__->IsValid = 1;
        __return_storage_ptr__->Pad[0] = (char)uStack_1f;
        __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_1f >> 8);
        __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_1f >> 0x10);
        __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_1f >> 0x18);
        __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_1f >> 0x20);
        __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_1f >> 0x28);
        __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_1f >> 0x30);
      }
      else {
        dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                 )((longlong)FVar7 + 8);
        uVar8 = SUB84(dVar2,0);
        uVar10 = (int)((ulonglong)dVar2 >> 0x20);
        if (auVar3._0_8_ <= dVar2) {
          uVar8 = auVar3._0_4_;
          uVar10 = auVar3._4_4_;
        }
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar2 <= auVar3._8_8_) {
          uVar9 = SUB84(dVar2,0);
          uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar8);
        uVar8 = SUB84(local_40,0);
        uVar10 = (undefined4)((ulonglong)local_40 >> 0x20);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        if (dVar2 <= local_40) {
          uVar8 = SUB84(dVar2,0);
          uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar9);
        dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar9 = SUB84(dVar2,0);
        uVar11 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= auStack_38._0_8_) {
          uVar9 = auStack_38._0_4_;
          uVar11 = auStack_38._4_4_;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar8);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar8 = SUB84(dVar2,0);
        uVar10 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= auStack_38._8_8_) {
          uVar8 = auStack_38._8_4_;
          uVar10 = auStack_38._12_4_;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar8);
        uVar9 = SUB84(dStack_28,0);
        uVar11 = (undefined4)((ulonglong)dStack_28 >> 0x20);
        dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        if (dStack_28 <= dVar2) {
          uVar9 = SUB84(dVar2,0);
          uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar9);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPayloadForExternalThread @ 1436ffed0

TGeometryParticle<double,3> * __cdecl
Chaos::VisualDebugger::Utils::GetPayloadForExternalThread(FAccelerationStructureHandle *param_1)

{
  return param_1->ExternalGeometryParticle;
}

// Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace @ 143704ed0

UEnum * __cdecl Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace(void)

{
  if (Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton,
               &Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EChaosBufferMode @ 143704f10

UEnum * __cdecl Z_Construct_UEnum_Chaos_EChaosBufferMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EChaosSoftsLocalDampingSpace @ 143704f50

UEnum * __cdecl Z_Construct_UEnum_Chaos_EChaosSoftsLocalDampingSpace(void)

{
  if (Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EChaosSoftsLocalDampingSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosSoftsLocalDampingSpace.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace @ 143704f90

UEnum * __cdecl Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace(void)

{
  if (Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EChaosSoftsSimulationSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosSoftsSimulationSpace.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EChaosSolverTickMode @ 143704fd0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EChaosSolverTickMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EChaosThreadingMode @ 143705010

UEnum * __cdecl Z_Construct_UEnum_Chaos_EChaosThreadingMode(void)

{
  if (Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_ECollisionTypeEnum @ 143705050

UEnum * __cdecl Z_Construct_UEnum_Chaos_ECollisionTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EDamageModelTypeEnum @ 143705090

UEnum * __cdecl Z_Construct_UEnum_Chaos_EDamageModelTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EDamageModelTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDamageModelTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EDamageModelTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDamageModelTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum @ 1437050d0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldCullingOperationType @ 143705110

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldCullingOperationType(void)

{
  if (Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldFalloffType @ 143705150

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldFalloffType(void)

{
  if (Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldFilterType @ 143705190

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldFilterType(void)

{
  if (Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldIntegerType @ 1437051d0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldIntegerType(void)

{
  if (Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldObjectType @ 143705210

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldObjectType(void)

{
  if (Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldOperationType @ 143705250

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldOperationType(void)

{
  if (Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldOutputType @ 143705290

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldOutputType(void)

{
  if (Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields @ 1437052d0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields(void)

{
  if (Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldPhysicsType @ 143705310

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldPhysicsType(void)

{
  if (Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldPositionType @ 143705350

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldPositionType(void)

{
  if (Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldResolutionType @ 143705390

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldResolutionType(void)

{
  if (Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldScalarType @ 1437053d0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldScalarType(void)

{
  if (Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EFieldVectorType @ 143705410

UEnum * __cdecl Z_Construct_UEnum_Chaos_EFieldVectorType(void)

{
  if (Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum @ 143705450

UEnum * __cdecl Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EImplicitTypeEnum @ 143705490

UEnum * __cdecl Z_Construct_UEnum_Chaos_EImplicitTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum @ 1437054d0

UEnum * __cdecl Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EObjectStateTypeEnum @ 143705510

UEnum * __cdecl Z_Construct_UEnum_Chaos_EObjectStateTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_ESetMaskConditionType @ 143705550

UEnum * __cdecl Z_Construct_UEnum_Chaos_ESetMaskConditionType(void)

{
  if (Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton;
}

// Z_Construct_UEnum_Chaos_EWaveFunctionType @ 143705590

UEnum * __cdecl Z_Construct_UEnum_Chaos_EWaveFunctionType(void)

{
  if (Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton,
               &Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChaosSolverConfiguration @ 1437055d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChaosSolverConfiguration(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.InnerSingleton,
               &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChaosSolverConfiguration.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFieldCollection @ 143705650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFieldCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFieldCollection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFieldCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FFieldCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFieldCollection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFieldCollection.InnerSingleton;
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

// IMPLEMENT_MODULE_Chaos @ 1437056d0

void __cdecl IMPLEMENT_MODULE_Chaos(void)

{
  return;
}

// GlobalFrame'' @ 150361f90

void __cdecl `dynamic_atexit_destructor_for_'ChaosDD::Private::FChaosDDContext::GlobalFrame__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (ChaosDD::Private::FChaosDDContext::GlobalFrame.SharedReferenceCount.ReferenceController
            );
  return;
}

// GlobalFrameCS'' @ 150361fb0

void __cdecl
`dynamic_atexit_destructor_for_'ChaosDD::Private::FChaosDDContext::GlobalFrameCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150361fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&ChaosDD::Private::FChaosDDContext::GlobalFrameCS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosThreadEnabled'' @ 150361fd0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosThreadEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosThreadEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaos_DebugDraw_EnableGlobalQueue'' @ 150361ff0

void __cdecl
ChaosDD::Private::_dynamic_atexit_destructor_for__CVarChaos_DebugDraw_EnableGlobalQueue__(void)

{
  CVarChaos_DebugDraw_EnableGlobalQueue._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaos_DebugDraw_EnableGlobalQueue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDedicatedThreadDesiredHz'' @ 150362010

void __cdecl _dynamic_atexit_destructor_for__CVarDedicatedThreadDesiredHz__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDedicatedThreadDesiredHz);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDedicatedThreadSyncThreshold'' @ 150362030

void __cdecl _dynamic_atexit_destructor_for__CVarDedicatedThreadSyncThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDedicatedThreadSyncThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'DumpHier_ElementBuckets'' @ 150362050

void __cdecl _dynamic_atexit_destructor_for__DumpHier_ElementBuckets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpHier_ElementBuckets);
  return;
}

// `dynamic_atexit_destructor_for_'GDefaultChaosSettings'' @ 150362070

void __cdecl Chaos::_dynamic_atexit_destructor_for__GDefaultChaosSettings__(void)

{
  GDefaultChaosSettings = (FInternalDefaultSettings)&___7IChaosSettingsProvider__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogChaos'' @ 150362090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaos__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaos);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosDD'' @ 1503620b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosDD__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosDD);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosDataflow'' @ 1503620d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosDataflow__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosDataflow);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosDebug'' @ 1503620f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosDebug__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosGeneral'' @ 150362110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosGeneral__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosGeneral);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosSimulation'' @ 150362130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosSimulation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosSimulation);
  return;
}

// `dynamic_atexit_destructor_for_'LogChaosThread'' @ 150362150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogChaosThread__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogChaosThread);
  return;
}

// `dynamic_atexit_destructor_for_'UManagedArrayLogging'' @ 150362170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__UManagedArrayLogging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&UManagedArrayLogging);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Chaos'' @ 150362190

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Chaos__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Chaos.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Chaos.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Chaos.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_PhysicsCounters'' @ 1503621b0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_PhysicsCounters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_PhysicsCounters.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_PhysicsCounters.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_PhysicsCounters.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_PhysicsVerbose'' @ 1503621d0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_PhysicsVerbose__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_PhysicsVerbose.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_PhysicsVerbose.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_PhysicsVerbose.Name.Data.AllocatorInstance.Data !=
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

