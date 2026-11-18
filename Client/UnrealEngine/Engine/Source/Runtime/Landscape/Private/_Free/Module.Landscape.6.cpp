// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 250

// AllStreamingManagers'' @ 14107ccc0

void __cdecl
`dynamic_initializer_for_'FLandscapeTextureStreamingManager::AllStreamingManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLandscapeTextureStreamingManager::AllStreamingManagers__);
  return;
}

// PositionCurve'' @ 14107cce0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 14107cd00

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 14107cd20

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'CVarGrassVisualLogCameraLocations'' @ 14107cd40

void __cdecl _dynamic_initializer_for__CVarGrassVisualLogCameraLocations__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarGrassVisualLogCameraLocations,L"grass.VisualLog.CameraLocations",local_res8,
             L"Allows to visualize the cameras used for landscape grass in the visual logger ",0);
  atexit(_dynamic_atexit_destructor_for__CVarGrassVisualLogCameraLocations__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeDebugShaders'' @ 14107cd90

void __cdecl _dynamic_initializer_for__CVarLandscapeDebugShaders__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarLandscapeDebugShaders,L"landscape.DebugShaders",local_res8,
             L"De-optimizes landscape shaders for easier debugging (use in conjunction with r.Shaders.Symbols=1 to dump shader symbols)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeDebugShaders__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds'' @ 14107cde0

void __cdecl _dynamic_initializer_for__CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds,
             L"landscape.Nanite.MaxSimultaneousMultithreadBuilds",
             &LandscapeMaxSimultaneousMultithreadNaniteBuilds,
             L"Max number of simultaneous Nanite static mesh tasks (-1 = unlimited )",0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeMultithreadNaniteBuild'' @ 14107ce30

void __cdecl _dynamic_initializer_for__CVarLandscapeMultithreadNaniteBuild__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeMultithreadNaniteBuild,L"landscape.Nanite.MultithreadBuild",
             &LandscapeMultithreadNaniteBuild,
             L"Multithread nanite landscape build in (World Partition Maps Only)",0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeMultithreadNaniteBuild__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeSplineToSplineComponentMaxIterations'' @ 14107ce80

void __cdecl _dynamic_initializer_for__CVarLandscapeSplineToSplineComponentMaxIterations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLandscapeSplineToSplineComponentMaxIterations,
             L"Landscape.Splines.ApplyToSplineComponentMaxIterations",
             &LandscapeSplineToSplineComponentMaxIterations,
             L"Max possible iterations when converting a landscape spline into a spline component",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeSplineToSplineComponentMaxIterations__);
  return;
}

// `dynamic_initializer_for_'CVarLiveRebuildNaniteOnModification'' @ 14107ced0

void __cdecl _dynamic_initializer_for__CVarLiveRebuildNaniteOnModification__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLiveRebuildNaniteOnModification,L"landscape.Nanite.LiveRebuildOnModification",
             &LiveRebuildNaniteOnModification,
             L"Trigger a rebuild of Nanite representation immediately when a modification is performed (World Partition Maps Only)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLiveRebuildNaniteOnModification__);
  return;
}

// `dynamic_initializer_for_'CVarMaxAsyncNaniteProxiesPerSecond'' @ 14107cf20

void __cdecl _dynamic_initializer_for__CVarMaxAsyncNaniteProxiesPerSecond__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarMaxAsyncNaniteProxiesPerSecond,L"landscape.Nanite.MaxAsyncProxyBuildsPerSecond",
             __real_40c00000,L"Number of Async nanite proxies to dispatch per second",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxAsyncNaniteProxiesPerSecond__);
  return;
}

// `dynamic_initializer_for_'CVarSplinesAlwaysUseBlockAll'' @ 14107cf70

void __cdecl _dynamic_initializer_for__CVarSplinesAlwaysUseBlockAll__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSplinesAlwaysUseBlockAll,L"splines.blockall",&SplinesAlwaysUseBlockAll,
             L"Force splines to always use the BlockAll collision profile instead of whatever is stored in the CollisionProfileName property"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplinesAlwaysUseBlockAll__);
  return;
}

// `dynamic_initializer_for_'CVarUseStreamingManagerForCameras'' @ 14107cfc0

void __cdecl _dynamic_initializer_for__CVarUseStreamingManagerForCameras__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseStreamingManagerForCameras,L"grass.UseStreamingManagerForCameras",
             &GUseStreamingManagerForCameras,
             L"1: Use Streaming Manager; 0: Use ViewLocationsRenderedLastFrame",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseStreamingManagerForCameras__);
  return;
}

// `dynamic_initializer_for_'CmdDumpLandscapeWeightmapAllocations'' @ 14107d010

void __cdecl UE::Landscape::_dynamic_initializer_for__CmdDumpLandscapeWeightmapAllocations__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DumpLandscapeWeightmapAllocations;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdDumpLandscapeWeightmapAllocations,L"landscape.DumpTargetLayerAllocations",
             L"[optional: -details] - Dumps a report of target layers allocated for every landscape. \n-details shows a detailed report of allocated target layers for each individual landscape component. \n"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__CmdDumpLandscapeWeightmapAllocations__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 14107d150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14107d190

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14107d220

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14107d2b0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 14107d340

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 14107d3d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 14107d460

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 14107d4f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 14107d580

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 14107d610

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 14107d6a0

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

// `dynamic_initializer_for_'StatPtr_STAT_LandscapeSubsystemTick'' @ 14107d730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LandscapeSubsystemTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LandscapeSubsystemTick ==
      (FThreadSafeStaticStat<FStat_STAT_LandscapeSubsystemTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LandscapeSubsystemTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeSubsystemTick,*pFVar1,
               L"LandscapeSubsystem Tick","STATGROUP_Landscape","STATCAT_Advanced",L"Landscape",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h__Script_Landscape_2372301720'' @ 14107d7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h__Script_Landscape_2372301720__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h__Script_Landscape_2624903124'' @ 14107d800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h__Script_Landscape_2624903124__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineMeshesActor_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h__Script_Landscape_3781042261'' @ 14107d840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h__Script_Landscape_3781042261__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h__Script_Landscape_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h__Script_Landscape_2993508740'' @ 14107d890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h__Script_Landscape_2993508740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h__Script_Landscape_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h__Script_Landscape_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h__Script_Landscape_1439434262'' @ 14107d8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h__Script_Landscape_1439434262__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h__Script_Landscape_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h__Script_Landscape_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h__Script_Landscape_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h__Script_Landscape_3152310574'' @ 14107d930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h__Script_Landscape_3152310574__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h__Script_Landscape_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h__Script_Landscape_73802399'' @ 14107d980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h__Script_Landscape_73802399__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h__Script_Landscape_2631049855'' @ 14107d9c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h__Script_Landscape_2631049855__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h__Script_Landscape_3189650089'' @ 14107da00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h__Script_Landscape_3189650089__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h__Script_Landscape_3796133822'' @ 14107da40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h__Script_Landscape_3796133822__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h__Script_Landscape_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h__Script_Landscape_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h__Script_Landscape_2394510514'' @ 14107da90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h__Script_Landscape_2394510514__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h__Script_Landscape_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h__Script_Landscape_616146738'' @ 14107dae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h__Script_Landscape_616146738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords @ 145facd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType @ 145facd60

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ETerrainCoordMappingType @ 145facda0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ETerrainCoordMappingType(void)

{
  if (Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton;
}

// ETerrainCoordMappingType_StaticEnum @ 145facde0

UEnum * __cdecl ETerrainCoordMappingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType,(UObject *)pUVar1,
                       L"ETerrainCoordMappingType");
  }
  return Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton;
}

// ELandscapeCustomizedCoordType_StaticEnum @ 145face20

UEnum * __cdecl ELandscapeCustomizedCoordType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType,(UObject *)pUVar1,
                       L"ELandscapeCustomizedCoordType");
  }
  return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample @ 145facf20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch @ 145fad020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton;
}

// NewProp_PreviewUsed_SetBit @ 145fad060

void __cdecl
Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x108) = *(uint *)((longlong)param_1 + 0x108) | 1;
  return;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight @ 145fad1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput @ 145fad4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
                OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
         OuterSingleton;
}

// Z_Construct_UScriptStruct_FPhysicalMaterialInput @ 145fad520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialInput.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicalMaterialInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialInput.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicalMaterialInput.InnerSingleton;
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

// NewStructOps @ 145fad5a0

void * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicalMaterialInput,&UE::CoreUObject::Private::Construct<FPhysicalMaterialInput>,&UE::CoreUObject::Private::ConstructForTests<FPhysicalMaterialInput>,&UE::CoreUObject::Private::Destruct<FPhysicalMaterialInput>,&UE::CoreUObject::Private::Copy<FPhysicalMaterialInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULandscapeTextureHash @ 145fad5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureHash(void)

{
  if (Z_Registration_Info_UClass_ULandscapeTextureHash.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeTextureHash.OuterSingleton,
               &Z_Construct_UClass_ULandscapeTextureHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureHash.OuterSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeTextureType @ 145fad620

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeTextureType(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeTextureType.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureType.InnerSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeTextureUsage @ 145fad660

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeTextureUsage(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeTextureUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeTextureUsage.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeTextureUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureUsage.InnerSingleton;
}

// ELandscapeTextureType_StaticEnum @ 145fad6a0

UEnum * __cdecl ELandscapeTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeTextureType,(UObject *)pUVar1,
                       L"ELandscapeTextureType");
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeSettings @ 145fad730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeSettings(void)

{
  if (Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton,
               &Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode @ 145fad7c0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton;
}

// ELandscapeTextureUsage_StaticEnum @ 145fad810

UEnum * __cdecl ELandscapeTextureUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeTextureUsage,(UObject *)pUVar1,
                       L"ELandscapeTextureUsage");
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton;
}

// ELandscapeDirtyingMode_StaticEnum @ 145fad850

UEnum * __cdecl ELandscapeDirtyingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode,(UObject *)pUVar1,
                       L"ELandscapeDirtyingMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton;
}

// NewProp_bShowDialogForAutomaticLayerCreation_SetBit @ 145fad940

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bShowDialogForAutomaticLayerCreation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewProp_bDisablePaintingStartupSlowdown_SetBit @ 145fad950

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisablePaintingStartupSlowdown_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bShouldUpdateEditLayersDuringInteractiveChanges_SetBit @ 145fad960

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::
NewProp_bShouldUpdateEditLayersDuringInteractiveChanges_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bRestrictiveMode_SetBit @ 145fad970

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  return;
}

// NewProp_bDisplayTargetLayerThumbnails_SetBit @ 145fad980

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisplayTargetLayerThumbnails_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bDisableTemporalAntiAliasingInLandscapeMode_SetBit @ 145fad990

void __cdecl
Z_Construct_UClass_ULandscapeSettings_Statics::
NewProp_bDisableTemporalAntiAliasingInLandscapeMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory @ 145fada60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory(void)

