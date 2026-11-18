// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 637

// `dynamic_initializer_for_'CVarEnableRigidBodyNodeWithControl'' @ 1413e34a0

void __cdecl _dynamic_initializer_for__CVarEnableRigidBodyNodeWithControl__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableRigidBodyNodeWithControl,L"p.RigidBodyNodeWithControl",local_res8,
             L"Enables/disables the whole rigid body node system. When disabled, avoids all allocations and runtime costs. Can be used to disable RB Nodes on low-end platforms."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControl__);
  return;
}

// `dynamic_initializer_for_'CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton'' @ 1413e34f0

void __cdecl
_dynamic_initializer_for__CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton,
             L"p.RigidBodyNodeWithControl.EnableMatchingConstraintsToSkeleton",local_res8,
             L"Enables/disables the code that modifies physics asset constraint transforms to match the Skeleton at runtime."
             ,0x40);
  atexit(
        _dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton__
        );
  return;
}

// `dynamic_initializer_for_'CVarEnableRigidBodyNodeWithControlSimulation'' @ 1413e3540

void __cdecl _dynamic_initializer_for__CVarEnableRigidBodyNodeWithControlSimulation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableRigidBodyNodeWithControlSimulation,
             L"p.RigidBodyNodeWithControl.EnableSimulation",local_res8,
             L"Runtime Enable/Disable RB Node Simulation for debugging and testing (node is initialized and bodies and constraints are created, even when disabled.)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControlSimulation__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlDebugDraw'' @ 1413e3590

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlDebugDraw__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlDebugDraw,L"p.RigidBodyNodeWithControl.DebugDraw",
             &bRBANWithControl_DebugDraw,
             L"Whether to debug draw the rigid body simulation state. Requires p.Chaos.DebugDraw.Enabled 1 to function as well."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlDebugDraw__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlDeferredSimulationDefault'' @ 1413e35e0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlDeferredSimulationDefault__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlDeferredSimulationDefault,
             L"p.RigidBodyNodeWithControl.DeferredSimulationDefault",
             &bRBANWithControl_DeferredSimulationDefault,
             L"Whether rigid body simulations are deferred one frame for assets that don\'t opt into a specific simulation timing"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlDeferredSimulationDefault__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlEnableComponentAcceleration'' @ 1413e3630

void __cdecl
_dynamic_initializer_for__CVarRigidBodyNodeWithControlEnableComponentAcceleration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlEnableComponentAcceleration,
             L"p.RigidBodyNodeWithControl.EnableComponentAcceleration",
             &bRBANWithControl_EnableComponentAcceleration,
             L"Enable/Disable the simple acceleration transfer system for component- or bone-space simulation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlEnableComponentAcceleration__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlEnableTimeBasedReset'' @ 1413e3680

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlEnableTimeBasedReset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlEnableTimeBasedReset,
             L"p.RigidBodyNodeWithControl.EnableTimeBasedReset",
             &bRBANWithControl_EnableTimeBasedReset,
             L"If true, Rigid Body nodes are reset when they have not been updated for a while (default true)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlEnableTimeBasedReset__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlIncludeClothColliders'' @ 1413e36d0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlIncludeClothColliders__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlIncludeClothColliders,
             L"p.RigidBodyNodeWithControl.IncludeClothColliders",
             &bRBANWithControl_IncludeClothColliders,
             L"Include cloth colliders as kinematic bodies in the immediate physics simulation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlIncludeClothColliders__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlLODThreshold'' @ 1413e3720

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlLODThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRigidBodyNodeWithControlLODThreshold,L"p.RigidBodyWithControlLODThreshold",
             local_res8,
             L"Max LOD that rigid body node is allowed to run on. Provides a global threshold that overrides per-node the LODThreshold property. -1 means no override."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlLODThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlMaxSteps'' @ 1413e3770

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlMaxSteps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlMaxSteps,L"p.RigidBodyNodeWithControl.MaxSubSteps",
             &RBANWithControl_MaxSubSteps,
             L"Set the maximum number of simulation steps in the update loop",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlMaxSteps__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSimulationTaskPriority'' @ 1413e37c0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSimulationTaskPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSimulationTaskPriority,
             L"p.RigidBodyNodeWithControl.TaskPriority.Simulation",
             &GRigidBodyNodeWithControlSimulationTaskPriority,
             L"Task priority for running the rigid body node simulation task (0 = foreground/high, 1 = foreground/normal, 2 = background/high, 3 = background/normal, 4 = background/low)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSimulationTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc'' @ 1413e3810

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc,
             L"p.RigidBodyNodeWithControl.Space.MaxAngularAcceleration",
             &RBANWithControl_SimSpaceOverride.MaxAngularAcceleration,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceMaxCompAngVel'' @ 1413e3860

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngVel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceMaxCompAngVel,
             L"p.RigidBodyNodeWithControl.Space.MaxAngularVelocity",
             &RBANWithControl_SimSpaceOverride.MaxAngularVelocity,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngVel__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc'' @ 1413e38b0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc,
             L"p.RigidBodyNodeWithControl.Space.MaxLinearAcceleration",
             &RBANWithControl_SimSpaceOverride.MaxLinearAcceleration,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceMaxCompLinVel'' @ 1413e3900

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinVel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceMaxCompLinVel,
             L"p.RigidBodyNodeWithControl.Space.MaxLinearVelocity",
             &RBANWithControl_SimSpaceOverride.MaxLinearVelocity,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinVel__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceOverride'' @ 1413e3950

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceOverride__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceOverride,L"p.RigidBodyNodeWithControl.Space.Override"
             ,&bRBANWithControl_SimSpace_EnableOverride,
             L"Force-enable the advanced simulation space movement forces",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceOverride__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceVelScaleZ'' @ 1413e39a0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceVelScaleZ__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceVelScaleZ,
             L"p.RigidBodyNodeWithControl.Space.VelocityScaleZ",
             &RBANWithControl_SimSpaceOverride.VelocityScaleZ,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceVelScaleZ__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlSpaceWorldAlpha'' @ 1413e39f0

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlSpaceWorldAlpha__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlSpaceWorldAlpha,
             L"p.RigidBodyNodeWithControl.Space.WorldAlpha",
             &RBANWithControl_SimSpaceOverride.WorldAlpha,
             L"RBANWithControl SimSpaceSettings overrides",0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceWorldAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarRigidBodyNodeWithControlWorldObjectExpiry'' @ 1413e3a40

void __cdecl _dynamic_initializer_for__CVarRigidBodyNodeWithControlWorldObjectExpiry__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRigidBodyNodeWithControlWorldObjectExpiry,
             L"p.RigidBodyNodeWithControl.WorldObjectExpiry",&RBANWithControl_WorldObjectExpiry,
             L"World objects are removed from the simulation if not detected after this many tests",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlWorldObjectExpiry__);
  return;
}

// `dynamic_initializer_for_'GRegisterPhysicsControlObjectVersion'' @ 1413e3a90

void __cdecl _dynamic_initializer_for__GRegisterPhysicsControlObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FPhysicsControlObjectVersion::GUID;
  local_38 = FPhysicsControlObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x1c,L"Dev-PhysicsControl",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterPhysicsControlObjectVersion__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Animation_RigidBodyWithControl'' @ 1413e3af0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Animation_RigidBodyWithControl__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Animation_RigidBodyWithControl,L"Animation_RigidBodyWithControl",
             (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogPhysicsControl'' @ 1413e3b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPhysicsControl__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPhysicsControl,L"LogPhysicsControl",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPhysicsControl__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPhysicsControl'' @ 1413e3b80

void __cdecl _dynamic_initializer_for__ModuleRegistrantPhysicsControl__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PhysicsControl";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PhysicsControl",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPhysicsControlModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RBANWithControl_SimSpaceOverride'' @ 1413e3bd0

void __cdecl _dynamic_initializer_for__RBANWithControl_SimSpaceOverride__(void)

{
  FSimSpaceSettings::FSimSpaceSettings(&RBANWithControl_SimSpaceOverride);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413e3bf0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413e3c80

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413e3d10

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413e3da0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413e3e30

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413e3ec0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413e3f50

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413e3fe0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413e4070

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413e4100

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

// `dynamic_initializer_for_'StatPtr_STAT_ImmediateEvaluateSkeletalControl'' @ 1413e4190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmediateEvaluateSkeletalControl__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmediateEvaluateSkeletalControl ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImmediateEvaluateSkeletalControl");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateEvaluateSkeletalControl,*pFVar1,
               L"FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread",
               "STATGROUP_ImmediatePhysics","STATCAT_Advanced",L"Immediate Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImmediateUpdateWorldForces'' @ 1413e4220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmediateUpdateWorldForces__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmediateUpdateWorldForces ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldForces>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImmediateUpdateWorldForces");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateUpdateWorldForces,*pFVar1,
               L"FAnimNode_RigidBodyWithControl::UpdateWorldForces","STATGROUP_ImmediatePhysics",
               "STATCAT_Advanced",L"Immediate Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImmediateUpdateWorldGeometry'' @ 1413e42b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmediateUpdateWorldGeometry__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmediateUpdateWorldGeometry ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImmediateUpdateWorldGeometry");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateUpdateWorldGeometry,*pFVar1,
               L"FAnimNode_RigidBodyWithControl::UpdateWorldGeometry","STATGROUP_ImmediatePhysics",
               "STATCAT_Advanced",L"Immediate Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsControl_UpdateControls'' @ 1413e4340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsControl_UpdateControls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsControl_UpdateControls ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsControl_UpdateControls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsControl_UpdateControls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsControl_UpdateControls,*pFVar1,
               L"PhysicsControl UpdateControls","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsControl_UpdateTargetCaches'' @ 1413e43d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsControl_UpdateTargetCaches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsControl_UpdateTargetCaches ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsControl_UpdateTargetCaches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsControl_UpdateTargetCaches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsControl_UpdateTargetCaches,*pFVar1,
               L"PhysicsControl UpdateTargetCaches","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords'' @ 1413e4460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords>
       )0x0) {
    pFVar1 = FName::FName(local_res8,
                          "STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords"
                         );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &
               StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords
               ,*pFVar1,
               L"RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords",
               "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls'' @ 1413e44f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyControls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls,
               *pFVar1,L"RigidBodyNodeWithControl_ApplyControls","STATGROUP_Anim","STATCAT_Advanced"
               ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas'' @ 1413e4580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas,*pFVar1,
               L"RigidBodyNodeWithControl_ApplyControlsAndModifierDatas","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers'' @ 1413e4610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers,*pFVar1,
               L"RigidBodyNodeWithControl_ApplyControlsAndModifiers","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile'' @ 1413e46a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile,*pFVar1,
               L"RigidBodyNodeWithControl_ApplyCurrentConstraintProfile","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets'' @ 1413e4730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyKinematicTargets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets,*pFVar1,
               L"RigidBodyNodeWithControl_ApplyKinematicTargets","STATGROUP_Anim","STATCAT_Advanced"
               ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers'' @ 1413e47c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyModifiers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_ApplyModifiers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers,
               *pFVar1,L"RigidBodyNodeWithControl_ApplyModifiers","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_Eval'' @ 1413e4850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Eval,*pFVar1,
               L"RigidBodyNodeWithControl_Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers'' @ 1413e48e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers,*pFVar1,
               L"RigidBodyNodeWithControl_InitControlsAndBodyModifiers","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets'' @ 1413e4970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets,*pFVar1,
               L"RigidBodyNodeWithControl_LogControlsModifiersAndSets","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate'' @ 1413e4a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PoseUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_PoseUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate,
               *pFVar1,L"RigidBodyNodeWithControl_PoseUpdate","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate'' @ 1413e4a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PreUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_PreUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate,*pFVar1
               ,L"RigidBodyNodeWithControl_PreUpdate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled'' @ 1413e4b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled,*pFVar1,
               L"RigidBodyNodeWithControl_SetPhysicsJointEnabled","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_Simulation'' @ 1413e4bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_Simulation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_Simulation ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Simulation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_Simulation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Simulation,
               *pFVar1,L"RigidBodyNodeWithControl_Simulation","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait'' @ 1413e4c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_SimulationWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait,
               *pFVar1,L"RigidBodyNodeWithControl_SimulationWait","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_Update'' @ 1413e4cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_Update__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_Update ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Update>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Update,*pFVar1,
               L"RigidBodyNodeWithControl_Update","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects'' @ 1413e4d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_UpdateWorldObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyNodeWithControl_UpdateWorldObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects,*pFVar1,
               L"RigidBodyNodeWithControl_UpdateWorldObjects","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyWithControlInitPhysicsTime'' @ 1413e4df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyWithControlInitPhysicsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyWithControlInitPhysicsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlInitPhysicsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyWithControlInitPhysicsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyWithControlInitPhysicsTime,
               *pFVar1,L"RigidBodyNodeWithControl_InitPhysics","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RigidBodyWithControlSetupControlsTime'' @ 1413e4e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RigidBodyWithControlSetupControlsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RigidBodyWithControlSetupControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlSetupControlsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RigidBodyWithControlSetupControlsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyWithControlSetupControlsTime,
               *pFVar1,L"RigidBodyNodeWithControl_SetupControls","STATGROUP_Anim","STATCAT_Advanced"
               ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h__Script_PhysicsControl_902751972'' @ 1413e4f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h__Script_PhysicsControl_902751972__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_AnimNode_RigidBodyWithControl_h__Script_PhysicsControl_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h__Script_PhysicsControl_2152672420'' @ 1413e4f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h__Script_PhysicsControl_2152672420__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h__Script_PhysicsControl_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h__Script_PhysicsControl_2167900801'' @ 1413e4fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h__Script_PhysicsControl_2167900801__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h__Script_PhysicsControl_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h__Script_PhysicsControl_1236265215'' @ 1413e4ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h__Script_PhysicsControl_1236265215__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h__Script_PhysicsControl_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h__Script_PhysicsControl_839097504'' @ 1413e5040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h__Script_PhysicsControl_839097504__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h__Script_PhysicsControl_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h__Script_PhysicsControl_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h__Script_PhysicsControl_1504653247'' @ 1413e5090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h__Script_PhysicsControl_1504653247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,0x13,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h__Script_PhysicsControl_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h__Script_PhysicsControl_396069209'' @ 1413e50e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h__Script_PhysicsControl_396069209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlLimbData_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_RigidBodyControlData_h__Script_PhysicsControl_4155563638'' @ 1413e5120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_RigidBodyControlData_h__Script_PhysicsControl_4155563638__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsControl",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_RigidBodyControlData_h__Script_PhysicsControl_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_PhysicsControl'' @ 1413e5160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_PhysicsControl__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6850ecb3;
  local_res8[0].DeclarationsHash = 0x5183d796;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_PhysicsControl,L"/Script/PhysicsControl",
             &Z_Registration_Info_UPackage__Script_PhysicsControl,local_res8);
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision @ 14d9ad9e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9ada70

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlControlAndModifierParameters,&UE::CoreUObject::Private::Construct<FPhysicsControlControlAndModifierParameters>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlControlAndModifierParameters>,&UE::CoreUObject::Private::Destruct<FPhysicsControlControlAndModifierParameters>,&UE::CoreUObject::Private::Copy<FPhysicsControlControlAndModifierParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnable_SetBit @ 14d9adab0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones @ 14d9adac0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9adb00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9adb10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled @ 14d9adb20

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisableCollision_SetBit @ 14d9adb60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics::
NewProp_bDisableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9adb70

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromPhysicsControlAsset_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14d9adb80

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierUpdates_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlControlAndModifierUpdates,&UE::CoreUObject::Private::Construct<FPhysicsControlControlAndModifierUpdates>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlControlAndModifierUpdates>,&UE::CoreUObject::Private::Destruct<FPhysicsControlControlAndModifierUpdates>,&UE::CoreUObject::Private::Copy<FPhysicsControlControlAndModifierUpdates>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision @ 14d9adbc0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetDisableCollision_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromPhysicsControlAsset @ 14d9adc00

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromPhysicsControlAsset
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromPhysicsControlAsset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 14d9adc40

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::
NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled @ 14d9adc50

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseSkeletalAnimation_SetBit @ 14d9adc90

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics::
NewProp_bUseSkeletalAnimation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14d9adca0

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlAndBodyModifierCreationDatas,&UE::CoreUObject::Private::Construct<FPhysicsControlAndBodyModifierCreationDatas>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlAndBodyModifierCreationDatas>,&UE::CoreUObject::Private::Destruct<FPhysicsControlAndBodyModifierCreationDatas>,&UE::CoreUObject::Private::Copy<FPhysicsControlAndBodyModifierCreationDatas>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation @ 14d9adce0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsInSetUseSkeletalAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones @ 14d9add20

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBones_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9add60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseData_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9add70

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseData @ 14d9add80

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14d9addc0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics
::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9ade60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatas_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9ade70

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatas_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile @ 14d9ade80

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromLimbBonesAndConstraintProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatas @ 14d9adfc0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatas(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatas_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatasInSet @ 14d9ae010

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatasInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseDatasInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh @ 14d9ae080

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9ae0c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9ae0d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9ae1e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsControlAsset_NoRegister @ 14d9ae1f0

UClass * __cdecl Z_Construct_UClass_UPhysicsControlAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlAsset",
               &Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton,
               UPhysicsControlAsset::StaticRegisterNativesUPhysicsControlAsset,0x210,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsControlAsset>,
               InternalVTableHelperCtorCaller<UPhysicsControlAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsControl_MapConstraintsBehaviorType @ 14d9ae2a0

UEnum * __cdecl Z_Construct_UEnum_PhysicsControl_MapConstraintsBehaviorType(void)

{
  if (Z_Registration_Info_UEnum_MapConstraintsBehaviorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_MapConstraintsBehaviorType.InnerSingleton,
               &Z_Construct_UEnum_PhysicsControl_MapConstraintsBehaviorType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_MapConstraintsBehaviorType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas @ 14d9ae2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlAndBodyModifierCreationDatas.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlCharacterSetupData @ 14d9ae360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlCharacterSetupData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlCharacterSetupData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierParameters @ 14d9ae3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierParameters_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierUpdates @ 14d9ae460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierUpdates(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierUpdates.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierUpdates.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierUpdates_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierUpdates.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierUpdates.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FPhysicsControlSetUpdates @ 14d9ae4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSetUpdates(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlSetUpdates_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigidBodyControlTargets @ 14d9ae560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigidBodyControlTargets(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigidBodyControlTargets_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigidBodyControlTargets.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRigidBodyKinematicTargets @ 14d9ae5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigidBodyKinematicTargets(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTargets.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTargets.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigidBodyKinematicTargets_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTargets.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTargets.InnerSingleton;
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

// NewProp_bEnabled_SetBit @ 14d9ae660

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics
::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier @ 14d9ae670

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultiplier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// MapConstraintsBehaviorType_StaticEnum @ 14d9ae6b0

UEnum * __cdecl MapConstraintsBehaviorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_MapConstraintsBehaviorType,(UObject *)pUVar1
                       ,L"MapConstraintsBehaviorType");
  }
  return Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton;
}

// NewProp_bEnableControl_SetBit @ 14d9ae6f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9ae700

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile @ 14d9ae710

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9ae750

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8a) = 1;
  return;
}

// NewProp_bDefaultToSkeletalMeshPhysicsAsset_SetBit @ 14d9ae760

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bDefaultToSkeletalMeshPhysicsAsset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bUpdateCacheEveryFrame_SetBit @ 14d9ae770

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bUpdateCacheEveryFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  return;
}

// NewProp_bCalculateVelocitiesForWorldGeometry_SetBit @ 14d9ae780

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bCalculateVelocitiesForWorldGeometry_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) | 1;
  return;
}

// NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit @ 14d9ae790

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) | 2;
  return;
}

// NewProp_bUseExternalClothCollision_SetBit @ 14d9ae7a0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bUseExternalClothCollision_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) | 4;
  return;
}

// NewProp_bMakeKinematicConstraints_SetBit @ 14d9ae7b0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bMakeKinematicConstraints_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) | 8;
  return;
}

// NewProp_bEnableWorldGeometry_SetBit @ 14d9ae7c0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bEnableWorldGeometry_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) | 1;
  return;
}

// NewProp_bIncludeSelf_SetBit @ 14d9ae7d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics
::NewProp_bIncludeSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bOverrideWorldGravity_SetBit @ 14d9ae7e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bOverrideWorldGravity_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) | 2;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers @ 14d9ae7f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTransferBoneVelocities_SetBit @ 14d9ae830

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bTransferBoneVelocities_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) | 4;
  return;
}

// NewProp_bEnabled_SetBit @ 14d9ae840

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics
::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bFreezeIncomingPoseOnStart_SetBit @ 14d9ae850

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bFreezeIncomingPoseOnStart_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) | 8;
  return;
}

// NewProp_bEnableControls_SetBit @ 14d9ae880

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::NewProp_bEnableControls_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x310) = 1;
  return;
}

// NewProp_bEnableCharacterSetupData_SetBit @ 14d9ae8a0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::
NewProp_bEnableCharacterSetupData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x430) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9ae8b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliersInSet_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewStructOps @ 14d9aea20

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_RigidBodyWithControl,&UE::CoreUObject::Private::Construct<FAnimNode_RigidBodyWithControl>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_RigidBodyWithControl>,&UE::CoreUObject::Private::Destruct<FAnimNode_RigidBodyWithControl>,&UE::CoreUObject::Private::Copy<FAnimNode_RigidBodyWithControl>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow @ 14d9aea60

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshAndConstraintProfileBelow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliersInSet @ 14d9aeaa0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliersInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlSparseMultipliersInSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeSelf_SetBit @ 14d9aeae0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics::
NewProp_bIncludeSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bUseSkeletalAnimation_SetBit @ 14d9aeaf0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::
NewProp_bUseSkeletalAnimation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9aeb00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9aeb10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow @ 14d9aeb20

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsFromSkeletalMeshBelow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation @ 14d9aeb60

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlsUseSkeletalAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9aeba0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9aebb0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9aebc0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9aebd0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier @ 14d9aecb0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedBodyModifier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget @ 14d9aecf0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTarget_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9aed90

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9aeda0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9aedb0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9aedc0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9aedd0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl @ 14d9aede0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateNamedControl_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_PhysicsControl @ 14d9aee20

