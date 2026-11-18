// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 401

// OnUpdatePhysXMaterial'' @ 140f7e8d0

void __cdecl `dynamic_initializer_for_'FPhysicsDelegatesCore::OnUpdatePhysXMaterial__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPhysicsDelegatesCore::OnUpdatePhysXMaterial__);
  return;
}

// `dynamic_initializer_for_'APEXBinariesRoot'' @ 140f7e8f0

void __cdecl PhysDLLHelper::_dynamic_initializer_for__APEXBinariesRoot__(void)

{
  ::FString::FString(&APEXBinariesRoot,L"Binaries/ThirdParty/PhysX3/");
  atexit(_dynamic_atexit_destructor_for__APEXBinariesRoot__);
  return;
}

// `dynamic_initializer_for_'APEXSuffix'' @ 140f7e920

void __cdecl PhysDLLHelper::_dynamic_initializer_for__APEXSuffix__(void)

{
  ::FString::ConcatFC(&APEXSuffix,&ArchName,L".dll");
  atexit(_dynamic_atexit_destructor_for__APEXSuffix__);
  return;
}

// `dynamic_initializer_for_'ArchBits'' @ 140f7e960

void __cdecl PhysDLLHelper::_dynamic_initializer_for__ArchBits__(void)

{
  ::FString::FString(&ArchBits,L"64");
  atexit(_dynamic_atexit_destructor_for__ArchBits__);
  return;
}

// `dynamic_initializer_for_'ArchName'' @ 140f7e990

void __cdecl PhysDLLHelper::_dynamic_initializer_for__ArchName__(void)

{
  ::FString::FString(&ArchName,L"_x64");
  atexit(_dynamic_atexit_destructor_for__ArchName__);
  return;
}

// `dynamic_initializer_for_'CVarAngularDriveDampingScale'' @ 140f7e9c0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarAngularDriveDampingScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAngularDriveDampingScale,L"p.Chaos.JointConstraint.AngularDriveDampingScale",
             &AngularDriveDampingScale,L"Conversion factor for Angular drive damping.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAngularDriveDampingScale__);
  return;
}

// `dynamic_initializer_for_'CVarAngularDriveStiffnessScale'' @ 140f7ea10

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarAngularDriveStiffnessScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAngularDriveStiffnessScale,L"p.Chaos.JointConstraint.AngularDriveStiffnessScale",
             &AngularDriveStiffnessScale,L"Conversion factor for Angular drive stiffness.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAngularDriveStiffnessScale__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSQDrawDebugQueries'' @ 140f7ea60

void __cdecl _dynamic_initializer_for__CVarChaosSQDrawDebugQueries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSQDrawDebugQueries,L"p.Chaos.SQ.DrawDebugVisitorQueries",
             &ChaosSQDrawDebugVisitorQueries,
             L"Draw bounds of objects visited by visitors in scene queries.",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSQDrawDebugQueries__);
  return;
}

// `dynamic_initializer_for_'CVarEnableChaosCollisionManager'' @ 140f7eab0

void __cdecl _dynamic_initializer_for__CVarEnableChaosCollisionManager__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableChaosCollisionManager,L"p.Chaos.Collision.EnableCollisionManager",
             &bEnableChaosCollisionManager,
             L"Enable Chaos\'s Collision Manager for ignoring collisions between rigid bodies. [def:1]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableChaosCollisionManager__);
  return;
}

// `dynamic_initializer_for_'CVarEnableChaosJointConstraints'' @ 140f7eb00

void __cdecl _dynamic_initializer_for__CVarEnableChaosJointConstraints__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableChaosJointConstraints,L"p.ChaosSolverEnableJointConstraints",
             &bEnableChaosJointConstraints,
             L"Enable Joint Constraints defined within the Physics Asset Editor",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableChaosJointConstraints__);
  return;
}

// `dynamic_initializer_for_'CVarJointAngularBreakScale'' @ 140f7eb50

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarJointAngularBreakScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarJointAngularBreakScale,L"p.Chaos.JointConstraint.AngularBreakScale",
             &AngularBreakScale,L"Conversion factory for Angular Break Theshold.",0);
  atexit(_dynamic_atexit_destructor_for__CVarJointAngularBreakScale__);
  return;
}

// `dynamic_initializer_for_'CVarJointLinearBreakScale'' @ 140f7eba0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarJointLinearBreakScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarJointLinearBreakScale,L"p.Chaos.JointConstraint.LinearBreakScale",
             &LinearBreakScale,L"Conversion factory for Linear Break Theshold.",0);
  atexit(_dynamic_atexit_destructor_for__CVarJointLinearBreakScale__);
  return;
}

// `dynamic_initializer_for_'CVarJointStiffness'' @ 140f7ebf0

void __cdecl Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarJointStiffness__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarJointStiffness,L"p.Chaos.JointConstraint.JointStiffness",&JointStiffness,
             L"Hard-joint solver stiffness.",0);
  atexit(_dynamic_atexit_destructor_for__CVarJointStiffness__);
  return;
}

// `dynamic_initializer_for_'CVarLinearDriveDampingScale'' @ 140f7ec40

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarLinearDriveDampingScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLinearDriveDampingScale,L"p.Chaos.JointConstraint.LinaearDriveDampingScale",
             &LinearDriveDampingScale,L"Conversion factor for Linear drive damping.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLinearDriveDampingScale__);
  return;
}

// `dynamic_initializer_for_'CVarLinearDriveStiffnessScale'' @ 140f7ec90

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarLinearDriveStiffnessScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLinearDriveStiffnessScale,L"p.Chaos.JointConstraint.LinearDriveStiffnessScale",
             &LinearDriveStiffnessScale,L"Conversion factor for Linear drive stiffness.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLinearDriveStiffnessScale__);
  return;
}

// `dynamic_initializer_for_'CVarShowExperimentalProperties'' @ 140f7ece0

void __cdecl PhysicalMaterialCVars::_dynamic_initializer_for__CVarShowExperimentalProperties__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowExperimentalProperties,L"p.PhysicalMaterial.ShowExperimentalProperties",
             &bShowExperimentalProperties,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarShowExperimentalProperties__);
  return;
}

// `dynamic_initializer_for_'CVarSoftAngularDampingScale'' @ 140f7ed30

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftAngularDampingScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftAngularDampingScale,L"p.Chaos.JointConstraint.SoftAngularDampingScale",
             &SoftAngularDampingScale,L"Conversion factor for soft-joint damping.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftAngularDampingScale__);
  return;
}

// `dynamic_initializer_for_'CVarSoftAngularForceMode'' @ 140f7ed80

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftAngularForceMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftAngularForceMode,L"p.Chaos.JointConstraint.SoftAngularForceMode",
             &SoftAngularForceMode,L"Soft Angular constraint force mode (0: Acceleration; 1: Force",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftAngularForceMode__);
  return;
}

// `dynamic_initializer_for_'CVarSoftAngularStiffnessScale'' @ 140f7edd0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftAngularStiffnessScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftAngularStiffnessScale,L"p.Chaos.JointConstraint.SoftAngularStiffnessScale",
             &SoftAngularStiffnessScale,L"Conversion factor for soft-joint stiffness.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftAngularStiffnessScale__);
  return;
}

// `dynamic_initializer_for_'CVarSoftLinearDampingScale'' @ 140f7ee20

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftLinearDampingScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftLinearDampingScale,L"p.Chaos.JointConstraint.SoftLinearDampingScale",
             &SoftLinearDampingScale,L"Conversion factor for soft-joint damping.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftLinearDampingScale__);
  return;
}

// `dynamic_initializer_for_'CVarSoftLinearForceMode'' @ 140f7ee70

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftLinearForceMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftLinearForceMode,L"p.Chaos.JointConstraint.SoftLinearForceMode",
             &SoftLinearForceMode,L"Soft Linear constraint force mode (0: Acceleration; 1: Force",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarSoftLinearForceMode__);
  return;
}

// `dynamic_initializer_for_'CVarSoftLinearStiffnessScale'' @ 140f7eec0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_initializer_for__CVarSoftLinearStiffnessScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoftLinearStiffnessScale,L"p.Chaos.JointConstraint.SoftLinearStiffnessScale",
             &SoftLinearStiffnessScale,L"Conversion factor for soft-joint stiffness.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSoftLinearStiffnessScale__);
  return;
}

// `dynamic_initializer_for_'CVarToleranceScaleLength'' @ 140f7ef10

void __cdecl _dynamic_initializer_for__CVarToleranceScaleLength__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 100.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarToleranceScaleLength,L"p.ToleranceScale_Length",local_res8,
             L"The approximate size of objects in the simulation. Default: 100",4);
  atexit(_dynamic_atexit_destructor_for__CVarToleranceScaleLength__);
  return;
}

// `dynamic_initializer_for_'CVarToleranceScaleSpeed'' @ 140f7ef60

void __cdecl _dynamic_initializer_for__CVarToleranceScaleSpeed__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarToleranceScaleSpeed,L"p.ToleranceScale_Speed",local_res8,
             L"The typical magnitude of velocities of objects in simulation. Default: 1000",4);
  atexit(_dynamic_atexit_destructor_for__CVarToleranceScaleSpeed__);
  return;
}

// `dynamic_initializer_for_'CVarUseDeprecatedBehaviorUpdateMassScaleChanges'' @ 140f7efb0

void __cdecl _dynamic_initializer_for__CVarUseDeprecatedBehaviorUpdateMassScaleChanges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseDeprecatedBehaviorUpdateMassScaleChanges,
             L"p.UseDeprecatedBehaviorUpdateMassScaleChanges",
             &UseDeprecatedBehaviorUpdateMassScaleChanges,
             L"Allows FBodyInstanceCore::bUpdateMassWhenScaleChanges to default to false. This has potential issues, but allows existing projects to retain old behavior"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseDeprecatedBehaviorUpdateMassScaleChanges__);
  return;
}

// `dynamic_initializer_for_'CVarUseUnifiedHeightfield'' @ 140f7f000

void __cdecl _dynamic_initializer_for__CVarUseUnifiedHeightfield__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseUnifiedHeightfield,L"p.bUseUnifiedHeightfield",local_res8,
             L"Whether to use the PhysX unified heightfield. This feature of PhysX makes landscape collision consistent with triangle meshes but the thickness parameter is not supported for unified heightfields. 1 enables and 0 disables. Default: 1"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarUseUnifiedHeightfield__);
  return;
}

// `dynamic_initializer_for_'CVar_ApplyProjectSettings'' @ 140f7f050

void __cdecl _dynamic_initializer_for__CVar_ApplyProjectSettings__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVar_ApplyProjectSettings,L"p.Chaos.Simulation.ApplySolverProjectSettings",local_res8,
             L"Whether to apply the solver project settings on spawning a solver",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ApplyProjectSettings__);
  return;
}

// `dynamic_initializer_for_'CVar_ChaosSimulationEnable'' @ 140f7f0a0

void __cdecl _dynamic_initializer_for__CVar_ChaosSimulationEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVar_ChaosSimulationEnable,L"P.Chaos.Simulation.Enable",local_res8,
             L"Enable / disable chaos simulation. If disabled, physics will not tick.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ChaosSimulationEnable__);
  return;
}

// `dynamic_initializer_for_'LogPhysicsCore'' @ 140f7f0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPhysicsCore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPhysicsCore,L"LogPhysicsCore",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogPhysicsCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPhysicsCore'' @ 140f7f130

void __cdecl _dynamic_initializer_for__ModuleRegistrantPhysicsCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PhysicsCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PhysicsCore",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IPhysicsCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PhysXBinariesRoot'' @ 140f7f180

void __cdecl PhysDLLHelper::_dynamic_initializer_for__PhysXBinariesRoot__(void)

{
  ::FString::FString(&PhysXBinariesRoot,L"Binaries/ThirdParty/PhysX3/");
  atexit(_dynamic_atexit_destructor_for__PhysXBinariesRoot__);
  return;
}

// `dynamic_initializer_for_'PhysXSuffix'' @ 140f7f1b0

void __cdecl PhysDLLHelper::_dynamic_initializer_for__PhysXSuffix__(void)

{
  ::FString::ConcatFC(&PhysXSuffix,&ArchName,L".dll");
  atexit(_dynamic_atexit_destructor_for__PhysXSuffix__);
  return;
}

// `dynamic_initializer_for_'RootAPEXPath'' @ 140f7f1f0

void __cdecl PhysDLLHelper::_dynamic_initializer_for__RootAPEXPath__(void)

{
  FString local_18;
  
  ::FString::ConcatFC(&local_18,&APEXBinariesRoot,L"Win64/");
  ::FString::ConcatFF(&RootAPEXPath,&local_18,&VSDirectory);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__RootAPEXPath__);
  return;
}

// `dynamic_initializer_for_'RootPhysXPath'' @ 140f7f250

void __cdecl PhysDLLHelper::_dynamic_initializer_for__RootPhysXPath__(void)

{
  FString local_18;
  
  ::FString::ConcatFC(&local_18,&PhysXBinariesRoot,L"Win64/");
  ::FString::ConcatFF(&RootPhysXPath,&local_18,&VSDirectory);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__RootPhysXPath__);
  return;
}

// `dynamic_initializer_for_'RootSharedPath'' @ 140f7f2b0

void __cdecl PhysDLLHelper::_dynamic_initializer_for__RootSharedPath__(void)

{
  FString local_18;
  
  ::FString::ConcatFC(&local_18,&SharedBinariesRoot,L"Win64/");
  ::FString::ConcatFF(&RootSharedPath,&local_18,&VSDirectory);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__RootSharedPath__);
  return;
}

// `dynamic_initializer_for_'SharedBinariesRoot'' @ 140f7f310

void __cdecl PhysDLLHelper::_dynamic_initializer_for__SharedBinariesRoot__(void)

{
  ::FString::FString(&SharedBinariesRoot,L"Binaries/ThirdParty/PhysX3/");
  atexit(_dynamic_atexit_destructor_for__SharedBinariesRoot__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f7f340

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f7f3d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f7f460

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f7f4f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f7f580

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f7f610

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f7f6a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f7f730

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f7f7c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f7f850

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

// `dynamic_initializer_for_'StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements'' @ 140f7f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyAABBTreeElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosCounter_NumDirtyAABBTreeElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements,
               *pFVar1,L"NumDirtyAABBTreeElements","STATGROUP_ChaosCounters","STATCAT_Advanced",
               L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid'' @ 140f7f970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid,*pFVar1,
               L"NumDirtyElementsTooLargeForGrid","STATGROUP_ChaosCounters","STATCAT_Advanced",
               L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements'' @ 140f7fa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyGridOverflowElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosCounter_NumDirtyGridOverflowElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements,
               *pFVar1,L"NumDirtyGridOverflowElements","STATGROUP_ChaosCounters","STATCAT_Advanced",
               L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid'' @ 140f7fa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid,
               *pFVar1,L"NumDirtyNonEmptyCellsInGrid","STATGROUP_ChaosCounters","STATCAT_Advanced",
               L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f7fb20

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f7fbb0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f7fc40

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f7fcd0

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

// `dynamic_initializer_for_'StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos'' @ 140f7fd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateKinematicsOnDeferredSkelMeshesChaos");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos,
               *pFVar1,L"Update Kinematics On Deferred SkelMeshes","STATGROUP_Physics",
               "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'USkeletalMeshSimulationComponentLogging'' @ 140f7fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__USkeletalMeshSimulationComponentLogging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging,
             L"USkeletalMeshSimulationComponentLogging",NoLogging,All);
  atexit(_dynamic_atexit_destructor_for__USkeletalMeshSimulationComponentLogging__);
  return;
}

// `dynamic_initializer_for_'VSDirectory'' @ 140f7fe30

void __cdecl PhysDLLHelper::_dynamic_initializer_for__VSDirectory__(void)

{
  ::FString::FString(&VSDirectory,L"VS2015/");
  atexit(_dynamic_atexit_destructor_for__VSDirectory__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h__Script_PhysicsCore_946998953'' @ 140f7fe60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h__Script_PhysicsCore_946998953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h__Script_PhysicsCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h__Script_PhysicsCore_3467403167'' @ 140f7fea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h__Script_PhysicsCore_3467403167__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h__Script_PhysicsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h__Script_PhysicsCore_2178705392'' @ 140f7fee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h__Script_PhysicsCore_2178705392__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h__Script_PhysicsCore_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosEngineInterface_h__Script_PhysicsCore_4053476068'' @ 140f7ff30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosEngineInterface_h__Script_PhysicsCore_4053476068__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosEngineInterface_h__Script_PhysicsCore_Statics
             ::EnumInfo,7);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h__Script_PhysicsCore_299259269'' @ 140f7ff80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h__Script_PhysicsCore_299259269__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h__Script_PhysicsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h__Script_PhysicsCore_1104067474'' @ 140f7ffc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h__Script_PhysicsCore_1104067474__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h__Script_PhysicsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h__Script_PhysicsCore_3661358477'' @ 140f80000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h__Script_PhysicsCore_3661358477__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h__Script_PhysicsCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h__Script_PhysicsCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h__Script_PhysicsCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h__Script_PhysicsCore_2085738226'' @ 140f80050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h__Script_PhysicsCore_2085738226__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h__Script_PhysicsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h__Script_PhysicsCore_1873864545'' @ 140f80090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h__Script_PhysicsCore_1873864545__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PhysicsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h__Script_PhysicsCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_PhysicsCore'' @ 140f800e0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_PhysicsCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8597cad2;
  local_res8[0].DeclarationsHash = 0x7f0ca96b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_PhysicsCore,L"/Script/PhysicsCore",
             &Z_Registration_Info_UPackage__Script_PhysicsCore,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_AABBTreeExpensiveStats'' @ 140f80120

void __cdecl _dynamic_initializer_for___GCsvCategory_AABBTreeExpensiveStats__(void)

{
  FString::operator=(&_GCsvCategory_AABBTreeExpensiveStats.Name,L"AABBTreeExpensiveStats");
  _GCsvCategory_AABBTreeExpensiveStats.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_AABBTreeExpensiveStats.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_AABBTreeExpensiveStats__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ChaosPhysics'' @ 140f80170

void __cdecl _dynamic_initializer_for___GCsvCategory_ChaosPhysics__(void)

{
  FString::operator=(&_GCsvCategory_ChaosPhysics.Name,L"ChaosPhysics");
  _GCsvCategory_ChaosPhysics.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ChaosPhysics.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ChaosPhysics__);
  return;
}

// Z_Construct_UClass_UPhysicalMaterial @ 144134330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicalMaterial(void)

{
  if (Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton,
               &Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode @ 144134370

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode(void)

{
  if (Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier @ 1441343b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPhysicalMaterialStrength @ 144134430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialStrength(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.InnerSingleton,
               &Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.InnerSingleton;
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

// NewStructOps @ 1441344b0

void * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicalMaterialStrength,&UE::CoreUObject::Private::Construct<FPhysicalMaterialStrength>,&UE::CoreUObject::Private::ConstructForTests<FPhysicalMaterialStrength>,&UE::CoreUObject::Private::Destruct<FPhysicalMaterialStrength>,&UE::CoreUObject::Private::Copy<FPhysicalMaterialStrength>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister @ 1441344f0

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterialPropertyBase",
               &Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton,
               UDEPRECATED_PhysicalMaterialPropertyBase::
               StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PhysicalMaterialPropertyBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PhysicalMaterialPropertyBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton;
}

// NewStructOps @ 1441345a0

void * __cdecl Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPhysicalMaterialDamageModifier,&UE::CoreUObject::Private::Construct<FPhysicalMaterialDamageModifier>,&UE::CoreUObject::Private::ConstructForTests<FPhysicalMaterialDamageModifier>,&UE::CoreUObject::Private::Destruct<FPhysicalMaterialDamageModifier>,&UE::CoreUObject::Private::Copy<FPhysicalMaterialDamageModifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPhysicalMaterialSoftCollisionMode_StaticEnum @ 144134690

UEnum * __cdecl EPhysicalMaterialSoftCollisionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode,
                       (UObject *)pUVar1,L"EPhysicalMaterialSoftCollisionMode");
  }
  return Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase @ 1441346d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton;
}

// NewProp_bOverrideFrictionCombineMode_SetBit @ 144134710

void __cdecl
Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bOverrideRestitutionCombineMode_SetBit @ 144134720

void __cdecl
Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bShowExperimentalProperties_SetBit @ 144134730

void __cdecl
Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bShowExperimentalProperties_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode @ 144134740

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode(void)

{
  if (Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton;
}

// EFrictionCombineMode_StaticEnum @ 144134780

UEnum * __cdecl EFrictionCombineMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode,(UObject *)pUVar1,
                       L"EFrictionCombineMode");
  }
  return Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton;
}

// NewProp_bSimulatePhysics_SetBit @ 1441348b0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 1;
  return;
}

// NewProp_bOverrideMass_SetBit @ 1441348c0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 2;
  return;
}

// NewProp_bEnableGravity_SetBit @ 1441348d0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 4;
  return;
}

// NewProp_bUpdateKinematicFromSimulation_SetBit @ 1441348e0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateKinematicFromSimulation_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 8;
  return;
}

// NewProp_bGyroscopicTorqueEnabled_SetBit @ 1441348f0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGyroscopicTorqueEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 0x10;
  return;
}

// NewProp_bAutoWeld_SetBit @ 144134900

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 0x20;
  return;
}

// NewProp_bStartAwake_SetBit @ 144134910

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 0x40;
  return;
}

// NewProp_bGenerateWakeEvents_SetBit @ 144134920

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 8) = *(byte *)((longlong)param_1 + 8) | 0x80;
  return;
}

// NewProp_bUpdateMassWhenScaleChanges_SetBit @ 144134930

void __cdecl
Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1;
  return;
}

// NewStructOps @ 144134940

void * __cdecl Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBodyInstanceCore,&UE::CoreUObject::Private::Construct<FBodyInstanceCore>,&UE::CoreUObject::Private::ConstructForTests<FBodyInstanceCore>,&UE::CoreUObject::Private::Destruct<FBodyInstanceCore>,&UE::CoreUObject::Private::Copy<FBodyInstanceCore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_PhysicsCore_EPhysicalSurface @ 144134980

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EPhysicalSurface(void)

{
  if (Z_Registration_Info_UEnum_EPhysicalSurface.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicalSurface.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EPhysicalSurface_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicalSurface.InnerSingleton;
}

// EPhysicalSurface_StaticEnum @ 1441349c0

UEnum * __cdecl EPhysicalSurface_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalSurface,(UObject *)pUVar1,
                       L"EPhysicalSurface");
  }
  return Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton;
}

// ERadialImpulseFalloff_StaticEnum @ 144134a00

UEnum * __cdecl ERadialImpulseFalloff_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff,(UObject *)pUVar1,
                       L"ERadialImpulseFalloff");
  }
  return Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton;
}

// ESleepFamily_StaticEnum @ 144134a40

UEnum * __cdecl ESleepFamily_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ESleepFamily,(UObject *)pUVar1,L"ESleepFamily")
    ;
  }
  return Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton;
}

// EAngularConstraintMotion_StaticEnum @ 144134a80

UEnum * __cdecl EAngularConstraintMotion_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion,(UObject *)pUVar1,
                       L"EAngularConstraintMotion");
  }
  return Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton;
}

// EConstraintFrame_StaticEnum @ 144134ac0

UEnum * __cdecl EConstraintFrame_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EConstraintFrame,(UObject *)pUVar1,
                       L"EConstraintFrame");
  }
  return Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton;
}

// EConstraintPlasticityType_StaticEnum @ 144134b00

UEnum * __cdecl EConstraintPlasticityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType,(UObject *)pUVar1,
                       L"EConstraintPlasticityType");
  }
  return Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton;
}

// ELinearConstraintMotion_StaticEnum @ 144134b40

UEnum * __cdecl ELinearConstraintMotion_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion,(UObject *)pUVar1,
                       L"ELinearConstraintMotion");
  }
  return Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse @ 144134b80

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse(void)

{
  if (Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag @ 144134bc0

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag(void)

{
  if (Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EPhysicsType @ 144134c00

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EPhysicsType(void)

{
  if (Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton;
}

// Z_Construct_UPackage__Script_PhysicsCore @ 144134c40

UPackage * __cdecl Z_Construct_UPackage__Script_PhysicsCore(void)

{
  if (Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton;
}

// ECollisionTraceFlag_StaticEnum @ 144134c80

UEnum * __cdecl ECollisionTraceFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag,(UObject *)pUVar1,
                       L"ECollisionTraceFlag");
  }
  return Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton;
}

// EPhysicsType_StaticEnum @ 144134cc0

UEnum * __cdecl EPhysicsType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicsType,(UObject *)pUVar1,L"EPhysicsType")
    ;
  }
  return Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton;
}

// EBodyCollisionResponse_StaticEnum @ 144134d00

UEnum * __cdecl EBodyCollisionResponse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse,(UObject *)pUVar1,
                       L"EBodyCollisionResponse");
  }
  return Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton;
}

// `scalar_deleting_destructor' @ 144134d40

void * __thiscall
IPhysicsCoreModule::_scalar_deleting_destructor_(IPhysicsCoreModule *this,uint param_1)

{
  *this = (IPhysicsCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UBodySetupCore @ 144134ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBodySetupCore(void)

{
  if (Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton,
               &Z_Construct_UClass_UBodySetupCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton;
}

// Z_Construct_UClass_UPhysicsSettingsCore @ 144134f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPhysicsSettingsCore(void)

{
  if (Z_Registration_Info_UClass_UPhysicsSettingsCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPhysicsSettingsCore.OuterSingleton,
               &Z_Construct_UClass_UPhysicsSettingsCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPhysicsSettingsCore.OuterSingleton;
}

// NewProp_bEnableEnhancedDeterminism_SetBit @ 144134f70

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableEnhancedDeterminism_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bEnableShapeSharing_SetBit @ 144134f80

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableShapeSharing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bEnablePCM_SetBit @ 144134f90

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnablePCM_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// NewProp_bEnableStabilization_SetBit @ 144134fa0

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnableStabilization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  return;
}

// NewProp_bWarnMissingLocks_SetBit @ 144134fb0

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bWarnMissingLocks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bEnable2DPhysics_SetBit @ 144134fc0

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bEnable2DPhysics_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x55) = 1;
  return;
}

// NewProp_bDefaultHasComplexCollision_SetBit @ 144134fd0

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::NewProp_bDefaultHasComplexCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  return;
}

// NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit @ 144134fe0

void __cdecl
Z_Construct_UClass_UPhysicsSettingsCore_Statics::
NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// Z_Construct_UClass_UChaosPhysicalMaterial @ 1441351d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UChaosPhysicalMaterial(void)

{
  if (Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton,
               &Z_Construct_UClass_UChaosPhysicalMaterial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton;
}

// CastChecked<UPhysicsSettingsCore,UObject> @ 1441369f0

UPhysicsSettingsCore * __cdecl CastChecked<UPhysicsSettingsCore,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPhysicsSettingsCore>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPhysicsSettingsCore::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPhysicsSettingsCore *)param_1;
  }
  pFVar3 = GetTypeName<UPhysicsSettingsCore>(&local_28);
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

// CastHelper<`GetInnerGeometryChecked<Chaos::TBox<double,3>_>'::__l2::<lambda_1>_> @ 144136ab0

FImplicitObject * __cdecl
Chaos::Utilities::CastHelper<_GetInnerGeometryChecked<Chaos::TBox<double,3>_>_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  FImplicitObject *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TBox<double,3> *pTVar14;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar15;
  FCapsule *pFVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  FConvex *pFVar18;
  
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < bVar2) {
switchD_144136ae7_caseD_2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    return param_1;
  }
LAB_144136ad3:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_144136ae7::switchdataD_144136c9c)[(int)uVar4]) {
  case 0:
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    return (FImplicitObject *)pTVar12;
  case 1:
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    return (FImplicitObject *)pTVar14;
  default:
    goto switchD_144136ae7_caseD_2;
  case 3:
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    return (FImplicitObject *)pFVar16;
  case 4:
    break;
  case 8:
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    return (FImplicitObject *)pFVar18;
  case 0x40:
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    return (FImplicitObject *)pTVar12;
  case 0x41:
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    return (FImplicitObject *)pTVar14;
  case 0x43:
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar15->MObject).Reference);
    return (FImplicitObject *)pFVar16;
  case 0x48:
    pTVar17 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    return (FImplicitObject *)pFVar18;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar7;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar8;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    return (FImplicitObject *)pTVar9;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    return (FImplicitObject *)pTVar10;
  }
  pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                     (param_1);
  param_1 = (pTVar5->MObject).Reference;
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < uVar4) goto switchD_144136ae7_caseD_2;
  goto LAB_144136ad3;
}

// CastHelper<`GetInnerGeometryChecked<Chaos::TSphere<double,3>_>'::__l2::<lambda_1>_> @ 144136d30

FImplicitObject * __cdecl
Chaos::Utilities::
CastHelper<_GetInnerGeometryChecked<Chaos::TSphere<double,3>_>_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  FImplicitObject *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TBox<double,3> *pTVar14;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar15;
  FCapsule *pFVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  FConvex *pFVar18;
  
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < bVar2) {
switchD_144136d67_caseD_2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    return param_1;
  }
LAB_144136d53:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_144136d67::switchdataD_144136f1c)[(int)uVar4]) {
  case 0:
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    return (FImplicitObject *)pTVar12;
  case 1:
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    return (FImplicitObject *)pTVar14;
  default:
    goto switchD_144136d67_caseD_2;
  case 3:
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    return (FImplicitObject *)pFVar16;
  case 4:
    break;
  case 8:
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    return (FImplicitObject *)pFVar18;
  case 0x40:
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    return (FImplicitObject *)pTVar12;
  case 0x41:
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    return (FImplicitObject *)pTVar14;
  case 0x43:
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar15->MObject).Reference);
    return (FImplicitObject *)pFVar16;
  case 0x48:
    pTVar17 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    return (FImplicitObject *)pFVar18;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar7;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar8;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    return (FImplicitObject *)pTVar9;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    return (FImplicitObject *)pTVar10;
  }
  pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                     (param_1);
  param_1 = (pTVar5->MObject).Reference;
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < uVar4) goto switchD_144136d67_caseD_2;
  goto LAB_144136d53;
}

// CastHelper<`GetInnerGeometryChecked<Chaos::FCapsule>'::__l2::<lambda_1>_> @ 144136fb0

FImplicitObject * __cdecl
Chaos::Utilities::CastHelper<_GetInnerGeometryChecked<Chaos::FCapsule>_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  FImplicitObject *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TBox<double,3> *pTVar14;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar15;
  FCapsule *pFVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  FConvex *pFVar18;
  
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < bVar2) {
switchD_144136fe7_caseD_2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    return param_1;
  }
LAB_144136fd3:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_144136fe7::switchdataD_14413719c)[(int)uVar4]) {
  case 0:
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    return (FImplicitObject *)pTVar12;
  case 1:
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    return (FImplicitObject *)pTVar14;
  default:
    goto switchD_144136fe7_caseD_2;
  case 3:
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    return (FImplicitObject *)pFVar16;
  case 4:
    break;
  case 8:
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    return (FImplicitObject *)pFVar18;
  case 0x40:
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    return (FImplicitObject *)pTVar12;
  case 0x41:
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    return (FImplicitObject *)pTVar14;
  case 0x43:
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar15->MObject).Reference);
    return (FImplicitObject *)pFVar16;
  case 0x48:
    pTVar17 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    return (FImplicitObject *)pFVar18;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar7;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar8;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    return (FImplicitObject *)pTVar9;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    return (FImplicitObject *)pTVar10;
  }
  pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                     (param_1);
  param_1 = (pTVar5->MObject).Reference;
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < uVar4) goto switchD_144136fe7_caseD_2;
  goto LAB_144136fd3;
}

// CastHelper<`GetInnerGeometryChecked<Chaos::FConvex>'::__l2::<lambda_1>_> @ 144137230

FImplicitObject * __cdecl
Chaos::Utilities::CastHelper<_GetInnerGeometryChecked<Chaos::FConvex>_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  FImplicitObject *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TBox<double,3> *pTVar14;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar15;
  FCapsule *pFVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  FConvex *pFVar18;
  
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < bVar2) {
switchD_144137267_caseD_2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    return param_1;
  }
LAB_144137253:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_144137267::switchdataD_14413741c)[(int)uVar4]) {
  case 0:
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    return (FImplicitObject *)pTVar12;
  case 1:
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    return (FImplicitObject *)pTVar14;
  default:
    goto switchD_144137267_caseD_2;
  case 3:
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    return (FImplicitObject *)pFVar16;
  case 4:
    break;
  case 8:
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    return (FImplicitObject *)pFVar18;
  case 0x40:
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    return (FImplicitObject *)pTVar12;
  case 0x41:
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    return (FImplicitObject *)pTVar14;
  case 0x43:
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar15->MObject).Reference);
    return (FImplicitObject *)pFVar16;
  case 0x48:
    pTVar17 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    return (FImplicitObject *)pFVar18;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar7;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar8;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    return (FImplicitObject *)pTVar9;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    return (FImplicitObject *)pTVar10;
  }
  pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                     (param_1);
  param_1 = (pTVar5->MObject).Reference;
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < uVar4) goto switchD_144137267_caseD_2;
  goto LAB_144137253;
}

// CastHelper<`GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject>'::__l2::<lambda_1>_> @ 1441374b0

FImplicitObject * __cdecl
Chaos::Utilities::
CastHelper<_GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject>_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  FImplicitObject *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TBox<double,3> *pTVar14;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar15;
  FCapsule *pFVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  FConvex *pFVar18;
  
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < bVar2) {
switchD_1441374e7_caseD_2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FImplicitObject *)(*pcVar1)();
      return pFVar6;
    }
    return param_1;
  }
LAB_1441374d3:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_1441374e7::switchdataD_14413769c)[(int)uVar4]) {
  case 0:
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    return (FImplicitObject *)pTVar12;
  case 1:
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    return (FImplicitObject *)pTVar14;
  default:
    goto switchD_1441374e7_caseD_2;
  case 3:
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    return (FImplicitObject *)pFVar16;
  case 4:
    break;
  case 8:
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    return (FImplicitObject *)pFVar18;
  case 0x40:
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    return (FImplicitObject *)pTVar12;
  case 0x41:
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    return (FImplicitObject *)pTVar14;
  case 0x43:
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    pFVar16 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar15->MObject).Reference);
    return (FImplicitObject *)pFVar16;
  case 0x48:
    pTVar17 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    pFVar18 = FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar17->MObject).Reference);
    return (FImplicitObject *)pFVar18;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar7;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    return (FImplicitObject *)pTVar8;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    return (FImplicitObject *)pTVar9;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    return (FImplicitObject *)pTVar10;
  }
  pTVar5 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                     (param_1);
  param_1 = (pTVar5->MObject).Reference;
  bVar2 = FImplicitObject::GetType(param_1);
  uVar4 = (uint)bVar2;
  if (0x88 < uVar4) goto switchD_1441374e7_caseD_2;
  goto LAB_1441374d3;
}

// CastHelper<`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>_> @ 144137730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TBox<double,3> *pTVar4;
  FCapsule *pFVar5;
  FConvex *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStackY_128 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,(TSphere<double,3> *)param_1,(TTransform<double> *)param_2);
    break;
  case '\x01':
    goto LAB_1441377c6;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,param_3->__this->SpatialAcceleration,
               (TTransform<double> *)param_2,param_3->HitBuffer,param_3->QueryFilterData,
               param_3->QueryCallback,param_3->DebugParams);
    break;
  case '\x03':
    goto LAB_1441377e1;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
              ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_1441377fc;
  case '@':
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,pTVar12,(TTransform<double> *)param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_1441377c6:
    pTVar4 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
              (param_3,pTVar4,(TTransform<double> *)param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_1441377e1:
    pFVar5 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
              (param_3,pFVar5,(TTransform<double> *)param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_1441377fc:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FConvex>
              (param_3,pFVar6,(TTransform<double> *)param_2);
    break;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar8,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar9,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
  }
  return;
}

// CastHelper<`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>_> @ 144137bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1>_conflict *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TBox<double,3> *pTVar4;
  FCapsule *pFVar5;
  FConvex *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStackY_128 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,(TSphere<double,3> *)param_1,(TTransform<double> *)param_2);
    break;
  case '\x01':
    goto LAB_144137c46;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,param_3->__this->SpatialAcceleration,
               (TTransform<double> *)param_2,param_3->HitBuffer,param_3->QueryFilterData,
               param_3->QueryCallback,param_3->DebugParams);
    break;
  case '\x03':
    goto LAB_144137c61;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
              ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_144137c7c;
  case '@':
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,pTVar12,(TTransform<double> *)param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_144137c46:
    pTVar4 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
              (param_3,pTVar4,(TTransform<double> *)param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_144137c61:
    pFVar5 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
              (param_3,pFVar5,(TTransform<double> *)param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_144137c7c:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    `FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FConvex>
              (param_3,pFVar6,(TTransform<double> *)param_2);
    break;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar8,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar9,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
    break;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->HitBuffer,param_3->QueryFilterData,param_3->QueryCallback,
               param_3->DebugParams);
  }
  return;
}

// CastHelper<`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>_> @ 144138030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TBox<double,3> *pTVar4;
  FCapsule *pFVar5;
  FConvex *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStackY_138 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,(TSphere<double,3> *)param_1,(TTransform<double> *)param_2);
    break;
  case '\x01':
    goto LAB_1441380c6;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,param_3->__this->SpatialAcceleration,
               (TTransform<double> *)param_2,param_3->Dir,*param_3->DeltaMagnitude,
               param_3->HitBuffer,*param_3->OutputFlags,param_3->QueryFilterData,
               param_3->QueryCallback,param_3->DebugParams);
    break;
  case '\x03':
    goto LAB_1441380e1;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
              ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_1441380fc;
  case '@':
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,pTVar12,(TTransform<double> *)param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_1441380c6:
    pTVar4 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
              (param_3,pTVar4,(TTransform<double> *)param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_1441380e1:
    pFVar5 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
              (param_3,pFVar5,(TTransform<double> *)param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_1441380fc:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FConvex>
              (param_3,pFVar6,(TTransform<double> *)param_2);
    break;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar8,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar9,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
  }
  return;
}

// CastHelper<`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>_> @ 144138570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,<lambda_1>_conflict *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TBox<double,3> *pTVar4;
  FCapsule *pFVar5;
  FConvex *pFVar6;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar7;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar8;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar9;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar10;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar11;
  TSphere<double,3> *pTVar12;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar13;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar14;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar15;
  TImplicitObjectTransformed<double,3,1> *pTVar16;
  undefined1 auStackY_138 [32];
  TTransform<double> local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar2 = FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,(TSphere<double,3> *)param_1,(TTransform<double> *)param_2);
    break;
  case '\x01':
    goto LAB_144138606;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,param_3->__this->SpatialAcceleration,
               (TTransform<double> *)param_2,param_3->Dir,*param_3->DeltaMagnitude,
               param_3->HitBuffer,*param_3->OutputFlags,param_3->QueryFilterData,
               param_3->QueryCallback,param_3->DebugParams);
    break;
  case '\x03':
    goto LAB_144138621;
  case '\x04':
    pTVar16 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        (param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_e8,(TTransform<double> *)&pTVar16->MTransform,(TTransform<double> *)param_2);
    local_88 = local_e8.Rotation.XY.m128d_f64[0];
    dStack_80 = local_e8.Rotation.XY.m128d_f64[1];
    local_78 = local_e8.Rotation.ZW.m128d_f64[0];
    dStack_70 = local_e8.Rotation.ZW.m128d_f64[1];
    local_68 = local_e8.Translation.XY.m128d_f64[0];
    dStack_60 = local_e8.Translation.XY.m128d_f64[1];
    local_58 = local_e8.Translation.ZW.m128d_f64[0];
    dStack_50 = local_e8.Translation.ZW.m128d_f64[1];
    local_48 = local_e8.Scale3D.XY.m128d_f64[0];
    dStack_40 = local_e8.Scale3D.XY.m128d_f64[1];
    local_38 = local_e8.Scale3D.ZW.m128d_f64[0];
    dStack_30 = local_e8.Scale3D.ZW.m128d_f64[1];
    CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
              ((pTVar16->MObject).Reference,(TRigidTransform<double,3> *)&local_88,param_3);
    break;
  case '\b':
    goto LAB_14413863c;
  case '@':
    pTVar11 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1)
    ;
    pTVar12 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
              (param_3,pTVar12,(TTransform<double> *)param_2);
    break;
  case 'A':
    pTVar13 = FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)(pTVar13->MObject).Reference;
LAB_144138606:
    pTVar4 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
              (param_3,pTVar4,(TTransform<double> *)param_2);
    break;
  case 'C':
    pTVar14 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar14->MObject).Reference;
LAB_144138621:
    pFVar5 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
              (param_3,pFVar5,(TTransform<double> *)param_2);
    break;
  case 'H':
    pTVar15 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        (param_1);
    param_1 = (FImplicitObject *)(pTVar15->MObject).Reference;
LAB_14413863c:
    pFVar6 = FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    `FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FConvex>
              (param_3,pFVar6,(TTransform<double> *)param_2);
    break;
  case 0x80:
    pTVar7 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x81:
    pTVar8 = FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar8,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x83:
    pTVar9 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                       (param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar9,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
    break;
  case 0x88:
    pTVar10 = FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        (param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,param_3->__this->SpatialAcceleration,(TTransform<double> *)param_2,
               param_3->Dir,*param_3->DeltaMagnitude,param_3->HitBuffer,*param_3->OutputFlags,
               param_3->QueryFilterData,param_3->QueryCallback,param_3->DebugParams);
  }
  return;
}

// DefaultConstructItems<ChaosInterface::FPTRaycastHit,int> @ 144138d00

void __cdecl DefaultConstructItems<ChaosInterface::FPTRaycastHit,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<ChaosInterface::FPTSweepHit,int> @ 144138d40

void __cdecl DefaultConstructItems<ChaosInterface::FPTSweepHit,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<ChaosInterface::FRaycastHit,int> @ 144138d80

void __cdecl DefaultConstructItems<ChaosInterface::FRaycastHit,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<ChaosInterface::FSweepHit,int> @ 144138dc0

void __cdecl DefaultConstructItems<ChaosInterface::FSweepHit,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_>,int> @ 144138e00

void __cdecl
DestructItems<TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_>,int>
          (TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_> *param_1,
          int param_2)

{
  FChaosSceneCallbackInput *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FChaosSceneCallbackInput *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::FSimCallbackNoOutput,TDefaultDelete<Chaos::FSimCallbackNoOutput>_>,int> @ 144138e40

void __cdecl
DestructItems<TUniquePtr<Chaos::FSimCallbackNoOutput,TDefaultDelete<Chaos::FSimCallbackNoOutput>_>,int>
          (TUniquePtr<Chaos::FSimCallbackNoOutput,TDefaultDelete<Chaos::FSimCallbackNoOutput>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,8);
    param_1 = param_1 + 1;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::GetUserData'::__l2::<lambda_1>_> @ 144138e80

void * __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::GetUserData_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  if (this->Type == 0) {
    return *(void **)&this[1].WorldSpaceShapeBounds.MMin.field_0x10;
  }
  return *(void **)&this[1].WorldSpaceShapeBounds.MMin.field_0x8;
}

// DownCast<`Chaos::FPerShapeData::SetIsProbe'::__l2::<lambda_1>_> @ 144138ea0

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetIsProbe_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  if (this->Type == 0) {
    pIVar4 = (IPhysicsProxyBase *)this[1]._padding_;
    puVar1 = &this[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 ^ ((char)*param_1 << 2 ^ this[1].WorldSpaceShapeBounds.MMax.field_0x1) & 4U;
    uVar3 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar3 | 1;
    if (((uVar3 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar4->Solver,pIVar4,this->ShapeIdx);
      return;
    }
  }
  else {
    puVar1 = &this[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 ^ ((char)*param_1 << 2 ^ this[1].WorldSpaceShapeBounds.MMin.field_0x11) & 4U;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetQueryEnabled'::__l2::<lambda_1>_> @ 144138f10

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetQueryEnabled_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  if (this->Type == 0) {
    pIVar4 = (IPhysicsProxyBase *)this[1]._padding_;
    puVar1 = &this[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 ^ ((char)*param_1 * '\x02' ^ this[1].WorldSpaceShapeBounds.MMax.field_0x1) &
                        2U;
    uVar3 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar3 | 1;
    if (((uVar3 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar4->Solver,pIVar4,this->ShapeIdx);
      return;
    }
  }
  else {
    puVar1 = &this[1].WorldSpaceShapeBounds.MMin.field_0x11;
    *puVar1 = *puVar1 ^ ((char)*param_1 * '\x02' ^ this[1].WorldSpaceShapeBounds.MMin.field_0x11) &
                        2U;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetUserData'::__l2::<lambda_1>_> @ 144138f70

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetUserData_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  IPhysicsProxyBase *pIVar3;
  
  if (this->Type == 0) {
    pIVar3 = (IPhysicsProxyBase *)this[1]._padding_;
    *(undefined8 *)&this[1].WorldSpaceShapeBounds.MMin.field_0x10 = *(undefined8 *)param_1;
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 1;
    if (((uVar2 == 0) && (pIVar3 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,this->ShapeIdx);
      return;
    }
  }
  else {
    *(undefined8 *)&this[1].WorldSpaceShapeBounds.MMin.field_0x8 = *(undefined8 *)param_1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FOverlapHit> @ 144139260

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FOverlapHit>
          (FOverlapHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    dVar1 = *(double *)&param_1->field_0x20;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x18;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x28;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FPTOverlapHit> @ 1441392c0

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FPTOverlapHit>
          (FPTOverlapHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    dVar1 = *(double *)&param_1->field_0x20;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x18;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x28;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FPTRaycastHit> @ 144139320

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FPTRaycastHit>
          (FPTRaycastHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    (param_3->HitData).Distance = *(float *)&param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Z = (double)param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Z = (double)param_1->_padding_;
    (param_3->HitData).Flags = (ushort)param_1->_padding_;
    (param_3->HitData).FaceIdx = (int)param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = (double)param_1->_padding_;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FPTSweepHit> @ 1441393d0

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FPTSweepHit>
          (FPTSweepHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    (param_3->HitData).Distance = *(float *)&param_1->field_0x70;
    dVar1 = *(double *)&param_1->field_0x48;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.X = *(double *)&param_1->field_0x40;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Z = *(double *)&param_1->field_0x50;
    dVar1 = *(double *)&param_1->field_0x60;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x58;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x68;
    (param_3->HitData).Flags = *(ushort *)&param_1->field_0x38;
    (param_3->HitData).FaceIdx = *(int *)&param_1->field_0x10;
    dVar1 = *(double *)&param_1->field_0x20;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x18;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x28;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FRaycastHit> @ 144139480

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FRaycastHit>
          (FRaycastHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    (param_3->HitData).Distance = *(float *)&param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Z = (double)param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Z = (double)param_1->_padding_;
    (param_3->HitData).Flags = (ushort)param_1->_padding_;
    (param_3->HitData).FaceIdx = (int)param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = (double)param_1->_padding_;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = (double)param_1->_padding_;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillCVDHitDataHelper<ChaosInterface::FSweepHit> @ 144139530

void __cdecl
Chaos::VisualDebugger::TraceHelpers::FillCVDHitDataHelper<ChaosInterface::FSweepHit>
          (FSweepHit *param_1,ECollisionQueryHitType param_2,FChaosVDQueryVisitStep *param_3)

{
  double dVar1;
  bool bVar2;
  
  bVar2 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar2) {
    (param_3->HitData).Distance = *(float *)&param_1->field_0x70;
    dVar1 = *(double *)&param_1->field_0x48;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.X = *(double *)&param_1->field_0x40;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldPosition.field0_0x0._s_0.Z = *(double *)&param_1->field_0x50;
    dVar1 = *(double *)&param_1->field_0x60;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x58;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).WorldNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x68;
    (param_3->HitData).Flags = *(ushort *)&param_1->field_0x38;
    (param_3->HitData).FaceIdx = *(int *)&param_1->field_0x10;
    dVar1 = *(double *)&param_1->field_0x20;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.X = *(double *)&param_1->field_0x18;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Y = dVar1;
    (param_3->HitData).FaceNormal.field0_0x0._s_0.Z = *(double *)&param_1->field_0x28;
    param_3->HitType = (uint)param_2;
    *(undefined1 *)&(param_3->HitData)._padding_ = 1;
  }
  return;
}

// FillHitHelper<ChaosInterface::FOverlapHit> @ 1441395e0

void __cdecl
FillHitHelper<ChaosInterface::FOverlapHit>
          (FOverlapHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  return;
}

// FillHitHelper<ChaosInterface::FPTOverlapHit> @ 1441395f0

void __cdecl
FillHitHelper<ChaosInterface::FPTOverlapHit>
          (FPTOverlapHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  return;
}

// FillHitHelper<ChaosInterface::FPTRaycastHit> @ 144139600

void __cdecl
FillHitHelper<ChaosInterface::FPTRaycastHit>
          (FPTRaycastHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  double dVar1;
  
  *(float *)&param_1->_padding_ = (float)param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  param_1->_padding_ = (longlong)(param_3->field0_0x0)._s_0.X;
  param_1->_padding_ = (longlong)dVar1;
  param_1->_padding_ = (longlong)(param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  param_1->_padding_ = (longlong)(param_4->field0_0x0)._s_0.X;
  param_1->_padding_ = (longlong)dVar1;
  param_1->_padding_ = (longlong)(param_4->field0_0x0)._s_0.Z;
  if ((param_2 <= 0.0) && (!param_6)) {
    *(int *)&param_1->_padding_ = param_5;
    *(undefined2 *)&param_1->_padding_ = 0x404;
    return;
  }
  *(int *)&param_1->_padding_ = param_5;
  *(undefined2 *)&param_1->_padding_ = 7;
  return;
}

// FillHitHelper<ChaosInterface::FPTSweepHit> @ 144139670

void __cdecl
FillHitHelper<ChaosInterface::FPTSweepHit>
          (FPTSweepHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  double dVar1;
  
  *(float *)&param_1->field_0x70 = (float)param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  *(double *)&param_1->field_0x40 = (param_3->field0_0x0)._s_0.X;
  *(double *)&param_1->field_0x48 = dVar1;
  *(double *)&param_1->field_0x50 = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  *(double *)&param_1->field_0x58 = (param_4->field0_0x0)._s_0.X;
  *(double *)&param_1->field_0x60 = dVar1;
  *(double *)&param_1->field_0x68 = (param_4->field0_0x0)._s_0.Z;
  if ((param_2 <= 0.0) && (!param_6)) {
    *(int *)&param_1->field_0x10 = param_5;
    *(undefined2 *)&param_1->field_0x38 = 0x404;
    return;
  }
  *(int *)&param_1->field_0x10 = param_5;
  *(undefined2 *)&param_1->field_0x38 = 7;
  return;
}

// FillHitHelper<ChaosInterface::FRaycastHit> @ 1441396e0

void __cdecl
FillHitHelper<ChaosInterface::FRaycastHit>
          (FRaycastHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  double dVar1;
  
  *(float *)&param_1->_padding_ = (float)param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  param_1->_padding_ = (longlong)(param_3->field0_0x0)._s_0.X;
  param_1->_padding_ = (longlong)dVar1;
  param_1->_padding_ = (longlong)(param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  param_1->_padding_ = (longlong)(param_4->field0_0x0)._s_0.X;
  param_1->_padding_ = (longlong)dVar1;
  param_1->_padding_ = (longlong)(param_4->field0_0x0)._s_0.Z;
  if ((param_2 <= 0.0) && (!param_6)) {
    *(int *)&param_1->_padding_ = param_5;
    *(undefined2 *)&param_1->_padding_ = 0x404;
    return;
  }
  *(int *)&param_1->_padding_ = param_5;
  *(undefined2 *)&param_1->_padding_ = 7;
  return;
}

// FillHitHelper<ChaosInterface::FSweepHit> @ 144139750

void __cdecl
FillHitHelper<ChaosInterface::FSweepHit>
          (FSweepHit *param_1,double param_2,TVector<double> *param_3,TVector<double> *param_4,
          int param_5,bool param_6)

{
  double dVar1;
  
  *(float *)&param_1->field_0x70 = (float)param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  *(double *)&param_1->field_0x40 = (param_3->field0_0x0)._s_0.X;
  *(double *)&param_1->field_0x48 = dVar1;
  *(double *)&param_1->field_0x50 = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  *(double *)&param_1->field_0x58 = (param_4->field0_0x0)._s_0.X;
  *(double *)&param_1->field_0x60 = dVar1;
  *(double *)&param_1->field_0x68 = (param_4->field0_0x0)._s_0.Z;
  if ((param_2 <= 0.0) && (!param_6)) {
    *(int *)&param_1->field_0x10 = param_5;
    *(undefined2 *)&param_1->field_0x38 = 0x404;
    return;
  }
  *(int *)&param_1->field_0x10 = param_5;
  *(undefined2 *)&param_1->field_0x38 = 7;
  return;
}

// FindFaceIndexImp<ChaosInterface::FLocationHit> @ 1441397c0

uint __cdecl
FindFaceIndexImp<ChaosInterface::FLocationHit>(FLocationHit *param_1,TVector<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [16];
  double local_90;
  
  lVar2 = param_1->_padding_;
  dVar25 = (param_1->WorldPosition).field0_0x0._s_0.X - *(double *)(lVar2 + 0x20);
  dVar30 = (param_1->WorldPosition).field0_0x0._s_0.Y - *(double *)(lVar2 + 0x28);
  uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
  dVar4 = (double)(float)*(undefined8 *)(lVar2 + 0x48) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar33._0_8_ = (param_1->WorldPosition).field0_0x0._s_0.Z - *(double *)(lVar2 + 0x30);
  auVar33._8_8_ = 0;
  auVar26._8_4_ = SUB84(dVar30,0);
  auVar26._0_8_ = dVar25;
  auVar26._12_4_ = uVar31;
  auVar24._8_4_ = SUB84(dVar30,0);
  auVar24._0_8_ = dVar25;
  auVar24._12_4_ = uVar31;
  auVar13 = blendpd(auVar24,auVar33,2);
  dVar6 = (double)*(float *)(lVar2 + 0x40) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar7 = (double)*(float *)(lVar2 + 0x44) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar24 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar32 = auVar24._8_8_;
  auVar36._8_4_ = SUB84(dVar7,0);
  auVar36._0_8_ = dVar6;
  auVar36._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar37._8_4_ = SUB84(dVar5,0);
  auVar37._0_8_ = dVar4;
  auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar37 = blendpd(auVar36,auVar37,2);
  auVar27._0_8_ = auVar26._8_8_ * dVar6 - dVar25 * dVar7;
  auVar27._8_8_ = auVar33._0_8_ * dVar7 - dVar30 * dVar4;
  dVar11 = auVar37._0_8_;
  dVar12 = auVar37._8_8_;
  auVar14._0_8_ = auVar13._0_8_ * dVar4 - dVar11 * auVar33._0_8_;
  auVar14._8_8_ = auVar13._8_8_ * dVar5 - dVar12 * 0.0;
  auVar13 = blendpd(auVar27,auVar14,2);
  dVar8 = auVar27._8_8_ + auVar27._8_8_;
  dVar9 = auVar14._0_8_ + auVar14._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar28._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar28._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar20._8_4_ = SUB84(dVar9,0);
  auVar20._0_8_ = dVar8;
  auVar20._12_4_ = uVar31;
  auVar15._8_4_ = SUB84(dVar9,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar31;
  auVar13 = blendpd(auVar15,auVar28,2);
  auVar21._0_8_ = auVar20._8_8_ * dVar6 - dVar8 * dVar7;
  auVar21._8_8_ = auVar28._0_8_ * dVar7 - dVar9 * dVar4;
  auVar16._0_8_ = auVar13._0_8_ * dVar4 - auVar28._0_8_ * dVar11;
  auVar16._8_8_ = auVar13._8_8_ * dVar5 - auVar28._8_8_ * dVar12;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  auVar13 = blendpd(auVar21,auVar16,2);
  dVar30 = dVar9 * dVar5 + dVar30 + auVar16._0_8_;
  local_90 = auVar28._0_8_ * dVar5 + auVar33._0_8_ + auVar13._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1;
  auVar13 = blendpd(auVar24,auVar13,2);
  auVar34._0_8_ = dVar32 * dVar6 - auVar24._0_8_ * dVar7;
  auVar34._8_8_ = dVar1 * dVar7 - dVar32 * dVar4;
  plVar3 = *(longlong **)(param_1->_padding_ + 0x10);
  auVar29._8_4_ = SUB84(auVar34._8_8_,0);
  auVar29._0_8_ = auVar34._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar17._0_8_ = auVar13._0_8_ * dVar4 - dVar1 * dVar11;
  auVar17._8_8_ = auVar13._8_8_ * dVar5 - dVar12 * 0.0;
  local_a0._8_4_ = SUB84(dVar30,0);
  local_a0._0_8_ = dVar8 * dVar5 + dVar25 + auVar21._8_8_;
  local_a0._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar13 = blendpd(auVar34,auVar17,2);
  dVar25 = auVar29._8_8_ + auVar29._8_8_;
  dVar30 = auVar17._0_8_ + auVar17._0_8_;
  auVar35._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar35._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar22._8_4_ = SUB84(dVar30,0);
  auVar22._0_8_ = dVar25;
  uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar22._12_4_ = uVar31;
  auVar18._8_4_ = SUB84(dVar30,0);
  auVar18._0_8_ = dVar25;
  auVar18._12_4_ = uVar31;
  auVar13 = blendpd(auVar18,auVar35,2);
  auVar23._0_8_ = auVar22._8_8_ * dVar6 - dVar25 * dVar7;
  auVar23._8_8_ = auVar35._0_8_ * dVar7 - dVar30 * dVar4;
  auVar19._0_8_ = auVar13._0_8_ * dVar4 - auVar35._0_8_ * dVar11;
  auVar19._8_8_ = auVar13._8_8_ * dVar5 - auVar35._8_8_ * dVar12;
  local_b8 = dVar25 * dVar5 + auVar24._0_8_ + auVar23._8_8_;
  dStack_b0 = dVar30 * dVar5 + dVar32 + auVar19._0_8_;
  auVar24 = blendpd(auVar23,auVar19,2);
  local_a8 = auVar35._0_8_ * dVar5 + dVar1 + auVar24._0_8_;
  uVar10 = (**(code **)(*plVar3 + 0xb8))
                     (plVar3,local_a0,&local_b8,(int)param_1->_padding_,__real_3ff0000000000000);
  return uVar10;
}

// FindFaceIndexImp<ChaosInterface::FPTLocationHit> @ 144139a40

uint __cdecl
FindFaceIndexImp<ChaosInterface::FPTLocationHit>(FPTLocationHit *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TVector<double,3> *pTVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [16];
  double local_90;
  
  pTVar16 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1->_padding_,
                       *(int *)((undefined8 *)param_1->_padding_ + 1));
  uVar15 = *(uint *)((longlong *)param_1->_padding_ + 1);
  lVar17 = (longlong)(int)uVar15;
  lVar3 = *(longlong *)param_1->_padding_;
  uVar14 = 0;
  if ((int)uVar15 < *(int *)(lVar3 + 0x50)) {
    uVar14 = ~uVar15 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return uVar15;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + 8 + lVar17 * 0x10);
  dVar6 = (param_1->WorldPosition).field0_0x0._s_0.X - *(double *)pTVar16;
  dVar7 = (param_1->WorldPosition).field0_0x0._s_0.Y - *(double *)&pTVar16->field_0x8;
  uVar36 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (double)(float)uVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = (double)(float)((ulonglong)uVar1 >> 0x20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar38._0_8_ = (param_1->WorldPosition).field0_0x0._s_0.Z - *(double *)&pTVar16->field_0x10;
  auVar38._8_8_ = 0;
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar36;
  auVar29._8_4_ = SUB84(dVar7,0);
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = uVar36;
  auVar18 = blendpd(auVar29,auVar38,2);
  dVar10 = (double)*(float *)(lVar3 + lVar17 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = (double)*(float *)(lVar3 + 4 + lVar17 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar29 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar37 = auVar29._8_8_;
  auVar42._8_4_ = SUB84(dVar11,0);
  auVar42._0_8_ = dVar10;
  auVar42._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar43._8_4_ = SUB84(dVar9,0);
  auVar43._0_8_ = dVar8;
  auVar43._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar43 = blendpd(auVar42,auVar43,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar10 - dVar11 * dVar6;
  auVar32._8_8_ = auVar38._0_8_ * dVar11 - dVar8 * dVar7;
  dVar41 = auVar43._0_8_;
  dVar44 = auVar43._8_8_;
  auVar19._0_8_ = auVar18._0_8_ * dVar8 - auVar38._0_8_ * dVar41;
  auVar19._8_8_ = auVar18._8_8_ * dVar9 - dVar44 * 0.0;
  auVar18 = blendpd(auVar32,auVar19,2);
  auVar33._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar33._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  dVar12 = auVar32._8_8_ + auVar32._8_8_;
  dVar30 = auVar19._0_8_ + auVar19._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar25._8_4_ = SUB84(dVar30,0);
  auVar25._0_8_ = dVar12;
  auVar25._12_4_ = uVar36;
  auVar20._8_4_ = SUB84(dVar30,0);
  auVar20._0_8_ = dVar12;
  auVar20._12_4_ = uVar36;
  auVar18 = blendpd(auVar20,auVar33,2);
  auVar26._0_8_ = auVar25._8_8_ * dVar10 - dVar12 * dVar11;
  auVar26._8_8_ = auVar33._0_8_ * dVar11 - dVar30 * dVar8;
  auVar21._0_8_ = auVar18._0_8_ * dVar8 - auVar33._0_8_ * dVar41;
  auVar21._8_8_ = auVar18._8_8_ * dVar9 - auVar33._8_8_ * dVar44;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar18 = blendpd(auVar26,auVar21,2);
  dVar7 = dVar30 * dVar9 + dVar7 + auVar21._0_8_;
  local_90 = auVar33._0_8_ * dVar9 + auVar38._0_8_ + auVar18._0_8_;
  auVar39._0_8_ = dVar37 * dVar10 - auVar29._0_8_ * dVar11;
  auVar39._8_8_ = dVar2 * dVar11 - dVar37 * dVar8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar2;
  auVar18 = blendpd(auVar29,auVar18,2);
  auVar34._8_4_ = SUB84(auVar39._8_8_,0);
  auVar34._0_8_ = auVar39._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar22._0_8_ = auVar18._0_8_ * dVar8 - dVar2 * dVar41;
  auVar22._8_8_ = auVar18._8_8_ * dVar9 - dVar44 * 0.0;
  auVar18 = blendpd(auVar39,auVar22,2);
  dVar30 = auVar34._8_8_ + auVar34._8_8_;
  dVar35 = auVar22._0_8_ + auVar22._0_8_;
  auVar40._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar40._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar27._8_4_ = SUB84(dVar35,0);
  auVar27._0_8_ = dVar30;
  uVar36 = (undefined4)((ulonglong)dVar35 >> 0x20);
  auVar27._12_4_ = uVar36;
  auVar23._8_4_ = SUB84(dVar35,0);
  auVar23._0_8_ = dVar30;
  auVar23._12_4_ = uVar36;
  plVar4 = *(longlong **)(param_1->_padding_ + 0x10);
  auVar18 = blendpd(auVar23,auVar40,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar10 - dVar30 * dVar11;
  auVar28._8_8_ = auVar40._0_8_ * dVar11 - dVar35 * dVar8;
  auVar24._0_8_ = auVar18._0_8_ * dVar8 - auVar40._0_8_ * dVar41;
  auVar24._8_8_ = auVar18._8_8_ * dVar9 - auVar40._8_8_ * dVar44;
  local_b8 = dVar30 * dVar9 + auVar29._0_8_ + auVar28._8_8_;
  dStack_b0 = dVar35 * dVar9 + dVar37 + auVar24._0_8_;
  auVar29 = blendpd(auVar28,auVar24,2);
  local_a8 = auVar40._0_8_ * dVar9 + dVar2 + auVar29._0_8_;
  local_a0._8_4_ = SUB84(dVar7,0);
  local_a0._0_8_ = dVar12 * dVar9 + dVar6 + auVar26._8_8_;
  local_a0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  uVar15 = (**(code **)(*plVar4 + 0xb8))
                     (plVar4,local_a0,&local_b8,(int)param_1->_padding_,__real_3ff0000000000000);
  return uVar15;
}

// FinishQueryHelper<ChaosInterface::FPTRaycastHit> @ 144139d50

void __cdecl
ChaosInterface::FinishQueryHelper<ChaosInterface::FPTRaycastHit>
          (TArray<ChaosInterface::FPTRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FPTRaycastHit *param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<ChaosInterface::FPTRaycastHit> FVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  void *_Dst;
  longlong lVar23;
  int iVar24;
  ForElementType<ChaosInterface::FPTRaycastHit> FVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  FIdentityFunctor local_res18 [16];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  FVar25 = (ForElementType<ChaosInterface::FPTRaycastHit>)param_1;
  if (FVar3 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
    FVar25 = FVar3;
  }
  AlgoImpl::
  IntroSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_>
            ((FPTRaycastHit *)FVar25,*piVar1,local_res18[0],(TLess<void> *)local_res18);
  if (param_3) {
    uVar26 = *piVar1 - 1;
    uVar28 = *piVar1 + 1;
    if (-1 < (int)uVar26) {
      lVar27 = (longlong)(int)uVar26 << 7;
      do {
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (param_1->AllocatorInstance).SecondaryData;
        FVar25 = (ForElementType<ChaosInterface::FPTRaycastHit>)param_1;
        if (FVar3 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
          FVar25 = FVar3;
        }
        if (*(float *)((uchar *)((longlong)FVar25 + 0x70) + lVar27) <= *(float *)&param_2->_padding_
            && *(float *)&param_2->_padding_ !=
               *(float *)((uchar *)((longlong)FVar25 + 0x70) + lVar27)) break;
        uVar28 = uVar28 - 1;
        lVar27 = lVar27 + -0x80;
        uVar26 = uVar26 - 1;
      } while (-1 < (int)uVar26);
    }
    iVar24 = *piVar1;
    if (iVar24 < (int)uVar28) {
      iVar22 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTRaycastHit>_>
                         (0x80,8,uVar28 - iVar24,&param_1->AllocatorInstance,piVar1,
                          &param_1->ArrayMax);
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<ChaosInterface::FPTRaycastHit>)param_1;
      if (FVar3 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
        FVar25 = FVar3;
      }
      DefaultConstructItems<ChaosInterface::FPTRaycastHit,int>
                ((void *)((longlong)iVar22 * 0x80 + (longlong)FVar25),uVar28 - iVar24);
    }
    else {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((int)uVar28 < iVar24) {
        uVar26 = iVar24 - uVar28;
        if (((int)(uVar26 | uVar28) < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar26 != 0) {
          FVar3 = (param_1->AllocatorInstance).SecondaryData;
          FVar25 = (ForElementType<ChaosInterface::FPTRaycastHit>)param_1;
          if (FVar3 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
            FVar25 = FVar3;
          }
          _Dst = (void *)((longlong)(int)uVar28 * 0x80 + (longlong)FVar25);
          iVar24 = (*piVar1 - uVar26) - uVar28;
          if (iVar24 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar26 * 0x80 + (longlong)_Dst),
                    (longlong)iVar24 << 7);
          }
          *piVar1 = *piVar1 - uVar26;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTRaycastHit>_>
                    (0x80,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    uVar28 = uVar28 - 1;
    lVar27 = param_2->_padding_;
    lVar5 = param_2->_padding_;
    lVar6 = param_2->_padding_;
    lVar7 = param_2->_padding_;
    lVar8 = param_2->_padding_;
    lVar9 = param_2->_padding_;
    uVar26 = 0;
    if ((int)uVar28 < *piVar1) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    lVar10 = param_2->_padding_;
    lVar11 = param_2->_padding_;
    lVar12 = param_2->_padding_;
    lVar13 = param_2->_padding_;
    lVar14 = param_2->_padding_;
    lVar15 = param_2->_padding_;
    lVar16 = param_2->_padding_;
    lVar17 = param_2->_padding_;
    lVar18 = param_2->_padding_;
    lVar19 = *(longlong *)&param_2->U;
    if ((uVar26 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<ChaosInterface::FPTRaycastHit>)0x0) {
      param_1 = (TArray<ChaosInterface::FPTRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    lVar23 = (longlong)(int)uVar28 * 0x80;
    *(longlong *)(lVar23 + (longlong)param_1) = lVar27;
    ((longlong *)(lVar23 + (longlong)param_1))[1] = lVar5;
    plVar2 = (longlong *)(lVar23 + 0x10 + (longlong)param_1);
    *plVar2 = lVar6;
    plVar2[1] = lVar7;
    plVar2 = (longlong *)(lVar23 + 0x20 + (longlong)param_1);
    *plVar2 = lVar8;
    plVar2[1] = lVar9;
    plVar2 = (longlong *)(lVar23 + 0x30 + (longlong)param_1);
    *plVar2 = lVar10;
    plVar2[1] = lVar11;
    plVar2 = (longlong *)(lVar23 + 0x40 + (longlong)param_1);
    *plVar2 = lVar12;
    plVar2[1] = lVar13;
    plVar2 = (longlong *)(lVar23 + 0x50 + (longlong)param_1);
    *plVar2 = lVar14;
    plVar2[1] = lVar15;
    plVar2 = (longlong *)(lVar23 + 0x60 + (longlong)param_1);
    *plVar2 = lVar16;
    plVar2[1] = lVar17;
    plVar2 = (longlong *)(lVar23 + 0x70 + (longlong)param_1);
    *plVar2 = lVar18;
    plVar2[1] = lVar19;
  }
  return;
}

// FinishQueryHelper<ChaosInterface::FPTSweepHit> @ 14413a0c0

void __cdecl
ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
          (TArray<ChaosInterface::FPTSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FPTSweepHit *param_2,bool param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FPTSweepHit> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ForElementType<ChaosInterface::FPTSweepHit> FVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  void *_Dst;
  FIdentityFunctor local_res18 [16];
  
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)param_1;
  if (FVar4 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
    FVar24 = FVar4;
  }
  AlgoImpl::
  IntroSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_>
            ((FPTSweepHit *)FVar24,*piVar1,local_res18[0],(TLess<void> *)local_res18);
  if (param_3) {
    uVar25 = *piVar1 - 1;
    uVar27 = *piVar1 + 1;
    if (-1 < (int)uVar25) {
      lVar26 = (longlong)(int)uVar25 * 0x78;
      do {
        uVar21 = 0;
        if ((int)uVar25 < *piVar1) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_1->AllocatorInstance).SecondaryData;
        FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)param_1;
        if (FVar4 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
          FVar24 = FVar4;
        }
        if (*(float *)((uchar *)((longlong)FVar24 + 0x70) + lVar26) <=
            *(float *)&param_2->field_0x70 &&
            *(float *)&param_2->field_0x70 !=
            *(float *)((uchar *)((longlong)FVar24 + 0x70) + lVar26)) break;
        uVar27 = uVar27 - 1;
        lVar26 = lVar26 + -0x78;
        uVar25 = uVar25 - 1;
      } while (-1 < (int)uVar25);
    }
    iVar23 = *piVar1;
    if (iVar23 < (int)uVar27) {
      iVar22 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTSweepHit>_>
                         (0x78,8,uVar27 - iVar23,&param_1->AllocatorInstance,piVar1,
                          &param_1->ArrayMax);
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)param_1;
      if (FVar4 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
        FVar24 = FVar4;
      }
      DefaultConstructItems<ChaosInterface::FPTSweepHit,int>
                ((void *)((longlong)iVar22 * 0x78 + (longlong)FVar24),uVar27 - iVar23);
    }
    else {
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      if ((int)uVar27 < iVar23) {
        uVar25 = iVar23 - uVar27;
        if (((int)(uVar25 | uVar27) < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar25 != 0) {
          FVar4 = (param_1->AllocatorInstance).SecondaryData;
          FVar24 = (ForElementType<ChaosInterface::FPTSweepHit>)param_1;
          if (FVar4 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
            FVar24 = FVar4;
          }
          _Dst = (void *)((longlong)(int)uVar27 * 0x78 + (longlong)FVar24);
          iVar23 = (*piVar1 - uVar25) - uVar27;
          if (iVar23 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar25 * 0x78 + (longlong)_Dst),
                    (longlong)iVar23 * 0x78);
          }
          *piVar1 = *piVar1 - uVar25;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FPTSweepHit>_>
                    (0x78,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    uVar27 = uVar27 - 1;
    uVar6 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)&param_2->field_0x8;
    uVar8 = *(undefined8 *)&param_2->field_0x10;
    uVar9 = *(undefined8 *)&param_2->field_0x18;
    uVar10 = *(undefined8 *)&param_2->field_0x20;
    uVar11 = *(undefined8 *)&param_2->field_0x28;
    uVar25 = 0;
    if ((int)uVar27 < *piVar1) {
      uVar25 = ~uVar27 >> 0x1f;
    }
    uVar3 = *(undefined8 *)&param_2->field_0x70;
    uVar12 = *(undefined8 *)&param_2->field_0x30;
    uVar13 = *(undefined8 *)&param_2->field_0x38;
    uVar14 = *(undefined8 *)&param_2->field_0x40;
    uVar15 = *(undefined8 *)&param_2->field_0x48;
    uVar16 = *(undefined8 *)&param_2->field_0x50;
    uVar17 = *(undefined8 *)&param_2->field_0x58;
    uVar18 = *(undefined8 *)&param_2->field_0x60;
    uVar19 = *(undefined8 *)&param_2->field_0x68;
    if ((uVar25 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<ChaosInterface::FPTSweepHit>)0x0) {
      param_1 = (TArray<ChaosInterface::FPTSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    lVar26 = (longlong)(int)uVar27 * 0x78;
    *(undefined8 *)(lVar26 + (longlong)param_1) = uVar6;
    ((undefined8 *)(lVar26 + (longlong)param_1))[1] = uVar7;
    puVar2 = (undefined8 *)(lVar26 + 0x10 + (longlong)param_1);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(lVar26 + 0x20 + (longlong)param_1);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar26 + 0x30 + (longlong)param_1);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar26 + 0x40 + (longlong)param_1);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2 = (undefined8 *)(lVar26 + 0x50 + (longlong)param_1);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2 = (undefined8 *)(lVar26 + 0x60 + (longlong)param_1);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    *(undefined8 *)(lVar26 + 0x70 + (longlong)param_1) = uVar3;
  }
  return;
}

// FinishQueryHelper<ChaosInterface::FRaycastHit> @ 14413a430

void __cdecl
ChaosInterface::FinishQueryHelper<ChaosInterface::FRaycastHit>
          (TArray<ChaosInterface::FRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FRaycastHit *param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<ChaosInterface::FRaycastHit> FVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  void *_Dst;
  longlong lVar23;
  int iVar24;
  ForElementType<ChaosInterface::FRaycastHit> FVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  FIdentityFunctor local_res18 [16];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  FVar25 = (ForElementType<ChaosInterface::FRaycastHit>)param_1;
  if (FVar3 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    FVar25 = FVar3;
  }
  AlgoImpl::
  IntroSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_>
            ((FRaycastHit *)FVar25,*piVar1,local_res18[0],(TLess<void> *)local_res18);
  if (param_3) {
    uVar26 = *piVar1 - 1;
    uVar28 = *piVar1 + 1;
    if (-1 < (int)uVar26) {
      lVar27 = (longlong)(int)uVar26 << 7;
      do {
        uVar21 = 0;
        if ((int)uVar26 < *piVar1) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (param_1->AllocatorInstance).SecondaryData;
        FVar25 = (ForElementType<ChaosInterface::FRaycastHit>)param_1;
        if (FVar3 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
          FVar25 = FVar3;
        }
        if (*(float *)((uchar *)((longlong)FVar25 + 0x70) + lVar27) <= *(float *)&param_2->_padding_
            && *(float *)&param_2->_padding_ !=
               *(float *)((uchar *)((longlong)FVar25 + 0x70) + lVar27)) break;
        uVar28 = uVar28 - 1;
        lVar27 = lVar27 + -0x80;
        uVar26 = uVar26 - 1;
      } while (-1 < (int)uVar26);
    }
    iVar24 = *piVar1;
    if (iVar24 < (int)uVar28) {
      iVar22 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                         (0x80,8,uVar28 - iVar24,&param_1->AllocatorInstance,piVar1,
                          &param_1->ArrayMax);
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar25 = (ForElementType<ChaosInterface::FRaycastHit>)param_1;
      if (FVar3 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
        FVar25 = FVar3;
      }
      DefaultConstructItems<ChaosInterface::FRaycastHit,int>
                ((void *)((longlong)iVar22 * 0x80 + (longlong)FVar25),uVar28 - iVar24);
    }
    else {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((int)uVar28 < iVar24) {
        uVar26 = iVar24 - uVar28;
        if (((int)(uVar26 | uVar28) < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar26 != 0) {
          FVar3 = (param_1->AllocatorInstance).SecondaryData;
          FVar25 = (ForElementType<ChaosInterface::FRaycastHit>)param_1;
          if (FVar3 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
            FVar25 = FVar3;
          }
          _Dst = (void *)((longlong)(int)uVar28 * 0x80 + (longlong)FVar25);
          iVar24 = (*piVar1 - uVar26) - uVar28;
          if (iVar24 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar26 * 0x80 + (longlong)_Dst),
                    (longlong)iVar24 << 7);
          }
          *piVar1 = *piVar1 - uVar26;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FRaycastHit>_>
                    (0x80,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    uVar28 = uVar28 - 1;
    lVar27 = param_2->_padding_;
    lVar5 = param_2->_padding_;
    lVar6 = param_2->_padding_;
    lVar7 = param_2->_padding_;
    lVar8 = param_2->_padding_;
    lVar9 = param_2->_padding_;
    uVar26 = 0;
    if ((int)uVar28 < *piVar1) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    lVar10 = param_2->_padding_;
    lVar11 = param_2->_padding_;
    lVar12 = param_2->_padding_;
    lVar13 = param_2->_padding_;
    lVar14 = param_2->_padding_;
    lVar15 = param_2->_padding_;
    lVar16 = param_2->_padding_;
    lVar17 = param_2->_padding_;
    lVar18 = param_2->_padding_;
    lVar19 = *(longlong *)&param_2->U;
    if ((uVar26 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
      param_1 = (TArray<ChaosInterface::FRaycastHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    lVar23 = (longlong)(int)uVar28 * 0x80;
    *(longlong *)(lVar23 + (longlong)param_1) = lVar27;
    ((longlong *)(lVar23 + (longlong)param_1))[1] = lVar5;
    plVar2 = (longlong *)(lVar23 + 0x10 + (longlong)param_1);
    *plVar2 = lVar6;
    plVar2[1] = lVar7;
    plVar2 = (longlong *)(lVar23 + 0x20 + (longlong)param_1);
    *plVar2 = lVar8;
    plVar2[1] = lVar9;
    plVar2 = (longlong *)(lVar23 + 0x30 + (longlong)param_1);
    *plVar2 = lVar10;
    plVar2[1] = lVar11;
    plVar2 = (longlong *)(lVar23 + 0x40 + (longlong)param_1);
    *plVar2 = lVar12;
    plVar2[1] = lVar13;
    plVar2 = (longlong *)(lVar23 + 0x50 + (longlong)param_1);
    *plVar2 = lVar14;
    plVar2[1] = lVar15;
    plVar2 = (longlong *)(lVar23 + 0x60 + (longlong)param_1);
    *plVar2 = lVar16;
    plVar2[1] = lVar17;
    plVar2 = (longlong *)(lVar23 + 0x70 + (longlong)param_1);
    *plVar2 = lVar18;
    plVar2[1] = lVar19;
  }
  return;
}

// FinishQueryHelper<ChaosInterface::FSweepHit> @ 14413a7a0

void __cdecl
ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
          (TArray<ChaosInterface::FSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FSweepHit *param_2,bool param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ForElementType<ChaosInterface::FSweepHit> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ForElementType<ChaosInterface::FSweepHit> FVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  void *_Dst;
  FIdentityFunctor local_res18 [16];
  
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  FVar24 = (ForElementType<ChaosInterface::FSweepHit>)param_1;
  if (FVar4 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    FVar24 = FVar4;
  }
  AlgoImpl::
  IntroSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_>
            ((FSweepHit *)FVar24,*piVar1,local_res18[0],(TLess<void> *)local_res18);
  if (param_3) {
    uVar25 = *piVar1 - 1;
    uVar27 = *piVar1 + 1;
    if (-1 < (int)uVar25) {
      lVar26 = (longlong)(int)uVar25 * 0x78;
      do {
        uVar21 = 0;
        if ((int)uVar25 < *piVar1) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_1->AllocatorInstance).SecondaryData;
        FVar24 = (ForElementType<ChaosInterface::FSweepHit>)param_1;
        if (FVar4 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
          FVar24 = FVar4;
        }
        if (*(float *)((uchar *)((longlong)FVar24 + 0x70) + lVar26) <=
            *(float *)&param_2->field_0x70 &&
            *(float *)&param_2->field_0x70 !=
            *(float *)((uchar *)((longlong)FVar24 + 0x70) + lVar26)) break;
        uVar27 = uVar27 - 1;
        lVar26 = lVar26 + -0x78;
        uVar25 = uVar25 - 1;
      } while (-1 < (int)uVar25);
    }
    iVar23 = *piVar1;
    if (iVar23 < (int)uVar27) {
      iVar22 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                         (0x78,8,uVar27 - iVar23,&param_1->AllocatorInstance,piVar1,
                          &param_1->ArrayMax);
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar24 = (ForElementType<ChaosInterface::FSweepHit>)param_1;
      if (FVar4 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
        FVar24 = FVar4;
      }
      DefaultConstructItems<ChaosInterface::FSweepHit,int>
                ((void *)((longlong)iVar22 * 0x78 + (longlong)FVar24),uVar27 - iVar23);
    }
    else {
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      if ((int)uVar27 < iVar23) {
        uVar25 = iVar23 - uVar27;
        if (((int)(uVar25 | uVar27) < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar25 != 0) {
          FVar4 = (param_1->AllocatorInstance).SecondaryData;
          FVar24 = (ForElementType<ChaosInterface::FSweepHit>)param_1;
          if (FVar4 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
            FVar24 = FVar4;
          }
          _Dst = (void *)((longlong)(int)uVar27 * 0x78 + (longlong)FVar24);
          iVar23 = (*piVar1 - uVar25) - uVar27;
          if (iVar23 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar25 * 0x78 + (longlong)_Dst),
                    (longlong)iVar23 * 0x78);
          }
          *piVar1 = *piVar1 - uVar25;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<ChaosInterface::FSweepHit>_>
                    (0x78,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    uVar27 = uVar27 - 1;
    uVar6 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)&param_2->field_0x8;
    uVar8 = *(undefined8 *)&param_2->field_0x10;
    uVar9 = *(undefined8 *)&param_2->field_0x18;
    uVar10 = *(undefined8 *)&param_2->field_0x20;
    uVar11 = *(undefined8 *)&param_2->field_0x28;
    uVar25 = 0;
    if ((int)uVar27 < *piVar1) {
      uVar25 = ~uVar27 >> 0x1f;
    }
    uVar3 = *(undefined8 *)&param_2->field_0x70;
    uVar12 = *(undefined8 *)&param_2->field_0x30;
    uVar13 = *(undefined8 *)&param_2->field_0x38;
    uVar14 = *(undefined8 *)&param_2->field_0x40;
    uVar15 = *(undefined8 *)&param_2->field_0x48;
    uVar16 = *(undefined8 *)&param_2->field_0x50;
    uVar17 = *(undefined8 *)&param_2->field_0x58;
    uVar18 = *(undefined8 *)&param_2->field_0x60;
    uVar19 = *(undefined8 *)&param_2->field_0x68;
    if ((uVar25 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
      param_1 = (TArray<ChaosInterface::FSweepHit,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    lVar26 = (longlong)(int)uVar27 * 0x78;
    *(undefined8 *)(lVar26 + (longlong)param_1) = uVar6;
    ((undefined8 *)(lVar26 + (longlong)param_1))[1] = uVar7;
    puVar2 = (undefined8 *)(lVar26 + 0x10 + (longlong)param_1);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(lVar26 + 0x20 + (longlong)param_1);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar26 + 0x30 + (longlong)param_1);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar26 + 0x40 + (longlong)param_1);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2 = (undefined8 *)(lVar26 + 0x50 + (longlong)param_1);
    *puVar2 = uVar16;
    puVar2[1] = uVar17;
    puVar2 = (undefined8 *)(lVar26 + 0x60 + (longlong)param_1);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    *(undefined8 *)(lVar26 + 0x70 + (longlong)param_1) = uVar3;
  }
  return;
}

// GetAllShapesInternalImp_AssumedLocked<TSizedDefaultAllocator<32>_> @ 14413ab10

int __cdecl
GetAllShapesInternalImp_AssumedLocked<TSizedDefaultAllocator<32>_>
          (FSingleParticlePhysicsProxy **param_1,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_28;
  FSingleParticlePhysicsProxy *pFStack_20;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return 0;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar3 = (this->Particle).Ptr;
  uVar2 = (pTVar3->MShapesArray).ArrayNum;
  if (-1 < (int)uVar2) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar11 = 0;
    if (0 < (int)uVar2) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (pTVar3->MShapesArray).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
        }
        FVar4 = (pTVar3->MShapesArray).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar3->MShapesArray;
        if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar10 = FVar4;
        }
        local_28 = *(undefined8 *)((longlong)FVar10 + lVar12 * 8);
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFStack_20 = *param_1;
        if ((pFVar5 <= (FScriptContainerElement *)&local_28) &&
           ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)*piVar1 * 0x10)) {
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,piVar1);
        }
        uVar11 = uVar11 + 1;
        param_2->ArrayNum = iVar9 + 1;
        lVar12 = lVar12 + 1;
        pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar5 = local_28;
        *(FSingleParticlePhysicsProxy **)(pFVar5 + 8) = pFStack_20;
      } while (lVar12 < (int)uVar2);
    }
    return param_2->ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetAllShapesInternalImp_AssumedLocked<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 14413ad20

int __cdecl
GetAllShapesInternalImp_AssumedLocked<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (FSingleParticlePhysicsProxy **param_1,
          TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  FSingleParticlePhysicsProxy *this;
  TGeometryParticle<double,3> *pTVar4;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar5;
  ForElementType<FPhysicsShapeReference_Chaos> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FPhysicsShapeReference_Chaos> FVar11;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 local_28;
  FSingleParticlePhysicsProxy *pFStack_20;
  
  this = *param_1;
  if (this == (FSingleParticlePhysicsProxy *)0x0) {
    return 0;
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this);
  pTVar4 = (this->Particle).Ptr;
  uVar3 = (pTVar4->MShapesArray).ArrayNum;
  if (-1 < (int)uVar3) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                (0x10,8,uVar3,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar13 = 0;
    if (0 < (int)uVar3) {
      lVar14 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < (pTVar4->MShapesArray).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        FVar5 = (pTVar4->MShapesArray).AllocatorInstance.SecondaryData;
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                  )&pTVar4->MShapesArray;
        if (FVar5 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                      )0x0) {
          FVar12 = FVar5;
        }
        local_28 = *(undefined8 *)((longlong)FVar12 + lVar14 * 8);
        pFStack_20 = *param_1;
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
        if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar11 = FVar6;
        }
        if ((ulonglong)FVar11 <= &local_28) {
          FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
          if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
            FVar11 = FVar6;
          }
          if ((&local_28 < (undefined8 *)((longlong)*piVar1 * 0x10 + (longlong)FVar11)) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar10 = (*pcVar7)();
            return iVar10;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                             (0x810,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar10 + 1;
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)param_2;
        if (FVar6 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar11 = FVar6;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        puVar2 = (undefined8 *)((longlong)FVar11 + (longlong)iVar10 * 0x10);
        *puVar2 = local_28;
        puVar2[1] = pFStack_20;
      } while (lVar14 < (int)uVar3);
    }
    return param_2->ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// GetFilterResultHelper<Chaos::FPerShapeData,Chaos::TGeometryParticle<double,3>_> @ 14413b330

ECollisionQueryHitType __cdecl
GetFilterResultHelper<Chaos::FPerShapeData,Chaos::TGeometryParticle<double,3>_>
          (FPerShapeData *param_1,TGeometryParticle<double,3> *param_2,
          TMap<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ECollisionQueryHitType EVar4;
  FScriptContainerElement FVar5;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  
  pTVar6 = TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find(param_3,param_2);
  if (pTVar6 == (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
LAB_14413b390:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<622209545644540210>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                       ,0x132,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FVar5 = (FScriptContainerElement)0x0;
  }
  else {
    iVar1 = pTVar6->ArrayNum;
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar6->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar7 == pFVar8) goto LAB_14413b390;
      if (*(FPerShapeData **)pFVar7 == param_1) break;
      pFVar7 = pFVar7 + 0x10;
    }
    FVar5 = pFVar7[8];
  }
  return (ECollisionQueryHitType)FVar5;
}

// GetInnerGeometryChecked<Chaos::TBox<double,3>_> @ 14413b3e0

TBox<double,3> * __cdecl GetInnerGeometryChecked<Chaos::TBox<double,3>_>(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar4;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar5;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar6;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  TBox<double,3> *pTVar9;
  <lambda_1> local_res10 [24];
  
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    break;
  case '\x01':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TBox<double,3> *)(*pcVar1)();
      return pTVar9;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TBox<double,3> *)(*pcVar1)();
      return pTVar9;
    }
    break;
  case '\x03':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    break;
  case '\x04':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    param_1 = Chaos::Utilities::
              CastHelper<_GetInnerGeometryChecked<Chaos::TBox<double,3>_>_::__l2::<lambda_1>_>
                        ((pTVar8->MObject).Reference,local_res10);
    break;
  case '\b':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    break;
  case '@':
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar4->MObject).Reference);
    break;
  case 'A':
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar5->MObject).Reference);
    break;
  case 'C':
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar6->MObject).Reference);
    break;
  case 'H':
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar7->MObject).Reference);
    break;
  case 0x80:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    break;
  case 0x81:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    break;
  case 0x83:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    break;
  case 0x88:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
  }
  if (((char)((FConvex *)param_1)->_padding_ != '\x01') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("T_DERIVED::StaticType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0xbb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TBox<double,3> *)(*pcVar1)();
    return pTVar9;
  }
  return (TBox<double,3> *)(FConvex *)param_1;
}

// GetInnerGeometryChecked<Chaos::TSphere<double,3>_> @ 14413b670

TSphere<double,3> * __cdecl
GetInnerGeometryChecked<Chaos::TSphere<double,3>_>(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar4;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar5;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar6;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  TSphere<double,3> *pTVar9;
  <lambda_1> local_res10 [24];
  
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    break;
  case '\x01':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSphere<double,3> *)(*pcVar1)();
      return pTVar9;
    }
    if (param_1->Type == '\0') {
      return (TSphere<double,3> *)param_1;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSphere<double,3> *)(*pcVar1)();
      return pTVar9;
    }
    break;
  case '\x03':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    break;
  case '\x04':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    param_1 = Chaos::Utilities::
              CastHelper<_GetInnerGeometryChecked<Chaos::TSphere<double,3>_>_::__l2::<lambda_1>_>
                        ((pTVar8->MObject).Reference,local_res10);
    break;
  case '\b':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    break;
  case '@':
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar4->MObject).Reference);
    break;
  case 'A':
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar5->MObject).Reference);
    break;
  case 'C':
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar6->MObject).Reference);
    break;
  case 'H':
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar7->MObject).Reference);
    break;
  case 0x80:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    break;
  case 0x81:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    break;
  case 0x83:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    break;
  case 0x88:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
  }
  if (((char)((FConvex *)param_1)->_padding_ != '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("T_DERIVED::StaticType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0xbb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TSphere<double,3> *)(*pcVar1)();
    return pTVar9;
  }
  return (TSphere<double,3> *)(FConvex *)param_1;
}

// GetInnerGeometryChecked<Chaos::FCapsule> @ 14413b900

FCapsule * __cdecl GetInnerGeometryChecked<Chaos::FCapsule>(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar4;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar5;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar6;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  FCapsule *pFVar9;
  <lambda_1> local_res10 [24];
  
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    break;
  case '\x01':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FCapsule *)(*pcVar1)();
      return pFVar9;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FCapsule *)(*pcVar1)();
      return pFVar9;
    }
    break;
  case '\x03':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    break;
  case '\x04':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    param_1 = Chaos::Utilities::
              CastHelper<_GetInnerGeometryChecked<Chaos::FCapsule>_::__l2::<lambda_1>_>
                        ((pTVar8->MObject).Reference,local_res10);
    break;
  case '\b':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    break;
  case '@':
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar4->MObject).Reference);
    break;
  case 'A':
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar5->MObject).Reference);
    break;
  case 'C':
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar6->MObject).Reference);
    break;
  case 'H':
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar7->MObject).Reference);
    break;
  case 0x80:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    break;
  case 0x81:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    break;
  case 0x83:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    break;
  case 0x88:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
  }
  if (((char)((FConvex *)param_1)->_padding_ != '\x03') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("T_DERIVED::StaticType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0xbb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FCapsule *)(*pcVar1)();
    return pFVar9;
  }
  return (FCapsule *)(FConvex *)param_1;
}

// GetInnerGeometryChecked<Chaos::FConvex> @ 14413bb90

FConvex * __cdecl GetInnerGeometryChecked<Chaos::FConvex>(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar4;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar5;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar6;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  FConvex *pFVar9;
  <lambda_1> local_res10 [24];
  
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    break;
  case '\x01':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FConvex *)(*pcVar1)();
      return pFVar9;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FConvex *)(*pcVar1)();
      return pFVar9;
    }
    break;
  case '\x03':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    break;
  case '\x04':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    param_1 = Chaos::Utilities::
              CastHelper<_GetInnerGeometryChecked<Chaos::FConvex>_::__l2::<lambda_1>_>
                        ((pTVar8->MObject).Reference,local_res10);
    break;
  case '\b':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    break;
  case '@':
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar4->MObject).Reference);
    break;
  case 'A':
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar5->MObject).Reference);
    break;
  case 'C':
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar6->MObject).Reference);
    break;
  case 'H':
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar7->MObject).Reference);
    break;
  case 0x80:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    break;
  case 0x81:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    break;
  case 0x83:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    break;
  case 0x88:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
  }
  if (((char)((FConvex *)param_1)->_padding_ != '\b') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("T_DERIVED::StaticType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0xbb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FConvex *)(*pcVar1)();
    return pFVar9;
  }
  return (FConvex *)param_1;
}

// GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject> @ 14413be20

FTriangleMeshImplicitObject * __cdecl
GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject>(FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar4;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar5;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar6;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  FTriangleMeshImplicitObject *pFVar9;
  <lambda_1> local_res10 [24];
  
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    break;
  case '\x01':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FTriangleMeshImplicitObject *)(*pcVar1)();
      return pFVar9;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FTriangleMeshImplicitObject *)(*pcVar1)();
      return pFVar9;
    }
    break;
  case '\x03':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    break;
  case '\x04':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    param_1 = Chaos::Utilities::
              CastHelper<_GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject>_::__l2::<lambda_1>_>
                        ((pTVar8->MObject).Reference,local_res10);
    break;
  case '\b':
    param_1 = (FImplicitObject *)Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    break;
  case '@':
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar4->MObject).Reference);
    break;
  case 'A':
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar5->MObject).Reference);
    break;
  case 'C':
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar6->MObject).Reference);
    break;
  case 'H':
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar7->MObject).Reference);
    break;
  case 0x80:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    break;
  case 0x81:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    break;
  case 0x83:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    break;
  case 0x88:
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
  }
  if (((char)((FTriangleMeshImplicitObject *)param_1)->_padding_ != '\v') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("T_DERIVED::StaticType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0xbb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FTriangleMeshImplicitObject *)(*pcVar1)();
    return pFVar9;
  }
  return (FTriangleMeshImplicitObject *)param_1;
}

// GetTypeName<UPhysicsSettingsCore> @ 14413c0b0

FString * __cdecl GetTypeName<UPhysicsSettingsCore>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPhysicsSettingsCore::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_> @ 14413c630

void __cdecl
AlgoImpl::
HeapSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_>
          (FPTRaycastHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_> param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  FPTRaycastHit *pFVar31;
  
  if (param_2 < 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar25 = (param_2 + -2) / 2;
  iVar26 = iVar25 * 2 + 1;
  iVar29 = iVar26;
  iVar30 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_14413c7d2:
      if (iVar30 == 0) {
        iVar26 = param_2 + -1;
        lVar28 = (longlong)iVar26;
        if (0 < iVar26) {
          pFVar31 = param_1 + lVar28;
          do {
            lVar2 = pFVar31->_padding_;
            iVar29 = 0;
            lVar3 = param_1->_padding_;
            lVar4 = param_1->_padding_;
            lVar5 = param_1->_padding_;
            lVar6 = param_1->_padding_;
            lVar7 = param_1->_padding_;
            lVar8 = param_1->_padding_;
            lVar9 = param_1->_padding_;
            lVar10 = param_1->_padding_;
            lVar11 = param_1->_padding_;
            lVar12 = param_1->_padding_;
            lVar13 = param_1->_padding_;
            lVar14 = param_1->_padding_;
            lVar15 = param_1->_padding_;
            lVar16 = param_1->_padding_;
            lVar19 = param_1->_padding_;
            fVar22 = param_1->U;
            fVar23 = param_1->V;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            fVar20 = pFVar31->U;
            fVar21 = pFVar31->V;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->U = fVar20;
            param_1->V = fVar21;
            pFVar31->_padding_ = lVar3;
            pFVar31->_padding_ = lVar4;
            pFVar31->_padding_ = lVar5;
            pFVar31->_padding_ = lVar6;
            pFVar31->_padding_ = lVar7;
            pFVar31->_padding_ = lVar8;
            pFVar31->_padding_ = lVar9;
            pFVar31->_padding_ = lVar10;
            pFVar31->_padding_ = lVar11;
            pFVar31->_padding_ = lVar12;
            pFVar31->_padding_ = lVar13;
            pFVar31->_padding_ = lVar14;
            pFVar31->_padding_ = lVar15;
            pFVar31->_padding_ = lVar16;
            pFVar31->_padding_ = lVar19;
            pFVar31->U = fVar22;
            pFVar31->V = fVar23;
            if (1 < iVar26) {
              do {
                iVar30 = iVar29 * 2;
                iVar25 = iVar30 + 1;
                if (iVar30 + 2 < iVar26) {
                  if (*(float *)&param_1[(longlong)iVar30 + 2]._padding_ <=
                      *(float *)&param_1[iVar25]._padding_ &&
                      *(float *)&param_1[iVar25]._padding_ !=
                      *(float *)&param_1[(longlong)iVar30 + 2]._padding_) {
                    iVar25 = iVar30;
                  }
                  iVar25 = iVar25 + 1;
                }
                if (*(float *)&param_1[iVar25]._padding_ < *(float *)&param_1[iVar29]._padding_ ||
                    *(float *)&param_1[iVar25]._padding_ == *(float *)&param_1[iVar29]._padding_)
                break;
                lVar2 = param_1[iVar25]._padding_;
                lVar3 = param_1[iVar29]._padding_;
                lVar4 = param_1[iVar29]._padding_;
                lVar5 = param_1[iVar29]._padding_;
                lVar6 = (&param_1[iVar29]._padding_)[1];
                lVar7 = param_1[iVar29]._padding_;
                lVar8 = (&param_1[iVar29]._padding_)[1];
                lVar9 = param_1[iVar29]._padding_;
                lVar10 = (&param_1[iVar29]._padding_)[1];
                lVar11 = param_1[iVar29]._padding_;
                lVar12 = (&param_1[iVar29]._padding_)[1];
                lVar13 = param_1[iVar29]._padding_;
                lVar14 = (&param_1[iVar29]._padding_)[1];
                lVar15 = param_1[iVar29]._padding_;
                lVar16 = (&param_1[iVar29]._padding_)[1];
                lVar19 = param_1[iVar29]._padding_;
                uVar17 = (&param_1[iVar29]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                param_1[iVar29]._padding_ = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                uVar18 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = uVar18;
                param_1[iVar25]._padding_ = lVar3;
                param_1[iVar25]._padding_ = lVar4;
                param_1[iVar25]._padding_ = lVar5;
                (&param_1[iVar25]._padding_)[1] = lVar6;
                param_1[iVar25]._padding_ = lVar7;
                (&param_1[iVar25]._padding_)[1] = lVar8;
                param_1[iVar25]._padding_ = lVar9;
                (&param_1[iVar25]._padding_)[1] = lVar10;
                param_1[iVar25]._padding_ = lVar11;
                (&param_1[iVar25]._padding_)[1] = lVar12;
                param_1[iVar25]._padding_ = lVar13;
                (&param_1[iVar25]._padding_)[1] = lVar14;
                param_1[iVar25]._padding_ = lVar15;
                (&param_1[iVar25]._padding_)[1] = lVar16;
                param_1[iVar25]._padding_ = lVar19;
                (&param_1[iVar25]._padding_)[1] = uVar17;
                iVar29 = iVar25;
              } while (iVar25 * 2 + 1 < iVar26);
            }
            iVar26 = iVar26 + -1;
            lVar28 = lVar28 + -1;
            pFVar31 = pFVar31 + -1;
          } while (0 < lVar28);
        }
        return;
      }
      iVar25 = iVar30 + -1;
      iVar26 = iVar29 + -2;
      iVar29 = iVar26;
      iVar30 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar27 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      if (*(float *)&param_1[(longlong)iVar26 + 2]._padding_ <= *(float *)&param_1[iVar27]._padding_
          && *(float *)&param_1[iVar27]._padding_ !=
             *(float *)&param_1[(longlong)iVar26 + 2]._padding_) {
        iVar27 = iVar26;
      }
      iVar27 = iVar27 + 1;
    }
    if (*(float *)&param_1[iVar27]._padding_ < *(float *)&param_1[iVar25]._padding_ ||
        *(float *)&param_1[iVar27]._padding_ == *(float *)&param_1[iVar25]._padding_)
    goto LAB_14413c7d2;
    lVar28 = param_1[iVar27]._padding_;
    lVar2 = param_1[iVar25]._padding_;
    lVar3 = param_1[iVar25]._padding_;
    lVar4 = param_1[iVar25]._padding_;
    lVar5 = (&param_1[iVar25]._padding_)[1];
    lVar6 = param_1[iVar25]._padding_;
    lVar7 = (&param_1[iVar25]._padding_)[1];
    lVar8 = param_1[iVar25]._padding_;
    lVar9 = (&param_1[iVar25]._padding_)[1];
    lVar10 = param_1[iVar25]._padding_;
    lVar11 = (&param_1[iVar25]._padding_)[1];
    lVar12 = param_1[iVar25]._padding_;
    lVar13 = (&param_1[iVar25]._padding_)[1];
    lVar14 = param_1[iVar25]._padding_;
    lVar15 = (&param_1[iVar25]._padding_)[1];
    lVar16 = param_1[iVar25]._padding_;
    uVar17 = (&param_1[iVar25]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    param_1[iVar25]._padding_ = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    uVar18 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = uVar18;
    iVar26 = iVar27 * 2 + 1;
    param_1[iVar27]._padding_ = lVar2;
    param_1[iVar27]._padding_ = lVar3;
    param_1[iVar27]._padding_ = lVar4;
    (&param_1[iVar27]._padding_)[1] = lVar5;
    param_1[iVar27]._padding_ = lVar6;
    (&param_1[iVar27]._padding_)[1] = lVar7;
    param_1[iVar27]._padding_ = lVar8;
    (&param_1[iVar27]._padding_)[1] = lVar9;
    param_1[iVar27]._padding_ = lVar10;
    (&param_1[iVar27]._padding_)[1] = lVar11;
    param_1[iVar27]._padding_ = lVar12;
    (&param_1[iVar27]._padding_)[1] = lVar13;
    param_1[iVar27]._padding_ = lVar14;
    (&param_1[iVar27]._padding_)[1] = lVar15;
    param_1[iVar27]._padding_ = lVar16;
    (&param_1[iVar27]._padding_)[1] = uVar17;
    iVar25 = iVar27;
  } while( true );
}

// HeapSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_> @ 14413c9e0

void __cdecl
AlgoImpl::
HeapSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_>
          (FPTSweepHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_> param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  FPTSweepHit *pFVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar19 = (param_2 + -2) / 2;
  iVar20 = iVar19 * 2 + 1;
  iVar24 = iVar20;
  iVar25 = iVar19;
  do {
    while (param_2 <= iVar20) {
LAB_14413cb99:
      if (iVar25 == 0) {
        iVar20 = param_2 + -1;
        lVar21 = (longlong)iVar20;
        if (0 < iVar20) {
          pFVar22 = param_1 + lVar21;
          do {
            uVar3 = *(undefined8 *)&pFVar22->field_0x8;
            uVar1 = *(undefined8 *)&param_1->field_0x70;
            uVar4 = *(undefined8 *)param_1;
            uVar5 = *(undefined8 *)&param_1->field_0x8;
            uVar6 = *(undefined8 *)&param_1->field_0x10;
            uVar7 = *(undefined8 *)&param_1->field_0x18;
            uVar8 = *(undefined8 *)&param_1->field_0x20;
            uVar9 = *(undefined8 *)&param_1->field_0x28;
            uVar10 = *(undefined8 *)&param_1->field_0x30;
            uVar11 = *(undefined8 *)&param_1->field_0x38;
            uVar12 = *(undefined8 *)&param_1->field_0x40;
            uVar13 = *(undefined8 *)&param_1->field_0x48;
            uVar14 = *(undefined8 *)&param_1->field_0x50;
            uVar15 = *(undefined8 *)&param_1->field_0x58;
            uVar16 = *(undefined8 *)&param_1->field_0x60;
            uVar17 = *(undefined8 *)&param_1->field_0x68;
            *(undefined8 *)param_1 = *(undefined8 *)pFVar22;
            *(undefined8 *)&param_1->field_0x8 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x18;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pFVar22->field_0x10;
            *(undefined8 *)&param_1->field_0x18 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x28;
            *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pFVar22->field_0x20;
            *(undefined8 *)&param_1->field_0x28 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x38;
            *(undefined8 *)&param_1->field_0x30 = *(undefined8 *)&pFVar22->field_0x30;
            *(undefined8 *)&param_1->field_0x38 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x48;
            *(undefined8 *)&param_1->field_0x40 = *(undefined8 *)&pFVar22->field_0x40;
            *(undefined8 *)&param_1->field_0x48 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x58;
            *(undefined8 *)&param_1->field_0x50 = *(undefined8 *)&pFVar22->field_0x50;
            *(undefined8 *)&param_1->field_0x58 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x68;
            *(undefined8 *)&param_1->field_0x60 = *(undefined8 *)&pFVar22->field_0x60;
            *(undefined8 *)&param_1->field_0x68 = uVar3;
            *(undefined8 *)&param_1->field_0x70 = *(undefined8 *)&pFVar22->field_0x70;
            *(undefined8 *)pFVar22 = uVar4;
            *(undefined8 *)&pFVar22->field_0x8 = uVar5;
            *(undefined8 *)&pFVar22->field_0x10 = uVar6;
            *(undefined8 *)&pFVar22->field_0x18 = uVar7;
            *(undefined8 *)&pFVar22->field_0x20 = uVar8;
            *(undefined8 *)&pFVar22->field_0x28 = uVar9;
            *(undefined8 *)&pFVar22->field_0x30 = uVar10;
            *(undefined8 *)&pFVar22->field_0x38 = uVar11;
            *(undefined8 *)&pFVar22->field_0x40 = uVar12;
            *(undefined8 *)&pFVar22->field_0x48 = uVar13;
            *(undefined8 *)&pFVar22->field_0x50 = uVar14;
            *(undefined8 *)&pFVar22->field_0x58 = uVar15;
            *(undefined8 *)&pFVar22->field_0x60 = uVar16;
            *(undefined8 *)&pFVar22->field_0x68 = uVar17;
            *(undefined8 *)&pFVar22->field_0x70 = uVar1;
            iVar24 = 0;
            if (1 < iVar20) {
              do {
                iVar25 = iVar24 * 2;
                iVar19 = iVar25 + 1;
                if (iVar25 + 2 < iVar20) {
                  if (*(float *)&param_1[(longlong)iVar25 + 2].field_0x70 <=
                      *(float *)&param_1[iVar19].field_0x70 &&
                      *(float *)&param_1[iVar19].field_0x70 !=
                      *(float *)&param_1[(longlong)iVar25 + 2].field_0x70) {
                    iVar19 = iVar25;
                  }
                  iVar19 = iVar19 + 1;
                }
                if (*(float *)&param_1[iVar19].field_0x70 < *(float *)&param_1[iVar24].field_0x70 ||
                    *(float *)&param_1[iVar19].field_0x70 == *(float *)&param_1[iVar24].field_0x70)
                break;
                uVar3 = *(undefined8 *)&param_1[iVar19].field_0x8;
                uVar1 = *(undefined8 *)&param_1[iVar24].field_0x70;
                uVar4 = *(undefined8 *)(param_1 + iVar24);
                uVar5 = *(undefined8 *)&param_1[iVar24].field_0x8;
                uVar6 = *(undefined8 *)&param_1[iVar24].field_0x10;
                uVar7 = *(undefined8 *)(&param_1[iVar24].field_0x10 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar24].field_0x20;
                uVar9 = *(undefined8 *)(&param_1[iVar24].field_0x20 + 8);
                uVar10 = *(undefined8 *)&param_1[iVar24].field_0x30;
                uVar11 = *(undefined8 *)(&param_1[iVar24].field_0x30 + 8);
                uVar12 = *(undefined8 *)&param_1[iVar24].field_0x40;
                uVar13 = *(undefined8 *)(&param_1[iVar24].field_0x40 + 8);
                uVar14 = *(undefined8 *)&param_1[iVar24].field_0x50;
                uVar15 = *(undefined8 *)(&param_1[iVar24].field_0x50 + 8);
                uVar16 = *(undefined8 *)&param_1[iVar24].field_0x60;
                uVar17 = *(undefined8 *)(&param_1[iVar24].field_0x60 + 8);
                *(undefined8 *)(param_1 + iVar24) = *(undefined8 *)(param_1 + iVar19);
                *(undefined8 *)&param_1[iVar24].field_0x8 = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x10 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x10 =
                     *(undefined8 *)&param_1[iVar19].field_0x10;
                *(undefined8 *)(&param_1[iVar24].field_0x10 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x20 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x20 =
                     *(undefined8 *)&param_1[iVar19].field_0x20;
                *(undefined8 *)(&param_1[iVar24].field_0x20 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x30 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x30 =
                     *(undefined8 *)&param_1[iVar19].field_0x30;
                *(undefined8 *)(&param_1[iVar24].field_0x30 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x40 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x40 =
                     *(undefined8 *)&param_1[iVar19].field_0x40;
                *(undefined8 *)(&param_1[iVar24].field_0x40 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x50 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x50 =
                     *(undefined8 *)&param_1[iVar19].field_0x50;
                *(undefined8 *)(&param_1[iVar24].field_0x50 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x60 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x60 =
                     *(undefined8 *)&param_1[iVar19].field_0x60;
                *(undefined8 *)(&param_1[iVar24].field_0x60 + 8) = uVar3;
                *(undefined8 *)&param_1[iVar24].field_0x70 =
                     *(undefined8 *)&param_1[iVar19].field_0x70;
                *(undefined8 *)(param_1 + iVar19) = uVar4;
                *(undefined8 *)&param_1[iVar19].field_0x8 = uVar5;
                *(undefined8 *)&param_1[iVar19].field_0x10 = uVar6;
                *(undefined8 *)(&param_1[iVar19].field_0x10 + 8) = uVar7;
                *(undefined8 *)&param_1[iVar19].field_0x20 = uVar8;
                *(undefined8 *)(&param_1[iVar19].field_0x20 + 8) = uVar9;
                *(undefined8 *)&param_1[iVar19].field_0x30 = uVar10;
                *(undefined8 *)(&param_1[iVar19].field_0x30 + 8) = uVar11;
                *(undefined8 *)&param_1[iVar19].field_0x40 = uVar12;
                *(undefined8 *)(&param_1[iVar19].field_0x40 + 8) = uVar13;
                *(undefined8 *)&param_1[iVar19].field_0x50 = uVar14;
                *(undefined8 *)(&param_1[iVar19].field_0x50 + 8) = uVar15;
                *(undefined8 *)&param_1[iVar19].field_0x60 = uVar16;
                *(undefined8 *)(&param_1[iVar19].field_0x60 + 8) = uVar17;
                *(undefined8 *)&param_1[iVar19].field_0x70 = uVar1;
                iVar24 = iVar19;
              } while (iVar19 * 2 + 1 < iVar20);
            }
            iVar20 = iVar20 + -1;
            lVar21 = lVar21 + -1;
            pFVar22 = pFVar22 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar19 = iVar25 + -1;
      iVar20 = iVar24 + -2;
      iVar24 = iVar20;
      iVar25 = iVar19;
    }
    iVar20 = iVar19 * 2;
    iVar23 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      if (*(float *)&param_1[(longlong)iVar20 + 2].field_0x70 <=
          *(float *)&param_1[iVar23].field_0x70 &&
          *(float *)&param_1[iVar23].field_0x70 !=
          *(float *)&param_1[(longlong)iVar20 + 2].field_0x70) {
        iVar23 = iVar20;
      }
      iVar23 = iVar23 + 1;
    }
    if (*(float *)&param_1[iVar23].field_0x70 < *(float *)&param_1[iVar19].field_0x70 ||
        *(float *)&param_1[iVar23].field_0x70 == *(float *)&param_1[iVar19].field_0x70)
    goto LAB_14413cb99;
    uVar3 = *(undefined8 *)&param_1[iVar23].field_0x8;
    iVar20 = iVar23 * 2 + 1;
    uVar1 = *(undefined8 *)&param_1[iVar19].field_0x70;
    uVar4 = *(undefined8 *)(param_1 + iVar19);
    uVar5 = *(undefined8 *)&param_1[iVar19].field_0x8;
    uVar6 = *(undefined8 *)&param_1[iVar19].field_0x10;
    uVar7 = *(undefined8 *)(&param_1[iVar19].field_0x10 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar19].field_0x20;
    uVar9 = *(undefined8 *)(&param_1[iVar19].field_0x20 + 8);
    uVar10 = *(undefined8 *)&param_1[iVar19].field_0x30;
    uVar11 = *(undefined8 *)(&param_1[iVar19].field_0x30 + 8);
    uVar12 = *(undefined8 *)&param_1[iVar19].field_0x40;
    uVar13 = *(undefined8 *)(&param_1[iVar19].field_0x40 + 8);
    uVar14 = *(undefined8 *)&param_1[iVar19].field_0x50;
    uVar15 = *(undefined8 *)(&param_1[iVar19].field_0x50 + 8);
    uVar16 = *(undefined8 *)&param_1[iVar19].field_0x60;
    uVar17 = *(undefined8 *)(&param_1[iVar19].field_0x60 + 8);
    *(undefined8 *)(param_1 + iVar19) = *(undefined8 *)(param_1 + iVar23);
    *(undefined8 *)&param_1[iVar19].field_0x8 = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x10 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x10 = *(undefined8 *)&param_1[iVar23].field_0x10;
    *(undefined8 *)(&param_1[iVar19].field_0x10 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x20 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x20 = *(undefined8 *)&param_1[iVar23].field_0x20;
    *(undefined8 *)(&param_1[iVar19].field_0x20 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x30 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x30 = *(undefined8 *)&param_1[iVar23].field_0x30;
    *(undefined8 *)(&param_1[iVar19].field_0x30 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x40 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x40 = *(undefined8 *)&param_1[iVar23].field_0x40;
    *(undefined8 *)(&param_1[iVar19].field_0x40 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x50 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x50 = *(undefined8 *)&param_1[iVar23].field_0x50;
    *(undefined8 *)(&param_1[iVar19].field_0x50 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x60 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x60 = *(undefined8 *)&param_1[iVar23].field_0x60;
    *(undefined8 *)(&param_1[iVar19].field_0x60 + 8) = uVar3;
    *(undefined8 *)&param_1[iVar19].field_0x70 = *(undefined8 *)&param_1[iVar23].field_0x70;
    *(undefined8 *)(param_1 + iVar23) = uVar4;
    *(undefined8 *)&param_1[iVar23].field_0x8 = uVar5;
    *(undefined8 *)&param_1[iVar23].field_0x10 = uVar6;
    *(undefined8 *)(&param_1[iVar23].field_0x10 + 8) = uVar7;
    *(undefined8 *)&param_1[iVar23].field_0x20 = uVar8;
    *(undefined8 *)(&param_1[iVar23].field_0x20 + 8) = uVar9;
    *(undefined8 *)&param_1[iVar23].field_0x30 = uVar10;
    *(undefined8 *)(&param_1[iVar23].field_0x30 + 8) = uVar11;
    *(undefined8 *)&param_1[iVar23].field_0x40 = uVar12;
    *(undefined8 *)(&param_1[iVar23].field_0x40 + 8) = uVar13;
    *(undefined8 *)&param_1[iVar23].field_0x50 = uVar14;
    *(undefined8 *)(&param_1[iVar23].field_0x50 + 8) = uVar15;
    *(undefined8 *)&param_1[iVar23].field_0x60 = uVar16;
    *(undefined8 *)(&param_1[iVar23].field_0x60 + 8) = uVar17;
    *(undefined8 *)&param_1[iVar23].field_0x70 = uVar1;
    iVar19 = iVar23;
  } while( true );
}

// HeapSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_> @ 14413cda0

void __cdecl
AlgoImpl::
HeapSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_>
          (FRaycastHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_> param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  FRaycastHit *pFVar31;
  
  if (param_2 < 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar25 = (param_2 + -2) / 2;
  iVar26 = iVar25 * 2 + 1;
  iVar29 = iVar26;
  iVar30 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_14413cf42:
      if (iVar30 == 0) {
        iVar26 = param_2 + -1;
        lVar28 = (longlong)iVar26;
        if (0 < iVar26) {
          pFVar31 = param_1 + lVar28;
          do {
            lVar2 = pFVar31->_padding_;
            iVar29 = 0;
            lVar3 = param_1->_padding_;
            lVar4 = param_1->_padding_;
            lVar5 = param_1->_padding_;
            lVar6 = param_1->_padding_;
            lVar7 = param_1->_padding_;
            lVar8 = param_1->_padding_;
            lVar9 = param_1->_padding_;
            lVar10 = param_1->_padding_;
            lVar11 = param_1->_padding_;
            lVar12 = param_1->_padding_;
            lVar13 = param_1->_padding_;
            lVar14 = param_1->_padding_;
            lVar15 = param_1->_padding_;
            lVar16 = param_1->_padding_;
            lVar19 = param_1->_padding_;
            fVar22 = param_1->U;
            fVar23 = param_1->V;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            lVar2 = pFVar31->_padding_;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->_padding_ = lVar2;
            fVar20 = pFVar31->U;
            fVar21 = pFVar31->V;
            param_1->_padding_ = pFVar31->_padding_;
            param_1->U = fVar20;
            param_1->V = fVar21;
            pFVar31->_padding_ = lVar3;
            pFVar31->_padding_ = lVar4;
            pFVar31->_padding_ = lVar5;
            pFVar31->_padding_ = lVar6;
            pFVar31->_padding_ = lVar7;
            pFVar31->_padding_ = lVar8;
            pFVar31->_padding_ = lVar9;
            pFVar31->_padding_ = lVar10;
            pFVar31->_padding_ = lVar11;
            pFVar31->_padding_ = lVar12;
            pFVar31->_padding_ = lVar13;
            pFVar31->_padding_ = lVar14;
            pFVar31->_padding_ = lVar15;
            pFVar31->_padding_ = lVar16;
            pFVar31->_padding_ = lVar19;
            pFVar31->U = fVar22;
            pFVar31->V = fVar23;
            if (1 < iVar26) {
              do {
                iVar30 = iVar29 * 2;
                iVar25 = iVar30 + 1;
                if (iVar30 + 2 < iVar26) {
                  if (*(float *)&param_1[(longlong)iVar30 + 2]._padding_ <=
                      *(float *)&param_1[iVar25]._padding_ &&
                      *(float *)&param_1[iVar25]._padding_ !=
                      *(float *)&param_1[(longlong)iVar30 + 2]._padding_) {
                    iVar25 = iVar30;
                  }
                  iVar25 = iVar25 + 1;
                }
                if (*(float *)&param_1[iVar25]._padding_ < *(float *)&param_1[iVar29]._padding_ ||
                    *(float *)&param_1[iVar25]._padding_ == *(float *)&param_1[iVar29]._padding_)
                break;
                lVar2 = param_1[iVar25]._padding_;
                lVar3 = param_1[iVar29]._padding_;
                lVar4 = param_1[iVar29]._padding_;
                lVar5 = param_1[iVar29]._padding_;
                lVar6 = (&param_1[iVar29]._padding_)[1];
                lVar7 = param_1[iVar29]._padding_;
                lVar8 = (&param_1[iVar29]._padding_)[1];
                lVar9 = param_1[iVar29]._padding_;
                lVar10 = (&param_1[iVar29]._padding_)[1];
                lVar11 = param_1[iVar29]._padding_;
                lVar12 = (&param_1[iVar29]._padding_)[1];
                lVar13 = param_1[iVar29]._padding_;
                lVar14 = (&param_1[iVar29]._padding_)[1];
                lVar15 = param_1[iVar29]._padding_;
                lVar16 = (&param_1[iVar29]._padding_)[1];
                lVar19 = param_1[iVar29]._padding_;
                uVar17 = (&param_1[iVar29]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                param_1[iVar29]._padding_ = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                lVar2 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = lVar2;
                uVar18 = (&param_1[iVar25]._padding_)[1];
                param_1[iVar29]._padding_ = param_1[iVar25]._padding_;
                (&param_1[iVar29]._padding_)[1] = uVar18;
                param_1[iVar25]._padding_ = lVar3;
                param_1[iVar25]._padding_ = lVar4;
                param_1[iVar25]._padding_ = lVar5;
                (&param_1[iVar25]._padding_)[1] = lVar6;
                param_1[iVar25]._padding_ = lVar7;
                (&param_1[iVar25]._padding_)[1] = lVar8;
                param_1[iVar25]._padding_ = lVar9;
                (&param_1[iVar25]._padding_)[1] = lVar10;
                param_1[iVar25]._padding_ = lVar11;
                (&param_1[iVar25]._padding_)[1] = lVar12;
                param_1[iVar25]._padding_ = lVar13;
                (&param_1[iVar25]._padding_)[1] = lVar14;
                param_1[iVar25]._padding_ = lVar15;
                (&param_1[iVar25]._padding_)[1] = lVar16;
                param_1[iVar25]._padding_ = lVar19;
                (&param_1[iVar25]._padding_)[1] = uVar17;
                iVar29 = iVar25;
              } while (iVar25 * 2 + 1 < iVar26);
            }
            iVar26 = iVar26 + -1;
            lVar28 = lVar28 + -1;
            pFVar31 = pFVar31 + -1;
          } while (0 < lVar28);
        }
        return;
      }
      iVar25 = iVar30 + -1;
      iVar26 = iVar29 + -2;
      iVar29 = iVar26;
      iVar30 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar27 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      if (*(float *)&param_1[(longlong)iVar26 + 2]._padding_ <= *(float *)&param_1[iVar27]._padding_
          && *(float *)&param_1[iVar27]._padding_ !=
             *(float *)&param_1[(longlong)iVar26 + 2]._padding_) {
        iVar27 = iVar26;
      }
      iVar27 = iVar27 + 1;
    }
    if (*(float *)&param_1[iVar27]._padding_ < *(float *)&param_1[iVar25]._padding_ ||
        *(float *)&param_1[iVar27]._padding_ == *(float *)&param_1[iVar25]._padding_)
    goto LAB_14413cf42;
    lVar28 = param_1[iVar27]._padding_;
    lVar2 = param_1[iVar25]._padding_;
    lVar3 = param_1[iVar25]._padding_;
    lVar4 = param_1[iVar25]._padding_;
    lVar5 = (&param_1[iVar25]._padding_)[1];
    lVar6 = param_1[iVar25]._padding_;
    lVar7 = (&param_1[iVar25]._padding_)[1];
    lVar8 = param_1[iVar25]._padding_;
    lVar9 = (&param_1[iVar25]._padding_)[1];
    lVar10 = param_1[iVar25]._padding_;
    lVar11 = (&param_1[iVar25]._padding_)[1];
    lVar12 = param_1[iVar25]._padding_;
    lVar13 = (&param_1[iVar25]._padding_)[1];
    lVar14 = param_1[iVar25]._padding_;
    lVar15 = (&param_1[iVar25]._padding_)[1];
    lVar16 = param_1[iVar25]._padding_;
    uVar17 = (&param_1[iVar25]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    param_1[iVar25]._padding_ = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    lVar28 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = lVar28;
    uVar18 = (&param_1[iVar27]._padding_)[1];
    param_1[iVar25]._padding_ = param_1[iVar27]._padding_;
    (&param_1[iVar25]._padding_)[1] = uVar18;
    iVar26 = iVar27 * 2 + 1;
    param_1[iVar27]._padding_ = lVar2;
    param_1[iVar27]._padding_ = lVar3;
    param_1[iVar27]._padding_ = lVar4;
    (&param_1[iVar27]._padding_)[1] = lVar5;
    param_1[iVar27]._padding_ = lVar6;
    (&param_1[iVar27]._padding_)[1] = lVar7;
    param_1[iVar27]._padding_ = lVar8;
    (&param_1[iVar27]._padding_)[1] = lVar9;
    param_1[iVar27]._padding_ = lVar10;
    (&param_1[iVar27]._padding_)[1] = lVar11;
    param_1[iVar27]._padding_ = lVar12;
    (&param_1[iVar27]._padding_)[1] = lVar13;
    param_1[iVar27]._padding_ = lVar14;
    (&param_1[iVar27]._padding_)[1] = lVar15;
    param_1[iVar27]._padding_ = lVar16;
    (&param_1[iVar27]._padding_)[1] = uVar17;
    iVar25 = iVar27;
  } while( true );
}

// HeapSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_> @ 14413d150

void __cdecl
AlgoImpl::
HeapSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_>
          (FSweepHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_> param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  FSweepHit *pFVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar19 = (param_2 + -2) / 2;
  iVar20 = iVar19 * 2 + 1;
  iVar24 = iVar20;
  iVar25 = iVar19;
  do {
    while (param_2 <= iVar20) {
LAB_14413d309:
      if (iVar25 == 0) {
        iVar20 = param_2 + -1;
        lVar21 = (longlong)iVar20;
        if (0 < iVar20) {
          pFVar22 = param_1 + lVar21;
          do {
            uVar3 = *(undefined8 *)&pFVar22->field_0x8;
            uVar1 = *(undefined8 *)&param_1->field_0x70;
            uVar4 = *(undefined8 *)param_1;
            uVar5 = *(undefined8 *)&param_1->field_0x8;
            uVar6 = *(undefined8 *)&param_1->field_0x10;
            uVar7 = *(undefined8 *)&param_1->field_0x18;
            uVar8 = *(undefined8 *)&param_1->field_0x20;
            uVar9 = *(undefined8 *)&param_1->field_0x28;
            uVar10 = *(undefined8 *)&param_1->field_0x30;
            uVar11 = *(undefined8 *)&param_1->field_0x38;
            uVar12 = *(undefined8 *)&param_1->field_0x40;
            uVar13 = *(undefined8 *)&param_1->field_0x48;
            uVar14 = *(undefined8 *)&param_1->field_0x50;
            uVar15 = *(undefined8 *)&param_1->field_0x58;
            uVar16 = *(undefined8 *)&param_1->field_0x60;
            uVar17 = *(undefined8 *)&param_1->field_0x68;
            *(undefined8 *)param_1 = *(undefined8 *)pFVar22;
            *(undefined8 *)&param_1->field_0x8 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x18;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pFVar22->field_0x10;
            *(undefined8 *)&param_1->field_0x18 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x28;
            *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pFVar22->field_0x20;
            *(undefined8 *)&param_1->field_0x28 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x38;
            *(undefined8 *)&param_1->field_0x30 = *(undefined8 *)&pFVar22->field_0x30;
            *(undefined8 *)&param_1->field_0x38 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x48;
            *(undefined8 *)&param_1->field_0x40 = *(undefined8 *)&pFVar22->field_0x40;
            *(undefined8 *)&param_1->field_0x48 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x58;
            *(undefined8 *)&param_1->field_0x50 = *(undefined8 *)&pFVar22->field_0x50;
            *(undefined8 *)&param_1->field_0x58 = uVar3;
            uVar3 = *(undefined8 *)&pFVar22->field_0x68;
            *(undefined8 *)&param_1->field_0x60 = *(undefined8 *)&pFVar22->field_0x60;
            *(undefined8 *)&param_1->field_0x68 = uVar3;
            *(undefined8 *)&param_1->field_0x70 = *(undefined8 *)&pFVar22->field_0x70;
            *(undefined8 *)pFVar22 = uVar4;
            *(undefined8 *)&pFVar22->field_0x8 = uVar5;
            *(undefined8 *)&pFVar22->field_0x10 = uVar6;
            *(undefined8 *)&pFVar22->field_0x18 = uVar7;
            *(undefined8 *)&pFVar22->field_0x20 = uVar8;
            *(undefined8 *)&pFVar22->field_0x28 = uVar9;
            *(undefined8 *)&pFVar22->field_0x30 = uVar10;
            *(undefined8 *)&pFVar22->field_0x38 = uVar11;
            *(undefined8 *)&pFVar22->field_0x40 = uVar12;
            *(undefined8 *)&pFVar22->field_0x48 = uVar13;
            *(undefined8 *)&pFVar22->field_0x50 = uVar14;
            *(undefined8 *)&pFVar22->field_0x58 = uVar15;
            *(undefined8 *)&pFVar22->field_0x60 = uVar16;
            *(undefined8 *)&pFVar22->field_0x68 = uVar17;
            *(undefined8 *)&pFVar22->field_0x70 = uVar1;
            iVar24 = 0;
            if (1 < iVar20) {
              do {
                iVar25 = iVar24 * 2;
                iVar19 = iVar25 + 1;
                if (iVar25 + 2 < iVar20) {
                  if (*(float *)&param_1[(longlong)iVar25 + 2].field_0x70 <=
                      *(float *)&param_1[iVar19].field_0x70 &&
                      *(float *)&param_1[iVar19].field_0x70 !=
                      *(float *)&param_1[(longlong)iVar25 + 2].field_0x70) {
                    iVar19 = iVar25;
                  }
                  iVar19 = iVar19 + 1;
                }
                if (*(float *)&param_1[iVar19].field_0x70 < *(float *)&param_1[iVar24].field_0x70 ||
                    *(float *)&param_1[iVar19].field_0x70 == *(float *)&param_1[iVar24].field_0x70)
                break;
                uVar3 = *(undefined8 *)&param_1[iVar19].field_0x8;
                uVar1 = *(undefined8 *)&param_1[iVar24].field_0x70;
                uVar4 = *(undefined8 *)(param_1 + iVar24);
                uVar5 = *(undefined8 *)&param_1[iVar24].field_0x8;
                uVar6 = *(undefined8 *)&param_1[iVar24].field_0x10;
                uVar7 = *(undefined8 *)(&param_1[iVar24].field_0x10 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar24].field_0x20;
                uVar9 = *(undefined8 *)(&param_1[iVar24].field_0x20 + 8);
                uVar10 = *(undefined8 *)&param_1[iVar24].field_0x30;
                uVar11 = *(undefined8 *)(&param_1[iVar24].field_0x30 + 8);
                uVar12 = *(undefined8 *)&param_1[iVar24].field_0x40;
                uVar13 = *(undefined8 *)(&param_1[iVar24].field_0x40 + 8);
                uVar14 = *(undefined8 *)&param_1[iVar24].field_0x50;
                uVar15 = *(undefined8 *)(&param_1[iVar24].field_0x50 + 8);
                uVar16 = *(undefined8 *)&param_1[iVar24].field_0x60;
                uVar17 = *(undefined8 *)(&param_1[iVar24].field_0x60 + 8);
                *(undefined8 *)(param_1 + iVar24) = *(undefined8 *)(param_1 + iVar19);
                *(undefined8 *)&param_1[iVar24].field_0x8 = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x10 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x10 =
                     *(undefined8 *)&param_1[iVar19].field_0x10;
                *(undefined8 *)(&param_1[iVar24].field_0x10 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x20 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x20 =
                     *(undefined8 *)&param_1[iVar19].field_0x20;
                *(undefined8 *)(&param_1[iVar24].field_0x20 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x30 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x30 =
                     *(undefined8 *)&param_1[iVar19].field_0x30;
                *(undefined8 *)(&param_1[iVar24].field_0x30 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x40 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x40 =
                     *(undefined8 *)&param_1[iVar19].field_0x40;
                *(undefined8 *)(&param_1[iVar24].field_0x40 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x50 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x50 =
                     *(undefined8 *)&param_1[iVar19].field_0x50;
                *(undefined8 *)(&param_1[iVar24].field_0x50 + 8) = uVar3;
                uVar3 = *(undefined8 *)(&param_1[iVar19].field_0x60 + 8);
                *(undefined8 *)&param_1[iVar24].field_0x60 =
                     *(undefined8 *)&param_1[iVar19].field_0x60;
                *(undefined8 *)(&param_1[iVar24].field_0x60 + 8) = uVar3;
                *(undefined8 *)&param_1[iVar24].field_0x70 =
                     *(undefined8 *)&param_1[iVar19].field_0x70;
                *(undefined8 *)(param_1 + iVar19) = uVar4;
                *(undefined8 *)&param_1[iVar19].field_0x8 = uVar5;
                *(undefined8 *)&param_1[iVar19].field_0x10 = uVar6;
                *(undefined8 *)(&param_1[iVar19].field_0x10 + 8) = uVar7;
                *(undefined8 *)&param_1[iVar19].field_0x20 = uVar8;
                *(undefined8 *)(&param_1[iVar19].field_0x20 + 8) = uVar9;
                *(undefined8 *)&param_1[iVar19].field_0x30 = uVar10;
                *(undefined8 *)(&param_1[iVar19].field_0x30 + 8) = uVar11;
                *(undefined8 *)&param_1[iVar19].field_0x40 = uVar12;
                *(undefined8 *)(&param_1[iVar19].field_0x40 + 8) = uVar13;
                *(undefined8 *)&param_1[iVar19].field_0x50 = uVar14;
                *(undefined8 *)(&param_1[iVar19].field_0x50 + 8) = uVar15;
                *(undefined8 *)&param_1[iVar19].field_0x60 = uVar16;
                *(undefined8 *)(&param_1[iVar19].field_0x60 + 8) = uVar17;
                *(undefined8 *)&param_1[iVar19].field_0x70 = uVar1;
                iVar24 = iVar19;
              } while (iVar19 * 2 + 1 < iVar20);
            }
            iVar20 = iVar20 + -1;
            lVar21 = lVar21 + -1;
            pFVar22 = pFVar22 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar19 = iVar25 + -1;
      iVar20 = iVar24 + -2;
      iVar24 = iVar20;
      iVar25 = iVar19;
    }
    iVar20 = iVar19 * 2;
    iVar23 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      if (*(float *)&param_1[(longlong)iVar20 + 2].field_0x70 <=
          *(float *)&param_1[iVar23].field_0x70 &&
          *(float *)&param_1[iVar23].field_0x70 !=
          *(float *)&param_1[(longlong)iVar20 + 2].field_0x70) {
        iVar23 = iVar20;
      }
      iVar23 = iVar23 + 1;
    }
    if (*(float *)&param_1[iVar23].field_0x70 < *(float *)&param_1[iVar19].field_0x70 ||
        *(float *)&param_1[iVar23].field_0x70 == *(float *)&param_1[iVar19].field_0x70)
    goto LAB_14413d309;
    uVar3 = *(undefined8 *)&param_1[iVar23].field_0x8;
    iVar20 = iVar23 * 2 + 1;
    uVar1 = *(undefined8 *)&param_1[iVar19].field_0x70;
    uVar4 = *(undefined8 *)(param_1 + iVar19);
    uVar5 = *(undefined8 *)&param_1[iVar19].field_0x8;
    uVar6 = *(undefined8 *)&param_1[iVar19].field_0x10;
    uVar7 = *(undefined8 *)(&param_1[iVar19].field_0x10 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar19].field_0x20;
    uVar9 = *(undefined8 *)(&param_1[iVar19].field_0x20 + 8);
    uVar10 = *(undefined8 *)&param_1[iVar19].field_0x30;
    uVar11 = *(undefined8 *)(&param_1[iVar19].field_0x30 + 8);
    uVar12 = *(undefined8 *)&param_1[iVar19].field_0x40;
    uVar13 = *(undefined8 *)(&param_1[iVar19].field_0x40 + 8);
    uVar14 = *(undefined8 *)&param_1[iVar19].field_0x50;
    uVar15 = *(undefined8 *)(&param_1[iVar19].field_0x50 + 8);
    uVar16 = *(undefined8 *)&param_1[iVar19].field_0x60;
    uVar17 = *(undefined8 *)(&param_1[iVar19].field_0x60 + 8);
    *(undefined8 *)(param_1 + iVar19) = *(undefined8 *)(param_1 + iVar23);
    *(undefined8 *)&param_1[iVar19].field_0x8 = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x10 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x10 = *(undefined8 *)&param_1[iVar23].field_0x10;
    *(undefined8 *)(&param_1[iVar19].field_0x10 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x20 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x20 = *(undefined8 *)&param_1[iVar23].field_0x20;
    *(undefined8 *)(&param_1[iVar19].field_0x20 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x30 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x30 = *(undefined8 *)&param_1[iVar23].field_0x30;
    *(undefined8 *)(&param_1[iVar19].field_0x30 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x40 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x40 = *(undefined8 *)&param_1[iVar23].field_0x40;
    *(undefined8 *)(&param_1[iVar19].field_0x40 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x50 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x50 = *(undefined8 *)&param_1[iVar23].field_0x50;
    *(undefined8 *)(&param_1[iVar19].field_0x50 + 8) = uVar3;
    uVar3 = *(undefined8 *)(&param_1[iVar23].field_0x60 + 8);
    *(undefined8 *)&param_1[iVar19].field_0x60 = *(undefined8 *)&param_1[iVar23].field_0x60;
    *(undefined8 *)(&param_1[iVar19].field_0x60 + 8) = uVar3;
    *(undefined8 *)&param_1[iVar19].field_0x70 = *(undefined8 *)&param_1[iVar23].field_0x70;
    *(undefined8 *)(param_1 + iVar23) = uVar4;
    *(undefined8 *)&param_1[iVar23].field_0x8 = uVar5;
    *(undefined8 *)&param_1[iVar23].field_0x10 = uVar6;
    *(undefined8 *)(&param_1[iVar23].field_0x10 + 8) = uVar7;
    *(undefined8 *)&param_1[iVar23].field_0x20 = uVar8;
    *(undefined8 *)(&param_1[iVar23].field_0x20 + 8) = uVar9;
    *(undefined8 *)&param_1[iVar23].field_0x30 = uVar10;
    *(undefined8 *)(&param_1[iVar23].field_0x30 + 8) = uVar11;
    *(undefined8 *)&param_1[iVar23].field_0x40 = uVar12;
    *(undefined8 *)(&param_1[iVar23].field_0x40 + 8) = uVar13;
    *(undefined8 *)&param_1[iVar23].field_0x50 = uVar14;
    *(undefined8 *)(&param_1[iVar23].field_0x50 + 8) = uVar15;
    *(undefined8 *)&param_1[iVar23].field_0x60 = uVar16;
    *(undefined8 *)(&param_1[iVar23].field_0x60 + 8) = uVar17;
    *(undefined8 *)&param_1[iVar23].field_0x70 = uVar1;
    iVar19 = iVar23;
  } while( true );
}

// InternalConstructor<UBodySetupCore> @ 14413d510

void __cdecl InternalConstructor<UBodySetupCore>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBodySetupCore__6B_;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x9 = 0;
  }
  return;
}

// InternalConstructor<UChaosPhysicalMaterial> @ 14413d550

void __cdecl InternalConstructor<UChaosPhysicalMaterial>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0x3f000000;
    *(undefined ***)this = &___7UChaosPhysicalMaterial__6B_;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UDEPRECATED_PhysicalMaterialPropertyBase> @ 14413d5b0

void __cdecl
InternalConstructor<UDEPRECATED_PhysicalMaterialPropertyBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
  }
  return;
}

// InternalConstructor<UPhysicalMaterial> @ 14413d5e0

void __cdecl InternalConstructor<UPhysicalMaterial>(FObjectInitializer *param_1)

{
  UObject *this;
  bool bVar1;
  undefined4 uStack_14;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPhysicalMaterial__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x40000000;
    *(undefined4 *)&this[2].field_0x18 = 0x41a00000;
    *(undefined4 *)&this[2].field_0x1c = 0x40c00000;
    *(undefined4 *)&this[2].field_0x20 = 0x3f800000;
    bVar1 = PhysicalMaterialCVars::bShowExperimentalProperties;
    *(undefined8 *)&this[3].field_0x18 = 0;
    this[3].field_0xc = bVar1;
    *(ulonglong *)&this[3].field_0x20 = CONCAT44(uStack_14,2);
    *(UObject **)(this + 4) = this;
    this[3].field_0xd = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 1) = 0x3f333333;
    *(undefined4 *)&this[1].field_0xc = 0x3e99999a;
    *(undefined4 *)&this[1].field_0x24 = 0x3f400000;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x1c = 0x3d4ccccd;
    *(undefined4 *)&this[1].field_0x20 = 4;
    this[1].field_0x9 = 0;
  }
  return;
}

// InternalConstructor<UPhysicsSettingsCore> @ 14413d6b0

void __cdecl InternalConstructor<UPhysicsSettingsCore>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xc4750000;
    this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x457a0000;
    *(undefined4 *)&this[1]._padding_ = 0x3e99999a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000;
    *(undefined4 *)&this[1]._padding_ = 4;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40a00000;
    *(undefined4 *)&this[1]._padding_ = 0x10000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
    *(undefined4 *)&this[1]._padding_ = 0x43480000;
    this[1].CategoryName.ComparisonIndex.Value = 0x45610000;
    this[1].SectionName.ComparisonIndex.Value = 0x3ca3d70a;
    this[1].SectionName.Number = 0x40000000;
    *(undefined4 *)&this[2]._padding_ = 0x41000000;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0xff01;
    FChaosSolverConfiguration::FChaosSolverConfiguration
              ((FChaosSolverConfiguration *)&this[2]._padding_);
    FName::FName(local_res8,L"Physics");
    this->SectionName = local_res8[0];
  }
  return;
}

// InternalVTableHelperCtorCaller<UBodySetupCore> @ 14413d770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBodySetupCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBodySetupCore::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBodySetupCore__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UChaosPhysicalMaterial> @ 14413d820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UChaosPhysicalMaterial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UChaosPhysicalMaterial::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UChaosPhysicalMaterial__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_PhysicalMaterialPropertyBase> @ 14413d8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_PhysicalMaterialPropertyBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_PhysicalMaterialPropertyBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicalMaterial> @ 14413d980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicalMaterial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicalMaterial::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPhysicalMaterial__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x40000000;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0x41a00000;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x40c00000;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0x3f800000;
    pUVar1[3].field_0xc = PhysicalMaterialCVars::bShowExperimentalProperties;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPhysicsSettingsCore> @ 14413da70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPhysicsSettingsCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPhysicsSettingsCore::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
    FChaosSolverConfiguration::FChaosSolverConfiguration
              ((FChaosSolverConfiguration *)&this[2]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_> @ 14413db30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_>
          (FPTRaycastHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_> param_4)

{
  FPTRaycastHit *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  FPTRaycastHit *pFVar22;
  FPTRaycastHit *pFVar23;
  FPTRaycastHit *pFVar24;
  FPTRaycastHit **ppFVar25;
  FPTRaycastHit *pFVar26;
  FPTRaycastHit *pFVar27;
  FPTRaycastHit *pFVar28;
  float fVar29;
  undefined1 auStack_3a8 [48];
  FPTRaycastHit *local_378;
  FPTRaycastHit *local_368;
  FPTRaycastHit *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (1 < param_2) {
    local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar29;
    memset(local_350,0,0x2e8);
    ppFVar25 = &local_368;
    do {
      pFVar27 = ppFVar25[1];
      pFVar24 = *ppFVar25;
      pFVar1 = ppFVar25[2];
      iVar21 = (int)((longlong)pFVar27 - (longlong)pFVar24 >> 7) + 1;
      local_378._0_4_ = (int)pFVar1;
      pFVar28 = pFVar24;
      if ((int)local_378 != 0) {
LAB_14413dbf0:
        if (8 < iVar21) {
          lVar2 = pFVar28->_padding_;
          pFVar22 = pFVar27 + 1;
          pFVar24 = pFVar28 + iVar21 / 2;
          lVar3 = pFVar24->_padding_;
          lVar4 = pFVar24->_padding_;
          lVar5 = pFVar24->_padding_;
          lVar6 = pFVar24->_padding_;
          lVar7 = pFVar24->_padding_;
          lVar8 = pFVar24->_padding_;
          lVar9 = pFVar24->_padding_;
          lVar10 = pFVar24->_padding_;
          lVar11 = pFVar24->_padding_;
          lVar12 = pFVar24->_padding_;
          lVar13 = pFVar24->_padding_;
          lVar14 = pFVar24->_padding_;
          lVar15 = pFVar24->_padding_;
          lVar16 = pFVar24->_padding_;
          lVar17 = pFVar24->_padding_;
          fVar19 = pFVar24->U;
          fVar20 = pFVar24->V;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          fVar29 = pFVar28->U;
          fVar18 = pFVar28->V;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->U = fVar29;
          pFVar24->V = fVar18;
          pFVar28->_padding_ = lVar3;
          pFVar28->_padding_ = lVar4;
          pFVar28->_padding_ = lVar5;
          pFVar28->_padding_ = lVar6;
          pFVar28->_padding_ = lVar7;
          pFVar28->_padding_ = lVar8;
          pFVar28->_padding_ = lVar9;
          pFVar28->_padding_ = lVar10;
          pFVar28->_padding_ = lVar11;
          pFVar28->_padding_ = lVar12;
          pFVar28->_padding_ = lVar13;
          pFVar28->_padding_ = lVar14;
          pFVar28->_padding_ = lVar15;
          pFVar28->_padding_ = lVar16;
          pFVar28->_padding_ = lVar17;
          pFVar28->U = fVar19;
          pFVar28->V = fVar20;
          pFVar24 = pFVar28;
LAB_14413dca0:
          pFVar23 = pFVar24;
          pFVar24 = pFVar23 + 1;
          if (pFVar24 <= pFVar27) goto code_r0x00014413dca9;
          goto LAB_14413dcb5;
        }
        if (pFVar28 < pFVar27) {
          pFVar1 = pFVar28 + 1;
          do {
            pFVar24 = pFVar28;
            if (pFVar1 <= pFVar27) {
              pFVar22 = pFVar1;
              if (0x1ff < ((longlong)pFVar27 + (0x80 - (longlong)pFVar1) & 0xffffffffffffff80U)) {
                do {
                  if (*(float *)&pFVar24->_padding_ < *(float *)&pFVar22->_padding_) {
                    pFVar24 = pFVar22;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[1]._padding_ &&
                      *(float *)&pFVar22[1]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 1;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[2]._padding_ &&
                      *(float *)&pFVar22[2]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 2;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[3]._padding_ &&
                      *(float *)&pFVar22[3]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 3;
                  }
                  pFVar22 = pFVar22 + 4;
                } while (pFVar22 <= pFVar27 + -3);
              }
              for (; pFVar22 <= pFVar27; pFVar22 = pFVar22 + 1) {
                if (*(float *)&pFVar24->_padding_ < *(float *)&pFVar22->_padding_) {
                  pFVar24 = pFVar22;
                }
              }
            }
            lVar2 = pFVar24->_padding_;
            lVar3 = pFVar24->_padding_;
            pFVar22 = pFVar27 + -1;
            lVar4 = pFVar24->_padding_;
            lVar5 = pFVar24->_padding_;
            lVar6 = pFVar24->_padding_;
            lVar7 = pFVar24->_padding_;
            lVar8 = pFVar27->_padding_;
            lVar9 = pFVar24->_padding_;
            lVar10 = pFVar24->_padding_;
            lVar11 = pFVar24->_padding_;
            lVar12 = pFVar24->_padding_;
            lVar13 = pFVar24->_padding_;
            lVar14 = pFVar24->_padding_;
            lVar15 = pFVar24->_padding_;
            lVar16 = pFVar24->_padding_;
            lVar17 = pFVar24->_padding_;
            fVar19 = pFVar24->U;
            fVar20 = pFVar24->V;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            fVar29 = pFVar27->U;
            fVar18 = pFVar27->V;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->U = fVar29;
            pFVar24->V = fVar18;
            pFVar27->_padding_ = lVar2;
            pFVar27->_padding_ = lVar3;
            pFVar27->_padding_ = lVar4;
            pFVar27->_padding_ = lVar5;
            pFVar27->_padding_ = lVar6;
            pFVar27->_padding_ = lVar7;
            pFVar27->_padding_ = lVar9;
            pFVar27->_padding_ = lVar10;
            pFVar27->_padding_ = lVar11;
            pFVar27->_padding_ = lVar12;
            pFVar27->_padding_ = lVar13;
            pFVar27->_padding_ = lVar14;
            pFVar27->_padding_ = lVar15;
            pFVar27->_padding_ = lVar16;
            pFVar27->_padding_ = lVar17;
            pFVar27->U = fVar19;
            pFVar27->V = fVar20;
            pFVar27 = pFVar22;
          } while (pFVar28 < pFVar22);
        }
        goto LAB_14413de92;
      }
LAB_14413de81:
      local_378 = pFVar1;
      HeapSortInternal<ChaosInterface::FPTRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTRaycastHit,TLess<void>_>_>
                (pFVar24,iVar21,param_3,param_4);
LAB_14413de92:
      ppFVar25 = ppFVar25 + -3;
    } while (&local_368 <= ppFVar25);
  }
  return;
code_r0x00014413dca9:
  if (*(float *)&pFVar23[1]._padding_ < *(float *)&pFVar28->_padding_ ||
      *(float *)&pFVar23[1]._padding_ == *(float *)&pFVar28->_padding_) goto LAB_14413dca0;
LAB_14413dcb5:
  do {
    pFVar26 = pFVar22;
    pFVar22 = pFVar26 + -1;
    if (pFVar22 <= pFVar28) break;
  } while (*(float *)&pFVar28->_padding_ < *(float *)&pFVar26[-1]._padding_ ||
           *(float *)&pFVar28->_padding_ == *(float *)&pFVar26[-1]._padding_);
  lVar2 = pFVar26[-1]._padding_;
  if (pFVar24 <= pFVar22) {
    lVar3 = pFVar24->_padding_;
    lVar4 = pFVar23[1]._padding_;
    lVar5 = pFVar23[1]._padding_;
    lVar6 = pFVar23[1]._padding_;
    lVar7 = pFVar23[1]._padding_;
    lVar8 = pFVar23[1]._padding_;
    lVar9 = pFVar23[1]._padding_;
    lVar10 = pFVar23[1]._padding_;
    lVar11 = pFVar23[1]._padding_;
    lVar12 = pFVar23[1]._padding_;
    lVar13 = pFVar23[1]._padding_;
    lVar14 = pFVar23[1]._padding_;
    lVar15 = pFVar23[1]._padding_;
    lVar16 = pFVar23[1]._padding_;
    lVar17 = pFVar23[1]._padding_;
    fVar19 = pFVar23[1].U;
    fVar20 = pFVar23[1].V;
    pFVar24->_padding_ = pFVar22->_padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    fVar29 = pFVar26[-1].U;
    fVar18 = pFVar26[-1].V;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1].U = fVar29;
    pFVar23[1].V = fVar18;
    pFVar22->_padding_ = lVar3;
    pFVar26[-1]._padding_ = lVar4;
    pFVar26[-1]._padding_ = lVar5;
    pFVar26[-1]._padding_ = lVar6;
    pFVar26[-1]._padding_ = lVar7;
    pFVar26[-1]._padding_ = lVar8;
    pFVar26[-1]._padding_ = lVar9;
    pFVar26[-1]._padding_ = lVar10;
    pFVar26[-1]._padding_ = lVar11;
    pFVar26[-1]._padding_ = lVar12;
    pFVar26[-1]._padding_ = lVar13;
    pFVar26[-1]._padding_ = lVar14;
    pFVar26[-1]._padding_ = lVar15;
    pFVar26[-1]._padding_ = lVar16;
    pFVar26[-1]._padding_ = lVar17;
    pFVar26[-1].U = fVar19;
    pFVar26[-1].V = fVar20;
    goto LAB_14413dca0;
  }
  lVar3 = pFVar28->_padding_;
  lVar4 = pFVar28->_padding_;
  lVar5 = pFVar28->_padding_;
  lVar6 = pFVar28->_padding_;
  lVar7 = pFVar28->_padding_;
  lVar8 = pFVar28->_padding_;
  local_378._0_4_ = (int)local_378 + -1;
  lVar9 = pFVar28->_padding_;
  lVar10 = pFVar28->_padding_;
  lVar11 = pFVar28->_padding_;
  lVar12 = pFVar28->_padding_;
  lVar13 = pFVar28->_padding_;
  lVar14 = pFVar28->_padding_;
  lVar15 = pFVar28->_padding_;
  lVar16 = pFVar28->_padding_;
  lVar17 = pFVar28->_padding_;
  fVar19 = pFVar28->U;
  fVar20 = pFVar28->V;
  pFVar28->_padding_ = pFVar22->_padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  fVar29 = pFVar26[-1].U;
  fVar18 = pFVar26[-1].V;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->U = fVar29;
  pFVar28->V = fVar18;
  pFVar22->_padding_ = lVar3;
  pFVar26[-1]._padding_ = lVar4;
  pFVar26[-1]._padding_ = lVar5;
  pFVar26[-1]._padding_ = lVar6;
  pFVar26[-1]._padding_ = lVar7;
  pFVar26[-1]._padding_ = lVar8;
  pFVar26[-1]._padding_ = lVar9;
  pFVar26[-1]._padding_ = lVar10;
  pFVar26[-1]._padding_ = lVar11;
  pFVar26[-1]._padding_ = lVar12;
  pFVar26[-1]._padding_ = lVar13;
  pFVar26[-1]._padding_ = lVar14;
  pFVar26[-1]._padding_ = lVar15;
  pFVar26[-1]._padding_ = lVar16;
  pFVar26[-1]._padding_ = lVar17;
  pFVar26[-1].U = fVar19;
  pFVar26[-1].V = fVar20;
  if ((longlong)((longlong)pFVar22 + (-0x80 - (longlong)pFVar28) & 0xffffffffffffff80U) <
      (longlong)((longlong)pFVar27 - (longlong)pFVar24 & 0xffffffffffffff80U)) {
    if (pFVar24 < pFVar27) {
      *ppFVar25 = pFVar24;
      ppFVar25[1] = pFVar27;
      *(int *)(ppFVar25 + 2) = (int)local_378;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar22 <= pFVar28 + 1) goto LAB_14413de92;
    pFVar27 = pFVar26 + -2;
    pFVar24 = pFVar28;
  }
  else {
    if (pFVar28 + 1 < pFVar22) {
      *ppFVar25 = pFVar28;
      ppFVar25[1] = pFVar26 + -2;
      *(int *)(ppFVar25 + 2) = (int)local_378;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar27 <= pFVar24) goto LAB_14413de92;
  }
  iVar21 = (int)((longlong)pFVar27 - (longlong)pFVar24 >> 7) + 1;
  pFVar28 = pFVar24;
  if ((int)local_378 == 0) goto LAB_14413de81;
  goto LAB_14413dbf0;
}

// IntroSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_> @ 14413e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_>
          (FPTSweepHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_> param_4)

{
  FPTSweepHit *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FPTSweepHit *pFVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  FPTSweepHit *pFVar22;
  FPTSweepHit *pFVar23;
  FPTSweepHit *pFVar24;
  FPTSweepHit *pFVar25;
  FPTSweepHit *pFVar26;
  FPTSweepHit **ppFVar27;
  float fVar28;
  undefined1 auStack_3b8 [48];
  FPTSweepHit *local_388;
  FPTSweepHit *local_378;
  FPTSweepHit *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar28;
    memset(local_360,0,0x2e8);
    ppFVar27 = &local_378;
    do {
      pFVar23 = ppFVar27[1];
      pFVar18 = *ppFVar27;
      pFVar1 = ppFVar27[2];
      local_388._0_4_ = (int)pFVar1;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),
                      8) + ((longlong)pFVar23 - (longlong)pFVar18);
      iVar19 = ((int)(lVar20 >> 6) - (int)(lVar20 >> 0x3f)) + 1;
      pFVar26 = pFVar18;
      if ((int)local_388 != 0) {
LAB_14413e130:
        if (8 < iVar19) {
          uVar3 = *(undefined8 *)&pFVar26->field_0x8;
          pFVar22 = pFVar23 + 1;
          pFVar18 = pFVar26 + iVar19 / 2;
          uVar4 = *(undefined8 *)pFVar18;
          uVar5 = *(undefined8 *)&pFVar18->field_0x8;
          uVar6 = *(undefined8 *)&pFVar18->field_0x10;
          uVar7 = *(undefined8 *)&pFVar18->field_0x18;
          uVar8 = *(undefined8 *)&pFVar18->field_0x20;
          uVar9 = *(undefined8 *)&pFVar18->field_0x28;
          uVar10 = *(undefined8 *)&pFVar18->field_0x30;
          uVar11 = *(undefined8 *)&pFVar18->field_0x38;
          uVar12 = *(undefined8 *)&pFVar18->field_0x40;
          uVar13 = *(undefined8 *)&pFVar18->field_0x48;
          uVar14 = *(undefined8 *)&pFVar18->field_0x50;
          uVar15 = *(undefined8 *)&pFVar18->field_0x58;
          uVar16 = *(undefined8 *)&pFVar18->field_0x60;
          uVar17 = *(undefined8 *)&pFVar18->field_0x68;
          uVar2 = *(undefined8 *)&pFVar18->field_0x70;
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar26;
          *(undefined8 *)&pFVar18->field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x18;
          *(undefined8 *)&pFVar18->field_0x10 = *(undefined8 *)&pFVar26->field_0x10;
          *(undefined8 *)&pFVar18->field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x28;
          *(undefined8 *)&pFVar18->field_0x20 = *(undefined8 *)&pFVar26->field_0x20;
          *(undefined8 *)&pFVar18->field_0x28 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x38;
          *(undefined8 *)&pFVar18->field_0x30 = *(undefined8 *)&pFVar26->field_0x30;
          *(undefined8 *)&pFVar18->field_0x38 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x48;
          *(undefined8 *)&pFVar18->field_0x40 = *(undefined8 *)&pFVar26->field_0x40;
          *(undefined8 *)&pFVar18->field_0x48 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x58;
          *(undefined8 *)&pFVar18->field_0x50 = *(undefined8 *)&pFVar26->field_0x50;
          *(undefined8 *)&pFVar18->field_0x58 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x68;
          *(undefined8 *)&pFVar18->field_0x60 = *(undefined8 *)&pFVar26->field_0x60;
          *(undefined8 *)&pFVar18->field_0x68 = uVar3;
          *(undefined8 *)&pFVar18->field_0x70 = *(undefined8 *)&pFVar26->field_0x70;
          *(undefined8 *)pFVar26 = uVar4;
          *(undefined8 *)&pFVar26->field_0x8 = uVar5;
          *(undefined8 *)&pFVar26->field_0x10 = uVar6;
          *(undefined8 *)&pFVar26->field_0x18 = uVar7;
          *(undefined8 *)&pFVar26->field_0x20 = uVar8;
          *(undefined8 *)&pFVar26->field_0x28 = uVar9;
          *(undefined8 *)&pFVar26->field_0x30 = uVar10;
          *(undefined8 *)&pFVar26->field_0x38 = uVar11;
          *(undefined8 *)&pFVar26->field_0x40 = uVar12;
          *(undefined8 *)&pFVar26->field_0x48 = uVar13;
          *(undefined8 *)&pFVar26->field_0x50 = uVar14;
          *(undefined8 *)&pFVar26->field_0x58 = uVar15;
          *(undefined8 *)&pFVar26->field_0x60 = uVar16;
          *(undefined8 *)&pFVar26->field_0x68 = uVar17;
          *(undefined8 *)&pFVar26->field_0x70 = uVar2;
          pFVar18 = pFVar26;
LAB_14413e1e3:
          pFVar24 = pFVar18;
          pFVar18 = pFVar24 + 1;
          if (pFVar18 <= pFVar23) goto code_r0x00014413e1ec;
          goto LAB_14413e200;
        }
        if (pFVar26 < pFVar23) {
          pFVar1 = pFVar26 + 1;
          do {
            pFVar18 = pFVar26;
            if (pFVar1 <= pFVar23) {
              pFVar22 = pFVar1;
              if (0x1df < (ulonglong)((longlong)pFVar23 + (0x78 - (longlong)pFVar1))) {
                do {
                  if (*(float *)&pFVar18->field_0x70 < *(float *)&pFVar22->field_0x70) {
                    pFVar18 = pFVar22;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[1].field_0x70 &&
                      *(float *)&pFVar22[1].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 1;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[2].field_0x70 &&
                      *(float *)&pFVar22[2].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 2;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[3].field_0x70 &&
                      *(float *)&pFVar22[3].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 3;
                  }
                  pFVar22 = pFVar22 + 4;
                } while (pFVar22 <= pFVar23 + -3);
              }
              for (; pFVar22 <= pFVar23; pFVar22 = pFVar22 + 1) {
                if (*(float *)&pFVar18->field_0x70 < *(float *)&pFVar22->field_0x70) {
                  pFVar18 = pFVar22;
                }
              }
            }
            uVar3 = *(undefined8 *)pFVar18;
            uVar4 = *(undefined8 *)&pFVar18->field_0x8;
            pFVar22 = pFVar23 + -1;
            uVar2 = *(undefined8 *)&pFVar18->field_0x70;
            uVar5 = *(undefined8 *)&pFVar18->field_0x10;
            uVar6 = *(undefined8 *)&pFVar18->field_0x18;
            uVar7 = *(undefined8 *)&pFVar23->field_0x8;
            uVar8 = *(undefined8 *)&pFVar18->field_0x20;
            uVar9 = *(undefined8 *)&pFVar18->field_0x28;
            uVar10 = *(undefined8 *)&pFVar18->field_0x30;
            uVar11 = *(undefined8 *)&pFVar18->field_0x38;
            uVar12 = *(undefined8 *)&pFVar18->field_0x40;
            uVar13 = *(undefined8 *)&pFVar18->field_0x48;
            uVar14 = *(undefined8 *)&pFVar18->field_0x50;
            uVar15 = *(undefined8 *)&pFVar18->field_0x58;
            uVar16 = *(undefined8 *)&pFVar18->field_0x60;
            uVar17 = *(undefined8 *)&pFVar18->field_0x68;
            *(undefined8 *)pFVar18 = *(undefined8 *)pFVar23;
            *(undefined8 *)&pFVar18->field_0x8 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x18;
            *(undefined8 *)&pFVar18->field_0x10 = *(undefined8 *)&pFVar23->field_0x10;
            *(undefined8 *)&pFVar18->field_0x18 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x28;
            *(undefined8 *)&pFVar18->field_0x20 = *(undefined8 *)&pFVar23->field_0x20;
            *(undefined8 *)&pFVar18->field_0x28 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x38;
            *(undefined8 *)&pFVar18->field_0x30 = *(undefined8 *)&pFVar23->field_0x30;
            *(undefined8 *)&pFVar18->field_0x38 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x48;
            *(undefined8 *)&pFVar18->field_0x40 = *(undefined8 *)&pFVar23->field_0x40;
            *(undefined8 *)&pFVar18->field_0x48 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x58;
            *(undefined8 *)&pFVar18->field_0x50 = *(undefined8 *)&pFVar23->field_0x50;
            *(undefined8 *)&pFVar18->field_0x58 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x68;
            *(undefined8 *)&pFVar18->field_0x60 = *(undefined8 *)&pFVar23->field_0x60;
            *(undefined8 *)&pFVar18->field_0x68 = uVar7;
            *(undefined8 *)&pFVar18->field_0x70 = *(undefined8 *)&pFVar23->field_0x70;
            *(undefined8 *)pFVar23 = uVar3;
            *(undefined8 *)&pFVar23->field_0x8 = uVar4;
            *(undefined8 *)&pFVar23->field_0x10 = uVar5;
            *(undefined8 *)&pFVar23->field_0x18 = uVar6;
            *(undefined8 *)&pFVar23->field_0x20 = uVar8;
            *(undefined8 *)&pFVar23->field_0x28 = uVar9;
            *(undefined8 *)&pFVar23->field_0x30 = uVar10;
            *(undefined8 *)&pFVar23->field_0x38 = uVar11;
            *(undefined8 *)&pFVar23->field_0x40 = uVar12;
            *(undefined8 *)&pFVar23->field_0x48 = uVar13;
            *(undefined8 *)&pFVar23->field_0x50 = uVar14;
            *(undefined8 *)&pFVar23->field_0x58 = uVar15;
            *(undefined8 *)&pFVar23->field_0x60 = uVar16;
            *(undefined8 *)&pFVar23->field_0x68 = uVar17;
            *(undefined8 *)&pFVar23->field_0x70 = uVar2;
            pFVar23 = pFVar22;
          } while (pFVar26 < pFVar22);
        }
        goto LAB_14413e423;
      }
LAB_14413e414:
      local_388 = pFVar1;
      HeapSortInternal<ChaosInterface::FPTSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FPTSweepHit,TLess<void>_>_>
                (pFVar18,iVar19,param_3,param_4);
LAB_14413e423:
      ppFVar27 = ppFVar27 + -3;
    } while (&local_378 <= ppFVar27);
  }
  return;
code_r0x00014413e1ec:
  if (*(float *)&pFVar24[1].field_0x70 < *(float *)&pFVar26->field_0x70 ||
      *(float *)&pFVar24[1].field_0x70 == *(float *)&pFVar26->field_0x70) goto LAB_14413e1e3;
LAB_14413e200:
  do {
    pFVar25 = pFVar22;
    pFVar22 = pFVar25 + -1;
    if (pFVar22 <= pFVar26) break;
  } while (*(float *)&pFVar26->field_0x70 < *(float *)&pFVar25[-1].field_0x70 ||
           *(float *)&pFVar26->field_0x70 == *(float *)&pFVar25[-1].field_0x70);
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x8;
  if (pFVar18 <= pFVar22) {
    uVar4 = *(undefined8 *)pFVar18;
    uVar5 = *(undefined8 *)&pFVar24[1].field_0x8;
    uVar6 = *(undefined8 *)&pFVar24[1].field_0x10;
    uVar7 = *(undefined8 *)&pFVar24[1].field_0x18;
    uVar8 = *(undefined8 *)&pFVar24[1].field_0x20;
    uVar9 = *(undefined8 *)&pFVar24[1].field_0x28;
    uVar10 = *(undefined8 *)&pFVar24[1].field_0x30;
    uVar11 = *(undefined8 *)&pFVar24[1].field_0x38;
    uVar12 = *(undefined8 *)&pFVar24[1].field_0x40;
    uVar13 = *(undefined8 *)&pFVar24[1].field_0x48;
    uVar14 = *(undefined8 *)&pFVar24[1].field_0x50;
    uVar15 = *(undefined8 *)&pFVar24[1].field_0x58;
    uVar16 = *(undefined8 *)&pFVar24[1].field_0x60;
    uVar17 = *(undefined8 *)&pFVar24[1].field_0x68;
    uVar3 = *(undefined8 *)&pFVar24[1].field_0x70;
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar22;
    *(undefined8 *)&pFVar24[1].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x18;
    *(undefined8 *)&pFVar24[1].field_0x10 = *(undefined8 *)&pFVar25[-1].field_0x10;
    *(undefined8 *)&pFVar24[1].field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x28;
    *(undefined8 *)&pFVar24[1].field_0x20 = *(undefined8 *)&pFVar25[-1].field_0x20;
    *(undefined8 *)&pFVar24[1].field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x38;
    *(undefined8 *)&pFVar24[1].field_0x30 = *(undefined8 *)&pFVar25[-1].field_0x30;
    *(undefined8 *)&pFVar24[1].field_0x38 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x48;
    *(undefined8 *)&pFVar24[1].field_0x40 = *(undefined8 *)&pFVar25[-1].field_0x40;
    *(undefined8 *)&pFVar24[1].field_0x48 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x58;
    *(undefined8 *)&pFVar24[1].field_0x50 = *(undefined8 *)&pFVar25[-1].field_0x50;
    *(undefined8 *)&pFVar24[1].field_0x58 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x68;
    *(undefined8 *)&pFVar24[1].field_0x60 = *(undefined8 *)&pFVar25[-1].field_0x60;
    *(undefined8 *)&pFVar24[1].field_0x68 = uVar2;
    *(undefined8 *)&pFVar24[1].field_0x70 = *(undefined8 *)&pFVar25[-1].field_0x70;
    *(undefined8 *)pFVar22 = uVar4;
    *(undefined8 *)&pFVar25[-1].field_0x8 = uVar5;
    *(undefined8 *)&pFVar25[-1].field_0x10 = uVar6;
    *(undefined8 *)&pFVar25[-1].field_0x18 = uVar7;
    *(undefined8 *)&pFVar25[-1].field_0x20 = uVar8;
    *(undefined8 *)&pFVar25[-1].field_0x28 = uVar9;
    *(undefined8 *)&pFVar25[-1].field_0x30 = uVar10;
    *(undefined8 *)&pFVar25[-1].field_0x38 = uVar11;
    *(undefined8 *)&pFVar25[-1].field_0x40 = uVar12;
    *(undefined8 *)&pFVar25[-1].field_0x48 = uVar13;
    *(undefined8 *)&pFVar25[-1].field_0x50 = uVar14;
    *(undefined8 *)&pFVar25[-1].field_0x58 = uVar15;
    *(undefined8 *)&pFVar25[-1].field_0x60 = uVar16;
    *(undefined8 *)&pFVar25[-1].field_0x68 = uVar17;
    *(undefined8 *)&pFVar25[-1].field_0x70 = uVar3;
    goto LAB_14413e1e3;
  }
  uVar4 = *(undefined8 *)pFVar26;
  uVar5 = *(undefined8 *)&pFVar26->field_0x8;
  uVar6 = *(undefined8 *)&pFVar26->field_0x10;
  uVar7 = *(undefined8 *)&pFVar26->field_0x18;
  local_388._0_4_ = (int)local_388 + -1;
  uVar8 = *(undefined8 *)&pFVar26->field_0x20;
  uVar9 = *(undefined8 *)&pFVar26->field_0x28;
  lVar20 = (longlong)pFVar22 + (-0x78 - (longlong)pFVar26);
  uVar10 = *(undefined8 *)&pFVar26->field_0x30;
  uVar11 = *(undefined8 *)&pFVar26->field_0x38;
  uVar12 = *(undefined8 *)&pFVar26->field_0x40;
  uVar13 = *(undefined8 *)&pFVar26->field_0x48;
  uVar14 = *(undefined8 *)&pFVar26->field_0x50;
  uVar15 = *(undefined8 *)&pFVar26->field_0x58;
  uVar16 = *(undefined8 *)&pFVar26->field_0x60;
  uVar17 = *(undefined8 *)&pFVar26->field_0x68;
  uVar3 = *(undefined8 *)&pFVar26->field_0x70;
  *(undefined8 *)pFVar26 = *(undefined8 *)pFVar22;
  *(undefined8 *)&pFVar26->field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x18;
  *(undefined8 *)&pFVar26->field_0x10 = *(undefined8 *)&pFVar25[-1].field_0x10;
  *(undefined8 *)&pFVar26->field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x28;
  *(undefined8 *)&pFVar26->field_0x20 = *(undefined8 *)&pFVar25[-1].field_0x20;
  *(undefined8 *)&pFVar26->field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x38;
  lVar20 = lVar20 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar20),8);
  *(undefined8 *)&pFVar26->field_0x30 = *(undefined8 *)&pFVar25[-1].field_0x30;
  *(undefined8 *)&pFVar26->field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x48;
  *(undefined8 *)&pFVar26->field_0x40 = *(undefined8 *)&pFVar25[-1].field_0x40;
  *(undefined8 *)&pFVar26->field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x58;
  *(undefined8 *)&pFVar26->field_0x50 = *(undefined8 *)&pFVar25[-1].field_0x50;
  *(undefined8 *)&pFVar26->field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x68;
  *(undefined8 *)&pFVar26->field_0x60 = *(undefined8 *)&pFVar25[-1].field_0x60;
  *(undefined8 *)&pFVar26->field_0x68 = uVar2;
  lVar21 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),8) +
           ((longlong)pFVar23 - (longlong)pFVar18);
  *(undefined8 *)&pFVar26->field_0x70 = *(undefined8 *)&pFVar25[-1].field_0x70;
  *(undefined8 *)pFVar22 = uVar4;
  *(undefined8 *)&pFVar25[-1].field_0x8 = uVar5;
  *(undefined8 *)&pFVar25[-1].field_0x10 = uVar6;
  *(undefined8 *)&pFVar25[-1].field_0x18 = uVar7;
  *(undefined8 *)&pFVar25[-1].field_0x20 = uVar8;
  *(undefined8 *)&pFVar25[-1].field_0x28 = uVar9;
  *(undefined8 *)&pFVar25[-1].field_0x30 = uVar10;
  *(undefined8 *)&pFVar25[-1].field_0x38 = uVar11;
  *(undefined8 *)&pFVar25[-1].field_0x40 = uVar12;
  *(undefined8 *)&pFVar25[-1].field_0x48 = uVar13;
  *(undefined8 *)&pFVar25[-1].field_0x50 = uVar14;
  *(undefined8 *)&pFVar25[-1].field_0x58 = uVar15;
  *(undefined8 *)&pFVar25[-1].field_0x60 = uVar16;
  *(undefined8 *)&pFVar25[-1].field_0x68 = uVar17;
  *(undefined8 *)&pFVar25[-1].field_0x70 = uVar3;
  if ((lVar20 >> 6) - (lVar20 >> 0x3f) < (lVar21 >> 6) - (lVar21 >> 0x3f)) {
    if (pFVar18 < pFVar23) {
      *ppFVar27 = pFVar18;
      ppFVar27[1] = pFVar23;
      *(int *)(ppFVar27 + 2) = (int)local_388;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar22 <= pFVar26 + 1) goto LAB_14413e423;
    pFVar23 = pFVar25 + -2;
    pFVar18 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar22) {
      *ppFVar27 = pFVar26;
      ppFVar27[1] = pFVar25 + -2;
      *(int *)(ppFVar27 + 2) = (int)local_388;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar23 <= pFVar18) goto LAB_14413e423;
  }
  lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),8) +
           ((longlong)pFVar23 - (longlong)pFVar18);
  iVar19 = ((int)(lVar20 >> 6) - (int)(lVar20 >> 0x3f)) + 1;
  pFVar26 = pFVar18;
  if ((int)local_388 == 0) goto LAB_14413e414;
  goto LAB_14413e130;
}

// IntroSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_> @ 14413e5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_>
          (FRaycastHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_> param_4)

{
  FRaycastHit *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  FRaycastHit *pFVar22;
  FRaycastHit *pFVar23;
  FRaycastHit *pFVar24;
  FRaycastHit **ppFVar25;
  FRaycastHit *pFVar26;
  FRaycastHit *pFVar27;
  FRaycastHit *pFVar28;
  float fVar29;
  undefined1 auStack_3a8 [48];
  FRaycastHit *local_378;
  FRaycastHit *local_368;
  FRaycastHit *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (1 < param_2) {
    local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar29;
    memset(local_350,0,0x2e8);
    ppFVar25 = &local_368;
    do {
      pFVar27 = ppFVar25[1];
      pFVar24 = *ppFVar25;
      pFVar1 = ppFVar25[2];
      iVar21 = (int)((longlong)pFVar27 - (longlong)pFVar24 >> 7) + 1;
      local_378._0_4_ = (int)pFVar1;
      pFVar28 = pFVar24;
      if ((int)local_378 != 0) {
LAB_14413e6a0:
        if (8 < iVar21) {
          lVar2 = pFVar28->_padding_;
          pFVar22 = pFVar27 + 1;
          pFVar24 = pFVar28 + iVar21 / 2;
          lVar3 = pFVar24->_padding_;
          lVar4 = pFVar24->_padding_;
          lVar5 = pFVar24->_padding_;
          lVar6 = pFVar24->_padding_;
          lVar7 = pFVar24->_padding_;
          lVar8 = pFVar24->_padding_;
          lVar9 = pFVar24->_padding_;
          lVar10 = pFVar24->_padding_;
          lVar11 = pFVar24->_padding_;
          lVar12 = pFVar24->_padding_;
          lVar13 = pFVar24->_padding_;
          lVar14 = pFVar24->_padding_;
          lVar15 = pFVar24->_padding_;
          lVar16 = pFVar24->_padding_;
          lVar17 = pFVar24->_padding_;
          fVar19 = pFVar24->U;
          fVar20 = pFVar24->V;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          lVar2 = pFVar28->_padding_;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->_padding_ = lVar2;
          fVar29 = pFVar28->U;
          fVar18 = pFVar28->V;
          pFVar24->_padding_ = pFVar28->_padding_;
          pFVar24->U = fVar29;
          pFVar24->V = fVar18;
          pFVar28->_padding_ = lVar3;
          pFVar28->_padding_ = lVar4;
          pFVar28->_padding_ = lVar5;
          pFVar28->_padding_ = lVar6;
          pFVar28->_padding_ = lVar7;
          pFVar28->_padding_ = lVar8;
          pFVar28->_padding_ = lVar9;
          pFVar28->_padding_ = lVar10;
          pFVar28->_padding_ = lVar11;
          pFVar28->_padding_ = lVar12;
          pFVar28->_padding_ = lVar13;
          pFVar28->_padding_ = lVar14;
          pFVar28->_padding_ = lVar15;
          pFVar28->_padding_ = lVar16;
          pFVar28->_padding_ = lVar17;
          pFVar28->U = fVar19;
          pFVar28->V = fVar20;
          pFVar24 = pFVar28;
LAB_14413e750:
          pFVar23 = pFVar24;
          pFVar24 = pFVar23 + 1;
          if (pFVar24 <= pFVar27) goto code_r0x00014413e759;
          goto LAB_14413e765;
        }
        if (pFVar28 < pFVar27) {
          pFVar1 = pFVar28 + 1;
          do {
            pFVar24 = pFVar28;
            if (pFVar1 <= pFVar27) {
              pFVar22 = pFVar1;
              if (0x1ff < ((longlong)pFVar27 + (0x80 - (longlong)pFVar1) & 0xffffffffffffff80U)) {
                do {
                  if (*(float *)&pFVar24->_padding_ < *(float *)&pFVar22->_padding_) {
                    pFVar24 = pFVar22;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[1]._padding_ &&
                      *(float *)&pFVar22[1]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 1;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[2]._padding_ &&
                      *(float *)&pFVar22[2]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 2;
                  }
                  if (*(float *)&pFVar24->_padding_ <= *(float *)&pFVar22[3]._padding_ &&
                      *(float *)&pFVar22[3]._padding_ != *(float *)&pFVar24->_padding_) {
                    pFVar24 = pFVar22 + 3;
                  }
                  pFVar22 = pFVar22 + 4;
                } while (pFVar22 <= pFVar27 + -3);
              }
              for (; pFVar22 <= pFVar27; pFVar22 = pFVar22 + 1) {
                if (*(float *)&pFVar24->_padding_ < *(float *)&pFVar22->_padding_) {
                  pFVar24 = pFVar22;
                }
              }
            }
            lVar2 = pFVar24->_padding_;
            lVar3 = pFVar24->_padding_;
            pFVar22 = pFVar27 + -1;
            lVar4 = pFVar24->_padding_;
            lVar5 = pFVar24->_padding_;
            lVar6 = pFVar24->_padding_;
            lVar7 = pFVar24->_padding_;
            lVar8 = pFVar27->_padding_;
            lVar9 = pFVar24->_padding_;
            lVar10 = pFVar24->_padding_;
            lVar11 = pFVar24->_padding_;
            lVar12 = pFVar24->_padding_;
            lVar13 = pFVar24->_padding_;
            lVar14 = pFVar24->_padding_;
            lVar15 = pFVar24->_padding_;
            lVar16 = pFVar24->_padding_;
            lVar17 = pFVar24->_padding_;
            fVar19 = pFVar24->U;
            fVar20 = pFVar24->V;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            lVar8 = pFVar27->_padding_;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->_padding_ = lVar8;
            fVar29 = pFVar27->U;
            fVar18 = pFVar27->V;
            pFVar24->_padding_ = pFVar27->_padding_;
            pFVar24->U = fVar29;
            pFVar24->V = fVar18;
            pFVar27->_padding_ = lVar2;
            pFVar27->_padding_ = lVar3;
            pFVar27->_padding_ = lVar4;
            pFVar27->_padding_ = lVar5;
            pFVar27->_padding_ = lVar6;
            pFVar27->_padding_ = lVar7;
            pFVar27->_padding_ = lVar9;
            pFVar27->_padding_ = lVar10;
            pFVar27->_padding_ = lVar11;
            pFVar27->_padding_ = lVar12;
            pFVar27->_padding_ = lVar13;
            pFVar27->_padding_ = lVar14;
            pFVar27->_padding_ = lVar15;
            pFVar27->_padding_ = lVar16;
            pFVar27->_padding_ = lVar17;
            pFVar27->U = fVar19;
            pFVar27->V = fVar20;
            pFVar27 = pFVar22;
          } while (pFVar28 < pFVar22);
        }
        goto LAB_14413e942;
      }
LAB_14413e931:
      local_378 = pFVar1;
      HeapSortInternal<ChaosInterface::FRaycastHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FRaycastHit,TLess<void>_>_>
                (pFVar24,iVar21,param_3,param_4);
LAB_14413e942:
      ppFVar25 = ppFVar25 + -3;
    } while (&local_368 <= ppFVar25);
  }
  return;
code_r0x00014413e759:
  if (*(float *)&pFVar23[1]._padding_ < *(float *)&pFVar28->_padding_ ||
      *(float *)&pFVar23[1]._padding_ == *(float *)&pFVar28->_padding_) goto LAB_14413e750;
LAB_14413e765:
  do {
    pFVar26 = pFVar22;
    pFVar22 = pFVar26 + -1;
    if (pFVar22 <= pFVar28) break;
  } while (*(float *)&pFVar28->_padding_ < *(float *)&pFVar26[-1]._padding_ ||
           *(float *)&pFVar28->_padding_ == *(float *)&pFVar26[-1]._padding_);
  lVar2 = pFVar26[-1]._padding_;
  if (pFVar24 <= pFVar22) {
    lVar3 = pFVar24->_padding_;
    lVar4 = pFVar23[1]._padding_;
    lVar5 = pFVar23[1]._padding_;
    lVar6 = pFVar23[1]._padding_;
    lVar7 = pFVar23[1]._padding_;
    lVar8 = pFVar23[1]._padding_;
    lVar9 = pFVar23[1]._padding_;
    lVar10 = pFVar23[1]._padding_;
    lVar11 = pFVar23[1]._padding_;
    lVar12 = pFVar23[1]._padding_;
    lVar13 = pFVar23[1]._padding_;
    lVar14 = pFVar23[1]._padding_;
    lVar15 = pFVar23[1]._padding_;
    lVar16 = pFVar23[1]._padding_;
    lVar17 = pFVar23[1]._padding_;
    fVar19 = pFVar23[1].U;
    fVar20 = pFVar23[1].V;
    pFVar24->_padding_ = pFVar22->_padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    lVar2 = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1]._padding_ = lVar2;
    fVar29 = pFVar26[-1].U;
    fVar18 = pFVar26[-1].V;
    pFVar23[1]._padding_ = pFVar26[-1]._padding_;
    pFVar23[1].U = fVar29;
    pFVar23[1].V = fVar18;
    pFVar22->_padding_ = lVar3;
    pFVar26[-1]._padding_ = lVar4;
    pFVar26[-1]._padding_ = lVar5;
    pFVar26[-1]._padding_ = lVar6;
    pFVar26[-1]._padding_ = lVar7;
    pFVar26[-1]._padding_ = lVar8;
    pFVar26[-1]._padding_ = lVar9;
    pFVar26[-1]._padding_ = lVar10;
    pFVar26[-1]._padding_ = lVar11;
    pFVar26[-1]._padding_ = lVar12;
    pFVar26[-1]._padding_ = lVar13;
    pFVar26[-1]._padding_ = lVar14;
    pFVar26[-1]._padding_ = lVar15;
    pFVar26[-1]._padding_ = lVar16;
    pFVar26[-1]._padding_ = lVar17;
    pFVar26[-1].U = fVar19;
    pFVar26[-1].V = fVar20;
    goto LAB_14413e750;
  }
  lVar3 = pFVar28->_padding_;
  lVar4 = pFVar28->_padding_;
  lVar5 = pFVar28->_padding_;
  lVar6 = pFVar28->_padding_;
  lVar7 = pFVar28->_padding_;
  lVar8 = pFVar28->_padding_;
  local_378._0_4_ = (int)local_378 + -1;
  lVar9 = pFVar28->_padding_;
  lVar10 = pFVar28->_padding_;
  lVar11 = pFVar28->_padding_;
  lVar12 = pFVar28->_padding_;
  lVar13 = pFVar28->_padding_;
  lVar14 = pFVar28->_padding_;
  lVar15 = pFVar28->_padding_;
  lVar16 = pFVar28->_padding_;
  lVar17 = pFVar28->_padding_;
  fVar19 = pFVar28->U;
  fVar20 = pFVar28->V;
  pFVar28->_padding_ = pFVar22->_padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  lVar2 = pFVar26[-1]._padding_;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->_padding_ = lVar2;
  fVar29 = pFVar26[-1].U;
  fVar18 = pFVar26[-1].V;
  pFVar28->_padding_ = pFVar26[-1]._padding_;
  pFVar28->U = fVar29;
  pFVar28->V = fVar18;
  pFVar22->_padding_ = lVar3;
  pFVar26[-1]._padding_ = lVar4;
  pFVar26[-1]._padding_ = lVar5;
  pFVar26[-1]._padding_ = lVar6;
  pFVar26[-1]._padding_ = lVar7;
  pFVar26[-1]._padding_ = lVar8;
  pFVar26[-1]._padding_ = lVar9;
  pFVar26[-1]._padding_ = lVar10;
  pFVar26[-1]._padding_ = lVar11;
  pFVar26[-1]._padding_ = lVar12;
  pFVar26[-1]._padding_ = lVar13;
  pFVar26[-1]._padding_ = lVar14;
  pFVar26[-1]._padding_ = lVar15;
  pFVar26[-1]._padding_ = lVar16;
  pFVar26[-1]._padding_ = lVar17;
  pFVar26[-1].U = fVar19;
  pFVar26[-1].V = fVar20;
  if ((longlong)((longlong)pFVar22 + (-0x80 - (longlong)pFVar28) & 0xffffffffffffff80U) <
      (longlong)((longlong)pFVar27 - (longlong)pFVar24 & 0xffffffffffffff80U)) {
    if (pFVar24 < pFVar27) {
      *ppFVar25 = pFVar24;
      ppFVar25[1] = pFVar27;
      *(int *)(ppFVar25 + 2) = (int)local_378;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar22 <= pFVar28 + 1) goto LAB_14413e942;
    pFVar27 = pFVar26 + -2;
    pFVar24 = pFVar28;
  }
  else {
    if (pFVar28 + 1 < pFVar22) {
      *ppFVar25 = pFVar28;
      ppFVar25[1] = pFVar26 + -2;
      *(int *)(ppFVar25 + 2) = (int)local_378;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar27 <= pFVar24) goto LAB_14413e942;
  }
  iVar21 = (int)((longlong)pFVar27 - (longlong)pFVar24 >> 7) + 1;
  pFVar28 = pFVar24;
  if ((int)local_378 == 0) goto LAB_14413e931;
  goto LAB_14413e6a0;
}

// IntroSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_> @ 14413eaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_>
          (FSweepHit *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_> param_4)

{
  FSweepHit *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FSweepHit *pFVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  FSweepHit *pFVar22;
  FSweepHit *pFVar23;
  FSweepHit *pFVar24;
  FSweepHit *pFVar25;
  FSweepHit *pFVar26;
  FSweepHit **ppFVar27;
  float fVar28;
  undefined1 auStack_3b8 [48];
  FSweepHit *local_388;
  FSweepHit *local_378;
  FSweepHit *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar28;
    memset(local_360,0,0x2e8);
    ppFVar27 = &local_378;
    do {
      pFVar23 = ppFVar27[1];
      pFVar18 = *ppFVar27;
      pFVar1 = ppFVar27[2];
      local_388._0_4_ = (int)pFVar1;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),
                      8) + ((longlong)pFVar23 - (longlong)pFVar18);
      iVar19 = ((int)(lVar20 >> 6) - (int)(lVar20 >> 0x3f)) + 1;
      pFVar26 = pFVar18;
      if ((int)local_388 != 0) {
LAB_14413ebe0:
        if (8 < iVar19) {
          uVar3 = *(undefined8 *)&pFVar26->field_0x8;
          pFVar22 = pFVar23 + 1;
          pFVar18 = pFVar26 + iVar19 / 2;
          uVar4 = *(undefined8 *)pFVar18;
          uVar5 = *(undefined8 *)&pFVar18->field_0x8;
          uVar6 = *(undefined8 *)&pFVar18->field_0x10;
          uVar7 = *(undefined8 *)&pFVar18->field_0x18;
          uVar8 = *(undefined8 *)&pFVar18->field_0x20;
          uVar9 = *(undefined8 *)&pFVar18->field_0x28;
          uVar10 = *(undefined8 *)&pFVar18->field_0x30;
          uVar11 = *(undefined8 *)&pFVar18->field_0x38;
          uVar12 = *(undefined8 *)&pFVar18->field_0x40;
          uVar13 = *(undefined8 *)&pFVar18->field_0x48;
          uVar14 = *(undefined8 *)&pFVar18->field_0x50;
          uVar15 = *(undefined8 *)&pFVar18->field_0x58;
          uVar16 = *(undefined8 *)&pFVar18->field_0x60;
          uVar17 = *(undefined8 *)&pFVar18->field_0x68;
          uVar2 = *(undefined8 *)&pFVar18->field_0x70;
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar26;
          *(undefined8 *)&pFVar18->field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x18;
          *(undefined8 *)&pFVar18->field_0x10 = *(undefined8 *)&pFVar26->field_0x10;
          *(undefined8 *)&pFVar18->field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x28;
          *(undefined8 *)&pFVar18->field_0x20 = *(undefined8 *)&pFVar26->field_0x20;
          *(undefined8 *)&pFVar18->field_0x28 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x38;
          *(undefined8 *)&pFVar18->field_0x30 = *(undefined8 *)&pFVar26->field_0x30;
          *(undefined8 *)&pFVar18->field_0x38 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x48;
          *(undefined8 *)&pFVar18->field_0x40 = *(undefined8 *)&pFVar26->field_0x40;
          *(undefined8 *)&pFVar18->field_0x48 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x58;
          *(undefined8 *)&pFVar18->field_0x50 = *(undefined8 *)&pFVar26->field_0x50;
          *(undefined8 *)&pFVar18->field_0x58 = uVar3;
          uVar3 = *(undefined8 *)&pFVar26->field_0x68;
          *(undefined8 *)&pFVar18->field_0x60 = *(undefined8 *)&pFVar26->field_0x60;
          *(undefined8 *)&pFVar18->field_0x68 = uVar3;
          *(undefined8 *)&pFVar18->field_0x70 = *(undefined8 *)&pFVar26->field_0x70;
          *(undefined8 *)pFVar26 = uVar4;
          *(undefined8 *)&pFVar26->field_0x8 = uVar5;
          *(undefined8 *)&pFVar26->field_0x10 = uVar6;
          *(undefined8 *)&pFVar26->field_0x18 = uVar7;
          *(undefined8 *)&pFVar26->field_0x20 = uVar8;
          *(undefined8 *)&pFVar26->field_0x28 = uVar9;
          *(undefined8 *)&pFVar26->field_0x30 = uVar10;
          *(undefined8 *)&pFVar26->field_0x38 = uVar11;
          *(undefined8 *)&pFVar26->field_0x40 = uVar12;
          *(undefined8 *)&pFVar26->field_0x48 = uVar13;
          *(undefined8 *)&pFVar26->field_0x50 = uVar14;
          *(undefined8 *)&pFVar26->field_0x58 = uVar15;
          *(undefined8 *)&pFVar26->field_0x60 = uVar16;
          *(undefined8 *)&pFVar26->field_0x68 = uVar17;
          *(undefined8 *)&pFVar26->field_0x70 = uVar2;
          pFVar18 = pFVar26;
LAB_14413ec93:
          pFVar24 = pFVar18;
          pFVar18 = pFVar24 + 1;
          if (pFVar18 <= pFVar23) goto code_r0x00014413ec9c;
          goto LAB_14413ecb0;
        }
        if (pFVar26 < pFVar23) {
          pFVar1 = pFVar26 + 1;
          do {
            pFVar18 = pFVar26;
            if (pFVar1 <= pFVar23) {
              pFVar22 = pFVar1;
              if (0x1df < (ulonglong)((longlong)pFVar23 + (0x78 - (longlong)pFVar1))) {
                do {
                  if (*(float *)&pFVar18->field_0x70 < *(float *)&pFVar22->field_0x70) {
                    pFVar18 = pFVar22;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[1].field_0x70 &&
                      *(float *)&pFVar22[1].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 1;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[2].field_0x70 &&
                      *(float *)&pFVar22[2].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 2;
                  }
                  if (*(float *)&pFVar18->field_0x70 <= *(float *)&pFVar22[3].field_0x70 &&
                      *(float *)&pFVar22[3].field_0x70 != *(float *)&pFVar18->field_0x70) {
                    pFVar18 = pFVar22 + 3;
                  }
                  pFVar22 = pFVar22 + 4;
                } while (pFVar22 <= pFVar23 + -3);
              }
              for (; pFVar22 <= pFVar23; pFVar22 = pFVar22 + 1) {
                if (*(float *)&pFVar18->field_0x70 < *(float *)&pFVar22->field_0x70) {
                  pFVar18 = pFVar22;
                }
              }
            }
            uVar3 = *(undefined8 *)pFVar18;
            uVar4 = *(undefined8 *)&pFVar18->field_0x8;
            pFVar22 = pFVar23 + -1;
            uVar2 = *(undefined8 *)&pFVar18->field_0x70;
            uVar5 = *(undefined8 *)&pFVar18->field_0x10;
            uVar6 = *(undefined8 *)&pFVar18->field_0x18;
            uVar7 = *(undefined8 *)&pFVar23->field_0x8;
            uVar8 = *(undefined8 *)&pFVar18->field_0x20;
            uVar9 = *(undefined8 *)&pFVar18->field_0x28;
            uVar10 = *(undefined8 *)&pFVar18->field_0x30;
            uVar11 = *(undefined8 *)&pFVar18->field_0x38;
            uVar12 = *(undefined8 *)&pFVar18->field_0x40;
            uVar13 = *(undefined8 *)&pFVar18->field_0x48;
            uVar14 = *(undefined8 *)&pFVar18->field_0x50;
            uVar15 = *(undefined8 *)&pFVar18->field_0x58;
            uVar16 = *(undefined8 *)&pFVar18->field_0x60;
            uVar17 = *(undefined8 *)&pFVar18->field_0x68;
            *(undefined8 *)pFVar18 = *(undefined8 *)pFVar23;
            *(undefined8 *)&pFVar18->field_0x8 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x18;
            *(undefined8 *)&pFVar18->field_0x10 = *(undefined8 *)&pFVar23->field_0x10;
            *(undefined8 *)&pFVar18->field_0x18 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x28;
            *(undefined8 *)&pFVar18->field_0x20 = *(undefined8 *)&pFVar23->field_0x20;
            *(undefined8 *)&pFVar18->field_0x28 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x38;
            *(undefined8 *)&pFVar18->field_0x30 = *(undefined8 *)&pFVar23->field_0x30;
            *(undefined8 *)&pFVar18->field_0x38 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x48;
            *(undefined8 *)&pFVar18->field_0x40 = *(undefined8 *)&pFVar23->field_0x40;
            *(undefined8 *)&pFVar18->field_0x48 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x58;
            *(undefined8 *)&pFVar18->field_0x50 = *(undefined8 *)&pFVar23->field_0x50;
            *(undefined8 *)&pFVar18->field_0x58 = uVar7;
            uVar7 = *(undefined8 *)&pFVar23->field_0x68;
            *(undefined8 *)&pFVar18->field_0x60 = *(undefined8 *)&pFVar23->field_0x60;
            *(undefined8 *)&pFVar18->field_0x68 = uVar7;
            *(undefined8 *)&pFVar18->field_0x70 = *(undefined8 *)&pFVar23->field_0x70;
            *(undefined8 *)pFVar23 = uVar3;
            *(undefined8 *)&pFVar23->field_0x8 = uVar4;
            *(undefined8 *)&pFVar23->field_0x10 = uVar5;
            *(undefined8 *)&pFVar23->field_0x18 = uVar6;
            *(undefined8 *)&pFVar23->field_0x20 = uVar8;
            *(undefined8 *)&pFVar23->field_0x28 = uVar9;
            *(undefined8 *)&pFVar23->field_0x30 = uVar10;
            *(undefined8 *)&pFVar23->field_0x38 = uVar11;
            *(undefined8 *)&pFVar23->field_0x40 = uVar12;
            *(undefined8 *)&pFVar23->field_0x48 = uVar13;
            *(undefined8 *)&pFVar23->field_0x50 = uVar14;
            *(undefined8 *)&pFVar23->field_0x58 = uVar15;
            *(undefined8 *)&pFVar23->field_0x60 = uVar16;
            *(undefined8 *)&pFVar23->field_0x68 = uVar17;
            *(undefined8 *)&pFVar23->field_0x70 = uVar2;
            pFVar23 = pFVar22;
          } while (pFVar26 < pFVar22);
        }
        goto LAB_14413eed3;
      }
LAB_14413eec4:
      local_388 = pFVar1;
      HeapSortInternal<ChaosInterface::FSweepHit,int,FIdentityFunctor,TDereferenceWrapper<ChaosInterface::FSweepHit,TLess<void>_>_>
                (pFVar18,iVar19,param_3,param_4);
LAB_14413eed3:
      ppFVar27 = ppFVar27 + -3;
    } while (&local_378 <= ppFVar27);
  }
  return;
code_r0x00014413ec9c:
  if (*(float *)&pFVar24[1].field_0x70 < *(float *)&pFVar26->field_0x70 ||
      *(float *)&pFVar24[1].field_0x70 == *(float *)&pFVar26->field_0x70) goto LAB_14413ec93;
LAB_14413ecb0:
  do {
    pFVar25 = pFVar22;
    pFVar22 = pFVar25 + -1;
    if (pFVar22 <= pFVar26) break;
  } while (*(float *)&pFVar26->field_0x70 < *(float *)&pFVar25[-1].field_0x70 ||
           *(float *)&pFVar26->field_0x70 == *(float *)&pFVar25[-1].field_0x70);
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x8;
  if (pFVar18 <= pFVar22) {
    uVar4 = *(undefined8 *)pFVar18;
    uVar5 = *(undefined8 *)&pFVar24[1].field_0x8;
    uVar6 = *(undefined8 *)&pFVar24[1].field_0x10;
    uVar7 = *(undefined8 *)&pFVar24[1].field_0x18;
    uVar8 = *(undefined8 *)&pFVar24[1].field_0x20;
    uVar9 = *(undefined8 *)&pFVar24[1].field_0x28;
    uVar10 = *(undefined8 *)&pFVar24[1].field_0x30;
    uVar11 = *(undefined8 *)&pFVar24[1].field_0x38;
    uVar12 = *(undefined8 *)&pFVar24[1].field_0x40;
    uVar13 = *(undefined8 *)&pFVar24[1].field_0x48;
    uVar14 = *(undefined8 *)&pFVar24[1].field_0x50;
    uVar15 = *(undefined8 *)&pFVar24[1].field_0x58;
    uVar16 = *(undefined8 *)&pFVar24[1].field_0x60;
    uVar17 = *(undefined8 *)&pFVar24[1].field_0x68;
    uVar3 = *(undefined8 *)&pFVar24[1].field_0x70;
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar22;
    *(undefined8 *)&pFVar24[1].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x18;
    *(undefined8 *)&pFVar24[1].field_0x10 = *(undefined8 *)&pFVar25[-1].field_0x10;
    *(undefined8 *)&pFVar24[1].field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x28;
    *(undefined8 *)&pFVar24[1].field_0x20 = *(undefined8 *)&pFVar25[-1].field_0x20;
    *(undefined8 *)&pFVar24[1].field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x38;
    *(undefined8 *)&pFVar24[1].field_0x30 = *(undefined8 *)&pFVar25[-1].field_0x30;
    *(undefined8 *)&pFVar24[1].field_0x38 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x48;
    *(undefined8 *)&pFVar24[1].field_0x40 = *(undefined8 *)&pFVar25[-1].field_0x40;
    *(undefined8 *)&pFVar24[1].field_0x48 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x58;
    *(undefined8 *)&pFVar24[1].field_0x50 = *(undefined8 *)&pFVar25[-1].field_0x50;
    *(undefined8 *)&pFVar24[1].field_0x58 = uVar2;
    uVar2 = *(undefined8 *)&pFVar25[-1].field_0x68;
    *(undefined8 *)&pFVar24[1].field_0x60 = *(undefined8 *)&pFVar25[-1].field_0x60;
    *(undefined8 *)&pFVar24[1].field_0x68 = uVar2;
    *(undefined8 *)&pFVar24[1].field_0x70 = *(undefined8 *)&pFVar25[-1].field_0x70;
    *(undefined8 *)pFVar22 = uVar4;
    *(undefined8 *)&pFVar25[-1].field_0x8 = uVar5;
    *(undefined8 *)&pFVar25[-1].field_0x10 = uVar6;
    *(undefined8 *)&pFVar25[-1].field_0x18 = uVar7;
    *(undefined8 *)&pFVar25[-1].field_0x20 = uVar8;
    *(undefined8 *)&pFVar25[-1].field_0x28 = uVar9;
    *(undefined8 *)&pFVar25[-1].field_0x30 = uVar10;
    *(undefined8 *)&pFVar25[-1].field_0x38 = uVar11;
    *(undefined8 *)&pFVar25[-1].field_0x40 = uVar12;
    *(undefined8 *)&pFVar25[-1].field_0x48 = uVar13;
    *(undefined8 *)&pFVar25[-1].field_0x50 = uVar14;
    *(undefined8 *)&pFVar25[-1].field_0x58 = uVar15;
    *(undefined8 *)&pFVar25[-1].field_0x60 = uVar16;
    *(undefined8 *)&pFVar25[-1].field_0x68 = uVar17;
    *(undefined8 *)&pFVar25[-1].field_0x70 = uVar3;
    goto LAB_14413ec93;
  }
  uVar4 = *(undefined8 *)pFVar26;
  uVar5 = *(undefined8 *)&pFVar26->field_0x8;
  uVar6 = *(undefined8 *)&pFVar26->field_0x10;
  uVar7 = *(undefined8 *)&pFVar26->field_0x18;
  local_388._0_4_ = (int)local_388 + -1;
  uVar8 = *(undefined8 *)&pFVar26->field_0x20;
  uVar9 = *(undefined8 *)&pFVar26->field_0x28;
  lVar20 = (longlong)pFVar22 + (-0x78 - (longlong)pFVar26);
  uVar10 = *(undefined8 *)&pFVar26->field_0x30;
  uVar11 = *(undefined8 *)&pFVar26->field_0x38;
  uVar12 = *(undefined8 *)&pFVar26->field_0x40;
  uVar13 = *(undefined8 *)&pFVar26->field_0x48;
  uVar14 = *(undefined8 *)&pFVar26->field_0x50;
  uVar15 = *(undefined8 *)&pFVar26->field_0x58;
  uVar16 = *(undefined8 *)&pFVar26->field_0x60;
  uVar17 = *(undefined8 *)&pFVar26->field_0x68;
  uVar3 = *(undefined8 *)&pFVar26->field_0x70;
  *(undefined8 *)pFVar26 = *(undefined8 *)pFVar22;
  *(undefined8 *)&pFVar26->field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x18;
  *(undefined8 *)&pFVar26->field_0x10 = *(undefined8 *)&pFVar25[-1].field_0x10;
  *(undefined8 *)&pFVar26->field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x28;
  *(undefined8 *)&pFVar26->field_0x20 = *(undefined8 *)&pFVar25[-1].field_0x20;
  *(undefined8 *)&pFVar26->field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x38;
  lVar20 = lVar20 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar20),8);
  *(undefined8 *)&pFVar26->field_0x30 = *(undefined8 *)&pFVar25[-1].field_0x30;
  *(undefined8 *)&pFVar26->field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x48;
  *(undefined8 *)&pFVar26->field_0x40 = *(undefined8 *)&pFVar25[-1].field_0x40;
  *(undefined8 *)&pFVar26->field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x58;
  *(undefined8 *)&pFVar26->field_0x50 = *(undefined8 *)&pFVar25[-1].field_0x50;
  *(undefined8 *)&pFVar26->field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&pFVar25[-1].field_0x68;
  *(undefined8 *)&pFVar26->field_0x60 = *(undefined8 *)&pFVar25[-1].field_0x60;
  *(undefined8 *)&pFVar26->field_0x68 = uVar2;
  lVar21 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),8) +
           ((longlong)pFVar23 - (longlong)pFVar18);
  *(undefined8 *)&pFVar26->field_0x70 = *(undefined8 *)&pFVar25[-1].field_0x70;
  *(undefined8 *)pFVar22 = uVar4;
  *(undefined8 *)&pFVar25[-1].field_0x8 = uVar5;
  *(undefined8 *)&pFVar25[-1].field_0x10 = uVar6;
  *(undefined8 *)&pFVar25[-1].field_0x18 = uVar7;
  *(undefined8 *)&pFVar25[-1].field_0x20 = uVar8;
  *(undefined8 *)&pFVar25[-1].field_0x28 = uVar9;
  *(undefined8 *)&pFVar25[-1].field_0x30 = uVar10;
  *(undefined8 *)&pFVar25[-1].field_0x38 = uVar11;
  *(undefined8 *)&pFVar25[-1].field_0x40 = uVar12;
  *(undefined8 *)&pFVar25[-1].field_0x48 = uVar13;
  *(undefined8 *)&pFVar25[-1].field_0x50 = uVar14;
  *(undefined8 *)&pFVar25[-1].field_0x58 = uVar15;
  *(undefined8 *)&pFVar25[-1].field_0x60 = uVar16;
  *(undefined8 *)&pFVar25[-1].field_0x68 = uVar17;
  *(undefined8 *)&pFVar25[-1].field_0x70 = uVar3;
  if ((lVar20 >> 6) - (lVar20 >> 0x3f) < (lVar21 >> 6) - (lVar21 >> 0x3f)) {
    if (pFVar18 < pFVar23) {
      *ppFVar27 = pFVar18;
      ppFVar27[1] = pFVar23;
      *(int *)(ppFVar27 + 2) = (int)local_388;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar22 <= pFVar26 + 1) goto LAB_14413eed3;
    pFVar23 = pFVar25 + -2;
    pFVar18 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar22) {
      *ppFVar27 = pFVar26;
      ppFVar27[1] = pFVar25 + -2;
      *(int *)(ppFVar27 + 2) = (int)local_388;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar23 <= pFVar18) goto LAB_14413eed3;
  }
  lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar23 - (longlong)pFVar18),8) +
           ((longlong)pFVar23 - (longlong)pFVar18);
  iVar19 = ((int)(lVar20 >> 6) - (int)(lVar20 >> 0x3f)) + 1;
  pFVar26 = pFVar18;
  if ((int)local_388 == 0) goto LAB_14413eec4;
  goto LAB_14413ebe0;
}

// OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 14413f1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TBox<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TBox<double,3> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TBox<double,3> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = (*(double *)&(param_1->AABB).MMax - *(double *)&(param_1->AABB).MMin) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = (*(double *)&(param_1->AABB).MMax.field_0x8 -
                  *(double *)&(param_1->AABB).MMin.field_0x8) * __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = (*(double *)&(param_1->AABB).MMax.field_0x10 -
                  *(double *)&(param_1->AABB).MMin.field_0x10) * __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 14413f630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TBox<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TBox<double,3> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TBox<double,3> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = (*(double *)&(param_1->AABB).MMax - *(double *)&(param_1->AABB).MMin) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = (*(double *)&(param_1->AABB).MMax.field_0x8 -
                  *(double *)&(param_1->AABB).MMin.field_0x8) * __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = (*(double *)&(param_1->AABB).MMax.field_0x10 -
                  *(double *)&(param_1->AABB).MMin.field_0x10) * __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 14413fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 14413feb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 1441402f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144140730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 144140b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144140fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 1441413f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144141830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_388 [32];
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_358,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_358._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_358._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_348), iVar4 != 0)) &&
     (((iVar4 = _finite(local_340), iVar4 != 0 && (iVar4 = _finite(dStack_338), iVar4 != 0)) &&
      (iVar4 = _finite(local_330), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_340;
      dStack_c8 = dStack_338;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_330;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_358._0_8_;
      dStack_e0 = (double)local_358._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_340 - (double)local_358._0_8_) * __real_3fe0000000000000 +
                 (double)local_358._0_8_;
      local_158 = param_6;
      local_a8 = (local_330 - local_348) * __real_3fe0000000000000 + local_348;
      local_d8 = local_348;
      local_b0 = (dStack_338 - (double)local_358._8_8_) * __real_3fe0000000000000 +
                 (double)local_358._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c8 = &
                  ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_276 = bVar5 >> 4 & 1;
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_278 = 0;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_290 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_258 = (param_5->data).word2;
      local_288 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_254 = (param_5->data).word3;
      local_280 = ((double)param_1->_padding_ - (double)param_1->_padding_) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      pppuVar6 = &local_2c8;
      local_268 = param_5;
      local_248 = param_6;
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_358,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 144141c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (TSphere<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  int iVar14;
  byte bVar15;
  undefined ***pppuVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_368 [32];
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  undefined1 local_308 [16];
  double local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined **local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined2 local_268;
  byte local_266;
  FQueryDebugParams local_265;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_260;
  FChaosQueryFilterData *local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  TSphere<double,3> *local_240;
  ICollisionQueryFilterCallbackBase *local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  undefined **local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined2 local_190;
  byte local_18e;
  FQueryDebugParams local_18d;
  double local_188;
  double dStack_180;
  double local_178;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_170;
  FChaosQueryFilterData *local_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  TSphere<double,3> *local_150;
  ICollisionQueryFilterCallbackBase *local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_368;
  auVar19 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  auVar22 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar26 = auVar19._8_8_;
  dVar17 = (double)*(float *)&(param_1->Center).field_0x4;
  local_2f8 = (double)*(float *)&(param_1->Center).field_0x8;
  dVar10 = (param_3->Scale3D).XY.m128d_f64[0] * (double)*(float *)&param_1->Center;
  dVar11 = (param_3->Scale3D).XY.m128d_f64[1] * dVar17;
  uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
  local_308._8_4_ = SUB84(dVar17,0);
  local_308._0_8_ = (double)*(float *)&param_1->Center;
  local_308._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar6 = local_2f8 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = auVar19._0_8_;
  dVar17 = auVar22._8_8_;
  auVar29._8_4_ = SUB84(dVar11,0);
  auVar29._0_8_ = dVar10;
  auVar29._12_4_ = uVar27;
  auVar25 = blendpd(auVar22,auVar19,2);
  auVar30._0_8_ = auVar29._8_8_ * auVar22._0_8_ - dVar17 * dVar10;
  auVar30._8_8_ = dVar6 * dVar17 - dVar8 * dVar11;
  auVar18._8_4_ = SUB84(dVar11,0);
  auVar18._0_8_ = dVar10;
  auVar18._12_4_ = uVar27;
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar6;
  auVar19._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19 = blendpd(auVar18,auVar19,2);
  auVar20._0_8_ = auVar19._0_8_ * dVar8 - auVar25._0_8_ * dVar6;
  auVar20._8_8_ = auVar19._8_8_ * dVar26 - auVar25._8_8_ * dVar7;
  auVar19 = blendpd(auVar30,auVar20,2);
  dVar7 = auVar30._8_8_ + auVar30._8_8_;
  dVar9 = auVar20._0_8_ + auVar20._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar31._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar31._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar23._8_4_ = SUB84(dVar9,0);
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar27;
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = uVar27;
  auVar19 = blendpd(auVar21,auVar31,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar22._0_8_ - dVar7 * dVar17;
  auVar24._8_8_ = auVar31._0_8_ * dVar17 - dVar9 * dVar8;
  auVar22._0_8_ = auVar19._0_8_ * dVar8 - auVar31._0_8_ * auVar25._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * dVar26 - auVar31._8_8_ * auVar25._8_8_;
  local_328 = (double)*(float *)&param_1->_padding_;
  auVar19 = blendpd(auVar24,auVar22,2);
  local_338 = dVar7 * dVar26 + dVar10 + auVar24._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar17 = dVar9 * dVar26 + dVar11 + auVar22._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar27 = SUB84(dVar17,0);
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_2e0 = auVar31._0_8_ * dVar26 + dVar6 + auVar19._0_8_ +
              (param_3->Translation).ZW.m128d_f64[0];
  auVar12._4_8_ = auVar22._8_8_;
  auVar12._0_4_ = (int)((ulonglong)local_338 >> 0x20);
  auVar25._0_8_ = auVar12._0_8_ << 0x20;
  auVar25._8_4_ = uVar27;
  auVar25._12_4_ = uVar28;
  local_320 = local_328 + local_338;
  dStack_318 = local_328 + auVar25._8_8_;
  local_2f0._8_4_ = uVar27;
  local_2f0._0_8_ = local_338;
  local_2f0._12_4_ = uVar28;
  dStack_330 = auVar25._8_8_ - local_328;
  local_338 = local_338 - local_328;
  local_310 = local_328 + local_2e0;
  local_328 = local_2e0 - local_328;
  local_2d8 = local_320;
  dStack_2d0 = dStack_318;
  local_2c8 = local_310;
  iVar14 = _finite(local_338);
  if ((((iVar14 != 0) && (iVar14 = _finite(dStack_330), iVar14 != 0)) &&
      (iVar14 = _finite(local_328), iVar14 != 0)) &&
     (((iVar14 = _finite(local_320), iVar14 != 0 && (iVar14 = _finite(dStack_318), iVar14 != 0)) &&
      (iVar14 = _finite(local_310), iVar14 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar4 = (param_5->flags).mBits;
    bVar15 = (byte)uVar4;
    if ((uVar4 & 0x40) == 0) {
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1c8 = &
                  ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_120 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_138 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_130 = (param_3->Rotation).XY.m128d_f64[1];
      local_190 = 0;
      local_168 = param_5;
      local_18e = bVar15 >> 4 & 1;
      local_18d = *param_7;
      local_160 = (param_5->data).word0;
      local_15c = (param_5->data).word1;
      local_158 = (param_5->data).word2;
      local_154 = (param_5->data).word3;
      local_108 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_100 = (param_3->Translation).ZW.m128d_f64[1];
      local_e8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_e0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_118 = (param_3->Translation).XY.m128d_f64[0];
      dStack_110 = (param_3->Translation).XY.m128d_f64[1];
      local_c0 = local_320;
      dStack_b8 = dStack_318;
      pppuVar16 = &local_1c8;
      local_f8 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).XY.m128d_f64[1];
      local_c8 = local_328;
      local_b0 = local_310;
      local_d8 = local_338;
      dStack_d0 = dStack_330;
      local_148 = param_6;
      local_a8 = (local_320 - local_338) * __real_3fe0000000000000 + local_338;
      local_a0 = (dStack_318 - dStack_330) * __real_3fe0000000000000 + dStack_330;
      local_98 = (local_310 - local_328) * __real_3fe0000000000000 + local_328;
      local_170 = param_4;
      local_150 = param_1;
    }
    else {
      fVar1 = *(float *)&param_1->_padding_;
      fVar2 = *(float *)&(param_1->Center).field_0x4;
      fVar3 = *(float *)&(param_1->Center).field_0x8;
      local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b8 = &
                  ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_268 = 0;
      local_266 = bVar15 >> 4 & 1;
      pppuVar16 = &local_2b8;
      local_265 = *param_7;
      local_250 = (param_5->data).word0;
      local_24c = (param_5->data).word1;
      local_248 = (param_5->data).word2;
      local_244 = (param_5->data).word3;
      local_258 = param_5;
      local_238 = param_6;
      local_280 = ((double)(*(float *)&param_1->Center + fVar1) -
                  (double)(*(float *)&param_1->Center - fVar1)) * __real_3fe0000000000000;
      local_278 = ((double)(fVar2 + fVar1) - (double)(fVar2 - fVar1)) * __real_3fe0000000000000;
      local_228 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_220 = (param_3->Rotation).XY.m128d_f64[1];
      local_208 = (param_3->Translation).XY.m128d_f64[0];
      dStack_200 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_270 = ((double)(fVar3 + fVar1) - (double)(fVar3 - fVar1)) * __real_3fe0000000000000;
      local_218 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_210 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1f8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_1f0 = (param_3->Translation).ZW.m128d_f64[1];
      local_1d8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_1d0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_260 = param_4;
      local_240 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,&local_338,pppuVar16);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1732238023615054511>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                      ,0x2af,"bIsValid");
  if (!bVar13) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144142230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (TSphere<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  int iVar14;
  byte bVar15;
  undefined ***pppuVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_368 [32];
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  undefined1 local_308 [16];
  double local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined **local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined2 local_268;
  byte local_266;
  FQueryDebugParams local_265;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_260;
  FChaosQueryFilterData *local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  TSphere<double,3> *local_240;
  ICollisionQueryFilterCallbackBase *local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  undefined **local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined2 local_190;
  byte local_18e;
  FQueryDebugParams local_18d;
  double local_188;
  double dStack_180;
  double local_178;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_170;
  FChaosQueryFilterData *local_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  TSphere<double,3> *local_150;
  ICollisionQueryFilterCallbackBase *local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_368;
  auVar19 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  auVar22 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar26 = auVar19._8_8_;
  dVar17 = (double)*(float *)&(param_1->Center).field_0x4;
  local_2f8 = (double)*(float *)&(param_1->Center).field_0x8;
  dVar10 = (param_3->Scale3D).XY.m128d_f64[0] * (double)*(float *)&param_1->Center;
  dVar11 = (param_3->Scale3D).XY.m128d_f64[1] * dVar17;
  uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
  local_308._8_4_ = SUB84(dVar17,0);
  local_308._0_8_ = (double)*(float *)&param_1->Center;
  local_308._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar6 = local_2f8 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = auVar19._0_8_;
  dVar17 = auVar22._8_8_;
  auVar29._8_4_ = SUB84(dVar11,0);
  auVar29._0_8_ = dVar10;
  auVar29._12_4_ = uVar27;
  auVar25 = blendpd(auVar22,auVar19,2);
  auVar30._0_8_ = auVar29._8_8_ * auVar22._0_8_ - dVar17 * dVar10;
  auVar30._8_8_ = dVar6 * dVar17 - dVar8 * dVar11;
  auVar18._8_4_ = SUB84(dVar11,0);
  auVar18._0_8_ = dVar10;
  auVar18._12_4_ = uVar27;
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar6;
  auVar19._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19 = blendpd(auVar18,auVar19,2);
  auVar20._0_8_ = auVar19._0_8_ * dVar8 - auVar25._0_8_ * dVar6;
  auVar20._8_8_ = auVar19._8_8_ * dVar26 - auVar25._8_8_ * dVar7;
  auVar19 = blendpd(auVar30,auVar20,2);
  dVar7 = auVar30._8_8_ + auVar30._8_8_;
  dVar9 = auVar20._0_8_ + auVar20._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar31._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar31._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar23._8_4_ = SUB84(dVar9,0);
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar27;
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = uVar27;
  auVar19 = blendpd(auVar21,auVar31,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar22._0_8_ - dVar7 * dVar17;
  auVar24._8_8_ = auVar31._0_8_ * dVar17 - dVar9 * dVar8;
  auVar22._0_8_ = auVar19._0_8_ * dVar8 - auVar31._0_8_ * auVar25._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * dVar26 - auVar31._8_8_ * auVar25._8_8_;
  local_328 = (double)*(float *)&param_1->_padding_;
  auVar19 = blendpd(auVar24,auVar22,2);
  local_338 = dVar7 * dVar26 + dVar10 + auVar24._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar17 = dVar9 * dVar26 + dVar11 + auVar22._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  uVar27 = SUB84(dVar17,0);
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_2e0 = auVar31._0_8_ * dVar26 + dVar6 + auVar19._0_8_ +
              (param_3->Translation).ZW.m128d_f64[0];
  auVar12._4_8_ = auVar22._8_8_;
  auVar12._0_4_ = (int)((ulonglong)local_338 >> 0x20);
  auVar25._0_8_ = auVar12._0_8_ << 0x20;
  auVar25._8_4_ = uVar27;
  auVar25._12_4_ = uVar28;
  local_320 = local_328 + local_338;
  dStack_318 = local_328 + auVar25._8_8_;
  local_2f0._8_4_ = uVar27;
  local_2f0._0_8_ = local_338;
  local_2f0._12_4_ = uVar28;
  dStack_330 = auVar25._8_8_ - local_328;
  local_338 = local_338 - local_328;
  local_310 = local_328 + local_2e0;
  local_328 = local_2e0 - local_328;
  local_2d8 = local_320;
  dStack_2d0 = dStack_318;
  local_2c8 = local_310;
  iVar14 = _finite(local_338);
  if ((((iVar14 != 0) && (iVar14 = _finite(dStack_330), iVar14 != 0)) &&
      (iVar14 = _finite(local_328), iVar14 != 0)) &&
     (((iVar14 = _finite(local_320), iVar14 != 0 && (iVar14 = _finite(dStack_318), iVar14 != 0)) &&
      (iVar14 = _finite(local_310), iVar14 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar4 = (param_5->flags).mBits;
    bVar15 = (byte)uVar4;
    if ((uVar4 & 0x40) == 0) {
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1c8 = &
                  ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_120 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_138 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_130 = (param_3->Rotation).XY.m128d_f64[1];
      local_190 = 0;
      local_168 = param_5;
      local_18e = bVar15 >> 4 & 1;
      local_18d = *param_7;
      local_160 = (param_5->data).word0;
      local_15c = (param_5->data).word1;
      local_158 = (param_5->data).word2;
      local_154 = (param_5->data).word3;
      local_108 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_100 = (param_3->Translation).ZW.m128d_f64[1];
      local_e8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_e0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_118 = (param_3->Translation).XY.m128d_f64[0];
      dStack_110 = (param_3->Translation).XY.m128d_f64[1];
      local_c0 = local_320;
      dStack_b8 = dStack_318;
      pppuVar16 = &local_1c8;
      local_f8 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).XY.m128d_f64[1];
      local_c8 = local_328;
      local_b0 = local_310;
      local_d8 = local_338;
      dStack_d0 = dStack_330;
      local_148 = param_6;
      local_a8 = (local_320 - local_338) * __real_3fe0000000000000 + local_338;
      local_a0 = (dStack_318 - dStack_330) * __real_3fe0000000000000 + dStack_330;
      local_98 = (local_310 - local_328) * __real_3fe0000000000000 + local_328;
      local_170 = param_4;
      local_150 = param_1;
    }
    else {
      fVar1 = *(float *)&param_1->_padding_;
      fVar2 = *(float *)&(param_1->Center).field_0x4;
      fVar3 = *(float *)&(param_1->Center).field_0x8;
      local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b8 = &
                  ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_268 = 0;
      local_266 = bVar15 >> 4 & 1;
      pppuVar16 = &local_2b8;
      local_265 = *param_7;
      local_250 = (param_5->data).word0;
      local_24c = (param_5->data).word1;
      local_248 = (param_5->data).word2;
      local_244 = (param_5->data).word3;
      local_258 = param_5;
      local_238 = param_6;
      local_280 = ((double)(*(float *)&param_1->Center + fVar1) -
                  (double)(*(float *)&param_1->Center - fVar1)) * __real_3fe0000000000000;
      local_278 = ((double)(fVar2 + fVar1) - (double)(fVar2 - fVar1)) * __real_3fe0000000000000;
      local_228 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_220 = (param_3->Rotation).XY.m128d_f64[1];
      local_208 = (param_3->Translation).XY.m128d_f64[0];
      dStack_200 = (param_3->Translation).XY.m128d_f64[1];
      local_1e8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_270 = ((double)(fVar3 + fVar1) - (double)(fVar3 - fVar1)) * __real_3fe0000000000000;
      local_218 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_210 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1f8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_1f0 = (param_3->Translation).ZW.m128d_f64[1];
      local_1d8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_1d0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_260 = param_4;
      local_240 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,&local_338,pppuVar16);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1732238023615054511>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                      ,0x2af,"bIsValid");
  if (!bVar13) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 1441427f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (FCapsule *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *pTVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_368 [32];
  undefined1 local_338 [16];
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TAABB<double,3> local_2a8;
  undefined **local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined2 local_228;
  byte local_226;
  FQueryDebugParams local_225;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_220;
  FChaosQueryFilterData *local_218;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  FCapsule *local_200;
  ICollisionQueryFilterCallbackBase *local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined2 local_150;
  byte local_14e;
  FQueryDebugParams local_14d;
  double local_148;
  double dStack_140;
  double local_138;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_130;
  FChaosQueryFilterData *local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  FCapsule *local_110;
  ICollisionQueryFilterCallbackBase *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_308 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_300 = (param_3->Rotation).XY.m128d_f64[1];
  local_2f8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_2f0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_2e8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_2e0 = (param_3->Translation).XY.m128d_f64[1];
  local_2d8 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_2d0 = (param_3->Translation).ZW.m128d_f64[1];
  local_2c8 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_2c0 = (param_3->Scale3D).XY.m128d_f64[1];
  local_2b8 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_2b0 = (param_3->Scale3D).ZW.m128d_f64[1];
  Chaos::FCapsule::CalculateTransformedBounds
            (param_1,(TAABB<double,3> *)local_338,(TRigidTransform<double,3> *)&local_308);
  iVar4 = _finite((double)local_338._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_338._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_328), iVar4 != 0)) &&
     (((iVar4 = _finite(local_320), iVar4 != 0 && (iVar4 = _finite(dStack_318), iVar4 != 0)) &&
      (iVar4 = _finite(local_310), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    if ((uVar1 & 0x40) == 0) {
      pppuVar6 = &local_188;
      local_188 = &
                  ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_f8 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_f0 = (param_3->Rotation).XY.m128d_f64[1];
      local_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150 = 0;
      local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_e0 = (param_3->Rotation).ZW.m128d_f64[1];
      local_14d = *param_7;
      local_128 = param_5;
      local_120 = (param_5->data).word0;
      local_11c = (param_5->data).word1;
      local_118 = (param_5->data).word2;
      local_114 = (param_5->data).word3;
      local_d8 = (param_3->Translation).XY.m128d_f64[0];
      dStack_d0 = (param_3->Translation).XY.m128d_f64[1];
      local_b8 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_b0 = (param_3->Scale3D).XY.m128d_f64[1];
      local_80 = local_320;
      dStack_78 = dStack_318;
      local_c8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_c0 = (param_3->Translation).ZW.m128d_f64[1];
      local_14e = (byte)uVar1 >> 4 & 1;
      local_70 = local_310;
      local_a8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_a0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_98 = (double)local_338._0_8_;
      dStack_90 = (double)local_338._8_8_;
      local_68 = (local_320 - (double)local_338._0_8_) * __real_3fe0000000000000 +
                 (double)local_338._0_8_;
      local_108 = param_6;
      local_88 = local_328;
      local_58 = (local_310 - local_328) * __real_3fe0000000000000 + local_328;
      local_60 = (dStack_318 - (double)local_338._8_8_) * __real_3fe0000000000000 +
                 (double)local_338._8_8_;
      local_130 = param_4;
      local_110 = param_1;
    }
    else {
      local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_278 = &
                  ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pTVar5 = Chaos::FCapsule::BoundingBox(param_1,&local_2a8);
      pppuVar6 = &local_278;
      local_240 = (*(double *)&pTVar5->MMax - *(double *)&pTVar5->MMin) * __real_3fe0000000000000;
      local_228 = 0;
      local_238 = (*(double *)&(pTVar5->MMax).field_0x8 - *(double *)&(pTVar5->MMin).field_0x8) *
                  __real_3fe0000000000000;
      local_225 = *param_7;
      local_210 = (param_5->data).word0;
      local_1e8 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_1e0 = (param_3->Rotation).XY.m128d_f64[1];
      local_20c = (param_5->data).word1;
      local_208 = (param_5->data).word2;
      local_204 = (param_5->data).word3;
      local_230 = (*(double *)&(pTVar5->MMax).field_0x10 - *(double *)&(pTVar5->MMin).field_0x10) *
                  __real_3fe0000000000000;
      local_1d8 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_1d0 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1c8 = (param_3->Translation).XY.m128d_f64[0];
      dStack_1c0 = (param_3->Translation).XY.m128d_f64[1];
      local_1b8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_1b0 = (param_3->Translation).ZW.m128d_f64[1];
      local_1f8 = param_6;
      local_1a8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1a4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1a0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_19c = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_198 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_194 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_190 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_18c = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_218 = param_5;
      local_226 = (byte)(param_5->flags).mBits >> 4 & 1;
      local_220 = param_4;
      local_200 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_338,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144142c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (FCapsule *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *pTVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_368 [32];
  undefined1 local_338 [16];
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TAABB<double,3> local_2a8;
  undefined **local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined2 local_228;
  byte local_226;
  FQueryDebugParams local_225;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_220;
  FChaosQueryFilterData *local_218;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  FCapsule *local_200;
  ICollisionQueryFilterCallbackBase *local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined2 local_150;
  byte local_14e;
  FQueryDebugParams local_14d;
  double local_148;
  double dStack_140;
  double local_138;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_130;
  FChaosQueryFilterData *local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  FCapsule *local_110;
  ICollisionQueryFilterCallbackBase *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_308 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_300 = (param_3->Rotation).XY.m128d_f64[1];
  local_2f8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_2f0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_2e8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_2e0 = (param_3->Translation).XY.m128d_f64[1];
  local_2d8 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_2d0 = (param_3->Translation).ZW.m128d_f64[1];
  local_2c8 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_2c0 = (param_3->Scale3D).XY.m128d_f64[1];
  local_2b8 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_2b0 = (param_3->Scale3D).ZW.m128d_f64[1];
  Chaos::FCapsule::CalculateTransformedBounds
            (param_1,(TAABB<double,3> *)local_338,(TRigidTransform<double,3> *)&local_308);
  iVar4 = _finite((double)local_338._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_338._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_328), iVar4 != 0)) &&
     (((iVar4 = _finite(local_320), iVar4 != 0 && (iVar4 = _finite(dStack_318), iVar4 != 0)) &&
      (iVar4 = _finite(local_310), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    if ((uVar1 & 0x40) == 0) {
      pppuVar6 = &local_188;
      local_188 = &
                  ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_f8 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_f0 = (param_3->Rotation).XY.m128d_f64[1];
      local_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150 = 0;
      local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_e0 = (param_3->Rotation).ZW.m128d_f64[1];
      local_14d = *param_7;
      local_128 = param_5;
      local_120 = (param_5->data).word0;
      local_11c = (param_5->data).word1;
      local_118 = (param_5->data).word2;
      local_114 = (param_5->data).word3;
      local_d8 = (param_3->Translation).XY.m128d_f64[0];
      dStack_d0 = (param_3->Translation).XY.m128d_f64[1];
      local_b8 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_b0 = (param_3->Scale3D).XY.m128d_f64[1];
      local_80 = local_320;
      dStack_78 = dStack_318;
      local_c8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_c0 = (param_3->Translation).ZW.m128d_f64[1];
      local_14e = (byte)uVar1 >> 4 & 1;
      local_70 = local_310;
      local_a8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_a0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_98 = (double)local_338._0_8_;
      dStack_90 = (double)local_338._8_8_;
      local_68 = (local_320 - (double)local_338._0_8_) * __real_3fe0000000000000 +
                 (double)local_338._0_8_;
      local_108 = param_6;
      local_88 = local_328;
      local_58 = (local_310 - local_328) * __real_3fe0000000000000 + local_328;
      local_60 = (dStack_318 - (double)local_338._8_8_) * __real_3fe0000000000000 +
                 (double)local_338._8_8_;
      local_130 = param_4;
      local_110 = param_1;
    }
    else {
      local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_278 = &
                  ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pTVar5 = Chaos::FCapsule::BoundingBox(param_1,&local_2a8);
      pppuVar6 = &local_278;
      local_240 = (*(double *)&pTVar5->MMax - *(double *)&pTVar5->MMin) * __real_3fe0000000000000;
      local_228 = 0;
      local_238 = (*(double *)&(pTVar5->MMax).field_0x8 - *(double *)&(pTVar5->MMin).field_0x8) *
                  __real_3fe0000000000000;
      local_225 = *param_7;
      local_210 = (param_5->data).word0;
      local_1e8 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_1e0 = (param_3->Rotation).XY.m128d_f64[1];
      local_20c = (param_5->data).word1;
      local_208 = (param_5->data).word2;
      local_204 = (param_5->data).word3;
      local_230 = (*(double *)&(pTVar5->MMax).field_0x10 - *(double *)&(pTVar5->MMin).field_0x10) *
                  __real_3fe0000000000000;
      local_1d8 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_1d0 = (param_3->Rotation).ZW.m128d_f64[1];
      local_1c8 = (param_3->Translation).XY.m128d_f64[0];
      dStack_1c0 = (param_3->Translation).XY.m128d_f64[1];
      local_1b8 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_1b0 = (param_3->Translation).ZW.m128d_f64[1];
      local_1f8 = param_6;
      local_1a8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1a4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1a0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_19c = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_198 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_194 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_190 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_18c = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_218 = param_5;
      local_226 = (byte)(param_5->flags).mBits >> 4 & 1;
      local_220 = param_4;
      local_200 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_338,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle> @ 144143010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
          (FConvex *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_358 [32];
  undefined1 local_328 [16];
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  FConvex *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  FConvex *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_328,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_328._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_328._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_318), iVar4 != 0)) &&
     (((iVar4 = _finite(local_310), iVar4 != 0 && (iVar4 = _finite(dStack_308), iVar4 != 0)) &&
      (iVar4 = _finite(local_300), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_310;
      dStack_c8 = dStack_308;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_300;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_328._0_8_;
      dStack_e0 = (double)local_328._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_310 - (double)local_328._0_8_) * __real_3fe0000000000000 +
                 (double)local_328._0_8_;
      local_158 = param_6;
      local_a8 = (local_300 - local_318) * __real_3fe0000000000000 + local_318;
      local_d8 = local_318;
      local_b0 = (dStack_308 - (double)local_328._8_8_) * __real_3fe0000000000000 +
                 (double)local_328._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2c8 = &
                  ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
      ;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_278 = 0;
      local_276 = bVar5 >> 4 & 1;
      pppuVar6 = &local_2c8;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_258 = (param_5->data).word2;
      local_254 = (param_5->data).word3;
      local_268 = param_5;
      local_248 = param_6;
      local_290 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin) * __real_3fe0000000000000;
      local_288 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax.field_0x4 -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin.field_0x4) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_280 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax.field_0x8 -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin.field_0x8) *
                  __real_3fe0000000000000;
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_328,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle> @ 144143460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
          (FConvex *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_4,
          FChaosQueryFilterData *param_5,ICollisionQueryFilterCallbackBase *param_6,
          FQueryDebugParams *param_7)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAABB<double,3> *this;
  byte bVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_358 [32];
  undefined1 local_328 [16];
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  undefined1 local_2f8 [48];
  undefined **local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined2 local_278;
  byte local_276;
  FQueryDebugParams local_275;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_270;
  FChaosQueryFilterData *local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  FConvex *local_250;
  ICollisionQueryFilterCallbackBase *local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined2 local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTOverlapHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  FConvex *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_98 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_3->Rotation).XY.m128d_f64[1];
  local_88 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78 = (param_3->Translation).XY.m128d_f64[0];
  dStack_70 = (param_3->Translation).XY.m128d_f64[1];
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_3->Translation).ZW.m128d_f64[1];
  local_58 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_3->Scale3D).XY.m128d_f64[1];
  local_48 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_2f8);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)local_328,(TRigidTransform<double,3> *)&local_98);
  iVar4 = _finite((double)local_328._0_8_);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)local_328._8_8_), iVar4 != 0)) &&
      (iVar4 = _finite(local_318), iVar4 != 0)) &&
     (((iVar4 = _finite(local_310), iVar4 != 0 && (iVar4 = _finite(dStack_308), iVar4 != 0)) &&
      (iVar4 = _finite(local_300), iVar4 != 0)))) {
    param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
    uVar1 = (param_5->flags).mBits;
    bVar5 = (byte)uVar1;
    if ((uVar1 & 0x40) == 0) {
      local_1d8 = &
                  ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
      local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a0 = 0;
      local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
      local_19d = *param_7;
      local_178 = param_5;
      local_170 = (param_5->data).word0;
      local_16c = (param_5->data).word1;
      local_168 = (param_5->data).word2;
      local_164 = (param_5->data).word3;
      local_128 = (param_3->Translation).XY.m128d_f64[0];
      dStack_120 = (param_3->Translation).XY.m128d_f64[1];
      local_108 = (param_3->Scale3D).XY.m128d_f64[0];
      dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
      local_d0 = local_310;
      dStack_c8 = dStack_308;
      local_118 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
      local_19e = bVar5 >> 4 & 1;
      local_c0 = local_300;
      local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
      dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
      local_e8 = (double)local_328._0_8_;
      dStack_e0 = (double)local_328._8_8_;
      pppuVar6 = &local_1d8;
      local_b8 = (local_310 - (double)local_328._0_8_) * __real_3fe0000000000000 +
                 (double)local_328._0_8_;
      local_158 = param_6;
      local_a8 = (local_300 - local_318) * __real_3fe0000000000000 + local_318;
      local_d8 = local_318;
      local_b0 = (dStack_308 - (double)local_328._8_8_) * __real_3fe0000000000000 +
                 (double)local_328._8_8_;
      local_180 = param_4;
      local_160 = param_1;
    }
    else {
      local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2c8 = &
                  ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
      ;
      local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_278 = 0;
      local_276 = bVar5 >> 4 & 1;
      pppuVar6 = &local_2c8;
      local_275 = *param_7;
      local_260 = (param_5->data).word0;
      local_25c = (param_5->data).word1;
      local_258 = (param_5->data).word2;
      local_254 = (param_5->data).word3;
      local_268 = param_5;
      local_248 = param_6;
      local_290 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin) * __real_3fe0000000000000;
      local_288 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax.field_0x4 -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin.field_0x4) *
                  __real_3fe0000000000000;
      local_238 = (param_3->Rotation).XY.m128d_f64[0];
      dStack_230 = (param_3->Rotation).XY.m128d_f64[1];
      local_218 = (param_3->Translation).XY.m128d_f64[0];
      dStack_210 = (param_3->Translation).XY.m128d_f64[1];
      local_228 = (param_3->Rotation).ZW.m128d_f64[0];
      dStack_220 = (param_3->Rotation).ZW.m128d_f64[1];
      local_208 = (param_3->Translation).ZW.m128d_f64[0];
      dStack_200 = (param_3->Translation).ZW.m128d_f64[1];
      local_280 = ((double)*(float *)&(param_1->LocalBoundingBox).MMax.field_0x8 -
                  (double)*(float *)&(param_1->LocalBoundingBox).MMin.field_0x8) *
                  __real_3fe0000000000000;
      local_1f8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
      uStack_1f0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
      uStack_1ec = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
      local_1e8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
      uStack_1e4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
      uStack_1e0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
      uStack_1dc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
      local_270 = param_4;
      local_250 = param_1;
    }
    (**(code **)(param_2->_padding_ + 0x60))(param_2,local_328,pppuVar6);
    ChaosInterface::FSQHitBuffer<ChaosInterface::FPTOverlapHit>::DecFlushCount(param_4);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x2af,"bIsValid");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PullPhysicsStateForEachDirtyProxy_External<`FChaosScene::OnSyncBodies'::__l2::FDispatcher> @ 1441438b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPhysicsSolverBase::
PullPhysicsStateForEachDirtyProxy_External<_FChaosScene::OnSyncBodies_::__l2::FDispatcher>
          (FPhysicsSolverBase *this,FDispatcher *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FPullPhysicsData *pFVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  TStatId TVar17;
  TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> *pTVar18;
  FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy> FVar19;
  FSingleParticlePhysicsProxy *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy> FVar21;
  FGeometryCollectionPhysicsProxy *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy> FVar23;
  FClusterUnionPhysicsProxy *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_SyncPullResults> FVar25;
  FChaosInterpolationResults *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_PullConstraints> FVar27;
  uint uVar28;
  undefined1 *puVar29;
  FNameEntryId FVar30;
  FScriptContainerElement *pFVar31;
  FName FVar32;
  FScriptContainerElement *pFVar33;
  FDirtyRigidParticleData *pFVar34;
  FDirtyGeometryCollectionData *pFVar35;
  FDirtyClusterUnionData *pFVar36;
  TArray<Chaos::FDirtyJointConstraintData,TSizedDefaultAllocator<32>_> *pTVar37;
  TArray<Chaos::FDirtyCharacterGroundConstraintData,TSizedDefaultAllocator<32>_> *pTVar38;
  FDirtyJointConstraintData *pFVar39;
  FDirtyCharacterGroundConstraintData *pFVar40;
  FSingleParticlePhysicsProxy *this_00;
  FSingleParticlePhysicsProxy *pFVar41;
  FGeometryCollectionPhysicsProxy *this_01;
  FGeometryCollectionPhysicsProxy *pFVar42;
  FClusterUnionPhysicsProxy *this_02;
  FClusterUnionPhysicsProxy *pFVar43;
  FSingleParticlePhysicsProxy *pFVar44;
  FGeometryCollectionPhysicsProxy *pFVar45;
  FClusterUnionPhysicsProxy *pFVar46;
  FDirtyJointConstraintData *pFVar47;
  FDirtyCharacterGroundConstraintData *pFVar48;
  FDirtyRigidParticleData *pFVar49;
  FDirtyGeometryCollectionData *pFVar50;
  FDirtyClusterUnionData *pFVar51;
  double dVar52;
  uint local_res20 [2];
  undefined1 local_268;
  undefined1 local_267 [7];
  FName local_260;
  int local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined1 local_22c [4];
  FPullPhysicsData *local_228;
  uint local_220;
  uint local_21c;
  FCycleCounter local_218;
  FCycleCounter local_208;
  FColor_u_0 local_1f8;
  FColor_u_0 local_1f4;
  FColor_u_0 local_1f0;
  FColor_u_0 local_1ec;
  FColor_u_0 local_1e8;
  FColor_u_0 local_1e4;
  FColor_u_0 local_1e0;
  FColor_u_0 local_1dc;
  FScriptContainerElement *local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  FName local_1c0;
  FName local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  FName local_1a8;
  FName local_1a0;
  uint local_198;
  uint uStack_194;
  FName local_190;
  FName local_188;
  FName local_178;
  FName local_168;
  FName local_158;
  FName local_148;
  FName local_138;
  FName local_128;
  FName local_118;
  FSourceLocation local_108;
  FSourceLocation local_e8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> local_80;
  FName local_70;
  TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> local_68 [3];
  
  pFVar31 = (FScriptContainerElement *)0x0;
  local_228 = (FPullPhysicsData *)0x0;
  if (((ForceDisableAsyncPhysics != 0) || (this->AsyncDt <= 0.0 && this->AsyncDt != 0.0)) ||
     (UseAsyncInterpolation == 0)) {
    FVar25 = StatPtr_STAT_SyncPullResults;
    if (StatPtr_STAT_SyncPullResults == (FThreadSafeStaticStat<FStat_STAT_SyncPullResults>)0x0) {
      pFVar16 = ::FName::FName(&local_b0,"STAT_SyncPullResults");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_SyncPullResults>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SyncPullResults,*pFVar16,
                          L"Sync Pull Results","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    bVar10 = false;
    bVar14 = false;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    FVar32 = *(FName *)FVar25;
    bVar7 = false;
    bVar13 = false;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_1441445fe:
      bVar10 = bVar7;
      bVar14 = bVar13;
      bVar13 = false;
      local_260 = local_148;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1ec.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1ec._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar10 = false;
        bVar14 = true;
        bVar7 = false;
        bVar13 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1c0.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
          local_1c0.Number = FVar32.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                     ,0x83);
          bVar10 = true;
          bVar14 = true;
          bVar7 = true;
          bVar13 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1441445fe;
      local_260 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar13 = true;
    }
    pFVar26 = FChaosResultsManager::PullSyncPhysicsResults_External((this->PullResultsManager).Ptr);
    local_228 = pFVar26->Next;
    if (local_228 == (FPullPhysicsData *)0x0) {
      local_res20[0] = 0xffffffff;
    }
    else {
      local_res20[0] = local_228->SolverTimestamp;
    }
    FVar19 = StatPtr_STAT_ProcessSingleProxy;
    if (StatPtr_STAT_ProcessSingleProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)0x0
       ) {
      pFVar16 = ::FName::FName(&local_a8,"STAT_ProcessSingleProxy");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSingleProxy,*pFVar16,
                          L"Process Single Particle Proxies","STATGROUP_Chaos","STATCAT_Advanced",
                          L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar19;
    bVar7 = false;
    bVar9 = false;
    local_188.ComparisonIndex.Value = 0;
    local_188.Number = 0;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_14414474b:
      bVar8 = false;
      local_248 = local_188;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1e8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1e8._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar7 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_248 = FVar32;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_248,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                     ,0x90);
          bVar7 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14414474b;
      local_248 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar8 = true;
    }
    uVar28 = local_res20[0];
    iVar2 = (pFVar26->RigidInterpolations).ArrayNum;
    pFVar31 = (pFVar26->RigidInterpolations).AllocatorInstance.Data;
    pFVar33 = pFVar31 + (longlong)iVar2 * 0x120;
    while( true ) {
      if ((pFVar26->RigidInterpolations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FChaosRigidInterpolationData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_230);
      }
      FVar32 = local_248;
      if (pFVar31 == pFVar33) break;
      if (((*(char **)(pFVar31 + 8) != (char *)0x0) && (**(char **)(pFVar31 + 8) == '\0')) &&
         (*(FSingleParticlePhysicsProxy **)pFVar31 != (FSingleParticlePhysicsProxy *)0x0)) {
        FSingleParticlePhysicsProxy::PullFromPhysicsState
                  (*(FSingleParticlePhysicsProxy **)pFVar31,
                   (FDirtyRigidParticleData *)(pFVar31 + 0x90),uVar28,(FDirtyRigidParticleData *)0x0
                   ,(float *)0x0,(FDirtyRigidParticleReplicationErrorData *)0x0,0.0);
      }
      pFVar31 = pFVar31 + 0x120;
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FThreadStats::AddMessage(FVar32,CycleScopeEnd);
    }
    FVar21 = StatPtr_STAT_ProcessGCProxy;
    if (StatPtr_STAT_ProcessGCProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)0x0) {
      pFVar16 = ::FName::FName(&local_a0,"STAT_ProcessGCProxy");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessGCProxy,*pFVar16,
                          L"Process Geometry Collections Proxies","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar21;
    bVar7 = false;
    bVar9 = false;
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_144144913:
      bVar8 = false;
      local_240 = local_138;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1e4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1e4._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        bVar7 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_240 = FVar32;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_240,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                     ,0x9f);
          bVar7 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144144913;
      local_240 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar8 = true;
    }
    iVar2 = (pFVar26->GeometryCollectionInterpolations).ArrayNum;
    pFVar31 = (pFVar26->GeometryCollectionInterpolations).AllocatorInstance.Data;
    pFVar33 = pFVar31 + (longlong)iVar2 * 0x40;
    while( true ) {
      if ((pFVar26->GeometryCollectionInterpolations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FChaosGeometryCollectionInterpolationData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_22f);
      }
      FVar32 = local_240;
      if (pFVar31 == pFVar33) break;
      if (((*(char **)(pFVar31 + 8) != (char *)0x0) && (**(char **)(pFVar31 + 8) == '\0')) &&
         (*(FGeometryCollectionPhysicsProxy **)pFVar31 != (FGeometryCollectionPhysicsProxy *)0x0)) {
        FGeometryCollectionPhysicsProxy::PullFromPhysicsState
                  (*(FGeometryCollectionPhysicsProxy **)pFVar31,
                   (FDirtyGeometryCollectionData *)(pFVar31 + 0x20),uVar28,
                   (FDirtyGeometryCollectionData *)0x0,(float *)0x0,
                   (FDirtyRigidParticleReplicationErrorData *)0x0,0.0);
      }
      pFVar31 = pFVar31 + 0x40;
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FThreadStats::AddMessage(FVar32,CycleScopeEnd);
    }
    FVar23 = StatPtr_STAT_ProcessClusterUnionProxy;
    if (StatPtr_STAT_ProcessClusterUnionProxy ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)0x0) {
      pFVar16 = ::FName::FName(&local_98,"STAT_ProcessClusterUnionProxy");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessClusterUnionProxy,
                          *pFVar16,L"Process Cluster Union Proxies","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar23;
    bVar9 = false;
    bVar7 = false;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_144144acb:
      bVar8 = false;
      local_238 = local_128;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1e0.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1e0._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
        bVar9 = false;
        bVar7 = true;
        if (-1 < CpuChannel->Enabled) {
          local_238 = FVar32;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_238,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                     ,0xae);
          bVar9 = true;
          bVar7 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144144acb;
      local_238 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar9 = false;
      bVar8 = true;
    }
    iVar2 = (pFVar26->ClusterUnionInterpolations).ArrayNum;
    pFVar36 = (FDirtyClusterUnionData *)(pFVar26->ClusterUnionInterpolations).AllocatorInstance.Data
    ;
    pFVar51 = pFVar36 + (longlong)iVar2 * 2;
    while( true ) {
      if ((pFVar26->ClusterUnionInterpolations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FChaosClusterUnionInterpolationData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_22e);
      }
      FVar4 = local_238;
      FVar32 = local_260;
      if (pFVar36 == pFVar51) break;
      if ((((char *)pFVar36->_padding_ != (char *)0x0) && (*(char *)pFVar36->_padding_ == '\0')) &&
         ((FClusterUnionPhysicsProxy *)pFVar36->_padding_ != (FClusterUnionPhysicsProxy *)0x0)) {
        FClusterUnionPhysicsProxy::PullFromPhysicsState
                  ((FClusterUnionPhysicsProxy *)pFVar36->_padding_,pFVar36,uVar28,
                   (FDirtyClusterUnionData *)0x0,(float *)0x0,
                   (FDirtyRigidParticleReplicationErrorData *)0x0,0.0);
      }
      pFVar36 = pFVar36 + 2;
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FThreadStats::AddMessage(FVar4,CycleScopeEnd);
    }
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FThreadStats::AddMessage(FVar32,CycleScopeEnd);
    }
  }
  else {
    TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_AsyncInterpolateResults;
    if (StatPtr_STAT_AsyncInterpolateResults ==
        (FThreadSafeStaticStat<FStat_STAT_AsyncInterpolateResults>)0x0) {
      pFVar16 = ::FName::FName(&local_90,"STAT_AsyncInterpolateResults");
      TVar17.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncInterpolateResults,*pFVar16,
                      L"Async Interpolate Results","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_208.StatId.ComparisonIndex.Value = 0;
    local_208.StatId.Number = 0;
    local_208.EmittedEvent = 0;
    local_e8.Impl._Line = 0x35;
    local_e8.Impl._Column = 4;
    local_e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
    ;
    local_e8.Impl._Function =
         "void __cdecl Chaos::FPhysicsSolverBase::PullPhysicsStateForEachDirtyProxy_External<struct FChaosScene::OnSyncBodies::FDispatcher>(struct FChaosScene::OnSyncBodies::FDispatcher &)"
    ;
    FCycleCounter::Start(&local_208,TVar17,CycleStat|ClearEveryFrame,false,&local_e8);
    dVar52 = (double)(this->MarshallingManager).ExternalTime_External + this->AccumulatedTime;
    if (((ForceDisableAsyncPhysics == 0) && (0.0 <= this->AsyncDt)) && (UseAsyncInterpolation != 0))
    {
      dVar52 = dVar52 - (double)this->AsyncMultiplier * this->AsyncDt;
    }
    local_1d8 = (FScriptContainerElement *)0x0;
    local_21c = 0;
    TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_AsyncPullResults;
    if (StatPtr_STAT_AsyncPullResults == (FThreadSafeStaticStat<FStat_STAT_AsyncPullResults>)0x0) {
      pFVar16 = ::FName::FName(&local_88,"STAT_AsyncPullResults");
      TVar17.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncPullResults,*pFVar16,
                      L"Async Pull Results","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    local_108.Impl._Line = 0x42;
    local_218.StatId.ComparisonIndex.Value = 0;
    local_218.StatId.Number = 0;
    local_218.EmittedEvent = 0;
    local_108.Impl._Column = 5;
    local_108.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
    ;
    local_108.Impl._Function =
         "void __cdecl Chaos::FPhysicsSolverBase::PullPhysicsStateForEachDirtyProxy_External<struct FChaosScene::OnSyncBodies::FDispatcher>(struct FChaosScene::OnSyncBodies::FDispatcher &)"
    ;
    FCycleCounter::Start(&local_218,TVar17,CycleStat|ClearEveryFrame,false,&local_108);
    pTVar18 = FChaosResultsManager::PullAsyncPhysicsResults_External
                        ((this->PullResultsManager).Ptr,&local_80,dVar52);
    pFVar33 = pFVar31;
    if (local_68 != pTVar18) {
      pFVar33 = (pTVar18->AllocatorInstance).Data;
      (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_21c = pTVar18->ArrayNum;
      pFVar31 = (FScriptContainerElement *)(ulonglong)local_21c;
      pTVar18->ArrayNum = 0;
      pTVar18->ArrayMax = 0;
      local_1d8 = pFVar33;
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    if ((local_218.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_218.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_218.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_218.StatId,CycleScopeEnd);
    }
    local_218.EmittedEvent = '\0';
    local_220 = 0;
    if (0 < (int)pFVar31) {
      local_1c8 = 0;
      do {
        lVar12 = local_1c8;
        uVar28 = 0;
        if ((int)local_220 < (int)pFVar31) {
          uVar28 = ~local_220 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar32 = *(FName *)(pFVar33 + lVar12);
        local_228 = *(FPullPhysicsData **)((longlong)FVar32 + 0x38);
        if (local_228 == (FPullPhysicsData *)0x0) {
          local_258 = -1;
        }
        else {
          local_258 = local_228->SolverTimestamp;
        }
        FVar19 = StatPtr_STAT_ProcessSingleProxy;
        local_260 = FVar32;
        if (StatPtr_STAT_ProcessSingleProxy ==
            (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)0x0) {
          pFVar16 = ::FName::FName(&local_c8,"STAT_ProcessSingleProxy");
          FVar19 = (FThreadSafeStaticStat<FStat_STAT_ProcessSingleProxy>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessSingleProxy,*pFVar16
                              ,L"Process Single Particle Proxies","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        FVar4 = *(FName *)FVar19;
        bVar10 = false;
        bVar14 = false;
        local_178.ComparisonIndex.Value = 0;
        local_178.Number = 0;
        bVar7 = false;
        bVar13 = false;
        FVar30 = FVar4.ComparisonIndex.Value;
        uVar28 = FVar4.Number;
        if ((FVar30.Value == 0) && (uVar28 == 0)) {
LAB_144143d35:
          bVar10 = bVar7;
          bVar14 = bVar13;
          bVar13 = false;
          local_250 = local_178;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_1f8.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
            bVar10 = false;
            bVar14 = true;
            bVar7 = false;
            bVar13 = true;
            if (-1 < CpuChannel->Enabled) {
              local_1b8.ComparisonIndex.Value = FVar30.Value;
              local_1b8.Number = uVar28;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                         ,0x4f);
              bVar10 = true;
              bVar14 = true;
              bVar7 = true;
              bVar13 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_144143d35;
          local_250 = FVar4;
          local_1b0 = FVar30.Value;
          uStack_1ac = uVar28;
          local_178 = FVar4;
          FThreadStats::AddMessage(FVar4,CycleScopeStart);
          bVar13 = true;
        }
        pFVar11 = local_228;
        iVar3 = local_258;
        iVar2 = *(int *)((longlong)FVar32 + 8);
        pFVar34 = *(FDirtyRigidParticleData **)FVar32;
        pFVar49 = pFVar34 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)((longlong)FVar32 + 8) != iVar2) {
            local_res20[0] = local_res20[0] & 0xffffff00;
            `TCheckedPointerIterator<Chaos::FChaosRigidInterpolationData_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res20);
          }
          FVar4 = local_250;
          if (pFVar34 == pFVar49) break;
          if (*(char **)&pFVar34->field_0x8 != (char *)0x0) {
            pFVar44 = (FSingleParticlePhysicsProxy *)0x0;
            this_00 = pFVar44;
            if (**(char **)&pFVar34->field_0x8 == '\0') {
              this_00 = *(FSingleParticlePhysicsProxy **)pFVar34;
            }
            if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
              uVar28 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)this_00 >> 4)) * -0x7a143595;
              uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
              pFVar20 = pFVar44;
              if (*(int *)&(pFVar11->DirtyRigidErrors).field_0x8 !=
                  *(int *)&(pFVar11->DirtyRigidErrors).field_0x34) {
                puVar5 = *(undefined1 **)&(pFVar11->DirtyRigidErrors).field_0x40;
                puVar29 = &(pFVar11->DirtyRigidErrors).field_0x38;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar29 = puVar5;
                }
                iVar15 = *(int *)(puVar29 +
                                 (ulonglong)
                                 (*(int *)&(pFVar11->DirtyRigidErrors).field_0x48 - 1U &
                                 (uVar28 >> 0x10 ^ uVar28)) * 4);
                if (iVar15 != -1) {
                  do {
                    pFVar20 = (FSingleParticlePhysicsProxy *)
                              ((longlong)iVar15 * 0x70 + *(longlong *)&pFVar11->DirtyRigidErrors);
                    if ((FSingleParticlePhysicsProxy *)pFVar20->_padding_ == this_00) break;
                    iVar15 = *(int *)&(pFVar20->InterpolationData).Ptr;
                    pFVar20 = pFVar44;
                  } while (iVar15 != -1);
                }
              }
              pFVar41 = (FSingleParticlePhysicsProxy *)&pFVar20->_padding_;
              if (pFVar20 == (FSingleParticlePhysicsProxy *)0x0) {
                pFVar41 = pFVar44;
              }
              FSingleParticlePhysicsProxy::PullFromPhysicsState
                        (this_00,pFVar34,iVar3,pFVar34 + 1,(float *)((longlong)local_260 + 0x40),
                         (FDirtyRigidParticleReplicationErrorData *)pFVar41,this->AsyncDt);
              TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
                        *)&pFVar11->DirtyRigidErrors,(IPhysicsProxyBase *)this_00);
              FVar32 = local_260;
            }
          }
          pFVar34 = pFVar34 + 2;
        }
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FThreadStats::AddMessage(FVar4,CycleScopeEnd);
        }
        FVar21 = StatPtr_STAT_ProcessGCProxy;
        if (StatPtr_STAT_ProcessGCProxy == (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)0x0) {
          pFVar16 = ::FName::FName(&local_c0,"STAT_ProcessGCProxy");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_ProcessGCProxy>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessGCProxy,*pFVar16,
                              L"Process Geometry Collections Proxies","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        FVar4 = *(FName *)FVar21;
        bVar10 = false;
        bVar14 = false;
        local_168.ComparisonIndex.Value = 0;
        local_168.Number = 0;
        bVar7 = false;
        bVar13 = false;
        FVar30 = FVar4.ComparisonIndex.Value;
        uVar28 = FVar4.Number;
        if ((FVar30.Value == 0) && (uVar28 == 0)) {
LAB_144144001:
          bVar10 = bVar7;
          bVar14 = bVar13;
          bVar13 = false;
          local_250 = local_168;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_1f4.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_1f4._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
            bVar10 = false;
            bVar14 = true;
            bVar7 = false;
            bVar13 = true;
            if (-1 < CpuChannel->Enabled) {
              local_1a8.ComparisonIndex.Value = FVar30.Value;
              local_1a8.Number = uVar28;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                         ,0x60);
              bVar10 = true;
              bVar14 = true;
              bVar7 = true;
              bVar13 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_144144001;
          local_250 = FVar4;
          local_198 = FVar30.Value;
          uStack_194 = uVar28;
          local_168 = FVar4;
          FThreadStats::AddMessage(FVar4,CycleScopeStart);
          bVar13 = true;
        }
        pFVar11 = local_228;
        iVar3 = local_258;
        iVar2 = *(int *)((longlong)FVar32 + 0x18);
        pFVar35 = *(FDirtyGeometryCollectionData **)((longlong)FVar32 + 0x10);
        pFVar50 = pFVar35 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)((longlong)FVar32 + 0x18) != iVar2) {
            local_268 = 0;
            `TCheckedPointerIterator<Chaos::FChaosGeometryCollectionInterpolationData_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_268);
          }
          FVar4 = local_250;
          if (pFVar35 == pFVar50) break;
          if ((char *)pFVar35->_padding_ != (char *)0x0) {
            pFVar45 = (FGeometryCollectionPhysicsProxy *)0x0;
            this_01 = pFVar45;
            if (*(char *)pFVar35->_padding_ == '\0') {
              this_01 = (FGeometryCollectionPhysicsProxy *)pFVar35->_padding_;
            }
            if (this_01 != (FGeometryCollectionPhysicsProxy *)0x0) {
              uVar28 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)this_01 >> 4)) * -0x7a143595;
              uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
              pFVar22 = pFVar45;
              if (*(int *)&(pFVar11->DirtyRigidErrors).field_0x8 !=
                  *(int *)&(pFVar11->DirtyRigidErrors).field_0x34) {
                puVar5 = *(undefined1 **)&(pFVar11->DirtyRigidErrors).field_0x40;
                puVar29 = &(pFVar11->DirtyRigidErrors).field_0x38;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar29 = puVar5;
                }
                iVar15 = *(int *)(puVar29 +
                                 (ulonglong)
                                 (*(int *)&(pFVar11->DirtyRigidErrors).field_0x48 - 1U &
                                 (uVar28 >> 0x10 ^ uVar28)) * 4);
                if (iVar15 != -1) {
                  do {
                    pFVar22 = (FGeometryCollectionPhysicsProxy *)
                              ((longlong)iVar15 * 0x70 + *(longlong *)&pFVar11->DirtyRigidErrors);
                    if (*(FGeometryCollectionPhysicsProxy **)pFVar22 == this_01) break;
                    iVar15 = *(int *)&(pFVar22->Parameters).RestCollectionShared.
                                      SharedReferenceCount.ReferenceController;
                    pFVar22 = pFVar45;
                  } while (iVar15 != -1);
                }
              }
              pFVar42 = (FGeometryCollectionPhysicsProxy *)&pFVar22->field_0x10;
              if (pFVar22 == (FGeometryCollectionPhysicsProxy *)0x0) {
                pFVar42 = pFVar45;
              }
              FGeometryCollectionPhysicsProxy::PullFromPhysicsState
                        (this_01,pFVar35,iVar3,pFVar35 + 1,(float *)((longlong)local_260 + 0x40),
                         (FDirtyRigidParticleReplicationErrorData *)pFVar42,this->AsyncDt);
              TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
                        *)&pFVar11->DirtyRigidErrors,(IPhysicsProxyBase *)this_01);
              FVar32 = local_260;
            }
          }
          pFVar35 = pFVar35 + 2;
        }
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FThreadStats::AddMessage(FVar4,CycleScopeEnd);
        }
        FVar23 = StatPtr_STAT_ProcessClusterUnionProxy;
        if (StatPtr_STAT_ProcessClusterUnionProxy ==
            (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)0x0) {
          pFVar16 = ::FName::FName(&local_b8,"STAT_ProcessClusterUnionProxy");
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_ProcessClusterUnionProxy>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessClusterUnionProxy,
                              *pFVar16,L"Process Cluster Union Proxies","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        FVar4 = *(FName *)FVar23;
        bVar10 = false;
        bVar14 = false;
        local_158.ComparisonIndex.Value = 0;
        local_158.Number = 0;
        bVar7 = false;
        bVar13 = false;
        FVar30 = FVar4.ComparisonIndex.Value;
        uVar28 = FVar4.Number;
        if ((FVar30.Value == 0) && (uVar28 == 0)) {
LAB_1441442bb:
          bVar10 = bVar7;
          bVar14 = bVar13;
          bVar13 = false;
          local_250 = local_158;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_1f0.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_1f0._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
            bVar10 = false;
            bVar14 = true;
            bVar7 = false;
            bVar13 = true;
            if (-1 < CpuChannel->Enabled) {
              local_190.ComparisonIndex.Value = FVar30.Value;
              local_190.Number = uVar28;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_190,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                         ,0x71);
              bVar10 = true;
              bVar14 = true;
              bVar7 = true;
              bVar13 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1441442bb;
          local_250 = FVar4;
          local_1d0 = FVar30.Value;
          uStack_1cc = uVar28;
          local_158 = FVar4;
          FThreadStats::AddMessage(FVar4,CycleScopeStart);
          bVar13 = true;
        }
        pFVar11 = local_228;
        iVar3 = local_258;
        iVar2 = *(int *)((longlong)FVar32 + 0x28);
        pFVar36 = *(FDirtyClusterUnionData **)((longlong)FVar32 + 0x20);
        pFVar51 = pFVar36 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)((longlong)FVar32 + 0x28) != iVar2) {
            local_267[0] = 0;
            `TCheckedPointerIterator<Chaos::FChaosClusterUnionInterpolationData_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_267);
          }
          FVar4 = local_250;
          if (pFVar36 == pFVar51) break;
          if ((char *)pFVar36->_padding_ != (char *)0x0) {
            pFVar46 = (FClusterUnionPhysicsProxy *)0x0;
            this_02 = pFVar46;
            if (*(char *)pFVar36->_padding_ == '\0') {
              this_02 = (FClusterUnionPhysicsProxy *)pFVar36->_padding_;
            }
            if (this_02 != (FClusterUnionPhysicsProxy *)0x0) {
              uVar28 = ((uint)((ulonglong)this_02 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)this_02 >> 4)) * -0x7a143595;
              uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
              pFVar24 = pFVar46;
              if (*(int *)&(pFVar11->DirtyRigidErrors).field_0x8 !=
                  *(int *)&(pFVar11->DirtyRigidErrors).field_0x34) {
                puVar5 = *(undefined1 **)&(pFVar11->DirtyRigidErrors).field_0x40;
                puVar29 = &(pFVar11->DirtyRigidErrors).field_0x38;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar29 = puVar5;
                }
                iVar15 = *(int *)(puVar29 +
                                 (ulonglong)
                                 (*(int *)&(pFVar11->DirtyRigidErrors).field_0x48 - 1U &
                                 (uVar28 >> 0x10 ^ uVar28)) * 4);
                if (iVar15 != -1) {
                  do {
                    pFVar24 = (FClusterUnionPhysicsProxy *)
                              ((longlong)iVar15 * 0x70 + *(longlong *)&pFVar11->DirtyRigidErrors);
                    if ((FClusterUnionPhysicsProxy *)pFVar24->_padding_ == this_02) break;
                    iVar15 = *(int *)&(pFVar24->ClusterParameters).
                                      ConnectionGraphBoundsFilteringMargin;
                    pFVar24 = pFVar46;
                  } while (iVar15 != -1);
                }
              }
              pFVar43 = (FClusterUnionPhysicsProxy *)&pFVar24->_padding_;
              if (pFVar24 == (FClusterUnionPhysicsProxy *)0x0) {
                pFVar43 = pFVar46;
              }
              FClusterUnionPhysicsProxy::PullFromPhysicsState
                        (this_02,pFVar36,iVar3,pFVar36 + 1,(float *)((longlong)local_260 + 0x40),
                         (FDirtyRigidParticleReplicationErrorData *)pFVar43,this->AsyncDt);
              TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
                        *)&pFVar11->DirtyRigidErrors,(IPhysicsProxyBase *)this_02);
              FVar32 = local_260;
            }
          }
          pFVar36 = pFVar36 + 2;
        }
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FThreadStats::AddMessage(FVar4,CycleScopeEnd);
        }
        local_220 = local_220 + 1;
        pFVar31 = (FScriptContainerElement *)(ulonglong)local_21c;
        local_1c8 = local_1c8 + 8;
        pFVar33 = local_1d8;
      } while ((int)local_220 < (int)local_21c);
    }
    if (local_1d8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8);
    }
    if ((local_208.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_208.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_208.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_208.StatId,CycleScopeEnd);
    }
    local_208.EmittedEvent = '\0';
  }
  pFVar11 = local_228;
  if (local_228 == (FPullPhysicsData *)0x0) {
    return;
  }
  FVar27 = StatPtr_STAT_PullConstraints;
  if (StatPtr_STAT_PullConstraints == (FThreadSafeStaticStat<FStat_STAT_PullConstraints>)0x0) {
    pFVar16 = ::FName::FName(&local_70,"STAT_PullConstraints");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_PullConstraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PullConstraints,*pFVar16,
                        L"Pull Constraints","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar27;
  bVar14 = false;
  bVar13 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  if ((FVar32.ComparisonIndex.Value.Value != 0) || (FVar32.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1dc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1dc._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PhysicsSolverBaseImpl.h"
                   ,0xbf);
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar10 = true;
      goto LAB_144144cde;
    }
  }
  bVar10 = false;
  FVar32 = local_118;
LAB_144144cde:
  iVar2 = pFVar11->SolverTimestamp;
  pTVar37 = &pFVar11->DirtyJointConstraints;
  iVar3 = (pFVar11->DirtyJointConstraints).ArrayNum;
  pFVar39 = (FDirtyJointConstraintData *)(pTVar37->AllocatorInstance).Data;
  pFVar47 = pFVar39 + iVar3;
  while( true ) {
    if ((pFVar11->DirtyJointConstraints).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FDirtyJointConstraintData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_22d);
    }
    if (pFVar39 == pFVar47) break;
    if ((((char *)pFVar39->_padding_ != (char *)0x0) && (*(char *)pFVar39->_padding_ == '\0')) &&
       ((FJointConstraintPhysicsProxy *)pFVar39->_padding_ != (FJointConstraintPhysicsProxy *)0x0))
    {
      FJointConstraintPhysicsProxy::PullFromPhysicsState
                ((FJointConstraintPhysicsProxy *)pFVar39->_padding_,pFVar39,iVar2);
    }
    pFVar39 = pFVar39 + 1;
  }
  piVar1 = &(pFVar11->DirtyJointConstraints).ArrayMax;
  pFVar39 = (FDirtyJointConstraintData *)(pTVar37->AllocatorInstance).Data;
  iVar3 = (pFVar11->DirtyJointConstraints).ArrayNum;
  if ((pFVar11->DirtyJointConstraints).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyJointConstraintData,int>(pFVar39,iVar3);
    (pFVar11->DirtyJointConstraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&pTVar37->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyJointConstraintData,int>(pFVar39,iVar3);
    (pFVar11->DirtyJointConstraints).ArrayNum = 0;
  }
  pFVar11 = local_228;
  pTVar38 = &local_228->DirtyCharacterGroundConstraints;
  iVar3 = (local_228->DirtyCharacterGroundConstraints).ArrayNum;
  pFVar40 = (FDirtyCharacterGroundConstraintData *)(pTVar38->AllocatorInstance).Data;
  pFVar48 = pFVar40 + iVar3;
  while( true ) {
    if ((pFVar11->DirtyCharacterGroundConstraints).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FDirtyCharacterGroundConstraintData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_22c);
    }
    if (pFVar40 == pFVar48) break;
    if ((((char *)pFVar40->_padding_ != (char *)0x0) && (*(char *)pFVar40->_padding_ == '\0')) &&
       ((FCharacterGroundConstraintProxy *)pFVar40->_padding_ !=
        (FCharacterGroundConstraintProxy *)0x0)) {
      FCharacterGroundConstraintProxy::PullFromPhysicsState
                ((FCharacterGroundConstraintProxy *)pFVar40->_padding_,pFVar40,iVar2);
    }
    pFVar40 = pFVar40 + 1;
  }
  piVar1 = &(pFVar11->DirtyCharacterGroundConstraints).ArrayMax;
  pFVar40 = (FDirtyCharacterGroundConstraintData *)(pTVar38->AllocatorInstance).Data;
  iVar2 = (pFVar11->DirtyCharacterGroundConstraints).ArrayNum;
  if ((pFVar11->DirtyCharacterGroundConstraints).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyCharacterGroundConstraintData,int>(pFVar40,iVar2);
    (pFVar11->DirtyCharacterGroundConstraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x118,8,0,&pTVar38->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyCharacterGroundConstraintData,int>(pFVar40,iVar2);
    (pFVar11->DirtyCharacterGroundConstraints).ArrayNum = 0;
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// StaticEnum<enum_EAngularConstraintMotion> @ 144146cb0

UEnum * __cdecl StaticEnum<enum_EAngularConstraintMotion>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion,(UObject *)pUVar1,
                       L"EAngularConstraintMotion");
  }
  return Z_Registration_Info_UEnum_EAngularConstraintMotion.OuterSingleton;
}

// StaticEnum<enum_ECollisionTraceFlag> @ 144146cf0

UEnum * __cdecl StaticEnum<enum_ECollisionTraceFlag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag,(UObject *)pUVar1,
                       L"ECollisionTraceFlag");
  }
  return Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton;
}

// StaticEnum<enum_EConstraintPlasticityType> @ 144146d30

UEnum * __cdecl StaticEnum<enum_EConstraintPlasticityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType,(UObject *)pUVar1,
                       L"EConstraintPlasticityType");
  }
  return Z_Registration_Info_UEnum_EConstraintPlasticityType.OuterSingleton;
}

// StaticEnum<enum_ELinearConstraintMotion> @ 144146d70

UEnum * __cdecl StaticEnum<enum_ELinearConstraintMotion>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion,(UObject *)pUVar1,
                       L"ELinearConstraintMotion");
  }
  return Z_Registration_Info_UEnum_ELinearConstraintMotion.OuterSingleton;
}

// StaticEnum<enum_EPhysicalMaterialSoftCollisionMode> @ 144146db0

UEnum * __cdecl StaticEnum<enum_EPhysicalMaterialSoftCollisionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode,
                       (UObject *)pUVar1,L"EPhysicalMaterialSoftCollisionMode");
  }
  return Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton;
}

// StaticEnum<enum_EPhysicalSurface> @ 144146df0

UEnum * __cdecl StaticEnum<enum_EPhysicalSurface>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalSurface,(UObject *)pUVar1,
                       L"EPhysicalSurface");
  }
  return Z_Registration_Info_UEnum_EPhysicalSurface.OuterSingleton;
}

// StaticEnum<enum_EPhysicsType> @ 144146e30

UEnum * __cdecl StaticEnum<enum_EPhysicsType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicsType,(UObject *)pUVar1,L"EPhysicsType")
    ;
  }
  return Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton;
}

// StaticEnum<enum_ERadialImpulseFalloff> @ 144146e70

UEnum * __cdecl StaticEnum<enum_ERadialImpulseFalloff>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff,(UObject *)pUVar1,
                       L"ERadialImpulseFalloff");
  }
  return Z_Registration_Info_UEnum_ERadialImpulseFalloff.OuterSingleton;
}

// StaticEnum<enum_ESleepFamily> @ 144146eb0

UEnum * __cdecl StaticEnum<enum_ESleepFamily>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ESleepFamily,(UObject *)pUVar1,L"ESleepFamily")
    ;
  }
  return Z_Registration_Info_UEnum_ESleepFamily.OuterSingleton;
}

// StaticEnum<enum_EBodyCollisionResponse::Type> @ 144146ef0

UEnum * __cdecl StaticEnum<enum_EBodyCollisionResponse::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse,(UObject *)pUVar1,
                       L"EBodyCollisionResponse");
  }
  return Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton;
}

// StaticEnum<enum_EConstraintFrame::Type> @ 144146f30

UEnum * __cdecl StaticEnum<enum_EConstraintFrame::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EConstraintFrame,(UObject *)pUVar1,
                       L"EConstraintFrame");
  }
  return Z_Registration_Info_UEnum_EConstraintFrame.OuterSingleton;
}

// StaticEnum<enum_EFrictionCombineMode::Type> @ 144146f70

UEnum * __cdecl StaticEnum<enum_EFrictionCombineMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode,(UObject *)pUVar1,
                       L"EFrictionCombineMode");
  }
  return Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton;
}

// SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144146fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TBox<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TBox<double,3> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 144147360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TBox<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TBox<double,3> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144147710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 144147ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144147e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 144148220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 1441485d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 144148980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::FCapsule,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144148d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 1441490e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  TImplicitObjectScaled<Chaos::FConvex,1> *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144149490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (TSphere<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStackY_2e8 [32];
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  EHitFlags local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TSphere<double,3> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  auVar15 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  local_228 = (double)*(float *)&param_1->Center;
  dStack_220 = (double)*(float *)&(param_1->Center).field_0x4;
  local_218 = (double)*(float *)&(param_1->Center).field_0x8;
  dVar7 = (param_3->Scale3D).XY.m128d_f64[0] * local_228;
  dVar8 = (param_3->Scale3D).XY.m128d_f64[1] * dStack_220;
  uVar20 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar4 = auVar15._8_8_;
  dVar5 = local_218 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar19 = blendpd(auVar16,auVar15,2);
  auVar22._8_4_ = SUB84(dVar8,0);
  auVar22._0_8_ = dVar7;
  auVar22._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar8,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar20;
  auVar13._8_4_ = SUB84(dVar6,0);
  auVar13._0_8_ = dVar5;
  auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar13 = blendpd(auVar12,auVar13,2);
  dVar21 = auVar16._8_8_;
  dVar3 = auVar15._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * auVar16._0_8_ - dVar21 * dVar7;
  auVar23._8_8_ = dVar5 * dVar21 - dVar3 * dVar8;
  auVar15._0_8_ = auVar13._0_8_ * dVar3 - auVar19._0_8_ * dVar5;
  auVar15._8_8_ = auVar13._8_8_ * dVar4 - auVar19._8_8_ * dVar6;
  auVar13 = blendpd(auVar23,auVar15,2);
  dVar6 = auVar23._8_8_ + auVar23._8_8_;
  dVar9 = auVar15._0_8_ + auVar15._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar24._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar24._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar17._8_4_ = SUB84(dVar9,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = uVar20;
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = uVar20;
  auVar15 = blendpd(auVar14,auVar24,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar16._0_8_ - dVar6 * dVar21;
  auVar18._8_8_ = auVar24._0_8_ * dVar21 - dVar9 * dVar3;
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar24._0_8_ * auVar19._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * dVar4 - auVar24._8_8_ * auVar19._8_8_;
  dVar7 = dVar6 * dVar4 + dVar7 + auVar18._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar6 = dVar9 * dVar4 + dVar8 + auVar16._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  dVar21 = (double)*(float *)&param_1->_padding_;
  auVar15 = blendpd(auVar18,auVar16,2);
  local_230 = auVar24._0_8_ * dVar4 + dVar5 + auVar15._0_8_ + (param_3->Translation).ZW.m128d_f64[0]
  ;
  dVar4 = dVar21 + dVar7;
  dVar5 = dVar21 + dVar6;
  dVar3 = dVar21 + local_230;
  local_240._8_4_ = SUB84(dVar6,0);
  local_240._0_8_ = dVar7;
  local_240._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar7 = dVar7 - dVar21;
  dVar6 = dVar6 - dVar21;
  dVar21 = local_230 - dVar21;
  local_210 = dVar7;
  local_208 = dVar6;
  local_200 = dVar21;
  iVar11 = _finite(dVar7);
  if ((((iVar11 != 0) && (iVar11 = _finite(dVar6), iVar11 != 0)) &&
      (iVar11 = _finite(dVar21), iVar11 != 0)) &&
     (((iVar11 = _finite(dVar4), iVar11 != 0 && (iVar11 = _finite(dVar5), iVar11 != 0)) &&
      (iVar11 = _finite(dVar3), iVar11 != 0)))) {
    local_180 = param_6;
    local_1b8 = (param_4->field0_0x0)._s_0.X;
    dStack_1b0 = (param_4->field0_0x0)._s_0.Y;
    local_1d8 = &
                ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1a8 = (param_4->field0_0x0)._s_0.Z;
    local_148 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
    local_138 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
    local_1a0 = param_7;
    local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_19d = *param_10;
    local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_178 = param_8;
    local_170 = (param_8->data).word0;
    local_16c = (param_8->data).word1;
    local_168 = (param_8->data).word2;
    local_164 = (param_8->data).word3;
    local_128 = (param_3->Translation).XY.m128d_f64[0];
    dStack_120 = (param_3->Translation).XY.m128d_f64[1];
    local_108 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
    local_e8._8_4_ = SUB84(dVar6,0);
    local_e8._0_8_ = dVar7;
    local_e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_118 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
    local_d8 = local_200;
    local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_268 = (dVar3 - dVar21) * __real_3fe0000000000000;
    local_158 = param_9;
    dVar8 = (dVar4 - dVar7) * __real_3fe0000000000000;
    dVar9 = (dVar5 - dVar6) * __real_3fe0000000000000;
    local_288 = dVar21 + local_268;
    local_298 = dVar7 + dVar8;
    local_290 = dVar6 + dVar9;
    local_19e = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar9,0);
    local_278._0_8_ = dVar8;
    local_278._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_160 = param_1;
    local_d0 = dVar4;
    dStack_c8 = dVar5;
    local_c0 = dVar3;
    local_b8 = local_298;
    local_b0 = local_290;
    local_a8 = local_288;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_298,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1732238023615054486>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                      ,0x296,"bIsValid");
  if (!bVar10) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 144149950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (TSphere<double,3> *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStackY_2e8 [32];
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined **local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  EHitFlags local_1a0;
  byte local_19e;
  FQueryDebugParams local_19d;
  double local_198;
  double dStack_190;
  double local_188;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_180;
  FChaosQueryFilterData *local_178;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  TSphere<double,3> *local_160;
  ICollisionQueryFilterCallbackBase *local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  auVar15 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  auVar16 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  local_228 = (double)*(float *)&param_1->Center;
  dStack_220 = (double)*(float *)&(param_1->Center).field_0x4;
  local_218 = (double)*(float *)&(param_1->Center).field_0x8;
  dVar7 = (param_3->Scale3D).XY.m128d_f64[0] * local_228;
  dVar8 = (param_3->Scale3D).XY.m128d_f64[1] * dStack_220;
  uVar20 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar4 = auVar15._8_8_;
  dVar5 = local_218 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar19 = blendpd(auVar16,auVar15,2);
  auVar22._8_4_ = SUB84(dVar8,0);
  auVar22._0_8_ = dVar7;
  auVar22._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar8,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar20;
  auVar13._8_4_ = SUB84(dVar6,0);
  auVar13._0_8_ = dVar5;
  auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar13 = blendpd(auVar12,auVar13,2);
  dVar21 = auVar16._8_8_;
  dVar3 = auVar15._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * auVar16._0_8_ - dVar21 * dVar7;
  auVar23._8_8_ = dVar5 * dVar21 - dVar3 * dVar8;
  auVar15._0_8_ = auVar13._0_8_ * dVar3 - auVar19._0_8_ * dVar5;
  auVar15._8_8_ = auVar13._8_8_ * dVar4 - auVar19._8_8_ * dVar6;
  auVar13 = blendpd(auVar23,auVar15,2);
  dVar6 = auVar23._8_8_ + auVar23._8_8_;
  dVar9 = auVar15._0_8_ + auVar15._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar24._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar24._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar17._8_4_ = SUB84(dVar9,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = uVar20;
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = uVar20;
  auVar15 = blendpd(auVar14,auVar24,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar16._0_8_ - dVar6 * dVar21;
  auVar18._8_8_ = auVar24._0_8_ * dVar21 - dVar9 * dVar3;
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar24._0_8_ * auVar19._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * dVar4 - auVar24._8_8_ * auVar19._8_8_;
  dVar7 = dVar6 * dVar4 + dVar7 + auVar18._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  dVar6 = dVar9 * dVar4 + dVar8 + auVar16._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  dVar21 = (double)*(float *)&param_1->_padding_;
  auVar15 = blendpd(auVar18,auVar16,2);
  local_230 = auVar24._0_8_ * dVar4 + dVar5 + auVar15._0_8_ + (param_3->Translation).ZW.m128d_f64[0]
  ;
  dVar4 = dVar21 + dVar7;
  dVar5 = dVar21 + dVar6;
  dVar3 = dVar21 + local_230;
  local_240._8_4_ = SUB84(dVar6,0);
  local_240._0_8_ = dVar7;
  local_240._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar7 = dVar7 - dVar21;
  dVar6 = dVar6 - dVar21;
  dVar21 = local_230 - dVar21;
  local_210 = dVar7;
  local_208 = dVar6;
  local_200 = dVar21;
  iVar11 = _finite(dVar7);
  if ((((iVar11 != 0) && (iVar11 = _finite(dVar6), iVar11 != 0)) &&
      (iVar11 = _finite(dVar21), iVar11 != 0)) &&
     (((iVar11 = _finite(dVar4), iVar11 != 0 && (iVar11 = _finite(dVar5), iVar11 != 0)) &&
      (iVar11 = _finite(dVar3), iVar11 != 0)))) {
    local_180 = param_6;
    local_1b8 = (param_4->field0_0x0)._s_0.X;
    dStack_1b0 = (param_4->field0_0x0)._s_0.Y;
    local_1d8 = &
                ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1a8 = (param_4->field0_0x0)._s_0.Z;
    local_148 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_140 = (param_3->Rotation).XY.m128d_f64[1];
    local_138 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_130 = (param_3->Rotation).ZW.m128d_f64[1];
    local_1a0 = param_7;
    local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_19d = *param_10;
    local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_178 = param_8;
    local_170 = (param_8->data).word0;
    local_16c = (param_8->data).word1;
    local_168 = (param_8->data).word2;
    local_164 = (param_8->data).word3;
    local_128 = (param_3->Translation).XY.m128d_f64[0];
    dStack_120 = (param_3->Translation).XY.m128d_f64[1];
    local_108 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_100 = (param_3->Scale3D).XY.m128d_f64[1];
    local_e8._8_4_ = SUB84(dVar6,0);
    local_e8._0_8_ = dVar7;
    local_e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_118 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_110 = (param_3->Translation).ZW.m128d_f64[1];
    local_d8 = local_200;
    local_f8 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_f0 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_268 = (dVar3 - dVar21) * __real_3fe0000000000000;
    local_158 = param_9;
    dVar8 = (dVar4 - dVar7) * __real_3fe0000000000000;
    dVar9 = (dVar5 - dVar6) * __real_3fe0000000000000;
    local_288 = dVar21 + local_268;
    local_298 = dVar7 + dVar8;
    local_290 = dVar6 + dVar9;
    local_19e = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar9,0);
    local_278._0_8_ = dVar8;
    local_278._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_160 = param_1;
    local_d0 = dVar4;
    dStack_c8 = dVar5;
    local_c0 = dVar3;
    local_b8 = local_298;
    local_b0 = local_290;
    local_a8 = local_288;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_298,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1732238023615054486>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                      ,0x296,"bIsValid");
  if (!bVar10) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 144149e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (FCapsule *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_308 [32];
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined1 local_288 [16];
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined **local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  EHitFlags local_1b0;
  byte local_1ae;
  FQueryDebugParams local_1ad;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_190;
  FChaosQueryFilterData *local_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  FCapsule *local_170;
  ICollisionQueryFilterCallbackBase *local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_248 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_240 = (param_3->Rotation).XY.m128d_f64[1];
  local_238 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_230 = (param_3->Rotation).ZW.m128d_f64[1];
  local_228 = (param_3->Translation).XY.m128d_f64[0];
  dStack_220 = (param_3->Translation).XY.m128d_f64[1];
  local_218 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_210 = (param_3->Translation).ZW.m128d_f64[1];
  local_208 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_200 = (param_3->Scale3D).XY.m128d_f64[1];
  local_1f8 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_1f0 = (param_3->Scale3D).ZW.m128d_f64[1];
  Chaos::FCapsule::CalculateTransformedBounds
            (param_1,(TAABB<double,3> *)&local_2b8,(TRigidTransform<double,3> *)&local_248);
  iVar6 = _finite(local_2b8);
  if (iVar6 != 0) {
    iVar6 = _finite(local_2b0);
    if (((iVar6 != 0) && (iVar6 = _finite(local_2a8), iVar6 != 0)) &&
       (iVar6 = _finite(local_2a0), iVar6 != 0)) {
      iVar6 = _finite(local_298);
      if ((iVar6 != 0) && (iVar6 = _finite(local_290), iVar6 != 0)) {
        local_190 = param_6;
        local_1c8 = (param_4->field0_0x0)._s_0.X;
        dStack_1c0 = (param_4->field0_0x0)._s_0.Y;
        local_1e8 = &
                    ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
        ;
        local_1b8 = (param_4->field0_0x0)._s_0.Z;
        local_158 = (param_3->Rotation).XY.m128d_f64[0];
        dStack_150 = (param_3->Rotation).XY.m128d_f64[1];
        local_1b0 = param_7;
        local_148 = (param_3->Rotation).ZW.m128d_f64[0];
        dStack_140 = (param_3->Rotation).ZW.m128d_f64[1];
        local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1ad = *param_10;
        local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_188 = param_8;
        local_180 = (param_8->data).word0;
        local_17c = (param_8->data).word1;
        local_178 = (param_8->data).word2;
        local_174 = (param_8->data).word3;
        local_138 = (param_3->Translation).XY.m128d_f64[0];
        dStack_130 = (param_3->Translation).XY.m128d_f64[1];
        local_118 = (param_3->Scale3D).XY.m128d_f64[0];
        dStack_110 = (param_3->Scale3D).XY.m128d_f64[1];
        local_f8._8_4_ = SUB84(local_2b0,0);
        local_f8._0_8_ = local_2b8;
        local_f8._12_4_ = (int)((ulonglong)local_2b0 >> 0x20);
        local_e0._8_4_ = SUB84(local_298,0);
        local_e0._0_8_ = local_2a0;
        local_e0._12_4_ = (int)((ulonglong)local_298 >> 0x20);
        dVar3 = (local_2a0 - local_2b8) * __real_3fe0000000000000;
        local_168 = param_9;
        local_128 = (param_3->Translation).ZW.m128d_f64[0];
        dStack_120 = (param_3->Translation).ZW.m128d_f64[1];
        dVar4 = (local_298 - local_2b0) * __real_3fe0000000000000;
        local_d0 = local_290;
        local_2d0 = local_2b8 + dVar3;
        local_108 = (param_3->Scale3D).ZW.m128d_f64[0];
        dStack_100 = (param_3->Scale3D).ZW.m128d_f64[1];
        local_e8 = local_2a8;
        local_2c8 = local_2b0 + dVar4;
        local_278 = (local_290 - local_2a8) * __real_3fe0000000000000;
        local_2c0 = local_2a8 + local_278;
        local_1ae = (byte)(param_8->flags).mBits >> 4 & 1;
        param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
        local_268 = (param_4->field0_0x0)._s_0.X;
        dStack_260 = (param_4->field0_0x0)._s_0.Y;
        local_258 = (param_4->field0_0x0)._s_0.Z;
        local_288._8_4_ = SUB84(dVar4,0);
        local_288._0_8_ = dVar3;
        local_288._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_170 = param_1;
        local_c8 = local_2d0;
        local_c0 = local_2c8;
        local_b8 = local_2c0;
        (**(code **)(param_2->_padding_ + 0x58))
                  (param_2,&local_2d0,&local_268,SUB84((double)param_5,0));
        piVar1 = &param_6->AcceleratorDepth;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
                  (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
        return;
      }
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 14414a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (FCapsule *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_308 [32];
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined1 local_288 [16];
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined **local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  EHitFlags local_1b0;
  byte local_1ae;
  FQueryDebugParams local_1ad;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_190;
  FChaosQueryFilterData *local_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  FCapsule *local_170;
  ICollisionQueryFilterCallbackBase *local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_248 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_240 = (param_3->Rotation).XY.m128d_f64[1];
  local_238 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_230 = (param_3->Rotation).ZW.m128d_f64[1];
  local_228 = (param_3->Translation).XY.m128d_f64[0];
  dStack_220 = (param_3->Translation).XY.m128d_f64[1];
  local_218 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_210 = (param_3->Translation).ZW.m128d_f64[1];
  local_208 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_200 = (param_3->Scale3D).XY.m128d_f64[1];
  local_1f8 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_1f0 = (param_3->Scale3D).ZW.m128d_f64[1];
  Chaos::FCapsule::CalculateTransformedBounds
            (param_1,(TAABB<double,3> *)&local_2b8,(TRigidTransform<double,3> *)&local_248);
  iVar6 = _finite(local_2b8);
  if (iVar6 != 0) {
    iVar6 = _finite(local_2b0);
    if (((iVar6 != 0) && (iVar6 = _finite(local_2a8), iVar6 != 0)) &&
       (iVar6 = _finite(local_2a0), iVar6 != 0)) {
      iVar6 = _finite(local_298);
      if ((iVar6 != 0) && (iVar6 = _finite(local_290), iVar6 != 0)) {
        local_190 = param_6;
        local_1c8 = (param_4->field0_0x0)._s_0.X;
        dStack_1c0 = (param_4->field0_0x0)._s_0.Y;
        local_1e8 = &
                    ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
        ;
        local_1b8 = (param_4->field0_0x0)._s_0.Z;
        local_158 = (param_3->Rotation).XY.m128d_f64[0];
        dStack_150 = (param_3->Rotation).XY.m128d_f64[1];
        local_1b0 = param_7;
        local_148 = (param_3->Rotation).ZW.m128d_f64[0];
        dStack_140 = (param_3->Rotation).ZW.m128d_f64[1];
        local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1ad = *param_10;
        local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_188 = param_8;
        local_180 = (param_8->data).word0;
        local_17c = (param_8->data).word1;
        local_178 = (param_8->data).word2;
        local_174 = (param_8->data).word3;
        local_138 = (param_3->Translation).XY.m128d_f64[0];
        dStack_130 = (param_3->Translation).XY.m128d_f64[1];
        local_118 = (param_3->Scale3D).XY.m128d_f64[0];
        dStack_110 = (param_3->Scale3D).XY.m128d_f64[1];
        local_f8._8_4_ = SUB84(local_2b0,0);
        local_f8._0_8_ = local_2b8;
        local_f8._12_4_ = (int)((ulonglong)local_2b0 >> 0x20);
        local_e0._8_4_ = SUB84(local_298,0);
        local_e0._0_8_ = local_2a0;
        local_e0._12_4_ = (int)((ulonglong)local_298 >> 0x20);
        dVar3 = (local_2a0 - local_2b8) * __real_3fe0000000000000;
        local_168 = param_9;
        local_128 = (param_3->Translation).ZW.m128d_f64[0];
        dStack_120 = (param_3->Translation).ZW.m128d_f64[1];
        dVar4 = (local_298 - local_2b0) * __real_3fe0000000000000;
        local_d0 = local_290;
        local_2d0 = local_2b8 + dVar3;
        local_108 = (param_3->Scale3D).ZW.m128d_f64[0];
        dStack_100 = (param_3->Scale3D).ZW.m128d_f64[1];
        local_e8 = local_2a8;
        local_2c8 = local_2b0 + dVar4;
        local_278 = (local_290 - local_2a8) * __real_3fe0000000000000;
        local_2c0 = local_2a8 + local_278;
        local_1ae = (byte)(param_8->flags).mBits >> 4 & 1;
        param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
        local_268 = (param_4->field0_0x0)._s_0.X;
        dStack_260 = (param_4->field0_0x0)._s_0.Y;
        local_258 = (param_4->field0_0x0)._s_0.Z;
        local_288._8_4_ = SUB84(dVar4,0);
        local_288._0_8_ = dVar3;
        local_288._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_170 = param_1;
        local_c8 = local_2d0;
        local_c0 = local_2c8;
        local_b8 = local_2c0;
        (**(code **)(param_2->_padding_ + 0x58))
                  (param_2,&local_2d0,&local_268,SUB84((double)param_5,0));
        piVar1 = &param_6->AcceleratorDepth;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
                  (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
        return;
      }
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle> @ 14414a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
          (FConvex *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FPTSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  FConvex *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle> @ 14414a920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
          (FConvex *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float param_5,
          FSQHitBuffer<ChaosInterface::FSweepHit> *param_6,EHitFlags param_7,
          FChaosQueryFilterData *param_8,ICollisionQueryFilterCallbackBase *param_9,
          FQueryDebugParams *param_10)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *this;
  undefined1 auStackY_2f8 [32];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_240 [56];
  undefined **local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  EHitFlags local_1d0;
  byte local_1ce;
  FQueryDebugParams local_1cd;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FSQHitBuffer<ChaosInterface::FSweepHit> *local_1b0;
  FChaosQueryFilterData *local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  FConvex *local_190;
  ICollisionQueryFilterCallbackBase *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_c8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).XY.m128d_f64[1];
  local_b8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_b0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_a8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_3->Translation).XY.m128d_f64[1];
  local_98 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_90 = (param_3->Translation).ZW.m128d_f64[1];
  local_88 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).XY.m128d_f64[1];
  local_78 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_70 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((*(char *)((longlong)&param_1->_padding_ + 6) == '\0') &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HasBoundingBox()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                         ,0x10f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x90))(param_1,local_240);
  Chaos::TAABB<double,3>::TransformedAABB
            (this,(TAABB<double,3> *)&local_2c0,(TRigidTransform<double,3> *)&local_c8);
  iVar6 = _finite(local_2c0);
  if ((((iVar6 != 0) && (iVar6 = _finite(dStack_2b8), iVar6 != 0)) &&
      (iVar6 = _finite(local_2b0), iVar6 != 0)) &&
     (((iVar6 = _finite(local_2a8), iVar6 != 0 && (iVar6 = _finite(dStack_2a0), iVar6 != 0)) &&
      (iVar6 = _finite(local_298), iVar6 != 0)))) {
    local_1b0 = param_6;
    local_1e8 = (param_4->field0_0x0)._s_0.X;
    dStack_1e0 = (param_4->field0_0x0)._s_0.Y;
    local_208 = &
                ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
    ;
    local_1d8 = (param_4->field0_0x0)._s_0.Z;
    local_178 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_170 = (param_3->Rotation).XY.m128d_f64[1];
    local_1d0 = param_7;
    local_168 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_160 = (param_3->Rotation).ZW.m128d_f64[1];
    local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1cd = *param_10;
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1a8 = param_8;
    local_1a0 = (param_8->data).word0;
    local_19c = (param_8->data).word1;
    local_198 = (param_8->data).word2;
    local_194 = (param_8->data).word3;
    local_158 = (param_3->Translation).XY.m128d_f64[0];
    dStack_150 = (param_3->Translation).XY.m128d_f64[1];
    local_100 = local_2a8;
    dStack_f8 = dStack_2a0;
    local_138 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_130 = (param_3->Scale3D).XY.m128d_f64[1];
    local_148 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_140 = (param_3->Translation).ZW.m128d_f64[1];
    local_f0 = local_298;
    local_128 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_120 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_188 = param_9;
    dVar3 = (local_2a8 - local_2c0) * __real_3fe0000000000000;
    local_268 = (local_298 - local_2b0) * __real_3fe0000000000000;
    local_118 = local_2c0;
    dStack_110 = dStack_2b8;
    dVar4 = (dStack_2a0 - dStack_2b8) * __real_3fe0000000000000;
    local_290 = local_2c0 + dVar3;
    local_108 = local_2b0;
    local_280 = local_2b0 + local_268;
    local_288 = dStack_2b8 + dVar4;
    local_1ce = (byte)(param_8->flags).mBits >> 4 & 1;
    param_6->AcceleratorDepth = param_6->AcceleratorDepth + 1;
    local_258 = (param_4->field0_0x0)._s_0.X;
    dStack_250 = (param_4->field0_0x0)._s_0.Y;
    local_248 = (param_4->field0_0x0)._s_0.Z;
    local_278._8_4_ = SUB84(dVar4,0);
    local_278._0_8_ = dVar3;
    local_278._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_190 = param_1;
    local_e8 = local_290;
    local_e0 = local_288;
    local_d8 = local_280;
    (**(code **)(param_2->_padding_ + 0x58))(param_2,&local_290,&local_258,SUB84((double)param_5,0))
    ;
    piVar1 = &param_6->AcceleratorDepth;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    ChaosInterface::FinishQueryHelper<ChaosInterface::FSweepHit>
              (&param_6->Hits,&param_6->CurrentBlockingHit,param_6->bHasBlockingHit);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1732238023615054486>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\SQVisitor.h"
                     ,0x296,"bIsValid");
  if (!bVar5) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ~TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,1,0> @ 1441a1020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FChaosScene::SetDebugDrawScene_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 1441a2030

void * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FOverlapHit>::_scalar_deleting_destructor_
          (FSQHitBuffer<ChaosInterface::FOverlapHit> *this,uint param_1)

{
  ForElementType<ChaosInterface::FOverlapHit> FVar1;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFOverlapHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ChaosInterface::FOverlapHit>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2090

void * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FRaycastHit>::_scalar_deleting_destructor_
          (FSQHitBuffer<ChaosInterface::FRaycastHit> *this,uint param_1)

{
  ForElementType<ChaosInterface::FRaycastHit> FVar1;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFRaycastHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ChaosInterface::FRaycastHit>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a20f0

void * __thiscall
ChaosInterface::FSQHitBuffer<ChaosInterface::FSweepHit>::_scalar_deleting_destructor_
          (FSQHitBuffer<ChaosInterface::FSweepHit> *this,uint param_1)

{
  ForElementType<ChaosInterface::FSweepHit> FVar1;
  
  this->_padding_ = (longlong)&___7__FSQHitBuffer_UFSweepHit_ChaosInterface___ChaosInterface__6B_;
  FVar1 = (this->Hits).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<ChaosInterface::FSweepHit>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2150

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2190

void * __thiscall
TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a21d0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2210

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2250

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2290

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a22d0

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2310

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2350

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2390

void * __thiscall
TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a23d0

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2410

void * __thiscall
TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TBPVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2450

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
_scalar_deleting_destructor_
          (TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2490

void * __thiscall
TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
_scalar_deleting_destructor_
          (TBPVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a24d0

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
_scalar_deleting_destructor_
          (TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2510

void * __thiscall
TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
_scalar_deleting_destructor_
          (TBPVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TBPVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2590

void * __thiscall
TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a25d0

void * __thiscall
TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2610

void * __thiscall
TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2650

void * __thiscall
TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TBox<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TBox_N_02_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2690

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a26d0

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2710

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2750

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TBox_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2790

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a27d0

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2810

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2850

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_V__TSphere_N_02_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2890

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a28d0

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2910

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2950

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFCapsule_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2990

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a29d0

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2a10

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2a50

void * __thiscall
TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2a90

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2ad0

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2b10

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTRaycastHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTRaycastHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTRaycastHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2b50

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2b90

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FRaycastHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FRaycastHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFRaycastHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2bd0

void * __thiscall
TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
::_scalar_deleting_destructor_
          (TSQVisitor<Chaos::TSphere<double,3>,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2c10

void * __thiscall
TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2c50

void * __thiscall
TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2c90

void * __thiscall
TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2cd0

void * __thiscall
TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FCapsule,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFCapsule_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2d10

void * __thiscall
TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FOverlapHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFOverlapHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2d50

void * __thiscall
TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTOverlapHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTOverlapHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2d90

void * __thiscall
TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FPTSweepHit,0>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFPTSweepHit_ChaosInterface___0A___6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2dd0

void * __thiscall
TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>::
_scalar_deleting_destructor_
          (TSQVisitor<Chaos::FConvex,Chaos::FAccelerationStructureHandle,ChaosInterface::FSweepHit,1>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TSQVisitor_VFConvex_Chaos__VFAccelerationStructureHandle_2_UFSweepHit_ChaosInterface___00__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2e10

void * __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
_scalar_deleting_destructor_
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this,
          uint param_1)

{
  ~TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2e50

void * __thiscall
FChaosSQAccelerator::_scalar_deleting_destructor_(FChaosSQAccelerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChaosSQAccelerator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2e90

void * __thiscall FChaosScene::_scalar_deleting_destructor_(FChaosScene *this,uint param_1)

{
  ~FChaosScene(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2ed0

void * __thiscall
FChaosSceneCallbackInput::_scalar_deleting_destructor_(FChaosSceneCallbackInput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2f00

void * __thiscall
FChaosSceneSimCallback::_scalar_deleting_destructor_(FChaosSceneSimCallback *this,uint param_1)

{
  Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
  ~TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>
            ((TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2f40

void * __thiscall
FSQCaptureFilterCallback::_scalar_deleting_destructor_(FSQCaptureFilterCallback *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICollisionQueryFilterCallbackBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2f80

void * __thiscall
Chaos::FSimCallbackInput::_scalar_deleting_destructor_(FSimCallbackInput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2fb0

void * __thiscall
ICollisionQueryFilterCallbackBase::_scalar_deleting_destructor_
          (ICollisionQueryFilterCallbackBase *this,uint param_1)

{
  *this = (ICollisionQueryFilterCallbackBase)&___7ICollisionQueryFilterCallbackBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a2ff0

void * __thiscall UBodySetupCore::_scalar_deleting_destructor_(UBodySetupCore *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UBodySetupCore__6B_;
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

// `scalar_deleting_destructor' @ 1441a3050

void * __thiscall
UChaosPhysicalMaterial::_scalar_deleting_destructor_(UChaosPhysicalMaterial *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UChaosPhysicalMaterial__6B_;
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

// `scalar_deleting_destructor' @ 1441a30b0

void * __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::_scalar_deleting_destructor_
          (UDEPRECATED_PhysicalMaterialPropertyBase *this,uint param_1)

{
  *(undefined ***)this = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
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

// `scalar_deleting_destructor' @ 1441a3110

void * __thiscall
UPhysicalMaterial::_scalar_deleting_destructor_(UPhysicalMaterial *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPhysicalMaterial__6B_;
  ::operator_delete((this->MaterialHandle).Ptr,4);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441a3190

void * __thiscall
UPhysicsSettingsCore::_scalar_deleting_destructor_(UPhysicsSettingsCore *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// AngularBreakScale @ 1441a6f00

double __cdecl Chaos::ConstraintSettings::AngularBreakScale(void)

{
  return (double)JointConstraintDefaults::AngularBreakScale;
}

// AngularDriveDampingScale @ 1441a6f20

double __cdecl Chaos::ConstraintSettings::AngularDriveDampingScale(void)

{
  return (double)JointConstraintDefaults::AngularDriveDampingScale;
}

// AngularDriveStiffnessScale @ 1441a6f40

double __cdecl Chaos::ConstraintSettings::AngularDriveStiffnessScale(void)

{
  return (double)JointConstraintDefaults::AngularDriveStiffnessScale;
}

// C2UFilterData @ 1441a7230

FCollisionFilterData * __cdecl
C2UFilterData(FCollisionFilterData *__return_storage_ptr__,FChaosFilterData *param_1)

{
  __return_storage_ptr__->Word0 = param_1->word0;
  __return_storage_ptr__->Word1 = param_1->word1;
  __return_storage_ptr__->Word2 = param_1->word2;
  __return_storage_ptr__->Word3 = param_1->word3;
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeBodyInstanceCore @ 1441aba70

void __cdecl EmptyLinkFunctionForGeneratedCodeBodyInstanceCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBodySetupCore @ 1441aba80

void __cdecl EmptyLinkFunctionForGeneratedCodeBodySetupCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBodySetupEnums @ 1441aba90

void __cdecl EmptyLinkFunctionForGeneratedCodeBodySetupEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosEngineInterface @ 1441abaa0

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosEngineInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeChaosPhysicalMaterial @ 1441abab0

void __cdecl EmptyLinkFunctionForGeneratedCodeChaosPhysicalMaterial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicalMaterial @ 1441abac0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicalMaterial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase @ 1441abad0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsCore_init @ 1441abae0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsSettingsCore @ 1441abaf0

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsSettingsCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePhysicsSettingsEnums @ 1441abb00

void __cdecl EmptyLinkFunctionForGeneratedCodePhysicsSettingsEnums(void)

{
  return;
}

// FindFaceIndex @ 1441acb80

uint __cdecl FindFaceIndex(FLocationHit *param_1,TVector<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [16];
  double dStack_90;
  
  lVar2 = param_1->_padding_;
  dVar25 = (param_1->WorldPosition).field0_0x0._s_0.X - *(double *)(lVar2 + 0x20);
  dVar30 = (param_1->WorldPosition).field0_0x0._s_0.Y - *(double *)(lVar2 + 0x28);
  uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
  dVar4 = (double)(float)*(undefined8 *)(lVar2 + 0x48) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar33._0_8_ = (param_1->WorldPosition).field0_0x0._s_0.Z - *(double *)(lVar2 + 0x30);
  auVar33._8_8_ = 0;
  auVar26._8_4_ = SUB84(dVar30,0);
  auVar26._0_8_ = dVar25;
  auVar26._12_4_ = uVar31;
  auVar24._8_4_ = SUB84(dVar30,0);
  auVar24._0_8_ = dVar25;
  auVar24._12_4_ = uVar31;
  auVar13 = blendpd(auVar24,auVar33,2);
  dVar6 = (double)*(float *)(lVar2 + 0x40) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar7 = (double)*(float *)(lVar2 + 0x44) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar24 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar32 = auVar24._8_8_;
  auVar36._8_4_ = SUB84(dVar7,0);
  auVar36._0_8_ = dVar6;
  auVar36._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar37._8_4_ = SUB84(dVar5,0);
  auVar37._0_8_ = dVar4;
  auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar37 = blendpd(auVar36,auVar37,2);
  auVar27._0_8_ = auVar26._8_8_ * dVar6 - dVar25 * dVar7;
  auVar27._8_8_ = auVar33._0_8_ * dVar7 - dVar30 * dVar4;
  dVar11 = auVar37._0_8_;
  dVar12 = auVar37._8_8_;
  auVar14._0_8_ = auVar13._0_8_ * dVar4 - dVar11 * auVar33._0_8_;
  auVar14._8_8_ = auVar13._8_8_ * dVar5 - dVar12 * 0.0;
  auVar13 = blendpd(auVar27,auVar14,2);
  dVar8 = auVar27._8_8_ + auVar27._8_8_;
  dVar9 = auVar14._0_8_ + auVar14._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar28._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar28._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar20._8_4_ = SUB84(dVar9,0);
  auVar20._0_8_ = dVar8;
  auVar20._12_4_ = uVar31;
  auVar15._8_4_ = SUB84(dVar9,0);
  auVar15._0_8_ = dVar8;
  auVar15._12_4_ = uVar31;
  auVar13 = blendpd(auVar15,auVar28,2);
  auVar21._0_8_ = auVar20._8_8_ * dVar6 - dVar8 * dVar7;
  auVar21._8_8_ = auVar28._0_8_ * dVar7 - dVar9 * dVar4;
  auVar16._0_8_ = auVar13._0_8_ * dVar4 - auVar28._0_8_ * dVar11;
  auVar16._8_8_ = auVar13._8_8_ * dVar5 - auVar28._8_8_ * dVar12;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  auVar13 = blendpd(auVar21,auVar16,2);
  dVar30 = dVar9 * dVar5 + dVar30 + auVar16._0_8_;
  dStack_90 = auVar28._0_8_ * dVar5 + auVar33._0_8_ + auVar13._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1;
  auVar13 = blendpd(auVar24,auVar13,2);
  auVar34._0_8_ = dVar32 * dVar6 - auVar24._0_8_ * dVar7;
  auVar34._8_8_ = dVar1 * dVar7 - dVar32 * dVar4;
  plVar3 = *(longlong **)(param_1->_padding_ + 0x10);
  auVar29._8_4_ = SUB84(auVar34._8_8_,0);
  auVar29._0_8_ = auVar34._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar17._0_8_ = auVar13._0_8_ * dVar4 - dVar1 * dVar11;
  auVar17._8_8_ = auVar13._8_8_ * dVar5 - dVar12 * 0.0;
  auStack_a0._8_4_ = SUB84(dVar30,0);
  auStack_a0._0_8_ = dVar8 * dVar5 + dVar25 + auVar21._8_8_;
  auStack_a0._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar13 = blendpd(auVar34,auVar17,2);
  dVar25 = auVar29._8_8_ + auVar29._8_8_;
  dVar30 = auVar17._0_8_ + auVar17._0_8_;
  auVar35._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar35._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar22._8_4_ = SUB84(dVar30,0);
  auVar22._0_8_ = dVar25;
  uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar22._12_4_ = uVar31;
  auVar18._8_4_ = SUB84(dVar30,0);
  auVar18._0_8_ = dVar25;
  auVar18._12_4_ = uVar31;
  auVar13 = blendpd(auVar18,auVar35,2);
  auVar23._0_8_ = auVar22._8_8_ * dVar6 - dVar25 * dVar7;
  auVar23._8_8_ = auVar35._0_8_ * dVar7 - dVar30 * dVar4;
  auVar19._0_8_ = auVar13._0_8_ * dVar4 - auVar35._0_8_ * dVar11;
  auVar19._8_8_ = auVar13._8_8_ * dVar5 - auVar35._8_8_ * dVar12;
  dStack_b8 = dVar25 * dVar5 + auVar24._0_8_ + auVar23._8_8_;
  dStack_b0 = dVar30 * dVar5 + dVar32 + auVar19._0_8_;
  auVar24 = blendpd(auVar23,auVar19,2);
  dStack_a8 = auVar35._0_8_ * dVar5 + dVar1 + auVar24._0_8_;
  uVar10 = (**(code **)(*plVar3 + 0xb8))
                     (plVar3,auStack_a0,&dStack_b8,(int)param_1->_padding_,__real_3ff0000000000000);
  return uVar10;
}

// FindFaceIndex @ 1441acb90

uint __cdecl FindFaceIndex(FPTLocationHit *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TVector<double,3> *pTVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [16];
  double dStack_90;
  
  pTVar16 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1->_padding_,
                       *(int *)((undefined8 *)param_1->_padding_ + 1));
  uVar15 = *(uint *)((longlong *)param_1->_padding_ + 1);
  lVar17 = (longlong)(int)uVar15;
  lVar3 = *(longlong *)param_1->_padding_;
  uVar14 = 0;
  if ((int)uVar15 < *(int *)(lVar3 + 0x50)) {
    uVar14 = ~uVar15 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return uVar15;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + 8 + lVar17 * 0x10);
  dVar6 = (param_1->WorldPosition).field0_0x0._s_0.X - *(double *)pTVar16;
  dVar7 = (param_1->WorldPosition).field0_0x0._s_0.Y - *(double *)&pTVar16->field_0x8;
  uVar36 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (double)(float)uVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = (double)(float)((ulonglong)uVar1 >> 0x20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar38._0_8_ = (param_1->WorldPosition).field0_0x0._s_0.Z - *(double *)&pTVar16->field_0x10;
  auVar38._8_8_ = 0;
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar36;
  auVar29._8_4_ = SUB84(dVar7,0);
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = uVar36;
  auVar18 = blendpd(auVar29,auVar38,2);
  dVar10 = (double)*(float *)(lVar3 + lVar17 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = (double)*(float *)(lVar3 + 4 + lVar17 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar29 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar37 = auVar29._8_8_;
  auVar42._8_4_ = SUB84(dVar11,0);
  auVar42._0_8_ = dVar10;
  auVar42._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar43._8_4_ = SUB84(dVar9,0);
  auVar43._0_8_ = dVar8;
  auVar43._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar43 = blendpd(auVar42,auVar43,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar10 - dVar11 * dVar6;
  auVar32._8_8_ = auVar38._0_8_ * dVar11 - dVar8 * dVar7;
  dVar41 = auVar43._0_8_;
  dVar44 = auVar43._8_8_;
  auVar19._0_8_ = auVar18._0_8_ * dVar8 - auVar38._0_8_ * dVar41;
  auVar19._8_8_ = auVar18._8_8_ * dVar9 - dVar44 * 0.0;
  auVar18 = blendpd(auVar32,auVar19,2);
  auVar33._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar33._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  dVar12 = auVar32._8_8_ + auVar32._8_8_;
  dVar30 = auVar19._0_8_ + auVar19._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar25._8_4_ = SUB84(dVar30,0);
  auVar25._0_8_ = dVar12;
  auVar25._12_4_ = uVar36;
  auVar20._8_4_ = SUB84(dVar30,0);
  auVar20._0_8_ = dVar12;
  auVar20._12_4_ = uVar36;
  auVar18 = blendpd(auVar20,auVar33,2);
  auVar26._0_8_ = auVar25._8_8_ * dVar10 - dVar12 * dVar11;
  auVar26._8_8_ = auVar33._0_8_ * dVar11 - dVar30 * dVar8;
  auVar21._0_8_ = auVar18._0_8_ * dVar8 - auVar33._0_8_ * dVar41;
  auVar21._8_8_ = auVar18._8_8_ * dVar9 - auVar33._8_8_ * dVar44;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar18 = blendpd(auVar26,auVar21,2);
  dVar7 = dVar30 * dVar9 + dVar7 + auVar21._0_8_;
  dStack_90 = auVar33._0_8_ * dVar9 + auVar38._0_8_ + auVar18._0_8_;
  auVar39._0_8_ = dVar37 * dVar10 - auVar29._0_8_ * dVar11;
  auVar39._8_8_ = dVar2 * dVar11 - dVar37 * dVar8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar2;
  auVar18 = blendpd(auVar29,auVar18,2);
  auVar34._8_4_ = SUB84(auVar39._8_8_,0);
  auVar34._0_8_ = auVar39._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar22._0_8_ = auVar18._0_8_ * dVar8 - dVar2 * dVar41;
  auVar22._8_8_ = auVar18._8_8_ * dVar9 - dVar44 * 0.0;
  auVar18 = blendpd(auVar39,auVar22,2);
  dVar30 = auVar34._8_8_ + auVar34._8_8_;
  dVar35 = auVar22._0_8_ + auVar22._0_8_;
  auVar40._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar40._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar27._8_4_ = SUB84(dVar35,0);
  auVar27._0_8_ = dVar30;
  uVar36 = (undefined4)((ulonglong)dVar35 >> 0x20);
  auVar27._12_4_ = uVar36;
  auVar23._8_4_ = SUB84(dVar35,0);
  auVar23._0_8_ = dVar30;
  auVar23._12_4_ = uVar36;
  plVar4 = *(longlong **)(param_1->_padding_ + 0x10);
  auVar18 = blendpd(auVar23,auVar40,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar10 - dVar30 * dVar11;
  auVar28._8_8_ = auVar40._0_8_ * dVar11 - dVar35 * dVar8;
  auVar24._0_8_ = auVar18._0_8_ * dVar8 - auVar40._0_8_ * dVar41;
  auVar24._8_8_ = auVar18._8_8_ * dVar9 - auVar40._8_8_ * dVar44;
  dStack_b8 = dVar30 * dVar9 + auVar29._0_8_ + auVar28._8_8_;
  dStack_b0 = dVar35 * dVar9 + dVar37 + auVar24._0_8_;
  auVar29 = blendpd(auVar28,auVar24,2);
  dStack_a8 = auVar40._0_8_ * dVar9 + dVar2 + auVar29._0_8_;
  auStack_a0._8_4_ = SUB84(dVar7,0);
  auStack_a0._0_8_ = dVar12 * dVar9 + dVar6 + auVar26._8_8_;
  auStack_a0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  uVar15 = (**(code **)(*plVar4 + 0xb8))
                     (plVar4,auStack_a0,&dStack_b8,(int)param_1->_padding_,__real_3ff0000000000000);
  return uVar15;
}

// GetAABBTreeStats @ 1441acf40

void __cdecl
GetAABBTreeStats(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                 *param_1,AABBTreeStatistics *param_2,AABBTreeExpensiveStatistics *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar8;
  FCsvProfiler *pFVar9;
  int iVar10;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined2 *local_50 [3];
  
  if (!__CsvProfilerStat457) {
    FCsvProfilerTrace::OutputInlineStat
              ("GetAABBTreeStats",_GCsvCategory_AABBTreeExpensiveStats.Index);
    __CsvProfilerStat457 = true;
  }
  uVar4 = _GCsvCategory_AABBTreeExpensiveStats.Index;
  FCsvProfiler::BeginStat
            ("GetAABBTreeStats",_GCsvCategory_AABBTreeExpensiveStats.Index,"CSV_GetAABBTreeStats");
  param_2->StatNumNonEmptyCellsInGrid = 0;
  param_2->StatNumElementsTooLargeForGrid = 0;
  param_2->StatNumDirtyElements = 0;
  param_2->StatNumGridOverflowElements = 0;
  (**(code **)(param_1->_padding_ + 0x108))(param_1,local_50);
  local_res10 = (uint)local_50[1];
  uVar12 = (ulonglong)(int)local_res10;
  puVar1 = local_50[0] + uVar12;
  puVar15 = local_50[0];
  while( true ) {
    if ((int)local_50[1] != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FSpatialAccelerationIdx,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar15 == puVar1) break;
    pTVar8 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              *)(**(code **)(param_1->_padding_ + 0xf0))(param_1,*puVar15);
    cVar2 = *(char *)((longlong)&pTVar8->_padding_ + 5);
    pTVar11 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
               *)0x0;
    if (cVar2 == '\x01') {
      pTVar11 = pTVar8;
    }
    if (pTVar11 ==
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      pTVar11 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                 *)0x0;
      if (cVar2 == '\x02') {
        pTVar11 = pTVar8;
      }
      if (pTVar11 !=
          (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
           *)0x0) {
        (pTVar11->TreeStats).StatNumNonEmptyCellsInGrid =
             *(int *)&(pTVar11->DirtyElements).AllocatorInstance.Data;
        (pTVar11->TreeStats).StatNumElementsTooLargeForGrid =
             *(int *)&(pTVar11->DirtyElementsGridOverflow).AllocatorInstance.Data;
        param_2->StatNumNonEmptyCellsInGrid =
             param_2->StatNumNonEmptyCellsInGrid + pTVar11->DirtyElementMaxPhysicalSizeInCells;
        param_2->StatNumElementsTooLargeForGrid =
             param_2->StatNumElementsTooLargeForGrid + pTVar11->DirtyElementMaxCellCapacity;
        param_2->StatNumDirtyElements =
             param_2->StatNumDirtyElements + (pTVar11->TreeStats).StatNumNonEmptyCellsInGrid;
        param_2->StatNumGridOverflowElements =
             param_2->StatNumGridOverflowElements +
             (pTVar11->TreeStats).StatNumElementsTooLargeForGrid;
      }
    }
    else {
      (pTVar11->TreeStats).StatNumDirtyElements = (pTVar11->DirtyElements).ArrayNum;
      (pTVar11->TreeStats).StatNumGridOverflowElements =
           (pTVar11->DirtyElementsGridOverflow).ArrayNum;
      param_2->StatNumNonEmptyCellsInGrid =
           param_2->StatNumNonEmptyCellsInGrid + (pTVar11->TreeStats).StatNumNonEmptyCellsInGrid;
      param_2->StatNumElementsTooLargeForGrid =
           param_2->StatNumElementsTooLargeForGrid +
           (pTVar11->TreeStats).StatNumElementsTooLargeForGrid;
      param_2->StatNumDirtyElements =
           param_2->StatNumDirtyElements + (pTVar11->TreeStats).StatNumDirtyElements;
      param_2->StatNumGridOverflowElements =
           param_2->StatNumGridOverflowElements + (pTVar11->TreeStats).StatNumGridOverflowElements;
      pFVar9 = FCsvProfiler::Get();
      bVar5 = FCsvProfiler::IsCapturing(pFVar9);
      if (bVar5) {
        pFVar9 = FCsvProfiler::Get();
        bVar5 = FCsvProfiler::IsCategoryEnabled(pFVar9,_GCsvCategory_AABBTreeExpensiveStats.Index);
        if (bVar5) {
          iVar10 = 0;
          (pTVar11->TreeExpensiveStats).StatMaxDirtyElements = (pTVar11->DirtyElements).ArrayNum;
          uVar13 = 0;
          iVar7 = (pTVar11->Leaves).NumOfValidElements;
          (pTVar11->TreeExpensiveStats).StatMaxNumLeaves = iVar7;
          if (0 < iVar7) {
            lVar14 = 0;
            iVar7 = iVar10;
            do {
              uVar6 = 0;
              if ((int)uVar13 < (int)(pTVar11->Leaves)._padding_) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              iVar10 = *(int *)((pTVar11->Leaves)._padding_ + 0x38 + lVar14);
              if (iVar10 < iVar7) {
                iVar10 = iVar7;
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 0x48;
              iVar7 = iVar10;
            } while ((int)uVar13 < (pTVar11->Leaves).NumOfValidElements);
          }
          (pTVar11->TreeExpensiveStats).StatMaxLeafSize = iVar10;
          if ((pTVar11->Nodes).ArrayNum == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = Chaos::
                    TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                    ::GetSubtreeDepth(pTVar11,0);
          }
          (pTVar11->TreeExpensiveStats).StatMaxTreeDepth = iVar7;
          (pTVar11->TreeExpensiveStats).StatGlobalPayloadsSize = (pTVar11->GlobalPayloads).ArrayNum;
          iVar7 = (pTVar11->TreeExpensiveStats).StatMaxNumLeaves;
          if (iVar7 < param_3->StatMaxNumLeaves) {
            iVar7 = param_3->StatMaxNumLeaves;
          }
          param_3->StatMaxNumLeaves = iVar7;
          iVar7 = (pTVar11->TreeExpensiveStats).StatMaxDirtyElements;
          if (iVar7 < param_3->StatMaxDirtyElements) {
            iVar7 = param_3->StatMaxDirtyElements;
          }
          param_3->StatMaxDirtyElements = iVar7;
          iVar7 = (pTVar11->TreeExpensiveStats).StatMaxLeafSize;
          if (iVar7 < param_3->StatMaxLeafSize) {
            iVar7 = param_3->StatMaxLeafSize;
          }
          param_3->StatMaxLeafSize = iVar7;
          iVar7 = (pTVar11->TreeExpensiveStats).StatMaxTreeDepth;
          if (iVar7 < param_3->StatMaxTreeDepth) {
            iVar7 = param_3->StatMaxTreeDepth;
          }
          param_3->StatMaxTreeDepth = iVar7;
          param_3->StatGlobalPayloadsSize =
               param_3->StatGlobalPayloadsSize +
               (pTVar11->TreeExpensiveStats).StatGlobalPayloadsSize;
        }
      }
    }
    puVar15 = puVar15 + 1;
    uVar12 = (ulonglong)local_res10;
  }
  if (local_50[0] != (undefined2 *)0x0) {
    FMemory::Free(local_50[0]);
  }
  FCsvProfiler::EndStat("GetAABBTreeStats",uVar4);
  return;
}

// GetCombinedShapeFilterData @ 1441ada10

FCombinedShapeFilterData * __cdecl
ChaosInterface::GetCombinedShapeFilterData
          (FCombinedShapeFilterData *__return_storage_ptr__,FPerShapeData *param_1)

{
  Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstraintBodiesRelativeTransform @ 1441adb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
GetConstraintBodiesRelativeTransform
          (TTransform<double> *__return_storage_ptr__,FPhysicsConstraintReference_Chaos *param_1)

{
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FChaosEngineInterface::GetGlobalPose(&local_78,param_1,Frame1);
  FChaosEngineInterface::GetGlobalPose(&local_d8,param_1,Frame2);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_78,__return_storage_ptr__,&local_d8);
  return __return_storage_ptr__;
}

// GetFilterInstanceData @ 1441adf80

FInstanceData * __cdecl
ChaosInterface::GetFilterInstanceData(FInstanceData *__return_storage_ptr__,FPerShapeData *param_1)

{
  Chaos::FPerShapeData::GetFilterInstanceData(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetHalfHeight @ 1441ae6d0

double __cdecl ChaosInterface::GetHalfHeight(FCapsule *param_1)

{
  return (double)(param_1->MSegment).MLength * __real_3fe0000000000000;
}

// GetImplicitType @ 1441ae6f0

ECollisionShapeType __cdecl ChaosInterface::GetImplicitType(FImplicitObject *param_1)

{
  byte bVar1;
  
  bVar1 = Chaos::FImplicitObject::GetType(param_1);
  while ((param_1 != (FImplicitObject *)0x0 && ((bVar1 & 0x1f) == 4))) {
    param_1 = (FImplicitObject *)param_1[1]._padding_;
    bVar1 = Chaos::FImplicitObject::GetType(param_1);
  }
  switch(bVar1 & 0x1f) {
  case 0:
    return Sphere;
  case 1:
    return Box;
  default:
    return None;
  case 3:
    return Capsule;
  case 8:
    return Convex;
  case 0xb:
    return Trimesh;
  case 0xc:
    return Heightfield;
  }
}

// GetParticleFromProxy @ 1441aef90

TGeometryParticle<double,3> * __cdecl GetParticleFromProxy(IPhysicsProxyBase *param_1)

{
  if ((param_1 != (IPhysicsProxyBase *)0x0) && (param_1->Type == SingleParticleProxy)) {
    return (TGeometryParticle<double,3> *)param_1[1]._padding_;
  }
  return (TGeometryParticle<double,3> *)0x0;
}

// GetQueryFilterData @ 1441af940

FCollisionFilterData * __cdecl
ChaosInterface::GetQueryFilterData
          (FCollisionFilterData *__return_storage_ptr__,FPerShapeData *param_1)

{
  FCombinedShapeFilterData local_28;
  
  Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1,&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeQueryFilter(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetRadius @ 1441afd60

double __cdecl ChaosInterface::GetRadius(FCapsule *param_1)

{
  return (double)*(float *)&param_1->_padding_;
}

// GetScene @ 1441afdb0

FChaosScene * __cdecl PhysicsObjectPhysicsCoreInterface::GetScene(FPhysicsObject *param_1)

{
  FPBDRigidsSolver *pFVar1;
  
  pFVar1 = Chaos::FPhysicsObjectInterface::GetSolver(param_1);
  if (pFVar1 == (FPBDRigidsSolver *)0x0) {
    return (FChaosScene *)0x0;
  }
  return pFVar1->PhysSceneHack;
}

// GetScene @ 1441afde0

FChaosScene * __cdecl
PhysicsObjectPhysicsCoreInterface::GetScene
          (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *param_1)

{
  FPBDRigidsSolver *pFVar1;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar1 = Chaos::FPhysicsObjectInterface::GetSolver(&local_18);
  if (pFVar1 == (FPBDRigidsSolver *)0x0) {
    return (FChaosScene *)0x0;
  }
  return pFVar1->PhysSceneHack;
}

// GetShapeFilterData @ 1441afe20

FShapeFilterData * __cdecl
ChaosInterface::GetShapeFilterData(FShapeFilterData *__return_storage_ptr__,FPerShapeData *param_1)

{
  Chaos::FPerShapeData::GetShapeFilterData(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSimulationFilterData @ 1441b0280

FCollisionFilterData * __cdecl
ChaosInterface::GetSimulationFilterData
          (FCollisionFilterData *__return_storage_ptr__,FPerShapeData *param_1)

{
  FCombinedShapeFilterData local_28;
  
  Chaos::FPerShapeData::GetCombinedShapeFilterData(param_1,&local_28);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeSimFilter(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// InitGamePhysCore @ 1441b0e20

bool __cdecl InitGamePhysCore(void)

{
  FModuleManager *pFVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  pFVar1 = FModuleManager::Get();
  pFVar2 = FName::FName(local_res8,"Chaos");
  FModuleManager::LoadModule(pFVar1,*pFVar2,None);
  pFVar1 = FModuleManager::Get();
  pFVar2 = FName::FName(local_res8,"ChaosSolverEngine");
  FModuleManager::LoadModule(pFVar1,*pFVar2,None);
  return true;
}

// JointStiffness @ 1441b1860

double __cdecl Chaos::ConstraintSettings::JointStiffness(void)

{
  return (double)JointConstraintDefaults::JointStiffness;
}

// LexToString @ 1441b18a0

wchar_t * __cdecl LexToString(ECollisionTraceFlag param_1)

{
  if (param_1 == CTF_UseDefault) {
    return L"CTF_UseDefault";
  }
  if (param_1 == CTF_UseSimpleAndComplex) {
    return L"CTF_UseSimpleAndComplex";
  }
  if (param_1 == CTF_UseSimpleAsComplex) {
    return L"CTF_UseSimpleAsComplex";
  }
  if (param_1 != CTF_UseComplexAsSimple) {
    return L"<Unknown ECollisionTraceFlag>";
  }
  return L"CTF_UseComplexAsSimple";
}

// LexToString @ 1441b18f0

wchar_t * __cdecl LexToString(EPhysicsType param_1)

{
  if (param_1 == PhysType_Default) {
    return L"PhysType_Default";
  }
  if (param_1 != PhysType_Kinematic) {
    if (param_1 != PhysType_Simulated) {
      return L"<Unknown EPhysicsType>";
    }
    return L"PhysType_Simulated";
  }
  return L"PhysType_Kinematic";
}

// LexToString @ 1441b1930

wchar_t * __cdecl LexToString(Type param_1)

{
  if (param_1 == BodyCollision_Enabled) {
    return L"EBodyCollisionResponse::BodyCollision_Enabled";
  }
  if (param_1 != BodyCollision_Disabled) {
    return L"<Unknown EBodyCollisionResponse>";
  }
  return L"EBodyCollisionResponse::BodyCollision_Disabled";
}

// LinearBreakScale @ 1441b1960

double __cdecl Chaos::ConstraintSettings::LinearBreakScale(void)

{
  return (double)JointConstraintDefaults::LinearBreakScale;
}

// LinearDriveDampingScale @ 1441b1980

double __cdecl Chaos::ConstraintSettings::LinearDriveDampingScale(void)

{
  return (double)JointConstraintDefaults::LinearDriveDampingScale;
}

// LinearDriveStiffnessScale @ 1441b19a0

double __cdecl Chaos::ConstraintSettings::LinearDriveStiffnessScale(void)

{
  return (double)JointConstraintDefaults::LinearDriveStiffnessScale;
}

// LoadPhysXModules @ 1441b19c0

bool __cdecl PhysDLLHelper::LoadPhysXModules(bool param_1)

{
  char cVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"PxFoundation");
  ::FString::ConcatFF(&local_38,&RootSharedPath,&local_28);
  ::FString::ConcatFF(&local_48,&local_38,&PhysXSuffix);
  PxFoundationHandle = LoadPhysicsLibrary(&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,"PhysX3Common");
  ::FString::ConcatFF(&local_38,&RootPhysXPath,&local_48);
  ::FString::ConcatFF(&local_28,&local_38,&PhysXSuffix);
  PhysX3CommonHandle = LoadPhysicsLibrary(&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"_1.dll");
  ::FString::FString(&local_48,"nvToolsExt");
  ::FString::ConcatFF(&local_38,&RootPhysXPath,&local_48);
  ::FString::ConcatFF(&local_28,&local_38,&ArchBits);
  ::FString::ConcatFF(&local_58,&local_28,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar2 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,FVar3.Data);
  if (cVar1 != '\0') {
    nvToolsExtHandle = LoadPhysicsLibrary(&local_58);
  }
  ::FString::FString(&local_38,"PxPvdSDK");
  ::FString::ConcatFF(&local_28,&RootSharedPath,&local_38);
  ::FString::ConcatFF(&local_18,&local_28,&PhysXSuffix);
  PxPvdSDKHandle = LoadPhysicsLibrary(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,"PhysX3");
  ::FString::ConcatFF(&local_28,&RootPhysXPath,&local_38);
  ::FString::ConcatFF(&local_18,&local_28,&PhysXSuffix);
  PhysX3Handle = LoadPhysicsLibrary(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (param_1) {
    ::FString::FString(&local_38,"PhysX3Cooking");
    ::FString::ConcatFF(&local_28,&RootPhysXPath,&local_38);
    ::FString::ConcatFF(&local_18,&local_28,&PhysXSuffix);
    PhysX3CookingHandle = LoadPhysicsLibrary(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (((((PxFoundationHandle == (void *)0x0) || (PhysX3CommonHandle == (void *)0x0)) ||
       (PxPvdSDKHandle == (void *)0x0)) ||
      ((PhysX3Handle == (void *)0x0 || ((cVar1 != '\0' && (nvToolsExtHandle == (void *)0x0)))))) ||
     ((param_1 && (PhysX3CookingHandle == (void *)0x0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// LoadPhysicsLibrary @ 1441b1d60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl PhysDLLHelper::LoadPhysicsLibrary(FString *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  void *pvVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  undefined8 *puVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  FString local_38 [2];
  
  pTVar4 = &FPaths::EngineDir(local_38)->Data;
  iVar3 = (param_1->Data).ArrayNum;
  iVar9 = 0;
  iVar10 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar10 = 0;
  }
  if ((pTVar4->ArrayNum != 0) || (iVar3 = 2, iVar10 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,pTVar4,iVar10 + iVar3);
  ::FString::PathAppend
            ((FString *)&local_48,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.ArrayNum != 0) {
    FVar8.Data = local_48.AllocatorInstance.Data;
  }
  pvVar5 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar8.Data);
  fVar1 = __real_3f000000;
  if (pvVar5 == (void *)0x0) {
    do {
      FWindowsPlatformProcess::Sleep(fVar1);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.ArrayNum != 0) {
        FVar8.Data = local_48.AllocatorInstance.Data;
      }
      pvVar5 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar8.Data);
      if (pvVar5 != (void *)0x0) goto LAB_1441b1fa8;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 5);
    this = FPlatformFileManager::Get();
    pIVar6 = FPlatformFileManager::GetPlatformFile(this);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.ArrayNum != 0) {
      FVar8.Data = local_48.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar8.Data);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.ArrayNum != 0) {
      FVar8.Data = local_48.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x80))(pIVar6,FVar8.Data);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.ArrayNum != 0) {
      FVar8.Data = local_48.AllocatorInstance.Data;
    }
    puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0xe8))(pIVar6,FVar8.Data,0);
    if (2 < (byte)LogPhysicsCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
    }
    if ((2 < (byte)LogPhysicsCore._0_1_) &&
       (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore),
       2 < (byte)LogPhysicsCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
    }
    if (2 < (byte)LogPhysicsCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
    }
    if (cVar2 == '\0') {
      if (2 < (byte)LogPhysicsCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
      }
      if (puVar7 == (undefined8 *)0x0) goto LAB_1441b1fa8;
    }
    else if (puVar7 == (undefined8 *)0x0) {
      if (2 < (byte)LogPhysicsCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsCore);
      }
      goto LAB_1441b1fa8;
    }
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_1441b1fa8:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pvVar5;
}

// SerializeQueryFilterData @ 1441b5f40

void __cdecl SerializeQueryFilterData(FArchive *param_1,FChaosQueryFilterData *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong *plVar4;
  uchar *puVar5;
  ChaosFlags<FChaosQueryFlag::Enum,unsigned_short> local_res8 [4];
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->data).word0 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &(param_2->data).word1;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &(param_2->data).word2;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &(param_2->data).word3;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0].mBits = (param_2->flags).mBits;
  if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res8[0].mBits);
    }
  }
  else {
    local_res8[0].mBits = *(ushort *)*plVar4;
    *plVar4 = *plVar4 + 2;
  }
  (param_2->flags).mBits = local_res8[0].mBits;
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->clientId = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->clientId,1);
  return;
}

// ShouldSetKinematicTargetSetGameTransform @ 1441ba190

bool __cdecl ShouldSetKinematicTargetSetGameTransform(FSingleParticlePhysicsProxy **param_1)

{
  TGeometryParticle<double,3> *pTVar1;
  
  pTVar1 = ((*param_1)->Particle).Ptr;
  if (((pTVar1 != (TGeometryParticle<double,3> *)0x0) &&
      (*(char *)&pTVar1[2].MNonFrequentData.Property.MSpatialIdx == '\x02')) &&
     (Chaos::SyncKinematicOnGameThread != 0)) {
    if (Chaos::SyncKinematicOnGameThread != 1) {
      return (bool)(~*(byte *)((longlong)&pTVar1[2].MNonFrequentData.Property.MParticleID.LocalID +
                              1) & 1);
    }
    return false;
  }
  return true;
}

// SoftAngularDampingScale @ 1441ba1d0

double __cdecl Chaos::ConstraintSettings::SoftAngularDampingScale(void)

{
  return (double)JointConstraintDefaults::SoftAngularDampingScale;
}

// SoftAngularForceMode @ 1441ba1f0

int __cdecl Chaos::ConstraintSettings::SoftAngularForceMode(void)

{
  return JointConstraintDefaults::SoftAngularForceMode;
}

// SoftAngularStiffnessScale @ 1441ba200

double __cdecl Chaos::ConstraintSettings::SoftAngularStiffnessScale(void)

{
  return (double)JointConstraintDefaults::SoftAngularStiffnessScale;
}

// SoftLinearDampingScale @ 1441ba220

double __cdecl Chaos::ConstraintSettings::SoftLinearDampingScale(void)

{
  return (double)JointConstraintDefaults::SoftLinearDampingScale;
}

// SoftLinearForceMode @ 1441ba240

int __cdecl Chaos::ConstraintSettings::SoftLinearForceMode(void)

{
  return JointConstraintDefaults::SoftLinearForceMode;
}

// SoftLinearStiffnessScale @ 1441ba250

double __cdecl Chaos::ConstraintSettings::SoftLinearStiffnessScale(void)

{
  return (double)JointConstraintDefaults::SoftLinearStiffnessScale;
}

// TermGamePhysCore @ 1441bc110

void __cdecl TermGamePhysCore(void)

{
  return;
}

// ToUnrealFilterData @ 1441bc120

FCollisionFilterData * __cdecl
ToUnrealFilterData(FCollisionFilterData *__return_storage_ptr__,FChaosFilterData *param_1)

{
  __return_storage_ptr__->Word0 = param_1->word0;
  __return_storage_ptr__->Word1 = param_1->word1;
  __return_storage_ptr__->Word2 = param_1->word2;
  __return_storage_ptr__->Word3 = param_1->word3;
  return __return_storage_ptr__;
}

// U2CFilterData @ 1441bc250

FChaosFilterData * __cdecl
U2CFilterData(FChaosFilterData *__return_storage_ptr__,FCollisionFilterData *param_1)

{
  __return_storage_ptr__->word0 = param_1->Word0;
  __return_storage_ptr__->word1 = param_1->Word1;
  __return_storage_ptr__->word2 = param_1->Word2;
  __return_storage_ptr__->word3 = param_1->Word3;
  return __return_storage_ptr__;
}

// UToCCombineMode @ 1441bc270

ECombineMode __cdecl UToCCombineMode(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  ECombineMode EVar3;
  
  if (param_1 != Average) {
    if (param_1 == Min) {
      return Min;
    }
    if (param_1 == Multiply) {
      return Multiply;
    }
    if (param_1 == Max) {
      return Max;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8752542440373616415>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0xe1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Avg;
}

// UnloadPhysXModules @ 1441bc2e0

void __cdecl PhysDLLHelper::UnloadPhysXModules(void)

{
  FWindowsPlatformProcess::FreeDllHandle(PxPvdSDKHandle);
  FWindowsPlatformProcess::FreeDllHandle(PhysX3Handle);
  if (PhysX3CookingHandle != (void *)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(PhysX3CookingHandle);
  }
  FWindowsPlatformProcess::FreeDllHandle(PhysX3CommonHandle);
  FWindowsPlatformProcess::FreeDllHandle(PxFoundationHandle);
  return;
}

// Z_Construct_UClass_UBodySetupCore_NoRegister @ 1441bd1b0

UClass * __cdecl Z_Construct_UClass_UBodySetupCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"BodySetupCore",
               &Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton,
               UBodySetupCore::StaticRegisterNativesUBodySetupCore,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBodySetupCore>,
               InternalVTableHelperCtorCaller<UBodySetupCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton;
}

// Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister @ 1441bd260

UClass * __cdecl Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"ChaosPhysicalMaterial",
               &Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton,
               UChaosPhysicalMaterial::StaticRegisterNativesUChaosPhysicalMaterial,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UChaosPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UChaosPhysicalMaterial>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosPhysicalMaterial.InnerSingleton;
}

// Z_Construct_UClass_UPhysicalMaterial_NoRegister @ 1441bd310

UClass * __cdecl Z_Construct_UClass_UPhysicalMaterial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterial",
               &Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton,
               UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UPhysicalMaterial>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton;
}

// Z_Construct_UClass_UPhysicsSettingsCore_NoRegister @ 1441bd3c0

UClass * __cdecl Z_Construct_UClass_UPhysicsSettingsCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicsSettingsCore",
               &Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton,
               UPhysicsSettingsCore::StaticRegisterNativesUPhysicsSettingsCore,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettingsCore>,
               InternalVTableHelperCtorCaller<UPhysicsSettingsCore>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion @ 1441bd480

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion(void)

{
  if (Z_Registration_Info_UEnum_EAngularConstraintMotion.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAngularConstraintMotion.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAngularConstraintMotion.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EConstraintFrame @ 1441bd4c0

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EConstraintFrame(void)

{
  if (Z_Registration_Info_UEnum_EConstraintFrame.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConstraintFrame.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EConstraintFrame_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConstraintFrame.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType @ 1441bd500

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType(void)

{
  if (Z_Registration_Info_UEnum_EConstraintPlasticityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConstraintPlasticityType.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConstraintPlasticityType.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion @ 1441bd540

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion(void)

{
  if (Z_Registration_Info_UEnum_ELinearConstraintMotion.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELinearConstraintMotion.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELinearConstraintMotion.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff @ 1441bd580

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff(void)

{
  if (Z_Registration_Info_UEnum_ERadialImpulseFalloff.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERadialImpulseFalloff.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERadialImpulseFalloff.InnerSingleton;
}

// Z_Construct_UEnum_PhysicsCore_ESleepFamily @ 1441bd5c0

UEnum * __cdecl Z_Construct_UEnum_PhysicsCore_ESleepFamily(void)

{
  if (Z_Registration_Info_UEnum_ESleepFamily.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESleepFamily.InnerSingleton,
               &Z_Construct_UEnum_PhysicsCore_ESleepFamily_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESleepFamily.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBodyInstanceCore @ 1441bd600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBodyInstanceCore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceCore.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBodyInstanceCore.InnerSingleton,
               &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceCore.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBodyInstanceCore.InnerSingleton;
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

// IMPLEMENT_MODULE_PhysicsCore @ 1441bd680

void __cdecl IMPLEMENT_MODULE_PhysicsCore(void)

{
  return;
}

// OnUpdatePhysXMaterial'' @ 150368fa0

void __cdecl `dynamic_atexit_destructor_for_'FPhysicsDelegatesCore::OnUpdatePhysXMaterial__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPhysicsDelegatesCore::OnUpdatePhysXMaterial._8_8_,
             FPhysicsDelegatesCore::OnUpdatePhysXMaterial._16_4_);
  if (FPhysicsDelegatesCore::OnUpdatePhysXMaterial._8_8_ != 0) {
    FMemory::Free((void *)FPhysicsDelegatesCore::OnUpdatePhysXMaterial._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPhysicsDelegatesCore::OnUpdatePhysXMaterial);
  return;
}

// `dynamic_atexit_destructor_for_'APEXBinariesRoot'' @ 150368fe0

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__APEXBinariesRoot__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = APEXBinariesRoot.Data.AllocatorInstance.Data;
  if (APEXBinariesRoot.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (APEXBinariesRoot.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'APEXSuffix'' @ 150369000

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__APEXSuffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = APEXSuffix.Data.AllocatorInstance.Data;
  if (APEXSuffix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (APEXSuffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ArchBits'' @ 150369020

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__ArchBits__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ArchBits.Data.AllocatorInstance.Data;
  if (ArchBits.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ArchBits.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ArchName'' @ 150369040

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__ArchName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ArchName.Data.AllocatorInstance.Data;
  if (ArchName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ArchName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarAngularDriveDampingScale'' @ 150369060

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarAngularDriveDampingScale__(void)

{
  CVarAngularDriveDampingScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAngularDriveDampingScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAngularDriveStiffnessScale'' @ 150369080

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarAngularDriveStiffnessScale__
          (void)

{
  CVarAngularDriveStiffnessScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAngularDriveStiffnessScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSQDrawDebugQueries'' @ 1503690a0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosSQDrawDebugQueries__(void)

{
  CVarChaosSQDrawDebugQueries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSQDrawDebugQueries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableChaosCollisionManager'' @ 1503690c0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableChaosCollisionManager__(void)

{
  CVarEnableChaosCollisionManager._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableChaosCollisionManager);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableChaosJointConstraints'' @ 1503690e0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableChaosJointConstraints__(void)

{
  CVarEnableChaosJointConstraints._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableChaosJointConstraints);
  return;
}

// `dynamic_atexit_destructor_for_'CVarJointAngularBreakScale'' @ 150369100

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarJointAngularBreakScale__(void)

{
  CVarJointAngularBreakScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarJointAngularBreakScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarJointLinearBreakScale'' @ 150369120

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarJointLinearBreakScale__(void)

{
  CVarJointLinearBreakScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarJointLinearBreakScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarJointStiffness'' @ 150369140

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarJointStiffness__(void)

{
  CVarJointStiffness._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarJointStiffness);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLinearDriveDampingScale'' @ 150369160

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarLinearDriveDampingScale__(void)

{
  CVarLinearDriveDampingScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLinearDriveDampingScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLinearDriveStiffnessScale'' @ 150369180

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarLinearDriveStiffnessScale__
          (void)

{
  CVarLinearDriveStiffnessScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLinearDriveStiffnessScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowExperimentalProperties'' @ 1503691a0

void __cdecl
PhysicalMaterialCVars::_dynamic_atexit_destructor_for__CVarShowExperimentalProperties__(void)

{
  CVarShowExperimentalProperties._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowExperimentalProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftAngularDampingScale'' @ 1503691c0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftAngularDampingScale__(void)

{
  CVarSoftAngularDampingScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftAngularDampingScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftAngularForceMode'' @ 1503691e0

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftAngularForceMode__(void)

{
  CVarSoftAngularForceMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftAngularForceMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftAngularStiffnessScale'' @ 150369200

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftAngularStiffnessScale__
          (void)

{
  CVarSoftAngularStiffnessScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftAngularStiffnessScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftLinearDampingScale'' @ 150369220

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftLinearDampingScale__(void)

{
  CVarSoftLinearDampingScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftLinearDampingScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftLinearForceMode'' @ 150369240

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftLinearForceMode__(void)

{
  CVarSoftLinearForceMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftLinearForceMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoftLinearStiffnessScale'' @ 150369260

void __cdecl
Chaos::JointConstraintDefaults::_dynamic_atexit_destructor_for__CVarSoftLinearStiffnessScale__(void)

{
  CVarSoftLinearStiffnessScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSoftLinearStiffnessScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarToleranceScaleLength'' @ 150369280

void __cdecl _dynamic_atexit_destructor_for__CVarToleranceScaleLength__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarToleranceScaleLength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarToleranceScaleSpeed'' @ 1503692a0

void __cdecl _dynamic_atexit_destructor_for__CVarToleranceScaleSpeed__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarToleranceScaleSpeed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDeprecatedBehaviorUpdateMassScaleChanges'' @ 1503692c0

void __cdecl _dynamic_atexit_destructor_for__CVarUseDeprecatedBehaviorUpdateMassScaleChanges__(void)

{
  CVarUseDeprecatedBehaviorUpdateMassScaleChanges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseDeprecatedBehaviorUpdateMassScaleChanges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseUnifiedHeightfield'' @ 1503692e0

void __cdecl _dynamic_atexit_destructor_for__CVarUseUnifiedHeightfield__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseUnifiedHeightfield);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ApplyProjectSettings'' @ 150369300

void __cdecl _dynamic_atexit_destructor_for__CVar_ApplyProjectSettings__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ApplyProjectSettings);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ChaosSimulationEnable'' @ 150369320

void __cdecl _dynamic_atexit_destructor_for__CVar_ChaosSimulationEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ChaosSimulationEnable);
  return;
}

// `dynamic_atexit_destructor_for_'LogPhysicsCore'' @ 150369340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPhysicsCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPhysicsCore);
  return;
}

// `dynamic_atexit_destructor_for_'PhysXBinariesRoot'' @ 150369360

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__PhysXBinariesRoot__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PhysXBinariesRoot.Data.AllocatorInstance.Data;
  if (PhysXBinariesRoot.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PhysXBinariesRoot.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PhysXSuffix'' @ 150369380

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__PhysXSuffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PhysXSuffix.Data.AllocatorInstance.Data;
  if (PhysXSuffix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PhysXSuffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RootAPEXPath'' @ 1503693a0

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__RootAPEXPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RootAPEXPath.Data.AllocatorInstance.Data;
  if (RootAPEXPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RootAPEXPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RootPhysXPath'' @ 1503693c0

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__RootPhysXPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RootPhysXPath.Data.AllocatorInstance.Data;
  if (RootPhysXPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RootPhysXPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RootSharedPath'' @ 1503693e0

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__RootSharedPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RootSharedPath.Data.AllocatorInstance.Data;
  if (RootSharedPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RootSharedPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SharedBinariesRoot'' @ 150369400

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__SharedBinariesRoot__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SharedBinariesRoot.Data.AllocatorInstance.Data;
  if (SharedBinariesRoot.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SharedBinariesRoot.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'USkeletalMeshSimulationComponentLogging'' @ 150369420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__USkeletalMeshSimulationComponentLogging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
  return;
}

// `dynamic_atexit_destructor_for_'VSDirectory'' @ 150369440

void __cdecl PhysDLLHelper::_dynamic_atexit_destructor_for__VSDirectory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VSDirectory.Data.AllocatorInstance.Data;
  if (VSDirectory.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VSDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_AABBTreeExpensiveStats'' @ 150369460

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_AABBTreeExpensiveStats__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_AABBTreeExpensiveStats.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_AABBTreeExpensiveStats.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_AABBTreeExpensiveStats.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_ChaosPhysics'' @ 150369480

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ChaosPhysics__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ChaosPhysics.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ChaosPhysics.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_ChaosPhysics.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