{
  if (Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.OuterSingleton,
               &Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeTextureStorageProviderFactory @ 145fadaa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureStorageProviderFactory(void)

{
  if (Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton,
               &Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton;
}

// NewProp_bCompressed_SetBit @ 145fadae0

void __cdecl
Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_bCompressed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 145fadaf0

void * __cdecl Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLandscapeTexture2DMipMap,&UE::CoreUObject::Private::Construct<FLandscapeTexture2DMipMap>,&UE::CoreUObject::Private::ConstructForTests<FLandscapeTexture2DMipMap>,&UE::CoreUObject::Private::Destruct<FLandscapeTexture2DMipMap>,&UE::CoreUObject::Private::Copy<FLandscapeTexture2DMipMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ALandscapeSplineActor @ 145fadb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALandscapeSplineActor(void)

{
  if (Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton,
               &Z_Construct_UClass_ALandscapeSplineActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton;
}

// Z_Construct_UClass_ALandscapeSplineMeshesActor @ 145fadd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALandscapeSplineMeshesActor(void)

{
  if (Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton,
               &Z_Construct_UClass_ALandscapeSplineMeshesActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.OuterSingleton;
}

// Z_Construct_UClass_ULandscapeSubsystem @ 145fadd80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULandscapeSubsystem(void)

{
  if (Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton,
               &Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend @ 145fae080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton;
}

// Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType @ 145fae0c0

UEnum * __cdecl Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType(void)

{
  if (Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton,
               &Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLayerBlendInput @ 145fae100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLayerBlendInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLayerBlendInput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLayerBlendInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FLayerBlendInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLayerBlendInput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLayerBlendInput.InnerSingleton;
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

// ELandscapeLayerBlendType_StaticEnum @ 145fae180

UEnum * __cdecl ELandscapeLayerBlendType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType,(UObject *)pUVar1,
                       L"ELandscapeLayerBlendType");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton;
}

// NewStructOps @ 145fae1c0

void * __cdecl Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLayerBlendInput,&UE::CoreUObject::Private::Construct<FLayerBlendInput>,&UE::CoreUObject::Private::ConstructForTests<FLayerBlendInput>,&UE::CoreUObject::Private::Destruct<FLayerBlendInput>,&UE::CoreUObject::Private::Copy<FLayerBlendInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AddLambda<`ULandscapeSubsystem::Initialize'::__l2::<lambda_1>_> @ 145fae340

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_ULandscapeSubsystem::Initialize_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFQualityLevels_Scalability___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy,`ULandscapeSubsystem::Initialize'::`2'::<lambda_1>_>
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

// BlitRGChannelsToSingleTmpl<unsigned_char,`UE::Landscape::Private::BlitWeightChannelsToUint8'::__l2::<lambda_1>_> @ 145faf440

int __cdecl
UE::Landscape::Private::
BlitRGChannelsToSingleTmpl<unsigned_char,_UE::Landscape::Private::BlitWeightChannelsToUint8_::__l2::<lambda_1>_>
          (uchar *param_1,FBlitBuffer2DDesc *param_2,uint *param_3,FBlitBuffer2DDesc *param_4,
          TIntRect<int> *param_5,<lambda_1> param_6)

{
  uint *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if ((param_2->BufferSize <
       (*(int *)((longlong)&(param_2->Rect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(param_2->Rect).field0_0x0 + 4)) * param_2->Stride) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.Rect.Height() * Dest.Stride <= Dest.BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x75,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if ((param_4->BufferSize <
       (*(int *)((longlong)&(param_4->Rect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4)) * param_4->Stride) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Rect.Height() * Src.Stride <= Src.BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x76,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar3 = *(undefined8 *)&(param_2->Rect).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->Rect).field0_0x0 + 8);
  iVar7 = *(int *)&(param_4->Rect).field0_0x0;
  iVar15 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4);
  iVar16 = (int)uVar3;
  iVar14 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 8);
  iVar10 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 0xc);
  iVar17 = iVar7;
  if (iVar7 < iVar16) {
    iVar17 = iVar16;
  }
  iVar8 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar15 < iVar8) {
    iVar15 = iVar8;
  }
  iVar8 = (int)uVar4;
  if (iVar8 < iVar14) {
    iVar14 = iVar8;
  }
  iVar8 = *(int *)((longlong)&param_5->field0_0x0 + 4);
  iVar9 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  if (iVar14 < iVar17) {
    iVar14 = iVar17;
  }
  if (iVar10 < iVar15) {
    iVar10 = iVar15;
  }
  iVar9 = *(int *)&param_5->field0_0x0;
  if (*(int *)&param_5->field0_0x0 < iVar17) {
    iVar9 = iVar17;
  }
  if (iVar8 < iVar15) {
    iVar8 = iVar15;
  }
  iVar15 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  if (iVar14 < iVar15) {
    iVar15 = iVar14;
  }
  iVar14 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  if (iVar10 < iVar14) {
    iVar14 = iVar10;
  }
  if (iVar15 < iVar9) {
    iVar15 = iVar9;
  }
  if (iVar14 < iVar8) {
    iVar14 = iVar8;
  }
  iVar10 = iVar15 - iVar9;
  if ((iVar14 - iVar8) * iVar10 < 1) {
    return 0;
  }
  if (iVar8 < iVar14) {
    iVar17 = iVar8;
    do {
      puVar13 = param_3 + (longlong)
                          ((iVar17 - *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4)) *
                          param_4->Stride) + (longlong)(iVar9 - iVar7);
      puVar1 = puVar13 + iVar10;
      puVar11 = param_1 + (longlong)
                          ((iVar17 - *(int *)((longlong)&(param_2->Rect).field0_0x0 + 4)) *
                          param_2->Stride) + (longlong)(iVar9 - iVar16);
      puVar2 = puVar11 + iVar10;
      if ((puVar13 < param_3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Read >= SrcBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((param_3 + param_4->BufferSize < puVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReadEnd <= SrcBuffer + Src.BufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar1 < puVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Read <= ReadEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar11 < param_1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Write >= DestBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x90,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((param_1 + param_2->BufferSize < puVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteEnd <= DestBuffer + Dest.BufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x91,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar2 < puVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Write <= WriteEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x92,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      for (; puVar13 < puVar1; puVar13 = puVar13 + 1) {
        if (puVar2 <= puVar11) goto LAB_145faf7a6;
        uVar12 = ((*puVar13 >> 0x10 & 0xff) << 8 | *puVar13 >> 8 & 0xff) * 0xff;
        if ((0xfffeff < uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Weight <= 255",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                               ,0xaf,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        *puVar11 = (uchar)((ulonglong)uVar12 / 0xffff);
        puVar11 = puVar11 + 1;
      }
      if ((puVar13 != puVar1) || (puVar11 != puVar2)) {
LAB_145faf7a6:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Read == ReadEnd && Write == WriteEnd",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                           ,0x9a,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar14);
  }
  return (iVar15 - iVar9) * (iVar14 - iVar8);
}

// BlitRGChannelsToSingleTmpl<unsigned_short,`UE::Landscape::Private::BlitHeightChannelsToUint16'::__l2::<lambda_1>_> @ 145faf840

int __cdecl
UE::Landscape::Private::
BlitRGChannelsToSingleTmpl<unsigned_short,_UE::Landscape::Private::BlitHeightChannelsToUint16_::__l2::<lambda_1>_>
          (ushort *param_1,FBlitBuffer2DDesc *param_2,uint *param_3,FBlitBuffer2DDesc *param_4,
          TIntRect<int> *param_5,<lambda_1> param_6)

{
  uint *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if ((param_2->BufferSize <
       (*(int *)((longlong)&(param_2->Rect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(param_2->Rect).field0_0x0 + 4)) * param_2->Stride) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.Rect.Height() * Dest.Stride <= Dest.BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x75,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if ((param_4->BufferSize <
       (*(int *)((longlong)&(param_4->Rect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4)) * param_4->Stride) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Rect.Height() * Src.Stride <= Src.BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x76,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar3 = *(undefined8 *)&(param_2->Rect).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->Rect).field0_0x0 + 8);
  iVar7 = *(int *)&(param_4->Rect).field0_0x0;
  iVar14 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4);
  iVar15 = (int)uVar3;
  iVar13 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 8);
  iVar10 = *(int *)((longlong)&(param_4->Rect).field0_0x0 + 0xc);
  iVar16 = iVar7;
  if (iVar7 < iVar15) {
    iVar16 = iVar15;
  }
  iVar8 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar14 < iVar8) {
    iVar14 = iVar8;
  }
  iVar8 = (int)uVar4;
  if (iVar8 < iVar13) {
    iVar13 = iVar8;
  }
  iVar8 = *(int *)((longlong)&param_5->field0_0x0 + 4);
  iVar9 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  if (iVar13 < iVar16) {
    iVar13 = iVar16;
  }
  if (iVar10 < iVar14) {
    iVar10 = iVar14;
  }
  iVar9 = *(int *)&param_5->field0_0x0;
  if (*(int *)&param_5->field0_0x0 < iVar16) {
    iVar9 = iVar16;
  }
  if (iVar8 < iVar14) {
    iVar8 = iVar14;
  }
  iVar14 = *(int *)((longlong)&param_5->field0_0x0 + 8);
  if (iVar13 < iVar14) {
    iVar14 = iVar13;
  }
  iVar13 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
  if (iVar10 < iVar13) {
    iVar13 = iVar10;
  }
  if (iVar14 < iVar9) {
    iVar14 = iVar9;
  }
  if (iVar13 < iVar8) {
    iVar13 = iVar8;
  }
  iVar10 = iVar14 - iVar9;
  if ((iVar13 - iVar8) * iVar10 < 1) {
    return 0;
  }
  if (iVar8 < iVar13) {
    iVar16 = iVar8;
    do {
      puVar12 = param_3 + (longlong)
                          ((iVar16 - *(int *)((longlong)&(param_4->Rect).field0_0x0 + 4)) *
                          param_4->Stride) + (longlong)(iVar9 - iVar7);
      puVar1 = puVar12 + iVar10;
      puVar11 = param_1 + (longlong)
                          ((iVar16 - *(int *)((longlong)&(param_2->Rect).field0_0x0 + 4)) *
                          param_2->Stride) + (longlong)(iVar9 - iVar15);
      puVar2 = puVar11 + iVar10;
      if ((puVar12 < param_3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Read >= SrcBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((param_3 + param_4->BufferSize < puVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReadEnd <= SrcBuffer + Src.BufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar1 < puVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Read <= ReadEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x8f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar11 < param_1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Write >= DestBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x90,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((param_1 + param_2->BufferSize < puVar2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteEnd <= DestBuffer + Dest.BufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x91,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((puVar2 < puVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Write <= WriteEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                             ,0x92,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      for (; puVar12 < puVar1; puVar12 = puVar12 + 1) {
        if (puVar2 <= puVar11) goto LAB_145fafb68;
        *puVar11 = (short)(*puVar12 >> 0x10) << 8 | (ushort)(*puVar12 >> 8) & 0xff;
        puVar11 = puVar11 + 1;
      }
      if ((puVar12 != puVar1) || (puVar11 != puVar2)) {
LAB_145fafb68:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Read == ReadEnd && Write == WriteEnd",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                           ,0x9a,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar13);
  }
  return (iVar14 - iVar9) * (iVar13 - iVar8);
}

// DefaultConstructItems<FLandscapeTextureStorageMipProvider::FIORequest,int> @ 145fafc00

void __cdecl
DefaultConstructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLandscapeTexture2DMipMap,int> @ 145fafc30

void __cdecl DefaultConstructItems<FLandscapeTexture2DMipMap,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined4 *)(puVar1 + 0x15) = 0xffffffff;
      puVar1[0x19] = 0xff;
      *(undefined8 *)(puVar1 + 0x20) = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)(puVar1 + 0x28) = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x38;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int> @ 145fafcb0

void __cdecl
DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>(FIORequest *param_1,int param_2)

{
  IBulkDataIORequest *pIVar1;
  TUniquePtr<IBulkDataIORequest,TDefaultDelete<IBulkDataIORequest>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->BulkDataIORequest;
    do {
      pIVar1 = pTVar2->Ptr;
      if (pIVar1 != (IBulkDataIORequest *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLandscapeTexture2DMipMap,int> @ 145fafcf0

void __cdecl
DestructItems<FLandscapeTexture2DMipMap,int>(FLandscapeTexture2DMipMap *param_1,int param_2)

{
  FBulkData *this;
  
  if (param_2 != 0) {
    this = (FBulkData *)&param_1->BulkData;
    do {
      FBulkData::~FBulkData(this);
      this = (FBulkData *)(this[1].BulkMeta.Data + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int> @ 145fafd30

void __cdecl
DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>
          (TFunction<void___cdecl(FRDGBuilder_&)> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::TSTR_FRDGBuilderRecorder_Flush131>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145fb06a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::Flush_::__l5::TSTR_FRDGBuilderRecorder_Flush131>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::TSTR_FRDGBuilderRecorder_Flush131>
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
      if (bVar8) goto LAB_145fb07f1;
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
    goto LAB_145fb09e5;
  }
LAB_145fb07f1:
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
LAB_145fb08cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fb08cf;
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
LAB_145fb09e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145fb0a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand_::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::TSTR_FRDGBuilderRecorder_RDGCommand171>
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
      if (bVar8) goto LAB_145fb0b71;
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
    goto LAB_145fb0d65;
  }
LAB_145fb0b71:
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
LAB_145fb0c4f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fb0c4f;
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
LAB_145fb0d65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l7::TSTR_RDGImmediateRenderCommand201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145fb0da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l7::TSTR_RDGImmediateRenderCommand201>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l7::TSTR_RDGImmediateRenderCommand201>
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
      if (bVar8) goto LAB_145fb0ef1;
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
    goto LAB_145fb10e5;
  }
LAB_145fb0ef1:
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
LAB_145fb0fcf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fb0fcf;
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
LAB_145fb10e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_> @ 145fb14f0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar13;
  longlong lVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar15;
  
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
  iVar8 = iVar6 * 2 + 1;
  iVar9 = iVar8;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_145fb1612:
      if (iVar11 == 0) {
        iVar8 = param_2 + -1;
        lVar14 = (longlong)iVar8;
        if (0 < iVar8) {
          pTVar15 = param_1 + lVar14;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8);
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar15->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar15->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8) = uVar4;
            iVar9 = 0;
            if (1 < iVar8) {
              do {
                iVar6 = iVar9 * 2;
                iVar11 = iVar6 + 1;
                if (iVar6 + 2 < iVar8) {
                  iVar10 = ::FName::Compare((FName *)&param_1[iVar6 + 2].ElementData,
                                            (FName *)&param_1[iVar11].ElementData);
                  if (iVar10 < 0) {
                    iVar11 = iVar6;
                  }
                  iVar11 = iVar11 + 1;
                }
                pTVar13 = param_1 + iVar11;
                pTVar12 = param_1 + iVar9;
                iVar9 = ::FName::Compare((FName *)&pTVar12->ElementData,
                                         (FName *)&pTVar13->ElementData);
                if (-1 < iVar9) break;
                uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
                TVar3 = pTVar12->_s_1;
                uVar4 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
                pTVar12->_s_1 = pTVar13->_s_1;
                *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
                pTVar13->_s_1 = TVar3;
                *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
                iVar9 = iVar11;
              } while (iVar11 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar14 = lVar14 + -1;
            pTVar15 = pTVar15 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar8 = iVar9 + -2;
      iVar9 = iVar8;
      iVar11 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = ::FName::Compare((FName *)&param_1[iVar8 + 2].ElementData,
                               (FName *)&param_1[iVar10].ElementData);
      if (iVar7 < 0) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar12 = param_1 + iVar10;
    pTVar15 = param_1 + iVar6;
    iVar8 = ::FName::Compare((FName *)&pTVar15->ElementData,(FName *)&pTVar12->ElementData);
    if (-1 < iVar8) goto LAB_145fb1612;
    uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
    iVar8 = iVar10 * 2 + 1;
    TVar3 = pTVar15->_s_1;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
    pTVar15->_s_1 = pTVar12->_s_1;
    *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar2;
    pTVar12->_s_1 = TVar3;
    *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
    iVar6 = iVar10;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 145fb1720

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *this;
  undefined4 uVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  uint uVar5;
  undefined8 uVar6;
  FNameEntryId FVar7;
  uint uVar8;
  undefined8 uVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar10;
  FNameEntryId FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar22;
  int iVar23;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar18 = iVar16 * 2 + 1;
  iVar23 = iVar18;
  iVar20 = iVar16;
  do {
    while (param_2 <= iVar18) {
LAB_145fb1857:
      if (iVar20 == 0) {
        iVar18 = param_2 + -1;
        lVar21 = (longlong)iVar18;
        if (0 < iVar18) {
          pTVar22 = param_1 + lVar21;
          do {
            uVar6 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8);
            uVar2 = *(undefined4 *)((param_1->ElementData).Pad + 0x10);
            iVar23 = 0;
            TVar10 = param_1->_s_1;
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar22->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar6;
            *(undefined4 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined4 *)((longlong)(pTVar22->ElementData).Pad + 0x10);
            pTVar22->_s_1 = TVar10;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8) = uVar9;
            *(undefined4 *)((longlong)(pTVar22->ElementData).Pad + 0x10) = uVar2;
            if (1 < iVar18) {
              do {
                iVar16 = iVar23 * 2;
                iVar20 = iVar16 + 1;
                if (iVar16 + 2 < iVar18) {
                  iVar19 = ::FName::Compare((FName *)&param_1[iVar16 + 2].ElementData,
                                            (FName *)&param_1[iVar20].ElementData);
                  if (iVar19 < 0) {
                    iVar20 = iVar16;
                  }
                  iVar20 = iVar20 + 1;
                }
                pTVar1 = param_1 + iVar20;
                this = param_1 + iVar23;
                iVar23 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar1->ElementData)
                ;
                if (-1 < iVar23) break;
                FVar11.Value = *(int *)pTVar1;
                uVar12 = *(int *)((longlong)pTVar1 + 4);
                uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
                uVar2 = ((FNameEntryId *)(this->ElementData).Pad)[4];
                FVar13.Value = *(int *)this;
                uVar14 = *(int *)((longlong)this + 4);
                uVar9 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2);
                *(int *)this = FVar11.Value;
                *(uint *)((longlong)this + 4) = uVar12;
                *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2) = uVar6;
                ((FNameEntryId *)(this->ElementData).Pad)[4] =
                     (uint)((FNameEntryId *)(pTVar1->ElementData).Pad)[4];
                *(int *)pTVar1 = FVar13.Value;
                *(uint *)((longlong)pTVar1 + 4) = uVar14;
                *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar9;
                ((FNameEntryId *)(pTVar1->ElementData).Pad)[4] = (FNameEntryId)uVar2;
                iVar23 = iVar20;
              } while (iVar20 * 2 + 1 < iVar18);
            }
            iVar18 = iVar18 + -1;
            lVar21 = lVar21 + -1;
            pTVar22 = pTVar22 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar16 = iVar20 + -1;
      iVar18 = iVar23 + -2;
      iVar23 = iVar18;
      iVar20 = iVar16;
    }
    iVar18 = iVar16 * 2;
    iVar19 = iVar18 + 1;
    if (iVar18 + 2 < param_2) {
      iVar17 = ::FName::Compare((FName *)&param_1[iVar18 + 2].ElementData,
                                (FName *)&param_1[iVar19].ElementData);
      if (iVar17 < 0) {
        iVar19 = iVar18;
      }
      iVar19 = iVar19 + 1;
    }
    pTVar22 = param_1 + iVar19;
    pTVar1 = param_1 + iVar16;
    iVar18 = ::FName::Compare((FName *)&pTVar1->ElementData,(FName *)&pTVar22->ElementData);
    if (-1 < iVar18) goto LAB_145fb1857;
    FVar4.Value = *(int *)pTVar22;
    uVar5 = *(int *)((longlong)pTVar22 + 4);
    uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2);
    uVar2 = ((FNameEntryId *)(pTVar1->ElementData).Pad)[4];
    FVar7.Value = *(int *)pTVar1;
    uVar8 = *(int *)((longlong)pTVar1 + 4);
    uVar9 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
    *(int *)pTVar1 = FVar4.Value;
    *(uint *)((longlong)pTVar1 + 4) = uVar5;
    *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar6;
    ((FNameEntryId *)(pTVar1->ElementData).Pad)[4] =
         (uint)((FNameEntryId *)(pTVar22->ElementData).Pad)[4];
    iVar18 = iVar19 * 2 + 1;
    *(int *)pTVar22 = FVar7.Value;
    *(uint *)((longlong)pTVar22 + 4) = uVar8;
    *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2) = uVar9;
    ((FNameEntryId *)(pTVar22->ElementData).Pad)[4] = (FNameEntryId)uVar2;
    iVar16 = iVar19;
  } while( true );
}

// InternalConstructor<ALandscapeSplineActor> @ 145fb1980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALandscapeSplineActor>(FObjectInitializer *param_1)

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
    this->_padding_ = (longlong)&ALandscapeSplineActor::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ALandscapeSplineActor::_vftable__for__ILandscapeSplineInterface__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RootComponent0");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
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

// InternalConstructor<ALandscapeSplineMeshesActor> @ 145fb1a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALandscapeSplineMeshesActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    APartitionActor::APartitionActor((APartitionActor *)this,param_1);
    this->_padding_ = (longlong)&___7ALandscapeSplineMeshesActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    AActor::SetCanBeDamaged(this,false);
    return;
  }
  return;
}

// InternalConstructor<ULandscapeSettings> @ 145fb1a90

void __cdecl InternalConstructor<ULandscapeSettings>(FObjectInitializer *param_1)

{
  FName *this;
  UDeveloperSettings *this_00;
  
  this_00 = (UDeveloperSettings *)param_1->Obj;
  if (this_00 != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this_00,param_1);
    *(undefined4 *)&this_00[1]._padding_ = 8;
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 1;
    *(undefined4 *)&this_00[1]._padding_ = 0x100;
    this_00->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
    (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&this_00[2]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    this_00[2]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 0x100;
    *(undefined4 *)&this_00[1]._padding_ = 0x400ccccd;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0x201;
    *(undefined4 *)&this_00[1]._padding_ = 0x800;
    this_00[1].SectionName.ComparisonIndex = 0;
    this_00[1].SectionName.Number = 0;
    this_00[1].CategoryName.ComparisonIndex = 0;
    this_00[1].CategoryName.Number = 0;
    FUtf8String::Reset((FUtf8String *)(this_00 + 2),0);
    this = &this_00[2].CategoryName;
    this_00[2]._padding_ = 0;
    this->ComparisonIndex = 0;
    this->Number = 0;
    this_00[2].SectionName.ComparisonIndex = 0;
    this_00[2].SectionName.Number = 0;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)this,0);
    *(undefined2 *)((longlong)&this_00[3]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this_00[3]._padding_ + 2) = 0;
    *(undefined1 *)((longlong)&this_00[3]._padding_ + 4) = 0;
    *(undefined4 *)&this_00[3]._padding_ = 0x46000000;
    *(undefined4 *)((longlong)&this_00[3]._padding_ + 4) = 0x47800000;
    *(undefined4 *)&this_00[3]._padding_ = 0x400;
    *(undefined4 *)&this_00[3]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this_00[3]._padding_ + 4) = 0x42fa0000;
    *(undefined2 *)&this_00[3]._padding_ = 0x101;
  }
  return;
}

// InternalConstructor<ULandscapeSubsystem> @ 145fb1ba0

void __cdecl InternalConstructor<ULandscapeSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&ULandscapeSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&ULandscapeSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bInitialized = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULandscapeTextureHash> @ 145fb1c90

void __cdecl InternalConstructor<ULandscapeTextureHash>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7ULandscapeTextureHash__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined2 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x4 = 0x80;
    *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULandscapeTextureMipEdgeOverrideFactory> @ 145fb1d10

void __cdecl
InternalConstructor<ULandscapeTextureMipEdgeOverrideFactory>(FObjectInitializer *param_1)

{
  UTextureMipDataProviderFactory *this;
  
  this = (UTextureMipDataProviderFactory *)param_1->Obj;
  if (this != (UTextureMipDataProviderFactory *)0x0) {
    UTextureMipDataProviderFactory::UTextureMipDataProviderFactory(this,param_1);
    *(undefined ***)this = &___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULandscapeTextureStorageProviderFactory> @ 145fb1d50

void __cdecl
InternalConstructor<ULandscapeTextureStorageProviderFactory>(FObjectInitializer *param_1)

{
  UTextureAllMipDataProviderFactory *this;
  
  this = (UTextureAllMipDataProviderFactory *)param_1->Obj;
  if (this != (UTextureAllMipDataProviderFactory *)0x0) {
    UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory(this,param_1);
    *(undefined ***)this = &___7ULandscapeTextureStorageProviderFactory__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapeLayerBlend> @ 145fb1db0

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeLayerBlend>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  ulonglong uVar1;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeLayerBlend::UMaterialExpressionLandscapeLayerBlend'::
               __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapeLayerCoords> @ 145fb1e70

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeLayerCoords>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  ulonglong uVar1;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords'::
               __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapeLayerSample> @ 145fb1f20

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeLayerSample>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  ulonglong uVar1;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
    this[1]._padding_ = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeLayerSample::UMaterialExpressionLandscapeLayerSample'::
               __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapeLayerSwitch> @ 145fb1fd0

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeLayerSwitch>(FObjectInitializer *param_1)

{
  uint *puVar1;
  UMaterialExpression *this;
  ulonglong uVar2;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar2 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeLayerSwitch::UMaterialExpressionLandscapeLayerSwitch'::
               __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        puVar1 = &this[1].MaterialExpressionGuid.C;
        *puVar1 = *puVar1 | 1;
        return;
      }
    }
    puVar1 = &this[1].MaterialExpressionGuid.C;
    *puVar1 = *puVar1 | 1;
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapeLayerWeight> @ 145fb20e0

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeLayerWeight>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar3 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
    pvVar2 = ThreadLocalStoragePointer;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeLayerWeight::UMaterialExpressionLandscapeLayerWeight'::
               __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
      }
    }
    this[1].MaterialExpressionGuid.C = 0;
    this[1].Material.field0_0x0.DebugPtr = (UMaterial *)0x0;
    this[1].Function.field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
    this[1].Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// InternalConstructor<UMaterialExpressionLandscapePhysicalMaterialOutput> @ 145fb2200

void __cdecl
InternalConstructor<UMaterialExpressionLandscapePhysicalMaterialOutput>(FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput *this;
  ulonglong uVar1;
  
  this = (UMaterialExpressionCustomOutput *)param_1->Obj;
  if (this != (UMaterialExpressionCustomOutput *)0x0) {
    UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    *(undefined ***)this = &___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapePhysicalMaterialOutput::
               UMaterialExpressionLandscapePhysicalMaterialOutput'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<ALandscapeSplineActor> @ 145fb22c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ALandscapeSplineActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALandscapeSplineActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ALandscapeSplineActor::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ALandscapeSplineActor::_vftable__for__ILandscapeSplineInterface__
    ;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALandscapeSplineMeshesActor> @ 145fb2390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ALandscapeSplineMeshesActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  APartitionActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALandscapeSplineMeshesActor::GetPrivateStaticClass();
  this = (APartitionActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (APartitionActor *)0x0) {
    APartitionActor::APartitionActor(this,param_1);
    *(undefined ***)this = &___7ALandscapeSplineMeshesActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeSettings> @ 145fb2450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeSettings>(FVTableHelper *param_1)

{
  FName *this;
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this_00;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeSettings::GetPrivateStaticClass();
  this_00 = (UDeveloperSettings *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this_00,param_1);
    *(undefined4 *)&this_00[1]._padding_ = 8;
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 1;
    this_00->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
    (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&this_00[2]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    this_00[2]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1]._padding_ = 0x100;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 0x100;
    *(undefined4 *)&this_00[1]._padding_ = 0x400ccccd;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0x201;
    *(undefined4 *)&this_00[1]._padding_ = 0x800;
    this_00[1].SectionName.ComparisonIndex = 0;
    this_00[1].SectionName.Number = 0;
    this_00[1].CategoryName.ComparisonIndex = 0;
    this_00[1].CategoryName.Number = 0;
    FUtf8String::Reset((FUtf8String *)(this_00 + 2),0);
    this = &this_00[2].CategoryName;
    this_00[2]._padding_ = 0;
    this->ComparisonIndex = 0;
    this->Number = 0;
    this_00[2].SectionName.ComparisonIndex = 0;
    this_00[2].SectionName.Number = 0;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)this,0);
    *(undefined4 *)&this_00[3]._padding_ = 0x46000000;
    *(undefined4 *)((longlong)&this_00[3]._padding_ + 4) = 0x47800000;
    *(undefined4 *)&this_00[3]._padding_ = 0x400;
    *(undefined2 *)((longlong)&this_00[3]._padding_ + 4) = 0;
    *(undefined4 *)&this_00[3]._padding_ = 0x42c80000;
    *(undefined4 *)((longlong)&this_00[3]._padding_ + 4) = 0x42fa0000;
    *(undefined2 *)&this_00[3]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this_00[3]._padding_ + 2) = 0;
    *(undefined1 *)((longlong)&this_00[3]._padding_ + 4) = 0;
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeSubsystem> @ 145fb25d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&ULandscapeSubsystem::_vftable__for__UWorldSubsystem__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ULandscapeSubsystem::_vftable__for__FTickableGameObject__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bInitialized = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeTextureHash> @ 145fb2740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULandscapeTextureHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeTextureHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined2 *)&pUVar1[1].field_0x20 = 0;
    *(undefined ***)pUVar1 = &___7ULandscapeTextureHash__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeTextureMipEdgeOverrideFactory> @ 145fb2840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULandscapeTextureMipEdgeOverrideFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeTextureMipEdgeOverrideFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
              ((UTextureMipDataProviderFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULandscapeTextureStorageProviderFactory> @ 145fb2900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULandscapeTextureStorageProviderFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULandscapeTextureStorageProviderFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory
              ((UTextureAllMipDataProviderFactory *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7ULandscapeTextureStorageProviderFactory__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerBlend> @ 145fb29d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerBlend>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerCoords> @ 145fb2a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerCoords>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeLayerCoords::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSample> @ 145fb2b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSample>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSwitch> @ 145fb2c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSwitch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeLayerSwitch::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerWeight> @ 145fb2d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerWeight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeLayerWeight::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapePhysicalMaterialOutput> @ 145fb2e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapePhysicalMaterialOutput>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpressionCustomOutput *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapePhysicalMaterialOutput::GetPrivateStaticClass();
  this = (UMaterialExpressionCustomOutput *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpressionCustomOutput *)0x0) {
    UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput(this,param_1);
    *(undefined ***)this = &___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_> @ 145fb2ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
  FName FVar4;
  FName FVar5;
  FNameEntryId FVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  int iVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppTVar14 = &local_348;
    do {
      pTVar17 = ppTVar14[1];
      pTVar16 = *ppTVar14;
      local_358 = ppTVar14[2];
      iVar10 = (int)((longlong)pTVar17 - (longlong)pTVar16 >> 4) + 1;
      this = pTVar16;
      iVar15 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_145fb2f80:
        if (8 < iVar10) {
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar11 = pTVar17 + 1;
          TVar2 = this[iVar10 / 2]._s_1;
          uVar3 = *(undefined8 *)((longlong)this[iVar10 / 2].ElementData.Pad + 8);
          this[iVar10 / 2]._s_1 = this->_s_1;
          *(undefined8 *)((longlong)this[iVar10 / 2].ElementData.Pad + 8) = uVar1;
          this->_s_1 = TVar2;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
          pTVar16 = this;
LAB_145fb2fb0:
          pTVar13 = pTVar16;
          pTVar16 = pTVar13 + 1;
          if (pTVar16 <= pTVar17) goto code_r0x000145fb2fb9;
          goto LAB_145fb2fd0;
        }
        for (; pTVar11 = this, pTVar16 = this, this < pTVar17; pTVar17 = pTVar17 + -1) {
          while (pTVar13 = pTVar11, pTVar16 = pTVar16 + 1, pTVar16 <= pTVar17) {
            iVar15 = ::FName::Compare((FName *)&pTVar13->ElementData,(FName *)&pTVar16->ElementData)
            ;
            pTVar11 = pTVar16;
            if (-1 < iVar15) {
              pTVar11 = pTVar13;
            }
          }
          FVar6.Value = *(int *)pTVar13;
          uVar7 = *(int *)((longlong)pTVar13 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar13->ElementData).Pad + 2);
          FVar8.Value = *(int *)pTVar17;
          uVar9 = *(int *)((longlong)pTVar17 + 4);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2);
          *(int *)pTVar13 = FVar8.Value;
          *(uint *)((longlong)pTVar13 + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar13->ElementData).Pad + 2) = uVar3;
          *(int *)pTVar17 = FVar6.Value;
          *(uint *)((longlong)pTVar17 + 4) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2) = uVar1;
        }
        goto LAB_145fb309f;
      }
LAB_145fb308e:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_>
                (pTVar16,iVar10,param_3,param_4);
LAB_145fb309f:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_348 <= ppTVar14);
  }
  return;
code_r0x000145fb2fb9:
  iVar10 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar16->ElementData);
  if (-1 < iVar10) goto LAB_145fb2fb0;
LAB_145fb2fd0:
  do {
    pTVar12 = pTVar11;
    pTVar11 = pTVar12 + -1;
    if (pTVar11 <= this) break;
    iVar10 = ::FName::Compare((FName *)&pTVar11->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar10);
  FVar4 = *(FName *)((longlong)pTVar12 + -8);
  if (pTVar16 <= pTVar11) {
    TVar2 = pTVar16->_s_1;
    FVar5 = *(FName *)((longlong)pTVar13 + 0x18);
    pTVar16->_s_1 = pTVar11->_s_1;
    *(FName *)((longlong)pTVar13 + 0x18) = FVar4;
    pTVar11->_s_1 = TVar2;
    *(FName *)((longlong)pTVar12 + -8) = FVar5;
    goto LAB_145fb2fb0;
  }
  TVar2 = this->_s_1;
  FVar5 = *(FName *)((this->ElementData).Pad + 8);
  iVar15 = iVar15 + -1;
  this->_s_1 = pTVar11->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar4;
  pTVar11->_s_1 = TVar2;
  *(FName *)((longlong)pTVar12 + -8) = FVar5;
  if ((longlong)((longlong)pTVar11 + (-0x10 - (longlong)this) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar17 - (longlong)pTVar16 & 0xfffffffffffffff0U)) {
    if (pTVar16 < pTVar17) {
      *ppTVar14 = pTVar16;
      ppTVar14[1] = pTVar17;
      *(int *)(ppTVar14 + 2) = iVar15;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar11 <= this + 1) goto LAB_145fb309f;
    pTVar17 = pTVar12 + -2;
    pTVar16 = this;
  }
  else {
    if (this + 1 < pTVar11) {
      *ppTVar14 = this;
      ppTVar14[1] = pTVar12 + -2;
      *(int *)(ppTVar14 + 2) = iVar15;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar17 <= pTVar16) goto LAB_145fb309f;
  }
  iVar10 = (int)((longlong)pTVar17 - (longlong)pTVar16 >> 4) + 1;
  this = pTVar16;
  if (iVar15 == 0) goto LAB_145fb308e;
  goto LAB_145fb2f80;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 145fb3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> **ppTVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar18 = ppTVar15[1];
      pTVar17 = *ppTVar15;
      local_358 = ppTVar15[2];
      iVar11 = (int)(((longlong)pTVar18 - (longlong)pTVar17) / 0x14) + 1;
      this = pTVar17;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_145fb3240:
        if (8 < iVar11) {
          uVar3 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar12 = pTVar18 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar4 = this[lVar10]._s_1;
          uVar5 = *(undefined8 *)((longlong)this[lVar10].ElementData.Pad + 8);
          uVar1 = *(undefined4 *)((longlong)this + lVar10 * 0x14 + 0x10);
          this[lVar10]._s_1 = this->_s_1;
          *(undefined8 *)((longlong)this[lVar10].ElementData.Pad + 8) = uVar3;
          *(undefined4 *)((longlong)this + lVar10 * 0x14 + 0x10) =
               *(undefined4 *)((this->ElementData).Pad + 0x10);
          this->_s_1 = TVar4;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((this->ElementData).Pad + 0x10) = uVar1;
          pTVar17 = this;
LAB_145fb3282:
          pTVar14 = pTVar17;
          pTVar17 = pTVar14 + 1;
          if (pTVar17 <= pTVar18) goto code_r0x000145fb328b;
          goto LAB_145fb32a0;
        }
        for (; pTVar12 = this, pTVar17 = this, this < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar14 = pTVar12, pTVar17 = pTVar17 + 1, pTVar17 <= pTVar18) {
            iVar16 = ::FName::Compare((FName *)&pTVar14->ElementData,(FName *)&pTVar17->ElementData)
            ;
            pTVar12 = pTVar17;
            if (-1 < iVar16) {
              pTVar12 = pTVar14;
            }
          }
          FVar6.Value = *(int *)pTVar14;
          uVar7 = *(int *)((longlong)pTVar14 + 4);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2);
          uVar1 = ((FNameEntryId *)(pTVar14->ElementData).Pad)[4];
          FVar8.Value = *(int *)pTVar18;
          uVar9 = *(int *)((longlong)pTVar18 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar18->ElementData).Pad + 2);
          *(int *)pTVar14 = FVar8.Value;
          *(uint *)((longlong)pTVar14 + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2) = uVar5;
          ((FNameEntryId *)(pTVar14->ElementData).Pad)[4] =
               (uint)((FNameEntryId *)(pTVar18->ElementData).Pad)[4];
          *(int *)pTVar18 = FVar6.Value;
          *(uint *)((longlong)pTVar18 + 4) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar18->ElementData).Pad + 2) = uVar3;
          ((FNameEntryId *)(pTVar18->ElementData).Pad)[4] = (FNameEntryId)uVar1;
        }
        goto LAB_145fb33ce;
      }
LAB_145fb33b5:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_145fb33ce:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
code_r0x000145fb328b:
  iVar11 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar17->ElementData);
  if (-1 < iVar11) goto LAB_145fb3282;
LAB_145fb32a0:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= this) break;
    iVar11 = ::FName::Compare((FName *)&pTVar12->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar11);
  uVar3 = *(undefined8 *)((longlong)pTVar13 + -0xc);
  if (pTVar17 <= pTVar12) {
    TVar4 = pTVar17->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar14 + 0x1c);
    uVar2 = *(uint *)((longlong)pTVar14 + 0x24);
    pTVar17->_s_1 = pTVar12->_s_1;
    *(undefined8 *)((longlong)pTVar14 + 0x1c) = uVar3;
    *(uint *)((longlong)pTVar14 + 0x24) =
         (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value;
    pTVar12->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar13 + -0xc) = uVar5;
    (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value = uVar2;
    goto LAB_145fb3282;
  }
  uVar2 = *(uint *)((this->ElementData).Pad + 0x10);
  TVar4 = this->_s_1;
  uVar5 = *(undefined8 *)((this->ElementData).Pad + 8);
  iVar16 = iVar16 + -1;
  this->_s_1 = pTVar12->_s_1;
  *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
  *(uint *)((this->ElementData).Pad + 0x10) =
       (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value;
  pTVar12->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar13 + -0xc) = uVar5;
  (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value = uVar2;
  if (((longlong)pTVar12 + (-0x14 - (longlong)this)) / 0x14 <
      ((longlong)pTVar18 - (longlong)pTVar17) / 0x14) {
    if (pTVar17 < pTVar18) {
      *ppTVar15 = pTVar17;
      ppTVar15[1] = pTVar18;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= this + 1) goto LAB_145fb33ce;
    pTVar18 = pTVar13 + -2;
    pTVar17 = this;
  }
  else {
    if (this + 1 < pTVar12) {
      *ppTVar15 = this;
      ppTVar15[1] = pTVar13 + -2;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar18 <= pTVar17) goto LAB_145fb33ce;
  }
  iVar11 = (int)(((longlong)pTVar18 - (longlong)pTVar17) / 0x14) + 1;
  this = pTVar17;
  if (iVar16 == 0) goto LAB_145fb33b5;
  goto LAB_145fb3240;
}

// IsObjectPtrEqual<ULandscapeSubsystem,ULandscapeSubsystem_*,0> @ 145fb34a0

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
ObjectPtr_Private::IsObjectPtrEqual<ULandscapeSubsystem,ULandscapeSubsystem_*,0>
          (TObjectPtr<ULandscapeSubsystem> *param_1,ULandscapeSubsystem **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULandscapeSubsystem *)0x0) {
    return *param_2 == (ULandscapeSubsystem *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeFlagsRange<enum_ELandscapeToolTargetTypeFlags> @ 145fb34c0

TRange<ELandscapeToolTargetTypeFlags> __cdecl
MakeFlagsRange<enum_ELandscapeToolTargetTypeFlags>(ELandscapeToolTargetTypeFlags param_1)

{
  undefined7 in_register_00000009;
  undefined1 in_DL;
  
  *(undefined1 *)CONCAT71(in_register_00000009,param_1) = in_DL;
  return (TRange<ELandscapeToolTargetTypeFlags>)param_1;
}

// NewObject<ULandscapeTextureMipEdgeOverrideFactory> @ 145fb34d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULandscapeTextureMipEdgeOverrideFactory * __cdecl
NewObject<ULandscapeTextureMipEdgeOverrideFactory>(UObject *param_1)

{
  UClass *pUVar1;
  ULandscapeTextureMipEdgeOverrideFactory *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = ULandscapeTextureMipEdgeOverrideFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULandscapeTextureMipEdgeOverrideFactory *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// Partition<ALandscapeProxy_*,int,`ULandscapeSubsystem::Tick'::__l29::<lambda_1>_> @ 145fb3570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Algo::Partition<ALandscapeProxy_*,int,_ULandscapeSubsystem::Tick_::__l29::<lambda_1>_>
          (ALandscapeProxy **param_1,int param_2,<lambda_1> param_3)

{
  int iVar1;
  ALandscapeProxy *pAVar2;
  longlong lVar3;
  UClass *pUVar4;
  ALandscapeProxy **ppAVar5;
  ALandscapeProxy **ppAVar6;
  
  ppAVar6 = param_1 + param_2;
  ppAVar5 = param_1;
  if (param_1 != ppAVar6) {
    do {
      pAVar2 = *ppAVar5;
      if (pAVar2 == (ALandscapeProxy *)0x0) {
LAB_145fb35c2:
        do {
          do {
            ppAVar6 = ppAVar6 + -1;
            if (ppAVar5 == ppAVar6) goto LAB_145fb360b;
            pAVar2 = *ppAVar6;
          } while (pAVar2 == (ALandscapeProxy *)0x0);
          pUVar4 = Z_Construct_UClass_ALandscape_NoRegister();
          lVar3 = pAVar2->_padding_;
          iVar1 = (int)pUVar4->_padding_;
        } while ((*(int *)(lVar3 + 0x38) < iVar1) ||
                ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                 &pUVar4->_padding_));
        pAVar2 = *ppAVar5;
        *ppAVar5 = *ppAVar6;
        *ppAVar6 = pAVar2;
      }
      else {
        pUVar4 = Z_Construct_UClass_ALandscape_NoRegister();
        lVar3 = pAVar2->_padding_;
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) goto LAB_145fb35c2;
      }
      ppAVar5 = ppAVar5 + 1;
    } while (ppAVar5 != ppAVar6);
  }
LAB_145fb360b:
  return (int)((longlong)ppAVar5 - (longlong)param_1 >> 3);
}

// SerializeArray<FLandscapeTexture2DMipMap,`ULandscapeTextureStorageProviderFactory::Serialize'::__l2::<lambda_1>_> @ 145fb3b90

bool __cdecl
SerializeArray<FLandscapeTexture2DMipMap,_ULandscapeTextureStorageProviderFactory::Serialize_::__l2::<lambda_1>_>
          (FArchive *param_1,TArray<FLandscapeTexture2DMipMap,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  FScriptContainerElement *pFVar1;
  FBulkData *pFVar2;
  longlong *plVar3;
  ULandscapeTextureStorageProviderFactory *pUVar4;
  undefined4 *puVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint local_res8 [2];
  TArray<FLandscapeTexture2DMipMap,TSizedDefaultAllocator<32>_> *local_res10;
  
  local_res8[0] = param_2->ArrayNum;
  piVar12 = &param_2->ArrayNum;
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res10 = param_2;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar14 = local_res8[0];
  if ((param_1->field_0x28 & 1) == 0) {
    uVar14 = 0;
    if (0 < (int)local_res8[0]) {
      lVar17 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar14 < *piVar12) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pFVar16 = (param_2->AllocatorInstance).Data + lVar17;
        if ((int)uVar14 < param_3->OptionalMips) {
          uVar13 = 0xc00;
        }
        else {
          uVar13 = 0x48;
          if ((int)uVar14 < param_3->FirstInlineMip) {
            uVar13 = 0x400;
          }
        }
        pUVar4 = param_3->__this;
        puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar16);
          }
        }
        else {
          *(undefined4 *)pFVar16 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        pFVar1 = pFVar16 + 4;
        puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
          }
        }
        else {
          *(uint *)pFVar1 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        operator<<(param_1,(bool *)(pFVar16 + 8));
        pFVar2 = (FBulkData *)(pFVar16 + 0x10);
        if ((param_1->field_0x28 & 4) == 0) {
          FBulkData::Serialize(pFVar2,param_1,(UObject *)pUVar4,false,1,None);
        }
        else {
          uVar11 = FBulkData::GetBulkDataFlags(pFVar2);
          FBulkData::SetBulkDataFlags(pFVar2,uVar13);
          FBulkData::Serialize(pFVar2,param_1,(UObject *)pUVar4,false,1,None);
          FBulkData::ResetBulkDataFlags(pFVar2,uVar11);
        }
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0x38;
        piVar12 = &local_res10->ArrayNum;
        param_2 = local_res10;
      } while ((int)uVar14 < (int)local_res8[0]);
    }
  }
  else {
    if ((int)local_res8[0] < 0) {
      return false;
    }
    iVar15 = *piVar12;
    if (iVar15 < (int)local_res8[0]) {
      iVar15 = local_res8[0] - iVar15;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar15,&param_2->AllocatorInstance,piVar12,&param_2->ArrayMax);
      DefaultConstructItems<FLandscapeTexture2DMipMap,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x38,iVar15);
    }
    else if ((int)local_res8[0] < iVar15) {
      uVar13 = iVar15 - local_res8[0];
      if (((int)(local_res8[0] | uVar13) < 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (uVar13 != 0) {
        TArray<FLandscapeTexture2DMipMap,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar14,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&param_2->AllocatorInstance,*piVar12,&param_2->ArrayMax);
      }
    }
    uVar14 = 0;
    if (0 < (int)local_res8[0]) {
      lVar17 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar14 < *piVar12) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pFVar16 = (param_2->AllocatorInstance).Data + lVar17;
        if ((int)uVar14 < param_3->OptionalMips) {
          uVar13 = 0xc00;
        }
        else {
          uVar13 = 0x48;
          if ((int)uVar14 < param_3->FirstInlineMip) {
            uVar13 = 0x400;
          }
        }
        pUVar4 = param_3->__this;
        puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar16);
          }
        }
        else {
          *(undefined4 *)pFVar16 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        pFVar1 = pFVar16 + 4;
        puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
          }
        }
        else {
          *(uint *)pFVar1 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        operator<<(param_1,(bool *)(pFVar16 + 8));
        pFVar2 = (FBulkData *)(pFVar16 + 0x10);
        if ((param_1->field_0x28 & 4) == 0) {
          FBulkData::Serialize(pFVar2,param_1,(UObject *)pUVar4,false,1,None);
        }
        else {
          uVar11 = FBulkData::GetBulkDataFlags(pFVar2);
          FBulkData::SetBulkDataFlags(pFVar2,uVar13);
          FBulkData::Serialize(pFVar2,param_1,(UObject *)pUVar4,false,1,None);
          FBulkData::ResetBulkDataFlags(pFVar2,uVar11);
        }
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0x38;
        piVar12 = &local_res10->ArrayNum;
        param_2 = local_res10;
      } while ((int)uVar14 < (int)local_res8[0]);
    }
  }
  return true;
}