UPackage * __cdecl Z_Construct_UPackage__Script_PhysicsControl(void)

{
  if (Z_Registration_Info_UPackage__Script_PhysicsControl.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_PhysicsControl.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_PhysicsControl.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation @ 14d9aee60

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyAllControlsAndBodyModifiers @ 14d9aeea0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyAllControlsAndBodyModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyAllControlsAndBodyModifiers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeParentBone_SetBit @ 14d9aeee0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bIncludeParentBone_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 1;
  return;
}

// NewProp_bCreateWorldSpaceControls_SetBit @ 14d9aeef0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::
NewProp_bCreateWorldSpaceControls_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 2;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9aef00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bCreateParentSpaceControls_SetBit @ 14d9aef10

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::
NewProp_bCreateParentSpaceControls_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 4;
  return;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9aef20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9aef30

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bCreateBodyModifiers_SetBit @ 14d9aef80

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewProp_bCreateBodyModifiers_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 8;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9aef90

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9aefa0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewStructOps @ 14d9aeff0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlLimbSetupData,&UE::CoreUObject::Private::Construct<FPhysicsControlLimbSetupData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlLimbSetupData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlLimbSetupData>,&UE::CoreUObject::Private::Copy<FPhysicsControlLimbSetupData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9af030

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier @ 14d9af050

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations @ 14d9af100

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientations_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9af140

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9af150

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9af160

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9af180

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers @ 14d9af190

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9af1d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewStructOps @ 14d9af200

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlLimbBones,&UE::CoreUObject::Private::Construct<FPhysicsControlLimbBones>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlLimbBones>,&UE::CoreUObject::Private::Destruct<FPhysicsControlLimbBones>,&UE::CoreUObject::Private::Copy<FPhysicsControlLimbBones>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet @ 14d9af3b0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyBodyModifiersInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray @ 14d9af3f0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsFromArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9af430

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9af440

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9af450

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsInSet_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9af460

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsInSet_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl @ 14d9af470

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9af4b0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlNames,&UE::CoreUObject::Private::Construct<FPhysicsControlNames>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNames>,&UE::CoreUObject::Private::Destruct<FPhysicsControlNames>,&UE::CoreUObject::Private::Copy<FPhysicsControlNames>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsInSet @ 14d9af530

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetOrientationsInSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9af5b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9af5c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9af5d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9af5e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls @ 14d9af5f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControls_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9af670

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlCharacterSetupData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlCharacterSetupData,&UE::CoreUObject::Private::Construct<FPhysicsControlCharacterSetupData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlCharacterSetupData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlCharacterSetupData>,&UE::CoreUObject::Private::Copy<FPhysicsControlCharacterSetupData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet @ 14d9af6f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_DestroyControlsInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses @ 14d9af730

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPoses_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9af7d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9af840

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9af850

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames @ 14d9af870

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetAllBodyModifierNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9af8b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsControlAsset @ 14d9af8c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsControlAsset(void)

{
  if (Z_Registration_Info_UClass_UPhysicsControlAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsControlAsset.OuterSingleton,
               &Z_Construct_UClass_UPhysicsControlAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsControlAsset.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames @ 14d9af970

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetAllControlNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition @ 14d9af9b0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9afa60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierExists_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9afab0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9afac0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9afad0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3e) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierExists @ 14d9afae0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierExists(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierExists_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9afc20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3f) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d9afc50

void * __thiscall
FPhysicsControlModule::_scalar_deleting_destructor_(FPhysicsControlModule *this,uint param_1)

{
  *this = (FPhysicsControlModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet @ 14d9afc90

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetBodyModifierNamesInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation @ 14d9afcd0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionAndOrientation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9afd10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9afd20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientation @ 14d9afd30

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9afd70

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9afd80

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions @ 14d9afd90

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9afdd0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9afde0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9afdf0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x46) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9afe00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x47) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations @ 14d9affa0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientations_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b0130

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray_Statics
::NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9b0140

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray_Statics
::NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9b0150

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray @ 14d9b0160

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsFromArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPhysicsControlBPLibrary @ 14d9b01a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsControlBPLibrary(void)

{
  if (Z_Registration_Info_UClass_UPhysicsControlBPLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsControlBPLibrary.OuterSingleton,
               &Z_Construct_UClass_UPhysicsControlBPLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsControlBPLibrary.OuterSingleton;
}

// NewProp_bEnableControl_SetBit @ 14d9b01e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsInSet_Statics
::NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData @ 14d9b01f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlModifierSparseData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlModifierSparseData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlModifierSparseData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlModifierSparseData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlNamedControlParameters @ 14d9b0270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlNamedControlParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlNamedControlParameters_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlNamedModifierParameters @ 14d9b02f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlNamedModifierParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedModifierParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlNamedModifierParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlNamedModifierParameters_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedModifierParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlNamedModifierParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlSparseData @ 14d9b0370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSparseData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSparseData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlSparseData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSparseData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlSparseData.InnerSingleton;
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

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9b03f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsInSet_Statics
::NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  return;
}

// Z_Construct_UScriptStruct_FRigidBodyWithControlReference @ 14d9b0400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigidBodyWithControlReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyWithControlReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigidBodyWithControlReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigidBodyWithControlReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigidBodyWithControlReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigidBodyWithControlReference.InnerSingleton;
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

// NewStructOps @ 14d9b0480

void * __cdecl Z_Construct_UScriptStruct_FRigidBodyWithControlReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigidBodyWithControlReference,&UE::CoreUObject::Private::Construct<FRigidBodyWithControlReference>,&UE::CoreUObject::Private::ConstructForTests<FRigidBodyWithControlReference>,&UE::CoreUObject::Private::Destruct<FRigidBodyWithControlReference>,&UE::CoreUObject::Private::Copy<FRigidBodyWithControlReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsInSet @ 14d9b04c0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsAndOrientationsInSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b0500

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9b0510

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9b0520

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray @ 14d9b0530

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsFromArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientations @ 14d9b0570

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneOrientations_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPhysicsControlComponent_NoRegister @ 14d9b05b0

UClass * __cdecl Z_Construct_UClass_UPhysicsControlComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlComponent",
               &Z_Registration_Info_UClass_UPhysicsControlComponent.InnerSingleton,
               UPhysicsControlComponent::StaticRegisterNativesUPhysicsControlComponent,0x4c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsControlComponent>,
               InternalVTableHelperCtorCaller<UPhysicsControlComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlComponent.InnerSingleton;
}

// NewProp_bEnableControl_SetBit @ 14d9b06b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsInSet_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_AddControlParameters @ 14d9b06c0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_AddControlParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_AddControlParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9b0700

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsInSet_Statics::
NewProp_bApplyControlPointToTarget_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsInSet @ 14d9b0820

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetPositionsInSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePosition @ 14d9b0870

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_AddModifierParameters @ 14d9b0940

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_AddModifierParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_AddModifierParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b09c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b09d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b09e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister @ 14d9b09f0

UClass * __cdecl Z_Construct_UClass_UPhysicsControlInitializerComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlInitializerComponent",
               &Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton,
               UPhysicsControlInitializerComponent::
               StaticRegisterNativesUPhysicsControlInitializerComponent,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsControlInitializerComponent>,
               InternalVTableHelperCtorCaller<UPhysicsControlInitializerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePositions @ 14d9b0b70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePositions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBonePositions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets @ 14d9b0bf0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargets_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleControlParameters @ 14d9b0c70

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleControlParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleControlParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b0db0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransform @ 14d9b0dc0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet @ 14d9b0e40

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlTargetsInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleModifierParameters @ 14d9b0e80

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleModifierParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_AddMultipleModifierParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseSkeletalAnimation_SetBit @ 14d9b0f00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::
NewProp_bUseSkeletalAnimation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b0f10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b0f20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransforms @ 14d9b0f30

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetCachedBoneTransforms_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b0ff0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation @ 14d9b1000

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlUseSkeletalAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendControlParametersThroughSet @ 14d9b1040

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendControlParametersThroughSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendControlParametersThroughSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlData @ 14d9b1080

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_UpdateControls @ 14d9b1140

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_UpdateControls(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_UpdateControls_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b11f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled @ 14d9b1340

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlEnabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_UpdateTargetCaches @ 14d9b1380

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_UpdateTargetCaches(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_UpdateTargetCaches_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendModifierParametersThroughSet @ 14d9b13c0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendModifierParametersThroughSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendModifierParametersThroughSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b1500

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetControlExists_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bShowDebugVisualization_SetBit @ 14d9b1610

void __cdecl
Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugVisualization_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x280) = 1;
  return;
}

// NewProp_bShowDebugControlList_SetBit @ 14d9b1630

void __cdecl
Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugControlList_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x288) = 1;
  return;
}

// NewProp_bShowDebugBodyModifierList_SetBit @ 14d9b1640

void __cdecl
Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bShowDebugBodyModifierList_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a0) = 1;
  return;
}

// NewProp_bWarnAboutInvalidNames_SetBit @ 14d9b1650

void __cdecl
Z_Construct_UClass_UPhysicsControlComponent_Statics::NewProp_bWarnAboutInvalidNames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlExists @ 14d9b1660

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlExists(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlExists_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bAttemptToRecreateDisabledControls_SetBit @ 14d9b16e0

void __cdecl
Z_Construct_UClass_UPhysicsControlComponent_Statics::
NewProp_bAttemptToRecreateDisabledControls_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendParameters @ 14d9b1780

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_BlendParameters_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b17c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier @ 14d9b1810

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlMultiplier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigidBodyControlTarget @ 14d9b1850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigidBodyControlTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyControlTarget.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigidBodyControlTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigidBodyControlTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigidBodyControlTarget.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigidBodyControlTarget.InnerSingleton;
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

// Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControl @ 14d9b18d0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControl_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FRigidBodyKinematicTarget @ 14d9b1910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRigidBodyKinematicTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FRigidBodyKinematicTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRigidBodyKinematicTarget.InnerSingleton;
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

// NewStructOps @ 14d9b1990

void * __cdecl Z_Construct_UScriptStruct_FRigidBodyControlTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigidBodyControlTarget,&UE::CoreUObject::Private::Construct<FRigidBodyControlTarget>,&UE::CoreUObject::Private::ConstructForTests<FRigidBodyControlTarget>,&UE::CoreUObject::Private::Destruct<FRigidBodyControlTarget>,&UE::CoreUObject::Private::Copy<FRigidBodyControlTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet @ 14d9b19d0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlNamesInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14d9b1a10

void __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControlPure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9b1a20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControlPure @ 14d9b1a30

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControlPure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_ConvertToRigidBodyWithControlPure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget @ 14d9b1a70

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetControlTarget_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b1ab0

void * __cdecl Z_Construct_UScriptStruct_FRigidBodyControlTargets_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigidBodyControlTargets,&UE::CoreUObject::Private::Construct<FRigidBodyControlTargets>,&UE::CoreUObject::Private::ConstructForTests<FRigidBodyControlTargets>,&UE::CoreUObject::Private::Destruct<FRigidBodyControlTargets>,&UE::CoreUObject::Private::Copy<FRigidBodyControlTargets>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_GetBodyModifierNamesInSet @ 14d9b1af0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_GetBodyModifierNamesInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_GetBodyModifierNamesInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh @ 14d9b1b30

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetLimbBonesFromSkeletalMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_GetControlNamesInSet @ 14d9b1bb0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_GetControlNamesInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_GetControlNamesInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b1c00

void * __cdecl Z_Construct_UScriptStruct_FRigidBodyKinematicTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigidBodyKinematicTarget,&UE::CoreUObject::Private::Construct<FRigidBodyKinematicTarget>,&UE::CoreUObject::Private::ConstructForTests<FRigidBodyKinematicTarget>,&UE::CoreUObject::Private::Destruct<FRigidBodyKinematicTarget>,&UE::CoreUObject::Private::Copy<FRigidBodyKinematicTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlBPLibrary_SetOverridePhysicsAsset @ 14d9b1c80

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlBPLibrary_SetOverridePhysicsAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlBPLibrary_SetOverridePhysicsAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier @ 14d9b1d50

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingBodyModifier_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b1e00

void * __cdecl Z_Construct_UScriptStruct_FRigidBodyKinematicTargets_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRigidBodyKinematicTargets,&UE::CoreUObject::Private::Construct<FRigidBodyKinematicTargets>,&UE::CoreUObject::Private::ConstructForTests<FRigidBodyKinematicTargets>,&UE::CoreUObject::Private::Destruct<FRigidBodyKinematicTargets>,&UE::CoreUObject::Private::Copy<FRigidBodyKinematicTargets>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl @ 14d9b1e40

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_GetSetsContainingControl_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b1e80

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_InvokeControlProfile_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_InvokeControlProfile @ 14d9b1e90

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_InvokeControlProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_InvokeControlProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersInSetToCachedBoneTransforms @ 14d9b1f00

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersInSetToCachedBoneTransforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersInSetToCachedBoneTransforms_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b1ff0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersToCachedBoneTransforms_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2000

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersToCachedBoneTransforms_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersToCachedBoneTransforms @ 14d9b2160

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersToCachedBoneTransforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifiersToCachedBoneTransforms_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b21f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifierToCachedBoneTransform_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2200

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifierToCachedBoneTransform_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifierToCachedBoneTransform @ 14d9b2210

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifierToCachedBoneTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_ResetBodyModifierToCachedBoneTransform_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b2250

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint @ 14d9b2260

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_ResetControlPoint_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b22a0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b22b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType @ 14d9b22c0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierCollisionType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b2300

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierData_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2310

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierData @ 14d9b2320

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b2400

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatas_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2430

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatas_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatas @ 14d9b2490

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatas(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatas_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatasInSet @ 14d9b2540

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatasInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierDatasInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b25b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b25c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier @ 14d9b25d0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierGravityMultiplier_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMakeKinematic_SetBit @ 14d9b2610

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::
NewProp_bMakeKinematic_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9b2620

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget @ 14d9b2630

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b2670

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTargetSpace_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2680

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTargetSpace_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTargetSpace @ 14d9b26f0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTargetSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierKinematicTargetSpace_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b27f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2800

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsControlComponent @ 14d9b2810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsControlComponent(void)

{
  if (Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton,
               &Z_Construct_UClass_UPhysicsControlComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsControlComponent.OuterSingleton;
}

// Z_Construct_UEnum_PhysicsControl_EPhysicsControlKinematicTargetSpace @ 14d9b2850

UEnum * __cdecl Z_Construct_UEnum_PhysicsControl_EPhysicsControlKinematicTargetSpace(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.InnerSingleton,
               &Z_Construct_UEnum_PhysicsControl_EPhysicsControlKinematicTargetSpace_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsControl_EPhysicsControlType @ 14d9b2890

UEnum * __cdecl Z_Construct_UEnum_PhysicsControl_EPhysicsControlType(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton,
               &Z_Construct_UEnum_PhysicsControl_EPhysicsControlType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsControlType.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType @ 14d9b28d0

UEnum * __cdecl Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton,
               &Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsMovementType.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsControl_EResetToCachedTargetBehavior @ 14d9b2910

UEnum * __cdecl Z_Construct_UEnum_PhysicsControl_EResetToCachedTargetBehavior(void)

{
  if (Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.InnerSingleton,
               &Z_Construct_UEnum_PhysicsControl_EResetToCachedTargetBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPhysicsControlLimbBones @ 14d9b2950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlLimbBones(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlLimbBones_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlLimbBones.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlNames @ 14d9b29d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlNames(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNames.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlNames.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlNames_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNames.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlNames.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier @ 14d9b2a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSparseMultiplier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlSparseMultiplier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSparseMultiplier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlSparseMultiplier.InnerSingleton;
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

// EResetToCachedTargetBehavior_StaticEnum @ 14d9b2b10

UEnum * __cdecl EResetToCachedTargetBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EResetToCachedTargetBehavior,
                       (UObject *)pUVar1,L"EResetToCachedTargetBehavior");
  }
  return Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType @ 14d9b2b50

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierMovementType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b2bd0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierPhysicsBlendWeight_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UScriptStruct_FPhysicsBodyModifier @ 14d9b2be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsBodyModifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsBodyModifier.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsBodyModifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsBodyModifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsBodyModifier.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPhysicsBodyModifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsBodyModifierCreationData @ 14d9b2c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsBodyModifierCreationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsBodyModifierCreationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControl @ 14d9b2ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControl(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControl.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControl.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControl_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControl.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControl.InnerSingleton;
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

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b2d60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierPhysicsBlendWeight_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// Z_Construct_UScriptStruct_FPhysicsControlCreationData @ 14d9b2d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlCreationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlCreationData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters @ 14d9b2df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlSetUpdate @ 14d9b2e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSetUpdate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdate.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlSetUpdate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdate.InnerSingleton;
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

// EPhysicsMovementType_StaticEnum @ 14d9b2f20

UEnum * __cdecl EPhysicsMovementType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType,(UObject *)pUVar1,
                       L"EPhysicsMovementType");
  }
  return Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet @ 14d9b2fa0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifiersToSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierPhysicsBlendWeight @ 14d9b2fe0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierPhysicsBlendWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierPhysicsBlendWeight_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EPhysicsControlType_StaticEnum @ 14d9b3050

UEnum * __cdecl EPhysicsControlType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType,(UObject *)pUVar1,
                       L"EPhysicsControlType");
  }
  return Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b3090

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b30a0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet @ 14d9b30b0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_AddBodyModifierToSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b30f0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSetUpdate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlSetUpdate,&UE::CoreUObject::Private::Construct<FPhysicsControlSetUpdate>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSetUpdate>,&UE::CoreUObject::Private::Destruct<FPhysicsControlSetUpdate>,&UE::CoreUObject::Private::Copy<FPhysicsControlSetUpdate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType @ 14d9b3130

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersCollisionType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet @ 14d9b31b0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_AddControlsToSet_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b31f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b3210

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 14d9b3260

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSetUpdates_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlSetUpdates,&UE::CoreUObject::Private::Construct<FPhysicsControlSetUpdates>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSetUpdates>,&UE::CoreUObject::Private::Destruct<FPhysicsControlSetUpdates>,&UE::CoreUObject::Private::Copy<FPhysicsControlSetUpdates>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier @ 14d9b32a0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersGravityMultiplier_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet @ 14d9b32e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_AddControlToSet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType @ 14d9b3320

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetCollisionType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier @ 14d9b3360

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EPhysicsControlKinematicTargetSpace_StaticEnum @ 14d9b33a0

UEnum * __cdecl EPhysicsControlKinematicTargetSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsControlKinematicTargetSpace,
                       (UObject *)pUVar1,L"EPhysicsControlKinematicTargetSpace");
  }
  return Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier @ 14d9b33e0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetGravityMultiplier_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetKinematicTargetSpace @ 14d9b3420

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetKinematicTargetSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetKinematicTargetSpace_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 14d9b3460

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 1;
  return;
}

// NewProp_bEnableMovementType_SetBit @ 14d9b3470

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnableMovementType_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 2;
  return;
}

// NewProp_bEnableCollisionType_SetBit @ 14d9b3480

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnableCollisionType_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 4;
  return;
}

// NewProp_bEnableGravityMultiplier_SetBit @ 14d9b3490

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnableGravityMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 8;
  return;
}

// NewProp_bEnablePhysicsBlendWeight_SetBit @ 14d9b34a0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnablePhysicsBlendWeight_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0x10;
  return;
}

// NewProp_bEnableKinematicTargetSpace_SetBit @ 14d9b34b0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnableKinematicTargetSpace_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0x20;
  return;
}

// NewProp_bEnablebUpdateKinematicFromSimulation_SetBit @ 14d9b34c0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::
NewProp_bEnablebUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0x40;
  return;
}

// NewStructOps @ 14d9b34d0

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierSparseData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlModifierSparseData,&UE::CoreUObject::Private::Construct<FPhysicsControlModifierSparseData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlModifierSparseData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlModifierSparseData>,&UE::CoreUObject::Private::Copy<FPhysicsControlModifierSparseData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType @ 14d9b3550

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetMovementType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetPhysicsBlendWeight @ 14d9b3660

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetPhysicsBlendWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetPhysicsBlendWeight_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_APhysicsControlActor @ 14d9b36a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APhysicsControlActor(void)

