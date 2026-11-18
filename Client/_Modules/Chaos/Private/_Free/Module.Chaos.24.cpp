// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 230

// `dynamic_initializer_for_'CVarForceNoCollisionIntoSQ'' @ 140f7c590

void __cdecl Chaos::_dynamic_initializer_for__CVarForceNoCollisionIntoSQ__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceNoCollisionIntoSQ,L"p.ForceNoCollisionIntoSQ",&ForceNoCollisionIntoSQ,
             L"When enabled, all particles end up in sq structure, even ones with no collision",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNoCollisionIntoSQ__);
  return;
}

// `dynamic_initializer_for_'CVarResimAllowRewindToResimulatedFrames'' @ 140f7c5e0

void __cdecl Chaos::_dynamic_initializer_for__CVarResimAllowRewindToResimulatedFrames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimAllowRewindToResimulatedFrames,L"p.Resim.AllowRewindToResimulatedFrames",
             &bResimAllowRewindToResimulatedFrames,
             L"Allow rewinding back to a frame that was previously part of a resimulation. If a resimulation is performed between frame 100-110, allow a new resim from 105-115 if needed, else next resim will be able to start from frame 111."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimAllowRewindToResimulatedFrames__);
  return;
}

// `dynamic_initializer_for_'CVarResimAllowRewindToResimulatedFramesOverlapPercent'' @ 140f7c630

void __cdecl
Chaos::_dynamic_initializer_for__CVarResimAllowRewindToResimulatedFramesOverlapPercent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimAllowRewindToResimulatedFramesOverlapPercent,
             L"p.Resim.AllowRewindToResimulatedFrames.OverlapPercent",
             &ResimAllowRewindToResimulatedFramesOverlapPercent,
             L"Value in percent as a multiplier, 0.3 = 30%. When p.Resim.AllowRewindToResimulatedFrames is true, this sets how many frames of overlap we allow when rewinding back past a previous resimulation. If a resimulation is performed between frame 100-110 (10 frames), 30% overlap would allow 3 frames to get resimulated again, i.e. we would be allowed to rewind back to frame 107 again if we need to."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimAllowRewindToResimulatedFramesOverlapPercent__);
  return;
}

// `dynamic_initializer_for_'CVarResimFindValidInputHistory'' @ 140f7c680

void __cdecl Chaos::_dynamic_initializer_for__CVarResimFindValidInputHistory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimFindValidInputHistory,L"p.Resim.FindValidInputHistory",
             &bFindValidInputHistory,
             L"If the particle that needs resimulation has custom input history, find a valid resim frame where inputs are available."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimFindValidInputHistory__);
  return;
}

// `dynamic_initializer_for_'CVarResimFindValidStateHistory'' @ 140f7c6d0

void __cdecl Chaos::_dynamic_initializer_for__CVarResimFindValidStateHistory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimFindValidStateHistory,L"p.Resim.FindValidStateHistory",
             &bFindValidStateHistory,
             L"If the particle that needs resimulation has custom state history, find a valid resim frame where states are available."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimFindValidStateHistory__);
  return;
}

// `dynamic_initializer_for_'CVarResimFrameValidationLeniency'' @ 140f7c720

void __cdecl Chaos::_dynamic_initializer_for__CVarResimFrameValidationLeniency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimFrameValidationLeniency,L"p.Resim.ResimFrameValidation",&ResimFrameValidation
             ,
             L"0 = no leniency, all dirty particles need a valid target. 1 = Island leniency, all particles in resim islands need a valid target. 2 = Full leniency, only the particle triggering the resim need a valid target."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimFrameValidationLeniency__);
  return;
}

// `dynamic_initializer_for_'CVarResimIncompleteHistory'' @ 140f7c770

void __cdecl Chaos::_dynamic_initializer_for__CVarResimIncompleteHistory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimIncompleteHistory,L"p.Resim.IncompleteHistory",&bResimIncompleteHistory,
             L"If a valid resim frame can\'t be found, use the requested resim frame and perform a resimulation with incomplete data."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimIncompleteHistory__);
  return;
}

// `dynamic_initializer_for_'CVarResimInterpolateTargetGaps'' @ 140f7c7c0

void __cdecl Chaos::_dynamic_initializer_for__CVarResimInterpolateTargetGaps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResimInterpolateTargetGaps,L"p.Resim.InterpolateTargetGaps",&InterpolateTargetGaps
             ,
             L"How many frame gaps in replicated targets we should fill by interpolating between the previous and the new target received. Value in max number of frames to interpolate, deactivate by setting to 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResimInterpolateTargetGaps__);
  return;
}

// `dynamic_initializer_for_'CVarRewindDataOptimization'' @ 140f7c810

void __cdecl Chaos::_dynamic_initializer_for__CVarRewindDataOptimization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRewindDataOptimization,L"p.Resim.RewindDataOptimization",
             &bCVarRewindDataOptimization,
             L"Default value for RewinData optimization, note that this can be overridden at runtime by API calls. Effect: Only alter the minimum required properties during a resim for particles not marked for FullResim and only cache data during the PrePushData phase and lower memory allocation for the history cache to 1/3 of non-optimized flow."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRewindDataOptimization__);
  return;
}

// `dynamic_initializer_for_'CVarSkipDesyncTest'' @ 140f7c860

void __cdecl Chaos::_dynamic_initializer_for__CVarSkipDesyncTest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipDesyncTest,L"p.SkipDesyncTest",&SkipDesyncTest,
             L"Skips hard desync test, this means all particles will assume to be clean except spawning at different times. This is useful for a perf lower bound, not actually correct"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipDesyncTest__);
  return;
}

// `dynamic_initializer_for_'CVarUseParticleResimAsFollowerDuringTargetValidation'' @ 140f7c8b0

void __cdecl
Chaos::_dynamic_initializer_for__CVarUseParticleResimAsFollowerDuringTargetValidation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseParticleResimAsFollowerDuringTargetValidation,
             L"p.Resim.UseParticleResimAsFollowerDuringTargetValidation",
             &bUseParticleResimAsFollowerDuringTargetValidation,
             L"If disabled, do not use the particle\'s ResimAsFollower flag when trying to find a valid resim frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseParticleResimAsFollowerDuringTargetValidation__);
  return;
}

// `dynamic_initializer_for_'CVar_PullPhysicsStateForceUpdateBounds'' @ 140f7c900

void __cdecl Chaos::_dynamic_initializer_for__CVar_PullPhysicsStateForceUpdateBounds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_PullPhysicsStateForceUpdateBounds,L"P.Chaos.PullPhysicsStateForceUpdateBounds",
             &bPullPhysicsStateForceUpdateBounds,
             L"If true, updates rigid particle bounds regardless of if X or R changed. The optimal setting is false."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_PullPhysicsStateForceUpdateBounds__);
  return;
}

// `dynamic_initializer_for_'CVar_ShallowCopyClusterUnionGeometryOnUpdate'' @ 140f7c950

void __cdecl Chaos::_dynamic_initializer_for__CVar_ShallowCopyClusterUnionGeometryOnUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ShallowCopyClusterUnionGeometryOnUpdate,L"p.ShallowCopyOnClusterUnionUpdate",
             &GShallowCopyClusterUnionGeometryOnUpdate,
             L"If 1, shallow copy the root union geometry of a cluster union when its geometry updates, otherwise deep copy the geometry hierarchy"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_ShallowCopyClusterUnionGeometryOnUpdate__);
  return;
}

// `dynamic_initializer_for_'CVar_SyncKinematicOnGameThread'' @ 140f7c9a0

void __cdecl Chaos::_dynamic_initializer_for__CVar_SyncKinematicOnGameThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_SyncKinematicOnGameThread,L"P.Chaos.SyncKinematicOnGameThread",
             &SyncKinematicOnGameThread,
             L"If set to 1, kinematic bodies will always send their transforms back to the game thread, following the simulation step/results. If 0, then they will never do so, and kinematics will be updated immediately their kinematic target is set. Any other value (e.g. the default -1) means that the behavior is determined on a per-object basis with the UpdateKinematicFromSimulation flag in BodyInstance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_SyncKinematicOnGameThread__);
  return;
}

// `dynamic_initializer_for_'FAutoRTFMChaosPhysSceneLockAutomationTestInstance'' @ 140f7c9f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FAutoRTFMChaosPhysSceneLockAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutoRTFMChaosPhysSceneLock");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMChaosPhysSceneLockAutomationTestInstance,&local_18,
             false);
  FAutoRTFMChaosPhysSceneLockAutomationTestInstance._0_8_ = &___7FAutoRTFMChaosPhysSceneLock__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAutoRTFMChaosPhysSceneLockAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FAutoRTFMChaosRefCountedObjectAutomationTestInstance'' @ 140f7ca50

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAutoRTFMChaosRefCountedObjectAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutoRTFMChaosRefCountedObject");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMChaosRefCountedObjectAutomationTestInstance,&local_18,
             false);
  FAutoRTFMChaosRefCountedObjectAutomationTestInstance._0_8_ =
       &___7FAutoRTFMChaosRefCountedObject__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAutoRTFMChaosRefCountedObjectAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f7cab0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f7cb40

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f7cbd0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f7cc60

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f7ccf0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f7cd80

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f7ce10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f7cea0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f7cf30

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f7cfc0

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

// `dynamic_initializer_for_'StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal'' @ 140f7d050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal>
      )0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal,*pFVar1,
               L"FClusterUnionPhysicsProxy::BufferPhysicsResults_External","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal'' @ 140f7d0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal>
      )0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal,*pFVar1,
               L"FClusterUnionPhysicsProxy::BufferPhysicsResults_Internal","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState'' @ 140f7d170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterUnionPhysicsProxyPullFromPhysicsState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState,*pFVar1,
               L"FClusterUnionPhysicsProxy::PullFromPhysicsState","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState'' @ 140f7d200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPushToPhysicsState>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterUnionPhysicsProxyPushToPhysicsState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState
               ,*pFVar1,L"FClusterUnionPhysicsProxy::PushToPhysicsState","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData'' @ 140f7d290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxySyncRemoteData>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterUnionPhysicsProxySyncRemoteData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData,
               *pFVar1,L"FClusterUnionPhysicsProxy::SyncRemoteData","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f7d320

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f7d3b0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f7d440

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f7d4d0

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

// `dynamic_initializer_for_'USkeletalMeshSimulationComponentLogging'' @ 140f7d560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__USkeletalMeshSimulationComponentLogging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging,
             L"USkeletalMeshSimulationComponentLogging",NoLogging,All);
  atexit(_dynamic_atexit_destructor_for__USkeletalMeshSimulationComponentLogging__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h__Script_Chaos_4230279879'' @ 140f7d5a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h__Script_Chaos_4230279879__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Chaos",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h__Script_Chaos_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `scalar_deleting_destructor' @ 1440bd260

void * __thiscall
FAutoRTFMChaosPhysSceneLock::_scalar_deleting_destructor_
          (FAutoRTFMChaosPhysSceneLock *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_FilterEnabled_SetBit @ 1440bd2a0

void __cdecl
Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1440bd2b0

void * __cdecl Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolverTrailingFilterSettings,&UE::CoreUObject::Private::Construct<FSolverTrailingFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSolverTrailingFilterSettings>,&UE::CoreUObject::Private::Destruct<FSolverTrailingFilterSettings>,&UE::CoreUObject::Private::Copy<FSolverTrailingFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_FilterEnabled_SetBit @ 1440bd340

void __cdecl
Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1440bd350

void * __cdecl Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolverCollisionFilterSettings,&UE::CoreUObject::Private::Construct<FSolverCollisionFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSolverCollisionFilterSettings>,&UE::CoreUObject::Private::Destruct<FSolverCollisionFilterSettings>,&UE::CoreUObject::Private::Copy<FSolverCollisionFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1440bda50

void * __thiscall
FAutoRTFMChaosRefCountedObject::_scalar_deleting_destructor_
          (FAutoRTFMChaosRefCountedObject *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_FilterEnabled_SetBit @ 1440bda90

void __cdecl
Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1440bdaa0

void * __cdecl Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolverBreakingFilterSettings,&UE::CoreUObject::Private::Construct<FSolverBreakingFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSolverBreakingFilterSettings>,&UE::CoreUObject::Private::Destruct<FSolverBreakingFilterSettings>,&UE::CoreUObject::Private::Copy<FSolverBreakingFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_FilterEnabled_SetBit @ 1440bdae0

void __cdecl
Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1440bdaf0

void * __cdecl Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolverRemovalFilterSettings,&UE::CoreUObject::Private::Construct<FSolverRemovalFilterSettings>,&UE::CoreUObject::Private::ConstructForTests<FSolverRemovalFilterSettings>,&UE::CoreUObject::Private::Destruct<FSolverRemovalFilterSettings>,&UE::CoreUObject::Private::Copy<FSolverRemovalFilterSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,`Chaos::FRewindData::PushGTDirtyData'::__l8::<lambda_3>_> @ 1440bdb30

bool __thiscall
`Chaos::FRewindData::PushGTDirtyData'::__l2::<lambda_1>::
operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,_Chaos::FRewindData::PushGTDirtyData_::__l8::<lambda_3>_>
          (void *this,TGeometryParticleHandleImp<double,3,1> *param_1,<lambda_3> *param_2)

{
  TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ESyncState *pEVar5;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *this_01;
  FFrameAndPhase FVar6;
  
  if ((*(int *)(*(longlong *)this + 0x4e0) < *(int *)(*(longlong *)this + 0x4e4)) &&
     (pEVar5 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_), *pEVar5 == InSync)) {
    return false;
  }
  iVar4 = *(int *)(*(longlong *)this + 0x4e0);
  if ((iVar4 < *(int *)(*(longlong *)this + 0x4e4)) &&
     (*(int *)(*(longlong *)((longlong)this + 8) + 0x38) == iVar4)) {
    Chaos::TGeometryParticleHandleImp<double,3,1>::SetEnabledDuringResim(param_1,true);
  }
  iVar4 = -1;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x38) == -1) {
    iVar4 = (*(FRewindData **)this)->CurFrame;
  }
  this_01 = Chaos::FRewindData::FindOrAddDirtyObj(*(FRewindData **)this,param_1,iVar4);
  this_00 = &(this_01->History).Dynamics;
  this_01->LastDirtyFrame = *(int *)(*(longlong *)this + 0x4e0);
  FVar6 = (FFrameAndPhase)(*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff);
  bVar2 = Chaos::FGeometryParticleStateBase::IsCleanExcludingDynamics(&this_01->History,FVar6);
  if (((!bVar2) ||
      (iVar4 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx(this_00,FVar6),
      iVar4 != -1)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149708>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x3cc,
                         "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PrePushData })"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (this_01->InitializedOnStep < *(int *)(*(longlong *)this + 0x4e0)) {
    PushGTDirtyData'::__l8::<lambda_3>::operator()(param_2,&this_01->History);
  }
  FVar6 = (FFrameAndPhase)(*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff | 0x40000000);
  bVar2 = Chaos::FGeometryParticleStateBase::IsCleanExcludingDynamics(&this_01->History,FVar6);
  if (((!bVar2) ||
      (iVar4 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx(this_00,FVar6),
      iVar4 != -1)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x3d7,
                         "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PostPushData })")
     , bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FVar6 = (FFrameAndPhase)(*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff | 0x80000000);
  bVar2 = Chaos::FGeometryParticleStateBase::IsCleanExcludingDynamics(&this_01->History,FVar6);
  if ((bVar2) &&
     (iVar4 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx
                        (&(this_01->History).Dynamics,FVar6), iVar4 == -1)) {
    return true;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3627022640780149720>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                     ,0x3d8,
                     "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PostCallbacks })");
  if (!bVar2) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// operator()<Chaos::FPBDJointConstraintHandle_*,`Chaos::FRewindData::PushGTDirtyData'::__l29::<lambda_4>_> @ 1440bde40

bool __thiscall
`Chaos::FRewindData::PushGTDirtyData'::__l2::<lambda_1>::
operator()<Chaos::FPBDJointConstraintHandle_*,_Chaos::FRewindData::PushGTDirtyData_::__l29::<lambda_4>_>
          (void *this,FPBDJointConstraintHandle *param_1,<lambda_4> *param_2)

{
  FPBDJointConstraintHandle *this_00;
  FRewindData *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ESyncState EVar4;
  bool bVar5;
  undefined1 uVar6;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *this_01;
  FPBDJointSettings *pFVar7;
  FPBDJointSettings *pFVar8;
  FPBDJointSettings *pFVar9;
  longlong lVar10;
  FPBDJointSettings *pFVar11;
  int iVar12;
  
  if ((*(int *)(*(longlong *)this + 0x4e0) < *(int *)(*(longlong *)this + 0x4e4)) &&
     (EVar4 = Chaos::FPBDJointConstraintHandle::SyncState(param_1), EVar4 == InSync)) {
    return false;
  }
  iVar12 = *(int *)(*(longlong *)this + 0x4e0);
  if ((iVar12 < *(int *)(*(longlong *)this + 0x4e4)) &&
     (*(int *)(*(longlong *)((longlong)this + 8) + 0x38) == iVar12)) {
    Chaos::FPBDJointConstraintHandle::SetEnabledDuringResim(param_1,true);
  }
  iVar12 = -1;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x38) == -1) {
    iVar12 = (*(FRewindData **)this)->CurFrame;
  }
  this_01 = Chaos::FRewindData::FindOrAddDirtyObj(*(FRewindData **)this,param_1,iVar12);
  this_01->LastDirtyFrame = *(int *)(*(longlong *)this + 0x4e0);
  bVar5 = Chaos::FJointStateBase::IsClean
                    (&this_01->History,
                     (FFrameAndPhase)(*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff));
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149708>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x3cc,
                         "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PrePushData })"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (this_01->InitializedOnStep < *(int *)(*(longlong *)this + 0x4e0)) {
    this_00 = param_2->Joint;
    if (((param_2->DirtyPropHelper->Dirty->PropertyData).Flags.Bits & 0x80) != 0) {
      pFVar1 = param_2->DirtyPropHelper->__this;
      pFVar7 = Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<1>
                         ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)this_01,
                          (FFrameAndPhase)(pFVar1->CurFrame & 0x3fffffff),&pFVar1->PropertiesPool);
      pFVar8 = Chaos::FPBDJointConstraintHandle::GetSettings(this_00);
      lVar10 = 6;
      do {
        pFVar11 = pFVar7;
        pFVar9 = pFVar8;
        pFVar7 = (FPBDJointSettings *)&(pFVar11->ConnectorTransforms).V[1].field_0x20;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x8;
        pFVar8 = (FPBDJointSettings *)&(pFVar9->ConnectorTransforms).V[1].field_0x20;
        *(undefined8 *)(pFVar11->ConnectorTransforms).V =
             *(undefined8 *)(pFVar9->ConnectorTransforms).V;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x8 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x18;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x10 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x10;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x18 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x28;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x20 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x20;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x28 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x38;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x30 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x30;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x38 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x48;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x40 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x40;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x48 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x58;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x50 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[0].field_0x50;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x58 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x8;
        *(undefined8 *)((pFVar11->ConnectorTransforms).V + 1) =
             *(undefined8 *)((pFVar9->ConnectorTransforms).V + 1);
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x8 = uVar3;
        uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x18;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x10 =
             *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x10;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x18 = uVar3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x28;
      *(undefined8 *)pFVar7 = *(undefined8 *)pFVar8;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x28 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x38;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x30 =
           *(undefined8 *)&(pFVar9->ConnectorTransforms).V[1].field_0x30;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x38 = uVar3;
    }
  }
  bVar5 = Chaos::FJointStateBase::IsClean
                    (&this_01->History,
                     (FFrameAndPhase)
                     (*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff | 0x40000000));
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x3d7,
                         "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PostPushData })")
     , bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  bVar5 = Chaos::FJointStateBase::IsClean
                    (&this_01->History,
                     (FFrameAndPhase)
                     (*(uint *)(*(longlong *)this + 0x4e0) & 0x3fffffff | 0x80000000));
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149720>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x3d8,
                         "Latest.IsClean(FFrameAndPhase{ CurFrame, FFrameAndPhase::PostCallbacks })"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return true;
}

// operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_2>,`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_3>_> @ 1440be340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_1>::
operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_2>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_3>_>
          (void *this,
          TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          *param_1,<lambda_2> *param_2,<lambda_3> *param_3)

{
  int *piVar1;
  char cVar2;
  FFrameAndPhase FVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar4;
  FRewindData *pFVar5;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ESyncState *pEVar13;
  FParticleDynamics *this_01;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *this_02;
  longlong lVar15;
  uint uVar16;
  TGeometryParticleHandleImp<double,3,1> *local_48 [2];
  
  uVar16 = (param_1->DenseVals).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar15 = (longlong)(int)uVar16 * 0x1a0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < (param_1->DenseVals).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_02 = (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                 *)((param_1->DenseVals).AllocatorInstance.Data + lVar15);
      if ((*(int *)(*(longlong *)this + 0x4e4) <= *(int *)(*(longlong *)this + 0x4e0)) ||
         (pEVar13 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                              ((TGeometryParticlesImp<double,3,0> *)this_02->ObjPtr->_padding_,
                               (int)this_02->ObjPtr->_padding_), *pEVar13 != InSync)) {
        FVar3 = *(FFrameAndPhase *)((longlong)this + 0xc);
        bVar9 = Chaos::FGeometryParticleStateBase::IsCleanExcludingDynamics
                          ((FGeometryParticleStateBase *)this_02,FVar3);
        if (((!bVar9) ||
            (iVar11 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx
                                (&(this_02->History).Dynamics,FVar3), iVar11 != -1)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3627022640780149584>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                               ,0x350,
                               "IsResimAndInSync(*Info.GetObjectPtr()) || Info.GetHistory().IsClean(FrameAndPhase)"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      this_00 = this_02->ObjPtr;
      if (this_02->LastDirtyFrame < *(int *)((longlong)this + 8)) {
        Chaos::
        TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
        ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                  *)(*(longlong *)this + 0x298),this_00,No);
      }
      else {
        uVar10 = (uint)this_00->_padding_;
        lVar4 = this_00->_padding_;
        uVar12 = 0;
        if ((int)uVar10 < *(int *)(lVar4 + 0x208)) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        cVar2 = *(char *)((longlong)(int)uVar10 + *(longlong *)(lVar4 + 0x200));
        this_02->bResimAsFollower = cVar2 == '\x01';
        pFVar5 = *(FRewindData **)this;
        if (pFVar5->CurFrame < pFVar5->LatestFrame) {
          if ((pFVar5->bRewindDataOptimization == false) && (cVar2 != '\x01')) {
            Chaos::FRewindData::
            DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                      (pFVar5,this_02,*(FFrameAndPhase *)((longlong)this + 0xc));
          }
          pEVar13 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                              ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                               (int)this_00->_padding_);
          if (((*pEVar13 != InSync) && (Chaos::SkipDesyncTest == 0)) &&
             (Chaos::TGeometryParticleHandleImp<double,3,1>::SetEnabledDuringResim(this_00,true),
             local_48[0] = this_00, param_2->bHasResimCache != false)) {
            pTVar6 = param_2->DesyncedParticles;
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)pTVar6->ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = pTVar6->ArrayNum;
            if (iVar11 == pTVar6->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
            }
            pTVar6->ArrayNum = iVar11 + 1;
            *(TGeometryParticleHandleImp<double,3,1> **)
             ((pTVar6->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_48[0];
          }
          this_02->bNeedsResim = false;
        }
        pFVar5 = param_3->__this;
        if (((pFVar5->bRewindDataOptimization == false) &&
            (this_02->DirtyDynamics == pFVar5->CurFrame)) &&
           ((pFVar5->LatestFrame <= pFVar5->CurFrame ||
            (pEVar13 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                                 ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                  (int)this_00->_padding_), *pEVar13 != InSync)))) {
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
            pTVar14 = this_00;
          }
          if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            this_02->LastDirtyFrame = param_3->__this->CurFrame;
            this_01 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::
                      WriteAccessImp<1>(&(this_02->History).Dynamics,param_3->FrameAndPhase,
                                        &param_3->__this->PropertiesPool);
            Chaos::FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                      (this_01,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
          }
        }
      }
      lVar15 = lVar15 + -0x1a0;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
    iVar11 = (param_1->DenseVals).ArrayNum;
    piVar1 = &(param_1->DenseVals).ArrayMax;
    if (*piVar1 != iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1a0,0x10,iVar11,&(param_1->DenseVals).AllocatorInstance,iVar11,piVar1);
    }
  }
  return;
}

// operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>,`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_4>,`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_5>_> @ 1440be710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_1>::
operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_4>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_5>_>
          (void *this,
          TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
          *param_1,<lambda_4> *param_2,<lambda_5> *param_3)

{
  int *piVar1;
  FFrameAndPhase FVar2;
  FPBDJointConstraintHandle *this_00;
  FRewindData *this_01;
  code *pcVar3;
  bool bVar4;
  ESyncState EVar5;
  EResimType EVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *this_02;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar12 = (param_1->DenseVals).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar10 = (longlong)(int)uVar12 * 0x60;
    do {
      uVar11 = 0;
      if ((int)uVar12 < (param_1->DenseVals).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_02 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
                ((param_1->DenseVals).AllocatorInstance.Data + lVar10);
      if (*(int *)(*(longlong *)this + 0x4e0) < *(int *)(*(longlong *)this + 0x4e4)) {
        EVar5 = Chaos::FPBDJointConstraintHandle::SyncState(this_02->ObjPtr);
        if (EVar5 != InSync) goto LAB_1440be7d2;
      }
      else {
LAB_1440be7d2:
        FVar2 = *(FFrameAndPhase *)((longlong)this + 0xc);
        iVar7 = Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::FindIdx
                          ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)this_02,FVar2);
        if (iVar7 == -1) {
          uVar11 = (this_02->History).JointProxies.Next;
          iVar7 = 0;
          if (0 < (this_02->History).JointProxies.NumValid) {
            iVar13 = ((FFrameAndPhase *)((longlong)this + 0xc))->Frame;
            uVar14 = 0xffffffff;
            do {
              uVar11 = uVar11 - 1;
              if ((int)uVar11 < 0) {
                uVar11 = (this_02->History).JointProxies.Buffer.ArrayNum - 1;
              }
              uVar8 = 0;
              if ((int)uVar11 < (this_02->History).JointProxies.Buffer.ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if (uVar8 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              uVar8 = *(uint *)((this_02->History).JointProxies.Buffer.AllocatorInstance.Data +
                               (longlong)(int)uVar11 * 8 + 4);
              iVar9 = (int)(uVar8 * 4) >> 2;
            } while ((iVar13 <= iVar9) &&
                    (((iVar9 != iVar13 || (((uint)FVar2 & 0xc0000000) <= (uVar8 & 0xc0000000))) &&
                     (iVar7 = iVar7 + 1, uVar14 = uVar11,
                     iVar7 < (this_02->History).JointProxies.NumValid))));
            if (uVar14 != 0xffffffff) goto LAB_1440be89a;
          }
        }
        else {
LAB_1440be89a:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3627022640780149584>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                             ,0x350,
                             "IsResimAndInSync(*Info.GetObjectPtr()) || Info.GetHistory().IsClean(FrameAndPhase)"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      this_00 = this_02->ObjPtr;
      if (this_02->LastDirtyFrame < *(int *)((longlong)this + 8)) {
        Chaos::
        TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
        ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
                  *)(*(longlong *)this + 0x2f8),this_00,No);
      }
      else {
        EVar6 = Chaos::FPBDJointConstraintHandle::ResimType(this_00);
        this_02->bResimAsFollower = EVar6 == ResimAsFollower;
        this_01 = *(FRewindData **)this;
        if (this_01->CurFrame < this_01->LatestFrame) {
          if ((this_01->bRewindDataOptimization == false) && (EVar6 != ResimAsFollower)) {
            Chaos::FRewindData::
            DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
                      (this_01,this_02,*(FFrameAndPhase *)((longlong)this + 0xc));
          }
          EVar5 = Chaos::FPBDJointConstraintHandle::SyncState(this_00);
          if ((EVar5 != InSync) && (Chaos::SkipDesyncTest == 0)) {
            Chaos::FPBDJointConstraintHandle::SetEnabledDuringResim(this_00,true);
          }
          this_02->bNeedsResim = false;
        }
      }
      lVar10 = lVar10 + -0x60;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    iVar7 = (param_1->DenseVals).ArrayNum;
    piVar1 = &(param_1->DenseVals).ArrayMax;
    if (*piVar1 != iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar7,&(param_1->DenseVals).AllocatorInstance,iVar7,piVar1);
    }
  }
  return;
}

// operator()<Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>,Chaos::TGeometryParticleHandleImp<double,3,1>,`Chaos::FRewindData::CacheDirtyParticleData'::__l2::<lambda_2>_> @ 1440be9e0

void __thiscall
`Chaos::FRewindData::CacheDirtyParticleData'::__l2::<lambda_1>::
operator()<Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>,Chaos::TGeometryParticleHandleImp<double,3,1>,_Chaos::FRewindData::CacheDirtyParticleData_::__l2::<lambda_2>_>
          (void *this,TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2,<lambda_2> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ESyncState *pEVar7;
  FParticlePositionRotation *this_00;
  TVector<double,3> *pTVar8;
  TVector<float,3> *pTVar9;
  TRotation<double,3> *pTVar10;
  uint uVar11;
  uint uVar12;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  TVector<float,3> local_68;
  TRotation<double,3> local_58;
  TRotation<double,3> local_38;
  
  if (((*(int *)(*(longlong *)this + 0x4e0) < *(int *)(*(longlong *)this + 0x4e4)) &&
      (pEVar7 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_), *pEVar7 == InSync)) &&
     (iVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
                        (param_1,*(FFrameAndPhase *)((longlong)this + 8)), iVar6 != -1)) {
    return;
  }
  this_00 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>
                      (param_1,*(FFrameAndPhase *)((longlong)this + 8),
                       (FDirtyPropertiesPool *)(*(longlong *)this + 0x18));
  if (this_00 != (FParticlePositionRotation *)0x0) {
    if (((*param_3->bCachePreFromPost != false) &&
        (*param_3->RigidParticle != (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) &&
       (bVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::IsMovingKinematic
                          (*param_3->RigidParticle), bVar5)) {
      pTVar8 = Chaos::TParticles<double,3>::GetX
                         (*(TParticles<double,3> **)*param_3->RigidParticle,
                          *(int *)&(*param_3->RigidParticle)->field_0x8);
      Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                (*(TKinematicGeometryParticlesImp<double,3,0> **)*param_3->RigidParticle,
                 (TVector<double,3> *)&local_98,*(int *)&(*param_3->RigidParticle)->field_0x8);
      dVar1 = *(double *)&pTVar8->field_0x10;
      dVar2 = *(double *)&pTVar8->field_0x8;
      dVar3 = (double)param_3->__this->Solver->_padding_;
      *(double *)&this_00->MX = *(double *)pTVar8 - dVar3 * local_98;
      *(double *)&(this_00->MX).field_0x8 = dVar2 - dVar3 * local_90;
      *(double *)&(this_00->MX).field_0x10 = dVar1 - dVar3 * local_88;
      lVar4 = param_3->__this->Solver->_padding_;
      uVar11 = (uint)lVar4 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar12 = (uint)((ulonglong)lVar4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      pTVar9 = Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
                         ((TKinematicGeometryParticleHandleImp<double,3,1> *)*param_3->RigidParticle
                          ,&local_68);
      local_70 = (double)*(float *)&pTVar9->field_0x8;
      local_78 = (double)*(float *)&pTVar9->field_0x4;
      local_80 = (double)*(float *)pTVar9;
      pTVar10 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetR
                          ((TGeometryParticleHandleImp<double,3,1> *)*param_3->RigidParticle,
                           &local_58);
      pTVar10 = Chaos::TRotation<double,3>::IntegrateRotationWithAngularVelocity
                          (&local_38,pTVar10,(TVector<double,3> *)&local_80,
                           (double)CONCAT44(uVar12,uVar11));
      dVar1 = *(double *)&pTVar10->field_0x8;
      dVar2 = *(double *)&pTVar10->field_0x10;
      dVar3 = *(double *)&pTVar10->field_0x18;
      *(float *)&this_00->MR = (float)*(double *)pTVar10;
      *(float *)&(this_00->MR).field_0x4 = (float)dVar1;
      *(float *)&(this_00->MR).field_0x8 = (float)dVar2;
      *(float *)&(this_00->MR).field_0xc = (float)dVar3;
      return;
    }
    Chaos::FParticlePositionRotation::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_00,param_2);
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_10>_> @ 1440bf270

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_10>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::ReadLock(*(FPhysicsRwLock **)param_1);
  Chaos::FPhysicsRwLock::ReadUnlock(*(FPhysicsRwLock **)param_1);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_11>_> @ 1440bf2a0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_11>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::WriteLock(*(FPhysicsRwLock **)param_1);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_12>_> @ 1440bf2b0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_12>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::WriteLock(*(FPhysicsRwLock **)param_1);
  Chaos::FPhysicsRwLock::WriteUnlock(*(FPhysicsRwLock **)param_1);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_13>_> @ 1440bf2e0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_13>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::WriteLock(*(FPhysicsRwLock **)param_1);
  Chaos::FPhysicsRwLock::WriteUnlock(*(FPhysicsRwLock **)param_1);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_1>_> @ 1440bf310

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_1>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  RTL_SRWLOCK local_18;
  DWORD local_10;
  
  local_18.Ptr = (PVOID)0x0;
  local_10 = TlsAlloc();
  if (local_10 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_10 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_10);
  BVar3 = TryAcquireSRWLockExclusive(&local_18);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive(&local_18);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l2::<lambda_1>_> @ 1440bf3e0

/* WARNING: Removing unreachable block (ram,0x0001440bf3f5) */
/* WARNING: Removing unreachable block (ram,0x0001440bf3fe) */
/* WARNING: Removing unreachable block (ram,0x0001440bf423) */

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l2::<lambda_1>_>
          (void *param_1)

{
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_2>_> @ 1440bf430

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_2>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  RTL_SRWLOCK local_28;
  DWORD local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_28.Ptr = (PVOID)0x0;
  local_20 = TlsAlloc();
  if (local_20 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockReadLock);
  pvVar4 = TlsGetValue(local_20);
  uVar7 = (int)pvVar4 + 1;
  TlsSetValue(local_20,(LPVOID)((ulonglong)pvVar4 & 0xffffffff00000000 | (ulonglong)uVar7));
  if (uVar7 + (int)((ulonglong)pvVar4 >> 0x20) == 1) {
    AcquireSRWLockShared(&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  if (local_20 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_20);
  BVar3 = TryAcquireSRWLockExclusive(&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive(&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l6::<lambda_2>_> @ 1440bf590

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l6::<lambda_2>_>
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  LOCK();
  *(int *)(**(longlong **)param_1 + 8) = *(int *)(**(longlong **)param_1 + 8) + 1;
  UNLOCK();
  puVar3 = (undefined8 *)**(longlong **)param_1;
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001440bf5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_3>_> @ 1440bf5d0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_3>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  FPhysicsRwLock local_28;
  code *local_18;
  undefined1 *local_10;
  
  local_28.RwLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_28.TlsSlot = TlsAlloc();
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockReadLock);
  pvVar4 = TlsGetValue(local_28.TlsSlot);
  uVar7 = (int)pvVar4 + 1;
  TlsSetValue(local_28.TlsSlot,(LPVOID)((ulonglong)pvVar4 & 0xffffffff00000000 | (ulonglong)uVar7));
  if (uVar7 + (int)((ulonglong)pvVar4 >> 0x20) == 1) {
    AcquireSRWLockShared((PSRWLOCK)&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  Chaos::FPhysicsRwLock::ReadUnlock(&local_28);
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_28.TlsSlot);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l7::<lambda_3>_> @ 1440bf730

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l7::<lambda_3>_>
          (void *param_1)

{
  LOCK();
  *(int *)(**(longlong **)param_1 + 8) = *(int *)(**(longlong **)param_1 + 8) + 1;
  UNLOCK();
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)((longlong)param_1 + 8),
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:51: TestEqual(TransientObject->GetRefCount(), 2)"
             ,*(int *)(**(longlong **)param_1 + 8),2);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_4>_> @ 1440bf770

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_4>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  FPhysicsRwLock local_28;
  code *local_18;
  undefined1 *local_10;
  
  local_28.RwLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_28.TlsSlot = TlsAlloc();
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockReadLock);
  pvVar4 = TlsGetValue(local_28.TlsSlot);
  uVar7 = (int)pvVar4 + 1;
  TlsSetValue(local_28.TlsSlot,(LPVOID)((ulonglong)pvVar4 & 0xffffffff00000000 | (ulonglong)uVar7));
  if (uVar7 + (int)((ulonglong)pvVar4 >> 0x20) == 1) {
    AcquireSRWLockShared((PSRWLOCK)&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  Chaos::FPhysicsRwLock::ReadUnlock(&local_28);
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_28.TlsSlot);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l12::<lambda_4>_> @ 1440bf8d0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l12::<lambda_4>_>
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(longlong **)param_1;
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001440bf8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_5>_> @ 1440bf900

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_5>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  RTL_SRWLOCK local_28;
  DWORD local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_28.Ptr = (PVOID)0x0;
  local_20 = TlsAlloc();
  if (local_20 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
  pvVar4 = TlsGetValue(local_20);
  uVar7 = (int)((ulonglong)pvVar4 >> 0x20) + 1;
  TlsSetValue(local_20,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff));
  if (uVar7 + (int)pvVar4 == 1) {
    AcquireSRWLockExclusive(&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  if (local_20 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_20);
  BVar3 = TryAcquireSRWLockExclusive(&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive(&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l17::<lambda_5>_> @ 1440bfa50

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l17::<lambda_5>_>
          (void *param_1)

{
  LOCK();
  *(int *)(**(longlong **)param_1 + 8) = *(int *)(**(longlong **)param_1 + 8) + 1;
  UNLOCK();
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_6>_> @ 1440bfa70

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_6>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  FPhysicsRwLock local_28;
  code *local_18;
  undefined1 *local_10;
  
  local_28.RwLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_28.TlsSlot = TlsAlloc();
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
  pvVar4 = TlsGetValue(local_28.TlsSlot);
  uVar7 = (int)((ulonglong)pvVar4 >> 0x20) + 1;
  TlsSetValue(local_28.TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff));
  if (uVar7 + (int)pvVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  Chaos::FPhysicsRwLock::WriteUnlock(&local_28);
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_28.TlsSlot);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l20::<lambda_6>_> @ 1440bfbd0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l20::<lambda_6>_>
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  LOCK();
  *(int *)(**(longlong **)param_1 + 8) = *(int *)(**(longlong **)param_1 + 8) + 1;
  UNLOCK();
  puVar3 = (undefined8 *)**(longlong **)param_1;
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001440bfbff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_7>_> @ 1440bfc10

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_7>_>
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res10 [24];
  FPhysicsRwLock local_28;
  code *local_18;
  undefined1 *local_10;
  
  local_28.RwLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_28.TlsSlot = TlsAlloc();
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
  pvVar4 = TlsGetValue(local_28.TlsSlot);
  uVar7 = (int)((ulonglong)pvVar4 >> 0x20) + 1;
  TlsSetValue(local_28.TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff));
  if (uVar7 + (int)pvVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_28);
  }
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
  Chaos::Insights::AcquiredLock();
  Chaos::FPhysicsRwLock::WriteUnlock(&local_28);
  if (local_28.TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsFree(local_28.TlsSlot);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_28);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_28);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosRefCountedObject::RunTest'::__l21::<lambda_7>_> @ 1440bfd70

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosRefCountedObject::RunTest_::__l21::<lambda_7>_>
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  LOCK();
  *(undefined4 *)(**(longlong **)param_1 + 0xc) = 1;
  UNLOCK();
  LOCK();
  *(int *)(**(longlong **)param_1 + 8) = *(int *)(**(longlong **)param_1 + 8) + 1;
  UNLOCK();
  puVar3 = (undefined8 *)**(longlong **)param_1;
  LOCK();
  piVar1 = (int *)(puVar3 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001440bfdb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_8>_> @ 1440bfdc0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_8>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::ReadLock(*(FPhysicsRwLock **)param_1);
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMChaosPhysSceneLock::RunTest'::__l2::<lambda_9>_> @ 1440bfdd0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMChaosPhysSceneLock::RunTest_::__l2::<lambda_9>_>
          (void *param_1)

{
  Chaos::FPhysicsRwLock::ReadLock(*(FPhysicsRwLock **)param_1);
  Chaos::FPhysicsRwLock::ReadUnlock(*(FPhysicsRwLock **)param_1);
  return;
}

// BufferPhysicsResultsImp<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 1440bfe70

void __cdecl
Chaos::`anonymous_namespace'::
BufferPhysicsResultsImp<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (FClusterUnionPhysicsProxy *param_1,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,FDirtyClusterUnionData *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  TArray<Chaos::FCollisionData,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar9;
  float fVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  FImplicitObject *pFVar14;
  FScriptContainerElement *pFVar15;
  FCollisionFilterData *pFVar16;
  code *pcVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  bool bVar21;
  EObjectStateType EVar22;
  int iVar23;
  TVector<double,3> *pTVar24;
  double *pdVar25;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar26;
  FCollisionFilterData *pFVar27;
  FRigidClusteredFlags_u_0 *pFVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  undefined1 local_res20 [8];
  TVector<double,3> local_70;
  TVector<double,3> local_58;
  
  if ((param_2 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
     (param_1 != (FClusterUnionPhysicsProxy *)0x0)) {
    TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp>::SetProxy
              ((TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp> *)
               param_3,param_1);
    pTVar24 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_2,*(int *)&param_2->field_0x8);
    uVar11 = *(undefined8 *)&pTVar24->field_0x8;
    *(undefined8 *)&param_3->X = *(undefined8 *)pTVar24;
    *(undefined8 *)&(param_3->X).field_0x8 = uVar11;
    *(undefined8 *)&(param_3->X).field_0x10 = *(undefined8 *)&pTVar24->field_0x10;
    uVar12 = *(uint *)&param_2->field_0x8;
    lVar30 = (longlong)(int)uVar12;
    lVar31 = *(longlong *)param_2;
    uVar29 = 0;
    if ((int)uVar12 < *(int *)(lVar31 + 0x50)) {
      uVar29 = ~uVar12 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    lVar31 = *(longlong *)(lVar31 + 0x48);
    uVar11 = *(undefined8 *)(lVar31 + 4 + lVar30 * 0x10);
    fVar10 = *(float *)(lVar31 + 0xc + lVar30 * 0x10);
    dVar19 = (double)(float)uVar11;
    dVar20 = (double)(float)((ulonglong)uVar11 >> 0x20);
    (param_3->R).X = (double)*(float *)(lVar31 + lVar30 * 0x10);
    auVar18._8_4_ = SUB84(dVar20,0);
    auVar18._0_8_ = dVar19;
    auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    (param_3->R).Y = dVar19;
    (param_3->R).Z = (double)auVar18._8_8_;
    (param_3->R).W = (double)fVar10;
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,&local_70,
               *(int *)&param_2->field_0x8);
    *(undefined8 *)&param_3->V = local_70._0_8_;
    *(undefined8 *)&(param_3->V).field_0x8 = local_70._8_8_;
    *(undefined8 *)&(param_3->V).field_0x10 = local_70._16_8_;
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,&local_58,
               *(int *)&param_2->field_0x8);
    *(undefined8 *)&param_3->W = local_58._0_8_;
    *(undefined8 *)&(param_3->W).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(param_3->W).field_0x10 = local_58._16_8_;
    pdVar25 = TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    param_3->Mass = (float)*pdVar25;
    uVar12 = *(uint *)&param_2->field_0x8;
    lVar31 = *(longlong *)param_2;
    uVar29 = 0;
    if ((int)uVar12 < *(int *)(lVar31 + 0x388)) {
      uVar29 = ~uVar12 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    lVar31 = *(longlong *)(lVar31 + 0x380);
    uVar13 = *(undefined4 *)(lVar31 + 8 + (longlong)(int)uVar12 * 0xc);
    *(undefined8 *)&param_3->Inertia = *(undefined8 *)(lVar31 + (longlong)(int)uVar12 * 0xc);
    *(undefined4 *)&(param_3->Inertia).field_0x8 = uVar13;
    EVar22 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    param_3->ObjectState = EVar22;
    pFVar14 = (param_3->Geometry).Reference;
    if (pFVar14 != (FImplicitObject *)0x0) {
      (param_3->Geometry).Reference = (FImplicitObject *)0x0;
      LOCK();
      plVar1 = &pFVar14->_padding_;
      lVar31 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar31 == 1) && (*(int *)((longlong)&pFVar14->_padding_ + 4) == 0)) {
        (**(code **)pFVar14->_padding_)(pFVar14,1);
      }
    }
    FVar26 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )TGeometryParticlesImp<double,3,0>::ShapesArray
                         (*(TGeometryParticlesImp<double,3,0> **)param_2,*(int *)&param_2->field_0x8
                         );
    uVar12 = *(int *)((longlong)FVar26 + 0x10);
    pTVar6 = &param_3->CollisionData;
    piVar2 = (int *)((longlong)FVar26 + 0x10);
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar3 = &(param_3->CollisionData).ArrayMax;
    (param_3->CollisionData).ArrayNum = 0;
    if (*piVar3 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar12,&pTVar6->AllocatorInstance,0,piVar3);
    }
    uVar12 = *piVar2;
    pTVar7 = &param_3->QueryData;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    (param_3->QueryData).ArrayNum = 0;
    piVar4 = &(param_3->QueryData).ArrayMax;
    if ((param_3->QueryData).ArrayMax != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar12,&pTVar7->AllocatorInstance,0,piVar4);
    }
    uVar12 = *piVar2;
    pTVar8 = &param_3->SimData;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar5 = &(param_3->SimData).ArrayMax;
    (param_3->SimData).ArrayNum = 0;
    if (*piVar5 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar12,&pTVar8->AllocatorInstance,0,piVar5);
    }
    uVar12 = *piVar2;
    if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
         ((longlong)FVar26 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0
       ) {
      FVar26 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *)((longlong)FVar26 + 8);
    }
    FVar9 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar26 + (longlong)(int)uVar12 * 8);
    while( true ) {
      if (*piVar2 != uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar26 == FVar9) break;
      lVar31 = 0x50;
      pFVar15 = (pTVar6->AllocatorInstance).Data;
      if ((*(byte *)(*(longlong *)FVar26 + 8) & 3) != 0) {
        lVar31 = 0x48;
      }
      pFVar32 = (FScriptContainerElement *)(lVar31 + *(longlong *)FVar26);
      if (((pFVar15 <= pFVar32) && (pFVar32 < pFVar15 + (longlong)*piVar3 * 0x30)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar23 = (param_3->CollisionData).ArrayNum;
      if (iVar23 == *piVar3) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar6->AllocatorInstance,piVar3);
      }
      (param_3->CollisionData).ArrayNum = iVar23 + 1;
      uVar11 = *(undefined8 *)(pFVar32 + 8);
      lVar31 = (longlong)iVar23;
      pFVar15 = (pTVar6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar15 + lVar31 * 0x30) = *(undefined8 *)pFVar32;
      *(undefined8 *)(pFVar15 + lVar31 * 0x30 + 8) = uVar11;
      uVar11 = *(undefined8 *)(pFVar32 + 0x18);
      *(undefined8 *)(pFVar15 + lVar31 * 0x30 + 0x10) = *(undefined8 *)(pFVar32 + 0x10);
      *(undefined8 *)(pFVar15 + lVar31 * 0x30 + 0x10 + 8) = uVar11;
      uVar11 = *(undefined8 *)(pFVar32 + 0x28);
      *(undefined8 *)(pFVar15 + lVar31 * 0x30 + 0x20) = *(undefined8 *)(pFVar32 + 0x20);
      *(undefined8 *)(pFVar15 + lVar31 * 0x30 + 0x20 + 8) = uVar11;
      lVar31 = 0x50;
      if ((*(byte *)(*(longlong *)FVar26 + 8) & 3) != 0) {
        lVar31 = 0x48;
      }
      pFVar27 = FCollisionData::GetQueryData((FCollisionData *)(lVar31 + *(longlong *)FVar26));
      pFVar16 = (FCollisionFilterData *)(pTVar7->AllocatorInstance).Data;
      if (((pFVar16 <= pFVar27) && (pFVar27 < pFVar16 + *piVar4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar23 = (param_3->QueryData).ArrayNum;
      if (iVar23 == *piVar4) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar7->AllocatorInstance,piVar4);
      }
      (param_3->QueryData).ArrayNum = iVar23 + 1;
      uVar11 = *(undefined8 *)&pFVar27->Word2;
      pFVar15 = (pTVar7->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar27;
      *(undefined8 *)(pFVar15 + 8) = uVar11;
      lVar31 = 0x50;
      if ((*(byte *)(*(longlong *)FVar26 + 8) & 3) != 0) {
        lVar31 = 0x48;
      }
      pFVar27 = FCollisionData::GetSimData((FCollisionData *)(lVar31 + *(longlong *)FVar26));
      pFVar16 = (FCollisionFilterData *)(pTVar8->AllocatorInstance).Data;
      if (((pFVar16 <= pFVar27) && (pFVar27 < pFVar16 + (param_3->SimData).ArrayMax)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar23 = (param_3->SimData).ArrayNum;
      if (iVar23 == (param_3->SimData).ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar8->AllocatorInstance,&(param_3->SimData).ArrayMax);
      }
      (param_3->SimData).ArrayNum = iVar23 + 1;
      uVar11 = *(undefined8 *)&pFVar27->Word2;
      FVar26 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )((longlong)FVar26 + 8);
      pFVar15 = (pTVar8->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar27;
      *(undefined8 *)(pFVar15 + 8) = uVar11;
    }
    pFVar28 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         (*(TPBDRigidClusteredParticles<double,3> **)param_2,
                          *(int *)&param_2->field_0x8)->field0_0x0;
    param_3->bIsAnchored = (bool)(pFVar28->Bits >> 1 & 1);
  }
  return;
}

// BufferPhysicsResultsImp<Chaos::TPBDRigidParticle<double,3>_> @ 1440c0470

void __cdecl
Chaos::`anonymous_namespace'::BufferPhysicsResultsImp<Chaos::TPBDRigidParticle<double,3>_>
          (FClusterUnionPhysicsProxy *param_1,TPBDRigidParticle<double,3> *param_2,
          FDirtyClusterUnionData *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<Chaos::FCollisionData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  FImplicitObject *pFVar11;
  FScriptContainerElement *pFVar12;
  FCollisionFilterData *pFVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  bool bVar20;
  int iVar21;
  FCollisionFilterData *pFVar22;
  ulonglong uVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  TArray<FCollisionFilterData,TSizedDefaultAllocator<32>_> *pTVar26;
  longlong *plVar27;
  undefined1 local_res10 [16];
  uint local_res20;
  
  if ((param_2 != (TPBDRigidParticle<double,3> *)0x0) &&
     (param_1 != (FClusterUnionPhysicsProxy *)0x0)) {
    TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp>::SetProxy
              ((TBasePullData<Chaos::FClusterUnionPhysicsProxy,FClusterUnionProxyTimestamp> *)
               param_3,param_1);
    uVar8 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_3->X = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)&(param_3->X).field_0x8 = uVar8;
    *(undefined8 *)&(param_3->X).field_0x10 = *(undefined8 *)&param_2->field_0x30;
    fVar7 = *(float *)&param_2->field_0x4c;
    dVar18 = (double)(float)*(undefined8 *)&param_2->field_0x44;
    dVar19 = (double)(float)((ulonglong)*(undefined8 *)&param_2->field_0x44 >> 0x20);
    (param_3->R).X = (double)*(float *)&param_2->field_0x40;
    auVar15._8_4_ = SUB84(dVar19,0);
    auVar15._0_8_ = dVar18;
    auVar15._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    (param_3->R).Y = dVar18;
    (param_3->R).Z = (double)auVar15._8_8_;
    (param_3->R).W = (double)fVar7;
    uVar8 = *(undefined8 *)&param_2->field_0xa4;
    dVar18 = (double)(float)((ulonglong)uVar8 >> 0x20);
    *(double *)&param_3->V = (double)*(float *)&param_2->field_0xa0;
    auVar16._8_4_ = SUB84(dVar18,0);
    auVar16._0_8_ = (double)(float)uVar8;
    auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])&(param_3->V).field_0x8 = auVar16;
    uVar8 = *(undefined8 *)&param_2->field_0xb0;
    dVar18 = (double)(float)((ulonglong)uVar8 >> 0x20);
    *(double *)&param_3->W = (double)*(float *)&param_2->field_0xac;
    auVar17._8_4_ = SUB84(dVar18,0);
    auVar17._0_8_ = (double)(float)uVar8;
    auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])&(param_3->W).field_0x8 = auVar17;
    param_3->Mass = (float)(param_2->MMassProps).Property.MM;
    uVar9 = *(undefined4 *)&(param_2->MMassProps).Property.MI.field_0x8;
    *(undefined8 *)&param_3->Inertia = *(undefined8 *)&(param_2->MMassProps).Property.MI;
    *(undefined4 *)&(param_3->Inertia).field_0x8 = uVar9;
    param_3->ObjectState = (param_2->MMiscData).Property.MObjectState;
    pFVar11 = (param_3->Geometry).Reference;
    if (pFVar11 != (FImplicitObject *)0x0) {
      (param_3->Geometry).Reference = (FImplicitObject *)0x0;
      LOCK();
      plVar27 = &pFVar11->_padding_;
      lVar24 = *plVar27;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if (((int)lVar24 == 1) && (*(int *)((longlong)&pFVar11->_padding_ + 4) == 0)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    uVar10 = *(uint *)&param_2->field_0x90;
    pTVar4 = &param_3->CollisionData;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &(param_3->CollisionData).ArrayMax;
    (param_3->CollisionData).ArrayNum = 0;
    if (*piVar1 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar10,&pTVar4->AllocatorInstance,0,piVar1);
    }
    uVar10 = *(uint *)&param_2->field_0x90;
    pTVar5 = &param_3->QueryData;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar2 = &(param_3->QueryData).ArrayMax;
    (param_3->QueryData).ArrayNum = 0;
    if (*piVar2 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar10,&pTVar5->AllocatorInstance,0,piVar2);
    }
    uVar10 = *(uint *)&param_2->field_0x90;
    pTVar26 = &param_3->SimData;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar3 = &(param_3->SimData).ArrayMax;
    (param_3->SimData).ArrayNum = 0;
    if (*piVar3 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar10,&pTVar26->AllocatorInstance,0,piVar3);
    }
    local_res20 = *(uint *)&param_2->field_0x90;
    uVar23 = (ulonglong)(int)local_res20;
    plVar27 = *(longlong **)&param_2->field_0x88;
    if (*(longlong **)&param_2->field_0x88 == (longlong *)0x0) {
      plVar27 = (longlong *)&param_2->field_0x80;
    }
    plVar6 = plVar27 + uVar23;
    while( true ) {
      if (*(int *)&param_2->field_0x90 != (int)uVar23) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (plVar27 == plVar6) break;
      lVar24 = 0x50;
      if ((*(byte *)(*plVar27 + 8) & 3) != 0) {
        lVar24 = 0x48;
      }
      pFVar12 = (pTVar4->AllocatorInstance).Data;
      pFVar25 = (FScriptContainerElement *)(lVar24 + *plVar27);
      if (((pFVar12 <= pFVar25) && (pFVar25 < pFVar12 + (longlong)*piVar1 * 0x30)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = (param_3->CollisionData).ArrayNum;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar4->AllocatorInstance,piVar1);
      }
      (param_3->CollisionData).ArrayNum = iVar21 + 1;
      uVar8 = *(undefined8 *)(pFVar25 + 8);
      lVar24 = (longlong)iVar21;
      pFVar12 = (pTVar4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar12 + lVar24 * 0x30) = *(undefined8 *)pFVar25;
      *(undefined8 *)(pFVar12 + lVar24 * 0x30 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar25 + 0x18);
      *(undefined8 *)(pFVar12 + lVar24 * 0x30 + 0x10) = *(undefined8 *)(pFVar25 + 0x10);
      *(undefined8 *)(pFVar12 + lVar24 * 0x30 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar25 + 0x28);
      *(undefined8 *)(pFVar12 + lVar24 * 0x30 + 0x20) = *(undefined8 *)(pFVar25 + 0x20);
      *(undefined8 *)(pFVar12 + lVar24 * 0x30 + 0x20 + 8) = uVar8;
      lVar24 = 0x50;
      if ((*(byte *)(*plVar27 + 8) & 3) != 0) {
        lVar24 = 0x48;
      }
      pFVar22 = FCollisionData::GetQueryData((FCollisionData *)(lVar24 + *plVar27));
      pFVar13 = (FCollisionFilterData *)(pTVar5->AllocatorInstance).Data;
      if (((pFVar13 <= pFVar22) && (pFVar22 < pFVar13 + *piVar2)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = (param_3->QueryData).ArrayNum;
      if (iVar21 == *piVar2) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar5->AllocatorInstance,piVar2);
      }
      (param_3->QueryData).ArrayNum = iVar21 + 1;
      uVar8 = *(undefined8 *)&pFVar22->Word2;
      pFVar12 = (pTVar5->AllocatorInstance).Data + (longlong)iVar21 * 0x10;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar22;
      *(undefined8 *)(pFVar12 + 8) = uVar8;
      lVar24 = 0x50;
      if ((*(byte *)(*plVar27 + 8) & 3) != 0) {
        lVar24 = 0x48;
      }
      pFVar22 = FCollisionData::GetSimData((FCollisionData *)(lVar24 + *plVar27));
      pFVar13 = (FCollisionFilterData *)(pTVar26->AllocatorInstance).Data;
      if (((pFVar13 <= pFVar22) && (pFVar22 < pFVar13 + *piVar3)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar21 = (param_3->SimData).ArrayNum;
      if (iVar21 == *piVar3) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar26->AllocatorInstance,piVar3);
      }
      (param_3->SimData).ArrayNum = iVar21 + 1;
      uVar8 = *(undefined8 *)&pFVar22->Word2;
      plVar27 = plVar27 + 1;
      pFVar12 = (pTVar26->AllocatorInstance).Data + (longlong)iVar21 * 0x10;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar22;
      *(undefined8 *)(pFVar12 + 8) = uVar8;
      uVar23 = (ulonglong)local_res20;
    }
  }
  return;
}

// BufferPhysicsResultsImp<Chaos::TPBDRigidParticle<double,3>_> @ 1440c0960

void __cdecl
Chaos::BufferPhysicsResultsImp<Chaos::TPBDRigidParticle<double,3>_>
          (FDirtyRigidParticleData *param_1,TPBDRigidParticle<double,3> *param_2)

{
  float fVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_1->X = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(param_1->X).field_0x8 = uVar2;
  *(undefined8 *)&(param_1->X).field_0x10 = *(undefined8 *)&param_2->field_0x30;
  uVar2 = *(undefined8 *)&param_2->field_0x44;
  fVar1 = *(float *)&param_2->field_0x4c;
  (param_1->R).X = (double)*(float *)&param_2->field_0x40;
  (param_1->R).Y = (double)(float)uVar2;
  (param_1->R).Z = (double)(float)((ulonglong)uVar2 >> 0x20);
  (param_1->R).W = (double)fVar1;
  uVar2 = *(undefined8 *)&param_2->field_0xa4;
  *(double *)&param_1->V = (double)*(float *)&param_2->field_0xa0;
  *(double *)&(param_1->V).field_0x8 = (double)(float)uVar2;
  *(double *)&(param_1->V).field_0x10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)&param_2->field_0xb0;
  *(double *)&param_1->W = (double)*(float *)&param_2->field_0xac;
  *(double *)&(param_1->W).field_0x8 = (double)(float)uVar2;
  *(double *)&(param_1->W).field_0x10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  param_1->ObjectState = (param_2->MMiscData).Property.MObjectState;
  return;
}

// BufferPhysicsResultsImp<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c09f0

void __cdecl
Chaos::BufferPhysicsResultsImp<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FDirtyRigidParticleData *param_1,TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EObjectStateType EVar7;
  uint uVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  pTVar9 = TParticles<double,3>::GetX(*(TParticles<double,3> **)param_2,*(int *)&param_2->field_0x8)
  ;
  uVar2 = *(undefined8 *)&pTVar9->field_0x8;
  *(undefined8 *)&param_1->X = *(undefined8 *)pTVar9;
  *(undefined8 *)&(param_1->X).field_0x8 = uVar2;
  *(undefined8 *)&(param_1->X).field_0x10 = *(undefined8 *)&pTVar9->field_0x10;
  uVar3 = *(uint *)&param_2->field_0x8;
  lVar10 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_2;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 4 + lVar10 * 0x10);
  fVar1 = *(float *)(lVar4 + 0xc + lVar10 * 0x10);
  (param_1->R).X = (double)*(float *)(lVar4 + lVar10 * 0x10);
  (param_1->R).Y = (double)(float)uVar2;
  (param_1->R).Z = (double)(float)((ulonglong)uVar2 >> 0x20);
  (param_1->R).W = (double)fVar1;
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,&local_38,
             *(int *)&param_2->field_0x8);
  *(undefined8 *)&param_1->V = local_38._0_8_;
  *(undefined8 *)&(param_1->V).field_0x8 = local_38._8_8_;
  *(undefined8 *)&(param_1->V).field_0x10 = local_38._16_8_;
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,&local_20,
             *(int *)&param_2->field_0x8);
  *(undefined8 *)&param_1->W = local_20._0_8_;
  *(undefined8 *)&(param_1->W).field_0x8 = local_20._8_8_;
  *(undefined8 *)&(param_1->W).field_0x10 = local_20._16_8_;
  EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_2);
  param_1->ObjectState = EVar7;
  return;
}

// BuildFieldSamplePoints<FPerSolverFieldSystem> @ 1440c0b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>
          (FPerSolverFieldSystem *param_1,FPBDRigidsSolver *param_2,FFieldSystemCommand *param_3,
          FFieldExecutionDatas *param_4,EFieldResolutionType *param_5,EFieldFilterType *param_6,
          EFieldObjectType *param_7,EFieldPositionType *param_8)

{
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar2;
  FFieldSystemMetaData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  EFieldPositionType EVar7;
  bool bVar8;
  undefined1 uVar9;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar10;
  TVector<double,3> *pTVar11;
  TVector<double,3> *pTVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  int iVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  EFieldObjectType EVar17;
  uint uVar18;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  EFieldResolutionType EVar22;
  EFieldFilterType EVar23;
  longlong lVar24;
  EFieldPositionType local_res8 [2];
  FFieldExecutionDatas *local_108;
  FFieldSystemCommand *local_100;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double,3> local_a8;
  undefined1 local_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double> local_50;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  
  if ((param_1 == (FPerSolverFieldSystem *)0x0) || (param_2 == (FPBDRigidsSolver *)0x0)) {
    return false;
  }
  bVar8 = FFieldSystemCommand::HasMetaData(param_3,ECommandData_ProcessingResolution);
  pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  EVar22 = Field_Resolution_Minimal;
  if (bVar8) {
    pTVar10 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
              ::FindChecked(&param_3->MetaData,ECommandData_ProcessingResolution);
    EVar22 = *(EFieldResolutionType *)(pTVar10->Ptr + 1);
  }
  EVar17 = Field_Object_Max;
  local_res8[0] = Field_Position_Max;
  EVar23 = Field_Filter_Max;
  bVar8 = FFieldSystemCommand::HasMetaData(param_3,ECommandData_Filter);
  if (bVar8) {
    pTVar10 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
              ::FindChecked(&param_3->MetaData,ECommandData_Filter);
    pFVar3 = pTVar10->Ptr;
    local_res8[0] = *(EFieldPositionType *)(pFVar3 + 2);
    EVar23 = *(EFieldFilterType *)(pFVar3 + 1);
    EVar17 = *(EFieldObjectType *)&pFVar3[1].field_0x4;
  }
  pTVar1 = param_4->ParticleHandles;
  if (EVar23 == Field_Filter_Max) {
    FPerSolverFieldSystem::GetRelevantParticleHandles(pTVar1,param_2,EVar22);
  }
  else {
    FPerSolverFieldSystem::GetFilteredParticleHandles(pTVar1,param_2,EVar23,EVar17);
  }
  EVar7 = local_res8[0];
  *param_5 = EVar22;
  *param_6 = EVar23;
  *param_7 = EVar17;
  *param_8 = local_res8[0];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SamplePositions,param_4->ParticleHandles[0].ArrayNum,No);
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SampleIndices,param_4->ParticleHandles[0].ArrayNum,No);
  this = param_4->ParticleHandles + 1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (this,param_4->ParticleHandles[0].ArrayNum,No);
  iVar15 = param_4->ParticleHandles[0].ArrayNum;
  local_res8[0] = Field_Position_CenterOfMass;
  local_108 = param_4;
  local_100 = param_3;
  local_f8 = this;
  if (EVar7 == Field_Position_CenterOfMass) {
    pTVar19 = pTVar16;
    pTVar21 = pTVar16;
    if (0 < iVar15) {
      do {
        uVar18 = (uint)pTVar19;
        EVar22 = Field_Resolution_Minimal;
        if ((int)uVar18 < iVar15) {
          EVar22 = ~uVar18 >> 0x1f;
        }
        if ((EVar22 == Field_Resolution_Minimal) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar19 = *(TGeometryParticleHandleImp<double,3,1> **)
                   ((longlong)&pTVar21->_padding_ + (longlong)(pTVar1->AllocatorInstance).Data);
        this_00 = pTVar16;
        if (1 < *(byte *)((longlong)&pTVar19->_padding_ + 4)) {
          this_00 = pTVar19;
        }
        if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          uVar20 = (uint)this_00->_padding_;
          lVar24 = (longlong)(int)uVar20;
          lVar4 = this_00->_padding_;
          uVar14 = 0;
          if ((int)uVar20 < *(int *)(lVar4 + 0x568)) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          lVar4 = *(longlong *)(lVar4 + 0x560);
          local_88._0_8_ = (undefined8)*(float *)(lVar4 + lVar24 * 0x10);
          local_88._8_8_ = (undefined8)*(float *)(lVar4 + 4 + lVar24 * 0x10);
          uVar2 = *(undefined8 *)(lVar4 + 8 + lVar24 * 0x10);
          dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
          local_88._24_4_ = SUB84(dVar6,0);
          local_88._16_8_ = (double)(float)uVar2;
          local_88._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
          pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          local_c8._s_0.X = (double)*(undefined8 *)pTVar12;
          local_c8._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x8;
          local_c8._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x10;
          pTVar13 = UE::Math::TQuat<double>::RotateVector
                              ((TQuat<double> *)local_88,&local_50,(TVector<double> *)&local_c8._s_0
                              );
          local_68 = (pTVar13->field0_0x0)._s_0.X;
          dStack_60 = (pTVar13->field0_0x0)._s_0.Y;
          local_58 = (pTVar13->field0_0x0)._s_0.Z;
          local_e0 = dStack_60 + *(double *)&pTVar11->field_0x8;
          local_e8 = local_68 + *(double *)pTVar11;
          local_d8 = local_58 + *(double *)&pTVar11->field_0x10;
          `Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>'::__l9::<lambda_1>::operator()
                    (&local_108,(TVector<double,3> *)&local_e8,this_00,(int *)local_res8);
        }
        iVar15 = param_4->ParticleHandles[0].ArrayNum;
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)(uVar18 + 1);
        pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar21->_padding_;
      } while ((int)(uVar18 + 1) < iVar15);
    }
  }
  else {
    pTVar19 = pTVar16;
    if (0 < iVar15) {
      do {
        uVar20 = (uint)pTVar16;
        uVar18 = 0;
        if ((int)uVar20 < iVar15) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar16 = *(TGeometryParticleHandleImp<double,3,1> **)
                   ((longlong)&pTVar19->_padding_ + (longlong)(pTVar1->AllocatorInstance).Data);
        if (pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar11 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar16->_padding_,(int)pTVar16->_padding_);
          local_a8._0_8_ = *(undefined8 *)pTVar11;
          local_a8._8_8_ = *(undefined8 *)&pTVar11->field_0x8;
          local_a8._16_8_ = *(undefined8 *)&pTVar11->field_0x10;
          `Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>'::__l9::<lambda_1>::operator()
                    (&local_108,&local_a8,pTVar16,(int *)local_res8);
        }
        iVar15 = param_4->ParticleHandles[0].ArrayNum;
        pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)(uVar20 + 1);
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar19->_padding_;
      } while ((int)(uVar20 + 1) < iVar15);
    }
  }
  EVar7 = local_res8[0];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SamplePositions,local_res8[0],No);
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(&param_4->SampleIndices,EVar7,No);
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (param_4->ParticleHandles + 1,EVar7,No);
  return 0 < param_4->ParticleHandles[1].ArrayNum;
}

// ConstructItems<Chaos::FDirtyRigidParticleData,Chaos::FDirtyRigidParticleData,int> @ 1440c0f40

void __cdecl
ConstructItems<Chaos::FDirtyRigidParticleData,Chaos::FDirtyRigidParticleData,int>
          (void *param_1,FDirtyRigidParticleData *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    plVar3 = (longlong *)((longlong)param_1 + 0x10);
    do {
      plVar3[-2] = *(longlong *)((longlong)plVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1))
      ;
      plVar3[-1] = plVar4[-1];
      lVar2 = *plVar4;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = plVar4[2];
      plVar3[1] = plVar4[1];
      plVar3[2] = lVar2;
      plVar3[3] = plVar4[3];
      lVar2 = plVar4[5];
      plVar3[4] = plVar4[4];
      plVar3[5] = lVar2;
      lVar2 = plVar4[7];
      plVar3[6] = plVar4[6];
      plVar3[7] = lVar2;
      lVar2 = plVar4[9];
      plVar3[8] = plVar4[8];
      plVar3[9] = lVar2;
      plVar3[10] = plVar4[10];
      lVar2 = plVar4[0xc];
      plVar3[0xb] = plVar4[0xb];
      plVar3[0xc] = lVar2;
      plVar3[0xd] = plVar4[0xd];
      plVar1 = plVar4 + 0xe;
      plVar4 = plVar4 + 0x12;
      *(char *)(plVar3 + 0xe) = (char)*plVar1;
      plVar3 = plVar3 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CopyDataFromObject<Chaos::FKinematicTarget,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> @ 1440c1000

void __cdecl
Chaos::
CopyDataFromObject<Chaos::FKinematicTarget,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
          (FKinematicTarget *param_1,TKinematicGeometryParticleHandleImp<double,3,1> *param_2)

{
  undefined8 uVar1;
  FKinematicTarget *pFVar2;
  
  pFVar2 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,
                      *(int *)&param_2->field_0x8);
  uVar1 = *(undefined8 *)&(pFVar2->Position).field_0x8;
  *(undefined8 *)&param_1->Position = *(undefined8 *)&pFVar2->Position;
  *(undefined8 *)&(param_1->Position).field_0x8 = uVar1;
  *(undefined8 *)&(param_1->Position).field_0x10 = *(undefined8 *)&(pFVar2->Position).field_0x10;
  pFVar2 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,
                      *(int *)&param_2->field_0x8);
  uVar1 = *(undefined8 *)&(pFVar2->Rotation).field_0x8;
  *(undefined8 *)&param_1->Rotation = *(undefined8 *)&pFVar2->Rotation;
  *(undefined8 *)&(param_1->Rotation).field_0x8 = uVar1;
  pFVar2 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,
                      *(int *)&param_2->field_0x8);
  param_1->Mode = pFVar2->Mode;
  return;
}

// CopyDataFromObject<Chaos::FParticleDynamicMisc,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c1060

void __cdecl
Chaos::
CopyDataFromObject<Chaos::FParticleDynamicMisc,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FParticleDynamicMisc *param_1,TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag(param_2);
  param_1->MLinearEtherDrag = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag(param_2);
  param_1->MAngularEtherDrag = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq(param_2);
  param_1->MMaxLinearSpeedSq = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq(param_2);
  param_1->MMaxAngularSpeedSq = (float)dVar10;
  fVar9 = TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity(param_2);
  param_1->MInitialOverlapDepenetrationVelocity = fVar9;
  fVar9 = TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier(param_2);
  param_1->MSleepThresholdMultiplier = fVar9;
  EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_2);
  param_1->MObjectState = EVar5;
  iVar7 = TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup(param_2);
  param_1->MCollisionGroup = iVar7;
  uVar2 = *(uint *)&param_2->field_0x8;
  lVar3 = *(longlong *)param_2;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x4d8)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->MSleepType = *(ESleepType *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x4d0));
  uVar2 = *(uint *)&param_2->field_0x8;
  lVar3 = *(longlong *)param_2;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->MCollisionConstraintFlag =
       *(uint *)(*(longlong *)(lVar3 + 0x2d8) + 4 + (longlong)(int)uVar2 * 0x10);
  uVar2 = *(uint *)&param_2->field_0x8;
  lVar3 = *(longlong *)param_2;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (param_1->MControlFlags).field0_0x0 =
       *(FRigidParticleControlFlags_u_0 *)
        (*(longlong *)(lVar3 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10);
  uVar2 = *(uint *)&param_2->field_0x8;
  lVar3 = *(longlong *)param_2;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x520)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x518);
  uVar1 = *(undefined2 *)((longlong)(int)uVar2 * 3 + lVar3);
  (param_1->MIterationSettings).NumPositionIterations = (char)uVar1;
  (param_1->MIterationSettings).NumVelocityIterations = (char)((ushort)uVar1 >> 8);
  (param_1->MIterationSettings).NumProjectionIterations =
       *(schar *)((longlong)(int)uVar2 * 3 + 2 + lVar3);
  bVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_2);
  param_1->bDisabled = bVar6;
  return;
}

// CopyDataFromObject<Chaos::FParticleDynamics,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c1070

void __cdecl
Chaos::CopyDataFromObject<Chaos::FParticleDynamics,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FParticleDynamics *param_1,TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar3 = *(uint *)&param_2->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_2;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x328)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 800);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&param_1->MAcceleration = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(param_1->MAcceleration).field_0x4 = (float)dVar1;
  *(float *)&(param_1->MAcceleration).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_2->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_2;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x340)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x338);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&param_1->MAngularAcceleration = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(param_1->MAngularAcceleration).field_0x4 = (float)dVar1;
  *(float *)&(param_1->MAngularAcceleration).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_2->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_2;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x358)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x350);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&param_1->MLinearImpulseVelocity = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(param_1->MLinearImpulseVelocity).field_0x4 = (float)dVar1;
  *(float *)&(param_1->MLinearImpulseVelocity).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_2->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_2;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x370)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x368);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&param_1->MAngularImpulseVelocity = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(param_1->MAngularImpulseVelocity).field_0x4 = (float)dVar1;
  *(float *)&(param_1->MAngularImpulseVelocity).field_0x8 = (float)dVar2;
  return;
}

// CopyDataFromObject<Chaos::FParticleMassProps,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c1080

void __cdecl
Chaos::CopyDataFromObject<Chaos::FParticleMassProps,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FParticleMassProps *param_1,TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  TVector<double,3> *pTVar3;
  TRotation<double,3> *pTVar4;
  TVector<float,3> *pTVar5;
  
  pTVar3 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(param_2);
  uVar2 = *(undefined8 *)&pTVar3->field_0x8;
  *(undefined8 *)&param_1->MCenterOfMass = *(undefined8 *)pTVar3;
  *(undefined8 *)&(param_1->MCenterOfMass).field_0x8 = uVar2;
  *(undefined8 *)&(param_1->MCenterOfMass).field_0x10 = *(undefined8 *)&pTVar3->field_0x10;
  pTVar4 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(param_2);
  uVar2 = *(undefined8 *)&pTVar4->field_0x8;
  *(undefined8 *)&param_1->MRotationOfMass = *(undefined8 *)pTVar4;
  *(undefined8 *)&(param_1->MRotationOfMass).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&pTVar4->field_0x18;
  *(undefined8 *)&(param_1->MRotationOfMass).field_0x10 = *(undefined8 *)&pTVar4->field_0x10;
  *(undefined8 *)&(param_1->MRotationOfMass).field_0x18 = uVar2;
  pTVar5 = TPBDRigidParticleHandleImp<double,3,1>::I(param_2);
  *(undefined8 *)&param_1->MI = *(undefined8 *)pTVar5;
  *(undefined4 *)&(param_1->MI).field_0x8 = *(undefined4 *)&pTVar5->field_0x8;
  pTVar5 = TPBDRigidParticleHandleImp<double,3,1>::InvI(param_2);
  *(undefined8 *)&param_1->MInvI = *(undefined8 *)pTVar5;
  *(undefined4 *)&(param_1->MInvI).field_0x8 = *(undefined4 *)&pTVar5->field_0x8;
  dVar1 = TPBDRigidParticleHandleImp<double,3,1>::M(param_2);
  param_1->MM = dVar1;
  dVar1 = TPBDRigidParticleHandleImp<double,3,1>::InvM(param_2);
  param_1->MInvM = dVar1;
  return;
}

// CopyDataFromObject<Chaos::FParticleNonFrequentData,Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c1120

void __cdecl
Chaos::
CopyDataFromObject<Chaos::FParticleNonFrequentData,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FParticleNonFrequentData *param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  FImplicitObject *pFVar4;
  FImplicitObject *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FString *pFVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  EResimType EVar11;
  FUniqueIdx *pFVar12;
  FSpatialAccelerationIdx *pFVar13;
  TSharedPtr<FString,1> *pTVar14;
  uint uVar15;
  
  uVar2 = (uint)param_2->_padding_;
  lVar3 = param_2->_padding_;
  uVar15 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x68)) {
    uVar15 = ~uVar2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = *(FImplicitObject **)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar2 * 8);
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  pFVar5 = (param_1->MGeometry).Reference;
  if (pFVar5 != pFVar4) {
    (param_1->MGeometry).Reference = pFVar4;
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar5 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar5->_padding_;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if (pFVar4 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar4->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar12 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  (param_1->MUniqueIdx).Idx = pFVar12->Idx;
  pFVar13 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  param_1->MSpatialIdx = *pFVar13;
  EVar11 = TGeometryParticleHandleImp<double,3,1>::ResimType(param_2);
  param_1->MResimType = EVar11;
  uVar2 = (uint)param_2->_padding_;
  lVar3 = param_2->_padding_;
  uVar15 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x220)) {
    uVar15 = ~uVar2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  param_1->MEnabledDuringResim = *(bool *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x218));
  pTVar14 = TGeometryParticlesImp<double,3,0>::DebugName
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  pTVar6 = (pTVar14->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar14->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (param_1->MDebugName).SharedReferenceCount.ReferenceController;
  (param_1->MDebugName).Object = pFVar7;
  (param_1->MDebugName).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// CopyDataFromObject<Chaos::FParticlePositionRotation,Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c1130

void __cdecl
Chaos::
CopyDataFromObject<Chaos::FParticlePositionRotation,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FParticlePositionRotation *param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  
  pTVar8 = TParticles<double,3>::GetX
                     ((TParticles<double,3> *)param_2->_padding_,(int)param_2->_padding_);
  uVar5 = *(undefined8 *)&pTVar8->field_0x8;
  *(undefined8 *)&param_1->MX = *(undefined8 *)pTVar8;
  *(undefined8 *)&(param_1->MX).field_0x8 = uVar5;
  *(undefined8 *)&(param_1->MX).field_0x10 = *(undefined8 *)&pTVar8->field_0x10;
  uVar2 = (uint)param_2->_padding_;
  lVar3 = param_2->_padding_;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  uVar5 = puVar1[1];
  *(undefined8 *)&param_1->MR = *puVar1;
  *(undefined8 *)&(param_1->MR).field_0x8 = uVar5;
  return;
}

// CopyDataFromObject<Chaos::FParticleVelocities,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> @ 1440c1140

void __cdecl
Chaos::
CopyDataFromObject<Chaos::FParticleVelocities,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
          (FParticleVelocities *param_1,TKinematicGeometryParticleHandleImp<double,3,1> *param_2)

{
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,(TVector<double,3> *)&dStack_28
             ,*(int *)&param_2->field_0x8);
  *(float *)&param_1->MV = (float)dStack_28;
  *(float *)&(param_1->MV).field_0x4 = (float)dStack_20;
  *(float *)&(param_1->MV).field_0x8 = (float)dStack_18;
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_2,(TVector<double,3> *)&dStack_28
             ,*(int *)&param_2->field_0x8);
  *(float *)&param_1->MW = (float)dStack_28;
  *(float *)&(param_1->MW).field_0x4 = (float)dStack_20;
  *(float *)&(param_1->MW).field_0x8 = (float)dStack_18;
  return;
}

// DestructItems<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,int> @ 1440c1920

void __cdecl
DestructItems<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,int>
          (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int> @ 1440c1960

void __cdecl
DestructItems<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int>
          (TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> *param_1,
          int param_2)

{
  FAnalyticImplicitGroup *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FAnalyticImplicitGroup *)0x0) {
      FAnalyticImplicitGroup::~FAnalyticImplicitGroup(this);
      operator_delete(this,0x140);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetMaterialData'::__l2::<lambda_1>_> @ 1440c1e50

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetMaterialData_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  IPhysicsProxyBase *pIVar4;
  FMaterialData *this_00;
  FMaterialHandle local_res8 [2];
  
  pTVar3 = *(TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> **)param_1;
  if (this->Type == 0) {
    pIVar4 = (IPhysicsProxyBase *)this[1]._padding_;
    TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
               &this[1].WorldSpaceShapeBounds.MMax.field_0x8,pTVar3);
    TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(this + 2),
               (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this[2].Geometry,
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 2));
    TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
               &this[2].WorldSpaceShapeBounds.MMin.field_0x8,pTVar3 + 3);
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 2;
    if (((uVar2 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar4->Solver,pIVar4,this->ShapeIdx);
    }
    return;
  }
  if ((((pTVar3->ArrayNum < 2) && (pTVar3[1].ArrayNum == 0)) && (pTVar3[2].ArrayNum == 0)) &&
     (pTVar3[3].ArrayNum == 0)) {
    if (0 < pTVar3->ArrayNum) {
      local_res8[0].InnerHandle =
           *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(pTVar3->AllocatorInstance).Data;
      FShapeInstance::SetMaterialImpl((FShapeInstance *)this,local_res8);
      return;
    }
    local_res8[0].InnerHandle = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
    FShapeInstance::SetMaterialImpl((FShapeInstance *)this,local_res8);
    return;
  }
  this_00 = FShapeInstance::GetMaterialDataImpl((FShapeInstance *)this);
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=(&this_00->Materials,pTVar3);
  TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->MaterialMasks,
             (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar3 + 1));
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->MaterialMaskMaps,
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar3 + 2));
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->MaterialMaskMapMaterials,pTVar3 + 3);
  return;
}

// FixConnectorTransformsForRoot<Chaos::TVector<Chaos::TRigidTransform<double,3>,2>_> @ 1440c2790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FixConnectorTransformsForRoot<Chaos::TVector<Chaos::TRigidTransform<double,3>,2>_>
          (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_2,
          TVector<Chaos::TRigidTransform<double,3>,2> *param_3)

{
  TGeometryParticleHandleImp<double,3,1> **ppTVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_168 [32];
  TTransform<double> local_148;
  TRigidTransform<double,3> local_e8;
  TRigidTransform<double,3> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (((param_1->V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (param_2->V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
     (param_2->V[0] != param_1->V[0])) {
    ppTVar1 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[](param_1,0);
    pTVar2 = (TTransform<double> *)
             TGeometryParticleHandleImp<double,3,1>::GetTransformXR(*ppTVar1,&local_e8);
    ppTVar1 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[](param_2,0);
    pTVar3 = (TTransform<double> *)
             TGeometryParticleHandleImp<double,3,1>::GetTransformXR(*ppTVar1,&local_88);
    UE::Math::TTransform<double>::GetRelativeTransform(pTVar2,&local_148,pTVar3);
    UE::Math::TTransform<double>::Multiply
              ((TTransform<double> *)param_3,(TTransform<double> *)param_3,&local_148);
  }
  if (((param_1->V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (param_2->V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
     (param_2->V[1] != param_1->V[1])) {
    ppTVar1 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[](param_1,1);
    pTVar2 = (TTransform<double> *)
             TGeometryParticleHandleImp<double,3,1>::GetTransformXR(*ppTVar1,&local_e8);
    ppTVar1 = TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[](param_2,1);
    pTVar3 = (TTransform<double> *)
             TGeometryParticleHandleImp<double,3,1>::GetTransformXR(*ppTVar1,&local_88);
    UE::Math::TTransform<double>::GetRelativeTransform(pTVar2,&local_148,pTVar3);
    UE::Math::TTransform<double>::Multiply
              ((TTransform<double> *)(param_3->V + 1),(TTransform<double> *)(param_3->V + 1),
               &local_148);
  }
  return;
}

// MakeSerializable<Chaos::FChaosPhysicsMaterial> @ 1440c3930

TSerializablePtr<Chaos::FChaosPhysicsMaterial> __cdecl
Chaos::MakeSerializable<Chaos::FChaosPhysicsMaterial>
          (TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
           *param_1)

{
  undefined8 *in_RDX;
  
  param_1->Ptr = (FChaosPhysicsMaterial *)*in_RDX;
  return (TSerializablePtr<Chaos::FChaosPhysicsMaterial>)(FChaosPhysicsMaterial *)param_1;
}

// ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,`Chaos::FClusterUnionPhysicsProxy::MergeGeometry_External'::__l2::<lambda_1>_> @ 1440c3940

void __cdecl
Chaos::
ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,_Chaos::FClusterUnionPhysicsProxy::MergeGeometry_External_::__l2::<lambda_1>_>
          (TPBDRigidParticle<double,3> *param_1,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,int param_4,<lambda_1> *param_5)

{
  TPBDRigidParticle<double,3> *pTVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  FImplicitObject *pFVar9;
  TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *pTVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  if (param_1 == (TPBDRigidParticle<double,3> *)0x0) {
    return;
  }
  if (param_2->ArrayNum == 0) {
    return;
  }
  pFVar9 = *(FImplicitObject **)&param_1->field_0x50;
  if (pFVar9 == (FImplicitObject *)0x0) {
LAB_1440c399f:
    iVar12 = 0;
  }
  else {
    uVar3 = FImplicitObject::GetType(pFVar9);
    if ((uVar3 != '\x05') && (uVar3 != '\x0f')) {
      pFVar9 = (FImplicitObject *)0x0;
    }
    if (pFVar9 == (FImplicitObject *)0x0) goto LAB_1440c399f;
    iVar12 = (int)pFVar9[1]._padding_;
  }
  TGeometryParticle<double,3>::MergeGeometry
            ((TGeometryParticle<double,3> *)(param_5->__this->Particle_External).Ptr,
             &param_5->ImplicitGeometries);
  if ((*(longlong *)&param_1->field_0x50 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusterParticle->GetGeometry() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x16a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = *(FImplicitObject **)&param_1->field_0x50;
  uVar3 = FImplicitObject::GetType(pFVar9);
  if ((uVar3 == '\x05') || (uVar3 == '\x0f')) {
    if (pFVar9 != (FImplicitObject *)0x0) goto LAB_1440c3a2d;
  }
  else {
    pFVar9 = (FImplicitObject *)0x0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ImplicitUnion != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                     ,0x16c,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1440c3a2d:
  iVar8 = (int)pFVar9[1]._padding_;
  if ((*(int *)&param_1->field_0x90 != iVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShapeArray.Num() == NewNumChildShapes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x170,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->ArrayNum != iVar8 - iVar12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles.Num() == NewNumChildShapes - OldNumChildShapes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x171,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < iVar8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TPBDRigidParticle<double,3> **)((param_2->AllocatorInstance).Data + lVar13);
      if (pTVar1 != (TPBDRigidParticle<double,3> *)0x0) {
        if ((*(int *)&pTVar1->field_0x90 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
                  &pTVar1->field_0x80;
        if (*(TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> **)
             &pTVar1->field_0x88 !=
            (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)0x0) {
          pTVar10 = *(TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> **)
                     &pTVar1->field_0x88;
        }
        if (pTVar10->Ptr != (FPerShapeData *)0x0) {
          uVar5 = uVar11 + iVar12;
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&param_1->field_0x90) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          puVar7 = &param_1->field_0x80;
          if (*(undefined1 **)&param_1->field_0x88 != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)&param_1->field_0x88;
          }
          if (*(longlong *)(puVar7 + (longlong)iVar12 * 8 + lVar13) != 0) {
            TransferClusterUnionShapeData<Chaos::TPBDRigidParticle<double,3>_>
                      ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
                       (puVar7 + (longlong)(int)uVar5 * 8),pTVar1,pTVar10,param_3,param_4);
          }
        }
      }
      iVar8 = param_2->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,`Chaos::FClusterUnionPhysicsProxy::SetGeometry_External'::__l2::<lambda_1>_> @ 1440c3c40

void __cdecl
Chaos::
ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,_Chaos::FClusterUnionPhysicsProxy::SetGeometry_External_::__l2::<lambda_1>_>
          (TPBDRigidParticle<double,3> *param_1,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,int param_4,<lambda_1> *param_5)

{
  TPBDRigidParticle<double,3> *pTVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  FImplicitObject *pFVar9;
  TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *pTVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  if (param_1 == (TPBDRigidParticle<double,3> *)0x0) {
    return;
  }
  if (param_2->ArrayNum == 0) {
    return;
  }
  pFVar9 = *(FImplicitObject **)&param_1->field_0x50;
  if (pFVar9 == (FImplicitObject *)0x0) {
LAB_1440c3c9f:
    iVar12 = 0;
  }
  else {
    uVar3 = FImplicitObject::GetType(pFVar9);
    if ((uVar3 != '\x05') && (uVar3 != '\x0f')) {
      pFVar9 = (FImplicitObject *)0x0;
    }
    if (pFVar9 == (FImplicitObject *)0x0) goto LAB_1440c3c9f;
    iVar12 = (int)pFVar9[1]._padding_;
  }
  `Chaos::FClusterUnionPhysicsProxy::SetGeometry_External'::__l2::<lambda_1>::operator()(param_5);
  if ((*(longlong *)&param_1->field_0x50 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusterParticle->GetGeometry() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x16a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = *(FImplicitObject **)&param_1->field_0x50;
  uVar3 = FImplicitObject::GetType(pFVar9);
  if ((uVar3 == '\x05') || (uVar3 == '\x0f')) {
    if (pFVar9 != (FImplicitObject *)0x0) goto LAB_1440c3d1f;
  }
  else {
    pFVar9 = (FImplicitObject *)0x0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ImplicitUnion != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                     ,0x16c,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1440c3d1f:
  iVar8 = (int)pFVar9[1]._padding_;
  if ((*(int *)&param_1->field_0x90 != iVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShapeArray.Num() == NewNumChildShapes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x170,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->ArrayNum != iVar8 - iVar12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles.Num() == NewNumChildShapes - OldNumChildShapes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                         ,0x171,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < iVar8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar1 = *(TPBDRigidParticle<double,3> **)((param_2->AllocatorInstance).Data + lVar13);
      if (pTVar1 != (TPBDRigidParticle<double,3> *)0x0) {
        if ((*(int *)&pTVar1->field_0x90 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
                  &pTVar1->field_0x80;
        if (*(TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> **)
             &pTVar1->field_0x88 !=
            (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)0x0) {
          pTVar10 = *(TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> **)
                     &pTVar1->field_0x88;
        }
        if (pTVar10->Ptr != (FPerShapeData *)0x0) {
          uVar5 = uVar11 + iVar12;
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&param_1->field_0x90) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          puVar7 = &param_1->field_0x80;
          if (*(undefined1 **)&param_1->field_0x88 != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)&param_1->field_0x88;
          }
          if (*(longlong *)(puVar7 + (longlong)iVar12 * 8 + lVar13) != 0) {
            TransferClusterUnionShapeData<Chaos::TPBDRigidParticle<double,3>_>
                      ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
                       (puVar7 + (longlong)(int)uVar5 * 8),pTVar1,pTVar10,param_3,param_4);
          }
        }
      }
      iVar8 = param_2->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// MoveArrayItemsDown<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_> @ 1440c3f40

void __cdecl
Chaos::MoveArrayItemsDown<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_>
          (TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  if ((param_4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownShift >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0xe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 - param_4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeginIndex - DownShift >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0xf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3 < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex >= BeginIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0x10,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->ArrayNum < param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex <= Items.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0x11,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((0 < param_4) && (param_2 < param_3)) {
    lVar7 = uVar6 * 8;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar1 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar7);
      uVar4 = 0;
      if ((int)(uVar5 - param_4) < param_1->ArrayNum) {
        uVar4 = ~(uVar5 - param_4) >> 0x1f;
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
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined8 *)((param_1->AllocatorInstance).Data + lVar7 + (longlong)param_4 * -8) = uVar1;
      lVar7 = lVar7 + 8;
    } while ((int)(uVar5 + 1) < param_3);
  }
  return;
}

// PushToPhysicsStateImp<1> @ 1440c4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::PushToPhysicsStateImp<1>
          (FDirtyPropertiesManager *param_1,TGeometryParticleHandleImp<double,3,1> *param_2,
          int param_3,FDirtyProxy *param_4,FShapeDirtyData *param_5,FPBDRigidsSolver *param_6,
          bool param_7,double param_8)

{
  FDirtyChaosProperties *this;
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  FUniqueIdx FVar6;
  int iVar7;
  FPBDRigidsEvolutionGBF *pFVar8;
  longlong lVar9;
  FShapeInstance *this_00;
  code *pcVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  bool bVar14;
  FSpatialAccelerationIdx FVar15;
  undefined2 uVar16;
  undefined7 uVar17;
  FDirtyProxy *pFVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  FParticleNonFrequentData *pFVar24;
  FParticlePositionRotation *pFVar25;
  FParticleDynamicMisc *pFVar26;
  FParticleVelocities *pFVar27;
  FKinematicTarget *pFVar28;
  TVector<double,3> *pTVar29;
  ClusterId *pCVar30;
  FRigidClusteredFlags_u_0 *pFVar31;
  IPhysicsProxyBase *pIVar32;
  IPhysicsProxyBase *pIVar33;
  bool *pbVar34;
  FUniqueIdx *pFVar35;
  FPendingSpatialData *pFVar36;
  TGeometryParticle<double,3> **ppTVar37;
  FSpatialAccelerationIdx *pFVar38;
  FPendingSpatialData *pFVar39;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar40;
  longlong lVar41;
  FMaterialData *this_01;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar42;
  uint uVar43;
  TGeometryParticleHandleImp<double,3,1> *pTVar44;
  ulonglong uVar45;
  TGeometryParticleHandleImp<double,3,1> *pTVar46;
  longlong lVar47;
  FScriptContainerElement *pFVar48;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *pTVar49;
  longlong lVar50;
  undefined1 auStackY_2a8 [32];
  bool local_276;
  undefined1 local_275;
  undefined1 local_274 [8];
  FMaterialHandle local_26c;
  uint local_268;
  FShapeDirtyData *local_260;
  FScriptContainerElement *local_258;
  FDirtyProxy *local_250;
  FParticleNonFrequentData *local_248;
  FScriptContainerElement *local_240;
  TGeometryParticle<double,3> *local_238;
  TGeometryParticleHandleImp<double,3,1> *pTStack_230;
  int local_228;
  FCollisionFilterData FStack_224;
  FCollisionFilterData FStack_214;
  uint local_204;
  TGeometryParticle<double,3> *local_200;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1f8;
  int local_1f0;
  FCollisionFilterData FStack_1ec;
  FCollisionFilterData FStack_1dc;
  uint local_1cc;
  TGeometryParticle<double,3> *local_1c8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1c0;
  int local_1b8;
  FCollisionFilterData FStack_1b4;
  FCollisionFilterData FStack_1a4;
  uint local_194;
  TVector<float,3> local_190;
  FDirtyPropertiesManager *local_180;
  FPBDRigidsEvolutionGBF *local_178;
  undefined1 local_170 [16];
  double local_160;
  TVector<double,3> local_158;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this = &param_4->PropertyData;
  local_260 = param_5;
  pFVar8 = (param_6->MEvolution).Ptr;
  local_250 = param_4;
  local_180 = param_1;
  local_178 = pFVar8;
  pFVar24 = FDirtyChaosProperties::FindNonFrequentData(this,param_1,param_3);
  local_248 = pFVar24;
  if (param_7) {
    FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)pFVar8,param_2);
  }
  if (((this->Flags).Bits & 1) == 0) {
    pFVar25 = (FParticlePositionRotation *)0x0;
    FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
  }
  else {
    pFVar25 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_3);
    pFVar26 = FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
    if (pFVar25 != (FParticlePositionRotation *)0x0) {
      bVar20 = true;
      if (pFVar26 != (FParticleDynamicMisc *)0x0) {
        bVar20 = true;
        if (pFVar26->MObjectState == Sleeping) {
          bVar20 = false;
        }
      }
      local_138 = (double)*(float *)&pFVar25->MR;
      local_130 = (double)*(float *)&(pFVar25->MR).field_0x4;
      uVar5 = *(undefined8 *)&(pFVar25->MR).field_0x8;
      dVar13 = (double)(float)((ulonglong)uVar5 >> 0x20);
      local_128._8_4_ = SUB84(dVar13,0);
      local_128._0_8_ = (double)(float)uVar5;
      local_128._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      FPBDRigidsEvolutionGBF::SetParticleTransform
                (pFVar8,param_2,&pFVar25->MX,(TRotation<double,3> *)&local_138,true,bVar20);
    }
  }
  if (pFVar24 != (FParticleNonFrequentData *)0x0) {
    Private::FPBDIslandManager::RemoveParticleConstraints
              ((FPBDIslandManager *)&pFVar8->_padding_,param_2);
    (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,param_2);
    TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData(param_2,pFVar24);
  }
  if (((this->Flags).Bits & 2) == 0) {
    pFVar27 = (FParticleVelocities *)0x0;
  }
  else {
    pFVar27 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_3);
    if (pFVar27 != (FParticleVelocities *)0x0) {
      local_190._0_4_ = *(undefined4 *)&pFVar27->MW;
      local_190._4_4_ = *(undefined4 *)&(pFVar27->MW).field_0x4;
      local_190._8_4_ = *(undefined4 *)&(pFVar27->MW).field_0x8;
      dVar13 = (double)(float)((ulonglong)*(undefined8 *)&pFVar27->MV >> 0x20);
      local_170._8_4_ = SUB84(dVar13,0);
      local_170._0_8_ = (double)(float)*(undefined8 *)&pFVar27->MV;
      local_170._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_160 = (double)*(float *)&(pFVar27->MV).field_0x8;
      FPBDRigidsEvolutionGBF::SetParticleVelocities
                (pFVar8,param_2,(TVector<double,3> *)local_170,&local_190);
    }
  }
  pFVar28 = FDirtyChaosProperties::FindKinematicTarget(this,param_1,param_3);
  if (pFVar28 != (FKinematicTarget *)0x0) {
    FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(pFVar8,param_2,pFVar28);
  }
  if (((pFVar25 == (FParticlePositionRotation *)0x0) &&
      (local_248 == (FParticleNonFrequentData *)0x0)) && (pFVar27 == (FParticleVelocities *)0x0)) {
    if (pFVar28 == (FKinematicTarget *)0x0) goto LAB_1440c4673;
LAB_1440c435c:
    if (pFVar28->Mode != Position) goto LAB_1440c4391;
    fVar3 = *(float *)&pFVar28->Rotation;
    fVar4 = *(float *)&(pFVar28->Rotation).field_0x4;
    local_e8 = *(undefined8 *)&(pFVar28->Position).field_0x10;
    local_f8 = *(undefined8 *)&pFVar28->Position;
    uStack_f0 = *(undefined8 *)&(pFVar28->Position).field_0x8;
    uVar5 = *(undefined8 *)&(pFVar28->Rotation).field_0x8;
    fVar11 = (float)uVar5;
    fVar12 = (float)((ulonglong)uVar5 >> 0x20);
  }
  else {
    if (pFVar28 != (FKinematicTarget *)0x0) goto LAB_1440c435c;
LAB_1440c4391:
    uVar43 = (uint)param_2->_padding_;
    lVar50 = (longlong)(int)uVar43;
    lVar47 = param_2->_padding_;
    uVar22 = 0;
    if ((int)uVar43 < *(int *)(lVar47 + 0x50)) {
      uVar22 = ~uVar43 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar47 = *(longlong *)(lVar47 + 0x48);
    fVar3 = *(float *)(lVar47 + lVar50 * 0x10);
    fVar4 = *(float *)(lVar47 + 4 + lVar50 * 0x10);
    uVar5 = *(undefined8 *)(lVar47 + 8 + lVar50 * 0x10);
    fVar11 = (float)uVar5;
    fVar12 = (float)((ulonglong)uVar5 >> 0x20);
    pTVar29 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_2->_padding_,(int)param_2->_padding_);
    local_e8 = *(undefined8 *)&pTVar29->field_0x10;
    local_f8 = *(undefined8 *)pTVar29;
    uStack_f0 = *(undefined8 *)&pTVar29->field_0x8;
  }
  pTVar46 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_158._16_8_ = 0;
  local_d8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_d0 = _UNK_150689688;
  local_c8 = ___xmm_00000000000000003ff0000000000000;
  uStack_c0 = _UNK_150689518;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_118._8_4_ = SUB84((double)fVar4,0);
  local_118._0_8_ = (double)fVar3;
  local_118._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_108._8_4_ = SUB84((double)fVar12,0);
  local_108._0_8_ = (double)fVar11;
  local_108._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  uStack_e0 = 0;
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,(int)param_2->_padding_,
             (TRigidTransform<double,3> *)local_118,&local_158);
  pTVar44 = pTVar46;
  if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar44 = param_2;
  }
  if ((pTVar44 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar20 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar44), bVar20)) {
    pTVar44 = pTVar46;
    if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar44 = param_2;
    }
    if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c4673;
    pCVar30 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar44->_padding_,
                         (int)pTVar44->_padding_);
    pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)pCVar30->Id;
    if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c4673;
    if (2 < *(byte *)((longlong)&pTVar44->_padding_ + 4)) {
      pTVar46 = pTVar44;
    }
    if (pTVar46 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (bVar20) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      goto LAB_1440c4673;
    }
    pFVar31 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar46->_padding_,
                          (int)pTVar46->_padding_)->field0_0x0;
    if ((pFVar31->Bits & 1) == 0) goto LAB_1440c4673;
    pIVar32 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar46);
    pIVar33 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
    if (pIVar32 != pIVar33) goto LAB_1440c4673;
  }
  pbVar34 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  if ((*pbVar34 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FVar6.Idx = pFVar35->Idx;
    pFVar36 = FPendingSpatialInternalDataQueue::Add
                        ((FPendingSpatialInternalDataQueue *)&pFVar8->_padding_,0,FVar6,Add);
    pFVar36->Operation = Update;
    ppTVar37 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                          (int)param_2->_padding_);
    local_238 = *ppTVar37;
    pTStack_230 = param_2;
    pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FStack_224.Word2 = 0;
    FStack_224.Word3 = 0;
    FStack_224.Word0 = 0;
    FStack_224.Word1 = 0;
    FStack_214.Word2 = 0;
    FStack_214.Word3 = 0;
    local_228 = pFVar35->Idx;
    FStack_214.Word0 = 0;
    FStack_214.Word1 = 0;
    local_204 = local_204 & 0xffffff00;
    if ((local_228 == -1) &&
       (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_224);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_214);
    local_204 = CONCAT31(local_204._1_3_,1);
    (pFVar36->AccelerationHandle).ExternalGeometryParticle = local_238;
    (pFVar36->AccelerationHandle).GeometryParticleHandle = pTStack_230;
    (pFVar36->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_228;
    (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_224.Word0;
    (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_224.Word1;
    (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_224.Word2;
    *(ulonglong *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_214.Word0,FStack_224.Word3);
    (pFVar36->AccelerationHandle).UnionSimFilterData.Word1 = FStack_214.Word1;
    (pFVar36->AccelerationHandle).UnionSimFilterData.Word2 = FStack_214.Word2;
    *(ulonglong *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_204,FStack_214.Word3);
    pFVar38 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    pFVar36->SpatialIdx = *pFVar38;
    pFVar39 = FPendingSpatialDataQueue::FindOrAdd
                        ((FPendingSpatialDataQueue *)&pFVar8->_padding_,FVar6,Add);
    pTVar44 = (pFVar36->AccelerationHandle).GeometryParticleHandle;
    (pFVar39->AccelerationHandle).ExternalGeometryParticle =
         (pFVar36->AccelerationHandle).ExternalGeometryParticle;
    (pFVar39->AccelerationHandle).GeometryParticleHandle = pTVar44;
    uVar43 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar22 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar23 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar39->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar36->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar39->AccelerationHandle).UnionQueryFilterData.Word0 = uVar43;
    (pFVar39->AccelerationHandle).UnionQueryFilterData.Word1 = uVar22;
    (pFVar39->AccelerationHandle).UnionQueryFilterData.Word2 = uVar23;
    uVar43 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word1;
    uVar22 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar39->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar39->AccelerationHandle).UnionSimFilterData.Word1 = uVar43;
    (pFVar39->AccelerationHandle).UnionSimFilterData.Word2 = uVar22;
    FVar15 = pFVar36->SpatialIdx;
    uVar16 = *(undefined2 *)&pFVar36->field_0x3a;
    iVar7 = pFVar36->SyncTimestamp;
    *(undefined8 *)&(pFVar39->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar39->SpatialIdx = FVar15;
    *(undefined2 *)&pFVar39->field_0x3a = uVar16;
    pFVar39->SyncTimestamp = iVar7;
    uVar17 = *(undefined7 *)&pFVar36->field_0x41;
    pFVar39->Operation = pFVar36->Operation;
    *(undefined7 *)&pFVar39->field_0x41 = uVar17;
  }
LAB_1440c4673:
  local_268 = (local_250->ShapeDataIndices).ArrayNum;
  uVar45 = (ulonglong)(int)local_268;
  bVar14 = false;
  local_276 = false;
  pFVar48 = (local_250->ShapeDataIndices).AllocatorInstance.Data;
  bVar20 = false;
  local_240 = pFVar48 + uVar45 * 4;
  while( true ) {
    pFVar19 = local_240;
    pFVar18 = local_250;
    local_258 = pFVar48;
    if ((local_250->ShapeDataIndices).ArrayNum != (int)uVar45) {
      local_275 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_275);
    }
    pFVar8 = local_178;
    if (pFVar48 == pFVar19) break;
    uVar43 = *(uint *)pFVar48;
    lVar47 = (longlong)(int)uVar43;
    uVar22 = local_260[lVar47].ShapeIdx;
    lVar50 = (longlong)(int)uVar22;
    if ((local_260[lVar47].Flags.Bits & 1) != 0) {
      uVar23 = 0;
      if ((int)uVar43 < (param_1->CollisionDataShapePool).Elements.ArrayNum) {
        uVar23 = ~uVar43 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar48 = (param_1->CollisionDataShapePool).Elements.AllocatorInstance.Data + lVar47 * 0x30;
      if (pFVar48 != (FScriptContainerElement *)0x0) {
        bVar14 = true;
        FVar40 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar23 = 0;
        if ((int)uVar22 < *(int *)((longlong)FVar40 + 0x10)) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar5 = *(undefined8 *)(pFVar48 + 8);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar40 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar40 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar40 + 8);
        }
        lVar9 = *(longlong *)((longlong)FVar40 + lVar50 * 8);
        if ((*(uint *)(lVar9 + 8) & 3) == 0) {
          pIVar32 = *(IPhysicsProxyBase **)(lVar9 + 0x48);
          *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)pFVar48;
          *(undefined8 *)(lVar9 + 0x58) = uVar5;
          uVar5 = *(undefined8 *)(pFVar48 + 0x18);
          *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(pFVar48 + 0x10);
          *(undefined8 *)(lVar9 + 0x68) = uVar5;
          uVar5 = *(undefined8 *)(pFVar48 + 0x28);
          *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(pFVar48 + 0x20);
          *(undefined8 *)(lVar9 + 0x78) = uVar5;
          uVar23 = *(uint *)(lVar9 + 0xc);
          *(uint *)(lVar9 + 0xc) = uVar23 | 1;
          if (((uVar23 == 0) && (pIVar32 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar32->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape
                      (pIVar32->Solver,pIVar32,*(uint *)(lVar9 + 8) >> 3);
          }
        }
        else {
          *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)pFVar48;
          *(undefined8 *)(lVar9 + 0x50) = uVar5;
          uVar5 = *(undefined8 *)(pFVar48 + 0x18);
          *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(pFVar48 + 0x10);
          *(undefined8 *)(lVar9 + 0x60) = uVar5;
          uVar5 = *(undefined8 *)(pFVar48 + 0x28);
          *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(pFVar48 + 0x20);
          *(undefined8 *)(lVar9 + 0x70) = uVar5;
        }
        FVar40 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar23 = 0;
        if ((int)uVar22 < *(int *)((longlong)FVar40 + 0x10)) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar40 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar40 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar40 + 8);
        }
        lVar9 = *(longlong *)((longlong)FVar40 + lVar50 * 8);
        lVar41 = 0x79;
        if ((*(byte *)(lVar9 + 8) & 3) != 0) {
          lVar41 = 0x71;
        }
        local_276 = (bool)(local_276 | (*(byte *)(lVar41 + lVar9) & 3) != 0);
        param_1 = local_180;
      }
    }
    if ((local_260[lVar47].Flags.Bits & 2) != 0) {
      uVar23 = 0;
      if ((int)uVar43 < (param_1->MaterialsShapePool).Elements.ArrayNum) {
        uVar23 = ~uVar43 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar49 = (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                ((param_1->MaterialsShapePool).Elements.AllocatorInstance.Data + lVar47 * 0x40);
      if (pTVar49 != (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)0x0) {
        FVar40 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar43 = 0;
        if ((int)uVar22 < *(int *)((longlong)FVar40 + 0x10)) {
          uVar43 = ~uVar22 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar40 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar40 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar40 + 8);
        }
        this_00 = *(FShapeInstance **)((longlong)FVar40 + lVar50 * 8);
        uVar43 = (uint)this_00->_padding_;
        if ((uVar43 & 3) == 0) {
          pIVar32 = *(IPhysicsProxyBase **)&(this_00->CollisionData).QueryData;
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)(this_00 + 1),
                     pTVar49);
          TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                     &this_00[1]._padding_,
                     (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar49 + 1)
                    );
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this_00[1]._padding_,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar49 + 2));
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                     &this_00[1]._padding_,pTVar49 + 3);
          uVar22 = *(uint *)((longlong)&this_00->_padding_ + 4);
          *(uint *)((longlong)&this_00->_padding_ + 4) = uVar22 | 2;
          if (((uVar22 == 0) && (pIVar32 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar32->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape(pIVar32->Solver,pIVar32,uVar43 >> 3);
            bVar20 = true;
          }
          else {
LAB_1440c4af8:
            bVar20 = true;
          }
        }
        else {
          if ((((1 < pTVar49->ArrayNum) || (pTVar49[1].ArrayNum != 0)) || (pTVar49[2].ArrayNum != 0)
              ) || (pTVar49[3].ArrayNum != 0)) {
            this_01 = FShapeInstance::GetMaterialDataImpl(this_00);
            TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->Materials,pTVar49);
            TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMasks,
                       (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                       (pTVar49 + 1));
            TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMaskMaps,
                       (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar49 + 2));
            TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMaskMapMaterials,pTVar49 + 3);
            goto LAB_1440c4af8;
          }
          if (pTVar49->ArrayNum < 1) {
            local_26c.InnerHandle = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
            FShapeInstance::SetMaterialImpl(this_00,&local_26c);
            bVar20 = true;
          }
          else {
            local_26c.InnerHandle =
                 *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(pTVar49->AllocatorInstance).Data;
            FShapeInstance::SetMaterialImpl(this_00,&local_26c);
            bVar20 = true;
          }
        }
      }
    }
    uVar45 = (ulonglong)local_268;
    pFVar48 = local_258 + 4;
  }
  if ((((bVar20) || (bVar14)) || (local_248 != (FParticleNonFrequentData *)0x0)) &&
     ((FPBDRigidsEvolutionGBF::ParticleMaterialChanged(local_178,param_2), bVar14 &&
      (ForceNoCollisionIntoSQ == 0)))) {
    if ((local_276 == false) &&
       (pTVar42 = TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_),
       (pFVar18->ShapeDataIndices).ArrayNum != pTVar42->ArrayNum)) {
      FVar40 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      iVar7 = *(int *)((longlong)FVar40 + 0x10);
      piVar1 = (int *)((longlong)FVar40 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar40 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar40 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar40 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar40 + (longlong)iVar7 * 8);
      while( true ) {
        if (*piVar1 != iVar7) {
          local_274[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_274);
        }
        if (FVar40 == FVar2) break;
        lVar47 = *(longlong *)FVar40;
        lVar50 = 0x79;
        if ((*(byte *)(lVar47 + 8) & 3) != 0) {
          lVar50 = 0x71;
        }
        local_276 = (*(byte *)(lVar50 + lVar47) & 3) != 0;
        if ((*(byte *)(lVar50 + lVar47) & 3) != 0) break;
        FVar40 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar40 + 8);
      }
    }
    pbVar34 = TGeometryParticlesImp<double,3,0>::HasCollision
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    *pbVar34 = local_276;
    if (local_276 == false) {
      pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      FVar6.Idx = pFVar35->Idx;
      pFVar36 = FPendingSpatialDataQueue::FindOrAdd
                          ((FPendingSpatialDataQueue *)&pFVar8->_padding_,FVar6,Delete);
      pFVar36->Operation = Delete;
      pFVar38 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      pFVar36->SpatialIdx = *pFVar38;
      ppTVar37 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      local_1c8 = *ppTVar37;
      pTStack_1c0 = param_2;
      pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      local_1b8 = pFVar35->Idx;
      FStack_1b4.Word2 = 0;
      FStack_1b4.Word3 = 0;
      FStack_1b4.Word0 = 0;
      FStack_1b4.Word1 = 0;
      FStack_1a4.Word2 = 0;
      FStack_1a4.Word3 = 0;
      FStack_1a4.Word0 = 0;
      FStack_1a4.Word1 = 0;
      local_194 = local_194 & 0xffffff00;
      if ((local_1b8 == -1) &&
         (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564217994>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf76,"CachedUniqueIdx.IsValid()"), bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FAccelerationStructureHandle::
      ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_1b4);
      FAccelerationStructureHandle::
      ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_1a4);
      local_194 = CONCAT31(local_194._1_3_,1);
      (pFVar36->AccelerationHandle).ExternalGeometryParticle = local_1c8;
      (pFVar36->AccelerationHandle).GeometryParticleHandle = pTStack_1c0;
      (pFVar36->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1b8;
      (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1b4.Word0;
      (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1b4.Word1;
      (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1b4.Word2;
      *(ulonglong *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3 =
           CONCAT44(FStack_1a4.Word0,FStack_1b4.Word3);
      (pFVar36->AccelerationHandle).UnionSimFilterData.Word1 = FStack_1a4.Word1;
      (pFVar36->AccelerationHandle).UnionSimFilterData.Word2 = FStack_1a4.Word2;
      *(ulonglong *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3 =
           CONCAT44(local_194,FStack_1a4.Word3);
      FPendingSpatialInternalDataQueue::Remove
                ((FPendingSpatialInternalDataQueue *)&pFVar8->_padding_,FVar6);
      (**(code **)(*(longlong *)pFVar8->_padding_ + 0x88))
                ((longlong *)pFVar8->_padding_,pFVar36,pFVar36->SpatialIdx);
    }
    else {
      FPBDRigidsEvolutionGBF::DestroyTransientConstraints(pFVar8,param_2);
      pTVar46 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pTVar44 = pTVar46;
      if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
        pTVar44 = param_2;
      }
      if ((pTVar44 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (bVar20 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar44), bVar20)) {
        pTVar44 = pTVar46;
        if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
          pTVar44 = param_2;
        }
        if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        pCVar30 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar44->_padding_,
                             (int)pTVar44->_padding_);
        pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)pCVar30->Id;
        if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        if (2 < *(byte *)((longlong)&pTVar44->_padding_ + 4)) {
          pTVar46 = pTVar44;
        }
        if (pTVar46 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          bVar20 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2113888976451403243>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                              ,0x215,"false");
          if (!bVar20) {
            return;
          }
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar31 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)pTVar46->_padding_,
                              (int)pTVar46->_padding_)->field0_0x0;
        if ((pFVar31->Bits & 1) == 0) {
          return;
        }
        pIVar32 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
        pIVar33 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar46);
        if (pIVar33 != pIVar32) {
          return;
        }
      }
      pbVar34 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      if ((*pbVar34 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FVar6.Idx = pFVar35->Idx;
        pFVar36 = FPendingSpatialInternalDataQueue::Add
                            ((FPendingSpatialInternalDataQueue *)&pFVar8->_padding_,0,FVar6,Add);
        pFVar36->Operation = Update;
        ppTVar37 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        local_200 = *ppTVar37;
        pTStack_1f8 = param_2;
        pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FStack_1ec.Word2 = 0;
        FStack_1ec.Word3 = 0;
        FStack_1ec.Word0 = 0;
        FStack_1ec.Word1 = 0;
        FStack_1dc.Word2 = 0;
        FStack_1dc.Word3 = 0;
        local_1f0 = pFVar35->Idx;
        FStack_1dc.Word0 = 0;
        FStack_1dc.Word1 = 0;
        local_1cc = local_1cc & 0xffffff00;
        if ((local_1f0 == -1) &&
           (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf76,"CachedUniqueIdx.IsValid()"), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_1ec);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_1dc);
        local_1cc = CONCAT31(local_1cc._1_3_,1);
        (pFVar36->AccelerationHandle).ExternalGeometryParticle = local_200;
        (pFVar36->AccelerationHandle).GeometryParticleHandle = pTStack_1f8;
        (pFVar36->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1f0;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1ec.Word0;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1ec.Word1;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1ec.Word2;
        *(ulonglong *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_1dc.Word0,FStack_1ec.Word3);
        (pFVar36->AccelerationHandle).UnionSimFilterData.Word1 = FStack_1dc.Word1;
        (pFVar36->AccelerationHandle).UnionSimFilterData.Word2 = FStack_1dc.Word2;
        *(ulonglong *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_1cc,FStack_1dc.Word3);
        pFVar38 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        pFVar36->SpatialIdx = *pFVar38;
        pFVar39 = FPendingSpatialDataQueue::FindOrAdd
                            ((FPendingSpatialDataQueue *)&pFVar8->_padding_,FVar6,Add);
        pTVar44 = (pFVar36->AccelerationHandle).GeometryParticleHandle;
        (pFVar39->AccelerationHandle).ExternalGeometryParticle =
             (pFVar36->AccelerationHandle).ExternalGeometryParticle;
        (pFVar39->AccelerationHandle).GeometryParticleHandle = pTVar44;
        uVar43 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar22 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar23 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar39->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar36->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word0 = uVar43;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word1 = uVar22;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word2 = uVar23;
        uVar43 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word1;
        uVar22 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar39->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar39->AccelerationHandle).UnionSimFilterData.Word1 = uVar43;
        (pFVar39->AccelerationHandle).UnionSimFilterData.Word2 = uVar22;
        FVar15 = pFVar36->SpatialIdx;
        uVar16 = *(undefined2 *)&pFVar36->field_0x3a;
        iVar7 = pFVar36->SyncTimestamp;
        *(undefined8 *)&(pFVar39->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar39->SpatialIdx = FVar15;
        *(undefined2 *)&pFVar39->field_0x3a = uVar16;
        pFVar39->SyncTimestamp = iVar7;
        uVar17 = *(undefined7 *)&pFVar36->field_0x41;
        pFVar39->Operation = pFVar36->Operation;
        *(undefined7 *)&pFVar39->field_0x41 = uVar17;
      }
    }
  }
  return;
}

// PushToPhysicsStateImp<2> @ 1440c4f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::PushToPhysicsStateImp<2>
          (FDirtyPropertiesManager *param_1,TGeometryParticleHandleImp<double,3,1> *param_2,
          int param_3,FDirtyProxy *param_4,FShapeDirtyData *param_5,FPBDRigidsSolver *param_6,
          bool param_7,double param_8)

{
  FDirtyChaosProperties *this;
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  FUniqueIdx FVar7;
  FPBDRigidsEvolutionGBF *this_00;
  longlong lVar8;
  FShapeInstance *this_01;
  code *pcVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  FSpatialAccelerationIdx FVar13;
  undefined2 uVar14;
  undefined7 uVar15;
  FDirtyProxy *pFVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  FParticleNonFrequentData *pFVar21;
  FParticlePositionRotation *pFVar22;
  FParticleDynamicMisc *pFVar23;
  FParticleVelocities *pFVar24;
  FKinematicTarget *pFVar25;
  FParticleMassProps *pFVar26;
  FParticleDynamics *pFVar27;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar28;
  TVector<double,3> *pTVar29;
  longlong lVar30;
  FMaterialData *this_02;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar31;
  bool *pbVar32;
  ClusterId *pCVar33;
  FRigidClusteredFlags_u_0 *pFVar34;
  IPhysicsProxyBase *pIVar35;
  IPhysicsProxyBase *pIVar36;
  FUniqueIdx *pFVar37;
  FPendingSpatialData *pFVar38;
  TGeometryParticle<double,3> **ppTVar39;
  FSpatialAccelerationIdx *pFVar40;
  FPendingSpatialData *pFVar41;
  uint uVar42;
  ulonglong uVar43;
  TGeometryParticleHandleImp<double,3,1> *pTVar44;
  longlong lVar45;
  FScriptContainerElement *pFVar46;
  TGeometryParticleHandleImp<double,3,1> *pTVar47;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *pTVar48;
  FDirtyPropertiesManager *pFVar49;
  longlong lVar50;
  undefined1 auStackY_2a8 [32];
  bool local_278;
  undefined1 local_268;
  undefined1 local_267 [7];
  FDirtyPropertiesManager *local_260;
  FParticleNonFrequentData *local_258;
  FMaterialHandle local_250 [2];
  FPBDRigidsSolver *local_248;
  FShapeDirtyData *local_240;
  FDirtyProxy *local_238;
  TGeometryParticle<double,3> *local_230;
  TGeometryParticleHandleImp<double,3,1> *pTStack_228;
  int local_220;
  FCollisionFilterData FStack_21c;
  FCollisionFilterData FStack_20c;
  uint local_1fc;
  TGeometryParticle<double,3> *local_1f8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1f0;
  int local_1e8;
  FCollisionFilterData FStack_1e4;
  FCollisionFilterData FStack_1d4;
  uint local_1c4;
  TGeometryParticle<double,3> *local_1c0;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1b8;
  int local_1b0;
  FCollisionFilterData FStack_1ac;
  FCollisionFilterData FStack_19c;
  uint local_18c;
  TVector<float,3> local_188;
  FScriptContainerElement *local_178;
  undefined1 local_170 [16];
  double local_160;
  TVector<double,3> local_158;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this = &param_4->PropertyData;
  local_240 = param_5;
  this_00 = (param_6->MEvolution).Ptr;
  local_248 = param_6;
  local_260 = param_1;
  local_238 = param_4;
  pFVar21 = FDirtyChaosProperties::FindNonFrequentData(this,param_1,param_3);
  local_258 = pFVar21;
  if (param_7) {
    FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)this_00,param_2);
  }
  if (((this->Flags).Bits & 1) == 0) {
    pFVar22 = (FParticlePositionRotation *)0x0;
    pFVar23 = FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
  }
  else {
    pFVar22 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_3);
    pFVar23 = FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
    if (pFVar22 != (FParticlePositionRotation *)0x0) {
      bVar18 = true;
      if (pFVar23 != (FParticleDynamicMisc *)0x0) {
        bVar18 = true;
        if (pFVar23->MObjectState == Sleeping) {
          bVar18 = false;
        }
      }
      local_138 = (double)*(float *)&pFVar22->MR;
      local_130 = (double)*(float *)&(pFVar22->MR).field_0x4;
      uVar5 = *(undefined8 *)&(pFVar22->MR).field_0x8;
      dVar12 = (double)(float)((ulonglong)uVar5 >> 0x20);
      local_128._8_4_ = SUB84(dVar12,0);
      local_128._0_8_ = (double)(float)uVar5;
      local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      FPBDRigidsEvolutionGBF::SetParticleTransform
                (this_00,param_2,&pFVar22->MX,(TRotation<double,3> *)&local_138,true,bVar18);
    }
  }
  if (pFVar21 != (FParticleNonFrequentData *)0x0) {
    Private::FPBDIslandManager::RemoveParticleConstraints
              ((FPBDIslandManager *)&this_00->_padding_,param_2);
    (**(code **)(this_00->_padding_ + 0x18))(this_00,param_2);
    TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData(param_2,pFVar21);
  }
  if (((this->Flags).Bits & 2) == 0) {
    pFVar24 = (FParticleVelocities *)0x0;
  }
  else {
    pFVar24 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_3);
    if (pFVar24 != (FParticleVelocities *)0x0) {
      local_188._0_4_ = *(undefined4 *)&pFVar24->MW;
      local_188._4_4_ = *(undefined4 *)&(pFVar24->MW).field_0x4;
      local_188._8_4_ = *(undefined4 *)&(pFVar24->MW).field_0x8;
      dVar12 = (double)(float)((ulonglong)*(undefined8 *)&pFVar24->MV >> 0x20);
      local_170._8_4_ = SUB84(dVar12,0);
      local_170._0_8_ = (double)(float)*(undefined8 *)&pFVar24->MV;
      local_170._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_160 = (double)*(float *)&(pFVar24->MV).field_0x8;
      FPBDRigidsEvolutionGBF::SetParticleVelocities
                (this_00,param_2,(TVector<double,3> *)local_170,&local_188);
    }
  }
  pFVar25 = FDirtyChaosProperties::FindKinematicTarget(this,param_1,param_3);
  if (pFVar25 != (FKinematicTarget *)0x0) {
    FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(this_00,param_2,pFVar25);
  }
  if (((pFVar22 == (FParticlePositionRotation *)0x0) &&
      (local_258 == (FParticleNonFrequentData *)0x0)) && (pFVar24 == (FParticleVelocities *)0x0)) {
    if (pFVar25 == (FKinematicTarget *)0x0) goto LAB_1440c518d;
LAB_1440c53b4:
    if (pFVar25->Mode != Position) goto LAB_1440c53e6;
    fVar3 = *(float *)&pFVar25->Rotation;
    fVar4 = *(float *)&(pFVar25->Rotation).field_0x4;
    local_e8 = *(undefined8 *)&(pFVar25->Position).field_0x10;
    local_f8 = *(undefined8 *)&pFVar25->Position;
    uStack_f0 = *(undefined8 *)&(pFVar25->Position).field_0x8;
    uVar5 = *(undefined8 *)&(pFVar25->Rotation).field_0x8;
    fVar10 = (float)uVar5;
    fVar11 = (float)((ulonglong)uVar5 >> 0x20);
  }
  else {
    if (pFVar25 != (FKinematicTarget *)0x0) goto LAB_1440c53b4;
LAB_1440c53e6:
    uVar42 = (uint)param_2->_padding_;
    lVar50 = (longlong)(int)uVar42;
    lVar45 = param_2->_padding_;
    uVar20 = 0;
    if ((int)uVar42 < *(int *)(lVar45 + 0x50)) {
      uVar20 = ~uVar42 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar45 = *(longlong *)(lVar45 + 0x48);
    fVar3 = *(float *)(lVar45 + lVar50 * 0x10);
    fVar4 = *(float *)(lVar45 + 4 + lVar50 * 0x10);
    uVar5 = *(undefined8 *)(lVar45 + 8 + lVar50 * 0x10);
    fVar10 = (float)uVar5;
    fVar11 = (float)((ulonglong)uVar5 >> 0x20);
    pTVar29 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_2->_padding_,(int)param_2->_padding_);
    local_e8 = *(undefined8 *)&pTVar29->field_0x10;
    local_f8 = *(undefined8 *)pTVar29;
    uStack_f0 = *(undefined8 *)&pTVar29->field_0x8;
  }
  local_158._16_8_ = 0;
  local_d8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_d0 = _UNK_150689688;
  local_c8 = ___xmm_00000000000000003ff0000000000000;
  uStack_c0 = _UNK_150689518;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_118._8_4_ = SUB84((double)fVar4,0);
  local_118._0_8_ = (double)fVar3;
  local_118._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_108._8_4_ = SUB84((double)fVar11,0);
  local_108._0_8_ = (double)fVar10;
  local_108._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  uStack_e0 = 0;
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,(int)param_2->_padding_,
             (TRigidTransform<double,3> *)local_118,&local_158);
  pTVar47 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar44 = pTVar47;
  if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar44 = param_2;
  }
  if ((pTVar44 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar18 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar44), bVar18)) {
    pTVar44 = pTVar47;
    if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar44 = param_2;
    }
    if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c518d;
    pCVar33 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar44->_padding_,
                         (int)pTVar44->_padding_);
    pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)pCVar33->Id;
    if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c518d;
    if (2 < *(byte *)((longlong)&pTVar44->_padding_ + 4)) {
      pTVar47 = pTVar44;
    }
    if (pTVar47 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (bVar18) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      goto LAB_1440c518d;
    }
    pFVar34 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar47->_padding_,
                          (int)pTVar47->_padding_)->field0_0x0;
    if ((pFVar34->Bits & 1) == 0) goto LAB_1440c518d;
    pIVar35 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar47);
    pIVar36 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
    if (pIVar35 != pIVar36) goto LAB_1440c518d;
  }
  pbVar32 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  if ((*pbVar32 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FVar7.Idx = pFVar37->Idx;
    pFVar38 = FPendingSpatialInternalDataQueue::Add
                        ((FPendingSpatialInternalDataQueue *)&this_00->_padding_,0,FVar7,Add);
    pFVar38->Operation = Update;
    ppTVar39 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                          (int)param_2->_padding_);
    local_230 = *ppTVar39;
    pTStack_228 = param_2;
    pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    local_220 = pFVar37->Idx;
    FStack_21c.Word2 = 0;
    FStack_21c.Word3 = 0;
    FStack_21c.Word0 = 0;
    FStack_21c.Word1 = 0;
    FStack_20c.Word2 = 0;
    FStack_20c.Word3 = 0;
    FStack_20c.Word0 = 0;
    FStack_20c.Word1 = 0;
    local_1fc = local_1fc & 0xffffff00;
    if ((local_220 == -1) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_21c);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_20c);
    local_1fc = CONCAT31(local_1fc._1_3_,1);
    (pFVar38->AccelerationHandle).ExternalGeometryParticle = local_230;
    (pFVar38->AccelerationHandle).GeometryParticleHandle = pTStack_228;
    (pFVar38->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_220;
    (pFVar38->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_21c.Word0;
    (pFVar38->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_21c.Word1;
    (pFVar38->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_21c.Word2;
    *(ulonglong *)&(pFVar38->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_20c.Word0,FStack_21c.Word3);
    (pFVar38->AccelerationHandle).UnionSimFilterData.Word1 = FStack_20c.Word1;
    (pFVar38->AccelerationHandle).UnionSimFilterData.Word2 = FStack_20c.Word2;
    *(ulonglong *)&(pFVar38->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_1fc,FStack_20c.Word3);
    pFVar40 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    pFVar38->SpatialIdx = *pFVar40;
    pFVar41 = FPendingSpatialDataQueue::FindOrAdd
                        ((FPendingSpatialDataQueue *)&this_00->_padding_,FVar7,Add);
    pTVar44 = (pFVar38->AccelerationHandle).GeometryParticleHandle;
    (pFVar41->AccelerationHandle).ExternalGeometryParticle =
         (pFVar38->AccelerationHandle).ExternalGeometryParticle;
    (pFVar41->AccelerationHandle).GeometryParticleHandle = pTVar44;
    uVar42 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar20 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar19 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar41->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar38->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar41->AccelerationHandle).UnionQueryFilterData.Word0 = uVar42;
    (pFVar41->AccelerationHandle).UnionQueryFilterData.Word1 = uVar20;
    (pFVar41->AccelerationHandle).UnionQueryFilterData.Word2 = uVar19;
    uVar42 = (pFVar38->AccelerationHandle).UnionSimFilterData.Word1;
    uVar20 = (pFVar38->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar41->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar38->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar41->AccelerationHandle).UnionSimFilterData.Word1 = uVar42;
    (pFVar41->AccelerationHandle).UnionSimFilterData.Word2 = uVar20;
    FVar13 = pFVar38->SpatialIdx;
    uVar14 = *(undefined2 *)&pFVar38->field_0x3a;
    iVar6 = pFVar38->SyncTimestamp;
    *(undefined8 *)&(pFVar41->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar38->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar41->SpatialIdx = FVar13;
    *(undefined2 *)&pFVar41->field_0x3a = uVar14;
    pFVar41->SyncTimestamp = iVar6;
    uVar15 = *(undefined7 *)&pFVar38->field_0x41;
    pFVar41->Operation = pFVar38->Operation;
    *(undefined7 *)&pFVar41->field_0x41 = uVar15;
  }
LAB_1440c518d:
  pFVar26 = FDirtyChaosProperties::FindMassProps(this,local_260,param_3);
  if (pFVar26 != (FParticleMassProps *)0x0) {
    FPBDRigidsEvolutionGBF::SetParticleMassProps
              (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)param_2,pFVar26);
  }
  pFVar49 = local_260;
  pFVar27 = FDirtyChaosProperties::FindDynamics(this,local_260,param_3);
  if (pFVar27 != (FParticleDynamics *)0x0) {
    FPBDRigidsEvolutionGBF::SetParticleDynamics
              (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)param_2,pFVar27);
  }
  if (pFVar23 != (FParticleDynamicMisc *)0x0) {
    FPBDRigidsSolver::SetParticleDynamicMisc
              (local_248,(TPBDRigidParticleHandleImp<double,3,1> *)param_2,pFVar23);
  }
  bVar18 = false;
  local_278 = false;
  iVar6 = (local_238->ShapeDataIndices).ArrayNum;
  uVar43 = (ulonglong)iVar6;
  pFVar21 = (FParticleNonFrequentData *)(local_238->ShapeDataIndices).AllocatorInstance.Data;
  local_248 = (FPBDRigidsSolver *)CONCAT44(local_248._4_4_,iVar6);
  local_178 = (FScriptContainerElement *)((longlong)pFVar21 + uVar43 * 4);
  while( true ) {
    pFVar46 = local_178;
    pFVar16 = local_238;
    local_258 = pFVar21;
    if ((local_238->ShapeDataIndices).ArrayNum != (int)uVar43) {
      local_268 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_268);
    }
    if (pFVar21 == (FParticleNonFrequentData *)pFVar46) break;
    uVar42 = *(uint *)pFVar21;
    lVar45 = (longlong)(int)uVar42;
    uVar20 = local_240[lVar45].ShapeIdx;
    lVar50 = (longlong)(int)uVar20;
    if ((local_240[lVar45].Flags.Bits & 1) != 0) {
      uVar19 = 0;
      if ((int)uVar42 < (pFVar49->CollisionDataShapePool).Elements.ArrayNum) {
        uVar19 = ~uVar42 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar46 = (pFVar49->CollisionDataShapePool).Elements.AllocatorInstance.Data + lVar45 * 0x30;
      if (pFVar46 != (FScriptContainerElement *)0x0) {
        bVar18 = true;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar19 = 0;
        if ((int)uVar20 < *(int *)((longlong)FVar28 + 0x10)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar5 = *(undefined8 *)(pFVar46 + 8);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar28 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar28 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar28 + 8);
        }
        lVar8 = *(longlong *)((longlong)FVar28 + lVar50 * 8);
        if ((*(uint *)(lVar8 + 8) & 3) == 0) {
          pIVar35 = *(IPhysicsProxyBase **)(lVar8 + 0x48);
          *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)pFVar46;
          *(undefined8 *)(lVar8 + 0x58) = uVar5;
          uVar5 = *(undefined8 *)(pFVar46 + 0x18);
          *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(pFVar46 + 0x10);
          *(undefined8 *)(lVar8 + 0x68) = uVar5;
          uVar5 = *(undefined8 *)(pFVar46 + 0x28);
          *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(pFVar46 + 0x20);
          *(undefined8 *)(lVar8 + 0x78) = uVar5;
          uVar19 = *(uint *)(lVar8 + 0xc);
          *(uint *)(lVar8 + 0xc) = uVar19 | 1;
          if (((uVar19 == 0) && (pIVar35 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar35->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape
                      (pIVar35->Solver,pIVar35,*(uint *)(lVar8 + 8) >> 3);
          }
        }
        else {
          *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)pFVar46;
          *(undefined8 *)(lVar8 + 0x50) = uVar5;
          uVar5 = *(undefined8 *)(pFVar46 + 0x18);
          *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(pFVar46 + 0x10);
          *(undefined8 *)(lVar8 + 0x60) = uVar5;
          uVar5 = *(undefined8 *)(pFVar46 + 0x28);
          *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(pFVar46 + 0x20);
          *(undefined8 *)(lVar8 + 0x70) = uVar5;
        }
        FVar28 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar19 = 0;
        if ((int)uVar20 < *(int *)((longlong)FVar28 + 0x10)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar28 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar28 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar28 + 8);
        }
        lVar8 = *(longlong *)((longlong)FVar28 + lVar50 * 8);
        lVar30 = 0x79;
        if ((*(byte *)(lVar8 + 8) & 3) != 0) {
          lVar30 = 0x71;
        }
        local_278 = (bool)(local_278 | (*(byte *)(lVar30 + lVar8) & 3) != 0);
        pFVar49 = local_260;
        pFVar21 = local_258;
      }
    }
    if ((local_240[lVar45].Flags.Bits & 2) != 0) {
      uVar19 = 0;
      if ((int)uVar42 < (pFVar49->MaterialsShapePool).Elements.ArrayNum) {
        uVar19 = ~uVar42 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar48 = (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                ((pFVar49->MaterialsShapePool).Elements.AllocatorInstance.Data + lVar45 * 0x40);
      if (pTVar48 != (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)0x0) {
        FVar28 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar42 = 0;
        if ((int)uVar20 < *(int *)((longlong)FVar28 + 0x10)) {
          uVar42 = ~uVar20 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar28 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar28 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar28 + 8);
        }
        this_01 = *(FShapeInstance **)((longlong)FVar28 + lVar50 * 8);
        uVar42 = (uint)this_01->_padding_;
        if ((uVar42 & 3) == 0) {
          pIVar35 = *(IPhysicsProxyBase **)&(this_01->CollisionData).QueryData;
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)(this_01 + 1),
                     pTVar48);
          TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                     &this_01[1]._padding_,
                     (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar48 + 1)
                    );
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this_01[1]._padding_,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar48 + 2));
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                     &this_01[1]._padding_,pTVar48 + 3);
          uVar20 = *(uint *)((longlong)&this_01->_padding_ + 4);
          *(uint *)((longlong)&this_01->_padding_ + 4) = uVar20 | 2;
          if (((uVar20 == 0) && (pIVar35 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar35->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape(pIVar35->Solver,pIVar35,uVar42 >> 3);
          }
        }
        else if ((((pTVar48->ArrayNum < 2) && (pTVar48[1].ArrayNum == 0)) &&
                 (pTVar48[2].ArrayNum == 0)) && (pTVar48[3].ArrayNum == 0)) {
          if (pTVar48->ArrayNum < 1) {
            local_250[0].InnerHandle = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
            FShapeInstance::SetMaterialImpl(this_01,local_250);
          }
          else {
            local_250[0].InnerHandle =
                 *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(pTVar48->AllocatorInstance).Data;
            FShapeInstance::SetMaterialImpl(this_01,local_250);
          }
        }
        else {
          this_02 = FShapeInstance::GetMaterialDataImpl(this_01);
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    (&this_02->Materials,pTVar48);
          TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                    (&this_02->MaterialMasks,
                     (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar48 + 1)
                    );
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                    (&this_02->MaterialMaskMaps,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar48 + 2));
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    (&this_02->MaterialMaskMapMaterials,pTVar48 + 3);
        }
      }
    }
    pFVar21 = (FParticleNonFrequentData *)((longlong)pFVar21 + 4);
    uVar43 = (ulonglong)local_248 & 0xffffffff;
    pFVar49 = local_260;
  }
  FPBDRigidsEvolutionGBF::ParticleMaterialChanged(this_00,param_2);
  if ((bVar18) && (ForceNoCollisionIntoSQ == 0)) {
    if ((local_278 == false) &&
       (pTVar31 = TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_),
       (pFVar16->ShapeDataIndices).ArrayNum != pTVar31->ArrayNum)) {
      FVar28 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      iVar6 = *(int *)((longlong)FVar28 + 0x10);
      piVar1 = (int *)((longlong)FVar28 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar28 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar28 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar28 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar28 + (longlong)iVar6 * 8);
      while( true ) {
        if (*piVar1 != iVar6) {
          local_267[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_267);
        }
        if (FVar28 == FVar2) break;
        lVar45 = *(longlong *)FVar28;
        lVar50 = 0x79;
        if ((*(byte *)(lVar45 + 8) & 3) != 0) {
          lVar50 = 0x71;
        }
        local_278 = (*(byte *)(lVar50 + lVar45) & 3) != 0;
        if ((*(byte *)(lVar50 + lVar45) & 3) != 0) break;
        FVar28 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar28 + 8);
      }
    }
    pbVar32 = TGeometryParticlesImp<double,3,0>::HasCollision
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    *pbVar32 = local_278;
    if (local_278 == false) {
      pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      FVar7.Idx = pFVar37->Idx;
      pFVar38 = FPendingSpatialDataQueue::FindOrAdd
                          ((FPendingSpatialDataQueue *)&this_00->_padding_,FVar7,Delete);
      pFVar38->Operation = Delete;
      pFVar40 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      pFVar38->SpatialIdx = *pFVar40;
      ppTVar39 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      local_1c0 = *ppTVar39;
      pTStack_1b8 = param_2;
      pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      local_1b0 = pFVar37->Idx;
      FStack_1ac.Word2 = 0;
      FStack_1ac.Word3 = 0;
      FStack_1ac.Word0 = 0;
      FStack_1ac.Word1 = 0;
      FStack_19c.Word2 = 0;
      FStack_19c.Word3 = 0;
      FStack_19c.Word0 = 0;
      FStack_19c.Word1 = 0;
      local_18c = local_18c & 0xffffff00;
      if ((local_1b0 == -1) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564217994>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf76,"CachedUniqueIdx.IsValid()"), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FAccelerationStructureHandle::
      ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_1ac);
      FAccelerationStructureHandle::
      ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_19c);
      local_18c = CONCAT31(local_18c._1_3_,1);
      (pFVar38->AccelerationHandle).ExternalGeometryParticle = local_1c0;
      (pFVar38->AccelerationHandle).GeometryParticleHandle = pTStack_1b8;
      (pFVar38->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1b0;
      (pFVar38->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1ac.Word0;
      (pFVar38->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1ac.Word1;
      (pFVar38->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1ac.Word2;
      *(ulonglong *)&(pFVar38->AccelerationHandle).UnionQueryFilterData.Word3 =
           CONCAT44(FStack_19c.Word0,FStack_1ac.Word3);
      (pFVar38->AccelerationHandle).UnionSimFilterData.Word1 = FStack_19c.Word1;
      (pFVar38->AccelerationHandle).UnionSimFilterData.Word2 = FStack_19c.Word2;
      *(ulonglong *)&(pFVar38->AccelerationHandle).UnionSimFilterData.Word3 =
           CONCAT44(local_18c,FStack_19c.Word3);
      FPendingSpatialInternalDataQueue::Remove
                ((FPendingSpatialInternalDataQueue *)&this_00->_padding_,FVar7);
      (**(code **)(*(longlong *)this_00->_padding_ + 0x88))
                ((longlong *)this_00->_padding_,pFVar38,pFVar38->SpatialIdx);
    }
    else {
      FPBDRigidsEvolutionGBF::DestroyTransientConstraints(this_00,param_2);
      pTVar47 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pTVar44 = pTVar47;
      if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
        pTVar44 = param_2;
      }
      if ((pTVar44 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (bVar18 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar44), bVar18)) {
        pTVar44 = pTVar47;
        if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
          pTVar44 = param_2;
        }
        if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        pCVar33 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar44->_padding_,
                             (int)pTVar44->_padding_);
        pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)pCVar33->Id;
        if (pTVar44 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        if (2 < *(byte *)((longlong)&pTVar44->_padding_ + 4)) {
          pTVar47 = pTVar44;
        }
        if (pTVar47 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2113888976451403243>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                              ,0x215,"false");
          if (!bVar18) {
            return;
          }
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar34 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)pTVar47->_padding_,
                              (int)pTVar47->_padding_)->field0_0x0;
        if ((pFVar34->Bits & 1) == 0) {
          return;
        }
        pIVar35 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
        pIVar36 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar47);
        if (pIVar36 != pIVar35) {
          return;
        }
      }
      pbVar32 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      if ((*pbVar32 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FVar7.Idx = pFVar37->Idx;
        pFVar38 = FPendingSpatialInternalDataQueue::Add
                            ((FPendingSpatialInternalDataQueue *)&this_00->_padding_,0,FVar7,Add);
        pFVar38->Operation = Update;
        ppTVar39 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        local_1f8 = *ppTVar39;
        pTStack_1f0 = param_2;
        pFVar37 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FStack_1e4.Word2 = 0;
        FStack_1e4.Word3 = 0;
        FStack_1e4.Word0 = 0;
        FStack_1e4.Word1 = 0;
        FStack_1d4.Word2 = 0;
        FStack_1d4.Word3 = 0;
        local_1e8 = pFVar37->Idx;
        FStack_1d4.Word0 = 0;
        FStack_1d4.Word1 = 0;
        local_1c4 = local_1c4 & 0xffffff00;
        if ((local_1e8 == -1) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf76,"CachedUniqueIdx.IsValid()"), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_1e4);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_1d4);
        local_1c4 = CONCAT31(local_1c4._1_3_,1);
        (pFVar38->AccelerationHandle).ExternalGeometryParticle = local_1f8;
        (pFVar38->AccelerationHandle).GeometryParticleHandle = pTStack_1f0;
        (pFVar38->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1e8;
        (pFVar38->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1e4.Word0;
        (pFVar38->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1e4.Word1;
        (pFVar38->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1e4.Word2;
        *(ulonglong *)&(pFVar38->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_1d4.Word0,FStack_1e4.Word3);
        (pFVar38->AccelerationHandle).UnionSimFilterData.Word1 = FStack_1d4.Word1;
        (pFVar38->AccelerationHandle).UnionSimFilterData.Word2 = FStack_1d4.Word2;
        *(ulonglong *)&(pFVar38->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_1c4,FStack_1d4.Word3);
        pFVar40 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        pFVar38->SpatialIdx = *pFVar40;
        pFVar41 = FPendingSpatialDataQueue::FindOrAdd
                            ((FPendingSpatialDataQueue *)&this_00->_padding_,FVar7,Add);
        pTVar44 = (pFVar38->AccelerationHandle).GeometryParticleHandle;
        (pFVar41->AccelerationHandle).ExternalGeometryParticle =
             (pFVar38->AccelerationHandle).ExternalGeometryParticle;
        (pFVar41->AccelerationHandle).GeometryParticleHandle = pTVar44;
        uVar42 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar20 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar19 = (pFVar38->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar41->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar38->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar41->AccelerationHandle).UnionQueryFilterData.Word0 = uVar42;
        (pFVar41->AccelerationHandle).UnionQueryFilterData.Word1 = uVar20;
        (pFVar41->AccelerationHandle).UnionQueryFilterData.Word2 = uVar19;
        uVar42 = (pFVar38->AccelerationHandle).UnionSimFilterData.Word1;
        uVar20 = (pFVar38->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar41->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar38->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar41->AccelerationHandle).UnionSimFilterData.Word1 = uVar42;
        (pFVar41->AccelerationHandle).UnionSimFilterData.Word2 = uVar20;
        FVar13 = pFVar38->SpatialIdx;
        uVar14 = *(undefined2 *)&pFVar38->field_0x3a;
        iVar6 = pFVar38->SyncTimestamp;
        *(undefined8 *)&(pFVar41->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar38->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar41->SpatialIdx = FVar13;
        *(undefined2 *)&pFVar41->field_0x3a = uVar14;
        pFVar41->SyncTimestamp = iVar6;
        uVar15 = *(undefined7 *)&pFVar38->field_0x41;
        pFVar41->Operation = pFVar38->Operation;
        *(undefined7 *)&pFVar41->field_0x41 = uVar15;
      }
    }
  }
  return;
}

// PushToPhysicsStateImp<0> @ 1440c5dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::PushToPhysicsStateImp<0>
          (FDirtyPropertiesManager *param_1,TGeometryParticleHandleImp<double,3,1> *param_2,
          int param_3,FDirtyProxy *param_4,FShapeDirtyData *param_5,FPBDRigidsSolver *param_6,
          bool param_7,double param_8)

{
  FDirtyChaosProperties *this;
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  float fVar3;
  undefined8 uVar4;
  FUniqueIdx FVar5;
  int iVar6;
  longlong lVar7;
  FShapeInstance *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  FSpatialAccelerationIdx FVar12;
  undefined2 uVar13;
  undefined7 uVar14;
  FDirtyProxy *pFVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  FParticleNonFrequentData *pFVar20;
  FParticlePositionRotation *pFVar21;
  FParticleDynamicMisc *pFVar22;
  TVector<double,3> *pTVar23;
  ClusterId *pCVar24;
  FRigidClusteredFlags_u_0 *pFVar25;
  IPhysicsProxyBase *pIVar26;
  IPhysicsProxyBase *pIVar27;
  bool *pbVar28;
  FUniqueIdx *pFVar29;
  FPendingSpatialData *pFVar30;
  TGeometryParticle<double,3> **ppTVar31;
  FSpatialAccelerationIdx *pFVar32;
  FPendingSpatialData *pFVar33;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar34;
  longlong lVar35;
  FMaterialData *this_01;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar36;
  uint uVar37;
  TGeometryParticleHandleImp<double,3,1> *pTVar38;
  TGeometryParticleHandleImp<double,3,1> *pTVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  FScriptContainerElement *pFVar43;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *pTVar44;
  FScriptContainerElement *pFVar45;
  FPBDRigidsEvolutionGBF *pFVar46;
  undefined1 auStackY_248 [32];
  bool local_216;
  undefined1 local_215;
  undefined1 local_214 [8];
  FMaterialHandle local_20c;
  uint local_208;
  FShapeDirtyData *local_200;
  FScriptContainerElement *local_1f8;
  FDirtyPropertiesManager *local_1f0;
  FDirtyProxy *local_1e8;
  FPBDRigidsEvolutionGBF *local_1e0;
  FScriptContainerElement *local_1d8;
  TGeometryParticle<double,3> *local_1d0;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1c8;
  int local_1c0;
  FCollisionFilterData FStack_1bc;
  FCollisionFilterData FStack_1ac;
  uint local_19c;
  TGeometryParticle<double,3> *local_198;
  TGeometryParticleHandleImp<double,3,1> *pTStack_190;
  int local_188;
  FCollisionFilterData FStack_184;
  FCollisionFilterData FStack_174;
  uint local_164;
  TGeometryParticle<double,3> *local_160;
  TGeometryParticleHandleImp<double,3,1> *pTStack_158;
  int local_150;
  FCollisionFilterData FStack_14c;
  FCollisionFilterData FStack_13c;
  uint local_12c;
  FParticleNonFrequentData *local_128;
  TVector<double,3> local_120;
  double local_108;
  double local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = &param_4->PropertyData;
  local_200 = param_5;
  pFVar46 = (param_6->MEvolution).Ptr;
  local_1f0 = param_1;
  local_1e8 = param_4;
  local_1e0 = pFVar46;
  pFVar20 = FDirtyChaosProperties::FindNonFrequentData(this,param_1,param_3);
  local_128 = pFVar20;
  if (param_7) {
    FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)pFVar46,param_2);
  }
  if (((this->Flags).Bits & 1) == 0) {
    pFVar21 = (FParticlePositionRotation *)0x0;
    FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
  }
  else {
    pFVar21 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_3);
    pFVar22 = FDirtyChaosProperties::FindDynamicMisc(this,param_1,param_3);
    if (pFVar21 != (FParticlePositionRotation *)0x0) {
      bVar16 = true;
      if (pFVar22 != (FParticleDynamicMisc *)0x0) {
        bVar16 = true;
        if (pFVar22->MObjectState == Sleeping) {
          bVar16 = false;
        }
      }
      local_108 = (double)*(float *)&pFVar21->MR;
      local_100 = (double)*(float *)&(pFVar21->MR).field_0x4;
      uVar4 = *(undefined8 *)&(pFVar21->MR).field_0x8;
      dVar9 = (double)(float)((ulonglong)uVar4 >> 0x20);
      local_f8._8_4_ = SUB84(dVar9,0);
      local_f8._0_8_ = (double)(float)uVar4;
      local_f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      FPBDRigidsEvolutionGBF::SetParticleTransform
                (pFVar46,param_2,&pFVar21->MX,(TRotation<double,3> *)&local_108,true,bVar16);
    }
  }
  if (pFVar20 != (FParticleNonFrequentData *)0x0) {
    Private::FPBDIslandManager::RemoveParticleConstraints
              ((FPBDIslandManager *)&pFVar46->_padding_,param_2);
    (**(code **)(pFVar46->_padding_ + 0x18))(pFVar46,param_2);
    TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData(param_2,pFVar20);
  }
  if ((pFVar21 == (FParticlePositionRotation *)0x0) && (pFVar20 == (FParticleNonFrequentData *)0x0))
  goto LAB_1440c61ed;
  uVar37 = (uint)param_2->_padding_;
  lVar41 = (longlong)(int)uVar37;
  pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  lVar42 = param_2->_padding_;
  uVar18 = 0;
  if ((int)uVar37 < *(int *)(lVar42 + 0x50)) {
    uVar18 = ~uVar37 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar42 = *(longlong *)(lVar42 + 0x48);
  fVar3 = *(float *)(lVar42 + lVar41 * 0x10);
  uVar4 = *(undefined8 *)(lVar42 + 8 + lVar41 * 0x10);
  dVar9 = (double)(float)((ulonglong)uVar4 >> 0x20);
  dVar10 = (double)*(float *)(lVar42 + 4 + lVar41 * 0x10);
  pTVar23 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_2->_padding_,(int)param_2->_padding_);
  local_c8 = *(undefined8 *)pTVar23;
  uStack_c0 = *(undefined8 *)&pTVar23->field_0x8;
  local_b8 = *(undefined8 *)&pTVar23->field_0x10;
  local_120._16_8_ = 0;
  local_e8._8_4_ = SUB84(dVar10,0);
  local_e8._0_8_ = (double)fVar3;
  local_e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_d8._8_4_ = SUB84(dVar9,0);
  local_d8._0_8_ = (double)(float)uVar4;
  local_d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_b0 = 0;
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a0 = _UNK_150689688;
  local_98 = ___xmm_00000000000000003ff0000000000000;
  uStack_90 = _UNK_150689518;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,(int)param_2->_padding_,
             (TRigidTransform<double,3> *)local_e8,&local_120);
  pTVar38 = pTVar39;
  if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar38 = param_2;
  }
  if ((pTVar38 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar16 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar38), bVar16)) {
    pTVar38 = pTVar39;
    if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar38 = param_2;
    }
    if (pTVar38 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c61ed;
    pCVar24 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar38->_padding_,
                         (int)pTVar38->_padding_);
    pTVar38 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
    if (pTVar38 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440c61ed;
    if (2 < *(byte *)((longlong)&pTVar38->_padding_ + 4)) {
      pTVar39 = pTVar38;
    }
    if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_1440c61ed;
    }
    pFVar25 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar39->_padding_,
                          (int)pTVar39->_padding_)->field0_0x0;
    if ((pFVar25->Bits & 1) == 0) goto LAB_1440c61ed;
    pIVar26 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar39);
    pIVar27 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
    if (pIVar26 != pIVar27) goto LAB_1440c61ed;
  }
  pbVar28 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                       (int)param_2->_padding_);
  if ((*pbVar28 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FVar5.Idx = pFVar29->Idx;
    pFVar30 = FPendingSpatialInternalDataQueue::Add
                        ((FPendingSpatialInternalDataQueue *)&pFVar46->_padding_,0,FVar5,Add);
    pFVar30->Operation = Update;
    ppTVar31 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                          (int)param_2->_padding_);
    local_1d0 = *ppTVar31;
    pTStack_1c8 = param_2;
    pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    FStack_1bc.Word2 = 0;
    FStack_1bc.Word3 = 0;
    FStack_1bc.Word0 = 0;
    FStack_1bc.Word1 = 0;
    FStack_1ac.Word2 = 0;
    FStack_1ac.Word3 = 0;
    local_1c0 = pFVar29->Idx;
    FStack_1ac.Word0 = 0;
    FStack_1ac.Word1 = 0;
    local_19c = local_19c & 0xffffff00;
    if ((local_1c0 == -1) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_1bc);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (param_2,&FStack_1ac);
    local_19c = CONCAT31(local_19c._1_3_,1);
    (pFVar30->AccelerationHandle).ExternalGeometryParticle = local_1d0;
    (pFVar30->AccelerationHandle).GeometryParticleHandle = pTStack_1c8;
    (pFVar30->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1c0;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1bc.Word0;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1bc.Word1;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1bc.Word2;
    *(ulonglong *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_1ac.Word0,FStack_1bc.Word3);
    (pFVar30->AccelerationHandle).UnionSimFilterData.Word1 = FStack_1ac.Word1;
    (pFVar30->AccelerationHandle).UnionSimFilterData.Word2 = FStack_1ac.Word2;
    *(ulonglong *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_19c,FStack_1ac.Word3);
    pFVar32 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    pFVar30->SpatialIdx = *pFVar32;
    pFVar33 = FPendingSpatialDataQueue::FindOrAdd
                        ((FPendingSpatialDataQueue *)&pFVar46->_padding_,FVar5,Add);
    pTVar39 = (pFVar30->AccelerationHandle).GeometryParticleHandle;
    (pFVar33->AccelerationHandle).ExternalGeometryParticle =
         (pFVar30->AccelerationHandle).ExternalGeometryParticle;
    (pFVar33->AccelerationHandle).GeometryParticleHandle = pTVar39;
    uVar37 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar18 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar19 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar33->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar30->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar33->AccelerationHandle).UnionQueryFilterData.Word0 = uVar37;
    (pFVar33->AccelerationHandle).UnionQueryFilterData.Word1 = uVar18;
    (pFVar33->AccelerationHandle).UnionQueryFilterData.Word2 = uVar19;
    uVar37 = (pFVar30->AccelerationHandle).UnionSimFilterData.Word1;
    uVar18 = (pFVar30->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar33->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar33->AccelerationHandle).UnionSimFilterData.Word1 = uVar37;
    (pFVar33->AccelerationHandle).UnionSimFilterData.Word2 = uVar18;
    FVar12 = pFVar30->SpatialIdx;
    uVar13 = *(undefined2 *)&pFVar30->field_0x3a;
    iVar6 = pFVar30->SyncTimestamp;
    *(undefined8 *)&(pFVar33->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar33->SpatialIdx = FVar12;
    *(undefined2 *)&pFVar33->field_0x3a = uVar13;
    pFVar33->SyncTimestamp = iVar6;
    uVar14 = *(undefined7 *)&pFVar30->field_0x41;
    pFVar33->Operation = pFVar30->Operation;
    *(undefined7 *)&pFVar33->field_0x41 = uVar14;
  }
LAB_1440c61ed:
  bVar11 = false;
  local_216 = false;
  bVar16 = false;
  local_208 = (local_1e8->ShapeDataIndices).ArrayNum;
  uVar40 = (ulonglong)(int)local_208;
  pFVar45 = (local_1e8->ShapeDataIndices).AllocatorInstance.Data;
  local_1d8 = pFVar45 + uVar40 * 4;
  while( true ) {
    pFVar43 = local_1d8;
    pFVar15 = local_1e8;
    local_1f8 = pFVar45;
    if ((local_1e8->ShapeDataIndices).ArrayNum != (int)uVar40) {
      local_215 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_215);
    }
    pFVar46 = local_1e0;
    if (pFVar45 == pFVar43) break;
    uVar37 = *(uint *)pFVar45;
    lVar42 = (longlong)(int)uVar37;
    uVar18 = local_200[lVar42].ShapeIdx;
    lVar41 = (longlong)(int)uVar18;
    if ((local_200[lVar42].Flags.Bits & 1) != 0) {
      uVar19 = 0;
      if ((int)uVar37 < (param_1->CollisionDataShapePool).Elements.ArrayNum) {
        uVar19 = ~uVar37 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (param_1->CollisionDataShapePool).Elements.AllocatorInstance.Data + lVar42 * 0x30;
      if (pFVar43 != (FScriptContainerElement *)0x0) {
        bVar11 = true;
        FVar34 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar19 = 0;
        if ((int)uVar18 < *(int *)((longlong)FVar34 + 0x10)) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar4 = *(undefined8 *)(pFVar43 + 8);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar34 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar34 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar34 + 8);
        }
        lVar7 = *(longlong *)((longlong)FVar34 + lVar41 * 8);
        if ((*(uint *)(lVar7 + 8) & 3) == 0) {
          pIVar26 = *(IPhysicsProxyBase **)(lVar7 + 0x48);
          *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)pFVar43;
          *(undefined8 *)(lVar7 + 0x58) = uVar4;
          uVar4 = *(undefined8 *)(pFVar43 + 0x18);
          *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(pFVar43 + 0x10);
          *(undefined8 *)(lVar7 + 0x68) = uVar4;
          uVar4 = *(undefined8 *)(pFVar43 + 0x28);
          *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(pFVar43 + 0x20);
          *(undefined8 *)(lVar7 + 0x78) = uVar4;
          uVar19 = *(uint *)(lVar7 + 0xc);
          *(uint *)(lVar7 + 0xc) = uVar19 | 1;
          if (((uVar19 == 0) && (pIVar26 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar26->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape
                      (pIVar26->Solver,pIVar26,*(uint *)(lVar7 + 8) >> 3);
          }
        }
        else {
          *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)pFVar43;
          *(undefined8 *)(lVar7 + 0x50) = uVar4;
          uVar4 = *(undefined8 *)(pFVar43 + 0x18);
          *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(pFVar43 + 0x10);
          *(undefined8 *)(lVar7 + 0x60) = uVar4;
          uVar4 = *(undefined8 *)(pFVar43 + 0x28);
          *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(pFVar43 + 0x20);
          *(undefined8 *)(lVar7 + 0x70) = uVar4;
        }
        FVar34 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar19 = 0;
        if ((int)uVar18 < *(int *)((longlong)FVar34 + 0x10)) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar34 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar34 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar34 + 8);
        }
        lVar7 = *(longlong *)((longlong)FVar34 + lVar41 * 8);
        lVar35 = 0x79;
        if ((*(byte *)(lVar7 + 8) & 3) != 0) {
          lVar35 = 0x71;
        }
        local_216 = (bool)(local_216 | (*(byte *)(lVar35 + lVar7) & 3) != 0);
        param_1 = local_1f0;
        pFVar45 = local_1f8;
      }
    }
    if ((local_200[lVar42].Flags.Bits & 2) != 0) {
      uVar19 = 0;
      if ((int)uVar37 < (param_1->MaterialsShapePool).Elements.ArrayNum) {
        uVar19 = ~uVar37 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar44 = (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                ((param_1->MaterialsShapePool).Elements.AllocatorInstance.Data + lVar42 * 0x40);
      if (pTVar44 != (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)0x0) {
        FVar34 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        uVar37 = 0;
        if ((int)uVar18 < *(int *)((longlong)FVar34 + 0x10)) {
          uVar37 = ~uVar18 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar34 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar34 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar34 + 8);
        }
        this_00 = *(FShapeInstance **)((longlong)FVar34 + lVar41 * 8);
        uVar37 = (uint)this_00->_padding_;
        if ((uVar37 & 3) == 0) {
          pIVar26 = *(IPhysicsProxyBase **)&(this_00->CollisionData).QueryData;
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)(this_00 + 1),
                     pTVar44);
          TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                     &this_00[1]._padding_,
                     (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)(pTVar44 + 1)
                    );
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this_00[1]._padding_,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar44 + 2));
          TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)
                     &this_00[1]._padding_,pTVar44 + 3);
          uVar18 = *(uint *)((longlong)&this_00->_padding_ + 4);
          *(uint *)((longlong)&this_00->_padding_ + 4) = uVar18 | 2;
          if (((uVar18 == 0) && (pIVar26 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar26->Solver != (FPhysicsSolverBase *)0x0)) {
            FPhysicsSolverBase::AddDirtyProxyShape(pIVar26->Solver,pIVar26,uVar37 >> 3);
            bVar16 = true;
          }
          else {
LAB_1440c6660:
            bVar16 = true;
          }
        }
        else {
          if ((((1 < pTVar44->ArrayNum) || (pTVar44[1].ArrayNum != 0)) || (pTVar44[2].ArrayNum != 0)
              ) || (pTVar44[3].ArrayNum != 0)) {
            this_01 = FShapeInstance::GetMaterialDataImpl(this_00);
            TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->Materials,pTVar44);
            TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMasks,
                       (TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                       (pTVar44 + 1));
            TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMaskMaps,
                       (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar44 + 2));
            TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                      (&this_01->MaterialMaskMapMaterials,pTVar44 + 3);
            goto LAB_1440c6660;
          }
          if (pTVar44->ArrayNum < 1) {
            local_20c.InnerHandle = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
            FShapeInstance::SetMaterialImpl(this_00,&local_20c);
            bVar16 = true;
          }
          else {
            local_20c.InnerHandle =
                 *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(pTVar44->AllocatorInstance).Data;
            FShapeInstance::SetMaterialImpl(this_00,&local_20c);
            bVar16 = true;
          }
        }
      }
    }
    pFVar45 = pFVar45 + 4;
    uVar40 = (ulonglong)local_208;
    param_1 = local_1f0;
  }
  if ((((bVar16) || (bVar11)) || (local_128 != (FParticleNonFrequentData *)0x0)) &&
     ((FPBDRigidsEvolutionGBF::ParticleMaterialChanged(local_1e0,param_2), bVar11 &&
      (ForceNoCollisionIntoSQ == 0)))) {
    if ((local_216 == false) &&
       (pTVar36 = TGeometryParticlesImp<double,3,0>::ShapesArray
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_),
       (pFVar15->ShapeDataIndices).ArrayNum != pTVar36->ArrayNum)) {
      FVar34 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      iVar6 = *(int *)((longlong)FVar34 + 0x10);
      piVar1 = (int *)((longlong)FVar34 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar34 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar34 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar34 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar34 + (longlong)iVar6 * 8);
      while( true ) {
        if (*piVar1 != iVar6) {
          local_214[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_214);
        }
        pFVar46 = local_1e0;
        if (FVar34 == FVar2) break;
        lVar42 = *(longlong *)FVar34;
        lVar41 = 0x79;
        if ((*(byte *)(lVar42 + 8) & 3) != 0) {
          lVar41 = 0x71;
        }
        local_216 = (*(byte *)(lVar41 + lVar42) & 3) != 0;
        if ((*(byte *)(lVar41 + lVar42) & 3) != 0) break;
        FVar34 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar34 + 8);
      }
    }
    pbVar28 = TGeometryParticlesImp<double,3,0>::HasCollision
                        ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                         (int)param_2->_padding_);
    *pbVar28 = local_216;
    if (local_216 == false) {
      pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      FVar5.Idx = pFVar29->Idx;
      pFVar30 = FPendingSpatialDataQueue::FindOrAdd
                          ((FPendingSpatialDataQueue *)&pFVar46->_padding_,FVar5,Delete);
      pFVar30->Operation = Delete;
      pFVar32 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      pFVar30->SpatialIdx = *pFVar32;
      ppTVar31 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                           ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                            (int)param_2->_padding_);
      local_160 = *ppTVar31;
      pTStack_158 = param_2;
      pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      local_150 = pFVar29->Idx;
      FStack_14c.Word2 = 0;
      FStack_14c.Word3 = 0;
      FStack_14c.Word0 = 0;
      FStack_14c.Word1 = 0;
      FStack_13c.Word2 = 0;
      FStack_13c.Word3 = 0;
      FStack_13c.Word0 = 0;
      FStack_13c.Word1 = 0;
      local_12c = local_12c & 0xffffff00;
      if ((local_150 == -1) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564217994>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FAccelerationStructureHandle::
      ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_14c);
      FAccelerationStructureHandle::
      ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (param_2,&FStack_13c);
      local_12c = CONCAT31(local_12c._1_3_,1);
      (pFVar30->AccelerationHandle).ExternalGeometryParticle = local_160;
      (pFVar30->AccelerationHandle).GeometryParticleHandle = pTStack_158;
      (pFVar30->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_150;
      (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_14c.Word0;
      (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_14c.Word1;
      (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_14c.Word2;
      *(ulonglong *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3 =
           CONCAT44(FStack_13c.Word0,FStack_14c.Word3);
      (pFVar30->AccelerationHandle).UnionSimFilterData.Word1 = FStack_13c.Word1;
      (pFVar30->AccelerationHandle).UnionSimFilterData.Word2 = FStack_13c.Word2;
      *(ulonglong *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3 =
           CONCAT44(local_12c,FStack_13c.Word3);
      FPendingSpatialInternalDataQueue::Remove
                ((FPendingSpatialInternalDataQueue *)&pFVar46->_padding_,FVar5);
      (**(code **)(*(longlong *)pFVar46->_padding_ + 0x88))
                ((longlong *)pFVar46->_padding_,pFVar30,pFVar30->SpatialIdx);
    }
    else {
      FPBDRigidsEvolutionGBF::DestroyTransientConstraints(pFVar46,param_2);
      pTVar38 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      pTVar39 = pTVar38;
      if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
        pTVar39 = param_2;
      }
      if ((pTVar39 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (bVar16 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39), bVar16)) {
        pTVar39 = pTVar38;
        if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
          pTVar39 = param_2;
        }
        if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        pCVar24 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar39->_padding_,
                             (int)pTVar39->_padding_);
        pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
        if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        if (2 < *(byte *)((longlong)&pTVar39->_padding_ + 4)) {
          pTVar38 = pTVar39;
        }
        if (pTVar38 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2113888976451403243>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                              ,0x215,"false");
          if (!bVar16) {
            return;
          }
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar25 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)pTVar38->_padding_,
                              (int)pTVar38->_padding_)->field0_0x0;
        if ((pFVar25->Bits & 1) == 0) {
          return;
        }
        pIVar26 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_2);
        pIVar27 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar38);
        if (pIVar27 != pIVar26) {
          return;
        }
      }
      pbVar28 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                           (int)param_2->_padding_);
      if ((*pbVar28 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FVar5.Idx = pFVar29->Idx;
        pFVar30 = FPendingSpatialInternalDataQueue::Add
                            ((FPendingSpatialInternalDataQueue *)&pFVar46->_padding_,0,FVar5,Add);
        pFVar30->Operation = Update;
        ppTVar31 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                              (int)param_2->_padding_);
        local_198 = *ppTVar31;
        pTStack_190 = param_2;
        pFVar29 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        FStack_184.Word2 = 0;
        FStack_184.Word3 = 0;
        FStack_184.Word0 = 0;
        FStack_184.Word1 = 0;
        FStack_174.Word2 = 0;
        FStack_174.Word3 = 0;
        local_188 = pFVar29->Idx;
        FStack_174.Word0 = 0;
        FStack_174.Word1 = 0;
        local_164 = local_164 & 0xffffff00;
        if ((local_188 == -1) &&
           (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_184);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (param_2,&FStack_174);
        local_164 = CONCAT31(local_164._1_3_,1);
        (pFVar30->AccelerationHandle).ExternalGeometryParticle = local_198;
        (pFVar30->AccelerationHandle).GeometryParticleHandle = pTStack_190;
        (pFVar30->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_188;
        (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_184.Word0;
        (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_184.Word1;
        (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_184.Word2;
        *(ulonglong *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_174.Word0,FStack_184.Word3);
        (pFVar30->AccelerationHandle).UnionSimFilterData.Word1 = FStack_174.Word1;
        (pFVar30->AccelerationHandle).UnionSimFilterData.Word2 = FStack_174.Word2;
        *(ulonglong *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_164,FStack_174.Word3);
        pFVar32 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)param_2->_padding_,
                             (int)param_2->_padding_);
        pFVar30->SpatialIdx = *pFVar32;
        pFVar33 = FPendingSpatialDataQueue::FindOrAdd
                            ((FPendingSpatialDataQueue *)&pFVar46->_padding_,FVar5,Add);
        pTVar39 = (pFVar30->AccelerationHandle).GeometryParticleHandle;
        (pFVar33->AccelerationHandle).ExternalGeometryParticle =
             (pFVar30->AccelerationHandle).ExternalGeometryParticle;
        (pFVar33->AccelerationHandle).GeometryParticleHandle = pTVar39;
        uVar37 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar18 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar19 = (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar33->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar30->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar33->AccelerationHandle).UnionQueryFilterData.Word0 = uVar37;
        (pFVar33->AccelerationHandle).UnionQueryFilterData.Word1 = uVar18;
        (pFVar33->AccelerationHandle).UnionQueryFilterData.Word2 = uVar19;
        uVar37 = (pFVar30->AccelerationHandle).UnionSimFilterData.Word1;
        uVar18 = (pFVar30->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar33->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar33->AccelerationHandle).UnionSimFilterData.Word1 = uVar37;
        (pFVar33->AccelerationHandle).UnionSimFilterData.Word2 = uVar18;
        FVar12 = pFVar30->SpatialIdx;
        uVar13 = *(undefined2 *)&pFVar30->field_0x3a;
        iVar6 = pFVar30->SyncTimestamp;
        *(undefined8 *)&(pFVar33->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar33->SpatialIdx = FVar12;
        *(undefined2 *)&pFVar33->field_0x3a = uVar13;
        pFVar33->SyncTimestamp = iVar6;
        uVar14 = *(undefined7 *)&pFVar30->field_0x41;
        pFVar33->Operation = pFVar30->Operation;
        *(undefined7 *)&pFVar33->field_0x41 = uVar14;
      }
    }
  }
  return;
}

// RegisterSimOneShotCallback<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>_> @ 1440c6ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
RegisterSimOneShotCallback<_Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External_::__l2::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  FSimCallbackCommandObject *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  FSimCallbackCommandObject *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  local_84 = 0;
  pFVar4 = ::operator_new(0xc0);
  pFVar8 = pFVar7;
  if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
    local_78 = (FSimCallbackCommandObject *)0x0;
    puVar5 = FMemory::Malloc(0x38,8);
    pFVar1 = (ForAnyElementType *)(puVar5 + 2);
    *puVar5 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    puVar5[1] = param_1->__this;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    iVar2 = (param_1->Objects).ArrayNum;
    pFVar3 = (param_1->Objects).AllocatorInstance.Data;
    *(int *)(puVar5 + 3) = iVar2;
    local_50 = puVar5;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar5 + 0x1c));
      memcpy(pFVar1->Data,pFVar3,(longlong)iVar2 << 3);
    }
    pFVar1 = (ForAnyElementType *)(puVar5 + 4);
    pFVar1->Data = (FScriptContainerElement *)0x0;
    iVar2 = (param_1->Transforms).ArrayNum;
    pFVar3 = (param_1->Transforms).AllocatorInstance.Data;
    *(int *)(puVar5 + 5) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar5 + 0x2c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar5 + 0x2c));
      memcpy(pFVar1->Data,pFVar3,(longlong)iVar2 * 0x60);
    }
    *(bool *)(puVar5 + 6) = param_1->bLock;
    if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined2 *)&pFVar4->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar4->Func = local_78;
    *(longlong **)&(pFVar4->Func).field_0x28 = local_50;
    local_50 = (longlong *)0x0;
    *(longlong *)&(pFVar4->Func).field_0x10 = local_68;
    *(undefined8 *)&(pFVar4->Func).field_0x18 = uStack_60;
    *(undefined8 *)&(pFVar4->Func).field_0x20 = local_58;
    if (*(longlong *)&pFVar4->Func != 0) {
      local_78 = pFVar7;
    }
    *(undefined8 *)&pFVar4->Func2 = 0;
    *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
    pFVar4->bFuncHasTimeParameters = false;
    pFVar4->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar4->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_88);
    }
    pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar8 = pFVar4;
  }
  if ((pFVar7 != (FSimCallbackCommandObject *)0x0) && (local_78 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar6 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar8);
  return;
}

// RegisterSimOneShotCallback<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>_> @ 1440c6d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
RegisterSimOneShotCallback<_Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External_::__l2::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FSimCallbackCommandObject *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  FSimCallbackCommandObject *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_84 = 0;
  pFVar3 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_78 = (FSimCallbackCommandObject *)0x0;
    puVar4 = FMemory::Malloc(0x28,8);
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    pFVar1 = (ForAnyElementType *)(puVar4 + 2);
    puVar4[1] = param_1->__this;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    iVar2 = (param_1->Objects).ArrayNum;
    _Src = (param_1->Objects).AllocatorInstance.Data;
    *(int *)(puVar4 + 3) = iVar2;
    local_50 = puVar4;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar4 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar4 + 0x1c));
      memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
    }
    *(bool *)(puVar4 + 4) = param_1->bIsMain;
    if (puVar4 + 1 != (undefined8 *)0x0) {
      local_78 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar3->Func = local_78;
    *(longlong **)&(pFVar3->Func).field_0x28 = local_50;
    local_50 = (longlong *)0x0;
    *(longlong *)&(pFVar3->Func).field_0x10 = local_68;
    *(undefined8 *)&(pFVar3->Func).field_0x18 = uStack_60;
    *(undefined8 *)&(pFVar3->Func).field_0x20 = local_58;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_78 = pFVar6;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_88);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar3;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) && (local_78 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar7);
  return;
}

// RemoveArrayItemsAtSortedIndices<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_> @ 1440c6f80

void __cdecl
Chaos::
RemoveArrayItemsAtSortedIndices<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_>
          (TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_2->ArrayNum != 0) {
    uVar8 = 1;
    piVar6 = TArrayView<int_const_,int>::operator[](param_2,0);
    iVar5 = param_2->ArrayNum;
    uVar7 = 1;
    iVar4 = *piVar6;
    if (1 < iVar5) {
      lVar9 = 4;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar5) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = *(int *)(lVar9 + (longlong)param_2->DataPtr);
        if (iVar5 != iVar4) {
          MoveArrayItemsDown<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_>
                    (param_1,iVar4 + 1,iVar5,uVar8);
          uVar8 = uVar8 + 1;
          iVar4 = iVar5;
        }
        iVar5 = param_2->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar7 < iVar5);
    }
    piVar6 = &param_1->ArrayNum;
    MoveArrayItemsDown<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_>
              (param_1,iVar4 + 1,param_1->ArrayNum,uVar8);
    iVar5 = *piVar6;
    uVar7 = iVar5 - uVar8;
    if (iVar5 < (int)uVar7) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7 - iVar5,&param_1->AllocatorInstance,piVar6,&param_1->ArrayMax);
      memset((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8,0,
             (longlong)(int)(uVar7 - iVar5) << 3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar5) {
        if (((int)(uVar7 | uVar8) < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
          iVar5 = (*piVar6 - uVar7) - uVar8;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar5 << 3);
          }
          *piVar6 = *piVar6 - uVar8;
        }
      }
    }
  }
  return;
}

// RemoveParticlesFromClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>_> @ 1440c7170

void __cdecl
Chaos::
RemoveParticlesFromClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>_>
          (TPBDRigidParticle<double,3> *param_1,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FImplicitObjectUnionClustered *pFVar9;
  FImplicitObjectUnionClustered *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  IPhysicsProxyBase *pIVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  int local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  TArrayView<int_const_,int> local_60;
  TArrayView<int_const_,int> local_50;
  
  if (param_1 == (TPBDRigidParticle<double,3> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2774167660508741233>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                       ,399,"ClusterParticle");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((*(int *)&param_1->field_0x90 != 0) && (param_3->ArrayNum != 0)) {
      if ((param_3->ArrayNum != *(int *)&param_1->field_0x90) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllChildParticles.Num() == ClusterParticle->ShapesArray().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                             ,0x1a6,
                             L"RemoveParticlesFromClusterUnionGeometry : More than one shape per child particle : ShapeArray=[%d] AllChildParticles=[%d] ShapeParticles=[%d]"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = param_2->ArrayNum;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar2,&local_70,0,(int *)((longlong)&local_68 + 4));
      }
      pFVar14 = (param_2->AllocatorInstance).Data;
      iVar3 = param_2->ArrayNum;
      pFVar1 = pFVar14 + (longlong)iVar3 * 8;
LAB_1440c7296:
      do {
        if (param_2->ArrayNum != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::TPBDRigidParticle<double,3>_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar14 == pFVar1) {
          local_res8 = SUB81(param_1,0);
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                    ((int *)local_70.Data,(int)local_68,local_res8,(TLess<void> *)local_78);
          local_60.ArrayNum = (int)local_68;
          local_60.DataPtr = (int *)local_70.Data;
          if (((int)local_68 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TGeometryParticle<double,3>::RemoveShapesAtSortedIndices
                    ((TGeometryParticle<double,3> *)param_1,&local_60);
          local_50.ArrayNum = (int)local_68;
          local_50.DataPtr = (int *)local_70.Data;
          if (((int)local_68 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          RemoveArrayItemsAtSortedIndices<TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_>_>
                    (param_3,&local_50);
          if ((param_3->ArrayNum != *(int *)&param_1->field_0x90) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllChildParticles.Num() == ClusterParticle->ShapesArray().Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                                 ,0x1cb,
                                 L"RemoveParticlesFromClusterUnionGeometry : More than one shape per child particle : ShapeArray=[%d] AllChildParticles=[%d] ShapeParticles=[%d]"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data);
          }
          break;
        }
        lVar12 = *(longlong *)pFVar14;
        if ((lVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShapeParticle != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ClusterUnionManager.h"
                               ,0x1ae,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_3->AllocatorInstance).Data;
        for (pFVar8 = pFVar4; pFVar8 != pFVar4 + (longlong)param_3->ArrayNum * 8;
            pFVar8 = pFVar8 + 8) {
          if (*(longlong *)pFVar8 == lVar12) {
            local_74 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3);
            if (local_74 == -1) goto LAB_1440c7307;
            if (((local_70.Data <= (FScriptContainerElement *)&local_74) &&
                ((FScriptContainerElement *)&local_74 < local_70.Data + (longlong)local_68._4_4_ * 4
                )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((int)local_68 == local_68._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_70,(int *)((longlong)&local_68 + 4));
              local_68 = CONCAT44(local_68._4_4_,iVar7);
            }
            lVar12 = (longlong)(int)local_68;
            pFVar14 = pFVar14 + 8;
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
            *(int *)(local_70.Data + lVar12 * 4) = local_74;
            goto LAB_1440c7296;
          }
        }
        local_74 = -1;
LAB_1440c7307:
        pFVar14 = pFVar14 + 8;
      } while( true );
    }
    pFVar10 = (FImplicitObjectUnionClustered *)0x0;
    if (*(int *)&param_1->field_0x90 == 0) {
      pFVar9 = ::operator_new(0xd0);
      if ((pFVar9 == (FImplicitObjectUnionClustered *)0x0) ||
         (pFVar10 = FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(pFVar9),
         pFVar10 == (FImplicitObjectUnionClustered *)0x0)) {
        pIVar13 = *(IPhysicsProxyBase **)&param_1->field_0x10;
        plVar11 = (longlong *)&DAT_00000008;
      }
      else {
        plVar11 = &pFVar10->_padding_;
        LOCK();
        *(int *)plVar11 = (int)*plVar11 + 1;
        UNLOCK();
        pIVar13 = *(IPhysicsProxyBase **)&param_1->field_0x10;
        LOCK();
        *(int *)plVar11 = (int)*plVar11 + 1;
        UNLOCK();
      }
      pFVar9 = *(FImplicitObjectUnionClustered **)&param_1->field_0x50;
      if (pFVar9 != pFVar10) {
        *(FImplicitObjectUnionClustered **)&param_1->field_0x50 = pFVar10;
        if (pFVar10 != (FImplicitObjectUnionClustered *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if (pFVar9 != (FImplicitObjectUnionClustered *)0x0) {
          LOCK();
          plVar11 = &pFVar9->_padding_;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if (((int)lVar12 == 1) && (*(int *)((longlong)&pFVar9->_padding_ + 4) == 0)) {
            (**(code **)pFVar9->_padding_)(pFVar9,1);
          }
        }
      }
      if (pFVar10 != (FImplicitObjectUnionClustered *)0x0) {
        LOCK();
        plVar11 = &pFVar10->_padding_;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if (((int)lVar12 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
      *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 0x10;
      if ((pIVar13 != (IPhysicsProxyBase *)0x0) && (pIVar13->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar13->Solver,pIVar13);
      }
      TGeometryParticle<double,3>::UpdateShapesArray((TGeometryParticle<double,3> *)param_1);
      if (pFVar10 != (FImplicitObjectUnionClustered *)0x0) {
        LOCK();
        plVar11 = &pFVar10->_padding_;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if (((int)lVar12 == 1) && (*(int *)((longlong)&pFVar10->_padding_ + 4) == 0)) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
    }
  }
  return;
}

// ToStringHelper<Chaos::TRigidTransform<double,3>_> @ 1440c75f0

FString * __cdecl
Chaos::ToStringHelper<Chaos::TRigidTransform<double,3>_>
          (FString *__return_storage_ptr__,TVector<Chaos::TRigidTransform<double,3>,2> *param_1)

{
  FString local_28;
  FString local_18;
  
  UE::Math::TTransform<double>::ToString((TTransform<double> *)(param_1->V + 1),&local_18);
  UE::Math::TTransform<double>::ToString((TTransform<double> *)param_1,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"(%s, %s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToStringHelper<Chaos::TRotation<double,3>_> @ 1440c76a0

FString * __cdecl
Chaos::ToStringHelper<Chaos::TRotation<double,3>_>
          (FString *__return_storage_ptr__,TRotation<double,3> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  return __return_storage_ptr__;
}

// ToStringHelper<Chaos::TVector<float,3>_> @ 1440c76e0

FString * __cdecl
Chaos::ToStringHelper<Chaos::TVector<float,3>_>
          (FString *__return_storage_ptr__,TVector<float,3> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToStringHelper<Chaos::TVector<double,3>_> @ 1440c7730

FString * __cdecl
Chaos::ToStringHelper<Chaos::TVector<double,3>_>
          (FString *__return_storage_ptr__,TVector<double,3> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToStringHelper<Chaos::FRigidParticleControlFlags> @ 1440c7780

FString * __cdecl
Chaos::ToStringHelper<Chaos::FRigidParticleControlFlags>
          (FString *__return_storage_ptr__,FRigidParticleControlFlags *param_1)

{
  FRigidParticleControlFlags::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TransferClusterUnionShapeData<Chaos::TPBDRigidParticle<double,3>_> @ 1440c77b0

void __cdecl
Chaos::TransferClusterUnionShapeData<Chaos::TPBDRigidParticle<double,3>_>
          (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *param_1,
          TPBDRigidParticle<double,3> *param_2,
          TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *param_3,
          int param_4,int param_5)

{
  TVector<double,3> *this;
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  FPerShapeData *pFVar4;
  FPerShapeData *pFVar5;
  IPhysicsProxyBase *pIVar6;
  FShapeInstanceProxy *this_00;
  FShapeInstance *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  FCollisionFilterData *pFVar15;
  FChaosPhysicsMaterial *pFVar16;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar17;
  FShapeInstance *pFVar18;
  FMaterialData *this_01;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined4 local_res8 [2];
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_98 [2];
  FMaterialHandle local_90 [2];
  FCollisionFilterData local_88;
  FCollisionFilterData local_78;
  FCollisionFilterData local_68;
  longlong local_58;
  FImplicitObject *pFStack_50;
  FImplicitObject *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pFVar4 = param_1->Ptr;
  if ((pFVar4 != (FPerShapeData *)0x0) && (pFVar5 = param_3->Ptr, pFVar5 != (FPerShapeData *)0x0)) {
    lVar20 = 0x50;
    lVar19 = 0x50;
    if (pFVar5->Type != 0) {
      lVar19 = 0x48;
    }
    uStack_30 = *(undefined8 *)(&(pFVar5->WorldSpaceShapeBounds).MMin.field_0x10 + lVar19);
    plVar1 = (longlong *)((longlong)&pFVar5->_padding_ + lVar19);
    local_58 = *plVar1;
    pFStack_50 = (FImplicitObject *)plVar1[1];
    puVar2 = (undefined8 *)((longlong)&(pFVar5->Geometry).Reference + lVar19);
    local_48 = (FImplicitObject *)*puVar2;
    uStack_40 = puVar2[1];
    local_38 = 0;
    if (pFVar4->Type == 0) {
      pIVar6 = (IPhysicsProxyBase *)pFVar4[1]._padding_;
      *(longlong *)&pFVar4[1].field_0x8 = local_58;
      pFVar4[1].Geometry.Reference = pFStack_50;
      *(FImplicitObject **)&pFVar4[1].WorldSpaceShapeBounds.MMin = local_48;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x8 = uStack_40;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x10 = 0;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMax = uStack_30;
      uVar21 = (pFVar4->DirtyFlags).Bits;
      (pFVar4->DirtyFlags).Bits = uVar21 | 1;
      if (((uVar21 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxyShape(pIVar6->Solver,pIVar6,pFVar4->ShapeIdx);
      }
    }
    else {
      pFVar4[1]._padding_ = local_58;
      *(FImplicitObject **)&pFVar4[1].field_0x8 = pFStack_50;
      pFVar4[1].Geometry.Reference = local_48;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMin = uStack_40;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x8 = 0;
      *(undefined8 *)&pFVar4[1].WorldSpaceShapeBounds.MMin.field_0x10 = uStack_30;
    }
    lVar19 = 0x50;
    if (param_3->Ptr->Type != 0) {
      lVar19 = 0x48;
    }
    pFVar15 = FCollisionData::GetQueryData
                        ((FCollisionData *)((longlong)&param_3->Ptr->_padding_ + lVar19));
    pFVar4 = param_1->Ptr;
    uVar9 = pFVar15->Word1;
    local_78.Word2 = pFVar15->Word2;
    local_78.Word3 = pFVar15->Word3;
    local_78.Word1 = uVar9;
    local_78.Word0 = param_4;
    if (pFVar4->Type == 0) {
      pIVar6 = *(IPhysicsProxyBase **)&pFVar4[1]._padding_;
      local_68.Word0 = param_4;
      local_68.Word1 = uVar9;
      local_68._8_8_ = local_78._8_8_;
      FCollisionData::SetQueryData((FCollisionData *)&pFVar4[1].field_0x8,&local_68);
      uVar21 = (pFVar4->DirtyFlags).Bits;
      (pFVar4->DirtyFlags).Bits = uVar21 | 1;
      if (((uVar21 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxyShape(pIVar6->Solver,pIVar6,pFVar4->ShapeIdx);
      }
    }
    else {
      FCollisionData::SetQueryData((FCollisionData *)(pFVar4 + 1),&local_78);
    }
    if (param_3->Ptr->Type != 0) {
      lVar20 = 0x48;
    }
    pFVar15 = FCollisionData::GetSimData
                        ((FCollisionData *)((longlong)&param_3->Ptr->_padding_ + lVar20));
    this_00 = (FShapeInstanceProxy *)param_1->Ptr;
    uVar10._0_4_ = pFVar15->Word0;
    uVar10._4_4_ = pFVar15->Word1;
    uVar11 = pFVar15->Word3;
    uVar21 = 0;
    local_88._0_8_ = uVar10 & 0xffffffff00000000;
    local_88.Word3 = uVar11;
    local_88.Word2 = param_5;
    if ((this_00->_padding_ & 3) == 0) {
      FShapeInstanceProxy::SetSimData(this_00,&local_88);
    }
    else {
      FCollisionData::SetSimData((FCollisionData *)&this_00->Proxy,&local_88);
    }
    pFVar4 = param_3->Ptr;
    if (pFVar4->Type == 0) {
      uVar21 = *(uint *)&pFVar4[1].WorldSpaceShapeBounds.MMax.field_0x10;
    }
    else {
      this = &pFVar4[1].WorldSpaceShapeBounds.MMax;
      if (pFVar4->bIsSingleMaterial == 0) {
        lVar19 = *(longlong *)this;
        if (lVar19 != 0) {
          uVar21 = *(uint *)(lVar19 + 8);
        }
      }
      else {
        pFVar16 = FMaterialHandle::Get((FMaterialHandle *)this);
        uVar21 = (uint)(pFVar16 != (FChaosPhysicsMaterial *)0x0);
      }
    }
    if (uVar21 == 1) {
      pFVar18 = (FShapeInstance *)param_1->Ptr;
      local_res8[0] = 0;
      pTVar17 = &FPerShapeData::DownCast<_Chaos::FPerShapeData::GetMaterial_::__l2::<lambda_1>_>
                           (param_3->Ptr,(<lambda_1> *)local_res8)->InnerHandle;
      local_98[0] = *pTVar17;
      if ((pFVar18->_padding_ & 3) == 0) {
        lVar19 = pFVar18->_padding_;
        pFVar7 = pFVar18 + 1;
        pIVar6 = *(IPhysicsProxyBase **)&(pFVar18->CollisionData).QueryData;
        piVar12 = (int *)((longlong)&pFVar18[1]._padding_ + 4);
        iVar14 = *piVar12;
        *(undefined4 *)&pFVar18[1]._padding_ = 0;
        if (iVar14 < 1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,(ForAnyElementType *)pFVar7,0,piVar12);
        }
        if ((((THandle<Chaos::FChaosPhysicsMaterial,24,8> *)pFVar7->_padding_ <= local_98) &&
            (local_98 < (THandle<Chaos::FChaosPhysicsMaterial,24,8> *)pFVar7->_padding_ + *piVar12))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (int)pFVar18[1]._padding_;
        if (iVar14 == *piVar12) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar7,piVar12);
        }
        *(int *)&pFVar18[1]._padding_ = iVar14 + 1;
        *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(pFVar7->_padding_ + (longlong)iVar14 * 4) =
             local_98[0];
        uVar21 = *(uint *)((longlong)&pFVar18->_padding_ + 4);
        *(uint *)((longlong)&pFVar18->_padding_ + 4) = uVar21 | 2;
        if (((uVar21 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
           (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxyShape(pIVar6->Solver,pIVar6,(uint)lVar19 >> 3);
        }
      }
      else {
        local_90[0].InnerHandle = local_98[0];
        FShapeInstance::SetMaterialImpl(pFVar18,local_90);
      }
    }
    else if (1 < (int)uVar21) {
      pFVar18 = (FShapeInstance *)param_3->Ptr;
      pFVar7 = (FShapeInstance *)param_1->Ptr;
      if ((pFVar18->_padding_ & 3) == 0) {
        pFVar18 = pFVar18 + 1;
      }
      else {
        pFVar18 = (FShapeInstance *)FShapeInstance::GetMaterialDataImpl(pFVar18);
      }
      if ((pFVar7->_padding_ & 3) == 0) {
        lVar19 = pFVar7->_padding_;
        pIVar6 = *(IPhysicsProxyBase **)&(pFVar7->CollisionData).QueryData;
        TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1),
                   (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)pFVar18);
        uVar21 = *(uint *)((longlong)&pFVar7->_padding_ + 4);
        *(uint *)((longlong)&pFVar7->_padding_ + 4) = uVar21 | 2;
        if (((uVar21 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
           (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxyShape(pIVar6->Solver,pIVar6,(uint)lVar19 >> 3);
        }
      }
      else {
        this_01 = FShapeInstance::GetMaterialDataImpl(pFVar7);
        TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                  (&this_01->Materials,
                   (TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)pFVar18);
      }
    }
  }
  return;
}

// ValidateParticle<Chaos::TPBDRigidParticleHandleImp<double,3,0>_*> @ 1440c7b90

bool __cdecl
ValidateParticle<Chaos::TPBDRigidParticleHandleImp<double,3,0>_*>
          (EFieldObjectType param_1,TPBDRigidParticleHandleImp<double,3,0> **param_2)

{
  bool bVar1;
  
  if (((*param_2)->field_0xc == '\x06') || ((*param_2)->field_0xc == '\x03')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (1 < param_1 - Field_Object_All) {
    if (param_1 == Field_Object_Rigid) {
      if (bVar1) {
        return false;
      }
    }
    else {
      if (param_1 != Field_Object_Destruction) {
        return false;
      }
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// ValidateParticle<Chaos::TParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>_> @ 1440c7bd0

bool __cdecl
ValidateParticle<Chaos::TParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>_>
          (EFieldObjectType param_1,
          TParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *param_2)

{
  bool bVar1;
  
  Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)param_2);
  if ((param_2->field_0x1c == '\x06') || (param_2->field_0x1c == '\x03')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (1 < param_1 - Field_Object_All) {
    if (param_1 == Field_Object_Rigid) {
      if (bVar1) {
        return false;
      }
    }
    else {
      if (param_1 != Field_Object_Destruction) {
        return false;
      }
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// ValidateParticle<Chaos::TParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_> @ 1440c7c40

bool __cdecl
ValidateParticle<Chaos::TParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
          (EFieldObjectType param_1,
          TParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *param_2)

{
  bool bVar1;
  
  Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
  RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                      param_2);
  if ((param_2->field_0x1c == '\x06') || (param_2->field_0x1c == '\x03')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (1 < param_1 - Field_Object_All) {
    if (param_1 == Field_Object_Rigid) {
      if (bVar1) {
        return false;
      }
    }
    else {
      if (param_1 != Field_Object_Destruction) {
        return false;
      }
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// ValidateParticle<Chaos::TParticleIterator<Chaos::TPBDRigidParticles<double,3>_>_> @ 1440c7cb0

bool __cdecl
ValidateParticle<Chaos::TParticleIterator<Chaos::TPBDRigidParticles<double,3>_>_>
          (EFieldObjectType param_1,TParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *param_2
          )

{
  bool bVar1;
  
  Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)param_2);
  if ((param_2->field_0x1c == '\x06') || (param_2->field_0x1c == '\x03')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (1 < param_1 - Field_Object_All) {
    if (param_1 == Field_Object_Rigid) {
      if (bVar1) {
        return false;
      }
    }
    else {
      if (param_1 != Field_Object_Destruction) {
        return false;
      }
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// VisitCollisions<`Chaos::FRewindData::StepNonResimParticles'::__l33::<lambda_10>_> @ 1440c7d20

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

ECollisionVisitorResult __thiscall
Chaos::FParticlePairMidPhase::
VisitCollisions<_Chaos::FRewindData::StepNonResimParticles_::__l33::<lambda_10>_>
          (FParticlePairMidPhase *this,<lambda_10> *param_1,ECollisionVisitorFlags param_2)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  FPBDCollisionConstraint *pFVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  ECollisionVisitorResult EVar8;
  longlong lVar9;
  uint uVar10;
  FParticlePairMidPhase *pFVar11;
  int iVar12;
  TGeometryParticleHandleImp<double,3,1> **ppTVar13;
  FParticlePairMidPhase *pFVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  undefined1 local_a8 [4];
  int local_a4;
  FParticlePairMidPhase *local_a0;
  int iStack_98;
  uint uStack_94;
  TGeometryParticleHandleImp<double,3,1> **local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  FParticlePairMidPhase *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (this->MidPhaseType == ShapePair) {
    fVar2 = this[2].CullDistanceScale;
    pFVar11 = (FParticlePairMidPhase *)this[2].Particle1;
    if ((FParticlePairMidPhase *)this[2].Particle1 == (FParticlePairMidPhase *)0x0) {
      pFVar11 = this + 1;
    }
    pFVar14 = (FParticlePairMidPhase *)((longlong)(int)fVar2 * 0x58 + (longlong)pFVar11);
    while( true ) {
      if (this[2].CullDistanceScale != fVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FSingleShapePairCollisionDetector,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (pFVar11 == pFVar14) break;
      pFVar4 = (FPBDCollisionConstraint *)pFVar11->Particle0;
      if (pFVar4 != (FPBDCollisionConstraint *)0x0) {
        if ((param_2 & VisitDisabled) == VisitActiveAwake) {
          bVar6 = *(byte *)&pFVar4->Flags >> 1 & 1;
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
            if (bVar6 == 0) goto LAB_1440c7dd9;
          }
          else {
            if (bVar6 == 0) goto LAB_1440c7de5;
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_1440c7dd4;
          }
        }
        else {
LAB_1440c7dd4:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_1440c7dd9:
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_1440c7e00;
          }
LAB_1440c7de5:
          if (((param_2 & VisitExpired) != VisitActiveAwake) || ((*(byte *)&pFVar4->Flags & 1) != 0)
             ) {
            FPBDCollisionConstraint::UpdateParticleTransform
                      ((FPBDCollisionConstraint *)pFVar11->Particle0,param_1->GeometryParticle);
          }
        }
      }
LAB_1440c7e00:
      pFVar11 = (FParticlePairMidPhase *)&pFVar11[1].Particle1;
    }
  }
  if (this->MidPhaseType == Generic) {
    iVar12 = *(int *)&this[1].ParticlePairKey.Key;
    local_90 = &this[1].Particle0;
    iStack_98 = 0;
    pFVar11 = this + 1;
    uStack_94 = 1;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar12 != 0) {
      ppTVar13 = *(TGeometryParticleHandleImp<double,3,1> ***)&this[1].CullDistanceScale;
      if (*(TGeometryParticleHandleImp<double,3,1> ***)&this[1].CullDistanceScale ==
          (TGeometryParticleHandleImp<double,3,1> **)0x0) {
        ppTVar13 = local_90;
      }
      uVar10 = *(uint *)ppTVar13;
      while (uVar10 == 0) {
        lVar9 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1440c7ea2;
        uVar10 = *(uint *)((longlong)ppTVar13 + lVar9 * 4 + 4);
      }
      uStack_94 = -uVar10 & uVar10;
      uVar1 = (ulonglong)uStack_94 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_a4 = (int)lVar9;
      iStack_84 = local_a4 + -1 + local_80;
      if (iVar12 < iStack_84) {
LAB_1440c7ea2:
        iStack_84 = iVar12;
      }
    }
    uVar10 = *(uint *)&this[1].ParticlePairKey.Key;
    iStack_78 = *(int *)&this[1].MidPhaseType - this[1].NumActiveConstraints;
    uVar15 = uVar10 & 0xffffffe0;
    uStack_88 = 0xffffffff;
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    iVar12 = (int)uVar10 >> 5;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    local_a0 = pFVar11;
    iStack_7c = iStack_84;
    local_70 = pFVar11;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_90;
    if (((int)uVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar8 = (*pcVar5)();
      return EVar8;
    }
    uVar3 = *(uint *)&this[1].ParticlePairKey.Key;
    if (uVar10 != uVar3) {
      ppTVar13 = &this[1].Particle0;
      if (*(TGeometryParticleHandleImp<double,3,1> ***)&this[1].CullDistanceScale !=
          (TGeometryParticleHandleImp<double,3,1> **)0x0) {
        ppTVar13 = *(TGeometryParticleHandleImp<double,3,1> ***)&this[1].CullDistanceScale;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)ppTVar13 + (longlong)iVar12 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar10 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1440c7fa0;
        uVar10 = *(uint *)((longlong)ppTVar13 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar10) {
        uVar10 = uVar3;
      }
    }
LAB_1440c7fa0:
    do {
      pFVar14 = local_70;
      if (*(int *)&local_70->MidPhaseType - local_70->NumActiveConstraints != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<Chaos::FPBDCollisionConstraint,Chaos::TObjectPoolDeleter<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
      }
      if (((TStack_68.CurrentBitIndex == uVar10) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&this[1].Particle0)) &&
         (pFVar14 == pFVar11)) break;
      lVar9 = (longlong)TStack_68.CurrentBitIndex * 0x20 + pFVar14->_padding_;
      pFVar4 = *(FPBDCollisionConstraint **)(lVar9 + 0x10);
      if (pFVar4 != (FPBDCollisionConstraint *)0x0) {
        if ((param_2 & VisitDisabled) == VisitActiveAwake) {
          bVar6 = *(byte *)&pFVar4->Flags >> 1 & 1;
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
            if (bVar6 == 0) goto LAB_1440c801c;
          }
          else {
            if (bVar6 == 0) goto LAB_1440c8028;
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_1440c8017;
          }
        }
        else {
LAB_1440c8017:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_1440c801c:
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_1440c8047;
          }
LAB_1440c8028:
          if (((param_2 & VisitExpired) != VisitActiveAwake) || ((*(byte *)&pFVar4->Flags & 1) != 0)
             ) {
            FPBDCollisionConstraint::UpdateParticleTransform
                      (*(FPBDCollisionConstraint **)(lVar9 + 0x10),param_1->GeometryParticle);
          }
        }
      }
LAB_1440c8047:
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    } while( true );
  }
  if (this->MidPhaseType != SphereApproximation) {
    return Continue;
  }
  pFVar4 = *(FPBDCollisionConstraint **)&this[2].ParticleCollisionsIndex0;
  if (pFVar4 == (FPBDCollisionConstraint *)0x0) {
    return Continue;
  }
  if ((param_2 & VisitDisabled) == VisitActiveAwake) {
    bVar6 = *(byte *)&pFVar4->Flags >> 1 & 1;
    if ((param_2 & VisitDefault) != VisitActiveAwake) {
      if (bVar6 == 0) goto LAB_1440c80d3;
      bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
      if (!bVar7) {
        return Continue;
      }
      goto LAB_1440c80c2;
    }
    if (bVar6 != 0) {
      return Continue;
    }
  }
  else {
LAB_1440c80c2:
    if ((param_2 & VisitDefault) != VisitActiveAwake) goto LAB_1440c80d3;
  }
  bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
  if (bVar7) {
    return Continue;
  }
LAB_1440c80d3:
  if (((param_2 & VisitExpired) != VisitActiveAwake) || ((*(byte *)&pFVar4->Flags & 1) != 0)) {
    FPBDCollisionConstraint::UpdateParticleTransform(pFVar4,param_1->GeometryParticle);
  }
  return Continue;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>,1,1> @ 1440ccef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::`2'::<lambda_1>,1,1>
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

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>,1,1> @ 1440ccf10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>,1,1> @ 1440ccf50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::`2'::<lambda_1>,1,1>
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

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>,1,1> @ 1440ccf70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,1,0> @ 1440ccfb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>,1,1> @ 1440ccfd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::SetMass_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,1,0> @ 1440ccff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::SetObjectState_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,1,0> @ 1440cd010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::Wake_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,1,0> @ 1440cd030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_3>,0,0> @ 1440cd050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_Chaos::FRewindData::RegisterEvolutionCallbacks_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>,0,0> @ 1440cd070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_Chaos::FRewindData::RegisterEvolutionCallbacks_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 1440cef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>::operator()'::__l5
::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  FClusterUnionPhysicsProxy *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTasks>
  FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BufferClusterResultsTasks ==
        (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTasks>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_BufferClusterResultsTasks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferClusterResultsTasks,*pFVar10,
                 L"STAT_BufferClusterResultsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_BufferClusterResultsTasks;
  if (StatPtr_STAT_BufferClusterResultsTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTasks>
       )0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_BufferClusterResultsTasks");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferClusterResults(Chaos::FPullPhysicsData_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferClusterResultsTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferClusterResultsTasks,
                          *pFVar10,L"STAT_BufferClusterResultsTasks","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x98);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1440cf0f3;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_1440cf0f3:
  uVar15 = (ulonglong)*(int *)this;
  if (*(int *)this < *(int *)((longlong)this + 4)) {
    lVar16 = uVar15 * 8;
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar2[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((longlong)this + 0x10);
      this_00 = *(FClusterUnionPhysicsProxy **)(lVar16 + *plVar2);
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar3[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Chaos::FClusterUnionPhysicsProxy::BufferPhysicsResults_Internal
                (this_00,(FDirtyClusterUnionData *)((longlong)(int)uVar14 * 0xf0 + *plVar3));
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar16 = lVar16 + 8;
    } while ((int)(uVar14 + 1) < *(int *)((longlong)this + 4));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 1440cf3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTasks>
  FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BufferGCResultsTasks ==
        (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTasks>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_BufferGCResultsTasks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferGCResultsTasks,*pFVar10,
                 L"STAT_BufferGCResultsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_BufferGCResultsTasks;
  if (StatPtr_STAT_BufferGCResultsTasks ==
      (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTasks>
       )0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_BufferGCResultsTasks");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__public:_void___cdecl_Chaos::Private::FTaskDispatcherSolver::BufferGCResults(Chaos::FPullPhysicsData_*,Chaos::FPBDRigidsSolver_*)_::_2_::<lambda_1>::operator()(void)const_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_BufferGCResultsTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferGCResultsTasks,*pFVar10,
                          L"STAT_BufferGCResultsTasks","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\TaskDispatcherSolver.cpp"
                   ,0x71);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1440cf523;
    }
  }
  bVar6 = false;
  FVar13 = local_70;
LAB_1440cf523:
  uVar15 = (ulonglong)*(int *)this;
  if (*(int *)this < *(int *)((longlong)this + 4)) {
    lVar16 = uVar15 * 8;
    do {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar2[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((longlong)this + 0x18);
      this_00 = *(FGeometryCollectionPhysicsProxy **)(lVar16 + *plVar2);
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar3[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FGeometryCollectionPhysicsProxy::BufferPhysicsResults_Internal
                (this_00,*(FPBDRigidsSolver **)((longlong)this + 8),
                 (FDirtyGeometryCollectionData *)((longlong)(int)uVar14 * 0x20 + *plVar3));
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar16 = lVar16 + 8;
    } while ((int)(uVar14 + 1) < *(int *)((longlong)this + 4));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 1440cf7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>'::__l9::<lambda_1>::operator()
          (void *this,TVector<double,3> *param_1,TGeometryParticleHandleImp<double,3,1> *param_2,
          int *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  bool *pbVar14;
  TRigidTransform<double,3> *pTVar15;
  ClusterId *pCVar16;
  TRotation<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  longlong lVar20;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  TGeometryParticleHandleImp<double,3,1> *local_238;
  double local_230;
  double dStack_228;
  double local_220;
  TRotation<double,3> local_218;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_268;
  pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar19 = pTVar21;
  if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar19 = param_2;
  }
  local_238 = param_2;
  if ((pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pbVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19), *pbVar14 == true)) {
    pTVar15 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::ChildToParent
                        ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar19);
    local_1f8.Rotation.XY.m128d_f64[0] = *(double *)pTVar15;
    local_1f8.Rotation.XY.m128d_f64[1] = *(double *)&pTVar15->field_0x8;
    local_1f8.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar15->field_0x10;
    local_1f8.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar15->field_0x18;
    local_1f8.Translation.XY.m128d_f64[0] = *(double *)&pTVar15->field_0x20;
    local_1f8.Translation.XY.m128d_f64[1] = *(double *)&pTVar15->field_0x28;
    local_1f8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar15->field_0x30;
    local_1f8.Translation.ZW.m128d_f64[1] = *(double *)&pTVar15->field_0x38;
    local_1f8.Scale3D.XY.m128d_f64[0] = *(double *)&pTVar15->field_0x40;
    local_1f8.Scale3D.XY.m128d_f64[1] = *(double *)&pTVar15->field_0x48;
    local_1f8.Scale3D.ZW.m128d_f64[0] = *(double *)&pTVar15->field_0x50;
    local_1f8.Scale3D.ZW.m128d_f64[1] = *(double *)&pTVar15->field_0x58;
    pCVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar19->_padding_,
                         (int)pTVar19->_padding_);
    if (pCVar16->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pCVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar19->_padding_,
                           (int)pTVar19->_padding_);
      pTVar19 = pTVar21;
      lVar20 = local_240;
      if (2 < *(byte *)((longlong)
                        &((TGeometryParticleHandleImp<double,3,1> *)pCVar16->Id)->_padding_ + 4)) {
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)pCVar16->Id;
      }
      while (pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar5 = (uint)pTVar19->_padding_;
        lVar6 = pTVar19->_padding_;
        iVar4 = *(int *)(lVar6 + 0x2e0);
        local_240 = (longlong)iVar4;
        uVar12 = 0;
        if ((int)uVar5 < iVar4) {
          uVar12 = ~uVar5 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_248 = (longlong)(int)uVar5,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , lVar20 = local_240, bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_240 = lVar20;
        if (*(char *)(*(longlong *)(lVar6 + 0x2d8) + 0xd + (longlong)(int)uVar5 * 0x10) == '\0') {
          pbVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
          if (*pbVar14 == false) {
            pTVar17 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetQ
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19,&local_218);
            pTVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
            local_d8.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar17->field_0x10;
            local_d8.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar17->field_0x18;
            local_d8.Rotation.XY.m128d_f64[0] = *(double *)pTVar17;
            local_d8.Rotation.XY.m128d_f64[1] = *(double *)&pTVar17->field_0x8;
            local_d8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar18->field_0x10;
            local_d8.Translation.XY.m128d_f64[0] = *(double *)pTVar18;
            local_d8.Translation.XY.m128d_f64[1] = *(double *)&pTVar18->field_0x8;
            local_d8.Translation.ZW.m128d_f64[1] = 0.0;
            local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
            local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
            local_138.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_138.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_138.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_138.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
            local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
            local_138.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_138.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_138.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_138.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_138,&local_1f8,&local_d8);
            *(double *)param_1 = local_138.Translation.XY.m128d_f64[0];
            *(double *)&param_1->field_0x8 = local_138.Translation.XY.m128d_f64[1];
            *(double *)&param_1->field_0x10 = local_138.Translation.ZW.m128d_f64[0];
            local_230 = local_138.Translation.XY.m128d_f64[0];
            dStack_228 = local_138.Translation.XY.m128d_f64[1];
            local_220 = local_138.Translation.ZW.m128d_f64[0];
          }
          break;
        }
        uVar5 = (uint)pTVar19->_padding_;
        lVar20 = pTVar19->_padding_;
        iVar4 = *(int *)(lVar20 + 0x5e0);
        uVar12 = 0;
        if ((int)uVar5 < iVar4) {
          uVar12 = ~uVar5 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_248 = (longlong)(int)uVar5, local_240 = (longlong)iVar4,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_198.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_198,&local_1f8,
                   (TTransform<double> *)
                   ((longlong)(int)uVar5 * 0x60 + *(longlong *)(lVar20 + 0x5d8)));
        local_1f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
        local_1f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
        local_1f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
        local_1f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
        local_1f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
        local_1f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
        local_1f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
        local_1f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
        local_1f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
        local_1f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
        local_1f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
        local_1f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
        pCVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar19->_padding_,
                             (int)pTVar19->_padding_);
        if (pCVar16->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
        pCVar16 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar19->_padding_,
                             (int)pTVar19->_padding_);
        pTVar19 = pTVar21;
        lVar20 = local_240;
        if (2 < *(byte *)((longlong)
                          &((TGeometryParticleHandleImp<double,3,1> *)pCVar16->Id)->_padding_ + 4))
        {
          pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)pCVar16->Id;
        }
      }
    }
  }
  lVar20 = *(longlong *)((longlong)this + 8);
  dVar2 = *(double *)param_1;
  if (((((*(double *)(lVar20 + 0x20) <= dVar2 && dVar2 != *(double *)(lVar20 + 0x20)) &&
        (dVar2 < *(double *)(lVar20 + 0x38))) &&
       (dVar2 = *(double *)&param_1->field_0x8,
       *(double *)(lVar20 + 0x28) <= dVar2 && dVar2 != *(double *)(lVar20 + 0x28))) &&
      ((dVar2 < *(double *)(lVar20 + 0x40) &&
       (dVar2 = *(double *)&param_1->field_0x10,
       *(double *)(lVar20 + 0x30) <= dVar2 && dVar2 != *(double *)(lVar20 + 0x30))))) &&
     (dVar2 < *(double *)(lVar20 + 0x48))) {
    uVar5 = *param_3;
    lVar20 = (longlong)(int)uVar5;
    plVar7 = *(longlong **)this;
    uVar9 = *(undefined8 *)param_1;
    uVar10 = *(undefined8 *)&param_1->field_0x8;
    iVar4 = (int)plVar7[1];
    local_240 = (longlong)iVar4;
    uVar3 = *(undefined8 *)&param_1->field_0x10;
    uVar13 = 0;
    uVar12 = uVar13;
    if ((int)uVar5 < iVar4) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (local_248 = lVar20,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar6 = *plVar7;
    puVar1 = (undefined8 *)(lVar6 + lVar20 * 0x18);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    *(undefined8 *)(lVar6 + 0x10 + lVar20 * 0x18) = uVar3;
    uVar5 = *param_3;
    lVar20 = *(longlong *)this;
    iVar4 = *(int *)(lVar20 + 0x18);
    local_240 = (longlong)iVar4;
    uVar12 = uVar13;
    if ((int)uVar5 < iVar4) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_248 = (longlong)(int)uVar5;
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
    *(ulonglong *)(*(longlong *)(lVar20 + 0x10) + (longlong)(int)uVar5 * 8) = CONCAT44(uVar5,uVar5);
    uVar5 = *param_3;
    plVar7 = *(longlong **)((longlong)this + 0x10);
    iVar4 = (int)plVar7[1];
    local_240 = (longlong)iVar4;
    if ((int)uVar5 < iVar4) {
      uVar13 = ~uVar5 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_248 = (longlong)(int)uVar5,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(TGeometryParticleHandleImp<double,3,1> **)(*plVar7 + (longlong)(int)uVar5 * 8) = local_238;
    *param_3 = *param_3 + 1;
  }
  return;
}

// `scalar_deleting_destructor' @ 1440d0a20

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0a90

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0b00

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0b70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0be0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0c50

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0cc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0d00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0d40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Chaos::Private::FTaskDispatcherSolver::BufferClusterResults'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0d80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Chaos::Private::FTaskDispatcherSolver::BufferGCResults'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0dc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0e00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Chaos::Private::FTaskDispatcherSolver::BufferRigidResults'::__l18::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d0ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d10b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d10f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1170

void * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints>::
_scalar_deleting_destructor_
          (TIndexedContainerConstraintHandle<Chaos::FPBDPositionConstraints> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FConstraintHandle_Chaos__6B_;
  if (*(longlong *)&this->field_0x10 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d11e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FClusterUnionProxyTimestamp,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FClusterUnionProxyTimestamp,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyTimestampBase,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyTimestampBase,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1260

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSingleParticleProxyTimestamp,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSingleParticleProxyTimestamp,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d12a0

void * __thiscall
TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp>::
_scalar_deleting_destructor_
          (TPhysicsProxy<Chaos::FClusterUnionPhysicsProxy,void,FClusterUnionProxyTimestamp> *this,
          uint param_1)

{
  *(undefined ***)this =
       &___7__TPhysicsProxy_VFClusterUnionPhysicsProxy_Chaos__XUFClusterUnionProxyTimestamp____6B_;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d12f0

void * __thiscall
TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase>::
_scalar_deleting_destructor_
          (TPhysicsProxy<FSkeletalMeshPhysicsProxy,FSkeletalMeshPhysicsProxyOutputs,FProxyTimestampBase>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFSkeletalMeshPhysicsProxy__UFSkeletalMeshPhysicsProxyOutputs__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1340

void * __thiscall
TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase>::
_scalar_deleting_destructor_
          (TPhysicsProxy<FStaticMeshPhysicsProxy,FStubSkeletalMeshData,FProxyTimestampBase> *this,
          uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFStaticMeshPhysicsProxy__UFStubSkeletalMeshData__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1390

void * __thiscall
Chaos::FCharacterGroundConstraintProxy::_scalar_deleting_destructor_
          (FCharacterGroundConstraintProxy *this,uint param_1)

{
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d13d0

void * __thiscall
Chaos::FClusterUnionPhysicsProxy::_scalar_deleting_destructor_
          (FClusterUnionPhysicsProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FProxyInterpolationBase *pFVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  
  pFVar1 = (this->GeometryChildParticles_External).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->InterpolationData).Ptr;
  if (pFVar2 != (FProxyInterpolationBase *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar1 = (this->SyncedData_External).ChildParticles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar3 = (this->Particle_External).Ptr;
  if (pTVar3 != (TPBDRigidParticle<double,3> *)0x0) {
    (*(code *)**(undefined8 **)pTVar3)(pTVar3,1);
  }
  FPhysicsObjectDeleter::operator()
            ((FPhysicsObjectDeleter *)&this->PhysicsObject,(this->PhysicsObject).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitData).DebugName.SharedReferenceCount.ReferenceController);
  this->_padding_ =
       (longlong)
       &___7__TPhysicsProxy_VFClusterUnionPhysicsProxy_Chaos__XUFClusterUnionProxyTimestamp____6B_;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1490

void * __thiscall
Chaos::FJointConstraintPhysicsProxy::_scalar_deleting_destructor_
          (FJointConstraintPhysicsProxy *this,uint param_1)

{
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d14d0

void * __thiscall
Chaos::FPBDPositionConstraintHandle::_scalar_deleting_destructor_
          (FPBDPositionConstraintHandle *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FConstraintHandle_Chaos__6B_;
  if (*(longlong *)&this->field_0x10 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1540

void * __thiscall
FProxyInterpolationBase::_scalar_deleting_destructor_(FProxyInterpolationBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FProxyInterpolationBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1580

void * __thiscall
FProxyInterpolationError::_scalar_deleting_destructor_(FProxyInterpolationError *this,uint param_1)

{
  FErrorInterpolationSettings *pFVar1;
  
  *(undefined ***)this = &___7FProxyInterpolationError__6B_;
  pFVar1 = (this->ErrorInterpolationSettings).Ptr;
  if (pFVar1 != (FErrorInterpolationSettings *)0x0) {
    ::operator_delete(pFVar1,0x24);
  }
  *(undefined ***)this = &___7FProxyInterpolationBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d15e0

void * __thiscall
FProxyInterpolationErrorVelocity::_scalar_deleting_destructor_
          (FProxyInterpolationErrorVelocity *this,uint param_1)

{
  *(undefined ***)this = &___7FProxyInterpolationError__6B_;
  if (*(void **)&this->field_0x90 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x90,0x24);
  }
  *(undefined ***)this = &___7FProxyInterpolationBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1640

void * __thiscall
Chaos::FSingleParticlePhysicsProxy::_scalar_deleting_destructor_
          (FSingleParticlePhysicsProxy *this,uint param_1)

{
  FProxyInterpolationBase *pFVar1;
  TGeometryParticle<double,3> *pTVar2;
  
  this->_padding_ = (longlong)&___7FSingleParticlePhysicsProxy_Chaos__6B_;
  pFVar1 = (this->InterpolationData).Ptr;
  if (pFVar1 != (FProxyInterpolationBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)&this->Reference,(this->Reference).Ptr)
  ;
  pTVar2 = (this->Particle).Ptr;
  if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
    (**(code **)pTVar2->_padding_)(pTVar2,1);
  }
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d16c0

void * __thiscall
FSkeletalMeshPhysicsProxy::_scalar_deleting_destructor_
          (FSkeletalMeshPhysicsProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshPhysicsProxy__6B_;
  pFVar1 = (this->Parameters).Triangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parameters).MeshVertexPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBoneHierarchy::~FBoneHierarchy(&(this->Parameters).BoneHierarchy);
  pFVar1 = (this->Parameters).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)
       &
       ___7__TPhysicsProxy_VFSkeletalMeshPhysicsProxy__UFSkeletalMeshPhysicsProxyOutputs__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d1750

void * __thiscall
FStaticMeshPhysicsProxy::_scalar_deleting_destructor_(FStaticMeshPhysicsProxy *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFStaticMeshPhysicsProxy__UFStubSkeletalMeshData__UFProxyTimestampBase____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1440d17a0

void * __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::_scalar_deleting_destructor_
          (FSuspensionConstraintPhysicsProxy *this,uint param_1)

{
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// AddClusterChildren @ 1440d1d90

void __cdecl
AddClusterChildren(TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *param_1,FPBDRigidsSolver *param_2,
                  TPBDRigidClusteredParticleHandleImp<double,3,0> *param_3)

{
  undefined8 *puVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ClusterId *pCVar9;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar10;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  uint uVar12;
  undefined1 *puVar13;
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this;
  undefined8 *puVar14;
  undefined1 local_res18 [8];
  undefined8 local_28 [2];
  
  if ((param_3 != (TPBDRigidClusteredParticleHandleImp<double,3,0> *)0x0) &&
     (pCVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                         (*(TPBDRigidClusteredParticles<double,3> **)param_3,
                          *(int *)&param_3->field_0x8), pCVar9->NumChildren != 0)) {
    pFVar2 = (param_2->MEvolution).Ptr;
    this = &(pFVar2->Clustering).MChildren;
    pTVar10 = Chaos::TPBDRigidClusteredParticles<double,3>::Handle
                        (*(TPBDRigidClusteredParticles<double,3> **)param_3,
                         *(int *)&param_3->field_0x8);
    uVar12 = ((uint)((ulonglong)pTVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar10 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    if (*(int *)&(pFVar2->Clustering).MChildren.field_0x8 !=
        *(int *)&(pFVar2->Clustering).MChildren.field_0x34) {
      puVar13 = *(undefined1 **)&(pFVar2->Clustering).MChildren.field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(pFVar2->Clustering).MChildren.field_0x38;
      }
      iVar7 = *(int *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(pFVar2->Clustering).MChildren.field_0x48 - 1U &
                      (uVar12 >> 0x10 ^ uVar12)) * 4);
      if (iVar7 != -1) {
        lVar3 = *(longlong *)&this->field_0x0;
        while (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)((longlong)iVar7 * 0x20 + lVar3)
               != pTVar10) {
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
          if (iVar7 == -1) {
            return;
          }
        }
        pTVar10 = Chaos::TPBDRigidClusteredParticles<double,3>::Handle
                            (*(TPBDRigidClusteredParticles<double,3> **)param_3,
                             *(int *)&param_3->field_0x8);
        pTVar11 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this,pTVar10);
        if ((pTVar11 ==
             (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
              *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar14 = *(undefined8 **)&pTVar11->field_0x8;
        iVar7 = *(int *)&pTVar11->field_0x10;
        puVar1 = puVar14 + iVar7;
        while( true ) {
          if (*(int *)&pTVar11->field_0x10 != iVar7) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (puVar14 == puVar1) break;
          local_28[0] = *puVar14;
          pFVar4 = (param_1->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = param_1->ArrayNum;
          if (iVar8 == param_1->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
            param_1->ArrayNum = iVar8;
          }
          puVar14 = puVar14 + 1;
          param_1->ArrayNum = iVar8 + 1;
          *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
        }
      }
    }
  }
  return;
}

// ComputeFieldLinearImpulseInternal @ 1440d84e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ComputeFieldLinearImpulseInternal
          (FFieldExecutionDatas *param_1,double param_2,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  FFieldExecutionDatas *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity> FVar20;
  FThreadStats *this;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce> FVar22;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined1 *puVar24;
  FStatMessage *pFVar25;
  uint uVar26;
  FNameEntryId FVar27;
  uint uVar28;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *this_00;
  FName FVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  undefined1 auStackY_298 [32];
  uint local_224;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_220;
  int local_218;
  int local_214;
  ForAnyElementType local_210;
  int local_208;
  int local_204;
  FScriptContainerElement *local_200;
  FColor_u_0 local_1f8;
  FColor_u_0 local_1f4;
  FFieldExecutionDatas *local_1f0;
  FName local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  FName local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  FName local_1c8;
  FName local_1b8;
  longlong local_1a8;
  LARGE_INTEGER local_1a0;
  LARGE_INTEGER local_198;
  TFieldArrayView<FFieldContextIndex> local_190;
  TFieldArrayView<FFieldContextIndex> local_180;
  FStatMessage local_170;
  TFieldArrayView<FFieldContextIndex> local_160;
  TFieldArrayView<FFieldContextIndex> local_150;
  FStatMessage local_140;
  FName local_130;
  FName local_128 [2];
  undefined1 local_118 [104];
  undefined4 local_b0;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_a8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar28 = param_3->ArrayNum;
  if (uVar28 != 0) {
    uVar26 = 0;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_204 = 0;
    local_1f0 = param_1;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    local_224 = 0;
    if (0 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar28,&local_210,0,&local_204);
      do {
        uVar31 = 0;
        if ((int)uVar26 < param_3->ArrayNum) {
          uVar31 = ~uVar26 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar33 = (param_3->AllocatorInstance).Data;
        lVar30 = (longlong)(int)uVar26 * 200;
        this_00 = (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                   *)(pFVar33 + lVar30 + 0x78);
        local_200 = pFVar33;
        local_1a8 = lVar30;
        if (*(int *)&this_00->field_0x8 != *(int *)&this_00->field_0x34) {
          puVar24 = &this_00->field_0x38;
          if (*(undefined1 **)&this_00->field_0x40 != (undefined1 *)0x0) {
            puVar24 = *(undefined1 **)&this_00->field_0x40;
          }
          iVar16 = *(int *)(puVar24 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & 5) * 4);
          if (iVar16 != -1) {
            do {
              if (*(int *)(*(longlong *)this_00 + (longlong)iVar16 * 0x18) == 5) {
                pTVar18 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                          ::FindChecked(this_00,ECommandData_Filter);
                if (pTVar18->Ptr != (FFieldSystemMetaData *)0x0) {
                  pTVar18 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                            ::FindChecked(this_00,ECommandData_Filter);
                  iVar16 = *(int *)&pTVar18->Ptr[1].field_0x4;
                  if ((iVar16 != 1) && (1 < iVar16 - 4U)) goto LAB_1440d92c4;
                }
                break;
              }
              iVar16 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar16 * 0x18);
            } while (iVar16 != -1);
          }
        }
        FFieldContext::FFieldContext
                  ((FFieldContext *)local_118,param_1,this_00,
                   param_2 - (double)*(float *)(pFVar33 + lVar30 + 0x18));
        iVar16 = (**(code **)(**(longlong **)(pFVar33 + lVar30 + 8) + 8))();
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if (iVar16 != 4) goto LAB_1440d9286;
        iVar16 = (param_1->SamplePositions).ArrayNum;
        pTVar2 = param_1->VectorResults;
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(pTVar2,iVar16,No);
        uVar26 = 0;
        if (0 < iVar16) {
          lVar32 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar26 < param_1->VectorResults[0].ArrayNum) {
              uVar31 = ~uVar26 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            uVar26 = uVar26 + 1;
            pFVar3 = pFVar5 + lVar32;
            *(undefined8 *)pFVar3 = uVar4;
            *(undefined8 *)(pFVar3 + 8) = uVar9;
            *(undefined8 *)(pFVar5 + lVar32 + 0x10) = uVar10;
            lVar32 = lVar32 + 0x18;
            lVar30 = local_1a8;
          } while ((int)uVar26 < iVar16);
        }
        local_214 = param_1->VectorResults[0].ArrayNum;
        uVar26 = 0;
        local_218 = 0;
        local_220 = pTVar2;
        if (*(int *)(pFVar33 + lVar30 + 0x58) == 5) {
          FVar20 = StatPtr_STAT_ParamUpdateField_LinearVelocity;
          if (StatPtr_STAT_ParamUpdateField_LinearVelocity ==
              (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)0x0) {
            pFVar19 = FName::FName(&local_130,"STAT_ParamUpdateField_LinearVelocity");
            FVar20 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ParamUpdateField_LinearVelocity,*pFVar19,
                                L"[Field Update] LinearVelocity","STATGROUP_Chaos",
                                "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          FVar29 = *(FName *)FVar20;
          bVar14 = false;
          bVar11 = false;
          local_1c8.ComparisonIndex.Value = 0;
          local_1c8.Number = 0;
          bVar13 = false;
          bVar15 = false;
          FVar27 = FVar29.ComparisonIndex.Value;
          uVar31 = FVar29.Number;
          if ((FVar27.Value == 0) && (uVar31 == 0)) {
LAB_1440d88a2:
            bVar11 = bVar15;
            bVar14 = bVar13;
            bVar13 = false;
            FVar29 = local_1c8;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_1f8.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
              bVar14 = false;
              bVar11 = true;
              bVar13 = false;
              bVar15 = true;
              if (-1 < CpuChannel->Enabled) {
                local_1e8.ComparisonIndex.Value = FVar27.Value;
                local_1e8.Number = uVar31;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                           ,0x154);
                bVar14 = true;
                bVar11 = true;
                bVar13 = true;
                bVar15 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_1440d88a2;
            local_1e0 = FVar27.Value;
            uStack_1dc = uVar31;
            local_1c8 = FVar29;
            FThreadStats::AddMessage(FVar29,CycleScopeStart);
            bVar13 = true;
          }
          pFVar12 = local_1f0;
          (**(code **)(**(longlong **)(local_200 + lVar30 + 8) + 0x50))
                    (*(longlong **)(local_200 + lVar30 + 8),local_118);
          if (pFVar12->FieldOutputs[1].ArrayNum == 0) {
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      (pFVar12->FieldOutputs + 1,local_214,No);
            if ((local_a8.Ptr)->bCullingActive == false) {
              pTVar23 = local_118._0_8_;
              iVar16 = local_118._12_4_;
              local_190.ElementArray =
                   (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
              local_190.ArrayOffset = local_118._8_4_;
              local_190.ArrayNum = local_118._12_4_;
              uVar31 = local_118._8_4_;
            }
            else {
              local_190.ArrayOffset = 0;
              pTVar23 = (local_a8.Ptr)->CullingIndices;
              local_190.ElementArray = pTVar23;
              iVar16 = pTVar23->ArrayNum;
              local_190.ArrayNum = iVar16;
              uVar31 = uVar26;
            }
            pFVar33 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar31 * 8;
            pFVar3 = pFVar33 + (longlong)iVar16 * 8;
            iVar16 = local_214;
            for (; pFVar33 != pFVar3; pFVar33 = pFVar33 + 8) {
              if (((int)*(uint *)pFVar33 < pFVar12->FieldOutputs[1].ArrayNum) &&
                 (uVar31 = *(uint *)(pFVar33 + 4), (int)uVar31 < iVar16)) {
                uVar17 = uVar26;
                if ((int)uVar31 < iVar16) {
                  uVar17 = ~uVar31 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                        ,0x50,
                                        L"Array index out of bounds: %i from an array of size %i"),
                   bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar2 = local_220;
                uVar31 = uVar31 + local_218;
                uVar17 = uVar26;
                if ((int)uVar31 < local_220->ArrayNum) {
                  uVar17 = ~uVar31 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar17 = *(uint *)pFVar33;
                pFVar6 = (pTVar2->AllocatorInstance).Data;
                pFVar5 = pFVar6 + (longlong)(int)uVar31 * 0x18;
                uVar9 = *(undefined8 *)pFVar5;
                uVar10 = *(undefined8 *)(pFVar5 + 8);
                uVar4 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar31 * 0x18 + 0x10);
                uVar31 = uVar26;
                if ((int)uVar17 < pFVar12->FieldOutputs[1].ArrayNum) {
                  uVar31 = ~uVar17 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = pFVar12->FieldOutputs[1].AllocatorInstance.Data;
                pFVar5 = pFVar6 + (longlong)(int)uVar17 * 0x18;
                *(undefined8 *)pFVar5 = uVar9;
                *(undefined8 *)(pFVar5 + 8) = uVar10;
                *(undefined8 *)(pFVar6 + (longlong)(int)uVar17 * 0x18 + 0x10) = uVar4;
                iVar16 = local_214;
              }
            }
          }
          else {
            if ((local_a8.Ptr)->bCullingActive == false) {
              pTVar23 = local_118._0_8_;
              iVar16 = local_118._12_4_;
              uVar26 = local_118._8_4_;
              local_180.ElementArray =
                   (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
              local_180.ArrayOffset = local_118._8_4_;
              local_180.ArrayNum = local_118._12_4_;
            }
            else {
              local_180.ArrayOffset = 0;
              pTVar23 = (local_a8.Ptr)->CullingIndices;
              local_180.ElementArray = pTVar23;
              iVar16 = pTVar23->ArrayNum;
              local_180.ArrayNum = iVar16;
            }
            pFVar33 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar26 * 8;
            pFVar3 = pFVar33 + (longlong)iVar16 * 8;
            iVar16 = local_214;
            for (; pFVar33 != pFVar3; pFVar33 = pFVar33 + 8) {
              if (((int)*(uint *)pFVar33 < pFVar12->FieldOutputs[1].ArrayNum) &&
                 (uVar26 = *(uint *)(pFVar33 + 4), (int)uVar26 < iVar16)) {
                uVar31 = 0;
                if ((int)uVar26 < iVar16) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                        ,0x50,
                                        L"Array index out of bounds: %i from an array of size %i"),
                   bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar2 = local_220;
                uVar26 = uVar26 + local_218;
                uVar31 = 0;
                if ((int)uVar26 < local_220->ArrayNum) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar5 = (pTVar2->AllocatorInstance).Data;
                lVar30 = (longlong)(int)uVar26;
                uVar26 = *(uint *)pFVar33;
                lVar32 = (longlong)(int)uVar26;
                uVar31 = 0;
                if ((int)uVar26 < pFVar12->FieldOutputs[1].ArrayNum) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = pFVar12->FieldOutputs[1].AllocatorInstance.Data;
                *(double *)(pFVar6 + lVar32 * 0x18) =
                     *(double *)(pFVar6 + lVar32 * 0x18) + *(double *)(pFVar5 + lVar30 * 0x18);
                *(double *)(pFVar6 + lVar32 * 0x18 + 8) =
                     *(double *)(pFVar5 + lVar30 * 0x18 + 8) +
                     *(double *)(pFVar6 + lVar32 * 0x18 + 8);
                *(double *)(pFVar6 + lVar32 * 0x18 + 0x10) =
                     *(double *)(pFVar5 + lVar30 * 0x18 + 0x10) +
                     *(double *)(pFVar6 + lVar32 * 0x18 + 0x10);
                iVar16 = local_214;
              }
            }
          }
          if (bVar11) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar14) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar13) && (FVar29 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              pFVar21 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(pFVar21);
            }
            if (this->bWaitForExplicitFlush < this->ScopeCount) {
              local_170.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
              local_170.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_1a0);
              local_170.StatData.Pad[4] = '\0';
              local_170.StatData.Pad[5] = '\0';
              local_170.StatData.Pad[6] = '\0';
              local_170.StatData.Pad[7] = '\0';
              local_170.StatData.Pad[0] = local_1a0.s.LowPart._0_1_;
              local_170.StatData.Pad[1] = local_1a0.s.LowPart._1_1_;
              local_170.StatData.Pad[2] = local_1a0.s.LowPart._2_1_;
              local_170.StatData.Pad[3] = local_1a0.s.LowPart._3_1_;
              pFVar25 = &local_170;
LAB_1440d9249:
              FThreadStats::AddStatMessage(this,pFVar25);
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
        }
        else {
          if (*(int *)(pFVar33 + lVar30 + 0x58) != 2) goto LAB_1440d9286;
          FVar22 = StatPtr_STAT_ForceUpdateField_LinearForce;
          if (StatPtr_STAT_ForceUpdateField_LinearForce ==
              (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)0x0) {
            pFVar19 = FName::FName(local_128,"STAT_ForceUpdateField_LinearForce");
            FVar22 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ForceUpdateField_LinearForce,*pFVar19,
                                L"[Field Update] LinearForce","STATGROUP_Chaos","STATCAT_Advanced",
                                L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
          }
          FVar29 = *(FName *)FVar22;
          bVar14 = false;
          bVar11 = false;
          local_1b8.ComparisonIndex.Value = 0;
          local_1b8.Number = 0;
          bVar13 = false;
          bVar15 = false;
          FVar27 = FVar29.ComparisonIndex.Value;
          uVar31 = FVar29.Number;
          if ((FVar27.Value == 0) && (uVar31 == 0)) {
LAB_1440d8e15:
            bVar11 = bVar15;
            bVar14 = bVar13;
            bVar13 = false;
            FVar29 = local_1b8;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_1f4.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_1f4._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
              bVar14 = false;
              bVar11 = true;
              bVar13 = false;
              bVar15 = true;
              if (-1 < CpuChannel->Enabled) {
                local_1d8.ComparisonIndex.Value = FVar27.Value;
                local_1d8.Number = uVar31;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                           ,0x15a);
                bVar14 = true;
                bVar11 = true;
                bVar13 = true;
                bVar15 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_1440d8e15;
            local_1d0 = FVar27.Value;
            uStack_1cc = uVar31;
            local_1b8 = FVar29;
            FThreadStats::AddMessage(FVar29,CycleScopeStart);
            bVar13 = true;
          }
          pFVar12 = local_1f0;
          (**(code **)(**(longlong **)(local_200 + lVar30 + 8) + 0x50))
                    (*(longlong **)(local_200 + lVar30 + 8),local_118);
          if (pFVar12->FieldOutputs[0].ArrayNum == 0) {
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      (pFVar12->FieldOutputs,local_214,No);
            if ((local_a8.Ptr)->bCullingActive == false) {
              pTVar23 = local_118._0_8_;
              iVar16 = local_118._12_4_;
              local_160.ElementArray =
                   (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
              local_160.ArrayOffset = local_118._8_4_;
              local_160.ArrayNum = local_118._12_4_;
              uVar31 = local_118._8_4_;
            }
            else {
              local_160.ArrayOffset = 0;
              pTVar23 = (local_a8.Ptr)->CullingIndices;
              local_160.ElementArray = pTVar23;
              iVar16 = pTVar23->ArrayNum;
              local_160.ArrayNum = iVar16;
              uVar31 = uVar26;
            }
            pFVar33 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar31 * 8;
            pFVar3 = pFVar33 + (longlong)iVar16 * 8;
            iVar16 = local_214;
            for (; pFVar33 != pFVar3; pFVar33 = pFVar33 + 8) {
              if (((int)*(uint *)pFVar33 < pFVar12->FieldOutputs[0].ArrayNum) &&
                 (uVar31 = *(uint *)(pFVar33 + 4), (int)uVar31 < iVar16)) {
                uVar17 = uVar26;
                if ((int)uVar31 < iVar16) {
                  uVar17 = ~uVar31 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                        ,0x50,
                                        L"Array index out of bounds: %i from an array of size %i"),
                   bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar2 = local_220;
                uVar31 = uVar31 + local_218;
                uVar17 = uVar26;
                if ((int)uVar31 < local_220->ArrayNum) {
                  uVar17 = ~uVar31 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar17 = *(uint *)pFVar33;
                pFVar6 = (pTVar2->AllocatorInstance).Data;
                pFVar5 = pFVar6 + (longlong)(int)uVar31 * 0x18;
                uVar9 = *(undefined8 *)pFVar5;
                uVar10 = *(undefined8 *)(pFVar5 + 8);
                uVar4 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar31 * 0x18 + 0x10);
                uVar31 = uVar26;
                if ((int)uVar17 < pFVar12->FieldOutputs[0].ArrayNum) {
                  uVar31 = ~uVar17 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = pFVar12->FieldOutputs[0].AllocatorInstance.Data;
                pFVar5 = pFVar6 + (longlong)(int)uVar17 * 0x18;
                *(undefined8 *)pFVar5 = uVar9;
                *(undefined8 *)(pFVar5 + 8) = uVar10;
                *(undefined8 *)(pFVar6 + (longlong)(int)uVar17 * 0x18 + 0x10) = uVar4;
                iVar16 = local_214;
              }
            }
          }
          else {
            if ((local_a8.Ptr)->bCullingActive == false) {
              pTVar23 = local_118._0_8_;
              iVar16 = local_118._12_4_;
              uVar26 = local_118._8_4_;
              local_150.ElementArray =
                   (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
              local_150.ArrayOffset = local_118._8_4_;
              local_150.ArrayNum = local_118._12_4_;
            }
            else {
              local_150.ArrayOffset = 0;
              pTVar23 = (local_a8.Ptr)->CullingIndices;
              local_150.ElementArray = pTVar23;
              iVar16 = pTVar23->ArrayNum;
              local_150.ArrayNum = iVar16;
            }
            pFVar33 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar26 * 8;
            pFVar3 = pFVar33 + (longlong)iVar16 * 8;
            iVar16 = local_214;
            for (; pFVar33 != pFVar3; pFVar33 = pFVar33 + 8) {
              if (((int)*(uint *)pFVar33 < pFVar12->FieldOutputs[0].ArrayNum) &&
                 (uVar26 = *(uint *)(pFVar33 + 4), (int)uVar26 < iVar16)) {
                uVar31 = 0;
                if ((int)uVar26 < iVar16) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                        ,0x50,
                                        L"Array index out of bounds: %i from an array of size %i"),
                   bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar2 = local_220;
                uVar26 = uVar26 + local_218;
                uVar31 = 0;
                if ((int)uVar26 < local_220->ArrayNum) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar5 = (pTVar2->AllocatorInstance).Data;
                lVar30 = (longlong)(int)uVar26;
                uVar26 = *(uint *)pFVar33;
                lVar32 = (longlong)(int)uVar26;
                uVar31 = 0;
                if ((int)uVar26 < pFVar12->FieldOutputs[0].ArrayNum) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = pFVar12->FieldOutputs[0].AllocatorInstance.Data;
                *(double *)(pFVar6 + lVar32 * 0x18) =
                     *(double *)(pFVar6 + lVar32 * 0x18) + *(double *)(pFVar5 + lVar30 * 0x18);
                *(double *)(pFVar6 + lVar32 * 0x18 + 8) =
                     *(double *)(pFVar5 + lVar30 * 0x18 + 8) +
                     *(double *)(pFVar6 + lVar32 * 0x18 + 8);
                *(double *)(pFVar6 + lVar32 * 0x18 + 0x10) =
                     *(double *)(pFVar5 + lVar30 * 0x18 + 0x10) +
                     *(double *)(pFVar6 + lVar32 * 0x18 + 0x10);
                iVar16 = local_214;
              }
            }
          }
          if (bVar11) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar14) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar13) && (FVar29 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              pFVar21 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(pFVar21);
            }
            if (this->bWaitForExplicitFlush < this->ScopeCount) {
              local_140.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
              local_140.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_198);
              local_140.StatData.Pad[4] = '\0';
              local_140.StatData.Pad[5] = '\0';
              local_140.StatData.Pad[6] = '\0';
              local_140.StatData.Pad[7] = '\0';
              local_140.StatData.Pad[0] = local_198.s.LowPart._0_1_;
              local_140.StatData.Pad[1] = local_198.s.LowPart._1_1_;
              local_140.StatData.Pad[2] = local_198.s.LowPart._2_1_;
              local_140.StatData.Pad[3] = local_198.s.LowPart._3_1_;
              pFVar25 = &local_140;
              goto LAB_1440d9249;
            }
          }
        }
LAB_1440d9286:
        if (local_a8.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
          (**(code **)(local_a8.Ptr)->_padding_)(local_a8.Ptr,1);
        }
        local_b0 = 0;
        if ((void *)local_118._96_8_ != (void *)0x0) {
          FMemory::Free((void *)local_118._96_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (local_118 + 0x20);
        param_1 = local_1f0;
LAB_1440d92c4:
        if (((local_210.Data <= (FScriptContainerElement *)&local_224) &&
            ((FScriptContainerElement *)&local_224 < local_210.Data + (longlong)local_204 * 4)) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_208 == local_204) {
          local_208 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_210,&local_204);
        }
        iVar16 = local_208 + 1;
        *(uint *)(local_210.Data + (longlong)local_208 * 4) = local_224;
        uVar26 = local_224 + 1;
        local_224 = uVar26;
        local_208 = iVar16;
      } while ((int)uVar26 < (int)uVar28);
    }
    if ((param_4) && (uVar28 = local_208 - 1, -1 < (int)uVar28)) {
      lVar30 = (longlong)(int)uVar28 * 4;
      do {
        uVar26 = 0;
        if ((int)uVar28 < local_208) {
          uVar26 = ~uVar28 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar26 = *(uint *)(local_210.Data + lVar30);
        uVar31 = 0;
        if ((int)uVar26 < param_3->ArrayNum) {
          uVar31 = ~uVar26 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar33 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar26 * 200;
        *(undefined4 *)(pFVar33 + 0xc0) = 0;
        if (*(void **)(pFVar33 + 0xb8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar33 + 0xb8));
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (pFVar33 + 0x78);
        puVar7 = *(undefined8 **)(pFVar33 + 8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
        iVar16 = param_3->ArrayNum + ~uVar26;
        if (iVar16 != 0) {
          memmove(pFVar33,pFVar33 + 200,(longlong)iVar16 * 200);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
        lVar30 = lVar30 + -4;
        uVar28 = uVar28 - 1;
      } while (-1 < (int)uVar28);
    }
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
  }
  return;
}

// ComputeFieldRigidImpulseInternal @ 1440d96c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ComputeFieldRigidImpulseInternal
          (FFieldExecutionDatas *param_1,double param_2,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  TAtomic<FMinimalName> TVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity> FVar19;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity> FVar20;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  TStatId TVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  FNameEntryId FVar29;
  uint uVar30;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *this_00;
  FName FVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  FFieldExecutionDatas *pFVar36;
  undefined1 auStackY_338 [32];
  uint local_2bc;
  FFieldExecutionDatas *local_2b8;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  FScriptContainerElement *local_290;
  FCycleCounter local_288;
  FColor_u_0 local_278;
  FColor_u_0 local_274;
  FColor_u_0 local_270 [2];
  FName local_268;
  uint local_260;
  uint uStack_25c;
  FName local_258;
  uint local_250;
  uint uStack_24c;
  FName local_248;
  uint local_240;
  uint uStack_23c;
  FName local_238;
  FName local_228;
  FName local_218;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  TFieldArrayView<FFieldContextIndex> local_1f8;
  TFieldArrayView<FFieldContextIndex> local_1e8;
  TFieldArrayView<FFieldContextIndex> local_1d8;
  TFieldArrayView<FFieldContextIndex> local_1c8;
  FStatMessage local_1b8;
  TFieldArrayView<FFieldContextIndex> local_1a8;
  TFieldArrayView<FFieldContextIndex> local_198;
  FStatMessage local_188;
  TFieldArrayView<FFieldContextIndex> local_178;
  TFieldArrayView<FFieldContextIndex> local_168;
  FSourceLocation local_158;
  FName local_130 [2];
  FName local_120;
  undefined1 local_118 [104];
  undefined4 local_b0;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_a8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar30 = param_3->ArrayNum;
  if (uVar30 != 0) {
    iVar16 = 0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_2a0 = 0;
    local_2b8 = param_1;
    local_2b0 = param_3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    local_2bc = 0;
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar30,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
      uVar28 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar28 < param_3->ArrayNum) {
          uVar15 = ~uVar28 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar35 = (param_3->AllocatorInstance).Data;
        lVar33 = (longlong)(int)uVar28 * 200;
        this_00 = (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                   *)(pFVar35 + lVar33 + 0x78);
        local_298 = lVar33;
        local_290 = pFVar35;
        if (*(int *)&this_00->field_0x8 != *(int *)&this_00->field_0x34) {
          puVar26 = &this_00->field_0x38;
          if (*(undefined1 **)&this_00->field_0x40 != (undefined1 *)0x0) {
            puVar26 = *(undefined1 **)&this_00->field_0x40;
          }
          iVar16 = *(int *)(puVar26 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & 5) * 4);
          if (iVar16 != -1) {
            do {
              if (*(int *)(*(longlong *)this_00 + (longlong)iVar16 * 0x18) == 5) {
                pTVar17 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                          ::FindChecked(this_00,ECommandData_Filter);
                if (pTVar17->Ptr != (FFieldSystemMetaData *)0x0) {
                  pTVar17 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                            ::FindChecked(this_00,ECommandData_Filter);
                  iVar16 = *(int *)&pTVar17->Ptr[1].field_0x4;
                  if ((iVar16 != 3) && (1 < iVar16 - 4U)) goto LAB_1440dae49;
                }
                break;
              }
              iVar16 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar16 * 0x18);
            } while (iVar16 != -1);
          }
        }
        FFieldContext::FFieldContext
                  ((FFieldContext *)local_118,param_1,this_00,
                   param_2 - (double)*(float *)(pFVar35 + lVar33 + 0x18));
        iVar16 = (**(code **)(**(longlong **)(pFVar35 + lVar33 + 8) + 8))();
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if (iVar16 == 4) {
          iVar16 = (param_1->SamplePositions).ArrayNum;
          this = param_1->VectorResults;
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this,iVar16,No);
          uVar28 = 0;
          if (0 < iVar16) {
            lVar33 = 0;
            do {
              uVar15 = 0;
              if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                uVar15 = ~uVar28 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar32 = (this->AllocatorInstance).Data;
              uVar28 = uVar28 + 1;
              pFVar35 = pFVar32 + lVar33;
              *(undefined8 *)pFVar35 = uVar4;
              *(undefined8 *)(pFVar35 + 8) = uVar9;
              *(undefined8 *)(pFVar32 + lVar33 + 0x10) = uVar10;
              lVar33 = lVar33 + 0x18;
            } while ((int)uVar28 < iVar16);
          }
          pFVar35 = local_290;
          lVar33 = local_298;
          iVar16 = param_1->VectorResults[0].ArrayNum;
          if (*(int *)(local_290 + local_298 + 0x58) == 5) {
            FVar19 = StatPtr_STAT_ParamUpdateField_LinearVelocity;
            if (StatPtr_STAT_ParamUpdateField_LinearVelocity ==
                (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)0x0) {
              pFVar18 = FName::FName(&local_120,"STAT_ParamUpdateField_LinearVelocity");
              FVar19 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_ParamUpdateField_LinearVelocity,*pFVar18,
                                  L"[Field Update] LinearVelocity","STATGROUP_Chaos",
                                  "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                  MCR_Invalid);
            }
            FVar31 = *(FName *)FVar19;
            bVar13 = false;
            bVar11 = false;
            local_238.ComparisonIndex.Value = 0;
            local_238.Number = 0;
            bVar12 = false;
            bVar14 = false;
            FVar29 = FVar31.ComparisonIndex.Value;
            uVar28 = FVar31.Number;
            if ((FVar29.Value == 0) && (uVar28 == 0)) {
LAB_1440d9a91:
              bVar11 = bVar14;
              bVar13 = bVar12;
              bVar12 = false;
              FVar31 = local_238;
            }
            else {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_278.Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_278._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
                bVar13 = false;
                bVar11 = true;
                bVar12 = false;
                bVar14 = true;
                if (-1 < CpuChannel->Enabled) {
                  local_268.ComparisonIndex.Value = FVar29.Value;
                  local_268.Number = uVar28;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_268,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                             ,0xfa);
                  bVar13 = true;
                  bVar11 = true;
                  bVar12 = true;
                  bVar14 = true;
                }
              }
              if (FThreadStats::bPrimaryEnable == false) goto LAB_1440d9a91;
              local_260 = FVar29.Value;
              uStack_25c = uVar28;
              local_238 = FVar31;
              FThreadStats::AddMessage(FVar31,CycleScopeStart);
              bVar12 = true;
            }
            (**(code **)(**(longlong **)(pFVar35 + lVar33 + 8) + 0x50))
                      (*(longlong **)(pFVar35 + lVar33 + 8),local_118);
            if (param_1->FieldOutputs[1].ArrayNum == 0) {
              TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                        (param_1->FieldOutputs + 1,iVar16,No);
              if ((local_a8.Ptr)->bCullingActive == false) {
                pTVar21 = local_118._0_8_;
                iVar27 = local_118._12_4_;
                iVar25 = local_118._8_4_;
                local_1f8.ElementArray =
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                local_1f8.ArrayOffset = local_118._8_4_;
                local_1f8.ArrayNum = local_118._12_4_;
              }
              else {
                iVar25 = 0;
                local_1f8.ArrayOffset = 0;
                pTVar21 = (local_a8.Ptr)->CullingIndices;
                local_1f8.ElementArray = pTVar21;
                iVar27 = pTVar21->ArrayNum;
                local_1f8.ArrayNum = iVar27;
              }
              pFVar32 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
              pFVar3 = pFVar32 + (longlong)iVar27 * 8;
              for (; pFVar32 != pFVar3; pFVar32 = pFVar32 + 8) {
                if (((int)*(uint *)pFVar32 < param_1->FieldOutputs[1].ArrayNum) &&
                   (uVar28 = *(uint *)(pFVar32 + 4), (int)uVar28 < iVar16)) {
                  uVar15 = 0;
                  if ((int)uVar28 < iVar16) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                          ,0x50,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = 0;
                  if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = *(uint *)pFVar32;
                  pFVar5 = (this->AllocatorInstance).Data;
                  pFVar2 = pFVar5 + (longlong)(int)uVar28 * 0x18;
                  uVar9 = *(undefined8 *)pFVar2;
                  uVar10 = *(undefined8 *)(pFVar2 + 8);
                  uVar4 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar28 * 0x18 + 0x10);
                  uVar28 = 0;
                  if ((int)uVar15 < param_1->FieldOutputs[1].ArrayNum) {
                    uVar28 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar5 = param_1->FieldOutputs[1].AllocatorInstance.Data;
                  pFVar2 = pFVar5 + (longlong)(int)uVar15 * 0x18;
                  *(undefined8 *)pFVar2 = uVar9;
                  *(undefined8 *)(pFVar2 + 8) = uVar10;
                  *(undefined8 *)(pFVar5 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar4;
                }
                lVar33 = local_298;
              }
            }
            else {
              if ((local_a8.Ptr)->bCullingActive == false) {
                pTVar21 = local_118._0_8_;
                iVar27 = local_118._12_4_;
                iVar25 = local_118._8_4_;
                local_1e8.ElementArray =
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                local_1e8.ArrayOffset = local_118._8_4_;
                local_1e8.ArrayNum = local_118._12_4_;
              }
              else {
                iVar25 = 0;
                local_1e8.ArrayOffset = 0;
                pTVar21 = (local_a8.Ptr)->CullingIndices;
                local_1e8.ElementArray = pTVar21;
                iVar27 = pTVar21->ArrayNum;
                local_1e8.ArrayNum = iVar27;
              }
              pFVar32 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
              pFVar3 = pFVar32 + (longlong)iVar27 * 8;
              pFVar35 = local_290;
              for (; local_290 = pFVar35, pFVar32 != pFVar3; pFVar32 = pFVar32 + 8) {
                if (((int)*(uint *)pFVar32 < param_1->FieldOutputs[1].ArrayNum) &&
                   (uVar28 = *(uint *)(pFVar32 + 4), (int)uVar28 < iVar16)) {
                  uVar15 = 0;
                  if ((int)uVar28 < iVar16) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                          ,0x50,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = 0;
                  if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar35 = (this->AllocatorInstance).Data;
                  lVar33 = (longlong)(int)uVar28;
                  uVar28 = *(uint *)pFVar32;
                  lVar34 = (longlong)(int)uVar28;
                  uVar15 = 0;
                  if ((int)uVar28 < param_1->FieldOutputs[1].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar2 = param_1->FieldOutputs[1].AllocatorInstance.Data;
                  *(double *)(pFVar2 + lVar34 * 0x18) =
                       *(double *)(pFVar2 + lVar34 * 0x18) + *(double *)(pFVar35 + lVar33 * 0x18);
                  *(double *)(pFVar2 + lVar34 * 0x18 + 8) =
                       *(double *)(pFVar35 + lVar33 * 0x18 + 8) +
                       *(double *)(pFVar2 + lVar34 * 0x18 + 8);
                  *(double *)(pFVar2 + lVar34 * 0x18 + 0x10) =
                       *(double *)(pFVar35 + lVar33 * 0x18 + 0x10) +
                       *(double *)(pFVar2 + lVar34 * 0x18 + 0x10);
                }
                lVar33 = local_298;
                pFVar35 = local_290;
              }
            }
            if (bVar11) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar13) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            pFVar36 = local_2b8;
            if (bVar12) {
              FThreadStats::AddMessage(FVar31,CycleScopeEnd);
              pFVar36 = local_2b8;
            }
          }
          else {
            pFVar36 = param_1;
            if (*(int *)(local_290 + local_298 + 0x58) == 2) {
              TVar24 = FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_LinearForce,1>::
                       GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_LinearForce,1>
                                  *)&StatPtr_STAT_ForceUpdateField_LinearForce);
              bVar13 = false;
              bVar11 = false;
              local_228.ComparisonIndex.Value = 0;
              local_228.Number = 0;
              bVar12 = false;
              bVar14 = false;
              TVar6 = (TVar24.StatIdPtr)->Name;
              FVar31 = *(FName *)TVar6;
              FVar29 = FVar31.ComparisonIndex.Value;
              uVar28 = FVar31.Number;
              if ((FVar29.Value == 0) && (uVar28 == 0)) {
LAB_1440d9f4a:
                bVar11 = bVar14;
                bVar13 = bVar12;
                bVar12 = false;
                FVar31 = local_228;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_274.Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_274._s_0,(char *)*(FName *)((longlong)TVar6 + 0x10));
                  bVar13 = false;
                  bVar11 = true;
                  bVar12 = false;
                  bVar14 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_258.ComparisonIndex.Value = FVar29.Value;
                    local_258.Number = uVar28;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_258,(wchar_t *)*(FName *)((longlong)TVar6 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                               ,0x100);
                    bVar13 = true;
                    bVar11 = true;
                    bVar12 = true;
                    bVar14 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_1440d9f4a;
                local_250 = FVar29.Value;
                uStack_24c = uVar28;
                local_228 = FVar31;
                FThreadStats::AddMessage(FVar31,CycleScopeStart);
                bVar12 = true;
              }
              (**(code **)(**(longlong **)(pFVar35 + lVar33 + 8) + 0x50))
                        (*(longlong **)(pFVar35 + lVar33 + 8),local_118);
              if (param_1->FieldOutputs[0].ArrayNum == 0) {
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                          (param_1->FieldOutputs,iVar16,No);
                if ((local_a8.Ptr)->bCullingActive == false) {
                  pTVar21 = local_118._0_8_;
                  iVar27 = local_118._12_4_;
                  iVar25 = local_118._8_4_;
                  local_1d8.ElementArray =
                       (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                  local_1d8.ArrayOffset = local_118._8_4_;
                  local_1d8.ArrayNum = local_118._12_4_;
                }
                else {
                  iVar25 = 0;
                  local_1d8.ArrayOffset = 0;
                  pTVar21 = (local_a8.Ptr)->CullingIndices;
                  local_1d8.ElementArray = pTVar21;
                  iVar27 = pTVar21->ArrayNum;
                  local_1d8.ArrayNum = iVar27;
                }
                pFVar32 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
                pFVar3 = pFVar32 + (longlong)iVar27 * 8;
                for (; pFVar32 != pFVar3; pFVar32 = pFVar32 + 8) {
                  if (((int)*(uint *)pFVar32 < param_1->FieldOutputs[0].ArrayNum) &&
                     (uVar28 = *(uint *)(pFVar32 + 4), (int)uVar28 < iVar16)) {
                    uVar15 = 0;
                    if ((int)uVar28 < iVar16) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                            ,0x50,
                                            L"Array index out of bounds: %i from an array of size %i"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = 0;
                    if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = *(uint *)pFVar32;
                    pFVar5 = (this->AllocatorInstance).Data;
                    pFVar2 = pFVar5 + (longlong)(int)uVar28 * 0x18;
                    uVar9 = *(undefined8 *)pFVar2;
                    uVar10 = *(undefined8 *)(pFVar2 + 8);
                    uVar4 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar28 * 0x18 + 0x10);
                    uVar28 = 0;
                    if ((int)uVar15 < param_1->FieldOutputs[0].ArrayNum) {
                      uVar28 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar5 = param_1->FieldOutputs[0].AllocatorInstance.Data;
                    pFVar2 = pFVar5 + (longlong)(int)uVar15 * 0x18;
                    *(undefined8 *)pFVar2 = uVar9;
                    *(undefined8 *)(pFVar2 + 8) = uVar10;
                    *(undefined8 *)(pFVar5 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar4;
                  }
                  lVar33 = local_298;
                }
              }
              else {
                if ((local_a8.Ptr)->bCullingActive == false) {
                  pTVar21 = local_118._0_8_;
                  iVar27 = local_118._12_4_;
                  iVar25 = local_118._8_4_;
                  local_1c8.ElementArray =
                       (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                  local_1c8.ArrayOffset = local_118._8_4_;
                  local_1c8.ArrayNum = local_118._12_4_;
                }
                else {
                  iVar25 = 0;
                  local_1c8.ArrayOffset = 0;
                  pTVar21 = (local_a8.Ptr)->CullingIndices;
                  local_1c8.ElementArray = pTVar21;
                  iVar27 = pTVar21->ArrayNum;
                  local_1c8.ArrayNum = iVar27;
                }
                pFVar32 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
                pFVar3 = pFVar32 + (longlong)iVar27 * 8;
                pFVar35 = local_290;
                for (; local_290 = pFVar35, pFVar32 != pFVar3; pFVar32 = pFVar32 + 8) {
                  if (((int)*(uint *)pFVar32 < param_1->FieldOutputs[0].ArrayNum) &&
                     (uVar28 = *(uint *)(pFVar32 + 4), (int)uVar28 < iVar16)) {
                    uVar15 = 0;
                    if ((int)uVar28 < iVar16) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                            ,0x50,
                                            L"Array index out of bounds: %i from an array of size %i"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = 0;
                    if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar35 = (this->AllocatorInstance).Data;
                    lVar33 = (longlong)(int)uVar28;
                    uVar28 = *(uint *)pFVar32;
                    lVar34 = (longlong)(int)uVar28;
                    uVar15 = 0;
                    if ((int)uVar28 < param_1->FieldOutputs[0].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar2 = param_1->FieldOutputs[0].AllocatorInstance.Data;
                    *(double *)(pFVar2 + lVar34 * 0x18) =
                         *(double *)(pFVar2 + lVar34 * 0x18) + *(double *)(pFVar35 + lVar33 * 0x18);
                    *(double *)(pFVar2 + lVar34 * 0x18 + 8) =
                         *(double *)(pFVar35 + lVar33 * 0x18 + 8) +
                         *(double *)(pFVar2 + lVar34 * 0x18 + 8);
                    *(double *)(pFVar2 + lVar34 * 0x18 + 0x10) =
                         *(double *)(pFVar35 + lVar33 * 0x18 + 0x10) +
                         *(double *)(pFVar2 + lVar34 * 0x18 + 0x10);
                  }
                  lVar33 = local_298;
                  pFVar35 = local_290;
                }
              }
              if (bVar11) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar13) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              pFVar36 = local_2b8;
              if ((((bVar12) && (FVar31 != (FName)0x0)) &&
                  (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar22 == (FThreadStats *)0x0) {
                  pFVar23 = FThreadStatsPool::Get();
                  pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
                }
                pFVar36 = local_2b8;
                if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
                  local_1b8.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
                  local_1b8.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
                  QueryPerformanceCounter(&local_208);
                  local_1b8.StatData.Pad[4] = '\0';
                  local_1b8.StatData.Pad[5] = '\0';
                  local_1b8.StatData.Pad[6] = '\0';
                  local_1b8.StatData.Pad[7] = '\0';
                  local_1b8.StatData.Pad[0] = local_208.s.LowPart._0_1_;
                  local_1b8.StatData.Pad[1] = local_208.s.LowPart._1_1_;
                  local_1b8.StatData.Pad[2] = local_208.s.LowPart._2_1_;
                  local_1b8.StatData.Pad[3] = local_208.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(pFVar22,&local_1b8);
                  piVar1 = &pFVar22->ScopeCount;
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FThreadStats::Flush(pFVar22,false,false);
                    pFVar36 = local_2b8;
                  }
                  else {
                    pFVar36 = local_2b8;
                    if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar22,false,false);
                      pFVar36 = local_2b8;
                    }
                  }
                }
              }
            }
          }
          if (*(int *)(pFVar35 + lVar33 + 0x58) == 6) {
            FVar20 = StatPtr_STAT_ParamUpdateField_AngularVelocity;
            if (StatPtr_STAT_ParamUpdateField_AngularVelocity ==
                (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)0x0) {
              pFVar18 = FName::FName(local_130,"STAT_ParamUpdateField_AngularVelocity");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_ParamUpdateField_AngularVelocity,*pFVar18,
                                  L"[Field Update] AngularVelocity","STATGROUP_Chaos",
                                  "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                  MCR_Invalid);
            }
            FVar31 = *(FName *)FVar20;
            bVar13 = false;
            bVar11 = false;
            local_218.ComparisonIndex.Value = 0;
            local_218.Number = 0;
            bVar12 = false;
            bVar14 = false;
            FVar29 = FVar31.ComparisonIndex.Value;
            uVar28 = FVar31.Number;
            if ((FVar29.Value == 0) && (uVar28 == 0)) {
LAB_1440da508:
              bVar11 = bVar14;
              bVar13 = bVar12;
              bVar12 = false;
              FVar31 = local_218;
            }
            else {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_270[0].Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_270[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10))
                ;
                bVar13 = false;
                bVar11 = true;
                bVar12 = false;
                bVar14 = true;
                if (-1 < CpuChannel->Enabled) {
                  local_248.ComparisonIndex.Value = FVar29.Value;
                  local_248.Number = uVar28;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_248,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                             ,0x106);
                  bVar13 = true;
                  bVar11 = true;
                  bVar12 = true;
                  bVar14 = true;
                }
              }
              if (FThreadStats::bPrimaryEnable == false) goto LAB_1440da508;
              local_240 = FVar29.Value;
              uStack_23c = uVar28;
              local_218 = FVar31;
              FThreadStats::AddMessage(FVar31,CycleScopeStart);
              bVar12 = true;
            }
            (**(code **)(**(longlong **)(pFVar35 + lVar33 + 8) + 0x50))
                      (*(longlong **)(pFVar35 + lVar33 + 8),local_118);
            if (pFVar36->FieldOutputs[3].ArrayNum == 0) {
              TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                        (pFVar36->FieldOutputs + 3,iVar16,No);
              if ((local_a8.Ptr)->bCullingActive == false) {
                pTVar21 = local_118._0_8_;
                iVar27 = local_118._12_4_;
                iVar25 = local_118._8_4_;
                local_1a8.ElementArray =
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                local_1a8.ArrayOffset = local_118._8_4_;
                local_1a8.ArrayNum = local_118._12_4_;
              }
              else {
                iVar25 = 0;
                local_1a8.ArrayOffset = 0;
                pTVar21 = (local_a8.Ptr)->CullingIndices;
                local_1a8.ElementArray = pTVar21;
                iVar27 = pTVar21->ArrayNum;
                local_1a8.ArrayNum = iVar27;
              }
              pFVar35 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
              pFVar32 = pFVar35 + (longlong)iVar27 * 8;
              for (; pFVar35 != pFVar32; pFVar35 = pFVar35 + 8) {
                if (((int)*(uint *)pFVar35 < pFVar36->FieldOutputs[3].ArrayNum) &&
                   (uVar28 = *(uint *)(pFVar35 + 4), (int)uVar28 < iVar16)) {
                  uVar15 = 0;
                  if ((int)uVar28 < iVar16) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                          ,0x50,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = 0;
                  if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = *(uint *)pFVar35;
                  pFVar2 = (this->AllocatorInstance).Data;
                  pFVar3 = pFVar2 + (longlong)(int)uVar28 * 0x18;
                  uVar9 = *(undefined8 *)pFVar3;
                  uVar10 = *(undefined8 *)(pFVar3 + 8);
                  uVar4 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar28 * 0x18 + 0x10);
                  uVar28 = 0;
                  if ((int)uVar15 < pFVar36->FieldOutputs[3].ArrayNum) {
                    uVar28 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar2 = pFVar36->FieldOutputs[3].AllocatorInstance.Data;
                  pFVar3 = pFVar2 + (longlong)(int)uVar15 * 0x18;
                  *(undefined8 *)pFVar3 = uVar9;
                  *(undefined8 *)(pFVar3 + 8) = uVar10;
                  *(undefined8 *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar4;
                }
              }
            }
            else {
              if ((local_a8.Ptr)->bCullingActive == false) {
                pTVar21 = local_118._0_8_;
                iVar27 = local_118._12_4_;
                iVar25 = local_118._8_4_;
                local_198.ElementArray =
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                local_198.ArrayOffset = local_118._8_4_;
                local_198.ArrayNum = local_118._12_4_;
              }
              else {
                iVar25 = 0;
                local_198.ArrayOffset = 0;
                pTVar21 = (local_a8.Ptr)->CullingIndices;
                local_198.ElementArray = pTVar21;
                iVar27 = pTVar21->ArrayNum;
                local_198.ArrayNum = iVar27;
              }
              pFVar35 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
              pFVar32 = pFVar35 + (longlong)iVar27 * 8;
              for (; pFVar35 != pFVar32; pFVar35 = pFVar35 + 8) {
                if (((int)*(uint *)pFVar35 < pFVar36->FieldOutputs[3].ArrayNum) &&
                   (uVar28 = *(uint *)(pFVar35 + 4), (int)uVar28 < iVar16)) {
                  uVar15 = 0;
                  if ((int)uVar28 < iVar16) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                          ,0x50,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = 0;
                  if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar3 = (this->AllocatorInstance).Data;
                  lVar33 = (longlong)(int)uVar28;
                  uVar28 = *(uint *)pFVar35;
                  lVar34 = (longlong)(int)uVar28;
                  uVar15 = 0;
                  if ((int)uVar28 < pFVar36->FieldOutputs[3].ArrayNum) {
                    uVar15 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar2 = pFVar36->FieldOutputs[3].AllocatorInstance.Data;
                  *(double *)(pFVar2 + lVar34 * 0x18) =
                       *(double *)(pFVar3 + lVar33 * 0x18) + *(double *)(pFVar2 + lVar34 * 0x18);
                  *(double *)(pFVar2 + lVar34 * 0x18 + 8) =
                       *(double *)(pFVar3 + lVar33 * 0x18 + 8) +
                       *(double *)(pFVar2 + lVar34 * 0x18 + 8);
                  *(double *)(pFVar2 + lVar34 * 0x18 + 0x10) =
                       *(double *)(pFVar3 + lVar33 * 0x18 + 0x10) +
                       *(double *)(pFVar2 + lVar34 * 0x18 + 0x10);
                }
              }
            }
            if (bVar11) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar13) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            param_3 = local_2b0;
            if ((((bVar12) && (FVar31 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar22 == (FThreadStats *)0x0) {
                pFVar23 = FThreadStatsPool::Get();
                pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
              }
              param_3 = local_2b0;
              if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
                local_188.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
                local_188.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&local_200);
                local_188.StatData.Pad[4] = '\0';
                local_188.StatData.Pad[5] = '\0';
                local_188.StatData.Pad[6] = '\0';
                local_188.StatData.Pad[7] = '\0';
                local_188.StatData.Pad[0] = local_200.s.LowPart._0_1_;
                local_188.StatData.Pad[1] = local_200.s.LowPart._1_1_;
                local_188.StatData.Pad[2] = local_200.s.LowPart._2_1_;
                local_188.StatData.Pad[3] = local_200.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(pFVar22,&local_188);
                piVar1 = &pFVar22->ScopeCount;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FThreadStats::Flush(pFVar22,false,false);
                  param_3 = local_2b0;
                }
                else {
                  param_3 = local_2b0;
                  if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar22,false,false);
                    param_3 = local_2b0;
                  }
                }
              }
            }
          }
          else {
            param_3 = local_2b0;
            if (*(int *)(pFVar35 + lVar33 + 0x58) == 7) {
              TVar24 = FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_AngularTorque,1>::
                       GetStatId((FThreadSafeStaticStatInner<FStat_STAT_ForceUpdateField_AngularTorque,1>
                                  *)&StatPtr_STAT_ForceUpdateField_AngularTorque);
              local_158.Impl._Line = 0x10c;
              local_158.Impl._Column = 7;
              local_158.Impl._File =
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
              ;
              local_158.Impl._Function =
                   "void __cdecl ComputeFieldRigidImpulseInternal(struct FFieldExecutionDatas &,const double,class TArray<class FFieldSystemCommand,class TSizedDefaultAllocator<32> > &,const bool)"
              ;
              local_288.StatId.ComparisonIndex.Value = 0;
              local_288.StatId.Number = 0;
              local_288.EmittedEvent = 0;
              FCycleCounter::Start
                        (&local_288,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,
                         CycleStat|ClearEveryFrame,false,&local_158);
              (**(code **)(**(longlong **)(pFVar35 + lVar33 + 8) + 0x50))
                        (*(longlong **)(pFVar35 + lVar33 + 8),local_118);
              if (pFVar36->FieldOutputs[2].ArrayNum == 0) {
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                          (pFVar36->FieldOutputs + 2,iVar16,No);
                if ((local_a8.Ptr)->bCullingActive == false) {
                  pTVar21 = local_118._0_8_;
                  iVar27 = local_118._12_4_;
                  iVar25 = local_118._8_4_;
                  local_178.ElementArray =
                       (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                  local_178.ArrayOffset = local_118._8_4_;
                  local_178.ArrayNum = local_118._12_4_;
                }
                else {
                  iVar25 = 0;
                  local_178.ArrayOffset = 0;
                  pTVar21 = (local_a8.Ptr)->CullingIndices;
                  local_178.ElementArray = pTVar21;
                  iVar27 = pTVar21->ArrayNum;
                  local_178.ArrayNum = iVar27;
                }
                pFVar35 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
                pFVar32 = pFVar35 + (longlong)iVar27 * 8;
                for (; pFVar35 != pFVar32; pFVar35 = pFVar35 + 8) {
                  if (((int)*(uint *)pFVar35 < pFVar36->FieldOutputs[2].ArrayNum) &&
                     (uVar28 = *(uint *)(pFVar35 + 4), (int)uVar28 < iVar16)) {
                    uVar15 = 0;
                    if ((int)uVar28 < iVar16) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                            ,0x50,
                                            L"Array index out of bounds: %i from an array of size %i"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = 0;
                    if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = *(uint *)pFVar35;
                    pFVar2 = (this->AllocatorInstance).Data;
                    pFVar3 = pFVar2 + (longlong)(int)uVar28 * 0x18;
                    uVar9 = *(undefined8 *)pFVar3;
                    uVar10 = *(undefined8 *)(pFVar3 + 8);
                    uVar4 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar28 * 0x18 + 0x10);
                    uVar28 = 0;
                    if ((int)uVar15 < pFVar36->FieldOutputs[2].ArrayNum) {
                      uVar28 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar2 = pFVar36->FieldOutputs[2].AllocatorInstance.Data;
                    pFVar3 = pFVar2 + (longlong)(int)uVar15 * 0x18;
                    *(undefined8 *)pFVar3 = uVar9;
                    *(undefined8 *)(pFVar3 + 8) = uVar10;
                    *(undefined8 *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar4;
                  }
                }
              }
              else {
                if ((local_a8.Ptr)->bCullingActive == false) {
                  pTVar21 = local_118._0_8_;
                  iVar27 = local_118._12_4_;
                  iVar25 = local_118._8_4_;
                  local_168.ElementArray =
                       (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)local_118._0_8_;
                  local_168.ArrayOffset = local_118._8_4_;
                  local_168.ArrayNum = local_118._12_4_;
                }
                else {
                  iVar25 = 0;
                  local_168.ArrayOffset = 0;
                  pTVar21 = (local_a8.Ptr)->CullingIndices;
                  local_168.ElementArray = pTVar21;
                  iVar27 = pTVar21->ArrayNum;
                  local_168.ArrayNum = iVar27;
                }
                pFVar35 = (pTVar21->AllocatorInstance).Data + (longlong)iVar25 * 8;
                pFVar32 = pFVar35 + (longlong)iVar27 * 8;
                for (; pFVar35 != pFVar32; pFVar35 = pFVar35 + 8) {
                  if (((int)*(uint *)pFVar35 < pFVar36->FieldOutputs[2].ArrayNum) &&
                     (uVar28 = *(uint *)(pFVar35 + 4), (int)uVar28 < iVar16)) {
                    uVar15 = 0;
                    if ((int)uVar28 < iVar16) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                            ,0x50,
                                            L"Array index out of bounds: %i from an array of size %i"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar15 = 0;
                    if ((int)uVar28 < param_1->VectorResults[0].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar3 = (this->AllocatorInstance).Data;
                    lVar33 = (longlong)(int)uVar28;
                    uVar28 = *(uint *)pFVar35;
                    lVar34 = (longlong)(int)uVar28;
                    uVar15 = 0;
                    if ((int)uVar28 < pFVar36->FieldOutputs[2].ArrayNum) {
                      uVar15 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar2 = pFVar36->FieldOutputs[2].AllocatorInstance.Data;
                    *(double *)(pFVar2 + lVar34 * 0x18) =
                         *(double *)(pFVar2 + lVar34 * 0x18) + *(double *)(pFVar3 + lVar33 * 0x18);
                    *(double *)(pFVar2 + lVar34 * 0x18 + 8) =
                         *(double *)(pFVar3 + lVar33 * 0x18 + 8) +
                         *(double *)(pFVar2 + lVar34 * 0x18 + 8);
                    *(double *)(pFVar2 + lVar34 * 0x18 + 0x10) =
                         *(double *)(pFVar3 + lVar33 * 0x18 + 0x10) +
                         *(double *)(pFVar2 + lVar34 * 0x18 + 0x10);
                  }
                }
              }
              if ((local_288.EmittedEvent & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_288.EmittedEvent & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_288.EmittedEvent & 4) != 0) {
                FThreadStats::AddMessage(local_288.StatId,CycleScopeEnd);
              }
              local_288.EmittedEvent = '\0';
              param_3 = local_2b0;
            }
          }
        }
        if (local_a8.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
          (**(code **)(local_a8.Ptr)->_padding_)(local_a8.Ptr,1);
        }
        local_b0 = 0;
        if ((void *)local_118._96_8_ != (void *)0x0) {
          FMemory::Free((void *)local_118._96_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (local_118 + 0x20);
        param_1 = local_2b8;
LAB_1440dae49:
        if (((local_2a8.Data <= (FScriptContainerElement *)&local_2bc) &&
            ((FScriptContainerElement *)&local_2bc < local_2a8.Data + (longlong)local_2a0._4_4_ * 4)
            ) && (bVar13 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar27 = (int)local_2a0;
        if ((int)local_2a0 == local_2a0._4_4_) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        }
        iVar16 = iVar27 + 1;
        local_2a0 = CONCAT44(local_2a0._4_4_,iVar16);
        *(uint *)(local_2a8.Data + (longlong)iVar27 * 4) = local_2bc;
        uVar28 = local_2bc + 1;
        local_2bc = uVar28;
      } while ((int)uVar28 < (int)uVar30);
    }
    if ((param_4) && (uVar30 = iVar16 - 1, -1 < (int)uVar30)) {
      piVar1 = &param_3->ArrayMax;
      lVar33 = (longlong)(int)uVar30 * 4;
      while( true ) {
        uVar28 = 0;
        if ((int)uVar30 < iVar16) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar28 = *(uint *)(local_2a8.Data + lVar33);
        uVar15 = 0;
        if ((int)uVar28 < param_3->ArrayNum) {
          uVar15 = ~uVar28 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar35 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar28 * 200;
        *(undefined4 *)(pFVar35 + 0xc0) = 0;
        if (*(void **)(pFVar35 + 0xb8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar35 + 0xb8));
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (pFVar35 + 0x78);
        puVar7 = *(undefined8 **)(pFVar35 + 8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
        param_3 = local_2b0;
        iVar16 = local_2b0->ArrayNum + ~uVar28;
        if (iVar16 != 0) {
          memmove(pFVar35,pFVar35 + 200,(longlong)iVar16 * 200);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        lVar33 = lVar33 + -4;
        uVar30 = uVar30 - 1;
        if ((int)uVar30 < 0) break;
        iVar16 = (int)local_2a0;
      }
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeSolverEventFilters @ 1440dbd50

void __cdecl EmptyLinkFunctionForGeneratedCodeSolverEventFilters(void)

{
  return;
}

// FieldIntegerParameterUpdate @ 1440dc6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::FieldIntegerParameterUpdate
          (FPBDRigidsSolver *param_1,FFieldSystemCommand *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,FFieldContext *param_4,FPBDPositionConstraints *param_5,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  EFieldPhysicsType EVar2;
  FFieldNodeBase *pFVar3;
  FFieldSystemMetaDataCulling *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  double dVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  EObjectStateType EVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicState> FVar23;
  double *pdVar24;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ActivateDisabled> FVar25;
  bool *pbVar26;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_CollisionGroup> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionStatic> FVar28;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar29;
  TVector<double,3> *pTVar30;
  int *piVar31;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicConstraint> FVar32;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar33;
  undefined1 *puVar34;
  EObjectStateType EVar35;
  uint uVar36;
  TGeometryParticleHandleImp<double,3,1> *pTVar37;
  FName FVar38;
  FNameEntryId FVar39;
  TGeometryParticleHandleImp<double,3,1> *pTVar40;
  FScriptContainerElement *pFVar41;
  uint uVar42;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  int local_1a0;
  int local_19c;
  FName local_198;
  FName local_190;
  FColor_u_0 local_188;
  FColor_u_0 local_184;
  FColor_u_0 local_180;
  FColor_u_0 local_17c;
  int local_178;
  FColor_u_0 local_174;
  FName local_170;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  TVector<float,3> local_130;
  TVector<float,3> local_124;
  FName local_118;
  FName local_108;
  FName local_f8;
  TFieldArrayView<FFieldContextIndex> local_e8;
  TPairInitializer<int_const_&,int_const_&> local_d8;
  TFieldArrayView<FFieldContextIndex> local_c8;
  TFieldArrayView<FFieldContextIndex> local_b8;
  TFieldArrayView<FFieldContextIndex> local_a8;
  FStatMessage local_98;
  FName local_88;
  int *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [4];
  
  local_1a8 = param_7;
  pTVar40 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  FVar39.Value = 0;
  local_1a0 = 0;
  local_19c = param_7->ArrayNum;
  EVar2 = param_2->PhysicsType;
  uVar20 = 0;
  if (EVar2 == Field_DynamicState) {
    FVar23 = StatPtr_STAT_ParamUpdateField_DynamicState;
    if (StatPtr_STAT_ParamUpdateField_DynamicState ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicState>)0x0) {
      pFVar22 = ::FName::FName(&local_78,"STAT_ParamUpdateField_DynamicState");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicState>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_DynamicState,
                          *pFVar22,L"[Field Update] DynamicState","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_res10 = *(FName *)FVar23;
    bVar8 = false;
    bVar9 = false;
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
    bVar18 = false;
    bVar10 = false;
    bVar16 = bVar8;
    bVar19 = bVar9;
    if (local_res10 == (FName)0x0) {
LAB_1440dc843:
      bVar9 = bVar10;
      bVar8 = bVar18;
      bVar18 = false;
      bVar10 = false;
      local_190 = local_140;
      local_res10 = local_140;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_188.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
        bVar8 = false;
        bVar9 = true;
        bVar18 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_160 = local_res10;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_160,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x186);
          bVar8 = true;
          bVar9 = true;
          bVar18 = true;
          bVar10 = true;
        }
      }
      bVar16 = bVar8;
      bVar19 = bVar9;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dc843;
      local_190 = local_res10;
      FThreadStats::AddMessage(local_res10,CycleScopeStart);
      bVar18 = true;
      bVar10 = true;
    }
    InitDynamicStateResults(param_3,param_4,param_7);
    pFVar3 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,param_4);
    dVar14 = __real_3e80000000000000;
    pFVar4 = (param_4->CullingData).Ptr;
    bVar11 = false;
    bVar12 = false;
    if (pFVar4->bCullingActive == false) {
      local_e8 = param_4->SampleIndices;
      FVar39.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar29 = local_e8.ElementArray;
      iVar33 = local_e8.ArrayNum;
    }
    else {
      pTVar29 = pFVar4->CullingIndices;
      local_e8.ArrayOffset = 0;
      local_e8.ElementArray = pTVar29;
      iVar33 = pTVar29->ArrayNum;
      local_e8.ArrayNum = iVar33;
    }
    pFVar41 = (pTVar29->AllocatorInstance).Data + (longlong)(int)FVar39.Value * 8;
    pFVar1 = pFVar41 + (longlong)iVar33 * 8;
    if (pFVar41 != pFVar1) {
      do {
        uVar36 = *(uint *)pFVar41;
        uVar42 = uVar20;
        if ((int)uVar36 < param_3->ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if (uVar42 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          bVar11 = bVar12;
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                  ((param_3->AllocatorInstance).Data + (longlong)(int)uVar36 * 8);
        pTVar37 = pTVar40;
        if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
          pTVar37 = pTVar5;
        }
        if (pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          uVar36 = *(uint *)(pFVar41 + 4);
          uVar42 = uVar20;
          if ((int)uVar36 < local_19c) {
            uVar42 = ~uVar36 >> 0x1f;
          }
          if (uVar42 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pTVar15 = local_1a8;
          uVar36 = uVar36 + local_1a0;
          uVar42 = uVar20;
          if ((int)uVar36 < local_1a8->ArrayNum) {
            uVar42 = ~uVar36 >> 0x1f;
          }
          if (uVar42 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar33 = *(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar36 * 4);
          if (0x7e < iVar33) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrResult < std::numeric_limits<int8>::max()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                                ,0x195,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          EVar17 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37);
          EVar35 = (EObjectStateType)iVar33;
          if (EVar35 == Dynamic) {
            pdVar24 = TPBDRigidParticleHandleImp<double,3,1>::M
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37);
            if (dVar14 < *pdVar24) goto LAB_1440dca4c;
LAB_1440dca9a:
            bVar13 = 0;
          }
          else {
LAB_1440dca4c:
            if (EVar17 == EVar35) goto LAB_1440dca9a;
            bVar13 = 1;
            SetParticleDynamicState
                      (param_1,EVar35,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar37);
            if (EVar35 == Kinematic || EVar35 == Static) {
              local_130._0_8_ = 0;
              local_130._8_4_ = 0;
              TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
                        ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar37,&local_130,false
                        );
              local_124._0_8_ = 0;
              local_124._8_4_ = 0;
              TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
                        ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar37,&local_124,false
                        );
            }
          }
          bVar11 = (bool)(bVar12 | bVar13);
          bVar12 = bVar11;
        }
        local_res10 = local_190;
        pFVar41 = pFVar41 + 8;
      } while (pFVar41 != pFVar1);
      bVar16 = bVar8;
      bVar18 = bVar10;
      bVar19 = bVar9;
      if (bVar11) {
        UpdateSolverParticlesState(param_1,&local_e8,param_3);
      }
    }
    if (bVar19) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
      bVar18 = !bVar18;
      goto LAB_1440dd560;
    }
  }
  else if (EVar2 == Field_ActivateDisabled) {
    FVar25 = StatPtr_STAT_ParamUpdateField_ActivateDisabled;
    if (StatPtr_STAT_ParamUpdateField_ActivateDisabled ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ActivateDisabled>)0x0) {
      pFVar22 = ::FName::FName(&local_60,"STAT_ParamUpdateField_ActivateDisabled");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ActivateDisabled>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParamUpdateField_ActivateDisabled,*pFVar22,
                          L"[Field Update] ActivateDisabled","STATGROUP_Chaos","STATCAT_Advanced",
                          L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_res10 = *(FName *)FVar25;
    bVar16 = false;
    bVar8 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    bVar18 = false;
    bVar19 = false;
    if ((local_res10.ComparisonIndex.Value.Value == 0) &&
       (bVar9 = bVar16, bVar10 = bVar8, local_res10.Number == 0)) {
LAB_1440dcc5c:
      bVar8 = bVar19;
      bVar16 = bVar18;
      bVar18 = false;
      bVar19 = false;
      local_res10 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_184.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar16 = false;
        bVar8 = true;
        bVar18 = false;
        bVar19 = true;
        if (-1 < CpuChannel->Enabled) {
          local_158.ComparisonIndex.Value = local_res10.ComparisonIndex.Value.Value;
          local_158.Number = local_res10.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_158,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x1a4);
          bVar16 = true;
          bVar8 = true;
          bVar18 = true;
          bVar19 = true;
        }
      }
      bVar9 = bVar16;
      bVar10 = bVar8;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dcc5c;
      FThreadStats::AddMessage(local_res10,CycleScopeStart);
      bVar18 = true;
      bVar19 = true;
    }
    InitActivateDisabledResults(param_3,param_4,param_7);
    pFVar3 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,param_4,&local_1a8);
    pFVar4 = (param_4->CullingData).Ptr;
    if (pFVar4->bCullingActive == false) {
      local_c8 = param_4->SampleIndices;
      FVar39.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar29 = local_c8.ElementArray;
      iVar33 = local_c8.ArrayNum;
    }
    else {
      pTVar29 = pFVar4->CullingIndices;
      local_c8.ArrayOffset = 0;
      local_c8.ElementArray = pTVar29;
      iVar33 = pTVar29->ArrayNum;
      local_c8.ArrayNum = iVar33;
    }
    pFVar41 = (pTVar29->AllocatorInstance).Data + (longlong)(int)FVar39.Value * 8;
    pFVar1 = pFVar41 + (longlong)iVar33 * 8;
    for (; pFVar41 != pFVar1; pFVar41 = pFVar41 + 8) {
      uVar36 = *(uint *)pFVar41;
      uVar42 = uVar20;
      if ((int)uVar36 < param_3->ArrayNum) {
        uVar42 = ~uVar36 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar36 * 8);
      pTVar37 = pTVar40;
      if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        pTVar37 = pTVar5;
      }
      if ((pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar26 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37), *pbVar26 != false
         )) {
        uVar36 = *(uint *)(pFVar41 + 4);
        uVar42 = uVar20;
        if ((int)uVar36 < local_19c) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar15 = local_1a8;
        uVar36 = uVar36 + local_1a0;
        uVar42 = uVar20;
        if ((int)uVar36 < local_1a8->ArrayNum) {
          uVar42 = ~uVar36 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar36 * 4) == 0) {
          FPBDRigidsEvolutionBase::EnableParticle
                    ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar37);
          SetParticleDynamicState(param_1,Dynamic,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar37)
          ;
        }
      }
      bVar9 = bVar16;
      bVar18 = bVar19;
      bVar10 = bVar8;
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
      bVar18 = !bVar18;
      goto LAB_1440dd560;
    }
  }
  else {
    uVar36 = 0;
    if (EVar2 != Field_CollisionGroup) {
      if (EVar2 != Field_PositionStatic) {
        if (EVar2 != Field_DynamicConstraint) {
          return;
        }
        FVar32 = StatPtr_STAT_ParamUpdateField_DynamicConstraint;
        if (StatPtr_STAT_ParamUpdateField_DynamicConstraint ==
            (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicConstraint>)0x0) {
          pFVar22 = ::FName::FName(&local_68,"STAT_ParamUpdateField_DynamicConstraint");
          FVar32 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DynamicConstraint>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ParamUpdateField_DynamicConstraint,*pFVar22,
                              L"[Field Update] DynamicConstraint","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        FVar38 = *(FName *)FVar32;
        bVar16 = false;
        bVar18 = false;
        local_170.ComparisonIndex.Value = 0;
        local_170.Number = 0;
        if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_174.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
            bVar16 = false;
            bVar18 = true;
            if (-1 < CpuChannel->Enabled) {
              local_198.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
              local_198.Number = FVar38.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_198,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                         ,0x1de);
              bVar16 = true;
              bVar18 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            local_170 = FVar38;
            FThreadStats::AddMessage(FVar38,CycleScopeStart);
            bVar8 = true;
            FVar39.Value = local_170.ComparisonIndex.Value;
            goto LAB_1440dd733;
          }
        }
        bVar8 = false;
        FVar38 = local_170;
LAB_1440dd733:
        if (1 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        if (bVar18) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar8) {
          return;
        }
        if (FVar38 == (FName)0x0) {
          return;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return;
        }
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        if (this->ScopeCount <= this->bWaitForExplicitFlush) {
          return;
        }
        local_98.NameAndInfo.Number = FVar38.Number & 0xffff6fff | 0x6000;
        local_98.NameAndInfo.Index.Value = FVar39.Value;
        QueryPerformanceCounter((LARGE_INTEGER *)&local_d8.Value);
        local_98.StatData.Pad[4] = '\0';
        local_98.StatData.Pad[5] = '\0';
        local_98.StatData.Pad[6] = '\0';
        local_98.StatData.Pad[7] = '\0';
        local_98.StatData.Pad[0] = local_d8.Value._0_1_;
        local_98.StatData.Pad[1] = local_d8.Value._1_1_;
        local_98.StatData.Pad[2] = local_d8.Value._2_1_;
        local_98.StatData.Pad[3] = local_d8.Value._3_1_;
        FThreadStats::AddStatMessage(this,&local_98);
        piVar31 = &this->ScopeCount;
        *piVar31 = *piVar31 + -1;
        if (*piVar31 == 0) {
          FThreadStats::Flush(this,false,false);
          return;
        }
        if (FThreadStats::bIsRawStatsActive == false) {
          return;
        }
        FThreadStats::FlushRawStats(this,false,false);
        return;
      }
      FVar28 = StatPtr_STAT_ParamUpdateField_PositionStatic;
      if (StatPtr_STAT_ParamUpdateField_PositionStatic ==
          (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionStatic>)0x0) {
        pFVar22 = ::FName::FName(&local_70,"STAT_ParamUpdateField_PositionStatic");
        FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionStatic>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ParamUpdateField_PositionStatic,*pFVar22,
                            L"[Field Update] PositionStatic","STATGROUP_Chaos","STATCAT_Advanced",
                            L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_res10 = *(FName *)FVar28;
      bVar8 = false;
      bVar16 = false;
      local_f8.ComparisonIndex.Value = 0;
      local_f8.Number = 0;
      bVar19 = false;
      bVar18 = false;
      if ((local_res10.ComparisonIndex.Value.Value == 0) && (local_res10.Number == 0)) {
LAB_1440dd2de:
        bVar8 = bVar19;
        bVar16 = bVar18;
        bVar18 = false;
        local_res10 = local_f8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_17c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_17c._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
          bVar8 = false;
          bVar16 = true;
          bVar19 = false;
          bVar18 = true;
          if (-1 < CpuChannel->Enabled) {
            local_148.ComparisonIndex.Value = local_res10.ComparisonIndex.Value.Value;
            local_148.Number = local_res10.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_148,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                       ,0x1c5);
            bVar8 = true;
            bVar16 = true;
            bVar19 = true;
            bVar18 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dd2de;
        FThreadStats::AddMessage(local_res10,CycleScopeStart);
        bVar18 = true;
      }
      pFVar3 = (param_2->RootNode).Ptr;
      (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,param_4,&local_1a8);
      pFVar4 = (param_4->CullingData).Ptr;
      if (pFVar4->bCullingActive == false) {
        local_a8 = param_4->SampleIndices;
        FVar39.Value = (param_4->SampleIndices).ArrayOffset;
        pTVar29 = local_a8.ElementArray;
        iVar33 = local_a8.ArrayNum;
      }
      else {
        pTVar29 = pFVar4->CullingIndices;
        local_a8.ArrayOffset = 0;
        local_a8.ElementArray = pTVar29;
        iVar33 = pTVar29->ArrayNum;
        local_a8.ArrayNum = iVar33;
      }
      FVar38 = (FName)((longlong)(pTVar29->AllocatorInstance).Data + (longlong)(int)FVar39.Value * 8
                      );
      local_190 = (FName)((longlong)FVar38 + (longlong)iVar33 * 8);
      if (FVar38 != local_190) {
        do {
          uVar42 = *(uint *)FVar38;
          uVar21 = uVar20;
          if ((int)uVar42 < param_3->ArrayNum) {
            uVar21 = ~uVar42 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                    ((param_3->AllocatorInstance).Data + (longlong)(int)uVar42 * 8);
          pTVar37 = pTVar40;
          if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
            pTVar37 = pTVar5;
          }
          if (pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            uVar42 = *(uint *)((longlong)FVar38 + 4);
            uVar21 = uVar36;
            if ((int)uVar42 < local_19c) {
              uVar21 = ~uVar42 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar15 = local_1a8;
            uVar42 = uVar42 + local_1a0;
            uVar21 = uVar36;
            if ((int)uVar42 < local_1a8->ArrayNum) {
              uVar21 = ~uVar42 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar42 * 4) != 0) {
              uVar42 = *(uint *)FVar38;
              if (*(int *)&param_6->field_0x8 != *(int *)&param_6->field_0x34) {
                puVar34 = &param_6->field_0x38;
                if (*(undefined1 **)&param_6->field_0x40 != (undefined1 *)0x0) {
                  puVar34 = *(undefined1 **)&param_6->field_0x40;
                }
                iVar33 = *(int *)(puVar34 +
                                 (ulonglong)(*(int *)&param_6->field_0x48 - 1U & uVar42) * 4);
                if (iVar33 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)param_6 + (longlong)iVar33 * 0x10) == uVar42) {
                      piVar31 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)param_6,uVar42);
                      uVar42 = *(uint *)FVar38;
                      iVar33 = *piVar31;
                      uVar21 = uVar20;
                      if ((int)uVar42 < param_3->ArrayNum) {
                        uVar21 = ~uVar42 >> 0x1f;
                      }
                      if ((uVar21 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      puVar6 = *(undefined8 **)
                                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar42 * 8);
                      pTVar30 = TParticles<double,3>::GetX
                                          ((TParticles<double,3> *)*puVar6,*(int *)(puVar6 + 1));
                      FPBDPositionConstraints::Replace(param_5,iVar33,pTVar30);
                      goto LAB_1440dd529;
                    }
                    iVar33 = *(int *)(*(longlong *)param_6 + 8 + (longlong)iVar33 * 0x10);
                  } while (iVar33 != -1);
                }
              }
              local_178 = (param_5->ConstrainedParticles).ArrayNum;
              pTVar30 = TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pTVar37->_padding_,
                                   (int)pTVar37->_padding_);
              FPBDPositionConstraints::AddConstraint
                        (param_5,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar37,pTVar30);
              local_80 = &local_178;
              local_88 = FVar38;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)param_6,&local_d8,(bool *)&local_88);
            }
          }
LAB_1440dd529:
          FVar38 = (FName)((longlong)FVar38 + 8);
        } while (FVar38 != local_190);
      }
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar18 = !bVar18;
      goto LAB_1440dd560;
    }
    FVar27 = StatPtr_STAT_ParamUpdateField_CollisionGroup;
    if (StatPtr_STAT_ParamUpdateField_CollisionGroup ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_CollisionGroup>)0x0) {
      pFVar22 = ::FName::FName(local_58,"STAT_ParamUpdateField_CollisionGroup");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_CollisionGroup>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_CollisionGroup
                          ,*pFVar22,L"[Field Update] CollisionGroup","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_res10 = *(FName *)FVar27;
    bVar16 = false;
    bVar8 = false;
    local_108.ComparisonIndex.Value = 0;
    local_108.Number = 0;
    bVar18 = false;
    bVar19 = false;
    if ((local_res10.ComparisonIndex.Value.Value == 0) &&
       (bVar9 = bVar16, bVar10 = bVar8, local_res10.Number == 0)) {
LAB_1440dcfbd:
      bVar8 = bVar19;
      bVar16 = bVar18;
      bVar18 = false;
      bVar19 = false;
      local_res10 = local_108;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_180.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_180._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar16 = false;
        bVar8 = true;
        bVar18 = false;
        bVar19 = true;
        if (-1 < CpuChannel->Enabled) {
          local_150.ComparisonIndex.Value = local_res10.ComparisonIndex.Value.Value;
          local_150.Number = local_res10.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_150,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x1b6);
          bVar16 = true;
          bVar8 = true;
          bVar18 = true;
          bVar19 = true;
        }
      }
      bVar9 = bVar16;
      bVar10 = bVar8;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dcfbd;
      FThreadStats::AddMessage(local_res10,CycleScopeStart);
      bVar18 = true;
      bVar19 = true;
    }
    pFVar3 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,param_4,&local_1a8);
    pFVar4 = (param_4->CullingData).Ptr;
    if (pFVar4->bCullingActive == false) {
      local_b8 = param_4->SampleIndices;
      FVar39.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar29 = local_b8.ElementArray;
      iVar33 = local_b8.ArrayNum;
    }
    else {
      pTVar29 = pFVar4->CullingIndices;
      local_b8.ArrayOffset = 0;
      local_b8.ElementArray = pTVar29;
      iVar33 = pTVar29->ArrayNum;
      local_b8.ArrayNum = iVar33;
    }
    pFVar41 = (pTVar29->AllocatorInstance).Data + (longlong)(int)FVar39.Value * 8;
    pFVar1 = pFVar41 + (longlong)iVar33 * 8;
    for (; pFVar41 != pFVar1; pFVar41 = pFVar41 + 8) {
      uVar42 = *(uint *)pFVar41;
      uVar21 = uVar36;
      if ((int)uVar42 < param_3->ArrayNum) {
        uVar21 = ~uVar42 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar42 * 8);
      pTVar37 = pTVar40;
      if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        pTVar37 = pTVar5;
      }
      if (pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar42 = *(uint *)(pFVar41 + 4);
        uVar21 = uVar36;
        if ((int)uVar42 < local_19c) {
          uVar21 = ~uVar42 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar15 = local_1a8;
        uVar42 = uVar42 + local_1a0;
        uVar21 = uVar20;
        if ((int)uVar42 < local_1a8->ArrayNum) {
          uVar21 = ~uVar42 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup
                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37,
                   *(int *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar42 * 4));
      }
      bVar9 = bVar16;
      bVar18 = bVar19;
      bVar10 = bVar8;
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar18 = !bVar18;
LAB_1440dd560:
  if (!bVar18) {
    FThreadStats::AddMessage(local_res10,CycleScopeEnd);
  }
  return;
}

// FieldScalarParameterUpdate @ 1440de180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::FieldScalarParameterUpdate
          (FPBDRigidsSolver *param_1,FFieldSystemCommand *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,FFieldContext *param_4,FPBDPositionConstraints *param_5,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  EFieldPhysicsType EVar3;
  FFieldNodeBase *pFVar4;
  FFieldSystemMetaDataCulling *pFVar5;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar6;
  longlong lVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  FPBDRigidsEvolutionGBF *pFVar9;
  FChaosPhysicsMaterial *pFVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar21;
  FName FVar22;
  bool bVar23;
  bool bVar24;
  EObjectStateType EVar25;
  uint uVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain> FVar28;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill> FVar29;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold> FVar30;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar31;
  TSerializablePtr<Chaos::FChaosPhysicsMaterial> TVar32;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold> FVar33;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain> FVar34;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar35;
  int iVar36;
  int iVar37;
  FScriptContainerElement *pFVar38;
  TGeometryParticleHandleImp<double,3,1> *pTVar39;
  uint uVar40;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar41;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  uint uVar42;
  float fVar43;
  FColor_u_0 local_res10 [2];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  FName local_188;
  TArray<float,TSizedDefaultAllocator<32>_> *local_180;
  int local_178;
  int local_174;
  FName local_170;
  FName local_168;
  FColor_u_0 local_160;
  FColor_u_0 local_15c;
  FColor_u_0 local_158;
  FColor_u_0 local_154;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_128;
  FName local_118;
  FName local_108;
  FName local_f8;
  longlong local_e8;
  TFieldArrayView<FFieldContextIndex> local_e0;
  TFieldArrayView<FFieldContextIndex> local_d0;
  TFieldArrayView<FFieldContextIndex> local_c0;
  TFieldArrayView<FFieldContextIndex> local_b0;
  TFieldArrayView<FFieldContextIndex> local_a0;
  FName local_90;
  FName local_88;
  FName local_80;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> local_78;
  FName local_70;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> local_68;
  FName local_60 [5];
  
  local_180 = param_7;
  local_178 = 0;
  local_174 = param_7->ArrayNum;
  EVar3 = param_2->PhysicsType;
  local_res18 = param_3;
  if (EVar3 == Field_ExternalClusterStrain) {
    FVar28 = StatPtr_STAT_ParamUpdateField_ExternalClusterStrain;
    if (StatPtr_STAT_ParamUpdateField_ExternalClusterStrain ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain>)0x0) {
      pFVar27 = ::FName::FName(&local_90,"STAT_ParamUpdateField_ExternalClusterStrain");
      FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParamUpdateField_ExternalClusterStrain,*pFVar27,
                          L"[Field Update] ExternalClusterStrain","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    bVar24 = false;
    bVar23 = false;
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    local_188 = *(FName *)FVar28;
    bVar16 = false;
    bVar17 = false;
    if ((local_188.ComparisonIndex.Value.Value == 0) && (bVar19 = bVar23, local_188.Number == 0)) {
LAB_1440de322:
      bVar23 = bVar17;
      bVar18 = false;
      bVar17 = false;
      local_188 = local_138;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
        bVar24 = false;
        bVar23 = true;
        bVar16 = false;
        bVar17 = true;
        if (-1 < CpuChannel->Enabled) {
          local_150.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
          local_150.Number = local_188.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_150,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x1f8);
          bVar24 = true;
          bVar23 = true;
          bVar16 = true;
          bVar17 = true;
        }
      }
      bVar19 = bVar23;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440de322;
      FThreadStats::AddMessage(local_188,CycleScopeStart);
      bVar17 = true;
      bVar18 = true;
      bVar16 = bVar24;
    }
    pFVar4 = (param_2->RootNode).Ptr;
    local_168 = (FName)&((param_1->MEvolution).Ptr)->Clustering;
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
    FVar22 = local_168;
    pTVar20 = local_res18;
    pFVar5 = (param_4->CullingData).Ptr;
    if (pFVar5->bCullingActive == false) {
      local_e0 = param_4->SampleIndices;
      iVar36 = (param_4->SampleIndices).ArrayOffset;
      pTVar35 = local_e0.ElementArray;
      iVar37 = local_e0.ArrayNum;
    }
    else {
      pTVar35 = pFVar5->CullingIndices;
      iVar36 = 0;
      local_e0.ArrayOffset = 0;
      local_e0.ElementArray = pTVar35;
      iVar37 = pTVar35->ArrayNum;
      local_e0.ArrayNum = iVar37;
    }
    pFVar38 = (pTVar35->AllocatorInstance).Data + (longlong)iVar36 * 8;
    pFVar1 = pFVar38 + (longlong)iVar37 * 8;
    for (; pFVar38 != pFVar1; pFVar38 = pFVar38 + 8) {
      uVar40 = *(uint *)(pFVar38 + 4);
      uVar42 = 0;
      if ((int)uVar40 < local_174) {
        uVar42 = ~uVar40 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar21 = local_180;
      uVar40 = uVar40 + local_178;
      uVar42 = 0;
      if ((int)uVar40 < local_180->ArrayNum) {
        uVar42 = ~uVar40 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar2 = *(float *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar40 * 4);
      if (0.0 < fVar2) {
        uVar40 = *(uint *)pFVar38;
        uVar42 = 0;
        if ((int)uVar40 < pTVar20->ArrayNum) {
          uVar42 = ~uVar40 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar6 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                  ((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
        pTVar41 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar6->field_0xc) {
          pTVar41 = pTVar6;
        }
        if (pTVar41 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          uVar40 = *(uint *)&pTVar41->field_0x8;
          lVar7 = *(longlong *)pTVar41;
          uVar42 = 0;
          if ((int)uVar40 < *(int *)(lVar7 + 0x658)) {
            uVar42 = ~uVar40 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          fVar43 = *(float *)(*(longlong *)(lVar7 + 0x650) + (longlong)(int)uVar40 * 4);
          if (fVar43 <= fVar2) {
            fVar43 = fVar2;
          }
          FRigidClustering::SetExternalStrain((FRigidClustering *)FVar22,pTVar41,fVar43);
        }
      }
      bVar24 = bVar16;
      bVar17 = bVar18;
      bVar19 = bVar23;
    }
  }
  else {
    if (EVar3 != Field_Kill) {
      if (EVar3 == Field_SleepingThreshold) {
        FVar30 = StatPtr_STAT_ParamUpdateField_SleepingThreshold;
        if (StatPtr_STAT_ParamUpdateField_SleepingThreshold ==
            (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold>)0x0) {
          pFVar27 = ::FName::FName(&local_80,"STAT_ParamUpdateField_SleepingThreshold");
          FVar30 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ParamUpdateField_SleepingThreshold,*pFVar27,
                              L"[Field Update] SleepingThreshold","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        bVar16 = false;
        bVar18 = false;
        local_118.ComparisonIndex.Value = 0;
        local_118.Number = 0;
        local_188 = *(FName *)FVar30;
        bVar23 = false;
        bVar17 = false;
        if ((local_188.ComparisonIndex.Value.Value == 0) &&
           (bVar24 = bVar16, bVar19 = bVar18, local_188.Number == 0)) {
LAB_1440de994:
          bVar18 = bVar17;
          bVar16 = bVar23;
          bVar17 = false;
          bVar23 = false;
          local_188 = local_118;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_15c.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_15c._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
            bVar16 = false;
            bVar18 = true;
            bVar23 = false;
            bVar17 = true;
            if (-1 < CpuChannel->Enabled) {
              local_140.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
              local_140.Number = local_188.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_140,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                         ,0x21b);
              bVar16 = true;
              bVar18 = true;
              bVar23 = true;
              bVar17 = true;
            }
          }
          bVar24 = bVar16;
          bVar19 = bVar18;
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1440de994;
          FThreadStats::AddMessage(local_188,CycleScopeStart);
          bVar17 = true;
          bVar23 = true;
        }
        pFVar4 = (param_2->RootNode).Ptr;
        (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
        pFVar5 = (param_4->CullingData).Ptr;
        if (pFVar5->bCullingActive == false) {
          local_c0 = param_4->SampleIndices;
          iVar36 = (param_4->SampleIndices).ArrayOffset;
          pTVar35 = local_c0.ElementArray;
          iVar37 = local_c0.ArrayNum;
        }
        else {
          pTVar35 = pFVar5->CullingIndices;
          iVar36 = 0;
          local_c0.ArrayOffset = 0;
          local_c0.ElementArray = pTVar35;
          iVar37 = pTVar35->ArrayNum;
          local_c0.ArrayNum = iVar37;
        }
        pFVar38 = (pTVar35->AllocatorInstance).Data + (longlong)iVar36 * 8;
        pFVar1 = pFVar38 + (longlong)iVar37 * 8;
        pTVar20 = local_res18;
        for (; local_res18 = pTVar20, pFVar38 != pFVar1; pFVar38 = pFVar38 + 8) {
          uVar40 = *(uint *)pFVar38;
          uVar42 = 0;
          if ((int)uVar40 < pTVar20->ArrayNum) {
            uVar42 = ~uVar40 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                    ((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
          pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
            pTVar39 = pTVar8;
          }
          if ((pTVar39 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (0 < local_174)) {
            uVar40 = *(uint *)(pFVar38 + 4);
            uVar42 = 0;
            if ((int)uVar40 < local_174) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar21 = local_180;
            uVar40 = uVar40 + local_178;
            uVar42 = 0;
            if ((int)uVar40 < local_180->ArrayNum) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar15 = (double)*(float *)((pTVar21->AllocatorInstance).Data +
                                       (longlong)(int)uVar40 * 4);
            pTVar31 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39);
            if (pTVar31->Ptr == (FChaosPhysicsMaterial *)0x0) {
              TVar32.Ptr = ::operator_new(0x80);
              if (TVar32.Ptr == (FChaosPhysicsMaterial *)0x0) {
                TVar32.Ptr = (FChaosPhysicsMaterial *)0x0;
              }
              else {
                (TVar32.Ptr)->Friction = 0.5;
                (TVar32.Ptr)->StaticFriction = 0.0;
                (TVar32.Ptr)->Restitution = 0.10000000149011612;
                (TVar32.Ptr)->Density = 1.0;
                (TVar32.Ptr)->LinearEtherDrag = 0.0;
                (TVar32.Ptr)->AngularEtherDrag = 0.0;
                (TVar32.Ptr)->DisabledLinearThreshold = 0.0;
                (TVar32.Ptr)->DisabledAngularThreshold = 0.0;
                (TVar32.Ptr)->SleepCounterThreshold = 0;
                (TVar32.Ptr)->UserData = (void *)0x0;
                (TVar32.Ptr)->BaseFrictionImpulse = 0.0;
                (TVar32.Ptr)->FrictionCombineMode = Avg;
                (TVar32.Ptr)->RestitutionCombineMode = Avg;
                ((TVar32.Ptr)->Strength).TensileStrength = 20000.0;
                ((TVar32.Ptr)->Strength).CompressionStrength = 200000.0;
                ((TVar32.Ptr)->Strength).ShearStrength = 60000.0;
                ((TVar32.Ptr)->DamageModifier).DamageThresholdMultiplier = 1.0;
                (TVar32.Ptr)->SoftCollisionMode = None;
                (TVar32.Ptr)->SoftCollisionThickness = 0.0;
              }
              auVar13._8_4_ = SUB84(dVar15,0);
              auVar13._0_8_ = dVar15;
              auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              (TVar32.Ptr)->SleepingLinearThreshold = dVar15;
              (TVar32.Ptr)->SleepingAngularThreshold = (double)auVar13._8_8_;
              FPBDRigidsEvolutionBase::SetPhysicsMaterial
                        ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39,TVar32);
              pFVar9 = (param_1->MEvolution).Ptr;
              pTVar31 = TGeometryParticleHandleImp<double,3,1>::
                        AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
                                  (pTVar39,(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                                            *)&pFVar9->_padding_);
              if (pTVar31 != &local_78) {
                pFVar10 = pTVar31->Ptr;
                pTVar31->Ptr = TVar32.Ptr;
                TVar32.Ptr = (FChaosPhysicsMaterial *)0x0;
                ::operator_delete(pFVar10,0x80);
              }
              Private::FPBDIslandManager::UpdateParticleMaterial
                        ((FPBDIslandManager *)&pFVar9->_padding_,pTVar39);
              ::operator_delete(TVar32.Ptr,0x80);
            }
            else {
              pTVar31 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                  ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39);
              if (dVar15 != pTVar31->Ptr->DisabledLinearThreshold) {
                pTVar31->Ptr->SleepingLinearThreshold = dVar15;
                pTVar31->Ptr->SleepingAngularThreshold = dVar15;
              }
            }
          }
          pTVar20 = local_res18;
          bVar24 = bVar16;
          bVar17 = bVar23;
          bVar19 = bVar18;
        }
      }
      else {
        if (EVar3 != Field_DisableThreshold) {
          if (EVar3 != Field_InternalClusterStrain) {
            return;
          }
          FVar34 = StatPtr_STAT_ParamUpdateField_InternalClusterStrain;
          if (StatPtr_STAT_ParamUpdateField_InternalClusterStrain ==
              (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain>)0x0) {
            pFVar27 = ::FName::FName(local_60,"STAT_ParamUpdateField_InternalClusterStrain");
            FVar34 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ParamUpdateField_InternalClusterStrain,*pFVar27,
                                L"[Field Update] InternalClusterStrain","STATGROUP_Chaos",
                                "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          bVar16 = false;
          bVar19 = false;
          local_f8.ComparisonIndex.Value = 0;
          local_f8.Number = 0;
          local_188 = *(FName *)FVar34;
          bVar23 = false;
          bVar18 = false;
          if ((local_188.ComparisonIndex.Value.Value == 0) &&
             (bVar24 = bVar16, local_188.Number == 0)) {
LAB_1440df21a:
            bVar16 = bVar23;
            bVar17 = false;
            bVar23 = false;
            local_188 = local_f8;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_154.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
              bVar16 = false;
              bVar19 = true;
              bVar23 = false;
              bVar18 = true;
              if (-1 < CpuChannel->Enabled) {
                local_168 = local_188;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_168,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                           ,0x23a);
                bVar16 = true;
                bVar19 = true;
                bVar23 = true;
                bVar18 = true;
              }
            }
            bVar24 = bVar16;
            if (FThreadStats::bPrimaryEnable == false) goto LAB_1440df21a;
            FThreadStats::AddMessage(local_188,CycleScopeStart);
            bVar17 = true;
            bVar23 = true;
            bVar18 = bVar19;
          }
          pFVar4 = (param_2->RootNode).Ptr;
          local_170 = (FName)&((param_1->MEvolution).Ptr)->Clustering;
          (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
          FVar22 = local_170;
          pFVar5 = (param_4->CullingData).Ptr;
          if (pFVar5->bCullingActive == false) {
            local_a0 = param_4->SampleIndices;
            iVar36 = (param_4->SampleIndices).ArrayOffset;
            pTVar35 = local_a0.ElementArray;
            iVar37 = local_a0.ArrayNum;
          }
          else {
            pTVar35 = pFVar5->CullingIndices;
            iVar36 = 0;
            local_a0.ArrayOffset = 0;
            local_a0.ElementArray = pTVar35;
            iVar37 = pTVar35->ArrayNum;
            local_a0.ArrayNum = iVar37;
          }
          pFVar38 = (pTVar35->AllocatorInstance).Data + (longlong)iVar36 * 8;
          pFVar1 = pFVar38 + (longlong)iVar37 * 8;
          for (; pFVar38 != pFVar1; pFVar38 = pFVar38 + 8) {
            uVar40 = *(uint *)pFVar38;
            uVar42 = 0;
            if ((int)uVar40 < param_3->ArrayNum) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                       ((param_3->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
            this = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar11->field_0xc) {
              this = pTVar11;
            }
            if ((this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
               (EVar25 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this),
               EVar25 == Dynamic)) {
              uVar40 = *(uint *)&this->field_0x8;
              lVar7 = *(longlong *)this;
              uVar42 = 0;
              if ((int)uVar40 < *(int *)(lVar7 + 0x670)) {
                uVar42 = ~uVar40 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_e8 = *(longlong *)(lVar7 + 0x668);
              uVar42 = *(uint *)(pFVar38 + 4);
              uVar26 = 0;
              if ((int)uVar42 < local_174) {
                uVar26 = ~uVar42 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                      ,0x50,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar24)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar21 = local_180;
              uVar42 = uVar42 + local_178;
              uVar26 = 0;
              if ((int)uVar42 < local_180->ArrayNum) {
                uVar26 = ~uVar42 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              FRigidClustering::SetInternalStrain
                        ((FRigidClustering *)FVar22,
                         (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this,
                         *(float *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar42 * 4) +
                         *(float *)(local_e8 + (longlong)(int)uVar40 * 4));
              param_3 = local_res18;
            }
            bVar24 = bVar16;
            bVar17 = bVar23;
            bVar19 = bVar18;
          }
          goto LAB_1440df465;
        }
        FVar33 = StatPtr_STAT_ParamUpdateField_DisableThreshold;
        if (StatPtr_STAT_ParamUpdateField_DisableThreshold ==
            (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold>)0x0) {
          pFVar27 = ::FName::FName(&local_70,"STAT_ParamUpdateField_DisableThreshold");
          FVar33 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ParamUpdateField_DisableThreshold,*pFVar27,
                              L"[Field Update] DisableThreshold","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        bVar24 = false;
        bVar19 = false;
        local_108.ComparisonIndex.Value = 0;
        local_108.Number = 0;
        local_188 = *(FName *)FVar33;
        bVar16 = false;
        bVar23 = false;
        if ((local_188.ComparisonIndex.Value.Value == 0) && (local_188.Number == 0)) {
LAB_1440dede7:
          bVar18 = false;
          bVar17 = false;
          local_188 = local_108;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_158.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_158._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
            bVar24 = false;
            bVar19 = true;
            bVar16 = false;
            bVar23 = true;
            if (-1 < CpuChannel->Enabled) {
              local_170 = local_188;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_170,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                         ,0x22a);
              bVar24 = true;
              bVar19 = true;
              bVar16 = true;
              bVar23 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dede7;
          FThreadStats::AddMessage(local_188,CycleScopeStart);
          bVar17 = true;
          bVar18 = true;
          bVar16 = bVar24;
          bVar23 = bVar19;
        }
        pFVar4 = (param_2->RootNode).Ptr;
        (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
        pFVar5 = (param_4->CullingData).Ptr;
        if (pFVar5->bCullingActive == false) {
          local_b0 = param_4->SampleIndices;
          iVar36 = (param_4->SampleIndices).ArrayOffset;
          pTVar35 = local_b0.ElementArray;
          iVar37 = local_b0.ArrayNum;
        }
        else {
          pTVar35 = pFVar5->CullingIndices;
          iVar36 = 0;
          local_b0.ArrayOffset = 0;
          local_b0.ElementArray = pTVar35;
          iVar37 = pTVar35->ArrayNum;
          local_b0.ArrayNum = iVar37;
        }
        pFVar38 = (pTVar35->AllocatorInstance).Data + (longlong)iVar36 * 8;
        pFVar1 = pFVar38 + (longlong)iVar37 * 8;
        pTVar20 = local_res18;
        for (; local_res18 = pTVar20, pFVar38 != pFVar1; pFVar38 = pFVar38 + 8) {
          uVar40 = *(uint *)pFVar38;
          uVar42 = 0;
          if ((int)uVar40 < pTVar20->ArrayNum) {
            uVar42 = ~uVar40 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                    ((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
          pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
            pTVar39 = pTVar8;
          }
          if (((pTVar39 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (EVar25 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39),
              EVar25 == Dynamic)) && (0 < local_174)) {
            uVar40 = *(uint *)(pFVar38 + 4);
            uVar42 = 0;
            if ((int)uVar40 < local_174) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar21 = local_180;
            uVar40 = uVar40 + local_178;
            uVar42 = 0;
            if ((int)uVar40 < local_180->ArrayNum) {
              uVar42 = ~uVar40 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar15 = (double)*(float *)((pTVar21->AllocatorInstance).Data +
                                       (longlong)(int)uVar40 * 4);
            pTVar31 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39);
            if (pTVar31->Ptr == (FChaosPhysicsMaterial *)0x0) {
              TVar32.Ptr = ::operator_new(0x80);
              if (TVar32.Ptr == (FChaosPhysicsMaterial *)0x0) {
                TVar32.Ptr = (FChaosPhysicsMaterial *)0x0;
              }
              else {
                (TVar32.Ptr)->Friction = 0.5;
                (TVar32.Ptr)->StaticFriction = 0.0;
                (TVar32.Ptr)->Restitution = 0.10000000149011612;
                (TVar32.Ptr)->Density = 1.0;
                (TVar32.Ptr)->LinearEtherDrag = 0.0;
                (TVar32.Ptr)->AngularEtherDrag = 0.0;
                (TVar32.Ptr)->SleepingLinearThreshold = 1.0;
                (TVar32.Ptr)->SleepingAngularThreshold = 1.0;
                (TVar32.Ptr)->SleepCounterThreshold = 0;
                (TVar32.Ptr)->UserData = (void *)0x0;
                (TVar32.Ptr)->BaseFrictionImpulse = 0.0;
                (TVar32.Ptr)->FrictionCombineMode = Avg;
                (TVar32.Ptr)->RestitutionCombineMode = Avg;
                ((TVar32.Ptr)->Strength).TensileStrength = 20000.0;
                ((TVar32.Ptr)->Strength).CompressionStrength = 200000.0;
                ((TVar32.Ptr)->Strength).ShearStrength = 60000.0;
                ((TVar32.Ptr)->DamageModifier).DamageThresholdMultiplier = 1.0;
                (TVar32.Ptr)->SoftCollisionMode = None;
                (TVar32.Ptr)->SoftCollisionThickness = 0.0;
              }
              auVar14._8_4_ = SUB84(dVar15,0);
              auVar14._0_8_ = dVar15;
              auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              (TVar32.Ptr)->DisabledLinearThreshold = dVar15;
              (TVar32.Ptr)->DisabledAngularThreshold = (double)auVar14._8_8_;
              FPBDRigidsEvolutionBase::SetPhysicsMaterial
                        ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39,TVar32);
              pFVar9 = (param_1->MEvolution).Ptr;
              pTVar31 = TGeometryParticleHandleImp<double,3,1>::
                        AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
                                  (pTVar39,(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                                            *)&pFVar9->_padding_);
              if (pTVar31 != &local_68) {
                pFVar10 = pTVar31->Ptr;
                pTVar31->Ptr = TVar32.Ptr;
                TVar32.Ptr = (FChaosPhysicsMaterial *)0x0;
                ::operator_delete(pFVar10,0x80);
              }
              Private::FPBDIslandManager::UpdateParticleMaterial
                        ((FPBDIslandManager *)&pFVar9->_padding_,pTVar39);
              ::operator_delete(TVar32.Ptr,0x80);
            }
            else {
              pTVar31 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                  ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39);
              if (dVar15 != pTVar31->Ptr->DisabledLinearThreshold) {
                pTVar31->Ptr->DisabledLinearThreshold = dVar15;
                pTVar31->Ptr->DisabledAngularThreshold = dVar15;
              }
            }
          }
          pTVar20 = local_res18;
          bVar24 = bVar16;
          bVar17 = bVar18;
          bVar19 = bVar23;
        }
      }
      if (bVar19) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto joined_r0x0001440dec8e;
    }
    FVar29 = StatPtr_STAT_ParamUpdateField_Kill;
    if (StatPtr_STAT_ParamUpdateField_Kill ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill>)0x0) {
      pFVar27 = ::FName::FName(&local_88,"STAT_ParamUpdateField_Kill");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_Kill,*pFVar27,
                          L"[Field Update] Kill","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    bVar24 = false;
    bVar19 = false;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    local_188 = *(FName *)FVar29;
    bVar16 = false;
    bVar23 = false;
    if ((local_188.ComparisonIndex.Value.Value == 0) && (local_188.Number == 0)) {
LAB_1440de69e:
      bVar17 = false;
      bVar18 = false;
      local_188 = local_128;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_160.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
        bVar24 = false;
        bVar19 = true;
        bVar16 = false;
        bVar23 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
          local_148.Number = local_188.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x20c);
          bVar24 = true;
          bVar19 = true;
          bVar16 = true;
          bVar23 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440de69e;
      FThreadStats::AddMessage(local_188,CycleScopeStart);
      bVar17 = true;
      bVar18 = true;
      bVar16 = bVar24;
      bVar23 = bVar19;
    }
    pFVar4 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
    pTVar20 = local_res18;
    pFVar5 = (param_4->CullingData).Ptr;
    if (pFVar5->bCullingActive == false) {
      local_d0 = param_4->SampleIndices;
      iVar36 = (param_4->SampleIndices).ArrayOffset;
      pTVar35 = local_d0.ElementArray;
      iVar37 = local_d0.ArrayNum;
    }
    else {
      pTVar35 = pFVar5->CullingIndices;
      iVar36 = 0;
      local_d0.ArrayOffset = 0;
      local_d0.ElementArray = pTVar35;
      iVar37 = pTVar35->ArrayNum;
      local_d0.ArrayNum = iVar37;
    }
    pFVar38 = (pTVar35->AllocatorInstance).Data + (longlong)iVar36 * 8;
    pFVar1 = pFVar38 + (longlong)iVar37 * 8;
    for (; pFVar38 != pFVar1; pFVar38 = pFVar38 + 8) {
      uVar40 = *(uint *)pFVar38;
      uVar42 = 0;
      if ((int)uVar40 < pTVar20->ArrayNum) {
        uVar42 = ~uVar40 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                ((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
      pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
        pTVar39 = pTVar8;
      }
      if (pTVar39 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar40 = *(uint *)(pFVar38 + 4);
        uVar42 = 0;
        if ((int)uVar40 < local_174) {
          uVar42 = ~uVar40 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar21 = local_180;
        uVar40 = uVar40 + local_178;
        uVar42 = 0;
        if ((int)uVar40 < local_180->ArrayNum) {
          uVar42 = ~uVar40 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (0.0 < *(float *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar40 * 4)) {
          FPBDRigidsEvolutionBase::DisableParticle
                    ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar39);
        }
      }
      bVar24 = bVar16;
      bVar17 = bVar18;
      bVar19 = bVar23;
    }
  }
LAB_1440df465:
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
joined_r0x0001440dec8e:
  if (bVar17) {
    FThreadStats::AddMessage(local_188,CycleScopeEnd);
  }
  return;
}

// FieldVectorForceUpdate @ 1440df4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::FieldVectorForceUpdate
          (FPBDRigidsSolver *param_1,FFieldSystemCommand *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,FFieldContext *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  FFieldNodeBase *pFVar7;
  FFieldSystemMetaDataCulling *pFVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  undefined1 auVar15 [12];
  bool bVar16;
  bool bVar17;
  bool bVar18;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  bool bVar21;
  bool bVar22;
  EObjectStateType EVar23;
  bool bVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce> FVar27;
  double *pdVar28;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque> FVar29;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar30;
  int iVar31;
  FName FVar32;
  uint uVar33;
  longlong lVar34;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  FColor_u_0 local_res10 [2];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  FName local_128;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_120;
  int local_118;
  int local_114;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_e8;
  TFieldArrayView<FFieldContextIndex> local_d8;
  TFieldArrayView<FFieldContextIndex> local_c8;
  FName local_b8;
  FName local_b0;
  TVector<double,3> local_a8;
  double local_80;
  
  local_120 = param_5;
  pFVar7 = (param_2->RootNode).Ptr;
  local_114 = param_5->ArrayNum;
  iVar36 = 0;
  local_118 = 0;
  local_res18 = param_3;
  (**(code **)(pFVar7->_padding_ + 0x50))(pFVar7,param_4,&local_120);
  if (param_2->PhysicsType != Field_LinearForce) {
    if (param_2->PhysicsType != Field_AngularTorque) {
      return;
    }
    FVar29 = StatPtr_STAT_ForceUpdateField_AngularTorque;
    if (StatPtr_STAT_ForceUpdateField_AngularTorque ==
        (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque>)0x0) {
      pFVar26 = ::FName::FName(&local_b0,"STAT_ForceUpdateField_AngularTorque");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_AngularTorque,
                          *pFVar26,L"[Field Update] AngularTorque","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar29;
    bVar17 = false;
    bVar22 = false;
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_1440dfb1f:
      bVar21 = false;
      FVar32 = local_e8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_110[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
        bVar17 = true;
        bVar22 = false;
        if (-1 < CpuChannel->Enabled) {
          local_128.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
          local_128.Number = FVar32.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_128,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x2c8);
          bVar17 = true;
          bVar22 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440dfb1f;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar21 = true;
    }
    pFVar8 = (param_4->CullingData).Ptr;
    if (pFVar8->bCullingActive == false) {
      local_c8 = param_4->SampleIndices;
      iVar36 = (param_4->SampleIndices).ArrayOffset;
      pTVar30 = local_c8.ElementArray;
      iVar31 = local_c8.ArrayNum;
    }
    else {
      pTVar30 = pFVar8->CullingIndices;
      local_c8.ArrayOffset = 0;
      local_c8.ElementArray = pTVar30;
      iVar31 = pTVar30->ArrayNum;
      local_c8.ArrayNum = iVar31;
    }
    pFVar37 = (pTVar30->AllocatorInstance).Data + (longlong)iVar36 * 8;
    pFVar1 = pFVar37 + (longlong)iVar31 * 8;
    for (; pFVar37 != pFVar1; pFVar37 = pFVar37 + 8) {
      uVar33 = *(uint *)pFVar37;
      uVar25 = 0;
      if ((int)uVar33 < param_3->ArrayNum) {
        uVar25 = ~uVar33 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar33 * 8);
      pTVar35 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar9->field_0xc) {
        pTVar35 = pTVar9;
      }
      if ((pTVar35 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         ((EVar23 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar35), EVar23 == Dynamic
          || (EVar23 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar35),
             EVar23 == Sleeping)))) {
        bVar24 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping(pTVar35);
        if (bVar24) {
          TPBDRigidParticles<double,3>::SetObjectState
                    (*(TPBDRigidParticles<double,3> **)pTVar35,*(int *)&pTVar35->field_0x8,Dynamic);
        }
        uVar33 = *(uint *)(pFVar37 + 4);
        uVar25 = 0;
        if ((int)uVar33 < local_114) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar24)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar20 = local_120;
        uVar33 = uVar33 + local_118;
        uVar25 = 0;
        if ((int)uVar33 < local_120->ArrayNum) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (pTVar20->AllocatorInstance).Data;
        pFVar11 = pFVar12 + (longlong)(int)uVar33 * 0x18;
        local_a8._0_8_ = *(undefined8 *)pFVar11;
        local_a8._8_8_ = *(undefined8 *)(pFVar11 + 8);
        local_a8._16_8_ = *(undefined8 *)(pFVar12 + (longlong)(int)uVar33 * 0x18 + 0x10);
        TPBDRigidParticleHandleImp<double,3,1>::AddTorque(pTVar35,&local_a8,true);
        param_3 = local_res18;
      }
    }
    goto LAB_1440dfcf9;
  }
  FVar27 = StatPtr_STAT_ForceUpdateField_LinearForce;
  if (StatPtr_STAT_ForceUpdateField_LinearForce ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)0x0) {
    pFVar26 = ::FName::FName(&local_b8,"STAT_ForceUpdateField_LinearForce");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_LinearForce,
                        *pFVar26,L"[Field Update] LinearForce","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar27;
  bVar18 = false;
  bVar24 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar16 = false;
  bVar21 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) &&
     (bVar22 = bVar24, bVar17 = bVar18, FVar32.Number == 0)) {
LAB_1440df666:
    bVar18 = bVar16;
    bVar24 = bVar21;
    bVar21 = false;
    bVar16 = false;
    local_100 = local_f8;
    FVar32 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar18 = true;
      bVar24 = false;
      bVar16 = true;
      bVar21 = false;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_108.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                   ,0x2b6);
        bVar18 = true;
        bVar24 = true;
        bVar16 = true;
        bVar21 = true;
      }
    }
    bVar22 = bVar24;
    bVar17 = bVar18;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1440df666;
    local_100 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar21 = true;
    bVar16 = true;
  }
  pTVar19 = local_res18;
  pFVar8 = (param_4->CullingData).Ptr;
  if (pFVar8->bCullingActive == false) {
    local_d8 = param_4->SampleIndices;
    iVar36 = (param_4->SampleIndices).ArrayOffset;
    pTVar30 = local_d8.ElementArray;
    iVar31 = local_d8.ArrayNum;
  }
  else {
    pTVar30 = pFVar8->CullingIndices;
    local_d8.ArrayOffset = 0;
    local_d8.ElementArray = pTVar30;
    iVar31 = pTVar30->ArrayNum;
    local_d8.ArrayNum = iVar31;
  }
  pFVar37 = (pTVar30->AllocatorInstance).Data + (longlong)iVar36 * 8;
  pFVar1 = pFVar37 + (longlong)iVar31 * 8;
  for (; pFVar37 != pFVar1; pFVar37 = pFVar37 + 8) {
    uVar33 = *(uint *)pFVar37;
    uVar25 = 0;
    if ((int)uVar33 < pTVar19->ArrayNum) {
      uVar25 = ~uVar33 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              ((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar33 * 8);
    pTVar35 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)pTVar9->field_0xc) {
      pTVar35 = pTVar9;
    }
    if (pTVar35 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      uVar33 = *(uint *)&pTVar35->field_0x8;
      lVar10 = *(longlong *)pTVar35;
      uVar25 = 0;
      if ((int)uVar33 < *(int *)(lVar10 + 0x2e0)) {
        uVar25 = ~uVar33 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((*(char *)(*(longlong *)(lVar10 + 0x2d8) + 0xd + (longlong)(int)uVar33 * 0x10) == '\0') &&
         ((EVar23 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar35), EVar23 == Dynamic
          || (EVar23 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar35),
             EVar23 == Sleeping)))) {
        bVar22 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping(pTVar35);
        if (bVar22) {
          TPBDRigidParticles<double,3>::SetObjectState
                    (*(TPBDRigidParticles<double,3> **)pTVar35,*(int *)&pTVar35->field_0x8,Dynamic);
        }
        uVar33 = *(uint *)(pFVar37 + 4);
        uVar25 = 0;
        if ((int)uVar33 < local_114) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar22)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar20 = local_120;
        uVar33 = uVar33 + local_118;
        uVar25 = 0;
        if ((int)uVar33 < local_120->ArrayNum) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar10 = *(longlong *)pTVar35;
        uVar25 = *(uint *)&pTVar35->field_0x8;
        lVar34 = (longlong)(int)uVar25;
        pFVar11 = (pTVar20->AllocatorInstance).Data;
        local_80 = *(double *)(pFVar11 + (longlong)(int)uVar33 * 0x18 + 0x10);
        auVar6 = *(undefined1 (*) [16])(pFVar11 + (longlong)(int)uVar33 * 0x18);
        uVar33 = 0;
        if ((int)uVar25 < *(int *)(lVar10 + 0x328)) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 800);
        pdVar28 = TPBDRigidParticleHandleImp<double,3,1>::InvM(pTVar35);
        auVar15._4_8_ = extraout_XMM0_Qb;
        auVar15._0_4_ = auVar6._4_4_;
        auVar38._0_8_ = auVar15._0_8_ << 0x20;
        auVar38._8_4_ = auVar6._8_4_;
        auVar38._12_4_ = auVar6._12_4_;
        dVar2 = *pdVar28;
        dVar14 = dVar2 * local_80;
        dVar3 = *(double *)(lVar10 + 0x10 + lVar34 * 0x18);
        dVar4 = *(double *)(lVar10 + 8 + lVar34 * 0x18);
        dVar5 = *(double *)(lVar10 + lVar34 * 0x18);
        uVar33 = *(uint *)&pTVar35->field_0x8;
        lVar34 = (longlong)(int)uVar33;
        lVar10 = *(longlong *)pTVar35;
        uVar25 = 0;
        if ((int)uVar33 < *(int *)(lVar10 + 0x328)) {
          uVar25 = ~uVar33 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 800);
        *(double *)(lVar10 + lVar34 * 0x18) = dVar2 * auVar6._0_8_ + dVar5;
        *(double *)(lVar10 + 8 + lVar34 * 0x18) = dVar2 * auVar38._8_8_ + dVar4;
        *(double *)(lVar10 + 0x10 + lVar34 * 0x18) = dVar14 + dVar3;
      }
    }
    FVar32 = local_100;
    bVar22 = bVar24;
    bVar21 = bVar16;
    bVar17 = bVar18;
  }
LAB_1440dfcf9:
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// FieldVectorParameterUpdate @ 1440dfd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::FieldVectorParameterUpdate
          (FPBDRigidsSolver *param_1,FFieldSystemCommand *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,FFieldContext *param_4,FPBDPositionConstraints *param_5,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_6,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  EFieldPhysicsType EVar5;
  FFieldNodeBase *pFVar6;
  FFieldSystemMetaDataCulling *pFVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  EObjectStateType EVar21;
  uint uVar22;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearImpulse> FVar27;
  longlong lVar28;
  double *pdVar29;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity> FVar30;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget> FVar31;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar32;
  uint *puVar33;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated> FVar34;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar35;
  undefined1 *puVar36;
  FName FVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar40;
  FNameEntryId FVar41;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar42;
  uint uVar43;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar44;
  FColor_u_0 local_res10 [2];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_288;
  int local_280;
  int local_27c;
  FName local_278;
  FName local_270;
  FColor_u_0 local_268;
  FColor_u_0 local_264;
  FColor_u_0 local_260;
  int local_25c;
  FColor_u_0 local_258 [2];
  FName local_250;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_210;
  FName local_200;
  FName local_1f0;
  TPairInitializer<int_const_&,int_const_&> local_1e0;
  LARGE_INTEGER local_1d0;
  TFieldArrayView<FFieldContextIndex> local_1c8;
  TFieldArrayView<FFieldContextIndex> local_1b8;
  TFieldArrayView<FFieldContextIndex> local_1a8;
  TFieldArrayView<FFieldContextIndex> local_198;
  FStatMessage local_188;
  FScriptContainerElement *local_178;
  int *local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  TVector<double,3> local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  uint uVar23;
  
  pTVar42 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  local_288 = param_7;
  FVar41.Value = 0;
  local_280 = 0;
  local_27c = param_7->ArrayNum;
  EVar5 = param_2->PhysicsType;
  uVar22 = 0;
  uVar23 = 0;
  local_res18 = param_3;
  if (EVar5 == Field_LinearVelocity) {
    FVar26 = StatPtr_STAT_ParamUpdateField_LinearVelocity;
    if (StatPtr_STAT_ParamUpdateField_LinearVelocity ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)0x0) {
      pFVar25 = ::FName::FName(&local_f0,"STAT_ParamUpdateField_LinearVelocity");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_LinearVelocity
                          ,*pFVar25,L"[Field Update] LinearVelocity","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar37 = *(FName *)FVar26;
    bVar17 = false;
    bVar16 = false;
    local_1f0.ComparisonIndex.Value = 0;
    local_1f0.Number = 0;
    bVar20 = false;
    bVar18 = false;
    if ((FVar37.ComparisonIndex.Value.Value != 0) || (FVar37.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar17 = false;
        bVar16 = true;
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_240.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
          local_240.Number = FVar37.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_240,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x25d);
          bVar17 = true;
          bVar16 = true;
          bVar20 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_278 = FVar37;
        FThreadStats::AddMessage(FVar37,CycleScopeStart);
        bVar18 = true;
        goto LAB_1440dfef4;
      }
    }
    bVar17 = bVar20;
    bVar16 = bVar18;
    bVar18 = false;
    local_278 = local_1f0;
    FVar37 = local_1f0;
LAB_1440dfef4:
    pFVar6 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4,&local_288);
    pFVar7 = (param_4->CullingData).Ptr;
    if (pFVar7->bCullingActive == false) {
      local_1c8 = param_4->SampleIndices;
      pTVar32 = local_1c8.ElementArray;
      iVar35 = local_1c8.ArrayNum;
      uVar43 = (param_4->SampleIndices).ArrayOffset;
    }
    else {
      pTVar32 = pFVar7->CullingIndices;
      local_1c8.ArrayOffset = 0;
      local_1c8.ElementArray = pTVar32;
      iVar35 = pTVar32->ArrayNum;
      local_1c8.ArrayNum = iVar35;
      uVar43 = FVar41.Value;
    }
    pFVar38 = (pTVar32->AllocatorInstance).Data + (longlong)(int)uVar43 * 8;
    pFVar10 = pFVar38 + (longlong)iVar35 * 8;
    do {
      if (pFVar38 == pFVar10) {
        if (bVar16) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar18) {
          FThreadStats::AddMessage(FVar37,CycleScopeEnd);
        }
        return;
      }
      uVar43 = *(uint *)pFVar38;
      uVar39 = FVar41.Value;
      if ((int)uVar43 < param_3->ArrayNum) {
        uVar39 = ~uVar43 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar43 * 8);
      pTVar40 = pTVar42;
      if (1 < (byte)pTVar8->field_0xc) {
        pTVar40 = pTVar8;
      }
      if (pTVar40 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        uVar43 = *(uint *)&pTVar40->field_0x8;
        lVar28 = *(longlong *)pTVar40;
        uVar39 = uVar23;
        if ((int)uVar43 < *(int *)(lVar28 + 0x2e0)) {
          uVar39 = ~uVar43 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        param_3 = local_res18;
        if (*(char *)(*(longlong *)(lVar28 + 0x2d8) + 0xb + (longlong)(int)uVar43 * 0x10) == '\x04')
        {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar40,
                     (TVector<double,3> *)&local_168,*(int *)&pTVar40->field_0x8);
          uVar43 = *(uint *)(pFVar38 + 4);
          uVar39 = uVar23;
          if ((int)uVar43 < local_27c) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar19 = local_288;
          uVar43 = uVar43 + local_280;
          uVar39 = uVar22;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (pTVar19->AllocatorInstance).Data;
          pFVar2 = pFVar9 + (longlong)(int)uVar43 * 0x18;
          local_b0 = *(double *)pFVar2;
          dStack_a8 = *(double *)(pFVar2 + 8);
          local_a0 = *(double *)(pFVar9 + (longlong)(int)uVar43 * 0x18 + 0x10);
          local_150 = local_b0 + local_168;
          local_148 = dStack_a8 + local_160;
          local_140 = local_a0 + local_158;
          TKinematicGeometryParticlesImp<double,3,0>::SetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar40,
                     *(int *)&pTVar40->field_0x8,(TVector<double,3> *)&local_150);
          param_3 = local_res18;
        }
      }
      pFVar38 = pFVar38 + 8;
      FVar37 = local_278;
    } while( true );
  }
  if (EVar5 == Field_LinearImpulse) {
    FVar27 = StatPtr_STAT_ForceUpdateField_LinearImpulse;
    if (StatPtr_STAT_ForceUpdateField_LinearImpulse ==
        (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearImpulse>)0x0) {
      pFVar25 = ::FName::FName(&local_e8,"STAT_ForceUpdateField_LinearImpulse");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearImpulse>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_LinearImpulse,
                          *pFVar25,L"[Field Update] Impulse","STATGROUP_Chaos","STATCAT_Advanced",
                          L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    param_7 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)FVar27;
    bVar17 = false;
    bVar16 = false;
    local_220.ComparisonIndex.Value = 0;
    local_220.Number = 0;
    bVar20 = false;
    bVar18 = false;
    if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_1440e02f8:
      bVar17 = bVar20;
      bVar16 = bVar18;
      bVar18 = false;
      local_278 = local_220;
      param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_220;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_268.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_268._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar17 = false;
        bVar16 = true;
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_238.ComparisonIndex.Value = (uint)param_7;
          local_238.Number = SUB84(param_7,4);
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_238,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x26c);
          bVar17 = true;
          bVar16 = true;
          bVar20 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440e02f8;
      local_278 = (FName)param_7;
      FThreadStats::AddMessage((FName)param_7,CycleScopeStart);
      bVar18 = true;
    }
    pFVar6 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4);
    pFVar7 = (param_4->CullingData).Ptr;
    if (pFVar7->bCullingActive == false) {
      local_1b8 = param_4->SampleIndices;
      FVar41.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar32 = local_1b8.ElementArray;
      iVar35 = local_1b8.ArrayNum;
    }
    else {
      pTVar32 = pFVar7->CullingIndices;
      local_1b8.ArrayOffset = 0;
      local_1b8.ElementArray = pTVar32;
      iVar35 = pTVar32->ArrayNum;
      local_1b8.ArrayNum = iVar35;
    }
    pFVar38 = (pTVar32->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
    pFVar10 = pFVar38 + (longlong)iVar35 * 8;
    for (; pFVar38 != pFVar10; pFVar38 = pFVar38 + 8) {
      uVar43 = *(uint *)pFVar38;
      uVar39 = uVar22;
      if ((int)uVar43 < param_3->ArrayNum) {
        uVar39 = ~uVar43 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar43 * 8);
      pTVar40 = pTVar42;
      if (1 < (byte)pTVar8->field_0xc) {
        pTVar40 = pTVar8;
      }
      if ((pTVar40 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (EVar21 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar40), EVar21 == Dynamic))
      {
        uVar43 = *(uint *)&pTVar40->field_0x8;
        lVar28 = *(longlong *)pTVar40;
        uVar39 = uVar23;
        if ((int)uVar43 < *(int *)(lVar28 + 0x358)) {
          uVar39 = ~uVar43 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar28 = *(longlong *)(lVar28 + 0x350);
        uVar39 = *(uint *)(pFVar38 + 4);
        local_88 = *(double *)(lVar28 + 0x10 + (longlong)(int)uVar43 * 0x18);
        pdVar29 = (double *)(lVar28 + (longlong)(int)uVar43 * 0x18);
        dVar12 = *pdVar29;
        dVar13 = pdVar29[1];
        uVar43 = uVar23;
        if ((int)uVar39 < local_27c) {
          uVar43 = ~uVar39 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar19 = local_288;
        uVar39 = uVar39 + local_280;
        uVar43 = uVar22;
        if ((int)uVar39 < local_288->ArrayNum) {
          uVar43 = ~uVar39 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar28 = (longlong)(int)uVar39;
        pFVar2 = (pTVar19->AllocatorInstance).Data;
        pdVar29 = TPBDRigidParticleHandleImp<double,3,1>::InvM(pTVar40);
        dVar3 = *pdVar29;
        local_138 = dVar3 * *(double *)(pFVar2 + lVar28 * 0x18) + dVar12;
        local_130 = dVar3 * *(double *)(pFVar2 + lVar28 * 0x18 + 8) + dVar13;
        local_128 = dVar3 * *(double *)(pFVar2 + lVar28 * 0x18 + 0x10) + local_88;
        TPBDRigidParticleHandleImp<double,3,1>::SetLinearImpulseVelocity
                  (pTVar40,(TVector<double,3> *)&local_138,false);
        param_3 = local_res18;
      }
      param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_278;
    }
  }
  else {
    if (EVar5 == Field_AngularVelociy) {
      FVar30 = StatPtr_STAT_ParamUpdateField_AngularVelocity;
      if (StatPtr_STAT_ParamUpdateField_AngularVelocity ==
          (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)0x0) {
        pFVar25 = ::FName::FName(&local_e0,"STAT_ParamUpdateField_AngularVelocity");
        FVar30 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ParamUpdateField_AngularVelocity,*pFVar25,
                            L"[Field Update] AngularVelocity","STATGROUP_Chaos","STATCAT_Advanced",
                            L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      param_7 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)FVar30;
      bVar16 = false;
      bVar17 = false;
      local_210 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_1440e06a7:
        bVar18 = false;
        param_7 = local_210;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_264.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_264._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
          bVar16 = false;
          bVar17 = true;
          if (-1 < CpuChannel->Enabled) {
            local_230.ComparisonIndex.Value = (uint)param_7;
            local_230.Number = SUB84(param_7,4);
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_230,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                       ,0x27c);
            bVar16 = true;
            bVar17 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1440e06a7;
        FThreadStats::AddMessage((FName)param_7,CycleScopeStart);
        bVar18 = true;
      }
      pFVar6 = (param_2->RootNode).Ptr;
      (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4,&local_288);
      pFVar7 = (param_4->CullingData).Ptr;
      if (pFVar7->bCullingActive == false) {
        local_1a8 = param_4->SampleIndices;
        FVar41.Value = (param_4->SampleIndices).ArrayOffset;
        pTVar32 = local_1a8.ElementArray;
        iVar35 = local_1a8.ArrayNum;
      }
      else {
        pTVar32 = pFVar7->CullingIndices;
        local_1a8.ArrayOffset = 0;
        local_1a8.ElementArray = pTVar32;
        iVar35 = pTVar32->ArrayNum;
        local_1a8.ArrayNum = iVar35;
      }
      pFVar38 = (pTVar32->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
      pFVar10 = pFVar38 + (longlong)iVar35 * 8;
      pTVar44 = local_res18;
      for (; pFVar38 != pFVar10; pFVar38 = pFVar38 + 8) {
        uVar43 = *(uint *)pFVar38;
        uVar39 = uVar22;
        if ((int)uVar43 < pTVar44->ArrayNum) {
          uVar39 = ~uVar43 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar43 * 8);
        pTVar40 = pTVar42;
        if (1 < (byte)pTVar8->field_0xc) {
          pTVar40 = pTVar8;
        }
        if ((pTVar40 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           (EVar21 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar40), EVar21 == Dynamic
           )) {
          TKinematicGeometryParticlesImp<double,3,0>::GetW
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar40,
                     (TVector<double,3> *)&local_120,*(int *)&pTVar40->field_0x8);
          uVar43 = *(uint *)(pFVar38 + 4);
          uVar39 = uVar23;
          if ((int)uVar43 < local_27c) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar19 = local_288;
          uVar43 = uVar43 + local_280;
          uVar39 = uVar23;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (pTVar19->AllocatorInstance).Data;
          pFVar2 = pFVar9 + (longlong)(int)uVar43 * 0x18;
          local_80 = *(double *)pFVar2;
          dStack_78 = *(double *)(pFVar2 + 8);
          local_70 = *(double *)(pFVar9 + (longlong)(int)uVar43 * 0x18 + 0x10);
          local_108 = local_80 + local_120;
          local_100 = dStack_78 + local_118;
          local_f8 = local_70 + local_110;
          TKinematicGeometryParticlesImp<double,3,0>::SetW
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar40,
                     *(int *)&pTVar40->field_0x8,(TVector<double,3> *)&local_108);
          pTVar44 = local_res18;
        }
      }
      if (bVar17) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_1440e0dac;
    }
    if (EVar5 != Field_PositionTarget) {
      if (EVar5 != Field_PositionAnimated) {
        return;
      }
      FVar34 = StatPtr_STAT_ParamUpdateField_PositionAnimated;
      if (StatPtr_STAT_ParamUpdateField_PositionAnimated ==
          (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated>)0x0) {
        pFVar25 = ::FName::FName(&local_d0,"STAT_ParamUpdateField_PositionAnimated");
        FVar34 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ParamUpdateField_PositionAnimated,*pFVar25,
                            L"[Field Update] PositionAnimated","STATGROUP_Chaos","STATCAT_Advanced",
                            L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar37 = *(FName *)FVar34;
      bVar16 = false;
      bVar18 = false;
      local_250.ComparisonIndex.Value = 0;
      local_250.Number = 0;
      if ((FVar37.ComparisonIndex.Value.Value != 0) || (FVar37.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_258[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
          bVar16 = false;
          bVar18 = true;
          if (-1 < CpuChannel->Enabled) {
            local_270.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
            local_270.Number = FVar37.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_270,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                       ,0x2a5);
            bVar16 = true;
            bVar18 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_250 = FVar37;
          FThreadStats::AddMessage(FVar37,CycleScopeStart);
          bVar17 = true;
          FVar41.Value = local_250.ComparisonIndex.Value;
          goto LAB_1440e1025;
        }
      }
      bVar17 = false;
      FVar37 = local_250;
LAB_1440e1025:
      if (1 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
      if (bVar18) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar17) {
        return;
      }
      if (FVar37 == (FName)0x0) {
        return;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return;
      }
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->ScopeCount <= this->bWaitForExplicitFlush) {
        return;
      }
      local_188.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
      local_188.NameAndInfo.Index.Value = FVar41.Value;
      QueryPerformanceCounter(&local_1d0);
      local_188.StatData.Pad[4] = '\0';
      local_188.StatData.Pad[5] = '\0';
      local_188.StatData.Pad[6] = '\0';
      local_188.StatData.Pad[7] = '\0';
      local_188.StatData.Pad[0] = local_1d0.s.LowPart._0_1_;
      local_188.StatData.Pad[1] = local_1d0.s.LowPart._1_1_;
      local_188.StatData.Pad[2] = local_1d0.s.LowPart._2_1_;
      local_188.StatData.Pad[3] = local_1d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_188);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return;
      }
      FThreadStats::FlushRawStats(this,false,false);
      return;
    }
    FVar31 = StatPtr_STAT_ParamUpdateField_PositionTarget;
    if (StatPtr_STAT_ParamUpdateField_PositionTarget ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget>)0x0) {
      pFVar25 = ::FName::FName(&local_d8,"STAT_ParamUpdateField_PositionTarget");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_PositionTarget
                          ,*pFVar25,L"[Field Update] PositionTarget","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    param_7 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)FVar31;
    bVar17 = false;
    bVar16 = false;
    local_200.ComparisonIndex.Value = 0;
    local_200.Number = 0;
    bVar20 = false;
    bVar18 = false;
    if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_1440e0a4c:
      bVar17 = bVar20;
      bVar16 = bVar18;
      bVar18 = false;
      local_278 = local_200;
      param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_200;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_260.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_260._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
        bVar17 = false;
        bVar16 = true;
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_228.ComparisonIndex.Value = (uint)param_7;
          local_228.Number = SUB84(param_7,4);
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_228,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x28c);
          bVar17 = true;
          bVar16 = true;
          bVar20 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1440e0a4c;
      local_278 = (FName)param_7;
      FThreadStats::AddMessage((FName)param_7,CycleScopeStart);
      bVar18 = true;
    }
    pFVar6 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4,&local_288);
    dVar12 = __real_47efffffe0000000;
    pFVar7 = (param_4->CullingData).Ptr;
    if (pFVar7->bCullingActive == false) {
      local_198 = param_4->SampleIndices;
      FVar41.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar32 = local_198.ElementArray;
      iVar35 = local_198.ArrayNum;
    }
    else {
      pTVar32 = pFVar7->CullingIndices;
      local_198.ArrayOffset = 0;
      local_198.ElementArray = pTVar32;
      iVar35 = pTVar32->ArrayNum;
      local_198.ArrayNum = iVar35;
    }
    pFVar38 = (pTVar32->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
    local_1e0.Value = (int *)(pFVar38 + (longlong)iVar35 * 8);
    pTVar44 = local_res18;
    if (pFVar38 != (FScriptContainerElement *)local_1e0.Value) {
      do {
        uVar43 = *(uint *)pFVar38;
        uVar39 = uVar23;
        if ((int)uVar43 < pTVar44->ArrayNum) {
          uVar39 = ~uVar43 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar43 * 8);
        pTVar40 = pTVar42;
        if (2 < (byte)pTVar8->field_0xc) {
          pTVar40 = pTVar8;
        }
        if (pTVar40 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar43 = *(uint *)(pFVar38 + 4);
          uVar39 = uVar23;
          if ((int)uVar43 < local_27c) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar19 = local_288;
          uVar43 = uVar43 + local_280;
          uVar39 = uVar22;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar39 = ~uVar43 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar28 = (longlong)(int)uVar43;
          pFVar10 = (pTVar19->AllocatorInstance).Data;
          if (((dVar12 != *(double *)(pFVar10 + lVar28 * 0x18)) ||
              (dVar12 != *(double *)(pFVar10 + lVar28 * 0x18 + 8))) ||
             (pTVar44 = local_res18, dVar12 != *(double *)(pFVar10 + lVar28 * 0x18 + 0x10))) {
            uVar43 = *(uint *)pFVar38;
            if (*(int *)&param_6->field_0x8 != *(int *)&param_6->field_0x34) {
              puVar36 = &param_6->field_0x38;
              if (*(undefined1 **)&param_6->field_0x40 != (undefined1 *)0x0) {
                puVar36 = *(undefined1 **)&param_6->field_0x40;
              }
              iVar35 = *(int *)(puVar36 +
                               (ulonglong)(*(int *)&param_6->field_0x48 - 1U & uVar43) * 4);
              if (iVar35 != -1) {
                do {
                  if (*(uint *)(*(longlong *)param_6 + (longlong)iVar35 * 0x10) == uVar43) {
                    if (iVar35 != -1) {
                      puVar33 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        ::FindChecked((
                                                  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                  *)param_6,uVar43);
                      uVar43 = *(uint *)(pFVar38 + 4);
                      uVar39 = *puVar33;
                      uVar24 = uVar22;
                      if ((int)uVar43 < local_27c) {
                        uVar24 = ~uVar43 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                              ,0x50,
                                              L"Array index out of bounds: %i from an array of size %i"
                                             ), bVar20)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pTVar19 = local_288;
                      uVar43 = uVar43 + local_280;
                      uVar24 = uVar22;
                      if ((int)uVar43 < local_288->ArrayNum) {
                        uVar24 = ~uVar43 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pFVar2 = (pTVar19->AllocatorInstance).Data;
                      pFVar10 = pFVar2 + (longlong)(int)uVar43 * 0x18;
                      uVar14 = *(undefined8 *)pFVar10;
                      uVar15 = *(undefined8 *)(pFVar10 + 8);
                      uVar4 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar43 * 0x18 + 0x10);
                      uVar43 = uVar22;
                      if ((int)uVar39 < (param_5->Targets).ArrayNum) {
                        uVar43 = ~uVar39 >> 0x1f;
                      }
                      if ((uVar43 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pFVar2 = (param_5->Targets).AllocatorInstance.Data;
                      pFVar10 = pFVar2 + (longlong)(int)uVar39 * 0x18;
                      *(undefined8 *)pFVar10 = uVar14;
                      *(undefined8 *)(pFVar10 + 8) = uVar15;
                      *(undefined8 *)(pFVar2 + (longlong)(int)uVar39 * 0x18 + 0x10) = uVar4;
                      pTVar44 = local_res18;
                      goto LAB_1440e0d67;
                    }
                    break;
                  }
                  iVar35 = *(int *)(*(longlong *)param_6 + 8 + (longlong)iVar35 * 0x10);
                } while (iVar35 != -1);
              }
            }
            uVar43 = *(uint *)(pFVar38 + 4);
            local_25c = (param_5->ConstrainedParticles).ArrayNum;
            uVar39 = uVar22;
            if ((int)uVar43 < local_27c) {
              uVar39 = ~uVar43 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar20)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar19 = local_288;
            uVar43 = uVar43 + local_280;
            uVar39 = uVar22;
            if ((int)uVar43 < local_288->ArrayNum) {
              uVar39 = ~uVar43 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar2 = (pTVar19->AllocatorInstance).Data;
            pFVar10 = pFVar2 + (longlong)(int)uVar43 * 0x18;
            local_c8._0_8_ = *(undefined8 *)pFVar10;
            local_c8._8_8_ = *(undefined8 *)(pFVar10 + 8);
            local_c8._16_8_ = *(undefined8 *)(pFVar2 + (longlong)(int)uVar43 * 0x18 + 0x10);
            FPBDPositionConstraints::AddConstraint(param_5,pTVar40,&local_c8);
            local_170 = &local_25c;
            local_178 = pFVar38;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)param_6,&local_1e0,(bool *)&local_178);
            pTVar44 = local_res18;
          }
        }
LAB_1440e0d67:
        pFVar38 = pFVar38 + 8;
        param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_278;
      } while (pFVar38 != (FScriptContainerElement *)local_1e0.Value);
    }
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1440e0dac:
  if (!bVar18) {
    return;
  }
  FThreadStats::AddMessage((FName)param_7,CycleScopeEnd);
  return;
}

// InitActivateDisabledResults @ 1440e5ed0

void __cdecl
Chaos::InitActivateDisabledResults
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,FFieldContext *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  TFieldArrayView<FFieldContextIndex> TVar2;
  byte bVar3;
  FFieldSystemMetaDataCulling *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  
  pFVar4 = (param_2->CullingData).Ptr;
  if (pFVar4->bCullingActive == false) {
    TVar2 = param_2->SampleIndices;
    pTVar11 = TVar2.ElementArray;
    iVar14 = TVar2.ArrayNum;
    iVar13 = TVar2.ArrayOffset;
  }
  else {
    pTVar11 = pFVar4->CullingIndices;
    iVar13 = 0;
    iVar14 = pTVar11->ArrayNum;
  }
  pFVar15 = (pTVar11->AllocatorInstance).Data + (longlong)iVar13 * 8;
  pFVar1 = pFVar15 + (longlong)iVar14 * 8;
  do {
    if (pFVar15 == pFVar1) {
      return;
    }
    uVar10 = *(uint *)pFVar15;
    uVar9 = 0;
    if ((int)uVar10 < param_1->ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar5 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
    plVar12 = (longlong *)0x0;
    if (1 < *(byte *)((longlong)plVar5 + 0xc)) {
      plVar12 = plVar5;
    }
    if (plVar12 != (longlong *)0x0) {
      uVar10 = *(uint *)(plVar12 + 1);
      lVar6 = *plVar12;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)(lVar6 + 0x2e0)) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)(pFVar15 + 4);
      bVar3 = *(byte *)(*(longlong *)(lVar6 + 0x2d8) + 0xd + (longlong)(int)uVar10 * 0x10);
      uVar10 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = (uint)bVar3;
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// InitDynamicStateResults @ 1440e60a0

void __cdecl
Chaos::InitDynamicStateResults
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,FFieldContext *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  TFieldArrayView<FFieldContextIndex> TVar2;
  uint uVar3;
  FFieldSystemMetaDataCulling *pFVar4;
  code *pcVar5;
  bool bVar6;
  EObjectStateType EVar7;
  uint uVar8;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  int iVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  
  pFVar4 = (param_2->CullingData).Ptr;
  if (pFVar4->bCullingActive == false) {
    TVar2 = param_2->SampleIndices;
    pTVar9 = TVar2.ElementArray;
    iVar13 = TVar2.ArrayNum;
    iVar11 = TVar2.ArrayOffset;
  }
  else {
    pTVar9 = pFVar4->CullingIndices;
    iVar11 = 0;
    iVar13 = pTVar9->ArrayNum;
  }
  pFVar14 = (pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 8;
  pFVar1 = pFVar14 + (longlong)iVar13 * 8;
  do {
    if (pFVar14 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar14;
    uVar8 = 0;
    if ((int)uVar3 < param_1->ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
               ((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8);
    pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (pTVar12->field_0xc != '\0') {
      pTVar10 = pTVar12;
    }
    if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1440e61a3:
      uVar3 = *(uint *)pFVar14;
      uVar8 = 0;
      if ((int)uVar3 < param_1->ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8);
      pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar12->field_0xc != '\0') {
        pTVar10 = pTVar12;
      }
      if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Static;
      }
      else {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar10->field_0xc) {
          pTVar12 = pTVar10;
        }
        if (pTVar12 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar7 = Kinematic;
        }
        else {
          EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12);
        }
      }
    }
    else {
      pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar10->field_0xc) {
        pTVar12 = pTVar10;
      }
      if (pTVar12 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Kinematic;
      }
      else {
        EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar12);
      }
      if (EVar7 != Uninitialized) goto LAB_1440e61a3;
      EVar7 = Dynamic;
    }
    uVar3 = *(uint *)(pFVar14 + 4);
    uVar8 = 0;
    if ((int)uVar3 < param_3->ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = pFVar14 + 8;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar3 * 4) = (int)(char)EVar7;
  } while( true );
}

// ResetIndicesArray @ 1440ef450

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl ResetIndicesArray(TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_1->ArrayNum != param_2) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_1,param_2,Default);
    iVar4 = param_1->ArrayNum;
    uVar5 = 0;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(uint *)((param_1->AllocatorInstance).Data + lVar6) = uVar5;
        uVar5 = uVar5 + 1;
        iVar4 = param_1->ArrayNum;
        lVar6 = lVar6 + 4;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

// SetParticleDynamicState @ 1440f17d0

void __cdecl
Chaos::SetParticleDynamicState
          (FPBDRigidsSolver *param_1,EObjectStateType param_2,
          TPBDRigidParticleHandleImp<double,3,1> *param_3)

{
  FRigidClusteredFlags_u_0 *pFVar1;
  bool *pbVar2;
  
  if (param_3->field_0xc != '\x06') {
    if (param_3->field_0xc == '\x03') {
      pFVar1 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                          (*(TPBDRigidClusteredParticles<double,3> **)param_3,
                           *(int *)&param_3->field_0x8)->field0_0x0;
      if ((pFVar1->Bits & 1) == 0) goto LAB_1440f1828;
    }
    FPBDRigidsEvolutionBase::SetParticleObjectState
              ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,param_3,param_2);
    return;
  }
LAB_1440f1828:
  TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)param_3,*(int *)&param_3->field_0x8,param_2);
  pbVar2 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_3);
  if (*pbVar2 == false) {
    Private::FPBDIslandManager::AddParticle
              ((FPBDIslandManager *)&((param_1->MEvolution).Ptr)->_padding_,
               (TGeometryParticleHandleImp<double,3,1> *)param_3);
    FPBDRigidsSOAs::EnableParticle
              ((FPBDRigidsSOAs *)((param_1->MEvolution).Ptr)->_padding_,
               (TGeometryParticleHandleImp<double,3,1> *)param_3);
  }
  return;
}

// ShouldUpdateTransformFromSimulation @ 1440f2280

bool __cdecl Chaos::ShouldUpdateTransformFromSimulation(TPBDRigidParticle<double,3> *param_1)

{
  if ((param_1->MMiscData).Property.MObjectState == Kinematic) {
    if (SyncKinematicOnGameThread == 0) {
      return false;
    }
    if (SyncKinematicOnGameThread != 1) {
      return (bool)(*(byte *)((longlong)&(param_1->MMiscData).Property.MControlFlags.field0_0x0 + 1)
                   & 1);
    }
  }
  return true;
}

// SimWritablePropsMayChange @ 1440f22b0

bool __cdecl Chaos::SimWritablePropsMayChange(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar2 = param_1;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      this = pTVar2;
    }
    if (this == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar1 = Kinematic;
    }
    else {
      EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this);
    }
    if ((EVar1 == Dynamic) || (EVar1 == Sleeping)) {
      return true;
    }
  }
  return false;
}

// UpdateSolverParticlesState @ 1440f7490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::UpdateSolverParticlesState
          (FPBDRigidsSolver *param_1,TFieldArrayView<FFieldContextIndex> *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPBDRigidsSolver *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  ClusterId *pCVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  TPBDRigidParticleHandleImp<double,3,1> *local_190;
  undefined8 local_188;
  int local_180;
  FPBDRigidsSolver *local_178;
  longlong *local_170;
  int iStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  FKinematicTarget local_108;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (0 < param_2->ArrayNum) {
    local_b8._8_4_ = 0;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_8c = 0x80;
    local_88 = 0xffffffff;
    pFVar21 = (param_2->ElementArray->AllocatorInstance).Data + (longlong)param_2->ArrayOffset * 8;
    pFVar1 = pFVar21 + (longlong)param_2->ArrayNum * 8;
    local_178 = param_1;
    if (pFVar21 != pFVar1) {
      do {
        uVar20 = *(uint *)pFVar21;
        uVar19 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_1a8 = (longlong)(int)uVar20, local_1a0 = (longlong)param_3->ArrayNum,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_3->AllocatorInstance).Data + (longlong)(int)uVar20 * 8);
        pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar3->field_0xc) {
          pTVar17 = pTVar3;
        }
        if (pTVar17 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          do {
            local_190 = pTVar17;
            pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                (*(TPBDRigidClusteredParticles<double,3> **)pTVar17,
                                 *(int *)&pTVar17->field_0x8);
            if (pCVar13->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
            pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                (*(TPBDRigidClusteredParticles<double,3> **)pTVar17,
                                 *(int *)&pTVar17->field_0x8);
            pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pCVar13->Id->field_0xc) {
              pTVar17 = pCVar13->Id;
            }
          } while (pTVar17 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0);
          TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                    ((TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)local_b8,(TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_188,
                     (bool *)&local_190);
        }
        pFVar21 = pFVar21 + 8;
      } while (pFVar21 != pFVar1);
    }
    uVar20 = local_90;
    pFVar9 = local_178;
    iStack_168 = 0;
    local_150 = 0;
    uStack_164 = 1;
    pFVar4 = (local_178->MEvolution).Ptr;
    uStack_154 = 0;
    if (local_90 != 0) {
      puVar18 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar18 = local_98;
      }
      uVar19 = *puVar18;
      while (uVar19 == 0) {
        lVar15 = (longlong)iStack_168;
        local_150 = local_150 + 0x20;
        iStack_168 = iStack_168 + 1;
        uStack_154 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_168)
        goto LAB_1440f7690;
        uVar19 = puVar18[lVar15 + 1];
      }
      uStack_164 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uStack_164 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_188._4_4_ = (int)lVar15;
      uStack_154 = local_150 + -1 + local_188._4_4_;
      if ((int)local_90 < (int)uStack_154) {
        uStack_154 = local_90;
      }
    }
LAB_1440f7690:
    iStack_148 = local_b8._8_4_ - local_84;
    local_170 = (longlong *)local_b8;
    local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_158 = 0xffffffff;
    TStack_138.CurrentBitIndex = uStack_154;
    TStack_138.UnvisitedBitMask = 0xffffffff;
    TStack_138._padding_ = CONCAT44(uStack_164,iStack_168);
    uVar19 = local_90 & 0xffffffe0;
    uStack_14c = local_bc;
    iVar16 = (int)local_90 >> 5;
    TStack_138._28_4_ = local_bc;
    TStack_138.BaseBitIndex = local_150;
    uStack_118 = CONCAT44(uStack_144,iStack_148);
    bVar14 = (byte)local_90;
    local_140 = local_170;
    TStack_138.Array = local_160;
    if (((int)local_90 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = _UNK_150689648;
    uVar7 = ___xmm_3f800000000000000000000000000000;
    if (uVar20 != local_90) {
      puVar18 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar18 = local_98;
      }
      uVar20 = -1 << (bVar14 & 0x1f) & puVar18[iVar16];
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar16;
        uVar19 = uVar19 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1440f77b0;
        uVar20 = puVar18[lVar15 + 1];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_180 = (int)lVar15;
      uVar20 = local_180 + -1 + uVar19;
      if ((int)local_90 < (int)uVar20) {
        uVar20 = local_90;
      }
    }
LAB_1440f77b0:
    while( true ) {
      plVar10 = local_140;
      if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
        local_198[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (((TStack_138.CurrentBitIndex == uVar20) &&
          (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar10 == (longlong *)local_b8)) break;
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)
                (*plVar10 + (longlong)TStack_138.CurrentBitIndex * 0x10);
      if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar19 = (uint)pTVar5->_padding_;
        lVar15 = pTVar5->_padding_;
        iVar16 = *(int *)(lVar15 + 0x2e0);
        uVar12 = 0;
        if ((int)uVar19 < iVar16) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_1a8 = (longlong)(int)uVar19, local_1a0 = (longlong)iVar16,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar15 + 0x2d8) + 0xd + (longlong)(int)uVar19 * 0x10) == '\0') {
          pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar5->_padding_,
                               (int)pTVar5->_padding_);
          if (pCVar13->NumChildren == 0) {
            uVar19 = (uint)pTVar5->_padding_;
            lVar15 = pTVar5->_padding_;
            iVar16 = *(int *)(lVar15 + 0x2e0);
            uVar12 = 0;
            if ((int)uVar19 < iVar16) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (local_1a8 = (longlong)(int)uVar19, local_1a0 = (longlong)iVar16,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(char *)(*(longlong *)(lVar15 + 0x2d8) + 0xb + (longlong)(int)uVar19 * 0x10) ==
                '\x04') {
              local_108.Position._16_8_ = 0;
              local_108.Position._0_8_ = 0;
              local_108.Position._8_8_ = 0;
              local_108.Rotation._0_8_ = uVar7;
              local_108.Rotation._8_8_ = uVar8;
              local_108.Mode = None;
              FPBDRigidsEvolutionGBF::SetParticleKinematicTarget
                        ((pFVar9->MEvolution).Ptr,pTVar5,&local_108);
            }
          }
          else {
            UpdateKinematicProperties
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,
                       &(pFVar4->Clustering).MChildren,(pFVar9->MEvolution).Ptr);
          }
        }
      }
      TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
  }
  return;
}

// Z_Construct_UScriptStruct_FSolverBreakingFilterSettings @ 1440f8000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolverBreakingFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolverBreakingFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolverBreakingFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolverBreakingFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSolverBreakingFilterSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSolverCollisionFilterSettings @ 1440f8080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolverCollisionFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSolverCollisionFilterSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSolverRemovalFilterSettings @ 1440f8100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolverRemovalFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolverRemovalFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolverRemovalFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolverRemovalFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSolverRemovalFilterSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSolverTrailingFilterSettings @ 1440f8180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolverTrailingFilterSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolverTrailingFilterSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolverTrailingFilterSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolverTrailingFilterSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSolverTrailingFilterSettings.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarForceNoCollisionIntoSQ'' @ 1503683e0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarForceNoCollisionIntoSQ__(void)

{
  CVarForceNoCollisionIntoSQ._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNoCollisionIntoSQ);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimAllowRewindToResimulatedFrames'' @ 150368400

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimAllowRewindToResimulatedFrames__(void)

{
  CVarResimAllowRewindToResimulatedFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimAllowRewindToResimulatedFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimAllowRewindToResimulatedFramesOverlapPercent'' @ 150368420

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarResimAllowRewindToResimulatedFramesOverlapPercent__(void)

{
  CVarResimAllowRewindToResimulatedFramesOverlapPercent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarResimAllowRewindToResimulatedFramesOverlapPercent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimFindValidInputHistory'' @ 150368440

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimFindValidInputHistory__(void)

{
  CVarResimFindValidInputHistory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimFindValidInputHistory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimFindValidStateHistory'' @ 150368460

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimFindValidStateHistory__(void)

{
  CVarResimFindValidStateHistory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimFindValidStateHistory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimFrameValidationLeniency'' @ 150368480

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimFrameValidationLeniency__(void)

{
  CVarResimFrameValidationLeniency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimFrameValidationLeniency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimIncompleteHistory'' @ 1503684a0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimIncompleteHistory__(void)

{
  CVarResimIncompleteHistory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimIncompleteHistory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResimInterpolateTargetGaps'' @ 1503684c0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarResimInterpolateTargetGaps__(void)

{
  CVarResimInterpolateTargetGaps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResimInterpolateTargetGaps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRewindDataOptimization'' @ 1503684e0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarRewindDataOptimization__(void)

{
  CVarRewindDataOptimization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRewindDataOptimization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipDesyncTest'' @ 150368500

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarSkipDesyncTest__(void)

{
  CVarSkipDesyncTest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipDesyncTest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseParticleResimAsFollowerDuringTargetValidation'' @ 150368520

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarUseParticleResimAsFollowerDuringTargetValidation__(void)

{
  CVarUseParticleResimAsFollowerDuringTargetValidation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseParticleResimAsFollowerDuringTargetValidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_PullPhysicsStateForceUpdateBounds'' @ 150368540

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVar_PullPhysicsStateForceUpdateBounds__(void)

{
  CVar_PullPhysicsStateForceUpdateBounds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_PullPhysicsStateForceUpdateBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ShallowCopyClusterUnionGeometryOnUpdate'' @ 150368560

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVar_ShallowCopyClusterUnionGeometryOnUpdate__(void)

{
  CVar_ShallowCopyClusterUnionGeometryOnUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_ShallowCopyClusterUnionGeometryOnUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_SyncKinematicOnGameThread'' @ 150368580

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVar_SyncKinematicOnGameThread__(void)

{
  CVar_SyncKinematicOnGameThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_SyncKinematicOnGameThread);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTargets'' @ 1503685a0

void __cdecl
`FPerSolverFieldSystem::ComputeFieldLinearImpulse'::__l2::
_dynamic_atexit_destructor_for__EmptyTargets__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTargets.AllocatorInstance.Data;
  if (EmptyTargets.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTargets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyTargets'' @ 1503685c0

void __cdecl
`FPerSolverFieldSystem::ComputeFieldRigidImpulse'::__l2::
_dynamic_atexit_destructor_for__EmptyTargets__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTargets.AllocatorInstance.Data;
  if (EmptyTargets.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTargets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503685e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleProxyProperty,16>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleProxyProperty,17>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FPhysicsObjectPairProperty,9>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FPhysicsObjectProperty,13>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FSuspensionLocation,12>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::
GetChaosPropertyPool<Chaos::FCharacterGroundConstraintDynamicData,15>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503686a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FCharacterGroundConstraintSettings,14>'
::__l2::_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503686c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FKinematicTarget,6>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503686e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FPBDJointSettings,7>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FPBDSuspensionSettings,10>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleDynamicMisc,3>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleMassProps,5>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticlePositionRotation,0>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticlePositionRotation,18>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503687a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleVelocities,1>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503687c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetChaosPropertyPool<Chaos::FParticleVelocities,19>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503687e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FKinematicTarget,6>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074ce8 != DAT_155074cf8) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074cf0 != (void *)0x0) {
    FMemory::Free(DAT_155074cf0);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FPBDJointSettings,7>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074d20 != DAT_155074d30) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074d28 != (void *)0x0) {
    FMemory::Free(DAT_155074d28);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503688c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticleDynamicMisc,3>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074d48 != DAT_155074d58) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074d50 != (void *)0x0) {
    FMemory::Free(DAT_155074d50);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticleDynamics,2>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074dd8 != DAT_155074de8) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074de0 != (void *)0x0) {
    FMemory::Free(DAT_155074de0);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 1503689a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticleMassProps,5>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074db8 != DAT_155074dc8) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074dc0 != (void *)0x0) {
    FMemory::Free(DAT_155074dc0);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticleNonFrequentData,4>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074df8 != DAT_155074e08) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074e00 != (void *)0x0) {
    FMemory::Free(DAT_155074e00);
  }
  DestructItems<Chaos::FParticleNonFrequentData,int>(_ErrorPool,DAT_155074df8);
  if (_ErrorPool != (FParticleNonFrequentData *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticlePositionRotation,0>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074d90 != DAT_155074da0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074d98 != (void *)0x0) {
    FMemory::Free(DAT_155074d98);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesPool::GetPool<Chaos::FParticleVelocities,1>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (DAT_155074d68 != DAT_155074d78) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (DAT_155074d70 != (void *)0x0) {
    FMemory::Free(DAT_155074d70);
  }
  if (_ErrorPool != (void *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetShapePool<Chaos::FCollisionData,0>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _ErrorPool;
  if (_ErrorPool == (void *)0x0) {
    return;
  }
  if (_ErrorPool != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'ErrorPool'' @ 150368ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Chaos::FDirtyPropertiesManager::GetShapePool<Chaos::FMaterialData,1>'::__l2::
_dynamic_atexit_destructor_for__ErrorPool__(void)

{
  DestructItems<Chaos::FMaterialData,int>(_ErrorPool,DAT_155074fb0);
  if (_ErrorPool != (FMaterialData *)0x0) {
    FMemory::Free(_ErrorPool);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FAutoRTFMChaosPhysSceneLockAutomationTestInstance'' @ 150368be0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutoRTFMChaosPhysSceneLockAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMChaosPhysSceneLockAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAutoRTFMChaosRefCountedObjectAutomationTestInstance'' @ 150368c00

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutoRTFMChaosRefCountedObjectAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMChaosRefCountedObjectAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'USkeletalMeshSimulationComponentLogging'' @ 150368c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__USkeletalMeshSimulationComponentLogging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
  return;
}