// StaticEnum<enum_ELandscapeCustomizedCoordType> @ 145fb40a0

UEnum * __cdecl StaticEnum<enum_ELandscapeCustomizedCoordType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType,(UObject *)pUVar1,
                       L"ELandscapeCustomizedCoordType");
  }
  return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton;
}

// StaticEnum<enum_ELandscapeDirtyingMode> @ 145fb40e0

UEnum * __cdecl StaticEnum<enum_ELandscapeDirtyingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode,(UObject *)pUVar1,
                       L"ELandscapeDirtyingMode");
  }
  return Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton;
}

// StaticEnum<enum_ELandscapeLayerBlendType> @ 145fb4120

UEnum * __cdecl StaticEnum<enum_ELandscapeLayerBlendType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType,(UObject *)pUVar1,
                       L"ELandscapeLayerBlendType");
  }
  return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton;
}

// StaticEnum<enum_ELandscapeTextureType> @ 145fb4160

UEnum * __cdecl StaticEnum<enum_ELandscapeTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeTextureType,(UObject *)pUVar1,
                       L"ELandscapeTextureType");
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureType.OuterSingleton;
}

// StaticEnum<enum_ELandscapeTextureUsage> @ 145fb41a0

UEnum * __cdecl StaticEnum<enum_ELandscapeTextureUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeTextureUsage,(UObject *)pUVar1,
                       L"ELandscapeTextureUsage");
  }
  return Z_Registration_Info_UEnum_ELandscapeTextureUsage.OuterSingleton;
}