{
  if (Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton,
               &Z_Construct_UClass_APhysicsControlActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APhysicsControlActor.OuterSingleton;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 14d9b36e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUpdateKinematicFromSimulation_Statics
::NewProp_bUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UPhysicsControlInitializerComponent @ 14d9b36f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsControlInitializerComponent(void)

{
  if (Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton,
               &Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FInitialBodyModifier @ 14d9b3730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInitialBodyModifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInitialBodyModifier.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInitialBodyModifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInitialBodyModifier.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInitialBodyModifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInitialCharacterControls @ 14d9b37b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInitialCharacterControls(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInitialCharacterControls.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInitialCharacterControls.InnerSingleton,
               &Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInitialCharacterControls.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInitialCharacterControls.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInitialPhysicsControl @ 14d9b3830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInitialPhysicsControl(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInitialPhysicsControl.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInitialPhysicsControl.InnerSingleton,
               &Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInitialPhysicsControl.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInitialPhysicsControl.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlData @ 14d9b38b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData @ 14d9b3930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlLimbSetupData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlLimbSetupData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlLimbSetupData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlLimbSetupData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlLimbSetupData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlModifierData @ 14d9b39b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlModifierData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlModifierData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlMultiplier @ 14d9b3a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlMultiplier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicsControlTarget @ 14d9b3ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicsControlTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlTarget.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicsControlTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlTarget.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPhysicsControlTarget.InnerSingleton;
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

// NewStructOps @ 14d9b3b30

void * __cdecl Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInitialPhysicsControl,&UE::CoreUObject::Private::Construct<FInitialPhysicsControl>,&UE::CoreUObject::Private::ConstructForTests<FInitialPhysicsControl>,&UE::CoreUObject::Private::Destruct<FInitialPhysicsControl>,&UE::CoreUObject::Private::Copy<FInitialPhysicsControl>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUpdateKinematicFromSimulation @ 14d9b3b70

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUpdateKinematicFromSimulation
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersInSetUpdateKinematicFromSimulation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b3d00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersKinematicTargetSpace_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b3d10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersKinematicTargetSpace_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 14d9b3d20

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlModifierData_Statics::
NewProp_bUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14d9b3d30

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlModifierData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlModifierData,&UE::CoreUObject::Private::Construct<FPhysicsControlModifierData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlModifierData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlModifierData>,&UE::CoreUObject::Private::Copy<FPhysicsControlModifierData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersKinematicTargetSpace @ 14d9b3df0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersKinematicTargetSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersKinematicTargetSpace_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b3e30

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b3e40

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14d9b3e50

void * __cdecl Z_Construct_UScriptStruct_FInitialBodyModifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInitialBodyModifier,&UE::CoreUObject::Private::Construct<FInitialBodyModifier>,&UE::CoreUObject::Private::ConstructForTests<FInitialBodyModifier>,&UE::CoreUObject::Private::Destruct<FInitialBodyModifier>,&UE::CoreUObject::Private::Copy<FInitialBodyModifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d9b3e90

void * __cdecl Z_Construct_UScriptStruct_FPhysicsBodyModifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsBodyModifier,&UE::CoreUObject::Private::Construct<FPhysicsBodyModifier>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsBodyModifier>,&UE::CoreUObject::Private::Destruct<FPhysicsBodyModifier>,&UE::CoreUObject::Private::Copy<FPhysicsBodyModifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType @ 14d9b3ed0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersMovementType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b3f10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseData_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b3f20

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseData @ 14d9b3f30

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b3f70

void * __cdecl Z_Construct_UScriptStruct_FInitialCharacterControls_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInitialCharacterControls,&UE::CoreUObject::Private::Construct<FInitialCharacterControls>,&UE::CoreUObject::Private::ConstructForTests<FInitialCharacterControls>,&UE::CoreUObject::Private::Destruct<FInitialCharacterControls>,&UE::CoreUObject::Private::Copy<FInitialCharacterControls>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d9b3fb0

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsBodyModifierCreationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsBodyModifierCreationData,&UE::CoreUObject::Private::Construct<FPhysicsBodyModifierCreationData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsBodyModifierCreationData>,&UE::CoreUObject::Private::Destruct<FPhysicsBodyModifierCreationData>,&UE::CoreUObject::Private::Copy<FPhysicsBodyModifierCreationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b4010

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatas_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4020

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatas_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatas @ 14d9b40d0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatas(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatas_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatasInSet @ 14d9b4110

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatasInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierSparseDatasInSet_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14d9b4150

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bUseCustomControlPoint_SetBit @ 14d9b4160

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bUseCustomControlPoint_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewProp_bUseSkeletalAnimation_SetBit @ 14d9b4170

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bUseSkeletalAnimation_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 4;
  return;
}

// NewProp_bDisableCollision_SetBit @ 14d9b4180

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bDisableCollision_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 8;
  return;
}

// NewProp_bOnlyControlChildObject_SetBit @ 14d9b4190

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bOnlyControlChildObject_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x10;
  return;
}

// NewProp_bEnableLinearStrength_SetBit @ 14d9b41a0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnableLinearStrength_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x20;
  return;
}

// NewProp_bEnableLinearDampingRatio_SetBit @ 14d9b41b0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableLinearDampingRatio_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x40;
  return;
}

// NewProp_bEnableLinearExtraDamping_SetBit @ 14d9b41c0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableLinearExtraDamping_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x80;
  return;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b41d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersPhysicsBlendWeight_Statics::
NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bEnableMaxForce_SetBit @ 14d9b41e0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnableMaxForce_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b41f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersPhysicsBlendWeight_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls @ 14d9b4200

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlInitializerComponent_CreateControls_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableAngularStrength_SetBit @ 14d9b4260

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnableAngularStrength_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 2;
  return;
}

// NewProp_bEnableAngularDampingRatio_SetBit @ 14d9b4290

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableAngularDampingRatio_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 4;
  return;
}

// NewProp_bEnableAngularExtraDamping_SetBit @ 14d9b42a0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableAngularExtraDamping_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 8;
  return;
}

// NewProp_bEnableMaxTorque_SetBit @ 14d9b4300

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnableMaxTorque_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 0x10;
  return;
}

// NewProp_bEnableLinearTargetVelocityMultiplier_SetBit @ 14d9b4310

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableLinearTargetVelocityMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 0x20;
  return;
}

// NewProp_bEnableAngularTargetVelocityMultiplier_SetBit @ 14d9b4320

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableAngularTargetVelocityMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 0x40;
  return;
}

// NewProp_bEnableCustomControlPoint_SetBit @ 14d9b4330

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnableCustomControlPoint_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 0x80;
  return;
}

// NewProp_bEnablebEnabled_SetBit @ 14d9b4340

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnablebEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 1;
  return;
}

// NewProp_bEnablebUseCustomControlPoint_SetBit @ 14d9b4350

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnablebUseCustomControlPoint_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 2;
  return;
}

// NewProp_bEnablebUseSkeletalAnimation_SetBit @ 14d9b4360

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnablebUseSkeletalAnimation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 4;
  return;
}

// NewProp_bEnablebDisableCollision_SetBit @ 14d9b4370

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewProp_bEnablebDisableCollision_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 8;
  return;
}

// NewProp_bEnablebOnlyControlChildObject_SetBit @ 14d9b4380

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::
NewProp_bEnablebOnlyControlChildObject_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x10;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersPhysicsBlendWeight @ 14d9b4410

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersPhysicsBlendWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersPhysicsBlendWeight_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b4450

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSparseData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlSparseData,&UE::CoreUObject::Private::Construct<FPhysicsControlSparseData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSparseData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlSparseData>,&UE::CoreUObject::Private::Copy<FPhysicsControlSparseData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCreateControlsAtBeginPlay_SetBit @ 14d9b4490

void __cdecl
Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::
NewProp_bCreateControlsAtBeginPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c0) = 1;
  return;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 14d9b44a0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation_Statics
::NewProp_bUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b44b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation_Statics
::NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b44c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation_Statics
::NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation @ 14d9b44d0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifiersUpdateKinematicFromSimulation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 14d9b4510

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation_Statics
::NewProp_bUpdateKinematicFromSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyToModifiersWithName_SetBit @ 14d9b4520

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation_Statics
::NewProp_bApplyToModifiersWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4530

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation_Statics
::NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation @ 14d9b4540

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetBodyModifierUpdateKinematicFromSimulation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b45c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneData_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneData @ 14d9b4610

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneData_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneVelocitiesToZero @ 14d9b46e0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneVelocitiesToZero(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetCachedBoneVelocitiesToZero_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14d9b4720

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUseCustomControlPoint_SetBit @ 14d9b47b0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_bUseCustomControlPoint_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bUseSkeletalAnimation_SetBit @ 14d9b47c0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_bUseSkeletalAnimation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bEnableControl_SetBit @ 14d9b47d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bDisableCollision_SetBit @ 14d9b47e0

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_bDisableCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b47f0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bOnlyControlChildObject_SetBit @ 14d9b4800

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewProp_bOnlyControlChildObject_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4810

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewStructOps @ 14d9b4820

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlData,&UE::CoreUObject::Private::Construct<FPhysicsControlData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlData>,&UE::CoreUObject::Private::Copy<FPhysicsControlData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData @ 14d9b4860

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlAngularData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b48a0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b48b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlData @ 14d9b48c0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4900

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bEnableLinearStrengthMultiplier_SetBit @ 14d9b4910

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableLinearStrengthMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4920

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bEnableLinearDampingRatioMultiplier_SetBit @ 14d9b4930

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableLinearDampingRatioMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 2;
  return;
}

// NewProp_bEnableLinearExtraDampingMultiplier_SetBit @ 14d9b4940

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableLinearExtraDampingMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 4;
  return;
}

// NewProp_bEnableMaxForceMultiplier_SetBit @ 14d9b4950

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableMaxForceMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 8;
  return;
}

// NewProp_bEnableAngularStrengthMultiplier_SetBit @ 14d9b4960

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableAngularStrengthMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 0x10;
  return;
}

// NewProp_bEnableAngularDampingRatioMultiplier_SetBit @ 14d9b4970

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableAngularDampingRatioMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 0x20;
  return;
}

// NewProp_bEnableAngularExtraDampingMultiplier_SetBit @ 14d9b4980

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableAngularExtraDampingMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 0x40;
  return;
}

// NewProp_bEnableMaxTorqueMultiplier_SetBit @ 14d9b4990

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::
NewProp_bEnableMaxTorqueMultiplier_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 0x80;
  return;
}

// NewStructOps @ 14d9b49a0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlSparseMultiplier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlSparseMultiplier,&UE::CoreUObject::Private::Construct<FPhysicsControlSparseMultiplier>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSparseMultiplier>,&UE::CoreUObject::Private::Destruct<FPhysicsControlSparseMultiplier>,&UE::CoreUObject::Private::Copy<FPhysicsControlSparseMultiplier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas @ 14d9b49e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatas_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet @ 14d9b4a20

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDatasInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisableCollision_SetBit @ 14d9b4a60

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::
NewProp_bDisableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4a70

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4a80

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision @ 14d9b4af0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlDisableCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 14d9b4b40

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4b90

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4ba0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewStructOps @ 14d9b4bb0

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlMultiplier,&UE::CoreUObject::Private::Construct<FPhysicsControlMultiplier>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlMultiplier>,&UE::CoreUObject::Private::Destruct<FPhysicsControlMultiplier>,&UE::CoreUObject::Private::Copy<FPhysicsControlMultiplier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled @ 14d9b4bf0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlEnabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b4c30

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4c40

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4c50

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bApplyControlPointToTarget_SetBit @ 14d9b4c60

void __cdecl
Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewProp_bApplyControlPointToTarget_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewStructOps @ 14d9b4c70

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlTarget,&UE::CoreUObject::Private::Construct<FPhysicsControlTarget>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlTarget>,&UE::CoreUObject::Private::Destruct<FPhysicsControlTarget>,&UE::CoreUObject::Private::Copy<FPhysicsControlTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData @ 14d9b4cb0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlLinearData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b4cf0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4d00

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4d10

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier @ 14d9b4d20

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultiplier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b4d60

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControl_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControl,&UE::CoreUObject::Private::Construct<FPhysicsControl>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControl>,&UE::CoreUObject::Private::Destruct<FPhysicsControl>,&UE::CoreUObject::Private::Copy<FPhysicsControl>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableControl_SetBit @ 14d9b4da0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b4db0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b4dc0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers @ 14d9b4dd0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones @ 14d9b4e10

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromLimbBones_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableControl_SetBit @ 14d9b4f30

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::
NewProp_bEnableControl_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewStructOps @ 14d9b4f50

void * __cdecl Z_Construct_UScriptStruct_FPhysicsControlCreationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlCreationData,&UE::CoreUObject::Private::Construct<FPhysicsControlCreationData>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlCreationData>,&UE::CoreUObject::Private::Destruct<FPhysicsControlCreationData>,&UE::CoreUObject::Private::Copy<FPhysicsControlCreationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet @ 14d9b50e0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlMultipliersInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b5120

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlParent_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b5130

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlParent_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 14d9b5140

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlNamedControlParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlNamedControlParameters,&UE::CoreUObject::Private::Construct<FPhysicsControlNamedControlParameters>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedControlParameters>,&UE::CoreUObject::Private::Destruct<FPhysicsControlNamedControlParameters>,&UE::CoreUObject::Private::Copy<FPhysicsControlNamedControlParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlParent @ 14d9b5180

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlParent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bIncludeSelf_SetBit @ 14d9b51c0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics::
NewProp_bIncludeSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b51d0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlParents_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b51e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlParents_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow @ 14d9b51f0

UFunction * __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateBodyModifiersFromSkeletalMeshBelow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlParents @ 14d9b5230

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlParents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlParents_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14d9b5270

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlNamedControlMultiplierParameters_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlNamedControlMultiplierParameters,&UE::CoreUObject::Private::Construct<FPhysicsControlNamedControlMultiplierParameters>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedControlMultiplierParameters>,&UE::CoreUObject::Private::Destruct<FPhysicsControlNamedControlMultiplierParameters>,&UE::CoreUObject::Private::Copy<FPhysicsControlNamedControlMultiplierParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlParentsInSet @ 14d9b52b0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlParentsInSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlParentsInSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPhysicsControlComponent_CreateControl @ 14d9b52f0

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_CreateControl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_CreateControl_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9b53e0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14d9b53f0

void * __cdecl
Z_Construct_UScriptStruct_FPhysicsControlNamedModifierParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicsControlNamedModifierParameters,&UE::CoreUObject::Private::Construct<FPhysicsControlNamedModifierParameters>,&UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedModifierParameters>,&UE::CoreUObject::Private::Destruct<FPhysicsControlNamedModifierParameters>,&UE::CoreUObject::Private::Copy<FPhysicsControlNamedModifierParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint @ 14d9b5430

UFunction * __cdecl Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPhysicsControlComponent_SetControlPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisableCollision_SetBit @ 14d9b5470

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::
NewProp_bDisableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bApplyToControlsWithName_SetBit @ 14d9b5480

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::
NewProp_bApplyToControlsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bApplyToSetsWithName_SetBit @ 14d9b54a0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_SetControlsDisableCollision_Statics::
NewProp_bApplyToSetsWithName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d9b54b0

void __cdecl
Z_Construct_UFunction_UPhysicsControlComponent_CreateControlsAndBodyModifiersFromLimbBones_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f8) = 1;
  return;
}

// ApplyControlAndModifierParametersToRecords<FRigidBodyControlRecord,FPhysicsControlNamedControlMultiplierParameters> @ 14d9b5a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ApplyControlAndModifierParametersToRecords<FRigidBodyControlRecord,FPhysicsControlNamedControlMultiplierParameters>
          (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
           *param_1,
          TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
          *param_2,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *param_3)

{
  uint uVar1;
  int iVar2;
  FName *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FRigidBodyControlRecord *pFVar5;
  ulonglong uVar6;
  FName *pFVar7;
  FPhysicsControlSparseMultiplier *pFVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName local_res20;
  FString local_50;
  
  pFVar10 = (FName *)(param_2->AllocatorInstance).Data;
  uVar1 = param_2->ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar9 = pFVar10 + uVar6 * 0x10;
  pFVar3 = pFVar10;
  while( true ) {
    pFVar8 = (FPhysicsControlSparseMultiplier *)(pFVar3 + 1);
    if (param_2->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FPhysicsControlNamedControlMultiplierParameters_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (pFVar10 == pFVar9) break;
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)param_3,*pFVar10);
    if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*pFVar10,pFVar8,param_1);
    }
    else {
      pFVar7 = (FName *)(pTVar4->AllocatorInstance).Data;
      iVar2 = pTVar4->ArrayNum;
      pFVar3 = pFVar7 + iVar2;
      while( true ) {
        if (pTVar4->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res20);
        }
        if (pFVar7 == pFVar3) break;
        local_res20 = *pFVar7;
        pFVar5 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                 ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                         *)param_1,local_res20);
        if (pFVar5 == (FRigidBodyControlRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            FName::ToString(&local_res20,&local_50);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          pFVar7 = pFVar7 + 1;
        }
        else {
          FPhysicsControlMultiplier::UpdateFromSparseData(&pFVar5->ControlMultiplier,pFVar8);
          pFVar7 = pFVar7 + 1;
        }
      }
    }
    pFVar10 = pFVar10 + 0x10;
    uVar6 = (ulonglong)uVar1;
    pFVar3 = (FName *)&pFVar8[1].LinearStrengthMultiplier;
  }
  return;
}

// ApplyControlAndModifierParametersToRecords<FRigidBodyControlRecord,FPhysicsControlNamedControlParameters> @ 14d9b5ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ApplyControlAndModifierParametersToRecords<FRigidBodyControlRecord,FPhysicsControlNamedControlParameters>
          (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
           *param_1,
          TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  FName *pFVar1;
  uint uVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FRigidBodyControlRecord *pFVar5;
  ulonglong uVar6;
  FName *pFVar7;
  FPhysicsControlSparseData *pFVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName local_res20;
  FString local_50;
  
  pFVar10 = (FName *)(param_2->AllocatorInstance).Data;
  uVar2 = param_2->ArrayNum;
  uVar6 = (ulonglong)(int)uVar2;
  pFVar8 = (FPhysicsControlSparseData *)(pFVar10 + 1);
  pFVar9 = pFVar10 + uVar6 * 10;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FPhysicsControlNamedControlParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res20);
    }
    if (pFVar10 == pFVar9) break;
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)param_3,*pFVar10);
    if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*pFVar10,pFVar8,param_1);
    }
    else {
      pFVar7 = (FName *)(pTVar4->AllocatorInstance).Data;
      iVar3 = pTVar4->ArrayNum;
      pFVar1 = pFVar7 + iVar3;
      while( true ) {
        if (pTVar4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res20);
        }
        if (pFVar7 == pFVar1) break;
        local_res20 = *pFVar7;
        pFVar5 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                 ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                         *)param_1,local_res20);
        if (pFVar5 == (FRigidBodyControlRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            FName::ToString(&local_res20,&local_50);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          pFVar7 = pFVar7 + 1;
        }
        else {
          FPhysicsControlData::UpdateFromSparseData(&pFVar5->ControlData,pFVar8);
          pFVar7 = pFVar7 + 1;
        }
      }
    }
    pFVar10 = pFVar10 + 10;
    uVar6 = (ulonglong)uVar2;
    pFVar8 = (FPhysicsControlSparseData *)&pFVar8[1].LinearExtraDamping;
  }
  return;
}

// ApplyControlAndModifierParametersToRecords<FRigidBodyModifierRecord,FPhysicsControlNamedModifierParameters> @ 14d9b5d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ApplyControlAndModifierParametersToRecords<FRigidBodyModifierRecord,FPhysicsControlNamedModifierParameters>
          (TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
           *param_1,
          TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FRigidBodyModifierRecord *pFVar5;
  ulonglong uVar6;
  FName *pFVar7;
  FPhysicsControlModifierSparseData *pFVar8;
  FName *pFVar9;
  FName local_res10;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_res18;
  uint local_res20;
  FString local_50;
  
  pFVar9 = (FName *)(param_2->AllocatorInstance).Data;
  local_res20 = param_2->ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar8 = (FPhysicsControlModifierSparseData *)(pFVar9 + 1);
  pFVar1 = pFVar9 + uVar6 * 3;
  local_res18 = param_3;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FPhysicsControlNamedModifierParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar9 == pFVar1) break;
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)local_res18,*pFVar9);
    if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*pFVar9,pFVar8,param_1);
      uVar6 = (ulonglong)local_res20;
      pFVar9 = pFVar9 + 3;
      pFVar8 = (FPhysicsControlModifierSparseData *)&pFVar8[1].PhysicsBlendWeight;
    }
    else {
      pFVar7 = (FName *)(pTVar4->AllocatorInstance).Data;
      iVar3 = pTVar4->ArrayNum;
      pFVar2 = pFVar7 + iVar3;
      while( true ) {
        if (pTVar4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (pFVar7 == pFVar2) break;
        local_res10 = *pFVar7;
        pFVar5 = TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                 ::Find((TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                         *)param_1,local_res10);
        if (pFVar5 == (FRigidBodyModifierRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            FName::ToString(&local_res10,&local_50);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          pFVar7 = pFVar7 + 1;
        }
        else {
          FPhysicsControlModifierData::UpdateFromSparseData(&pFVar5->ModifierData,pFVar8);
          pFVar7 = pFVar7 + 1;
        }
      }
      pFVar9 = pFVar9 + 3;
      uVar6 = (ulonglong)local_res20;
      pFVar8 = (FPhysicsControlModifierSparseData *)&pFVar8[1].PhysicsBlendWeight;
    }
  }
  return;
}

// BlendParametersThroughSet<FPhysicsControlNamedControlParameters> @ 14d9b5eb0