// StaticEnum<enum_ETerrainCoordMappingType> @ 145fb41e0

UEnum * __cdecl StaticEnum<enum_ETerrainCoordMappingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType,(UObject *)pUVar1,
                       L"ETerrainCoordMappingType");
  }
  return Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton;
}

// TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 145fb4880

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::
TRDGEmptyLambdaPass<__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  TRDGEmptyLambdaPass<_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>
  *pTVar3;
  code *pcVar4;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_58;
  FRDGParameterStruct local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FEmptyShaderParameters::zzAppendMemberGetPrev;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res8,&local_58);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FEmptyShaderParameters",L"FEmptyShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                 ,0x7a7,0x10,&local_58,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_58.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      atexit(`FEmptyShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_48.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar4 = (code *)swi(3);
      pTVar3 = (TRDGEmptyLambdaPass<_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>
                *)(*pcVar4)();
      return pTVar3;
    }
  }
  local_48.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_48.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FEmptyShaderParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(this,param_1,&local_48,param_2,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x180) = *(undefined8 *)&param_3->InRenderCommand;
  *(undefined8 *)((longlong)this + 0x1a8) = *(undefined8 *)&(param_3->InRenderCommand).field_0x28;
  *(undefined8 *)&(param_3->InRenderCommand).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_3->InRenderCommand).field_0x18;
  *(undefined8 *)((longlong)this + 400) = *(undefined8 *)&(param_3->InRenderCommand).field_0x10;
  *(undefined8 *)((longlong)this + 0x198) = uVar1;
  *(undefined8 *)((longlong)this + 0x1a0) = *(undefined8 *)&(param_3->InRenderCommand).field_0x20;
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    *(undefined8 *)&param_3->InRenderCommand = 0;
  }
  *(FEmptyShaderParameters **)((longlong)this + 0x1b0) = &<lambda_1>_>::EmptyShaderParameters;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
        ::_vftable_;
  return this;
}

// HLandscapeSplineProxy @ 145fb4e80

HLandscapeSplineProxy * __thiscall
HLandscapeSplineProxy::HLandscapeSplineProxy
          (HLandscapeSplineProxy *this,ULandscapeSplinesComponent *param_1,EHitProxyPriority param_2
          )

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)&param_1->field_0xa8;
  HHitProxy::HHitProxy((HHitProxy *)this,param_2);
  *(undefined ***)this = &___7HActor__6B_;
  *(UObject **)&this->field_0x20 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(ULandscapeSplinesComponent **)&this->field_0x28 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(undefined ***)this = &___7HLandscapeSplineProxy__6B_;
  *(undefined8 *)&this->field_0x30 = 0xffffffffffffffff;
  return this;
}

// HLandscapeSplineProxy_ControlPoint @ 145fb4f10

HLandscapeSplineProxy_ControlPoint * __thiscall
HLandscapeSplineProxy_ControlPoint::HLandscapeSplineProxy_ControlPoint
          (HLandscapeSplineProxy_ControlPoint *this,ULandscapeSplineControlPoint *param_1)

{
  code *pcVar1;
  bool bVar2;
  HLandscapeSplineProxy_ControlPoint *pHVar3;
  ULandscapeSplinesComponent *pUVar4;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar4 = (ULandscapeSplinesComponent *)param_1->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<249470843220918324>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineControlPoint.h"
                       ,0x34,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pHVar3 = (HLandscapeSplineProxy_ControlPoint *)(*pcVar1)();
      return pHVar3;
    }
    pUVar4 = (ULandscapeSplinesComponent *)0x0;
  }
  HLandscapeSplineProxy::HLandscapeSplineProxy((HLandscapeSplineProxy *)this,pUVar4,HPP_Foreground);
  this->_padding_ = (longlong)&___7HLandscapeSplineProxy_ControlPoint__6B_;
  (this->ControlPoint).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return this;
}

// HLandscapeSplineProxy_Segment @ 145fb4fa0

HLandscapeSplineProxy_Segment * __thiscall
HLandscapeSplineProxy_Segment::HLandscapeSplineProxy_Segment
          (HLandscapeSplineProxy_Segment *this,ULandscapeSplineSegment *param_1)

{
  code *pcVar1;
  bool bVar2;
  HLandscapeSplineProxy_Segment *pHVar3;
  ULandscapeSplinesComponent *pUVar4;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar4 = (ULandscapeSplinesComponent *)param_1->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5225616679601438524>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineSegment.h"
                       ,0xc4,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pHVar3 = (HLandscapeSplineProxy_Segment *)(*pcVar1)();
      return pHVar3;
    }
    pUVar4 = (ULandscapeSplinesComponent *)0x0;
  }
  HLandscapeSplineProxy::HLandscapeSplineProxy((HLandscapeSplineProxy *)this,pUVar4,HPP_Wireframe);
  this->_padding_ = (longlong)&___7HLandscapeSplineProxy_Segment__6B_;
  (this->SplineSegment).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return this;
}

// HLandscapeSplineProxy_Tangent @ 145fb5030

HLandscapeSplineProxy_Tangent * __thiscall
HLandscapeSplineProxy_Tangent::HLandscapeSplineProxy_Tangent
          (HLandscapeSplineProxy_Tangent *this,ULandscapeSplineSegment *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  HLandscapeSplineProxy_Tangent *pHVar3;
  ULandscapeSplinesComponent *pUVar4;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar4 = (ULandscapeSplinesComponent *)param_1->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5225616679601438524>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Classes\\LandscapeSplineSegment.h"
                       ,0xc4,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pHVar3 = (HLandscapeSplineProxy_Tangent *)(*pcVar1)();
      return pHVar3;
    }
    pUVar4 = (ULandscapeSplinesComponent *)0x0;
  }
  HLandscapeSplineProxy::HLandscapeSplineProxy((HLandscapeSplineProxy *)this,pUVar4,HPP_UI);
  this->_padding_ = (longlong)&___7HLandscapeSplineProxy_Tangent__6B_;
  (this->SplineSegment).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->End = 0;
  *(uint *)&this->field_0x40 = *(uint *)&this->field_0x40 | (uint)param_2;
  return this;
}

// ~TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::__l2::<lambda_1>,0,1> @ 145fb6140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000145fb6163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>,0,1> @ 145fb6170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000145fb6193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>,1,1> @ 145fb61a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UE::Landscape::FRDGBuilderRecorder::Flush_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x70));
  }
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 0x18));
  DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>
            (*(TFunction<void___cdecl(FRDGBuilder_&)> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>,1,1> @ 145fb6210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand_::__l11::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000145fb624f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 145fb6260

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::
~TRDGLambdaPass<FEmptyShaderParameters,__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x180) != 0) {
    plVar1 = (longlong *)((longlong)this + 400);
    if (*(longlong **)((longlong)this + 0x1a8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x1a8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// operator() @ 145fb6ce0

void __thiscall
``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  UNRECOVERED_JUMPTABLE = *(code **)this;
  plVar2 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145fb6d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// operator() @ 145fb6d40

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

bool __thiscall
``UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this,ALandscapeProxy *param_1)

{
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar1;
  void *_Src;
  undefined8 uVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  ForElementType<FSetElementId> FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_258 [32];
  FIdentityFunctor local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215 [5];
  FString local_210;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  int local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined8 *local_1d0;
  ULandscapeComponent *local_1c8;
  FScriptContainerElement *local_1c0;
  ALandscapeProxy *local_1b8;
  FName local_1b0;
  int local_1a8;
  int local_1a4;
  longlong *local_1a0;
  FName local_198;
  FName local_190;
  undefined1 *local_188;
  FScriptContainerElement *local_180;
  FString local_178;
  FString local_168;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar17 = (param_1->LandscapeComponents).AllocatorInstance.Data;
  local_1fc = (param_1->LandscapeComponents).ArrayNum;
  uVar13 = (ulonglong)(int)local_1fc;
  local_180 = pFVar17 + uVar13 * 8;
  local_1d0 = this;
  local_1b8 = param_1;
  do {
    pFVar23 = local_180;
    local_1c0 = pFVar17;
    if ((local_1b8->LandscapeComponents).ArrayNum != (int)uVar13) {
      local_217 = 0;
      `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_217);
    }
    if (pFVar17 == pFVar23) {
      return true;
    }
    local_1c8 = *(ULandscapeComponent **)pFVar17;
    local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    pTVar10 = ULandscapeComponent::GetWeightmapLayerAllocations(local_1c8,false);
    puVar18 = local_1d0;
    iVar19 = pTVar10->ArrayNum;
    pFVar17 = (pTVar10->AllocatorInstance).Data;
    pFVar23 = pFVar17 + (longlong)iVar19 * 0x10;
    while( true ) {
      if (pTVar10->ArrayNum != iVar19) {
        local_218 = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FWeightmapLayerAllocationInfo,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_218);
      }
      FVar4 = local_218;
      if (pFVar17 == pFVar23) break;
      if ((pFVar17[9] != (FScriptContainerElement)0xff) &&
         (pFVar17[8] != (FScriptContainerElement)0xff)) {
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocInfo.LayerInfo != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                               ,0x90,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        this_00 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)*puVar18;
        lVar16 = *(longlong *)(*(longlong *)pFVar17 + 0x28);
        local_1f8 = lVar16;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar16);
        uVar8 = uVar8 + (int)((ulonglong)lVar16 >> 0x20);
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          FVar1 = (this_00->Hash).SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&this_00->Hash;
          if (FVar1 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar1;
          }
          iVar20 = *(int *)((longlong)FVar15 + (ulonglong)(this_00->HashSize - 1U & uVar8) * 4);
          if (iVar20 != -1) {
            do {
              lVar16 = *(longlong *)&this_00->Elements + (longlong)iVar20 * 0x14;
              if (*(longlong *)(*(longlong *)&this_00->Elements + (longlong)iVar20 * 0x14) ==
                  local_1f8) {
                if (lVar16 != 0) goto LAB_145fb6f48;
                break;
              }
              iVar20 = *(int *)(lVar16 + 0xc);
            } while (iVar20 != -1);
          }
        }
        local_1a0 = &local_1f8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  (this_00,(uint)&local_200,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                   (bool *)&local_1a0);
        lVar16 = *(longlong *)&this_00->Elements + (longlong)local_200 * 0x14;
LAB_145fb6f48:
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_1b0,
                   (bool *)&local_1f8);
      }
      pFVar17 = pFVar17 + 0x10;
    }
    if (*(char *)puVar18[1] != '\0') {
      local_198 = (FName)local_1c8->_padding_;
      ::FName::ToString(&local_198,&local_168);
      iVar19 = (int)local_1b8->_padding_;
      if (iVar19 < 2) {
        local_190 = (FName)local_1b8->_padding_;
        ::FName::ToString(&local_190,&local_210);
      }
      else {
        _Src = (void *)local_1b8->_padding_;
        local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.Data.ArrayNum = iVar19;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,0,(ForAnyElementType *)&local_210,iVar19,&local_210.Data.ArrayMax);
        memcpy(local_210.Data.AllocatorInstance.Data,_Src,(longlong)iVar19 * 2);
      }
      if (4 < (byte)LogLandscape._0_1_) {
        ::FString::PrintfImpl(&local_178,L"X=%d Y=%d");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogLandscape._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        }
      }
      local_188 = local_215;
      if (0 < local_98._8_4_ - local_64) {
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98);
        uVar2 = local_98._0_8_;
        iVar19 = local_98._8_4_ - local_64;
        if ((iVar19 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<FNameLexicalLess>_>_>
                  ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar2,iVar19,FVar4,
                   (FElementCompareClass<FNameLexicalLess> *)&local_188);
      }
      uVar8 = local_50;
      uVar13 = (ulonglong)local_50;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar8 != 0) {
        uVar9 = uVar8;
        if (uVar8 < 2) {
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            uVar9 = 0;
            goto LAB_145fb7179;
          }
        }
        else {
LAB_145fb7179:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
        }
        if (0 < (int)uVar8) {
          uVar21 = 0;
          do {
            FVar14.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar14.Data = local_58.Data;
            }
            uVar11 = (longlong)(int)uVar8 - 1U & uVar21;
            uVar21 = uVar21 + 1;
            *(undefined4 *)((longlong)FVar14.Data + uVar11 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (local_50 != 0) {
        uStack_1ec = 1;
        local_1f0 = 0;
        uStack_1dc = 0;
        iStack_1d8 = 0;
        pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        if (local_70 != 0) {
          FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_78;
          }
          uVar8 = *(uint *)FVar22;
          local_1f0 = 0;
          while (uVar8 == 0) {
            iStack_1d8 = iStack_1d8 + 0x20;
            lVar16 = (longlong)local_1f0;
            local_1f0 = local_1f0 + 1;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1f0)
            goto LAB_145fb7291;
            uVar8 = ((uint *)((longlong)FVar22 + 4))[lVar16];
          }
          uStack_1ec = -uVar8 & uVar8;
          uVar13 = (ulonglong)uStack_1ec * 2 + 1;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_1b0.Number = (uint)lVar16;
          uStack_1dc = iStack_1d8 + -1 + local_1b0.Number;
          if ((int)local_70 < (int)uStack_1dc) {
LAB_145fb7291:
            uStack_1dc = local_70;
          }
        }
        local_1e0 = 0xffffffff;
        local_158 = (longlong *)local_98;
        local_150._padding_ = CONCAT44(uStack_1ec,local_1f0);
        local_150.CurrentBitIndex = uStack_1dc;
        local_150.UnvisitedBitMask = 0xffffffff;
        local_150._28_4_ = uStack_1d4;
        local_150.BaseBitIndex = iStack_1d8;
        uVar8 = uStack_1dc;
        local_150.Array = pTStack_1e8;
        if ((int)uStack_1dc < (int)local_70) {
          do {
            puVar18 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *local_158);
            uVar2 = *puVar18;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
            *(uint *)((longlong)puVar18 + 0xc) = uVar9;
            FVar14.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar14.Data = local_58.Data;
            }
            uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar14.Data + uVar13 * 4);
            *(uint *)((longlong)FVar14.Data + uVar13 * 4) = uVar8;
            local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
            uVar8 = local_150.CurrentBitIndex;
          } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
        }
      }
      uVar8 = local_70;
      iStack_128 = 0;
      local_110 = 0;
      uStack_124 = 1;
      uStack_114 = 0;
      if (local_70 != 0) {
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_78;
        }
        uVar9 = *(uint *)FVar22;
        while (uVar9 == 0) {
          lVar16 = (longlong)iStack_128;
          local_110 = local_110 + 0x20;
          iStack_128 = iStack_128 + 1;
          uStack_114 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
          goto LAB_145fb73c2;
          uVar9 = ((uint *)((longlong)FVar22 + 4))[lVar16];
        }
        uStack_124 = -uVar9 & uVar9;
        uVar13 = (ulonglong)uStack_124 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1a8 = (int)lVar16;
        uStack_114 = local_110 + -1 + local_1a8;
        if ((int)local_70 < (int)uStack_114) {
          uStack_114 = local_70;
        }
      }