void __cdecl
BlendParametersThroughSet<FPhysicsControlNamedControlParameters>
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlNamedControlParameters *param_2,
          FPhysicsControlNamedControlParameters *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          FPhysicsControlControlAndModifierParameters *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPhysicsControlControlAndModifierParameters *pFVar5;
  bool bVar6;
  int iVar7;
  FPhysicsControlSparseData *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  float fVar12;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  FPhysicsControlSparseData local_98;
  
  pFVar5 = param_5;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_5->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ModifierParameters,&param_1->ModifierParameters);
  iVar2 = param_4->ArrayNum;
  fVar11 = 0.0;
  pFVar10 = (param_4->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  fVar12 = __real_3f800000 / (float)(iVar2 + -1);
  while( true ) {
    if (param_4->ArrayNum != iVar2) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pFVar10 == pFVar1) break;
    pFVar8 = Interpolate(&local_98,&param_2->Data,&param_3->Data,fVar11);
    local_e8 = *(undefined8 *)pFVar10;
    pFVar3 = (pFVar5->ControlParameters).AllocatorInstance.Data;
    uStack_e0._0_4_ = pFVar8->LinearStrength;
    uStack_e0._4_4_ = pFVar8->LinearDampingRatio;
    uStack_d8._0_4_ = pFVar8->LinearExtraDamping;
    uStack_d8._4_4_ = pFVar8->MaxForce;
    uStack_d0._0_4_ = pFVar8->AngularStrength;
    uStack_d0._4_4_ = pFVar8->AngularDampingRatio;
    uStack_c8._0_4_ = pFVar8->AngularExtraDamping;
    uStack_c8._4_4_ = pFVar8->MaxTorque;
    local_c0._0_4_ = pFVar8->LinearTargetVelocityMultiplier;
    local_c0._4_4_ = pFVar8->AngularTargetVelocityMultiplier;
    dStack_b8 = (pFVar8->CustomControlPoint).field0_0x0._s_0.X;
    local_b0 = (pFVar8->CustomControlPoint).field0_0x0._s_0.Y;
    dStack_a8 = (pFVar8->CustomControlPoint).field0_0x0._s_0.Z;
    local_a0 = *(double *)&pFVar8->field_0x40;
    if ((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
       ((FScriptContainerElement *)&local_e8 <
        pFVar3 + (longlong)(pFVar5->ControlParameters).ArrayMax * 0x50)) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (pFVar5->ControlParameters).ArrayNum;
    if (iVar7 == (pFVar5->ControlParameters).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)pFVar5,&(pFVar5->ControlParameters).ArrayMax);
      (pFVar5->ControlParameters).ArrayNum = iVar7;
    }
    lVar9 = (longlong)iVar7;
    (pFVar5->ControlParameters).ArrayNum = iVar7 + 1;
    fVar11 = fVar11 + fVar12;
    pFVar3 = (pFVar5->ControlParameters).AllocatorInstance.Data;
    pFVar10 = pFVar10 + 8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50) = local_e8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 8) = uStack_e0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x10) = uStack_d8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x10 + 8) = uStack_d0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x20) = uStack_c8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x20 + 8) = local_c0;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x30) = dStack_b8;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x30 + 8) = local_b0;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x40) = dStack_a8;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x40 + 8) = local_a0;
  }
  return;
}

// BlendParametersThroughSet<FPhysicsControlNamedModifierParameters> @ 14d9b60d0

void __cdecl
BlendParametersThroughSet<FPhysicsControlNamedModifierParameters>
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlNamedModifierParameters *param_2,
          FPhysicsControlNamedModifierParameters *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          FPhysicsControlControlAndModifierParameters *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FPhysicsControlControlAndModifierParameters *pFVar7;
  bool bVar8;
  int iVar9;
  FPhysicsControlModifierSparseData *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  float fVar13;
  FPhysicsControlModifierSparseData local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pFVar7 = param_5;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_5->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ModifierParameters,&param_1->ModifierParameters);
  iVar3 = param_4->ArrayNum;
  fVar12 = 0.0;
  pFVar11 = (param_4->AllocatorInstance).Data;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  fVar13 = __real_3f800000 / (float)(iVar3 + -1);
  while( true ) {
    if (param_4->ArrayNum != iVar3) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pFVar11 == pFVar2) break;
    pFVar10 = Interpolate(&local_68,&param_2->Data,&param_3->Data,fVar12);
    local_58 = *(undefined8 *)pFVar11;
    pFVar4 = (pFVar7->ModifierParameters).AllocatorInstance.Data;
    uStack_50._0_1_ = pFVar10->MovementType;
    uStack_50._1_1_ = pFVar10->CollisionType;
    uStack_50._2_2_ = *(undefined2 *)&pFVar10->field_0x2;
    uStack_50._4_4_ = pFVar10->GravityMultiplier;
    uStack_48._0_4_ = pFVar10->PhysicsBlendWeight;
    uStack_48._4_1_ = pFVar10->KinematicTargetSpace;
    uStack_48._5_3_ = *(undefined3 *)&pFVar10->field_0xd;
    if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar4 + (longlong)(pFVar7->ModifierParameters).ArrayMax * 0x18)) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (pFVar7->ModifierParameters).ArrayNum;
    piVar1 = &(pFVar7->ModifierParameters).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&(pFVar7->ModifierParameters).AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (pFVar7->ModifierParameters).ArrayNum = iVar9 + 1;
    fVar12 = fVar12 + fVar13;
    pFVar5 = (pFVar7->ModifierParameters).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
    *(undefined8 *)pFVar4 = local_58;
    *(undefined8 *)(pFVar4 + 8) = uStack_50;
    *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = uStack_48;
  }
  return;
}

// ConstructItems<UE::PhysicsControl::FOutputBoneData,UE::PhysicsControl::FOutputBoneData,int> @ 14d9b6360

void __cdecl
ConstructItems<UE::PhysicsControl::FOutputBoneData,UE::PhysicsControl::FOutputBoneData,int>
          (void *param_1,FOutputBoneData *param_2,int param_3)

{
  FCompactPoseBoneIndex *pFVar1;
  ForAnyElementType *pFVar2;
  FCompactPoseBoneIndex FVar3;
  void *_Src;
  int *piVar4;
  longlong lVar5;
  FCompactPoseBoneIndex *pFVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    pFVar6 = &param_2->CompactPoseBoneIndex;
    lVar5 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)pFVar6 + lVar5) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)pFVar6 + lVar5);
      FVar3 = pFVar6[-2];
      _Src = *(void **)&pFVar6[-4].field_0x0;
      *(FCompactPoseBoneIndex *)(piVar4 + -1) = FVar3;
      if (FVar3 == (FCompactPoseBoneIndex)0x0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)FVar3,0,pFVar2,(int)FVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)(int)FVar3 << 2);
      }
      *(FCompactPoseBoneIndex *)(piVar4 + 1) = *pFVar6;
      *(FCompactPoseBoneIndex *)(piVar4 + 2) = pFVar6[1];
      *(FCompactPoseBoneIndex *)(piVar4 + 3) = pFVar6[2];
      pFVar1 = pFVar6 + 3;
      pFVar6 = pFVar6 + 8;
      *(FCompactPoseBoneIndex *)(piVar4 + 4) = *pFVar1;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPhysicsControlSetUpdate,FPhysicsControlSetUpdate,int> @ 14d9b6460

void __cdecl
ConstructItems<FPhysicsControlSetUpdate,FPhysicsControlSetUpdate,int>
          (void *param_1,FPhysicsControlSetUpdate *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FPhysicsControlSetUpdate *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->Names;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined8 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
      }
      pFVar3 = (FPhysicsControlSetUpdate *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateAdditionalBodyModifiers<`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_2>_> @ 14d9b6610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalBodyModifiers<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
          (TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
           *param_1,FPhysicsControlNameRecords *param_2,<lambda_2> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FName local_108;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FName local_a0;
  FPhysicsBodyModifierCreationData local_98;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_f8 = 0;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14d9b66ad;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_f4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_e4 = local_e0 + -1 + (int)lVar8;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_14d9b66ad:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_c8._28_4_ = iStack_e4;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_d0 = param_1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d9b67b0;
      uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d9b67b0:
  while( true ) {
    pTVar6 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar12) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    pFVar9 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x38 + *(longlong *)pTVar6);
    local_a0 = *pFVar9;
    FPhysicsBodyModifierCreationData::FPhysicsBodyModifierCreationData
              (&local_98,(FPhysicsBodyModifierCreationData *)(pFVar9 + 1));
    local_108 = local_a0;
    if (local_a0 == (FName)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString((FName *)&local_98,&local_70);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString((FName *)&local_98,&local_50);
        ::FName::ToString(&local_108,&local_60);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      FPhysicsControlNameRecords::AddBodyModifier(param_2,local_108,&local_98.Sets);
    }
    if (local_98.Sets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Sets.AllocatorInstance.Data);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  return;
}

// CreateAdditionalBodyModifiers<`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_2>_> @ 14d9b6930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalBodyModifiers<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
          (TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
           *param_1,FPhysicsControlNameRecords *param_2,<lambda_2> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FName local_108;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FName local_a0;
  FPhysicsBodyModifierCreationData local_98;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_f8 = 0;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14d9b69cd;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_f4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_e4 = local_e0 + -1 + (int)lVar8;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_14d9b69cd:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_c8._28_4_ = iStack_e4;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_d0 = param_1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d9b6ad0;
      uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d9b6ad0:
  while( true ) {
    pTVar6 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar12) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    pFVar9 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x38 + *(longlong *)pTVar6);
    local_a0 = *pFVar9;
    FPhysicsBodyModifierCreationData::FPhysicsBodyModifierCreationData
              (&local_98,(FPhysicsBodyModifierCreationData *)(pFVar9 + 1));
    local_108 = local_a0;
    if (local_a0 == (FName)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString((FName *)&local_98,&local_70);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString((FName *)&local_98,&local_50);
        ::FName::ToString(&local_108,&local_60);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      FPhysicsControlNameRecords::AddBodyModifier(param_2,local_108,&local_98.Sets);
    }
    if (local_98.Sets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Sets.AllocatorInstance.Data);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  return;
}

// CreateAdditionalControls<`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_1>_> @ 14d9b6c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalControls<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>_>
          (TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
           *param_1,FPhysicsControlNameRecords *param_2,<lambda_1> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName *this;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FName local_1e8;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FName local_128;
  FPhysicsControlCreationData local_120;
  
  this = &local_120.Control.ChildBoneName;
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_1d8 = 0;
  uStack_1d4 = 1;
  local_1c0 = 0;
  iStack_1c4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_14d9b6d00;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_1d4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_1c4 = local_1c0 + -1 + (int)lVar8;
    if (iVar3 < iStack_1c4) {
      iStack_1c4 = iVar3;
    }
  }
LAB_14d9b6d00:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_1b8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_1c8 = 0xffffffff;
  TStack_1a8._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  TStack_1a8.CurrentBitIndex = iStack_1c4;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_1a8._28_4_ = iStack_1c4;
  TStack_1a8.BaseBitIndex = local_1c0;
  uStack_188 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = param_1;
  local_1d0 = puVar1;
  iStack_1bc = iStack_1c4;
  local_1b0 = param_1;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d9b6e10;
      uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d9b6e10:
  while( true ) {
    pTVar6 = local_1b0;
    if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar12) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1)
       ) break;
    pFVar9 = (FName *)((longlong)TStack_1a8.CurrentBitIndex * 0xf0 + *(longlong *)pTVar6);
    local_128 = *pFVar9;
    FPhysicsControlCreationData::FPhysicsControlCreationData
              (&local_120,(FPhysicsControlCreationData *)(pFVar9 + 1));
    local_1e8 = local_128;
    if (local_128 == (FName)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(this,&local_170);
        ::FName::ToString((FName *)&local_120,&local_180);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(this,&local_140);
        ::FName::ToString((FName *)&local_120,&local_150);
        ::FName::ToString(&local_1e8,&local_160);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      FPhysicsControlNameRecords::AddControl(param_2,local_1e8,&local_120.Sets);
    }
    if (local_120.Sets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Sets.AllocatorInstance.Data);
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  return;
}

// CreateAdditionalControls<`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_1>_> @ 14d9b7010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalControls<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>_>
          (TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
           *param_1,FPhysicsControlNameRecords *param_2,<lambda_1> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName *this;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FName local_1e8;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FName local_128;
  FPhysicsControlCreationData local_120;
  
  this = &local_120.Control.ChildBoneName;
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_1d8 = 0;
  uStack_1d4 = 1;
  local_1c0 = 0;
  iStack_1c4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_14d9b70c0;
      uVar12 = puVar14[lVar8 + 1];
    }
    uStack_1d4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_1c4 = local_1c0 + -1 + (int)lVar8;
    if (iVar3 < iStack_1c4) {
      iStack_1c4 = iVar3;
    }
  }
LAB_14d9b70c0:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_1b8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_1c8 = 0xffffffff;
  TStack_1a8._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  TStack_1a8.CurrentBitIndex = iStack_1c4;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_1a8._28_4_ = iStack_1c4;
  TStack_1a8.BaseBitIndex = local_1c0;
  uStack_188 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = param_1;
  local_1d0 = puVar1;
  iStack_1bc = iStack_1c4;
  local_1b0 = param_1;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d9b71d0;
      uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14d9b71d0:
  while( true ) {
    pTVar6 = local_1b0;
    if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar12) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1)
       ) break;
    pFVar9 = (FName *)((longlong)TStack_1a8.CurrentBitIndex * 0xf0 + *(longlong *)pTVar6);
    local_128 = *pFVar9;
    FPhysicsControlCreationData::FPhysicsControlCreationData
              (&local_120,(FPhysicsControlCreationData *)(pFVar9 + 1));
    local_1e8 = local_128;
    if (local_128 == (FName)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(this,&local_170);
        ::FName::ToString((FName *)&local_120,&local_180);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(this,&local_140);
        ::FName::ToString((FName *)&local_120,&local_150);
        ::FName::ToString(&local_1e8,&local_160);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      FPhysicsControlNameRecords::AddControl(param_2,local_1e8,&local_120.Sets);
    }
    if (local_120.Sets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Sets.AllocatorInstance.Data);
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  return;
}

// CreateBodyModifiersFromLimbBones<`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_2>_> @ 14d9b7eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateBodyModifiersFromLimbBones<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
          (FName param_1,FPhysicsControlLimbBones *param_2,FPhysicsControlModifierData *param_3,
          FPhysicsControlNameRecords *param_4,<lambda_2> *param_5)