LAB_145fb73c2:
      local_130 = (longlong *)local_98;
      uStack_10c = local_a4;
      local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      iStack_108 = local_98._8_4_ - local_64;
      uVar9 = local_70 & 0xffffffe0;
      TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
      uStack_118 = 0xffffffff;
      TStack_f8.CurrentBitIndex = uStack_114;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)local_70 >> 5;
      TStack_f8._28_4_ = local_a4;
      TStack_f8.BaseBitIndex = local_110;
      uStack_d8 = CONCAT44(uStack_104,iStack_108);
      bVar12 = (byte)local_70;
      local_100 = local_130;
      TStack_f8.Array = local_120;
      if (((int)local_70 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (uVar8 != local_70) {
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_78;
        }
        uVar8 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar19 * 4);
        while (uVar8 == 0) {
          lVar16 = (longlong)iVar19;
          uVar9 = uVar9 + 0x20;
          iVar19 = iVar19 + 1;
          uVar8 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_145fb74f0;
          uVar8 = ((uint *)((longlong)FVar22 + 4))[lVar16];
        }
        uVar13 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1a4 = (int)lVar16;
        uVar8 = (uVar9 - 1) + local_1a4;
        if ((int)local_70 < (int)uVar8) {
          uVar8 = local_70;
        }
      }
LAB_145fb74f0:
      while( true ) {
        plVar5 = local_100;
        if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
          local_216 = 0;
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_216);
        }
        if (((TStack_f8.CurrentBitIndex == uVar8) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar5 == (longlong *)local_98)) break;
        if (4 < (byte)LogLandscape._0_1_) {
          ::FName::ToString((FName *)((longlong)TStack_f8.CurrentBitIndex * 0x10 + *plVar5),local_d0
                           );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    local_50 = 0;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    pFVar17 = local_1c0 + 8;
    uVar13 = (ulonglong)local_1fc;
  } while( true );
}

// `vector_deleting_destructor'`adjustor{704}' @ 145fb8a20

/* [thunk]:public: virtual void * __ptr64 __cdecl ALandscapeSplineActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALandscapeSplineActor::_vector_deleting_destructor__adjustor_704__
          (ALandscapeSplineActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALandscapeSplineActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 145fb8a34

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ULandscapeSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
ULandscapeSubsystem::_vector_deleting_destructor__adjustor_56__
          (ULandscapeSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULandscapeSubsystem *)&this[-1].LandscapeActors.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145fb8a50

void * __thiscall
IBaseDelegateInstance<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8a80

void * __thiscall
IBaseDelegateInstance<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8ab0

void * __thiscall
IBaseDelegateInstance<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8ae0

void * __thiscall
IBaseDelegateInstance<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8b10

void * __thiscall
UE::Landscape::Private::
T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>::
_scalar_deleting_destructor_
          (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
           *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->ValidValueBitIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->AllValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8b70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy,`ULandscapeSubsystem::Initialize'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8ba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8bd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8c00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8c30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8c60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULandscapeSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8c90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8cc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8cf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8d20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::`5'::<lambda_1>,0,1>
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

// `scalar_deleting_destructor' @ 145fb8e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::Flush'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x70));
  }
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextureResource_*,enum_ERHIAccess>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 0x18));
  DestructItems<TFunction<void___cdecl(FRDGBuilder_&)>,int>
            (*(TFunction<void___cdecl(FRDGBuilder_&)> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::__l11::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8f10

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8f50

void * __thiscall
TRDGEmptyLambdaPass<``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8f90

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TRDGLambdaPass<FEmptyShaderParameters,__UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb8fd0

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
ALandscapeSplineActor::_scalar_deleting_destructor_(ALandscapeSplineActor *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7ILandscapeSplineInterface__6B_;
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

// `scalar_deleting_destructor' @ 145fb9040

void * __thiscall
ALandscapeSplineMeshesActor::_scalar_deleting_destructor_
          (ALandscapeSplineMeshesActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ALandscapeSplineMeshesActor__6B_;
  pFVar1 = (this->StaticMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APartitionActor::~APartitionActor((APartitionActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb90c0

void * __thiscall
FLandscapeTextureMipEdgeOverrideProvider::_scalar_deleting_destructor_
          (FLandscapeTextureMipEdgeOverrideProvider *this,uint param_1)

{
  ForElementType<FTextureMipInfo> FVar1;
  
  this->_padding_ = (longlong)&___7FLandscapeTextureMipEdgeOverrideProvider__6B_;
  FVar1 = (this->DestMipInfos).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FTextureMipInfo>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9120

void * __thiscall
FLandscapeTextureStorageMipProvider::_scalar_deleting_destructor_
          (FLandscapeTextureStorageMipProvider *this,uint param_1)

{
  longlong *plVar1;
  ForElementType<FTextureMipInfo> FVar2;
  longlong *plVar3;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar4;
  
  this->_padding_ = (longlong)&___7FLandscapeTextureStorageMipProvider__6B_;
  if (*(longlong *)&this->AsyncFileCallBack != 0) {
    plVar1 = *(longlong **)&(this->AsyncFileCallBack).field_0x28;
    plVar3 = (longlong *)&(this->AsyncFileCallBack).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FVar2 = (this->DestMipInfos).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FTextureMipInfo>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar4 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar4 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)&this->IORequests;
  }
  DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
            ((FIORequest *)FVar4,(this->IORequests).ArrayNum);
  FVar4 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb91e0

void * __thiscall
FTextureMipDataProvider::_scalar_deleting_destructor_(FTextureMipDataProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall HActor::_scalar_deleting_destructor_(HActor *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9260

void * __thiscall
HLandscapeSplineProxy::_scalar_deleting_destructor_(HLandscapeSplineProxy *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb92a0

void * __thiscall
HLandscapeSplineProxy_ControlPoint::_scalar_deleting_destructor_
          (HLandscapeSplineProxy_ControlPoint *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb92e0

void * __thiscall
HLandscapeSplineProxy_Segment::_scalar_deleting_destructor_
          (HLandscapeSplineProxy_Segment *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9320

void * __thiscall
HLandscapeSplineProxy_Tangent::_scalar_deleting_destructor_
          (HLandscapeSplineProxy_Tangent *this,uint param_1)

{
  HHitProxy::~HHitProxy((HHitProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9360

void * __thiscall
ULandscapeSettings::_scalar_deleting_destructor_(ULandscapeSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb93e0

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
ULandscapeSubsystem::_scalar_deleting_destructor_(ULandscapeSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->Proxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LandscapeActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StreamingProxiesNeedingReregister).HashSize = 0;
  FVar2 = (this->StreamingProxiesNeedingReregister).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StreamingProxiesNeedingReregister).Elements);
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Groups).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb94d0

void * __thiscall
ULandscapeTextureHash::_scalar_deleting_destructor_(ULandscapeTextureHash *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeTextureHash__6B_;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RecentlySerializedHashes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RecentlySerializedHashes);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9570

void * __thiscall
ULandscapeTextureMipEdgeOverrideFactory::_scalar_deleting_destructor_
          (ULandscapeTextureMipEdgeOverrideFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULandscapeTextureMipEdgeOverrideFactory__6B_;
  UTextureMipDataProviderFactory::~UTextureMipDataProviderFactory
            ((UTextureMipDataProviderFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb95d0

void * __thiscall
ULandscapeTextureStorageProviderFactory::_scalar_deleting_destructor_
          (ULandscapeTextureStorageProviderFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeTextureStorageProviderFactory__6B_;
  DestructItems<FLandscapeTexture2DMipMap,int>
            ((FLandscapeTexture2DMipMap *)(this->Mips).AllocatorInstance.Data,(this->Mips).ArrayNum)
  ;
  pFVar1 = (this->Mips).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTextureAllMipDataProviderFactory::~UTextureAllMipDataProviderFactory
            ((UTextureAllMipDataProviderFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9650

void * __thiscall
UMaterialExpressionLandscapeLayerBlend::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeLayerBlend *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb96d0

void * __thiscall
UMaterialExpressionLandscapeLayerCoords::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeLayerCoords *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9730

void * __thiscall
UMaterialExpressionLandscapeLayerSample::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeLayerSample *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9790

void * __thiscall
UMaterialExpressionLandscapeLayerSwitch::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeLayerSwitch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb97f0

void * __thiscall
UMaterialExpressionLandscapeLayerWeight::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeLayerWeight *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145fb9850

void * __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// AddReferencedObjects @ 145fb9980

void __thiscall
HLandscapeSplineProxy_ControlPoint::AddReferencedObjects
          (HLandscapeSplineProxy_ControlPoint *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145fb9993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ControlPoint,0,0);
  return;
}

// AddReferencedObjects @ 145fb99a0

void __thiscall
HLandscapeSplineProxy_Segment::AddReferencedObjects
          (HLandscapeSplineProxy_Segment *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145fb99b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SplineSegment,0,0);
  return;
}

// AddReferencedObjects @ 145fb99c0

void __thiscall
HLandscapeSplineProxy_Tangent::AddReferencedObjects
          (HLandscapeSplineProxy_Tangent *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145fb99d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SplineSegment,0,0);
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeSettings @ 145fbdb20

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeSplineActor @ 145fbdb30

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeSplineActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeSplineMeshesActor @ 145fbdb40

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeSplineMeshesActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem @ 145fbdb50

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeTextureHash @ 145fbdb60

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeTextureHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLandscapeTextureStorageProvider @ 145fbdb70

void __cdecl EmptyLinkFunctionForGeneratedCodeLandscapeTextureStorageProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerBlend @ 145fbdb80

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerBlend(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerCoords @ 145fbdb90

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerCoords(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSample @ 145fbdba0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSample(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSwitch @ 145fbdbb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSwitch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerWeight @ 145fbdbc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerWeight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapePhysicalMaterialOutput @ 145fbdbd0

void __cdecl
EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapePhysicalMaterialOutput(void)

{
  return;
}

// GetMouseCursor @ 145fc3160

Type __thiscall HLandscapeSplineProxy::GetMouseCursor(HLandscapeSplineProxy *this)

{
  return Crosshairs;
}

// GetMouseCursor @ 145fc3170

Type __thiscall HLandscapeSplineProxy_Tangent::GetMouseCursor(HLandscapeSplineProxy_Tangent *this)

{
  return CardinalCross;
}

// GetType @ 145fc4430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

HHitProxyType * __thiscall HActor::GetType(HActor *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HHitProxy::StaticGetType();
      ::StaticType.Name = L"HActor";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 145fc4440

HHitProxyType * __thiscall HLandscapeSplineProxy::GetType(HLandscapeSplineProxy *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HHitProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 145fc4450

HHitProxyType * __thiscall
HLandscapeSplineProxy_ControlPoint::GetType(HLandscapeSplineProxy_ControlPoint *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_ControlPoint";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 145fc44d0

HHitProxyType * __thiscall
HLandscapeSplineProxy_Segment::GetType(HLandscapeSplineProxy_Segment *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_Segment";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// GetType @ 145fc4550

HHitProxyType * __thiscall
HLandscapeSplineProxy_Tangent::GetType(HLandscapeSplineProxy_Tangent *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_Tangent";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// Serialize @ 145fc7e10

void __thiscall
HLandscapeSplineProxy_Tangent::Serialize(HLandscapeSplineProxy_Tangent *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145fc7e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SplineSegment);
  return;
}

// StaticGetType @ 145fc8520

HHitProxyType * __cdecl HLandscapeSplineProxy::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HHitProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 145fc85a0

HHitProxyType * __cdecl HLandscapeSplineProxy_ControlPoint::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_ControlPoint";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 145fc8620

HHitProxyType * __cdecl HLandscapeSplineProxy_Segment::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_Segment";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// StaticGetType @ 145fc86a0

HHitProxyType * __cdecl HLandscapeSplineProxy_Tangent::StaticGetType(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticType.Parent = HLandscapeSplineProxy::StaticGetType();
      ::StaticType.Name = L"HLandscapeSplineProxy_Tangent";
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::StaticType;
}

// Z_Construct_UClass_ALandscapeSplineActor_NoRegister @ 145fcad70

UClass * __cdecl Z_Construct_UClass_ALandscapeSplineActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineActor",
               &Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton,
               ALandscapeSplineActor::StaticRegisterNativesALandscapeSplineActor,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeSplineActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton;
}

// Z_Construct_UClass_ALandscapeSplineMeshesActor_NoRegister @ 145fcae30

UClass * __cdecl Z_Construct_UClass_ALandscapeSplineMeshesActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineMeshesActor",
               &Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton,
               ALandscapeSplineMeshesActor::StaticRegisterNativesALandscapeSplineMeshesActor,0x2d0,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeSplineMeshesActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineMeshesActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeSettings_NoRegister @ 145fcaef0

UClass * __cdecl Z_Construct_UClass_ULandscapeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSettings",
               &Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton,
               ULandscapeSettings::StaticRegisterNativesULandscapeSettings,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSettings>,
               InternalVTableHelperCtorCaller<ULandscapeSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeSubsystem_NoRegister @ 145fcafb0

UClass * __cdecl Z_Construct_UClass_ULandscapeSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULandscapeSubsystem::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSubsystem",
               &Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton,
               ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem,0x130,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeSubsystem>,
               InternalVTableHelperCtorCaller<ULandscapeSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeTextureHash_NoRegister @ 145fcb070

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureHash",
               &Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton,
               ULandscapeTextureHash::StaticRegisterNativesULandscapeTextureHash,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureHash>,
               InternalVTableHelperCtorCaller<ULandscapeTextureHash>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister @ 145fcb130

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects =
         ULandscapeTextureMipEdgeOverrideFactory::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureMipEdgeOverrideFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton,
               ULandscapeTextureMipEdgeOverrideFactory::
               StaticRegisterNativesULandscapeTextureMipEdgeOverrideFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureMipEdgeOverrideFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureMipEdgeOverrideFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureMipEdgeOverrideFactory.InnerSingleton;
}

// Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister @ 145fcb1f0

UClass * __cdecl Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects =
         ULandscapeTextureStorageProviderFactory::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureStorageProviderFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton,
               ULandscapeTextureStorageProviderFactory::
               StaticRegisterNativesULandscapeTextureStorageProviderFactory,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureStorageProviderFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureStorageProviderFactory>,local_res8,
               UTextureAllMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister @ 145fcb2b0

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerBlend",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton,
               UMaterialExpressionLandscapeLayerBlend::
               StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerBlend>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerBlend>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister @ 145fcb370

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerCoords",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton,
               UMaterialExpressionLandscapeLayerCoords::
               StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerCoords>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerCoords>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister @ 145fcb430

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSample",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton,
               UMaterialExpressionLandscapeLayerSample::
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSample,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister @ 145fcb4f0

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton,
               UMaterialExpressionLandscapeLayerSwitch::
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister @ 145fcb5b0

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerWeight",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton,
               UMaterialExpressionLandscapeLayerWeight::
               StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerWeight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerWeight>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister @ 145fcb670

UClass * __cdecl
Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapePhysicalMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
                InnerSingleton,
               UMaterialExpressionLandscapePhysicalMaterialOutput::
               StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
         InnerSingleton;
}

// Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap @ 145fcb730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLandscapeTexture2DMipMap.InnerSingleton;
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

// AllStreamingManagers'' @ 1503d6110

void __cdecl
`dynamic_atexit_destructor_for_'FLandscapeTextureStreamingManager::AllStreamingManagers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data;
  if (FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data !=
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

// PositionCurve'' @ 1503d6130

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 1503d6150

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 1503d6170

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ActiveProxies'' @ 1503d6190

void __cdecl
`ULandscapeSubsystem::Tick'::__l2::_dynamic_atexit_destructor_for__ActiveProxies__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ActiveProxies.AllocatorInstance.Data;
  if (ActiveProxies.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ActiveProxies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarGrassVisualLogCameraLocations'' @ 1503d61b0

void __cdecl _dynamic_atexit_destructor_for__CVarGrassVisualLogCameraLocations__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrassVisualLogCameraLocations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeDebugShaders'' @ 1503d61d0

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeDebugShaders__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeDebugShaders);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds'' @ 1503d61f0

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds__(void)

{
  CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeMaxSimultaneousMultithreadNaniteBuilds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeMultithreadNaniteBuild'' @ 1503d6210

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeMultithreadNaniteBuild__(void)

{
  CVarLandscapeMultithreadNaniteBuild._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeMultithreadNaniteBuild);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeSplineToSplineComponentMaxIterations'' @ 1503d6230

void __cdecl
_dynamic_atexit_destructor_for__CVarLandscapeSplineToSplineComponentMaxIterations__(void)

{
  CVarLandscapeSplineToSplineComponentMaxIterations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLandscapeSplineToSplineComponentMaxIterations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLiveRebuildNaniteOnModification'' @ 1503d6250

void __cdecl _dynamic_atexit_destructor_for__CVarLiveRebuildNaniteOnModification__(void)

{
  CVarLiveRebuildNaniteOnModification._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLiveRebuildNaniteOnModification);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxAsyncNaniteProxiesPerSecond'' @ 1503d6270

void __cdecl _dynamic_atexit_destructor_for__CVarMaxAsyncNaniteProxiesPerSecond__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxAsyncNaniteProxiesPerSecond)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplinesAlwaysUseBlockAll'' @ 1503d6290

void __cdecl _dynamic_atexit_destructor_for__CVarSplinesAlwaysUseBlockAll__(void)

{
  CVarSplinesAlwaysUseBlockAll._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSplinesAlwaysUseBlockAll);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseStreamingManagerForCameras'' @ 1503d62b0

void __cdecl _dynamic_atexit_destructor_for__CVarUseStreamingManagerForCameras__(void)

{
  CVarUseStreamingManagerForCameras._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseStreamingManagerForCameras);
  return;
}

// `dynamic_atexit_destructor_for_'CmdDumpLandscapeWeightmapAllocations'' @ 1503d62d0

void __cdecl
UE::Landscape::_dynamic_atexit_destructor_for__CmdDumpLandscapeWeightmapAllocations__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CmdDumpLandscapeWeightmapAllocations);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d62f0

void __cdecl
`UMaterialExpressionLandscapeLayerBlend::UMaterialExpressionLandscapeLayerBlend'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d62ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6310

void __cdecl
`UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d631f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6330

void __cdecl
`UMaterialExpressionLandscapeLayerSample::UMaterialExpressionLandscapeLayerSample'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d633f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6350

void __cdecl
`UMaterialExpressionLandscapeLayerSwitch::UMaterialExpressionLandscapeLayerSwitch'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d635f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6370

void __cdecl
`UMaterialExpressionLandscapeLayerWeight::UMaterialExpressionLandscapeLayerWeight'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d637f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6390

void __cdecl
`UMaterialExpressionLandscapePhysicalMaterialOutput::
UMaterialExpressionLandscapePhysicalMaterialOutput'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d639f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503d63b0

void __cdecl
```UE::Landscape::FRDGBuilderRecorder::Flush'::__l5::Desc::operator()'::__l7::<lambda_1>::
operator()<FString>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503d63b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 1503d63d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'OldCameras'' @ 1503d63f0

void __cdecl `ULandscapeSubsystem::Tick'::__l2::_dynamic_atexit_destructor_for__OldCameras__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OldCameras.AllocatorInstance.Data;
  if (OldCameras.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OldCameras.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