{
  int iVar1;
  ForAnyElementType _Src;
  FName *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  ulonglong uVar5;
  int iVar6;
  FName *pFVar7;
  FName local_res10 [2];
  FPhysicsControlNameRecords *local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  uint local_88;
  undefined1 local_80 [8];
  FName local_78;
  FName local_70;
  FName *local_68;
  FString local_60;
  FString local_50;
  FName local_40;
  
  pFVar7 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  local_88 = (param_2->BoneNames).ArrayNum;
  uVar5 = (ulonglong)(int)local_88;
  local_68 = pFVar7 + uVar5;
  local_res20 = param_4;
  while( true ) {
    pFVar2 = local_68;
    if ((param_2->BoneNames).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar2) {
      return;
    }
    local_78 = *pFVar7;
    ::FString::FString(&local_60,L"");
    pFVar2 = ::FName::FName(&local_40,L"All");
    pTVar3 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)&param_4->BodyModifierSets,*pFVar2);
    if (pTVar3 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FPhysicsControlNameRecords::GetBodyModifierNamesInSet'::__l2::
               _dynamic_atexit_destructor_for__FailureResult__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar3 = &FailureResult;
    }
    _Src.Data = local_60.Data.AllocatorInstance.Data;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10[0] = local_78;
    iVar6 = local_60.Data.ArrayNum;
    local_98.ArrayNum = iVar6;
    if (iVar6 == 0) {
      local_98.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,&local_98.AllocatorInstance,iVar6,&local_98.ArrayMax);
      memcpy(local_98.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
    }
    if (local_res10[0] == (FName)0x0) {
      ::FString::operator=((FString *)&local_98,L"Body");
    }
    else {
      pFVar4 = ::FName::ToString(local_res10,&local_50);
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                ((FString *)&local_98,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>
              ((FString *)local_80,&local_98,(int)pTVar3);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if ((FName)local_80 == (FName)0x0) break;
    local_res10[0].ComparisonIndex.Value = local_80._0_4_;
    local_res10[0].Number = local_80._4_4_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_5->BodyModifierNames,&local_70,(bool *)local_res10);
    param_4 = local_res20;
    FPhysicsControlNameRecords::AddBodyModifier(local_res20,(FName)local_80,param_1);
    uVar5 = (ulonglong)local_88;
    pFVar7 = pFVar7 + 1;
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    ::FName::ToString(&local_78,&local_50);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateBodyModifiersFromLimbBones<`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_2>_> @ 14d9b8140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateBodyModifiersFromLimbBones<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
          (FName param_1,FPhysicsControlLimbBones *param_2,FPhysicsControlModifierData *param_3,
          FPhysicsControlNameRecords *param_4,<lambda_2> *param_5)

{
  int iVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FName *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  ulonglong uVar6;
  int iVar7;
  FName *pFVar8;
  undefined1 local_b8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  undefined1 local_98 [8];
  FName local_90;
  FName local_88;
  FName *local_80;
  FString local_78;
  FString local_68;
  FName local_58;
  FString local_50;
  
  pFVar8 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  local_a0 = (param_2->BoneNames).ArrayNum;
  uVar6 = (ulonglong)(int)local_a0;
  local_80 = pFVar8 + uVar6;
  while( true ) {
    pFVar3 = local_80;
    if ((param_2->BoneNames).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (pFVar8 == pFVar3) {
      return;
    }
    local_90 = *pFVar8;
    ::FString::FString(&local_78,L"");
    pFVar3 = ::FName::FName(&local_58,L"All");
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)&param_4->BodyModifierSets,*pFVar3);
    if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FPhysicsControlNameRecords::GetBodyModifierNamesInSet'::__l2::
               _dynamic_atexit_destructor_for__FailureResult__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar4 = &FailureResult;
    }
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88 = local_90;
    iVar7 = local_78.Data.ArrayNum;
    local_b0.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_b0.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_b0.AllocatorInstance,iVar7,&local_b0.ArrayMax);
      memcpy(local_b0.AllocatorInstance.Data,_Src.Data,(longlong)iVar7 * 2);
    }
    if (local_88 == (FName)0x0) {
      ::FString::operator=((FString *)&local_b0,L"Body");
    }
    else {
      pFVar5 = ::FName::ToString(&local_88,&local_50);
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                ((FString *)&local_b0,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>
              ((FString *)local_98,&local_b0,(int)pTVar4);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((FName)local_98 == (FName)0x0) break;
    bVar2 = FAnimNode_RigidBodyWithControl::CreateNamedBodyModifier
                      (param_5->Node,(FName)local_98,local_90,param_3);
    if (bVar2) {
      FPhysicsControlNameRecords::AddBodyModifier(param_4,(FName)local_98,param_1);
      pFVar8 = pFVar8 + 1;
      uVar6 = (ulonglong)local_a0;
    }
    else {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString((FName *)local_98,&local_68);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = pFVar8 + 1;
      uVar6 = (ulonglong)local_a0;
    }
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    ::FName::ToString(&local_90,&local_68);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateControlsFromLimbBones<`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_1>_> @ 14d9b8430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateControlsFromLimbBones<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>_>
          (FName param_1,FPhysicsControlLimbBones *param_2,EPhysicsControlType param_3,
          FReferenceSkeleton *param_4,UPhysicsAsset *param_5,FPhysicsControlData *param_6,
          FPhysicsControlNameRecords *param_7,<lambda_1> *param_8)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *this;
  FString *pFVar5;
  ulonglong uVar6;
  char *pcVar7;
  FName *pFVar8;
  longlong *plVar9;
  int iVar10;
  FName local_res8;
  FName local_res10;
  FName local_c8;
  uint local_c0;
  FName local_bc;
  FName *local_b0;
  longlong *local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined1 local_50 [8];
  FName local_48;
  FName local_40;
  
  pFVar8 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  local_c0 = (param_2->BoneNames).ArrayNum;
  uVar6 = (ulonglong)(int)local_c0;
  pFVar3 = pFVar8 + uVar6;
  plVar9 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  local_b0 = pFVar3;
  local_a8 = plVar9;
  do {
    if ((param_2->BoneNames).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar8 == pFVar3) {
      return;
    }
    local_res10 = *pFVar8;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    if (param_3 == ParentSpace) {
      local_c8 = FindParentBodyBoneName
                           ((FName)local_50,(FReferenceSkeleton *)local_res10,
                            (UPhysicsAsset *)param_4);
      local_c8 = *(FName *)local_c8;
      if (local_c8 != (FName)0x0) goto LAB_14d9b84e9;
    }
    else {
LAB_14d9b84e9:
      ::FString::FString(&local_60,L"");
      pFVar3 = ::FName::FName(&local_48,L"All");
      pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)param_7,*pFVar3);
      if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
        if ((*(int *)(*plVar9 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
           ) {
          atexit(`FPhysicsControlNameRecords::GetControlNamesInSet'::__l2::
                 _dynamic_atexit_destructor_for__FailureResult__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar4 = &FailureResult;
      }
      GetUniqueControlName<TArray<FName,TSizedDefaultAllocator<32>_>_>
                ((FName)&local_98,local_c8,(TArray<FName,TSizedDefaultAllocator<32>_> *)local_res10,
                 (FString *)pTVar4);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      FVar2 = local_98;
      if (local_98 == (FName)0x0) {
        if (2 < (byte)LogPhysicsControl._0_1_) {
          ::FName::ToString(&local_res10,&local_80);
          ::FName::ToString(&local_c8,&local_70);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        return;
      }
      local_90 = local_98;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (param_8->ControlNames,&local_a0,(bool *)&local_90);
      FPhysicsControlNameRecords::AddControl(param_7,FVar2,local_res8);
      if (param_3 == WorldSpace) {
        pcVar7 = "WorldSpace";
      }
      else if (param_3 == ParentSpace) {
        pcVar7 = "ParentSpace";
      }
      else {
        pcVar7 = "None";
      }
      ::FName::FName(&local_bc,pcVar7);
      FPhysicsControlNameRecords::AddControl(param_7,FVar2,local_bc);
      if (param_3 == WorldSpace) {
        pcVar7 = "WorldSpace";
      }
      else if (param_3 == ParentSpace) {
        pcVar7 = "ParentSpace";
      }
      else {
        pcVar7 = "None";
      }
      ::FName::FName(&local_88,pcVar7);
      this = ::FName::ToString(&local_88,&local_70);
      ::FString::AppendChars(this,"_",1);
      pFVar5 = ::FName::ToString(&local_res8,&local_80);
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(this,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar10);
      iVar1 = (this->Data).ArrayNum;
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      pFVar3 = ::FName::FName(&local_40,iVar10,(wchar_t *)(this->Data).AllocatorInstance.Data,
                              FNAME_Add);
      FPhysicsControlNameRecords::AddControl(param_7,FVar2,*pFVar3);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      pFVar3 = local_b0;
      plVar9 = local_a8;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
        pFVar3 = local_b0;
        plVar9 = local_a8;
      }
    }
    uVar6 = (ulonglong)local_c0;
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// CreateControlsFromLimbBones<`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_1>_> @ 14d9b8780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateControlsFromLimbBones<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>_>
          (FName param_1,FPhysicsControlLimbBones *param_2,EPhysicsControlType param_3,
          FReferenceSkeleton *param_4,UPhysicsAsset *param_5,FPhysicsControlData *param_6,
          FPhysicsControlNameRecords *param_7,<lambda_1> *param_8)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  FName *pFVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *this;
  FString *pFVar7;
  ulonglong uVar8;
  char *pcVar9;
  FName *pFVar10;
  longlong *plVar11;
  int iVar12;
  FName local_res8;
  FName local_res10;
  FName local_c0;
  uint local_b8;
  FName local_b4;
  longlong *local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined1 local_60 [8];
  FName local_58;
  FName local_50;
  FString local_48;
  
  pFVar10 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  local_b8 = (param_2->BoneNames).ArrayNum;
  uVar8 = (ulonglong)(int)local_b8;
  pFVar1 = pFVar10 + uVar8;
  plVar11 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  local_a8 = plVar11;
  do {
    while( true ) {
      if ((param_2->BoneNames).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar10 == pFVar1) {
        return;
      }
      local_res10 = *pFVar10;
      local_c0.ComparisonIndex.Value = 0;
      local_c0.Number = 0;
      if (param_3 != ParentSpace) break;
      local_c0 = FindParentBodyBoneName
                           ((FName)local_60,(FReferenceSkeleton *)local_res10,
                            (UPhysicsAsset *)param_4);
      local_c0 = *(FName *)local_c0;
      if (local_c0 != (FName)0x0) break;
LAB_14d9b8a01:
      uVar8 = (ulonglong)local_b8;
      pFVar10 = pFVar10 + 1;
    }
    ::FString::FString(&local_70,L"");
    pFVar5 = ::FName::FName(&local_58,L"All");
    pTVar6 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)param_7,*pFVar5);
    if (pTVar6 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      if ((*(int *)(*plVar11 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
      {
        atexit(`FPhysicsControlNameRecords::GetControlNamesInSet'::__l2::
               _dynamic_atexit_destructor_for__FailureResult__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar6 = &FailureResult;
    }
    GetUniqueControlName<TArray<FName,TSizedDefaultAllocator<32>_>_>
              ((FName)&local_a0,local_c0,(TArray<FName,TSizedDefaultAllocator<32>_> *)local_res10,
               (FString *)pTVar6);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar3 = local_a0;
    if (local_a0 == (FName)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(&local_res10,&local_90);
        ::FName::ToString(&local_c0,&local_80);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    bVar4 = FAnimNode_RigidBodyWithControl::CreateNamedControl
                      (param_8->Node,local_a0,local_c0,local_res10,param_6);
    if (bVar4) {
      FPhysicsControlNameRecords::AddControl(param_7,FVar3,local_res8);
      if (param_3 == WorldSpace) {
        pcVar9 = "WorldSpace";
      }
      else if (param_3 == ParentSpace) {
        pcVar9 = "ParentSpace";
      }
      else {
        pcVar9 = "None";
      }
      ::FName::FName(&local_b4,pcVar9);
      FPhysicsControlNameRecords::AddControl(param_7,FVar3,local_b4);
      if (param_3 == WorldSpace) {
        pcVar9 = "WorldSpace";
      }
      else if (param_3 == ParentSpace) {
        pcVar9 = "ParentSpace";
      }
      else {
        pcVar9 = "None";
      }
      ::FName::FName(&local_98,pcVar9);
      this = ::FName::ToString(&local_98,&local_90);
      ::FString::AppendChars(this,"_",1);
      pFVar7 = ::FName::ToString(&local_res8,&local_48);
      iVar2 = (pFVar7->Data).ArrayNum;
      iVar12 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar12 = 0;
      }
      ::FString::AppendChars(this,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar12);
      iVar2 = (this->Data).ArrayNum;
      iVar12 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar12 = 0;
      }
      pFVar5 = ::FName::FName(&local_50,iVar12,(wchar_t *)(this->Data).AllocatorInstance.Data,
                              FNAME_Add);
      FPhysicsControlNameRecords::AddControl(param_7,FVar3,*pFVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      plVar11 = local_a8;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
        plVar11 = local_a8;
      }
      goto LAB_14d9b8a01;
    }
    if ((byte)LogPhysicsControl._0_1_ < 3) goto LAB_14d9b8a01;
    ::FName::ToString(&local_res10,&local_80);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_80.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d9b8a01;
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
    uVar8 = (ulonglong)local_b8;
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// DefaultConstructItems<FAnimNode_RigidBodyWithControl::FBodyAnimData,int> @ 14d9b8b40

void __cdecl
DefaultConstructItems<FAnimNode_RigidBodyWithControl::FBodyAnimData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(byte *)(puVar1 + 4) = *(byte *)(puVar1 + 4) & 0xfc;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PhysicsControl::FOutputBoneData,int> @ 14d9b8b80

void __cdecl
DefaultConstructItems<UE::PhysicsControl::FOutputBoneData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PhysicsControl::FPosQuat,int> @ 14d9b8bc0

void __cdecl DefaultConstructItems<UE::PhysicsControl::FPosQuat,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[5] = 0x3ff0000000000000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PhysicsControl::FOutputBoneData,int> @ 14d9b8c10

void __cdecl
DestructItems<UE::PhysicsControl::FOutputBoneData,int>(FOutputBoneData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->BoneIndicesToParentBody).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPhysicsControlControlAndModifierUpdates,int> @ 14d9b8c50

void __cdecl
DestructItems<FPhysicsControlControlAndModifierUpdates,int>
          (FPhysicsControlControlAndModifierUpdates *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ControlMultiplierUpdates;
    do {
      pFVar1 = (((TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FPhysicsControlControlAndModifierUpdates *)(pTVar2 + -1))->ControlUpdates).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPhysicsControlSetUpdate,int> @ 14d9b8cb0

void __cdecl
DestructItems<FPhysicsControlSetUpdate,int>(FPhysicsControlSetUpdate *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Names).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FPhysicsControlSetUpdate *)(&param_1->Names + 1);
  }
  return;
}

// FindNamesInSet<FPhysicsBodyModifier> @ 14d9baae0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FindNamesInSet<FPhysicsBodyModifier>(FPhysicsControlNameRecords *param_1,FName param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&param_1->BodyModifierSets,param_2);
  return pTVar1;
}

// FindNamesInSet<FPhysicsControl> @ 14d9baaf0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FindNamesInSet<FPhysicsControl>(FPhysicsControlNameRecords *param_1,FName param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined1 *puVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(param_1->ControlSets).field_0x8 != *(int *)&(param_1->ControlSets).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->ControlSets).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(param_1->ControlSets).field_0x38;
    }
    uVar1 = *(uint *)(puVar3 + (ulonglong)
                               (*(int *)&(param_1->ControlSets).field_0x48 - 1U &
                               param_2.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&param_1->ControlSets);
        if (*pFVar2 == param_2) {
          pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// ForEachPotentialOperator<`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_1>,`UE::PhysicsControl::CollectOperatorNames'::__l2::<lambda_2>_> @ 14d9bab00

void __cdecl
UE::PhysicsControl::
ForEachPotentialOperator<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>,_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
          (FPhysicsControlCharacterSetupData *param_1,
          FPhysicsControlAndBodyModifierCreationDatas *param_2,
          TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
          *param_3,FReferenceSkeleton *param_4,UPhysicsAsset *param_5,
          FPhysicsControlNameRecords *param_6,<lambda_1> *param_7,<lambda_2> *param_8)

{
  ulonglong uVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  <lambda_1> *p<Var5;
  FPhysicsControlAndBodyModifierCreationDatas *pFVar6;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FPhysicsControlLimbBones *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_d8 [8];
  <lambda_1> *local_d0;
  UPhysicsAsset *local_c8;
  FReferenceSkeleton *local_c0;
  <lambda_2> *local_b8;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  FPhysicsControlAndBodyModifierCreationDatas *local_78;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  local_a0 = &param_3->field_0x10;
  local_d0 = param_7;
  local_90 = 0;
  iStack_a8 = 0;
  iVar11 = *(int *)&param_3->field_0x28;
  uStack_a4 = 1;
  local_c8 = param_5;
  local_b8 = param_8;
  iVar10 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)local_a0;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) {
        iVar10 = *(int *)&param_3->field_0x28;
        iStack_94 = iVar11;
        goto LAB_14d9babc6;
      }
      uVar12 = puVar15[lVar9 + 1];
    }
    iVar10 = *(int *)&param_3->field_0x28;
    uStack_a4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_80 = (int)lVar9;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar10 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d9babc6:
  uVar12 = *(uint *)&param_3->field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_c0 = param_4;
  local_b0 = param_3;
  iStack_8c = iStack_94;
  local_78 = param_2;
  local_70 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&param_3->field_0x28;
  if (uVar12 != uVar2) {
    puVar14 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar14 = &param_3->field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d9bacd0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar12) {
      uVar12 = uVar2;
    }
  }
LAB_14d9bacd0:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    pFVar6 = local_78;
    p<Var5 = local_d0;
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10)) &&
       (pTVar7 == param_3)) break;
    lVar9 = *(longlong *)pTVar7;
    FVar3 = *(FName *)((longlong)TStack_68.CurrentBitIndex * 0x30 + lVar9);
    pFVar13 = (FPhysicsControlLimbBones *)(lVar9 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x30);
    if (pFVar13->bCreateWorldSpaceControls != '\0') {
      CreateControlsFromLimbBones<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>_>
                (FVar3,pFVar13,WorldSpace,local_c0,local_c8,&param_1->DefaultWorldSpaceControlData,
                 param_6,local_d0);
    }
    if (pFVar13->bCreateParentSpaceControls != '\0') {
      CreateControlsFromLimbBones<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>_>
                (FVar3,pFVar13,ParentSpace,local_c0,local_c8,&param_1->DefaultParentSpaceControlData
                 ,param_6,p<Var5);
    }
    if (pFVar13->bCreateBodyModifiers != '\0') {
      CreateBodyModifiersFromLimbBones<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
                (FVar3,pFVar13,&param_1->DefaultBodyModifierData,param_6,local_b8);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  CreateAdditionalBodyModifiers<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
            (&local_78->Modifiers,param_6,local_b8);
  CreateAdditionalControls<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>_>
            (&pFVar6->Controls,param_6,local_d0);
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  return;
}

// ForEachPotentialOperator<`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_1>,`UE::PhysicsControl::CreateOperatorsForNode'::__l2::<lambda_2>_> @ 14d9bae40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
ForEachPotentialOperator<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>,_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
          (FPhysicsControlCharacterSetupData *param_1,
          FPhysicsControlAndBodyModifierCreationDatas *param_2,
          TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
          *param_3,FReferenceSkeleton *param_4,UPhysicsAsset *param_5,
          FPhysicsControlNameRecords *param_6,<lambda_1> *param_7,<lambda_2> *param_8)

{
  ulonglong uVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  <lambda_1> *p<Var5;
  FPhysicsControlAndBodyModifierCreationDatas *pFVar6;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FPhysicsControlLimbBones *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_d8 [8];
  <lambda_1> *local_d0;
  UPhysicsAsset *local_c8;
  FReferenceSkeleton *local_c0;
  <lambda_2> *local_b8;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  FPhysicsControlAndBodyModifierCreationDatas *local_78;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  local_a0 = &param_3->field_0x10;
  local_d0 = param_7;
  local_90 = 0;
  iStack_a8 = 0;
  iVar11 = *(int *)&param_3->field_0x28;
  uStack_a4 = 1;
  local_c8 = param_5;
  local_b8 = param_8;
  iVar10 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)local_a0;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) {
        iVar10 = *(int *)&param_3->field_0x28;
        iStack_94 = iVar11;
        goto LAB_14d9baf06;
      }
      uVar12 = puVar15[lVar9 + 1];
    }
    iVar10 = *(int *)&param_3->field_0x28;
    uStack_a4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_80 = (int)lVar9;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar10 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d9baf06:
  uVar12 = *(uint *)&param_3->field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_88 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_c0 = param_4;
  local_b0 = param_3;
  iStack_8c = iStack_94;
  local_78 = param_2;
  local_70 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&param_3->field_0x28;
  if (uVar12 != uVar2) {
    puVar14 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar14 = &param_3->field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d9bb010;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar12) {
      uVar12 = uVar2;
    }
  }
LAB_14d9bb010:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    pFVar6 = local_78;
    p<Var5 = local_d0;
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10)) &&
       (pTVar7 == param_3)) break;
    lVar9 = *(longlong *)pTVar7;
    FVar3 = *(FName *)((longlong)TStack_68.CurrentBitIndex * 0x30 + lVar9);
    pFVar13 = (FPhysicsControlLimbBones *)(lVar9 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x30);
    if (pFVar13->bCreateWorldSpaceControls != '\0') {
      CreateControlsFromLimbBones<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>_>
                (FVar3,pFVar13,WorldSpace,local_c0,local_c8,&param_1->DefaultWorldSpaceControlData,
                 param_6,local_d0);
    }
    if (pFVar13->bCreateParentSpaceControls != '\0') {
      CreateControlsFromLimbBones<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>_>
                (FVar3,pFVar13,ParentSpace,local_c0,local_c8,&param_1->DefaultParentSpaceControlData
                 ,param_6,p<Var5);
    }
    if (pFVar13->bCreateBodyModifiers != '\0') {
      CreateBodyModifiersFromLimbBones<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
                (FVar3,pFVar13,&param_1->DefaultBodyModifierData,param_6,local_b8);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  CreateAdditionalBodyModifiers<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
            (&local_78->Modifiers,param_6,local_b8);
  CreateAdditionalControls<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>_>
            (&pFVar6->Controls,param_6,local_d0);
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  return;
}

// GetNamesInSet<FPhysicsBodyModifier> @ 14d9bb180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
GetNamesInSet<FPhysicsBodyModifier>
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigidBodyWithControlReference *param_1,FName param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  FName local_20;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsBodyModifier>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            ((FAnimNodeReference *)param_1,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetNamesInSet<FPhysicsControl> @ 14d9bb1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
GetNamesInSet<FPhysicsControl>
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigidBodyWithControlReference *param_1,FName param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  FName local_20;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsControl>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            ((FAnimNodeReference *)param_1,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_18);
  return __return_storage_ptr__;
}

// HeapSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,`FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>_>_> @ 14d9bc620

void __cdecl
AlgoImpl::
HeapSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,_FAnimNode_RigidBodyWithControl::InitPhysics_::__l13::<lambda_1>_>_>
          (FConstraintInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FConstraintInstance_*,_private:_void___cdecl_FAnimNode_RigidBodyWithControl::InitPhysics(UAnimInstance_const_*)_::_13_::<lambda_1>_>
          param_4)

{
  FConstraintInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
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
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14d9bc73e:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::
                          operator()(param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pFVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14d9bc73e;
    pFVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<APhysicsControlActor> @ 14d9bc820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APhysicsControlActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  void *pvVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    uVar7 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
    pvVar3 = ThreadLocalStoragePointer;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        ConstructorStatics.KBSJointTexture._padding_._0_2_ = 0;
        ConstructorStatics.KBSJointTexture._padding_ = (longlong)&___7FGCObject__6B_;
        FGCObject::RegisterGCObject((FGCObject *)&ConstructorStatics);
        ConstructorStatics.KBSJointTexture.Object.field0_0x0 =
             (TObjectPtr<UTexture2D>_u_0)(FObjectPtr)0x0;
        ConstructorStatics.KBSJointTexture._padding_ =
             (longlong)&___7__FObjectFinderOptional_VUTexture2D___ConstructorHelpers__6B_;
        ConstructorStatics.KBSJointTexture.LoadFlags = 0;
        ConstructorStatics.KBSJointTexture.ObjectToFind = L"/Engine/EditorResources/S_KBSJoint";
        FName::FName(&ConstructorStatics.NAME_Physics,L"Physics");
        atexit(`APhysicsControlActor::APhysicsControlActor'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
      }
    }
    pFVar4 = FName::FName(&local_res8,L"MyControlComponent");
    FVar2 = *pFVar4;
    pUVar5 = UPhysicsControlComponent::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    this[1]._padding_ = (longlong)pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    pFVar4 = FName::FName(&local_res8,L"MyControlInitializerComponent");
    FVar2 = *pFVar4;
    pUVar5 = UPhysicsControlInitializerComponent::StaticClass();
    pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    this[1]._padding_ = (longlong)pUVar6;
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    AActor::SetHidden(this,true);
  }
  return;
}

// InternalConstructor<UPhysicsControlAsset> @ 14d9bca10

void __cdecl InternalConstructor<UPhysicsControlAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &UPhysicsControlAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPhysicsControlAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData
              ((FPhysicsControlCharacterSetupData *)&this[1].field_0x8);
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 0x80;
    *(undefined4 *)&this[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[7].field_0xc = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined4 *)(this + 9) = 0;
    *(undefined4 *)&this[9].field_0x4 = 0x80;
    *(undefined4 *)&this[9].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[9].field_0xc = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined4 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined8 *)&this[10].field_0x20 = 0;
    *(undefined8 *)(this + 0xb) = 0;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)&this[0xc].field_0x8 = 0;
    *(undefined4 *)&this[0xc].field_0xc = 0x80;
    *(undefined4 *)&this[0xc].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[0xc].field_0x14 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined4 *)(this + 0xd) = 0;
  }
  return;
}

// InternalConstructor<UPhysicsControlBPLibrary> @ 14d9bcb50

void __cdecl InternalConstructor<UPhysicsControlBPLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPhysicsControlBPLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPhysicsControlComponent> @ 14d9bcb80

void __cdecl InternalConstructor<UPhysicsControlComponent>(FObjectInitializer *param_1)

{
  if ((UPhysicsControlComponent *)param_1->Obj != (UPhysicsControlComponent *)0x0) {
    UPhysicsControlComponent::UPhysicsControlComponent
              ((UPhysicsControlComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPhysicsControlInitializerComponent> @ 14d9bcba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPhysicsControlInitializerComponent>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UPhysicsControlInitializerComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPhysicsControlInitializerComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UPhysicsControlInitializerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FInitialCharacterControls::FInitialCharacterControls((FInitialCharacterControls *)(this + 1));
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    *(undefined1 *)&this[1].RelativeRotation.Roll = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<APhysicsControlActor> @ 14d9bcc90

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

UObject * __cdecl InternalVTableHelperCtorCaller<APhysicsControlActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APhysicsControlActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsControlAsset> @ 14d9bcd50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsControlAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsControlAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UPhysicsControlAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPhysicsControlAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData
              ((FPhysicsControlCharacterSetupData *)&pUVar1[1].field_0x8);
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0xc = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined4 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0xc = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined4 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x14 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xd) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsControlBPLibrary> @ 14d9bcf10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsControlBPLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsControlBPLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicsControlBPLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsControlComponent> @ 14d9bcfc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsControlComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPhysicsControlComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsControlComponent::GetPrivateStaticClass();
  pUVar3 = (UPhysicsControlComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPhysicsControlComponent *)0x0) {
    pUVar3 = UPhysicsControlComponent::UPhysicsControlComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsControlInitializerComponent> @ 14d9bd060

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UPhysicsControlInitializerComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsControlInitializerComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UPhysicsControlInitializerComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UPhysicsControlInitializerComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UPhysicsControlInitializerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FInitialCharacterControls::FInitialCharacterControls((FInitialCharacterControls *)(this + 1));
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    *(undefined1 *)&this[1].RelativeRotation.Roll = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InterpolateParametersContainers<FPhysicsControlNamedControlParameters> @ 14d9bd1c0

void __cdecl
InterpolateParametersContainers<FPhysicsControlNamedControlParameters>
          (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FPhysicsControlSparseData *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  FPhysicsControlSparseData local_78;
  
  iVar1 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar1 * 0x50;
LAB_14d9bd200:
  do {
    if (param_2->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPhysicsControlNamedControlParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar11) {
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    for (pFVar10 = pFVar2; pFVar10 != pFVar2 + (longlong)param_1->ArrayNum * 0x50;
        pFVar10 = pFVar10 + 0x50) {
      if (*(longlong *)pFVar10 == *(longlong *)pFVar12) {
        pFVar9 = Interpolate(&local_78,(FPhysicsControlSparseData *)(pFVar10 + 8),
                             (FPhysicsControlSparseData *)(pFVar12 + 8),param_3);
        pFVar12 = pFVar12 + 0x50;
        lVar4 = *(longlong *)&pFVar9->LinearExtraDamping;
        *(longlong *)(pFVar10 + 8) = *(longlong *)pFVar9;
        *(longlong *)(pFVar10 + 0x10) = lVar4;
        lVar4 = *(longlong *)&pFVar9->AngularExtraDamping;
        *(longlong *)(pFVar10 + 0x18) = *(longlong *)&pFVar9->AngularStrength;
        *(longlong *)(pFVar10 + 0x20) = lVar4;
        dVar5 = (pFVar9->CustomControlPoint).field0_0x0._s_0.X;
        *(longlong *)(pFVar10 + 0x28) = *(longlong *)&pFVar9->LinearTargetVelocityMultiplier;
        *(double *)(pFVar10 + 0x30) = dVar5;
        dVar5 = (pFVar9->CustomControlPoint).field0_0x0._s_0.Z;
        *(double *)(pFVar10 + 0x38) = (pFVar9->CustomControlPoint).field0_0x0._s_0.Y;
        *(double *)(pFVar10 + 0x40) = dVar5;
        *(longlong *)(pFVar10 + 0x48) = *(longlong *)&pFVar9->field_0x40;
        goto LAB_14d9bd200;
      }
    }
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)param_1->ArrayMax * 0x50)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    lVar8 = (longlong)iVar7;
    param_1->ArrayNum = iVar7 + 1;
    lVar4 = *(longlong *)(pFVar12 + 8);
    pFVar10 = (param_1->AllocatorInstance).Data;
    *(longlong *)(pFVar10 + lVar8 * 0x50) = *(longlong *)pFVar12;
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 8) = lVar4;
    lVar4 = *(longlong *)(pFVar12 + 0x18);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x10) = *(longlong *)(pFVar12 + 0x10);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x10 + 8) = lVar4;
    lVar4 = *(longlong *)(pFVar12 + 0x28);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x20) = *(longlong *)(pFVar12 + 0x20);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x20 + 8) = lVar4;
    lVar4 = *(longlong *)(pFVar12 + 0x38);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x30) = *(longlong *)(pFVar12 + 0x30);
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x30 + 8) = lVar4;
    pFVar2 = pFVar12 + 0x40;
    lVar4 = *(longlong *)(pFVar12 + 0x48);
    pFVar12 = pFVar12 + 0x50;
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x40) = *(longlong *)pFVar2;
    *(longlong *)(pFVar10 + lVar8 * 0x50 + 0x40 + 8) = lVar4;
  } while( true );
}

// InterpolateParametersContainers<FPhysicsControlNamedModifierParameters> @ 14d9bd380

void __cdecl
InterpolateParametersContainers<FPhysicsControlNamedModifierParameters>
          (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FPhysicsControlModifierSparseData *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FPhysicsControlModifierSparseData local_38 [2];
  
  iVar2 = param_2->ArrayNum;
  pFVar10 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
LAB_14d9bd3c0:
  do {
    if (param_2->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPhysicsControlNamedModifierParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)param_1->ArrayNum * 0x18;
        pFVar9 = pFVar9 + 0x18) {
      if (*(longlong *)pFVar9 == *(longlong *)pFVar10) {
        pFVar8 = Interpolate(local_38,(FPhysicsControlModifierSparseData *)(pFVar9 + 8),
                             (FPhysicsControlModifierSparseData *)(pFVar10 + 8),param_3);
        pFVar10 = pFVar10 + 0x18;
        lVar5 = *(longlong *)&pFVar8->PhysicsBlendWeight;
        *(longlong *)(pFVar9 + 8) = *(longlong *)pFVar8;
        *(longlong *)(pFVar9 + 0x10) = lVar5;
        goto LAB_14d9bd3c0;
      }
    }
    if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    lVar5 = *(longlong *)(pFVar10 + 8);
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar9 + (longlong)iVar7 * 0x18;
    *(longlong *)pFVar3 = *(longlong *)pFVar10;
    *(longlong *)(pFVar3 + 8) = lVar5;
    pFVar3 = pFVar10 + 0x10;
    pFVar10 = pFVar10 + 0x18;
    *(longlong *)(pFVar9 + (longlong)iVar7 * 0x18 + 0x10) = *(longlong *)pFVar3;
  } while( true );
}

// IntroSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,`FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>_>_> @ 14d9bd500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,_FAnimNode_RigidBodyWithControl::InitPhysics_::__l13::<lambda_1>_>_>
          (FConstraintInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FConstraintInstance_*,_private:_void___cdecl_FAnimNode_RigidBodyWithControl::InitPhysics(UAnimInstance_const_*)_::_13_::<lambda_1>_>
          param_4)

{
  FConstraintInstance *pFVar1;
  bool bVar2;
  int iVar3;
  FConstraintInstance **ppFVar4;
  FConstraintInstance **ppFVar5;
  int iVar6;
  FConstraintInstance ***pppFVar7;
  FConstraintInstance **ppFVar8;
  FConstraintInstance **ppFVar9;
  FConstraintInstance **ppFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FConstraintInstance **local_358;
  FConstraintInstance **local_348;
  FConstraintInstance **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppFVar7 = &local_348;
    do {
      ppFVar4 = pppFVar7[1];
      ppFVar5 = *pppFVar7;
      local_358 = pppFVar7[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      ppFVar10 = ppFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14d9bd5c0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar8 = ppFVar4 + 1;
          pFVar1 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar1;
          ppFVar5 = ppFVar10;
LAB_14d9bd5f0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x00014d9bd5f9;
          goto LAB_14d9bd610;
        }
        for (; ppFVar8 = ppFVar10, ppFVar5 = ppFVar10, ppFVar10 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar9 = ppFVar8, ppFVar5 = ppFVar5 + 1, ppFVar5 <= ppFVar4) {
            bVar2 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                              (param_4.Predicate,*ppFVar9,*ppFVar5);
            ppFVar8 = ppFVar5;
            if (!bVar2) {
              ppFVar8 = ppFVar9;
            }
          }
          pFVar1 = *ppFVar9;
          *ppFVar9 = *ppFVar4;
          *ppFVar4 = pFVar1;
        }
        goto LAB_14d9bd6d6;
      }
LAB_14d9bd6c5:
      HeapSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,_FAnimNode_RigidBodyWithControl::InitPhysics_::__l13::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14d9bd6d6:
      pppFVar7 = pppFVar7 + -3;
    } while (&local_348 <= pppFVar7);
  }
  return;
code_r0x00014d9bd5f9:
  bVar2 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                    (param_4.Predicate,*ppFVar10,*ppFVar5);
  if (!bVar2) goto LAB_14d9bd5f0;
LAB_14d9bd610:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    bVar2 = `FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
                      (param_4.Predicate,*ppFVar8,*ppFVar10);
  } while (!bVar2);
  if (ppFVar5 <= ppFVar8) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar8;
    *ppFVar8 = pFVar1;
    goto LAB_14d9bd5f0;
  }
  pFVar1 = *ppFVar10;
  iVar6 = iVar6 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar1;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar7 = ppFVar5;
      pppFVar7[1] = ppFVar4;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14d9bd6d6;
    ppFVar4 = ppFVar9 + -2;
    ppFVar5 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar7 = ppFVar10;
      pppFVar7[1] = ppFVar9 + -2;
      *(int *)(pppFVar7 + 2) = iVar6;
      pppFVar7 = pppFVar7 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_14d9bd6d6;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar10 = ppFVar5;
  if (iVar6 == 0) goto LAB_14d9bd6c5;
  goto LAB_14d9bd5c0;
}

// IsObjectPtrEqual<USkeletalMesh,USkeletalMesh_const_*,0> @ 14d9bd7a0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USkeletalMesh,USkeletalMesh_const_*,0>
          (TObjectPtr<USkeletalMesh> *param_1,USkeletalMesh **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USkeletalMesh *)0x0) {
    return *param_2 == (USkeletalMesh *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// Launch<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l196::<lambda_3>_> @ 14d9bd7c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread_::__l196::<lambda_3>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_3> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FMutex *this_00;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  bool bVar7;
  Type TVar8;
  FTaskBase *pFVar9;
  atomic<unsigned___int64> aVar10;
  FTaskBase *this_01;
  bool local_res8 [8];
  
  if (((this->Pimpl).Reference != (FTaskBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x77,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&SmallTaskAllocator);
  this_01 = (FTaskBase *)0x0;
  if (pFVar9 != (FTaskBase *)0x0) {
    pFVar9->Pipe = (FPipe *)0x0;
    pFVar9->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    pFVar9->RefCount = (atomic<unsigned_int>)0x2;
    pFVar9->NumLocks = (atomic<unsigned_int>)0x1;
    (pFVar9->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    pFVar9->TaskTriggered = (atomic<bool>)0x0;
    pFVar9->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    pFVar9->TraceId = aVar10;
    this_00 = &(pFVar9->Prerequisites).Mutex;
    (pFVar9->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar9->Prerequisites).Prerequisites.ArrayNum = 0;
    (pFVar9->Prerequisites).Prerequisites.ArrayMax = 1;
    this_00->State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xe800000000000020;
    *(undefined8 *)&(pFVar9->LowLevelTask).field_0x30 = 0;
    (pFVar9->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar9->Subsequents).Subsequents.ArrayNum = 0;
    (pFVar9->Subsequents).Subsequents.ArrayMax = 1;
    (pFVar9->Subsequents).bIsClosed = (atomic<bool>)0x0;
    (pFVar9->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    pFVar9->_padding_ =
         (longlong)
         &TExecutableTaskBase<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::`196'::<lambda_3>,void,void>
          ::_vftable_;
    FTaskBase::Init(pFVar9,param_1,param_3,param_4,param_5);
    lVar5 = *(longlong *)&param_2->DeltaSeconds;
    pFVar9[1]._padding_ = (longlong)param_2->__this;
    pFVar9[1]._padding_ = lVar5;
    dVar6 = (param_2->SimSpaceGravity).field0_0x0._s_0.Y;
    pFVar9[1]._padding_ = (longlong)(param_2->SimSpaceGravity).field0_0x0._s_0.X;
    pFVar9[1]._padding_ = (longlong)dVar6;
    pFVar9[1]._padding_ = (longlong)(param_2->SimSpaceGravity).field0_0x0._s_0.Z;
    pFVar9->_padding_ =
         (longlong)
         &TExecutableTask<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::`196'::<lambda_3>_>
          ::_vftable_;
    this_01 = pFVar9;
  }
  pFVar9 = (this->Pimpl).Reference;
  if (pFVar9 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar9->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  (this->Pimpl).Reference = this_01;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar8 = TranslatePriority((ETaskPriority)
                              ((ulonglong)*(undefined8 *)&(this_01->LowLevelTask).field_0x38 >> 0x3b
                              ) & (Inherit|Default),this_01->ExtendedPriority);
    TaskTrace::Launched((ulong64)this_01->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(this_01->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar8,0x100);
  }
  local_res8[0] = true;
  FTaskBase::TryUnlock(this_01,local_res8);
  return;
}

// StaticEnum<enum_EPhysicsControlKinematicTargetSpace> @ 14d9bdf40

UEnum * __cdecl StaticEnum<enum_EPhysicsControlKinematicTargetSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsControlKinematicTargetSpace,
                       (UObject *)pUVar1,L"EPhysicsControlKinematicTargetSpace");
  }
  return Z_Registration_Info_UEnum_EPhysicsControlKinematicTargetSpace.OuterSingleton;
}

// StaticEnum<enum_EPhysicsControlType> @ 14d9bdf80

UEnum * __cdecl StaticEnum<enum_EPhysicsControlType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsControlType,(UObject *)pUVar1,
                       L"EPhysicsControlType");
  }
  return Z_Registration_Info_UEnum_EPhysicsControlType.OuterSingleton;
}

// StaticEnum<enum_EPhysicsMovementType> @ 14d9bdfc0

UEnum * __cdecl StaticEnum<enum_EPhysicsMovementType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EPhysicsMovementType,(UObject *)pUVar1,
                       L"EPhysicsMovementType");
  }
  return Z_Registration_Info_UEnum_EPhysicsMovementType.OuterSingleton;
}

// StaticEnum<enum_EResetToCachedTargetBehavior> @ 14d9be000

UEnum * __cdecl StaticEnum<enum_EResetToCachedTargetBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_EResetToCachedTargetBehavior,
                       (UObject *)pUVar1,L"EResetToCachedTargetBehavior");
  }
  return Z_Registration_Info_UEnum_EResetToCachedTargetBehavior.OuterSingleton;
}

// StaticEnum<enum_MapConstraintsBehaviorType> @ 14d9be040

UEnum * __cdecl StaticEnum<enum_MapConstraintsBehaviorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsControl_MapConstraintsBehaviorType,(UObject *)pUVar1
                       ,L"MapConstraintsBehaviorType");
  }
  return Z_Registration_Info_UEnum_MapConstraintsBehaviorType.OuterSingleton;
}

// operator<< @ 14d9c3350

FArchive * __cdecl operator<<(FArchive *param_1,FPhysicsControlData *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  int iVar3;
  float *pfVar4;
  uint local_res8 [2];
  
  pfVar4 = &param_2->LinearStrength;
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar4);
    }
  }
  else {
    *pfVar4 = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->LinearDampingRatio;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->LinearExtraDamping;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->MaxForce;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->AngularStrength;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->AngularDampingRatio;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->AngularExtraDamping;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->MaxTorque;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->LinearTargetVelocityMultiplier;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->AngularTargetVelocityMultiplier;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsControlObjectVersion::GUID);
  if (iVar3 < 0x1b) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
  }
  UE::Math::operator<<(param_1,&param_2->CustomControlPoint);
  operator<<(param_1,&param_2->bEnabled);
  operator<<(param_1,&param_2->bUseCustomControlPoint);
  operator<<(param_1,&param_2->bUseSkeletalAnimation);
  operator<<(param_1,&param_2->bDisableCollision);
  operator<<(param_1,&param_2->bOnlyControlChildObject);
  return param_1;
}

// operator<< @ 14d9c36e0

FArchive * __cdecl operator<<(FArchive *param_1,FPhysicsControlModifierData *param_2)

{
  float *pfVar1;
  EPhysicsMovementType *pEVar2;
  uchar *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  EPhysicsControlKinematicTargetSpace *pEVar6;
  int iVar7;
  uint local_res8 [2];
  
  pEVar2 = (EPhysicsMovementType *)**(undefined8 **)&param_1->field_0x8;
  if ((EPhysicsMovementType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->MovementType = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->CollisionType,1);
  }
  else {
    (param_2->CollisionType).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar1 = &param_2->GravityMultiplier;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  pfVar1 = &param_2->PhysicsBlendWeight;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
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
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsControlObjectVersion::GUID);
  puVar5 = *(undefined8 **)&param_1->field_0x8;
  pEVar6 = (EPhysicsControlKinematicTargetSpace *)*puVar5;
  if (iVar7 < 0x1c) {
    if ((EPhysicsControlKinematicTargetSpace *)puVar5[1] < pEVar6 + 4) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar5 = pEVar6 + 4;
    }
  }
  else if ((EPhysicsControlKinematicTargetSpace *)puVar5[1] < pEVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->KinematicTargetSpace,1);
  }
  else {
    param_2->KinematicTargetSpace = *pEVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bUpdateKinematicFromSimulation);
  return param_1;
}

// operator() @ 14d9c4a60

void __thiscall
`ComputeBodyInsertionOrderWithControl'::__l8::<lambda_1>::operator()
          (void *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  ushort local_38 [8];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 2;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) break;
    local_38[0] = *(ushort *)pFVar10;
    uVar9 = (ulonglong)local_38[0];
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((int)plVar4[1] <= (int)(uint)local_38[0]) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(char *)(uVar9 + *plVar4) == '\0') {
      pFVar5 = *(ForAnyElementType **)this;
      if ((pFVar5->Data <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 2)) {
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
      iVar8 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar8 + 1;
      *(ushort *)(pFVar5->Data + (longlong)iVar8 * 2) = local_38[0];
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    uVar9 = (ulonglong)local_38[0];
    if ((int)plVar4[1] <= (int)(uint)local_38[0]) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar10 = pFVar10 + 2;
    *(undefined1 *)(uVar9 + *plVar4) = 1;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9c5028

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsControlAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsControlAsset::_vector_deleting_destructor__adjustor_40__
          (UPhysicsControlAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsControlAsset *)&this[-1].Profiles.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9c5038

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsControlComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsControlComponent::_vector_deleting_destructor__adjustor_40__
          (UPhysicsControlComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsControlComponent *)&this[-1].NameRecords.BodyModifierSets.field_0x40,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9c5048

/* [thunk]:public: virtual void * __ptr64 __cdecl UPhysicsControlInitializerComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPhysicsControlInitializerComponent::_vector_deleting_destructor__adjustor_40__
          (UPhysicsControlInitializerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPhysicsControlInitializerComponent *)
                      &this[-1].InitialBodyModifiers.field_0x38,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d9c5060

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l196::<lambda_3>_>
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

// `scalar_deleting_destructor' @ 14d9c50d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l196::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c5110

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FConstraintInstance,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FConstraintInstance,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c5150

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
APhysicsControlActor::_scalar_deleting_destructor_(APhysicsControlActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c51b0

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
FAnimNode_RigidBodyWithControl::_scalar_deleting_destructor_
          (FAnimNode_RigidBodyWithControl *this,uint param_1)

{
  ~FAnimNode_RigidBodyWithControl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c51f0

void * __thiscall
UPhysicsControlAsset::_scalar_deleting_destructor_(UPhysicsControlAsset *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Profiles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Profiles);
  DestructItems<FPhysicsControlControlAndModifierUpdates,int>
            ((FPhysicsControlControlAndModifierUpdates *)
             (this->InitialControlAndModifierUpdates).AllocatorInstance.Data,
             (this->InitialControlAndModifierUpdates).ArrayNum);
  pFVar2 = (this->InitialControlAndModifierUpdates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ModifierSetUpdates.ArrayNum);
  pFVar2 = (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ControlSetUpdates.ArrayNum);
  pFVar2 = (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AdditionalControlsAndModifiers).Modifiers);
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalControlsAndModifiers).Controls.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalControlsAndModifiers);
  pFVar2 = (this->CharacterSetupData).LimbSetupData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x210);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c5360

void * __thiscall
UPhysicsControlBPLibrary::_scalar_deleting_destructor_(UPhysicsControlBPLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPhysicsControlBPLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d9c53c0

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
UPhysicsControlComponent::_scalar_deleting_destructor_(UPhysicsControlComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x48 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->NameRecords).BodyModifierSets.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NameRecords).BodyModifierSets);
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameRecords).ControlSets.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameRecords);
  *(undefined4 *)&(this->BodyModifierRecords).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BodyModifierRecords).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BodyModifierRecords);
  *(undefined4 *)&(this->ControlRecords).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ControlRecords).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRecords);
  *(undefined4 *)&(this->ModifiedSkeletalMeshDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModifiedSkeletalMeshDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FModifiedSkeletalMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FModifiedSkeletalMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FModifiedSkeletalMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModifiedSkeletalMeshDatas);
  *(undefined4 *)&(this->CachedPoseDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPoseDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::PhysicsControl::FPhysicsControlPoseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::PhysicsControl::FPhysicsControlPoseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::PhysicsControl::FPhysicsControlPoseData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPoseDatas);
  pFVar2 = (this->DebugBodyModifierDetailFilter).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DebugControlDetailFilter).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->PhysicsControlAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x4c0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9c5560

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
UPhysicsControlInitializerComponent::_scalar_deleting_destructor_
          (UPhysicsControlInitializerComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x48 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->InitialBodyModifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialBodyModifiers);
  *(undefined4 *)&(this->InitialControls).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitialControls).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialControls);
  pFVar2 = (this->InitialCharacterControls).LimbSetupData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// AddUniqueNamesToSet @ 14d9c6e20

void __cdecl
AddUniqueNamesToSet(TArray<FName,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
                   TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *param_3)

{
  int iVar1;
  uint uVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  undefined1 *puVar3;
  FName *pFVar4;
  FName *pFVar5;
  uint uVar6;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_2;
  uVar2 = GetTypeHash(param_2.ComparisonIndex.Value);
  uVar2 = uVar2 + param_2.Number;
  if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
    puVar3 = *(undefined1 **)&param_3->field_0x40;
    if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
      puVar3 = &param_3->field_0x38;
    }
    uVar6 = *(uint *)(puVar3 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar2) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar6 * 0x20 + *(longlong *)param_3);
        if (*pFVar4 == local_res10) {
          if (pFVar4 != (FName *)0x0) {
            this = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar4 + 1);
            goto LAB_14d9c6ebc;
          }
          break;
        }
        uVar6 = pFVar4[3].ComparisonIndex.Value;
      } while (uVar6 != 0xffffffff);
    }
  }
  this = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
         ::EmplaceByHash<FName_const_&>
                   ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                     *)param_3,uVar2,&local_res10);
LAB_14d9c6ebc:
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar4 = pFVar5 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar4) break;
    local_res8 = *pFVar5;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this,&local_res8);
    pFVar5 = pFVar5 + 1;
  }
  return;
}

// ComputeBodyInsertionOrderWithControl @ 14d9cecf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ComputeBodyInsertionOrderWithControl
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          USkeletalMeshComponent *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  USkeletalMesh *pUVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  ushort local_98 [4];
  ForAnyElementType local_90;
  undefined8 local_88;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_80;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_70;
  ForAnyElementType *local_68;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_60;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_50;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_40;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
  if ((pUVar10 != (USkeletalMesh *)0x0) &&
     (iVar8 = USkinnedMeshComponent::GetNumLODs((USkinnedMeshComponent *)param_2), 0 < iVar8)) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    USkeletalMeshComponent::ComputeRequiredBones(param_2,&local_60,&local_40,0,true);
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
    lVar11 = (**(code **)(pUVar10->_padding_ + 800))(pUVar10);
    iVar2 = *(int *)(lVar11 + 0x28);
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,&local_90,(int *)&local_88,(int *)((longlong)&local_88 + 4));
    memset(local_90.Data + iVar9,0,(longlong)iVar2);
    local_68 = &local_90;
    local_70 = param_1;
    while (iVar8 = iVar8 + -1, 0 < iVar8) {
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      USkeletalMeshComponent::ComputeRequiredBones(param_2,&local_80,&local_50,iVar8,true);
      iVar2 = local_80.ArrayNum;
      uVar12 = (ulonglong)local_80.ArrayNum;
      pFVar1 = local_80.AllocatorInstance.Data + uVar12 * 2;
      FVar13.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar12 != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        pFVar6 = local_68;
        if (FVar13.Data == pFVar1) break;
        local_98[0] = *(ushort *)FVar13.Data;
        uVar12 = (ulonglong)local_98[0];
        if ((*(int *)&local_68[1].Data <= (int)(uint)local_98[0]) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar5 = local_70;
        if (pFVar6->Data[uVar12] == (FScriptContainerElement)0x0) {
          pFVar3 = (local_70->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_98) &&
              ((FScriptContainerElement *)local_98 < pFVar3 + (longlong)local_70->ArrayMax * 2)) &&
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
          iVar9 = pTVar5->ArrayNum;
          if (iVar9 == pTVar5->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x202,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
          }
          pTVar5->ArrayNum = iVar9 + 1;
          *(ushort *)((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_98[0];
        }
        pFVar6 = local_68;
        uVar12 = (ulonglong)local_98[0];
        if ((*(int *)&local_68[1].Data <= (int)(uint)local_98[0]) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar13.Data = FVar13.Data + 2;
        pFVar6->Data[uVar12] = (FScriptContainerElement)0x1;
        uVar12 = local_80._8_8_ & 0xffffffff;
      }
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
    }
    `ComputeBodyInsertionOrderWithControl'::__l8::<lambda_1>::operator()(&local_70,&local_60);
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  return;
}

// CreatePhysicsJoint @ 14d9d5e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FJointHandle * __cdecl
CreatePhysicsJoint(FSimulation *param_1,FActorHandle *param_2,FActorHandle *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FJointSetup *pFVar6;
  TTransform<double> *pTVar7;
  undefined8 *puVar8;
  FJointHandle *pFVar9;
  FJointSetup *pFVar10;
  longlong lVar11;
  undefined1 auStack_6f8 [32];
  undefined1 local_6d8 [40];
  double dStack_6b0;
  double local_6a8;
  undefined8 uStack_6a0;
  bool local_5e0;
  undefined2 local_5dd;
  TVector<Chaos::EJointMotionType,3>_u_0 local_5d8 [2];
  TVector<Chaos::EJointMotionType,3>_u_0 local_5c0 [16];
  undefined4 local_4f8;
  undefined2 local_4f4;
  EJointForceMode local_4f0;
  undefined4 local_460;
  undefined2 local_45c;
  EJointForceMode local_458;
  TTransform<double> local_3b8;
  FJointSetup local_358;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_6f8;
  pFVar9 = (FJointHandle *)0x0;
  if (((param_1 != (FSimulation *)0x0) && (param_2 != (FActorHandle *)0x0)) &&
     (param_3 != (FActorHandle *)0x0)) {
    Chaos::FPBDJointSettings::FPBDJointSettings((FPBDJointSettings *)local_6d8);
    local_5d8[0]._0_8_ = 0;
    local_5d8[0]._s_0.Z = Free;
    local_5c0[0]._0_8_ = 0;
    local_5c0[0]._s_0.Z = Free;
    local_4f8 = 0x1010101;
    local_4f4 = 0x101;
    local_4f0 = Acceleration;
    local_460._0_1_ = true;
    local_460._1_1_ = true;
    local_460._2_1_ = false;
    local_460._3_1_ = false;
    local_45c._0_1_ = false;
    local_45c._1_1_ = false;
    local_458 = Acceleration;
    local_5dd._0_1_ = false;
    local_5dd._1_1_ = true;
    local_5e0 = true;
    pTVar7 = ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMTransform(param_2,&local_3b8);
    local_6d8._32_8_ = (pTVar7->Translation).XY.m128d_f64[0];
    dStack_6b0 = (pTVar7->Translation).XY.m128d_f64[1];
    local_6a8 = (pTVar7->Translation).ZW.m128d_f64[0];
    uStack_6a0 = 0;
    Chaos::FPBDJointSettings::Sanitize((FPBDJointSettings *)local_6d8);
    lVar11 = 6;
    puVar5 = (undefined8 *)local_6d8;
    pFVar6 = &local_358;
    do {
      pFVar10 = pFVar6;
      puVar8 = puVar5;
      pFVar6 = (FJointSetup *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x20;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *(undefined8 *)(pFVar10->ConstraintSettings).ConnectorTransforms.V = *puVar8;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x8 = uVar1;
      uVar1 = puVar8[4];
      uVar4 = puVar8[5];
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x10 = uVar2;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x18 = uVar3;
      uVar2 = puVar8[6];
      uVar3 = puVar8[7];
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x20 = uVar1;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x28 = uVar4;
      uVar1 = puVar8[8];
      uVar4 = puVar8[9];
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x30 = uVar2;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x38 = uVar3;
      uVar2 = puVar8[10];
      uVar3 = puVar8[0xb];
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x40 = uVar1;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x48 = uVar4;
      uVar1 = puVar8[0xc];
      uVar4 = puVar8[0xd];
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x50 = uVar2;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[0].field_0x58 = uVar3;
      uVar2 = puVar8[0xe];
      uVar3 = puVar8[0xf];
      *(undefined8 *)((pFVar10->ConstraintSettings).ConnectorTransforms.V + 1) = uVar1;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x8 = uVar4;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x10 = uVar2;
      *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x18 = uVar3;
      lVar11 = lVar11 + -1;
      puVar5 = puVar8 + 0x10;
    } while (lVar11 != 0);
    uVar1 = puVar8[0x11];
    uVar2 = puVar8[0x12];
    uVar3 = puVar8[0x13];
    *(undefined8 *)pFVar6 = puVar8[0x10];
    *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x28 = uVar1;
    *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x30 = uVar2;
    *(undefined8 *)&(pFVar10->ConstraintSettings).ConnectorTransforms.V[1].field_0x38 = uVar3;
    local_358.Actor1 = param_2;
    local_358.Actor2 = param_3;
    pFVar9 = ImmediatePhysics_Chaos::FSimulation::CreateJoint(param_1,&local_358);
    if (pFVar9 != (FJointHandle *)0x0) {
      SetPhysicsJointEnabled(pFVar9,false);
    }
  }
  return pFVar9;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBodyWithControl @ 14d9d7fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBodyWithControl(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlActor @ 14d9d7fe0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlAsset @ 14d9d7ff0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlBPLibrary @ 14d9d8000

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlBPLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlComponent @ 14d9d8010

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlData @ 14d9d8020

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControlLimbData @ 14d9d8030

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControlLimbData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsControl_init @ 14d9d8040

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsControl_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRigidBodyControlData @ 14d9d8050

void __cdecl EmptyLinkFunctionForGeneratedCodeRigidBodyControlData(void)

{
  return;
}

// ExpandName @ 14d9db020

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
ExpandName(TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1,
          TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FName local_res10;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  local_res10 = param_1;
  pTVar8 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)param_2,param_1);
  if (pTVar8 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar3 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= &local_res10) && (&local_res10 < pFVar3 + *piVar2)) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar7 = *piVar1;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar7 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_res10
    ;
    return __return_storage_ptr__;
  }
  if (__return_storage_ptr__ == pTVar8) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar7,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
           (pTVar8->AllocatorInstance).Data,(longlong)iVar7 << 3);
  }
  return __return_storage_ptr__;
}

// ExpandNames @ 14d9db1a0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
ExpandNames(TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
           TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *param_2)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pTVar7 = ExpandName(&local_38,*pFVar8,param_2);
    if (__return_storage_ptr__ == pTVar7) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar3 = pTVar7->ArrayNum;
    if (iVar3 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar3,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
              (pTVar7->AllocatorInstance).Data,(longlong)iVar3 << 3);
      pTVar7->ArrayNum = 0;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  return __return_storage_ptr__;
}

// Interpolate @ 14d9e32d0

FPhysicsControlData * __cdecl
Interpolate(FPhysicsControlData *__return_storage_ptr__,FPhysicsControlData *param_1,
           FPhysicsControlData *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->bEnabled = true;
  fVar1 = param_2->LinearStrength;
  fVar2 = param_1->LinearStrength;
  fVar3 = param_2->LinearExtraDamping;
  fVar4 = param_1->LinearExtraDamping;
  dVar11 = (param_1->CustomControlPoint).field0_0x0._s_0.Y;
  dVar10 = (param_1->CustomControlPoint).field0_0x0._s_0.Z;
  __return_storage_ptr__->MaxForce = 0.0;
  dVar12 = (param_2->CustomControlPoint).field0_0x0._s_0.Y;
  dVar13 = (param_2->CustomControlPoint).field0_0x0._s_0.Z;
  __return_storage_ptr__->MaxTorque = 0.0;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.X = (double)uVar14;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.Y = (double)uVar15;
  __return_storage_ptr__->bUseCustomControlPoint = false;
  __return_storage_ptr__->bUseSkeletalAnimation = true;
  __return_storage_ptr__->bDisableCollision = false;
  __return_storage_ptr__->bOnlyControlChildObject = false;
  fVar5 = param_2->LinearDampingRatio;
  fVar6 = param_1->LinearDampingRatio;
  fVar7 = param_1->LinearExtraDamping;
  fVar8 = param_1->LinearDampingRatio;
  __return_storage_ptr__->LinearStrength = (fVar1 - fVar2) * param_3 + param_1->LinearStrength;
  fVar1 = param_2->AngularStrength;
  fVar2 = param_1->AngularStrength;
  __return_storage_ptr__->LinearExtraDamping = (fVar3 - fVar4) * param_3 + fVar7;
  fVar3 = param_2->AngularExtraDamping;
  fVar4 = param_1->AngularExtraDamping;
  __return_storage_ptr__->LinearDampingRatio = (fVar5 - fVar6) * param_3 + fVar8;
  fVar5 = param_2->AngularDampingRatio;
  fVar6 = param_1->AngularDampingRatio;
  fVar7 = param_1->AngularExtraDamping;
  fVar8 = param_1->AngularDampingRatio;
  __return_storage_ptr__->AngularStrength = (fVar1 - fVar2) * param_3 + param_1->AngularStrength;
  fVar1 = param_2->LinearTargetVelocityMultiplier;
  fVar2 = param_1->LinearTargetVelocityMultiplier;
  __return_storage_ptr__->AngularExtraDamping = (fVar3 - fVar4) * param_3 + fVar7;
  __return_storage_ptr__->AngularDampingRatio = (fVar5 - fVar6) * param_3 + fVar8;
  fVar3 = param_2->AngularTargetVelocityMultiplier;
  fVar4 = param_1->AngularTargetVelocityMultiplier;
  fVar5 = param_1->AngularTargetVelocityMultiplier;
  __return_storage_ptr__->LinearTargetVelocityMultiplier =
       (fVar1 - fVar2) * param_3 + param_1->LinearTargetVelocityMultiplier;
  dVar16 = (double)param_3;
  __return_storage_ptr__->AngularTargetVelocityMultiplier = (fVar3 - fVar4) * param_3 + fVar5;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.X =
       ((param_2->CustomControlPoint).field0_0x0._s_0.X -
       (param_1->CustomControlPoint).field0_0x0._s_0.X) * dVar16 +
       (param_1->CustomControlPoint).field0_0x0._s_0.X;
  dVar10 = (dVar13 - dVar10) * dVar16 + dVar10;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (dVar12 - dVar11) * dVar16 + dVar11;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->CustomControlPoint).field0_0x0 + 8) =
       auVar9;
  if (param_3 < __real_3f000000) {
    __return_storage_ptr__->bEnabled = param_1->bEnabled;
    __return_storage_ptr__->bUseCustomControlPoint = param_1->bUseCustomControlPoint;
    __return_storage_ptr__->bUseSkeletalAnimation = param_1->bUseSkeletalAnimation;
    __return_storage_ptr__->bDisableCollision = param_1->bDisableCollision;
    __return_storage_ptr__->bOnlyControlChildObject = param_1->bOnlyControlChildObject;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bEnabled = param_2->bEnabled;
  __return_storage_ptr__->bUseCustomControlPoint = param_2->bUseCustomControlPoint;
  __return_storage_ptr__->bUseSkeletalAnimation = param_2->bUseSkeletalAnimation;
  __return_storage_ptr__->bDisableCollision = param_2->bDisableCollision;
  __return_storage_ptr__->bOnlyControlChildObject = param_2->bOnlyControlChildObject;
  return __return_storage_ptr__;
}

// Interpolate @ 14d9e3460

FPhysicsControlModifierData * __cdecl
Interpolate(FPhysicsControlModifierData *__return_storage_ptr__,FPhysicsControlModifierData *param_1
           ,FPhysicsControlModifierData *param_2,float param_3)

{
  bool bVar1;
  FPhysicsControlModifierData *pFVar2;
  
  bVar1 = __real_3f000000 <= param_3;
  __return_storage_ptr__->MovementType = Simulated;
  __return_storage_ptr__->CollisionType = '\x03';
  __return_storage_ptr__->KinematicTargetSpace = OffsetInBoneSpace;
  __return_storage_ptr__->GravityMultiplier = 1.0;
  __return_storage_ptr__->PhysicsBlendWeight = 1.0;
  __return_storage_ptr__->bUpdateKinematicFromSimulation = true;
  if (bVar1) {
    __return_storage_ptr__->MovementType = param_2->MovementType;
    pFVar2 = param_2;
  }
  else {
    __return_storage_ptr__->MovementType = param_1->MovementType;
    pFVar2 = param_1;
  }
  (__return_storage_ptr__->CollisionType).Value = (pFVar2->CollisionType).Value;
  __return_storage_ptr__->GravityMultiplier =
       (param_2->GravityMultiplier - param_1->GravityMultiplier) * param_3 +
       param_1->GravityMultiplier;
  __return_storage_ptr__->PhysicsBlendWeight =
       (param_2->PhysicsBlendWeight - param_1->PhysicsBlendWeight) * param_3 +
       param_1->PhysicsBlendWeight;
  if (!bVar1) {
    __return_storage_ptr__->KinematicTargetSpace = param_1->KinematicTargetSpace;
    __return_storage_ptr__->bUpdateKinematicFromSimulation = param_1->bUpdateKinematicFromSimulation
    ;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->KinematicTargetSpace = param_2->KinematicTargetSpace;
  __return_storage_ptr__->bUpdateKinematicFromSimulation = param_2->bUpdateKinematicFromSimulation;
  return __return_storage_ptr__;
}

// Interpolate @ 14d9e3500

FPhysicsControlModifierSparseData * __cdecl
Interpolate(FPhysicsControlModifierSparseData *__return_storage_ptr__,
           FPhysicsControlModifierSparseData *param_1,FPhysicsControlModifierSparseData *param_2,
           float param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  FPhysicsControlModifierSparseData *pFVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  puVar1 = &__return_storage_ptr__->field_0xd;
  bVar5 = *puVar1 | 0x7f;
  __return_storage_ptr__->MovementType = Simulated;
  __return_storage_ptr__->CollisionType = '\x03';
  bVar3 = __real_3f000000 <= param_3;
  __return_storage_ptr__->GravityMultiplier = 1.0;
  __return_storage_ptr__->PhysicsBlendWeight = 1.0;
  __return_storage_ptr__->KinematicTargetSpace = OffsetInBoneSpace;
  puVar2 = &__return_storage_ptr__->field_0xd;
  __return_storage_ptr__->bUpdateKinematicFromSimulation = '\x01';
  __return_storage_ptr__->bEnablebUpdateKinematicFromSimulation = '\x01';
  __return_storage_ptr__->bEnableKinematicTargetSpace = '\x01';
  __return_storage_ptr__->bEnablePhysicsBlendWeight = '\x01';
  __return_storage_ptr__->bEnableGravityMultiplier = '\x01';
  __return_storage_ptr__->bEnableCollisionType = '\x01';
  __return_storage_ptr__->bEnableMovementType = '\x01';
  if (bVar3) {
    __return_storage_ptr__->MovementType = param_2->MovementType;
    pFVar4 = param_2;
  }
  else {
    __return_storage_ptr__->MovementType = param_1->MovementType;
    pFVar4 = param_1;
  }
  (__return_storage_ptr__->CollisionType).Value = (pFVar4->CollisionType).Value;
  __return_storage_ptr__->GravityMultiplier =
       (param_2->GravityMultiplier - param_1->GravityMultiplier) * param_3 +
       param_1->GravityMultiplier;
  __return_storage_ptr__->PhysicsBlendWeight =
       (param_2->PhysicsBlendWeight - param_1->PhysicsBlendWeight) * param_3 +
       param_1->PhysicsBlendWeight;
  if (bVar3) {
    __return_storage_ptr__->KinematicTargetSpace = param_2->KinematicTargetSpace;
    pFVar4 = param_2;
  }
  else {
    __return_storage_ptr__->KinematicTargetSpace = param_1->KinematicTargetSpace;
    pFVar4 = param_1;
  }
  bVar5 = (bVar5 ^ pFVar4->bUpdateKinematicFromSimulation) & 1 ^ bVar5;
  __return_storage_ptr__->field_0xd = bVar5;
  if ((param_1->bEnableMovementType == '\0') || (param_2->bEnableMovementType == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 2;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0xfd | bVar6;
  if ((param_1->bEnableCollisionType == '\0') || (param_2->bEnableCollisionType == '\0')) {
    bVar7 = 0;
  }
  else {
    bVar7 = 4;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0xf9 | bVar6 | bVar7;
  if ((param_1->bEnableGravityMultiplier == '\0') || (param_2->bEnableGravityMultiplier == '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = 8;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0xf1 | bVar6 | bVar7 | bVar8;
  if ((param_1->bEnablePhysicsBlendWeight == '\0') || (param_2->bEnablePhysicsBlendWeight == '\0'))
  {
    bVar9 = 0;
  }
  else {
    bVar9 = 0x10;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0xe1 | bVar6 | bVar7 | bVar8 | bVar9;
  if ((param_1->bEnableKinematicTargetSpace == '\0') ||
     (param_2->bEnableKinematicTargetSpace == '\0')) {
    bVar10 = 0;
  }
  else {
    bVar10 = 0x20;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0xc1 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10;
  if ((param_1->bEnablebUpdateKinematicFromSimulation != '\0') &&
     (param_2->bEnablebUpdateKinematicFromSimulation != '\0')) {
    __return_storage_ptr__->field_0xd = bVar5 & 0x81 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10 | 0x40
    ;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->field_0xd = bVar5 & 0x81 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10;
  return __return_storage_ptr__;
}

// Interpolate @ 14d9e3670

FPhysicsControlSparseData * __cdecl
Interpolate(FPhysicsControlSparseData *__return_storage_ptr__,FPhysicsControlSparseData *param_1,
           FPhysicsControlSparseData *param_2,float param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  double dVar28;
  
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  puVar1 = &param_2->field_0x40;
  __return_storage_ptr__->bEnablebEnabled = '\x01';
  __return_storage_ptr__->bEnablebOnlyControlChildObject = '\x01';
  __return_storage_ptr__->bEnablebDisableCollision = '\x01';
  __return_storage_ptr__->bEnablebUseSkeletalAnimation = '\x01';
  __return_storage_ptr__->bEnablebUseCustomControlPoint = '\x01';
  fVar3 = param_2->LinearStrength;
  fVar4 = param_1->LinearStrength;
  fVar5 = param_2->LinearExtraDamping;
  fVar6 = param_1->LinearExtraDamping;
  dVar14 = (param_1->CustomControlPoint).field0_0x0._s_0.Y;
  dVar13 = (param_1->CustomControlPoint).field0_0x0._s_0.Z;
  __return_storage_ptr__->MaxForce = 0.0;
  dVar15 = (param_2->CustomControlPoint).field0_0x0._s_0.Y;
  dVar16 = (param_2->CustomControlPoint).field0_0x0._s_0.Z;
  __return_storage_ptr__->MaxTorque = 0.0;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.X = (double)uVar20;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.Y = (double)uVar21;
  puVar2 = &__return_storage_ptr__->field_0x40;
  __return_storage_ptr__->bEnabled = '\x01';
  __return_storage_ptr__->bEnableCustomControlPoint = '\x01';
  __return_storage_ptr__->bEnableAngularTargetVelocityMultiplier = '\x01';
  __return_storage_ptr__->bEnableLinearTargetVelocityMultiplier = '\x01';
  __return_storage_ptr__->bEnableMaxTorque = '\x01';
  __return_storage_ptr__->bEnableAngularExtraDamping = '\x01';
  __return_storage_ptr__->bEnableAngularDampingRatio = '\x01';
  __return_storage_ptr__->bEnableAngularStrength = '\x01';
  __return_storage_ptr__->bEnableMaxForce = '\x01';
  __return_storage_ptr__->bEnableLinearExtraDamping = '\x01';
  __return_storage_ptr__->bEnableLinearDampingRatio = '\x01';
  __return_storage_ptr__->bEnableLinearStrength = '\x01';
  __return_storage_ptr__->bOnlyControlChildObject = '\0';
  __return_storage_ptr__->bDisableCollision = '\0';
  __return_storage_ptr__->bUseSkeletalAnimation = '\x01';
  __return_storage_ptr__->bUseCustomControlPoint = '\0';
  fVar7 = param_2->LinearDampingRatio;
  fVar8 = param_1->LinearDampingRatio;
  fVar9 = param_1->LinearExtraDamping;
  fVar10 = param_1->LinearDampingRatio;
  __return_storage_ptr__->LinearStrength = (fVar3 - fVar4) * param_3 + param_1->LinearStrength;
  fVar3 = param_2->AngularStrength;
  fVar4 = param_1->AngularStrength;
  __return_storage_ptr__->LinearExtraDamping = (fVar5 - fVar6) * param_3 + fVar9;
  fVar5 = param_2->AngularExtraDamping;
  fVar6 = param_1->AngularExtraDamping;
  __return_storage_ptr__->LinearDampingRatio = (fVar7 - fVar8) * param_3 + fVar10;
  fVar7 = param_2->AngularDampingRatio;
  fVar8 = param_1->AngularDampingRatio;
  fVar9 = param_1->AngularExtraDamping;
  fVar10 = param_1->AngularDampingRatio;
  __return_storage_ptr__->AngularStrength = (fVar3 - fVar4) * param_3 + param_1->AngularStrength;
  fVar3 = param_2->LinearTargetVelocityMultiplier;
  fVar4 = param_1->LinearTargetVelocityMultiplier;
  __return_storage_ptr__->AngularExtraDamping = (fVar5 - fVar6) * param_3 + fVar9;
  __return_storage_ptr__->AngularDampingRatio = (fVar7 - fVar8) * param_3 + fVar10;
  fVar5 = param_2->AngularTargetVelocityMultiplier;
  fVar6 = param_1->AngularTargetVelocityMultiplier;
  fVar7 = param_1->AngularTargetVelocityMultiplier;
  __return_storage_ptr__->LinearTargetVelocityMultiplier =
       (fVar3 - fVar4) * param_3 + param_1->LinearTargetVelocityMultiplier;
  dVar28 = (double)param_3;
  __return_storage_ptr__->AngularTargetVelocityMultiplier = (fVar5 - fVar6) * param_3 + fVar7;
  (__return_storage_ptr__->CustomControlPoint).field0_0x0._s_0.X =
       ((param_2->CustomControlPoint).field0_0x0._s_0.X -
       (param_1->CustomControlPoint).field0_0x0._s_0.X) * dVar28 +
       (param_1->CustomControlPoint).field0_0x0._s_0.X;
  dVar13 = (dVar16 - dVar13) * dVar28 + dVar13;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = (dVar15 - dVar14) * dVar28 + dVar14;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->CustomControlPoint).field0_0x0 + 8) =
       auVar12;
  puVar2 = &param_1->field_0x40;
  bVar27 = *puVar2;
  if (__real_3f000000 <= param_3) {
    bVar22 = (__return_storage_ptr__->bEnabled ^ param_2->bEnabled) & 1 ^
             __return_storage_ptr__->field_0x40;
    bVar22 = (bVar22 ^ *puVar1) & 2 ^ bVar22;
    bVar22 = (bVar22 ^ *puVar1) & 4 ^ bVar22;
    bVar27 = *puVar1;
    bVar24 = bVar22 ^ *puVar1;
  }
  else {
    bVar22 = (__return_storage_ptr__->bEnabled ^ param_1->bEnabled) & 1 ^
             __return_storage_ptr__->field_0x40;
    bVar22 = (bVar27 ^ bVar22) & 2 ^ bVar22;
    bVar22 = (bVar22 ^ bVar27) & 4 ^ bVar22;
    bVar24 = bVar22 ^ bVar27;
  }
  bVar22 = bVar24 & 8 ^ bVar22;
  if ((param_1->bEnableLinearStrength == '\0') || (param_2->bEnableLinearStrength == '\0')) {
    bVar24 = 0;
  }
  else {
    bVar24 = 0x20;
  }
  if ((param_1->bEnableLinearDampingRatio == '\0') || (param_2->bEnableLinearDampingRatio == '\0'))
  {
    bVar26 = 0;
  }
  else {
    bVar26 = 0x40;
  }
  if (((bool)param_1->bEnableLinearExtraDamping) && ((bool)param_2->bEnableLinearExtraDamping)) {
    bVar25 = 0x80;
  }
  else {
    bVar25 = 0;
  }
  __return_storage_ptr__->field_0x40 =
       ((bVar27 & 0xf0 ^ bVar22) & 0x10 ^ bVar22) & 0x1f | bVar24 | bVar26 | bVar25;
  if ((param_1->bEnableAngularStrength == '\0') || (param_2->bEnableAngularStrength == '\0')) {
    bVar27 = 0;
  }
  else {
    bVar27 = 2;
  }
  if ((param_1->bEnableAngularDampingRatio == '\0') || (param_2->bEnableAngularDampingRatio == '\0')
     ) {
    bVar22 = 0;
  }
  else {
    bVar22 = 4;
  }
  if ((param_1->bEnableAngularExtraDamping == '\0') || (param_2->bEnableAngularExtraDamping == '\0')
     ) {
    bVar24 = 0;
  }
  else {
    bVar24 = 8;
  }
  if ((param_1->bEnableLinearTargetVelocityMultiplier == '\0') ||
     (param_2->bEnableLinearTargetVelocityMultiplier == '\0')) {
    bVar26 = 0;
  }
  else {
    bVar26 = 0x20;
  }
  if ((param_1->bEnableAngularTargetVelocityMultiplier == '\0') ||
     (param_2->bEnableAngularTargetVelocityMultiplier == '\0')) {
    bVar25 = 0;
  }
  else {
    bVar25 = 0x40;
  }
  if (((bool)param_1->bEnableCustomControlPoint) && ((bool)param_2->bEnableCustomControlPoint)) {
    bVar23 = 0x80;
  }
  else {
    bVar23 = 0;
  }
  __return_storage_ptr__->field_0x41 =
       __return_storage_ptr__->field_0x41 & 0x11 | bVar27 | bVar22 | bVar24 | bVar26 | bVar25 |
       bVar23;
  if ((param_1->bEnablebEnabled == 0) || (param_2->bEnablebEnabled == 0)) {
    bVar27 = 0;
  }
  else {
    bVar27 = 1;
  }
  if ((param_1->bEnablebUseCustomControlPoint == '\0') ||
     (param_2->bEnablebUseCustomControlPoint == '\0')) {
    bVar22 = 0;
  }
  else {
    bVar22 = 2;
  }
  if ((param_1->bEnablebUseSkeletalAnimation == '\0') ||
     (param_2->bEnablebUseSkeletalAnimation == '\0')) {
    bVar24 = 0;
  }
  else {
    bVar24 = 4;
  }
  if ((param_1->bEnablebDisableCollision == '\0') || (param_2->bEnablebDisableCollision == '\0')) {
    bVar26 = 0;
  }
  else {
    bVar26 = 8;
  }
  if ((param_1->bEnablebOnlyControlChildObject != '\0') &&
     (param_2->bEnablebOnlyControlChildObject != '\0')) {
    __return_storage_ptr__->field_0x42 =
         __return_storage_ptr__->field_0x42 & 0xe0 | bVar27 | bVar22 | bVar24 | bVar26 | 0x10;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->field_0x42 =
       __return_storage_ptr__->field_0x42 & 0xe0 | bVar27 | bVar22 | bVar24 | bVar26;
  return __return_storage_ptr__;
}

// IsComponentDesiredInSim @ 14d9e3cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl IsComponentDesiredInSim(UPrimitiveComponent *param_1)

{
  bool bVar1;
  Type TVar2;
  longlong lVar3;
  FBodyInstance *pFVar4;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0))
  {
    lVar3 = (**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
    if (lVar3 != 0) {
      pFVar4 = (FBodyInstance *)(**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
      bVar1 = FBodyInstance::IsValidBodyInstance(pFVar4);
      if (bVar1) {
        pFVar4 = (FBodyInstance *)
                 (**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
        TVar2 = FBodyInstance::GetCollisionEnabled_CheckOwner(pFVar4);
        if (TVar2 - PhysicsOnly < 2) {
          return true;
        }
      }
    }
  }
  return false;
}

// MapConstraintsBehaviorTypeToString @ 14d9e4bb0

FName __cdecl MapConstraintsBehaviorTypeToString(MapConstraintsBehaviorType param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  char in_DL;
  char *pcVar2;
  
  FVar1._1_7_ = in_register_00000009;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  if (in_DL == '\0') {
    FName::FName((FName *)CONCAT71(in_register_00000009,param_1),"AuthoredSkeleton");
    return FVar1;
  }
  pcVar2 = "DefaultTransform";
  if (in_DL != '\x01') {
    pcVar2 = "None";
  }
  FName::FName((FName *)CONCAT71(in_register_00000009,param_1),pcVar2);
  return FVar1;
}

// SetPhysicsJointEnabled @ 14d9ed2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetPhysicsJointEnabled(FJointHandle *param_1,bool param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled> FVar6;
  FPBDJointConstraintHandle *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  undefined1 local_e8 [16];
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled;
  if (StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled>)0x0) {
    pFVar5 = FName::FName(&local_res18,"STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_RigidBodyNodeWithControl_SetPhysicsJointEnabled,*pFVar5,
                       L"RigidBodyNodeWithControl_SetPhysicsJointEnabled","STATGROUP_Anim",
                       "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x2c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14d9ed3e7;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14d9ed3e7:
  if (param_1 != (FJointHandle *)0x0) {
    this = ImmediatePhysics_Chaos::FJointHandle::GetConstraint(param_1);
    if (this != (FPBDJointConstraintHandle *)0x0) {
      Chaos::FPBDJointConstraintHandle::SetConstraintEnabled(this,param_2);
      if (!param_2) {
        local_e8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        Chaos::FPBDJointConstraintHandle::SetDriveParams
                  (this,(TVector<double,3> *)&local_48,(TVector<double,3> *)&local_68,
                   (TVector<double,3> *)&local_88,(TVector<double,3> *)&local_a8,
                   (TVector<double,3> *)&local_c8,(TVector<double,3> *)local_e8);
      }
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e8._8_8_ = CONCAT44(FVar9.Number,FVar10.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_e8[4] = '\0';
      local_e8[5] = '\0';
      local_e8[6] = '\0';
      local_e8[7] = '\0';
      local_e8[0] = local_res8.s.LowPart._0_1_;
      local_e8[1] = local_res8.s.LowPart._1_1_;
      local_e8[2] = local_res8.s.LowPart._2_1_;
      local_e8[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetRecordParameters @ 14d9ed590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetRecordParameters(FName param_1,FPhysicsControlModifierSparseData *param_2,
                   TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                   *param_3)

{
  FRigidBodyModifierRecord *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  pFVar1 = TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
           ::Find((TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                   *)param_3,param_1);
  if (pFVar1 != (FRigidBodyModifierRecord *)0x0) {
    FPhysicsControlModifierData::UpdateFromSparseData(&pFVar1->ModifierData,param_2);
    return;
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetRecordParameters @ 14d9ed620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetRecordParameters(FName param_1,FPhysicsControlSparseData *param_2,
                   TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *param_3)

{
  FRigidBodyControlRecord *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  pFVar1 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
           ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *)param_3,param_1);
  if (pFVar1 != (FRigidBodyControlRecord *)0x0) {
    FPhysicsControlData::UpdateFromSparseData(&pFVar1->ControlData,param_2);
    return;
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetRecordParameters @ 14d9ed6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetRecordParameters(FName param_1,FPhysicsControlSparseMultiplier *param_2,
                   TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *param_3)

{
  FRigidBodyControlRecord *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  pFVar1 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
           ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *)param_3,param_1);
  if (pFVar1 != (FRigidBodyControlRecord *)0x0) {
    FPhysicsControlMultiplier::UpdateFromSparseData(&pFVar1->ControlMultiplier,param_2);
    return;
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateBodyFromModifierData @ 14d9f0470

void __cdecl
UpdateBodyFromModifierData
          (FActorHandle *param_1,FSimulation *param_2,FPhysicsControlModifierData *param_3,
          TVector<double> *param_4)

{
  float fVar1;
  uchar uVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  TVector<double>_u_0 local_38 [2];
  
  if (param_3->MovementType != Default) {
    ImmediatePhysics_Chaos::FSimulation::SetIsKinematic
              (param_2,param_1,param_3->MovementType != Simulated);
  }
  fVar1 = param_3->GravityMultiplier;
  if (fVar1 != __real_3f800000) {
    bVar4 = ImmediatePhysics_Chaos::FActorHandle::IsGravityEnabled(param_1);
    if (bVar4) {
      dVar3 = ImmediatePhysics_Chaos::FActorHandle::GetMass(param_1);
      dVar5 = (double)((float)dVar3 * (fVar1 - __real_3f800000));
      dVar3 = (param_4->field0_0x0)._s_0.Y * dVar5;
      local_38[0]._16_8_ = dVar5 * (param_4->field0_0x0)._s_0.Z;
      local_38[0]._8_4_ = SUB84(dVar3,0);
      local_38[0]._0_8_ = (param_4->field0_0x0)._s_0.X * dVar5;
      local_38[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      ImmediatePhysics_Chaos::FActorHandle::AddForce(param_1,(TVector<double> *)&local_38[0]._s_0);
    }
  }
  uVar2 = (param_3->CollisionType).Value;
  if ((uVar2 == '\x02') || (uVar2 == '\x03')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  ImmediatePhysics_Chaos::FSimulation::SetHasCollision(param_2,param_1,bVar4);
  return;
}

// UpdateDriveSpringDamperSettings @ 14d9f14b0

bool __cdecl
UpdateDriveSpringDamperSettings
          (FJointHandle *param_1,FPBDJointSettings *param_2,FPhysicsControlData *param_3,
          FPhysicsControlMultiplier *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FPBDJointConstraintHandle *this;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_168 [16];
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  
  this = ImmediatePhysics_Chaos::FJointHandle::GetConstraint(param_1);
  local_118 = (double)param_3->MaxForce;
  dVar4 = (double)param_3->LinearStrength;
  local_128 = (param_4->MaxForceMultiplier).field0_0x0._s_0.X * local_118;
  dVar6 = dVar4 * (param_4->LinearStrengthMultiplier).field0_0x0._s_0.X;
  dVar5 = dVar4 * (param_4->LinearStrengthMultiplier).field0_0x0._s_0.Y;
  dVar4 = dVar4 * (param_4->LinearStrengthMultiplier).field0_0x0._s_0.Z;
  local_120 = (param_4->MaxForceMultiplier).field0_0x0._s_0.Y * local_118;
  local_118 = (param_4->MaxForceMultiplier).field0_0x0._s_0.Z * local_118;
  dVar9 = (double)param_3->LinearDampingRatio;
  fVar8 = (float)((double)(param_4->AngularStrengthMultiplier * param_3->AngularStrength) *
                 __real_401921fb54442d18);
  dVar10 = (double)param_3->LinearExtraDamping;
  fVar11 = fVar8 * fVar8;
  fVar8 = (param_3->AngularDampingRatio + param_3->AngularDampingRatio) *
          param_4->AngularDampingRatioMultiplier * fVar8 +
          param_4->AngularExtraDampingMultiplier * param_3->AngularExtraDamping;
  dVar3 = dVar6 * dVar6 * __real_4043bd3cc9be45de;
  dVar1 = dVar5 * dVar5 * __real_4043bd3cc9be45de;
  dVar2 = dVar4 * dVar4 * __real_4043bd3cc9be45de;
  dVar6 = dVar6 * (param_4->LinearDampingRatioMultiplier).field0_0x0._s_0.X *
          dVar9 * __real_402921fb54442d18 +
          dVar10 * (param_4->LinearExtraDampingMultiplier).field0_0x0._s_0.X;
  dVar5 = dVar5 * (param_4->LinearDampingRatioMultiplier).field0_0x0._s_0.Y *
          dVar9 * __real_402921fb54442d18 +
          dVar10 * (param_4->LinearExtraDampingMultiplier).field0_0x0._s_0.Y;
  dVar4 = dVar4 * (param_4->LinearDampingRatioMultiplier).field0_0x0._s_0.Z *
          dVar9 * __real_402921fb54442d18 +
          dVar10 * (param_4->LinearExtraDampingMultiplier).field0_0x0._s_0.Z;
  if (param_4->MaxTorqueMultiplier <= 0.0) {
    fVar11 = 0.0;
    fVar8 = 0.0;
  }
  if ((param_4->MaxForceMultiplier).field0_0x0._s_0.X <= 0.0) {
    dVar3 = 0.0;
    dVar6 = 0.0;
  }
  if ((param_4->MaxForceMultiplier).field0_0x0._s_0.Y <= 0.0) {
    dVar1 = 0.0;
    dVar5 = 0.0;
  }
  if ((param_4->MaxForceMultiplier).field0_0x0._s_0.Z <= 0.0) {
    dVar2 = 0.0;
    dVar4 = 0.0;
  }
  local_178 = (double)param_3->MaxTorque;
  local_158 = (double)fVar8;
  local_188._8_4_ = SUB84(local_178,0);
  local_188._0_8_ = local_178;
  local_188._12_4_ = (int)((ulonglong)local_178 >> 0x20);
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._0_8_ = dVar6;
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_148 = (double)fVar11;
  local_168._8_4_ = SUB84(local_158,0);
  local_168._0_8_ = local_158;
  local_168._12_4_ = (int)((ulonglong)local_158 >> 0x20);
  local_108._8_4_ = SUB84(dVar1,0);
  local_108._0_8_ = dVar3;
  local_108._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dStack_140 = local_148;
  local_138 = local_148;
  local_f8 = dVar2;
  local_d8 = dVar4;
  Chaos::FPBDJointConstraintHandle::SetDriveParams
            (this,(TVector<double,3> *)local_108,(TVector<double,3> *)local_e8,
             (TVector<double,3> *)&local_128,(TVector<double,3> *)&local_148,
             (TVector<double,3> *)local_168,(TVector<double,3> *)local_188);
  dVar9 = dVar1 + dVar5;
  if (dVar1 + dVar5 <= dVar3 + dVar6) {
    dVar9 = dVar3 + dVar6;
  }
  if (dVar9 <= dVar2 + dVar4) {
    dVar9 = dVar2 + dVar4;
  }
  if ((0.0 < dVar9) || (0.0 < fVar11 + fVar8)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// Z_Construct_UClass_APhysicsControlActor_NoRegister @ 14d9f4a90

UClass * __cdecl Z_Construct_UClass_APhysicsControlActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlActor",
               &Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton,
               APhysicsControlActor::StaticRegisterNativesAPhysicsControlActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APhysicsControlActor>,
               InternalVTableHelperCtorCaller<APhysicsControlActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsControlBPLibrary_NoRegister @ 14d9f4b50

UClass * __cdecl Z_Construct_UClass_UPhysicsControlBPLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlBPLibrary",
               &Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton,
               UPhysicsControlBPLibrary::StaticRegisterNativesUPhysicsControlBPLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsControlBPLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsControlBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl @ 14d9f4c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.InnerSingleton;
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

// IMPLEMENT_MODULE_PhysicsControl @ 14da061c0

void __cdecl IMPLEMENT_MODULE_PhysicsControl(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableRigidBodyNodeWithControl'' @ 15045b650

void __cdecl _dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControl__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableRigidBodyNodeWithControl)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton'' @ 15045b670

void __cdecl
_dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableRigidBodyNodeWithControlSimulation'' @ 15045b690

void __cdecl _dynamic_atexit_destructor_for__CVarEnableRigidBodyNodeWithControlSimulation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableRigidBodyNodeWithControlSimulation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlDebugDraw'' @ 15045b6b0

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlDebugDraw__(void)

{
  CVarRigidBodyNodeWithControlDebugDraw._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlDebugDraw);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlDeferredSimulationDefault'' @ 15045b6d0

void __cdecl
_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlDeferredSimulationDefault__(void)

{
  CVarRigidBodyNodeWithControlDeferredSimulationDefault._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlDeferredSimulationDefault);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlEnableComponentAcceleration'' @ 15045b6f0

void __cdecl
_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlEnableComponentAcceleration__(void)

{
  CVarRigidBodyNodeWithControlEnableComponentAcceleration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlEnableComponentAcceleration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlEnableTimeBasedReset'' @ 15045b710

void __cdecl
_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlEnableTimeBasedReset__(void)

{
  CVarRigidBodyNodeWithControlEnableTimeBasedReset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlEnableTimeBasedReset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlIncludeClothColliders'' @ 15045b730

void __cdecl
_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlIncludeClothColliders__(void)

{
  CVarRigidBodyNodeWithControlIncludeClothColliders._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlIncludeClothColliders);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlLODThreshold'' @ 15045b750

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlLODThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlLODThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlMaxSteps'' @ 15045b770

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlMaxSteps__(void)

{
  CVarRigidBodyNodeWithControlMaxSteps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlMaxSteps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSimulationTaskPriority'' @ 15045b790

void __cdecl
_dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSimulationTaskPriority__(void)

{
  CVarRigidBodyNodeWithControlSimulationTaskPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSimulationTaskPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc'' @ 15045b7b0

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc__(void)

{
  CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceMaxCompAngAcc);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceMaxCompAngVel'' @ 15045b7d0

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompAngVel__(void)

{
  CVarRigidBodyNodeWithControlSpaceMaxCompAngVel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceMaxCompAngVel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc'' @ 15045b7f0

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc__(void)

{
  CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceMaxCompLinAcc);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceMaxCompLinVel'' @ 15045b810

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceMaxCompLinVel__(void)

{
  CVarRigidBodyNodeWithControlSpaceMaxCompLinVel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceMaxCompLinVel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceOverride'' @ 15045b830

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceOverride__(void)

{
  CVarRigidBodyNodeWithControlSpaceOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceVelScaleZ'' @ 15045b850

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceVelScaleZ__(void)

{
  CVarRigidBodyNodeWithControlSpaceVelScaleZ._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceVelScaleZ);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlSpaceWorldAlpha'' @ 15045b870

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlSpaceWorldAlpha__(void)

{
  CVarRigidBodyNodeWithControlSpaceWorldAlpha._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlSpaceWorldAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRigidBodyNodeWithControlWorldObjectExpiry'' @ 15045b890

void __cdecl _dynamic_atexit_destructor_for__CVarRigidBodyNodeWithControlWorldObjectExpiry__(void)

{
  CVarRigidBodyNodeWithControlWorldObjectExpiry._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRigidBodyNodeWithControlWorldObjectExpiry);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 15045b8b0

void __cdecl
`APhysicsControlActor::APhysicsControlActor'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  ::ConstructorStatics.KBSJointTexture._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&::ConstructorStatics);
  return;
}

// `dynamic_atexit_destructor_for_'FailureResult'' @ 15045b8d0

void __cdecl
`FPhysicsControlNameRecords::GetBodyModifierNamesInSet'::__l2::
_dynamic_atexit_destructor_for__FailureResult__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FailureResult.AllocatorInstance.Data;
  if (FailureResult.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FailureResult.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FailureResult'' @ 15045b8f0

void __cdecl
`FPhysicsControlNameRecords::GetControlNamesInSet'::__l2::
_dynamic_atexit_destructor_for__FailureResult__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FailureResult.AllocatorInstance.Data;
  if (FailureResult.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FailureResult.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRegisterPhysicsControlObjectVersion'' @ 15045b910

void __cdecl _dynamic_atexit_destructor_for__GRegisterPhysicsControlObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterPhysicsControlObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'LogPhysicsControl'' @ 15045b930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPhysicsControl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPhysicsControl);
  return;
}

