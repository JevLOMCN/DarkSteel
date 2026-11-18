// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 208

// `dynamic_initializer_for_'CVarCollisionParticlesPerObjectFractionDefault'' @ 140f7d5e0

void __cdecl _dynamic_initializer_for__CVarCollisionParticlesPerObjectFractionDefault__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCollisionParticlesPerObjectFractionDefault,
             L"p.CollisionParticlesPerObjectFractionDefault",
             &CollisionParticlesPerObjectFractionDefault,L"Fraction of verts",0);
  atexit(_dynamic_atexit_destructor_for__CVarCollisionParticlesPerObjectFractionDefault__);
  return;
}

// `dynamic_initializer_for_'CVarCreateGTParticleForChildren'' @ 140f7d630

void __cdecl _dynamic_initializer_for__CVarCreateGTParticleForChildren__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCreateGTParticleForChildren,L"p.gc.CreateGTParticlesForChildren",
             &bCreateGTParticleForChildren,
             L"DEPRECATED : use the \'Optimize For Memory\' option from project settings instead - If true create all children particles at initilaization time, otherwise wait until destruction occurs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCreateGTParticleForChildren__);
  return;
}

// `dynamic_initializer_for_'CVarEmptyUniqueIndicesOnGT'' @ 140f7d680

void __cdecl _dynamic_initializer_for__CVarEmptyUniqueIndicesOnGT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEmptyUniqueIndicesOnGT,L"p.GeometryCollection.EmptyUniqueIndicesOnGT",
             &bEmptyUniqueIndicesOnGT,
             L"If enabled, immediately free particle unique indices after particle initialisation",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarEmptyUniqueIndicesOnGT__);
  return;
}

// `dynamic_initializer_for_'CVarEnabledNestedChildTransformUpdates'' @ 140f7d6d0

void __cdecl _dynamic_initializer_for__CVarEnabledNestedChildTransformUpdates__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnabledNestedChildTransformUpdates,
             L"p.GeometryCollection.EnabledNestedChildTransformUpdates",
             &bGeometryCollectionEnabledNestedChildTransformUpdates,
             L"Enable updates for driven, disabled, child bodies. Used for line trace results against geometry collections.[def: true]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnabledNestedChildTransformUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarForceOverrideGCCollisionSetupForTraces'' @ 140f7d720

void __cdecl _dynamic_initializer_for__CVarForceOverrideGCCollisionSetupForTraces__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceOverrideGCCollisionSetupForTraces,
             L"p.GeometryCollection.ForceOverrideGCCollisionSetupForTraces",
             &ForceOverrideGCCollisionSetupForTraces,
             L"Force the usage of a specific type of collision for traces on the game thread when creating new GC physics representations (-1: use the value of the property | 0: force to use SM collision | 1: force to use GC collision) [def: -1]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceOverrideGCCollisionSetupForTraces__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionAlwaysGenerateConnectionGraph'' @ 140f7d770

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionAlwaysGenerateConnectionGraph__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionAlwaysGenerateConnectionGraph,
             L"p.GeometryCollection.AlwaysGenerateConnectionGraph",
             &bGeometryCollectionAlwaysGenerateConnectionGraph,
             L"When enabled, always  generate the cluster\'s connection graph instead of using the rest collection stored one - Note: this should only be used for troubleshooting.[def: false]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionAlwaysGenerateConnectionGraph__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters'' @ 140f7d7c0

void __cdecl
_dynamic_initializer_for__CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters,
             L"p.GeometryCollection.AlwaysGenerateGTCollisionForClusters",
             &bGeometryCollectionAlwaysGenerateGTCollisionForClusters,
             L"When enabled, always generate a game thread side collision for clusters.[def: true]",
             0);
  atexit(
        _dynamic_atexit_destructor_for__CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters__
        );
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionAreaBasedDamageThresholdMode'' @ 140f7d810

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionAreaBasedDamageThresholdMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionAreaBasedDamageThresholdMode,
             L"p.GeometryCollection.AreaBasedDamageThresholdMode",
             &GeometryCollectionAreaBasedDamageThresholdMode,
             L"Area based damage threshold computation mode (0: sum of areas | 1: max of areas | 2: min of areas | 3: average of areas) [def: 0]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionAreaBasedDamageThresholdMode__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionCollideAll'' @ 140f7d860

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionCollideAll__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionCollideAll,L"p.GeometryCollectionCollideAll",
             &GeometryCollectionCollideAll,
             L"Bypass the collision matrix and make geometry collections collide against everything"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionCollideAll__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionDisableGravity'' @ 140f7d8b0

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionDisableGravity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionDisableGravity,L"p.GeometryCollectionDisableGravity",
             &DisableGeometryCollectionGravity,L"Disable gravity for geometry collections",0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionDisableGravity__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms'' @ 140f7d900

void __cdecl
_dynamic_initializer_for__CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms,
             L"p.GeometryCollection.LocalInertiaDropOffDiagonalTerms",
             &GeometryCollectionLocalInertiaDropOffDiagonalTerms,
             L"When true, force diagonal inertia for GCs in their local space by simply dropping off-diagonal terms"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionPositionUpdateTolerance'' @ 140f7d950

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionPositionUpdateTolerance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionPositionUpdateTolerance,
             L"p.GeometryCollection.PositionUpdateTolerance",
             &GeometryCollectionPositionUpdateTolerance,
             L"Tolerance to detect if particle position has changed has changed when syncing PT to GT"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionPositionUpdateTolerance__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionRotationUpdateTolerance'' @ 140f7d9a0

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionRotationUpdateTolerance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionRotationUpdateTolerance,
             L"p.GeometryCollection.RotationUpdateTolerance",
             &GeometryCollectionRotationUpdateTolerance,
             L"Tolerance to detect if particle rotation has changed has changed when syncing PT to GT"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionRotationUpdateTolerance__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionScaleClusterGeometry'' @ 140f7d9f0

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionScaleClusterGeometry__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionScaleClusterGeometry,
             L"p.GeometryCollection.ScaleClusterGeometry",&bGeometryCollectionScaleClusterGeometry,
             L"If enabled, update the cluster geometry if the scale has changed",0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionScaleClusterGeometry__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionTransformTolerance'' @ 140f7da40

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionTransformTolerance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionTransformTolerance,L"p.GeometryCollection.TransformTolerance",
             &GeometryCollectionTransformTolerance,L"Tolerance to detect if a transform has changed"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionTransformTolerance__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCollectionUseRootBrokenFlag'' @ 140f7da90

void __cdecl _dynamic_initializer_for__CVarGeometryCollectionUseRootBrokenFlag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCollectionUseRootBrokenFlag,L"p.GeometryCollection.UseRootBrokenFlag",
             &bGeometryCollectionUseRootBrokenFlag,
             L"If enabled, check if the root transform is broken in the proxy and disable the GT particle if so. Should be enabled - cvar is a failsafe to revert behaviour"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCollectionUseRootBrokenFlag__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalMaxSimulatedLevel'' @ 140f7dae0

void __cdecl _dynamic_initializer_for__CVarGlobalMaxSimulatedLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalMaxSimulatedLevel,L"p.gc.GlobalMaxSimulatedLevel",&GlobalMaxSimulatedLevel,
             L"Allow to set the Global Maximum Simulated Level for Geoemtry Collection. The min between the MaxSimulatedLevel and the GlobalMaxSimulatedLevel will be used. "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalMaxSimulatedLevel__);
  return;
}

// `dynamic_initializer_for_'CVarPropagateInternalClusterDisableFlagToChildren'' @ 140f7db30

void __cdecl _dynamic_initializer_for__CVarPropagateInternalClusterDisableFlagToChildren__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPropagateInternalClusterDisableFlagToChildren,
             L"p.GeometryCollection.PropagateInternalClusterDisableFlagToChildren",
             &bPropagateInternalClusterDisableFlagToChildren,
             L"If enabled, disabled internal clusters will propagate their disabled flag to their children when buffering instead of implicitly activating the children."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPropagateInternalClusterDisableFlagToChildren__);
  return;
}

// `dynamic_initializer_for_'CVarReportHighParticleFraction'' @ 140f7db80

void __cdecl _dynamic_initializer_for__CVarReportHighParticleFraction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReportHighParticleFraction,L"p.gc.ReportHighParticleFraction",
             &ReportHighParticleFraction,
             L"Report any objects with particle fraction above this threshold",0);
  atexit(_dynamic_atexit_destructor_for__CVarReportHighParticleFraction__);
  return;
}

// `dynamic_initializer_for_'CVarReportNoLevelsetCluster'' @ 140f7dbd0

void __cdecl _dynamic_initializer_for__CVarReportNoLevelsetCluster__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReportNoLevelsetCluster,L"p.gc.ReportNoLevelsetCluster",&ReportNoLevelsetCluster,
             L"Report any cluster objects without levelsets",0);
  atexit(_dynamic_atexit_destructor_for__CVarReportNoLevelsetCluster__);
  return;
}

// `dynamic_initializer_for_'CVarReportTooManyChildrenNum'' @ 140f7dc20

void __cdecl _dynamic_initializer_for__CVarReportTooManyChildrenNum__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReportTooManyChildrenNum,L"p.ReportTooManyChildrenNum",&ReportTooManyChildrenNum,
             L"Issue warning if more than this many children exist in a single cluster",0);
  atexit(_dynamic_atexit_destructor_for__CVarReportTooManyChildrenNum__);
  return;
}

// `dynamic_initializer_for_'CVarbBuildGeometryForChildrenOnGT'' @ 140f7dc70

void __cdecl _dynamic_initializer_for__CVarbBuildGeometryForChildrenOnGT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbBuildGeometryForChildrenOnGT,L"p.gc.BuildGeometryForChildrenOnGT",
             &bBuildGeometryForChildrenOnGT,
             L"DEPRECATED : use the \'Optimize For Memory\' option from project settings instead - If true build all children geometry  on Game Thread at initilaization time, otherwise wait until destruction occurs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbBuildGeometryForChildrenOnGT__);
  return;
}

// `dynamic_initializer_for_'CVarbBuildGeometryForChildrenOnPT'' @ 140f7dcc0

void __cdecl _dynamic_initializer_for__CVarbBuildGeometryForChildrenOnPT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbBuildGeometryForChildrenOnPT,L"p.gc.BuildGeometryForChildrenOnPT",
             &bBuildGeometryForChildrenOnPT,
             L"DEPRECATED : use the \'Optimize For Memory\' option from project settings instead - If true build all children geometry on Physics Thread at initilaization time, otherwise wait until destruction occurs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbBuildGeometryForChildrenOnPT__);
  return;
}

// `dynamic_initializer_for_'CVarbRemoveImplicitsInDynamicCollections'' @ 140f7dd10

void __cdecl _dynamic_initializer_for__CVarbRemoveImplicitsInDynamicCollections__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbRemoveImplicitsInDynamicCollections,L"p.gc.RemoveImplicitsInDynamicCollections",
             &bRemoveImplicitsInDynamicCollections,
             L"DEPRECATED : use the \'Optimize For Memory\' option from project settings instead - This cvar has an impact only if geometry are not added for children. It removes implicits from the Dynamic Collections, and recreate then from the rest collection. Using this cvar could have an impact if geometry are updated from the dynamic collection on the GT, then those changes won\'t be ported to the PT."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbRemoveImplicitsInDynamicCollections__);
  return;
}

// `dynamic_initializer_for_'InertiaTensorAttributeName'' @ 140f7dd60

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__InertiaTensorAttributeName__(void)

{
  ::FName::FName(&InertiaTensorAttributeName,"InertiaTensor");
  return;
}

// `dynamic_initializer_for_'LevelAttributeName'' @ 140f7dd80

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__LevelAttributeName__(void)

{
  ::FName::FName(&LevelAttributeName,"Level");
  return;
}

// `dynamic_initializer_for_'MassAttributeName'' @ 140f7dda0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__MassAttributeName__(void)

{
  ::FName::FName(&MassAttributeName,"Mass");
  return;
}

// `dynamic_initializer_for_'MassToLocalAttributeName'' @ 140f7ddc0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__MassToLocalAttributeName__(void)

{
  ::FName::FName(&MassToLocalAttributeName,"MassToLocal");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f7dde0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f7de70

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f7df00

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f7df90

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f7e020

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f7e0b0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f7e140

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f7e1d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f7e260

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f7e2f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BuildClusters'' @ 140f7e380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BuildClusters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BuildClusters == (FThreadSafeStaticStat<FStat_STAT_BuildClusters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BuildClusters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildClusters,*pFVar1,
               L"FGeometryCollectionPhysicsProxy::BuildClusters","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BuildClustersGlobalMatrices'' @ 140f7e410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BuildClustersGlobalMatrices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BuildClustersGlobalMatrices ==
      (FThreadSafeStaticStat<FStat_STAT_BuildClustersGlobalMatrices>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BuildClustersGlobalMatrices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildClustersGlobalMatrices,*pFVar1,
               L"FGeometryCollectionPhysicsProxy::BuildClusters:GlobalMatrices","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData'' @ 140f7e4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData>)
      0x0) {
    pFVar1 = FName::FName(local_res8,
                          "STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_GeometryCollectionPhysicsProxyUpdatePerParticleFilterData,*pFVar1,
               L"FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f7e530

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f7e5c0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f7e650

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f7e6e0

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

// `dynamic_initializer_for_'StatPtr_STAT_PopulateSimulatedParticle'' @ 140f7e770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PopulateSimulatedParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PopulateSimulatedParticle ==
      (FThreadSafeStaticStat<FStat_STAT_PopulateSimulatedParticle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PopulateSimulatedParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PopulateSimulatedParticle,*pFVar1,
               L"FGeometryCollectionPhysicsProxy::PopulateSimulatedParticle","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SetUseStaticMeshCollisionForTraces_External'' @ 140f7e800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_SetUseStaticMeshCollisionForTraces_External__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SetUseStaticMeshCollisionForTraces_External ==
      (FThreadSafeStaticStat<FStat_STAT_SetUseStaticMeshCollisionForTraces_External>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SetUseStaticMeshCollisionForTraces_External");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_SetUseStaticMeshCollisionForTraces_External,*pFVar1,
               L"FGeometryCollectionPhysicsProxy::SetUseStaticMeshCollisionForTraces_External",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UGCC_LOG'' @ 140f7e890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__UGCC_LOG__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&UGCC_LOG,L"UGCC_LOG",Error,All);
  atexit(_dynamic_atexit_destructor_for__UGCC_LOG__);
  return;
}

// ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<``FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::__l12::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 1440f8700

void __cdecl
ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<__FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External_::__l12::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (FRigidClustering *param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,
          TVector<double> *param_3,float param_4,int param_5,float param_6,<lambda_1> *param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ClusterId *pCVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res10 [8];
  undefined1 local_88 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_80;
  ForAnyElementType local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  pCVar8 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)param_2,*(int *)&param_2->field_0x8
                     );
  if (pCVar8->NumChildren < 1) {
    fVar21 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(param_2);
    if (fVar21 <= param_7->StrainValue) {
      fVar21 = param_7->StrainValue;
    }
    Chaos::FRigidClustering::SetExternalStrain(param_7->RigidClustering,param_2,fVar21);
  }
  else {
    local_60 = (param_3->field0_0x0)._s_0.X;
    dStack_58 = (param_3->field0_0x0)._s_0.Y;
    local_50 = (param_3->field0_0x0)._s_0.Z;
    Chaos::FRigidClustering::FindChildrenWithinRadius
              (param_1,&local_80,param_2,(TVector<double,3> *)&local_60,(double)param_4,true);
    if (local_80.ArrayNum != 0) {
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      fVar21 = __real_3f800000;
      FVar16.Data = local_80.AllocatorInstance.Data;
      iVar1 = local_80.ArrayNum;
      for (; local_80.AllocatorInstance.Data = FVar16.Data, local_80.ArrayNum = iVar1, -1 < param_5;
          param_5 = param_5 + -1) {
        pFVar15 = FVar16.Data + (longlong)iVar1 * 8;
        while( true ) {
          if (local_80.ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar16.Data == pFVar15) break;
          this = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar16.Data)->
                        field_0xc) {
            this = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar16.Data;
          }
          if (this != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
            fVar19 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(this)
            ;
            fVar20 = fVar21 * param_7->StrainValue;
            if (fVar19 <= fVar20) {
              fVar19 = fVar20;
            }
            Chaos::FRigidClustering::SetExternalStrain(param_7->RigidClustering,this,fVar19);
          }
          FVar16.Data = FVar16.Data + 8;
        }
        if (param_5 != 0) {
          lVar13 = (longlong)local_80.ArrayNum;
          iVar1 = (int)local_68;
          uVar11 = (ulonglong)(int)local_68;
          uVar12 = uVar11;
          if (local_80.ArrayNum != 0) {
            iVar5 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_80.ArrayNum,&local_70,(int *)&local_68,
                               (int *)((longlong)&local_68 + 4));
            memmove(local_70.Data + (longlong)iVar5 * 8,local_80.AllocatorInstance.Data,lVar13 << 3)
            ;
            uVar12 = local_68 & 0xffffffff;
            local_80.ArrayNum = 0;
          }
          if (iVar1 < (int)uVar12) {
            lVar13 = uVar11 * 8;
            do {
              uVar18 = (uint)uVar11;
              uVar6 = 0;
              if ((int)uVar18 < (int)uVar12) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar12 = local_68 & 0xffffffff;
              }
              plVar9 = (longlong *)0x0;
              if (2 < *(byte *)((longlong)*(longlong **)(local_70.Data + lVar13) + 0xc)) {
                plVar9 = *(longlong **)(local_70.Data + lVar13);
              }
              if (plVar9 != (longlong *)0x0) {
                uVar6 = *(uint *)(plVar9 + 1);
                lVar14 = (longlong)(int)uVar6;
                lVar2 = *plVar9;
                uVar7 = 0;
                if ((int)uVar6 < *(int *)(lVar2 + 0x688)) {
                  uVar7 = ~uVar6 >> 0x1f;
                }
                if ((uVar7 == 0) &&
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
                lVar2 = *(longlong *)(lVar2 + 0x680);
                iVar1 = *(int *)(lVar2 + 8 + lVar14 * 0x10);
                pFVar15 = *(FScriptContainerElement **)(lVar2 + lVar14 * 0x10);
                pFVar17 = pFVar15 + (longlong)iVar1 * 0x10;
                while( true ) {
                  if (*(int *)(lVar2 + 8 + lVar14 * 0x10) != iVar1) {
                    local_88[0] = 0;
                    `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(local_88);
                  }
                  if (pFVar15 == pFVar17) break;
                  if (*(longlong *)pFVar15 != 0) {
                    for (FVar16.Data = local_80.AllocatorInstance.Data;
                        FVar16.Data !=
                        local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8;
                        FVar16.Data = FVar16.Data + 8) {
                      if (*(longlong *)FVar16.Data == *(longlong *)pFVar15) goto LAB_1440f8a66;
                    }
                    if (((local_80.AllocatorInstance.Data <= pFVar15) &&
                        (pFVar15 < local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8
                        )) && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    if (local_80.ArrayNum == local_80.ArrayMax) {
                      local_80.ArrayNum =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
                    }
                    lVar10 = (longlong)local_80.ArrayNum;
                    local_80.ArrayNum = local_80.ArrayNum + 1;
                    *(longlong *)(local_80.AllocatorInstance.Data + lVar10 * 8) =
                         *(longlong *)pFVar15;
                  }
LAB_1440f8a66:
                  pFVar15 = pFVar15 + 0x10;
                }
                uVar12 = local_68 & 0xffffffff;
              }
              uVar11 = (ulonglong)(uVar18 + 1);
              lVar13 = lVar13 + 8;
            } while ((int)(uVar18 + 1) < (int)uVar12);
          }
        }
        fVar21 = fVar21 * param_6;
        FVar16.Data = local_80.AllocatorInstance.Data;
        iVar1 = local_80.ArrayNum;
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<``FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::__l12::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 1440f8b20

void __cdecl
ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<__FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External_::__l12::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (FRigidClustering *param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,
          TVector<double> *param_3,float param_4,int param_5,float param_6,<lambda_1> *param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ClusterId *pCVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res10 [8];
  undefined1 local_98 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_90;
  ForAnyElementType local_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  
  pCVar8 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)param_2,*(int *)&param_2->field_0x8
                     );
  if (pCVar8->NumChildren < 1) {
    pfVar9 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains(param_2);
    fVar21 = *pfVar9 - param_7->StrainValue;
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    Chaos::FRigidClustering::SetInternalStrain
              (&((param_7->RBDSolver->MEvolution).Ptr)->Clustering,param_2,fVar21);
  }
  else {
    local_70 = (param_3->field0_0x0)._s_0.X;
    dStack_68 = (param_3->field0_0x0)._s_0.Y;
    local_60 = (param_3->field0_0x0)._s_0.Z;
    Chaos::FRigidClustering::FindChildrenWithinRadius
              (param_1,&local_90,param_2,(TVector<double,3> *)&local_70,(double)param_4,true);
    if (local_90.ArrayNum != 0) {
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = 0;
      fVar21 = __real_3f800000;
      FVar14.Data = local_90.AllocatorInstance.Data;
      iVar1 = local_90.ArrayNum;
      for (; local_90.AllocatorInstance.Data = FVar14.Data, local_90.ArrayNum = iVar1, -1 < param_5;
          param_5 = param_5 + -1) {
        pFVar17 = FVar14.Data + (longlong)iVar1 * 8;
        while( true ) {
          if (local_90.ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (FVar14.Data == pFVar17) break;
          this = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar14.Data)->
                        field_0xc) {
            this = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar14.Data;
          }
          if (this != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
            pfVar9 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                               (this);
            fVar20 = *pfVar9 - fVar21 * param_7->StrainValue;
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            Chaos::FRigidClustering::SetInternalStrain
                      (&((param_7->RBDSolver->MEvolution).Ptr)->Clustering,this,fVar20);
          }
          FVar14.Data = FVar14.Data + 8;
        }
        if (param_5 != 0) {
          lVar15 = (longlong)local_90.ArrayNum;
          iVar1 = (int)local_78;
          uVar12 = (ulonglong)(int)local_78;
          uVar13 = uVar12;
          if (local_90.ArrayNum != 0) {
            iVar5 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,local_90.ArrayNum,&local_80,(int *)&local_78,
                               (int *)((longlong)&local_78 + 4));
            memmove(local_80.Data + (longlong)iVar5 * 8,local_90.AllocatorInstance.Data,lVar15 << 3)
            ;
            uVar13 = local_78 & 0xffffffff;
            local_90.ArrayNum = 0;
          }
          if (iVar1 < (int)uVar13) {
            lVar15 = uVar12 * 8;
            do {
              uVar19 = (uint)uVar12;
              uVar6 = 0;
              if ((int)uVar19 < (int)uVar13) {
                uVar6 = ~uVar19 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar13 = local_78 & 0xffffffff;
              }
              plVar10 = (longlong *)0x0;
              if (2 < *(byte *)((longlong)*(longlong **)(local_80.Data + lVar15) + 0xc)) {
                plVar10 = *(longlong **)(local_80.Data + lVar15);
              }
              if (plVar10 != (longlong *)0x0) {
                uVar6 = *(uint *)(plVar10 + 1);
                lVar16 = (longlong)(int)uVar6;
                lVar2 = *plVar10;
                uVar7 = 0;
                if ((int)uVar6 < *(int *)(lVar2 + 0x688)) {
                  uVar7 = ~uVar6 >> 0x1f;
                }
                if ((uVar7 == 0) &&
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
                lVar2 = *(longlong *)(lVar2 + 0x680);
                iVar1 = *(int *)(lVar2 + 8 + lVar16 * 0x10);
                pFVar17 = *(FScriptContainerElement **)(lVar2 + lVar16 * 0x10);
                pFVar18 = pFVar17 + (longlong)iVar1 * 0x10;
                while( true ) {
                  if (*(int *)(lVar2 + 8 + lVar16 * 0x10) != iVar1) {
                    local_98[0] = 0;
                    `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(local_98);
                  }
                  if (pFVar17 == pFVar18) break;
                  if (*(longlong *)pFVar17 != 0) {
                    for (FVar14.Data = local_90.AllocatorInstance.Data;
                        FVar14.Data !=
                        local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 8;
                        FVar14.Data = FVar14.Data + 8) {
                      if (*(longlong *)FVar14.Data == *(longlong *)pFVar17) goto LAB_1440f8ea6;
                    }
                    if (((local_90.AllocatorInstance.Data <= pFVar17) &&
                        (pFVar17 < local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 8
                        )) && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    if (local_90.ArrayNum == local_90.ArrayMax) {
                      local_90.ArrayNum =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_90.AllocatorInstance,&local_90.ArrayMax);
                    }
                    lVar11 = (longlong)local_90.ArrayNum;
                    local_90.ArrayNum = local_90.ArrayNum + 1;
                    *(longlong *)(local_90.AllocatorInstance.Data + lVar11 * 8) =
                         *(longlong *)pFVar17;
                  }
LAB_1440f8ea6:
                  pFVar17 = pFVar17 + 0x10;
                }
                uVar13 = local_78 & 0xffffffff;
              }
              uVar12 = (ulonglong)(uVar19 + 1);
              lVar15 = lVar15 + 8;
            } while ((int)(uVar19 + 1) < (int)uVar13);
          }
        }
        fVar21 = fVar21 * param_6;
        FVar14.Data = local_90.AllocatorInstance.Data;
        iVar1 = local_90.ArrayNum;
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildFieldSamplePoints<FGeometryCollectionPhysicsProxy> @ 1440f8f80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
Chaos::BuildFieldSamplePoints<FGeometryCollectionPhysicsProxy>
          (FGeometryCollectionPhysicsProxy *param_1,FPBDRigidsSolver *param_2,
          FFieldSystemCommand *param_3,FFieldExecutionDatas *param_4,EFieldResolutionType *param_5,
          EFieldFilterType *param_6,EFieldObjectType *param_7,EFieldPositionType *param_8)

{
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar2;
  EFieldPositionType EVar3;
  FFieldSystemMetaData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  EFieldResolutionType EVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_> *pTVar12;
  TVector<double,3> *pTVar13;
  TVector<double,3> *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  EFieldObjectType EVar19;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar22;
  EFieldFilterType EVar23;
  longlong lVar24;
  EFieldResolutionType local_res8 [2];
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
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  
  if ((param_1 == (FGeometryCollectionPhysicsProxy *)0x0) || (param_2 == (FPBDRigidsSolver *)0x0)) {
    return false;
  }
  bVar9 = FFieldSystemCommand::HasMetaData(param_3,ECommandData_ProcessingResolution);
  pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (bVar9) {
    pTVar12 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
              ::FindChecked(&param_3->MetaData,ECommandData_ProcessingResolution);
    local_res8[0] = *(EFieldResolutionType *)(pTVar12->Ptr + 1);
  }
  else {
    local_res8[0] = Field_Resolution_Minimal;
  }
  EVar19 = Field_Object_Max;
  EVar3 = Field_Position_Max;
  EVar23 = Field_Filter_Max;
  bVar9 = FFieldSystemCommand::HasMetaData(param_3,ECommandData_Filter);
  if (bVar9) {
    pTVar12 = TMapBase<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
              ::FindChecked(&param_3->MetaData,ECommandData_Filter);
    pFVar4 = pTVar12->Ptr;
    EVar3 = *(EFieldPositionType *)(pFVar4 + 2);
    EVar23 = *(EFieldFilterType *)(pFVar4 + 1);
    EVar19 = *(EFieldObjectType *)&pFVar4[1].field_0x4;
  }
  pTVar1 = param_4->ParticleHandles;
  if (EVar23 == Field_Filter_Max) {
    FGeometryCollectionPhysicsProxy::GetRelevantParticleHandles
              (param_1,pTVar1,param_2,local_res8[0]);
  }
  else {
    FGeometryCollectionPhysicsProxy::GetFilteredParticleHandles
              (param_1,pTVar1,param_2,EVar23,EVar19);
  }
  *param_5 = local_res8[0];
  *param_6 = EVar23;
  *param_7 = EVar19;
  *param_8 = EVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SamplePositions,param_4->ParticleHandles[0].ArrayNum,No);
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SampleIndices,param_4->ParticleHandles[0].ArrayNum,No);
  this = param_4->ParticleHandles + 1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (this,param_4->ParticleHandles[0].ArrayNum,No);
  iVar17 = param_4->ParticleHandles[0].ArrayNum;
  local_res8[0] = Field_Resolution_Minimal;
  local_108 = param_4;
  local_100 = param_3;
  local_f8 = this;
  if (EVar3 == Field_Position_CenterOfMass) {
    pTVar21 = pTVar18;
    pTVar22 = pTVar18;
    if (0 < iVar17) {
      do {
        uVar20 = (uint)pTVar21;
        uVar11 = 0;
        if ((int)uVar20 < iVar17) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar21 = *(TGeometryParticleHandleImp<double,3,1> **)
                   ((longlong)&pTVar22->_padding_ + (longlong)(pTVar1->AllocatorInstance).Data);
        this_00 = pTVar18;
        if (1 < *(byte *)((longlong)&pTVar21->_padding_ + 4)) {
          this_00 = pTVar21;
        }
        if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar13 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          uVar11 = (uint)this_00->_padding_;
          lVar24 = (longlong)(int)uVar11;
          lVar5 = this_00->_padding_;
          uVar16 = 0;
          if ((int)uVar11 < *(int *)(lVar5 + 0x568)) {
            uVar16 = ~uVar11 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          lVar5 = *(longlong *)(lVar5 + 0x560);
          local_88._0_8_ = (undefined8)*(float *)(lVar5 + lVar24 * 0x10);
          local_88._8_8_ = (undefined8)*(float *)(lVar5 + 4 + lVar24 * 0x10);
          uVar2 = *(undefined8 *)(lVar5 + 8 + lVar24 * 0x10);
          dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
          local_88._24_4_ = SUB84(dVar7,0);
          local_88._16_8_ = (double)(float)uVar2;
          local_88._28_4_ = (int)((ulonglong)dVar7 >> 0x20);
          pTVar14 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          local_c8._s_0.X = (double)*(undefined8 *)pTVar14;
          local_c8._s_0.Y = (double)*(undefined8 *)&pTVar14->field_0x8;
          local_c8._s_0.Z = (double)*(undefined8 *)&pTVar14->field_0x10;
          pTVar15 = UE::Math::TQuat<double>::RotateVector
                              ((TQuat<double> *)local_88,&local_50,(TVector<double> *)&local_c8._s_0
                              );
          local_68 = (pTVar15->field0_0x0)._s_0.X;
          dStack_60 = (pTVar15->field0_0x0)._s_0.Y;
          local_58 = (pTVar15->field0_0x0)._s_0.Z;
          local_e0 = dStack_60 + *(double *)&pTVar13->field_0x8;
          local_e8 = local_68 + *(double *)pTVar13;
          local_d8 = local_58 + *(double *)&pTVar13->field_0x10;
          `Chaos::BuildFieldSamplePoints<FGeometryCollectionPhysicsProxy>'::__l9::<lambda_1>::
          operator()(&local_108,(TVector<double,3> *)&local_e8,this_00,(int *)local_res8);
        }
        iVar17 = param_4->ParticleHandles[0].ArrayNum;
        pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)(uVar20 + 1);
        pTVar22 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar22->_padding_;
      } while ((int)(uVar20 + 1) < iVar17);
    }
  }
  else {
    pTVar21 = pTVar18;
    if (0 < iVar17) {
      do {
        uVar20 = (uint)pTVar18;
        uVar11 = 0;
        if ((int)uVar20 < iVar17) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pTVar18 = *(TGeometryParticleHandleImp<double,3,1> **)
                   ((longlong)&pTVar21->_padding_ + (longlong)(pTVar1->AllocatorInstance).Data);
        if (pTVar18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar13 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar18->_padding_,(int)pTVar18->_padding_);
          local_a8._0_8_ = *(undefined8 *)pTVar13;
          local_a8._8_8_ = *(undefined8 *)&pTVar13->field_0x8;
          local_a8._16_8_ = *(undefined8 *)&pTVar13->field_0x10;
          `Chaos::BuildFieldSamplePoints<FGeometryCollectionPhysicsProxy>'::__l9::<lambda_1>::
          operator()(&local_108,&local_a8,pTVar18,(int *)local_res8);
        }
        iVar17 = param_4->ParticleHandles[0].ArrayNum;
        pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)(uVar20 + 1);
        pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar21->_padding_;
      } while ((int)(uVar20 + 1) < iVar17);
    }
  }
  EVar8 = local_res8[0];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->SamplePositions,local_res8[0],No);
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(&param_4->SampleIndices,EVar8,No);
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (param_4->ParticleHandles + 1,EVar8,No);
  return 0 < param_4->ParticleHandles[1].ArrayNum;
}

// ConstructItems<FSharedSimulationSizeSpecificData,FSharedSimulationSizeSpecificData,int> @ 1440f93a0

void __cdecl
ConstructItems<FSharedSimulationSizeSpecificData,FSharedSimulationSizeSpecificData,int>
          (void *param_1,FSharedSimulationSizeSpecificData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  float *pfVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x14);
    pfVar4 = &param_2->DamageThreshold;
    do {
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      *(float *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pfVar4) =
           ((FSharedSimulationSizeSpecificData *)(pfVar4 + -1))->MaxSize;
      piVar3[-4] = (int)*pfVar4;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = (int)pfVar4[3];
      _Src = (((TArray<FCollectionCollisionTypeData,TSizedDefaultAllocator<32>_> *)(pfVar4 + 1))->
             AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x24);
      }
      pfVar4 = pfVar4 + 6;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int> @ 1440f9480

void __cdecl
ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
          (void *param_1,FFieldSystemCommand *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  FName *pFVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  int local_res18;
  undefined1 local_res20 [8];
  TKeyInitializer<FFieldSystemMetaData::EMetaType_const_&> local_e8;
  undefined8 *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FName local_60 [4];
  undefined4 local_3c;
  
  if (param_3 != 0) {
    puVar15 = (undefined8 *)&(param_2->MetaData).field_0x20;
    puVar20 = (undefined8 *)((longlong)param_1 + 0x10);
    local_res18 = param_3;
    do {
      local_e0 = puVar20;
      if (puVar15[-0x12] == 0) {
        pFVar9 = FName::FName(local_60,"");
      }
      else {
        pFVar9 = (FName *)(puVar15 + -0x13);
      }
      uVar10 = 0;
      *(FName *)((longlong)param_1 + (-0x98 - (longlong)param_2) + (longlong)puVar15) = *pFVar9;
      if ((longlong *)puVar15[-0x12] != (longlong *)0x0) {
        uVar10 = (**(code **)(*(longlong *)puVar15[-0x12] + 0x18))();
      }
      puVar20[-1] = uVar10;
      *puVar20 = puVar15[-0x11];
      *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar15 + -0x10);
      uVar10 = puVar15[-0xe];
      puVar20[2] = puVar15[-0xf];
      puVar20[3] = uVar10;
      uVar10 = puVar15[-0xc];
      puVar20[4] = puVar15[-0xd];
      puVar20[5] = uVar10;
      uVar10 = puVar15[-10];
      puVar20[6] = puVar15[-0xb];
      puVar20[7] = uVar10;
      puVar20[8] = puVar15[-9];
      uStack_b8 = 0;
      uVar16 = uStack_b8;
      if (puVar15[-0x12] != 0) {
        uVar16 = *(uint *)(puVar15 + -8);
      }
      *(uint *)(puVar20 + 9) = uVar16;
      uStack_b4 = 1;
      *(undefined4 *)((longlong)puVar20 + 0x4c) = *(undefined4 *)((longlong)puVar15 + -0x3c);
      local_a0 = 0;
      uVar10 = puVar15[-6];
      local_c8 = puVar20 + 0xd;
      puVar20[10] = puVar15[-7];
      puVar20[0xb] = uVar10;
      puVar20[0xc] = puVar15[-5];
      puVar20[0xd] = 0;
      puVar20[0xe] = 0;
      puVar20[0x11] = 0;
      *(undefined4 *)(puVar20 + 0x12) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x94) = 0x80;
      *(undefined4 *)(puVar20 + 0x13) = 0xffffffff;
      *(undefined4 *)((longlong)puVar20 + 0x9c) = 0;
      puVar20[0x15] = 0;
      *(undefined4 *)(puVar20 + 0x16) = 0;
      uVar16 = *(uint *)(puVar15 + 1);
      uStack_a4 = local_a0;
      if (uVar16 != 0) {
        puVar18 = (uint *)*puVar15;
        if ((uint *)*puVar15 == (uint *)0x0) {
          puVar18 = (uint *)(puVar15 + -2);
        }
        uVar19 = *puVar18;
        local_a0 = 0;
        uStack_b8 = 0;
        while (uVar19 == 0) {
          lVar13 = (longlong)(int)uStack_b8;
          local_a0 = local_a0 + 0x20;
          uStack_b8 = uStack_b8 + 1;
          uStack_a4 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b8)
          goto LAB_1440f964f;
          uVar19 = puVar18[lVar13 + 1];
        }
        uStack_b4 = -uVar19 & uVar19;
        uVar2 = (ulonglong)uStack_b4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_d8 = (int)lVar13;
        uStack_a4 = (local_a0 - 1) + local_d8;
        if ((int)uVar16 < (int)uStack_a4) {
          uStack_a4 = uVar16;
        }
      }
LAB_1440f964f:
      local_c0 = puVar15 + -4;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar15 + -2);
      uStack_9c = local_3c;
      iStack_98 = *(int *)(puVar15 + -3) - *(int *)((longlong)puVar15 + 0x14);
      uVar19 = uVar16 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uStack_b4,uStack_b8);
      uStack_a8 = 0xffffffff;
      TStack_88.CurrentBitIndex = uStack_a4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_88._28_4_ = local_3c;
      TStack_88.BaseBitIndex = local_a0;
      uStack_68 = CONCAT44(uStack_94,iStack_98);
      local_b0 = pTVar1;
      local_90 = local_c0;
      TStack_88.Array = pTVar1;
      if (((int)uVar16 < 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)(puVar15 + 1);
      if (uVar16 != uVar3) {
        pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar15;
        if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar15 ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = pTVar1;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar14;
          uVar19 = uVar19 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1440f974f;
          uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_d4 = (int)lVar13;
        uVar16 = local_d4 + -1 + uVar19;
        if ((int)uVar3 < (int)uVar16) {
          uVar16 = uVar3;
        }
      }
LAB_1440f974f:
      while( true ) {
        plVar7 = local_90;
        if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        plVar6 = local_c8;
        if (((TStack_88.CurrentBitIndex == uVar16) && (TStack_88.Array == pTVar1)) &&
           (plVar7 == puVar15 + -4)) break;
        lVar13 = *plVar7 + (longlong)TStack_88.CurrentBitIndex * 0x18;
        local_d0 = lVar13;
        TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_const_&>_>
                  (local_c8,&local_e8,(bool *)&local_d0);
        lVar11 = (longlong)(int)local_e8.Key;
        lVar4 = *plVar6;
        puVar12 = (undefined8 *)(**(code **)(**(longlong **)(lVar13 + 8) + 0x10))();
        puVar20 = *(undefined8 **)(lVar4 + 8 + lVar11 * 0x18);
        if ((puVar20 != puVar12) &&
           (*(undefined8 **)(lVar4 + 8 + lVar11 * 0x18) = puVar12, puVar20 != (undefined8 *)0x0)) {
          (**(code **)*puVar20)(puVar20,1);
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      puVar15 = puVar15 + 0x19;
      puVar20 = local_e0 + 0x19;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}

// DefaultConstructItems<FDamageCollector::FDamageData,int> @ 1440f9cc0

void __cdecl DefaultConstructItems<FDamageCollector::FDamageData,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGeometryCollectionResults::FPositionData,int> @ 1440f9cf0

void __cdecl
DefaultConstructItems<FGeometryCollectionResults::FPositionData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 8;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGeometryCollectionResults::FStateData,int> @ 1440f9d20

void __cdecl
DefaultConstructItems<FGeometryCollectionResults::FStateData,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGeometryCollectionResults::FVelocityData,int> @ 1440f9d30

void __cdecl
DefaultConstructItems<FGeometryCollectionResults::FVelocityData,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FSharedSimulationSizeSpecificData,int> @ 1440f9d40

void __cdecl
DestructItems<FSharedSimulationSizeSpecificData,int>
          (FSharedSimulationSizeSpecificData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CollisionShapesData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSharedSimulationSizeSpecificData *)(&param_1->CollisionShapesData + 1);
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter>,int> @ 1440f9d80

void __cdecl
DestructItems<TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter>,int>
          (TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Chaos::FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> *)
              ((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>,int> @ 1440f9dc0

void __cdecl
DestructItems<TUniquePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>,int>
          (TUniquePtr<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>
           *param_1,int param_2)

{
  TGeometryParticleHandleImp<double,3,1> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = (TGeometryParticleHandleImp<double,3,1> *)param_1->Ptr;
    if (this != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this);
      operator_delete(this,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int> @ 1440f9e20

void __cdecl
DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
          (TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *param_1,
          int param_2)

{
  FPerShapeData *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPerShapeData *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>,int> @ 1440f9e60

void __cdecl
DestructItems<TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>,int>
          (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> *param_1,
          int param_2)

{
  FTriangleMesh *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FTriangleMesh *)0x0) {
      Chaos::FTriangleMesh::~FTriangleMesh(this);
      operator_delete(this,0x148);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetCollisionTraceType'::__l2::<lambda_1>_> @ 1440f9ec0

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetCollisionTraceType_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  IPhysicsProxyBase *pIVar3;
  
  if (this->Type == 0) {
    pIVar3 = (IPhysicsProxyBase *)this[1]._padding_;
    *(<lambda_1> *)&this[1].WorldSpaceShapeBounds.MMax = *param_1;
    uVar2 = (this->DirtyFlags).Bits;
    (this->DirtyFlags).Bits = uVar2 | 1;
    if (((uVar2 == 0) && (pIVar3 != (IPhysicsProxyBase *)0x0)) &&
       (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar3->Solver,pIVar3,this->ShapeIdx);
      return;
    }
  }
  else {
    this[1].WorldSpaceShapeBounds.MMin.field_0x10 = *param_1;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetProxy'::__l2::<lambda_1>_> @ 1440f9f10

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetProxy_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined4 uVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->Type == 0) {
    pIVar2 = *(IPhysicsProxyBase **)param_1;
    this[1]._padding_ = (longlong)pIVar2;
    if (((pIVar2 != (IPhysicsProxyBase *)0x0) && ((this->DirtyFlags).Bits != 0)) &&
       (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,this->ShapeIdx);
      return;
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ShapeInstance.h"
                       ,0x2b2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::SetSimEnabled'::__l2::<lambda_1>_> @ 1440f9f80

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::SetSimEnabled_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  IPhysicsProxyBase *pIVar4;
  
  if (this->Type == 0) {
    pIVar4 = (IPhysicsProxyBase *)this[1]._padding_;
    puVar1 = &this[1].WorldSpaceShapeBounds.MMax.field_0x1;
    *puVar1 = *puVar1 ^ (this[1].WorldSpaceShapeBounds.MMax.field_0x1 ^ (byte)*param_1) & 1;
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
    *puVar1 = *puVar1 ^ (this[1].WorldSpaceShapeBounds.MMin.field_0x11 ^ (byte)*param_1) & 1;
  }
  return;
}

// IterateThroughChildren<`FGeometryCollectionPhysicsProxy::InitializeBodiesPT'::__l92::<lambda_2>_> @ 1440fb530

void __thiscall
FTransformDynamicCollection::
IterateThroughChildren<_FGeometryCollectionPhysicsProxy::InitializeBodiesPT_::__l92::<lambda_2>_>
          (FTransformDynamicCollection *this,int param_1,<lambda_2> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  FGeometryCollection *pFVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 local_res20 [8];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  pFVar3 = (this->RestCollectionShared).Object;
  if (((pFVar3 == (FGeometryCollection *)0x0) || (param_1 < 0)) ||
     ((int)pFVar3->_padding_ <= param_1)) {
    return;
  }
  uVar7 = 0;
  if (param_1 < (int)pFVar3->_padding_) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = 0;
  plVar16 = (longlong *)((longlong)param_1 * 0x50 + pFVar3->_padding_);
  iVar15 = 0;
  iVar10 = (int)plVar16[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
  uVar7 = 1;
  iVar8 = 0;
  if (iVar10 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1440fb65d;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar15;
    if (iVar10 < iVar8) {
      iVar8 = iVar10;
    }
  }
LAB_1440fb65d:
  uVar12 = *(uint *)(plVar16 + 5);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar7,iVar13);
  TStack_88.CurrentBitIndex = iVar8;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar15;
  uStack_68 = CONCAT44(uStack_94,(int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34));
  TStack_88.Array = pTVar1;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)(plVar16 + 5);
  if (uVar12 != uVar7) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1440fb760;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1440fb760:
  do {
    if ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34) != (int)uStack_68) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_88.CurrentBitIndex == uVar12) && (TStack_88.Array == pTVar1)) {
      return;
    }
    iVar10 = *(int *)(*plVar16 + (longlong)TStack_88.CurrentBitIndex * 0xc);
    bVar6 = GetHasParent(this,iVar10);
    if (((bVar6) && (-1 < iVar10)) &&
       (pTVar4 = param_2->SubTreeContainsSimulatableParticle, iVar10 < pTVar4->ArrayNum)) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pTVar4->AllocatorInstance).Data[iVar10] != (FScriptContainerElement)0x0) {
        pTVar4 = param_2->SubTreeContainsSimulatableParticle;
        uVar7 = *param_2->TransformGroupIndex;
        uVar12 = 0;
        if ((int)uVar7 < pTVar4->ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pTVar4->AllocatorInstance).Data[(int)uVar7] = (FScriptContainerElement)0x1;
        return;
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// IterateThroughChildren<`FGeometryCollectionPhysicsProxy::InitializeBodiesPT'::__l96::<lambda_3>_> @ 1440fb8b0

void __thiscall
FTransformDynamicCollection::
IterateThroughChildren<_FGeometryCollectionPhysicsProxy::InitializeBodiesPT_::__l96::<lambda_3>_>
          (FTransformDynamicCollection *this,int param_1,<lambda_3> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  FGeometryCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = (this->RestCollectionShared).Object;
  if (((pFVar4 == (FGeometryCollection *)0x0) || (param_1 < 0)) ||
     ((int)pFVar4->_padding_ <= param_1)) {
    return;
  }
  iVar10 = 0;
  uVar7 = 0;
  if (param_1 < (int)pFVar4->_padding_) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = 1;
  plVar15 = (longlong *)((longlong)param_1 * 0x50 + pFVar4->_padding_);
  iVar13 = 0;
  iVar3 = (int)plVar15[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1440fb9dd;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar13 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1440fb9dd:
  uVar12 = *(uint *)(plVar15 + 5);
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar10);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34));
  TStack_60.Array = pTVar1;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)(plVar15 + 5);
  if (uVar12 != uVar7) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1440fbae0;
      uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1440fbae0:
  while( true ) {
    if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) && (TStack_60.Array == pTVar1)) break;
    iVar10 = *(int *)(*plVar15 + (longlong)TStack_60.CurrentBitIndex * 0xc);
    bVar6 = GetHasParent(this,iVar10);
    if ((bVar6) &&
       (bVar6 = `FGeometryCollectionPhysicsProxy::InitializeBodiesPT'::__l96::<lambda_3>::operator()
                          (param_2,iVar10), !bVar6)) {
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MakeSerializable<Chaos::TPBDGeometryCollectionParticles<double,3>_> @ 1440fbce0

TSerializablePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_> __cdecl
Chaos::MakeSerializable<Chaos::TPBDGeometryCollectionParticles<double,3>_>
          (TUniquePtr<Chaos::TPBDGeometryCollectionParticles<double,3>,TDefaultDelete<Chaos::TPBDGeometryCollectionParticles<double,3>_>_>
           *param_1)

{
  undefined8 *in_RDX;
  
  param_1->Ptr = (TPBDGeometryCollectionParticles<double,3> *)*in_RDX;
  return (TSerializablePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_>)
         (TPBDGeometryCollectionParticles<double,3> *)param_1;
}

// RegisterSimOneShotCallback<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>_> @ 1440fbe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
RegisterSimOneShotCallback<_FGeometryCollectionPhysicsProxy::SetDamageThresholds_External_::__l2::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FSimCallbackCommandObject *pFVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  FSimCallbackCommandObject *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_74 = 0;
  pFVar4 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
    local_68 = (FSimCallbackCommandObject *)0x0;
    local_40 = FMemory::Malloc(0x20,8);
    *local_40 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
    puVar1 = local_40 + 1;
    pFVar2 = (ForAnyElementType *)(local_40 + 2);
    *puVar1 = param_1->__this;
    pFVar2->Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_1->DamageThresholds).ArrayNum;
    _Src = (param_1->DamageThresholds).AllocatorInstance.Data;
    *(int *)(local_40 + 3) = iVar3;
    if (iVar3 == 0) {
      *(int *)((longlong)local_40 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,0,pFVar2,iVar3,(int *)((longlong)local_40 + 0x1c));
      memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 2);
    }
    if (puVar1 != (undefined8 *)0x0) {
      local_68 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined2 *)&pFVar4->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar4->Func = local_68;
    *(longlong **)&(pFVar4->Func).field_0x28 = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)&(pFVar4->Func).field_0x10 = local_58;
    *(undefined8 *)&(pFVar4->Func).field_0x18 = uStack_50;
    *(undefined8 *)&(pFVar4->Func).field_0x20 = local_48;
    if (*(longlong *)&pFVar4->Func != 0) {
      local_68 = pFVar6;
    }
    *(undefined8 *)&pFVar4->Func2 = 0;
    *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
    pFVar4->bFuncHasTimeParameters = false;
    pFVar4->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar4->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_78);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar4;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) && (local_68 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar7);
  return;
}

// RegisterSimOneShotCallback<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>_> @ 1440fc030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::
RegisterSimOneShotCallback<_FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External_::__l2::<lambda_1>_>
          (FPhysicsSolverBase *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FSimCallbackCommandObject *pFVar4;
  longlong *plVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  FSimCallbackCommandObject *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_74 = 0;
  pFVar4 = ::operator_new(0xc0);
  pFVar7 = pFVar6;
  if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
    local_68 = (FSimCallbackCommandObject *)0x0;
    local_40 = FMemory::Malloc(0x20,8);
    *local_40 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
    puVar1 = local_40 + 1;
    pFVar2 = (ForAnyElementType *)(local_40 + 2);
    *puVar1 = param_1->__this;
    pFVar2->Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_1->PerParticleData).ArrayNum;
    _Src = (param_1->PerParticleData).AllocatorInstance.Data;
    *(int *)(local_40 + 3) = iVar3;
    if (iVar3 == 0) {
      *(int *)((longlong)local_40 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,iVar3,0,pFVar2,iVar3,(int *)((longlong)local_40 + 0x1c));
      memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x28);
    }
    if (puVar1 != (undefined8 *)0x0) {
      local_68 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>,void>
                 ::Call;
    }
    *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined2 *)&pFVar4->field_0x40 = 1;
    *(FSimCallbackCommandObject **)&pFVar4->Func = local_68;
    *(longlong **)&(pFVar4->Func).field_0x28 = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)&(pFVar4->Func).field_0x10 = local_58;
    *(undefined8 *)&(pFVar4->Func).field_0x18 = uStack_50;
    *(undefined8 *)&(pFVar4->Func).field_0x20 = local_48;
    if (*(longlong *)&pFVar4->Func != 0) {
      local_68 = pFVar6;
    }
    *(undefined8 *)&pFVar4->Func2 = 0;
    *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
    pFVar4->bFuncHasTimeParameters = false;
    pFVar4->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar4->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_78);
    }
    pFVar6 = (FSimCallbackCommandObject *)&DAT_00000001;
    pFVar7 = pFVar4;
  }
  if ((pFVar6 != (FSimCallbackCommandObject *)0x0) && (local_68 != (FSimCallbackCommandObject *)0x0)
     ) {
    plVar5 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar7);
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>_> @ 1440fc590

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>_>
          (_Atomic_padded<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*> @ 1440fc5a0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>
          (ResourceTypeWrapper **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::__l2::<lambda_1>,1,0> @ 1440fd7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetDamageModel_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::__l2::<lambda_1>,1,1> @ 1440fd810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>,1,1> @ 1440fd830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetDamageThresholds_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::`2'::<lambda_1>,1,1>
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

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::__l2::<lambda_1>,1,0> @ 1440fd850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::__l2::<lambda_1>,1,0> @ 1440fd870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetEnableGravity_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::__l2::<lambda_1>,1,0> @ 1440fd890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::__l2::<lambda_1>,1,0> @ 1440fd8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::__l2::<lambda_1>,1,0> @ 1440fd8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::__l2::<lambda_1>,1,0> @ 1440fd8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::__l2::<lambda_1>,1,0> @ 1440fd910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::__l2::<lambda_1>,1,0> @ 1440fd930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::__l2::<lambda_1>,1,0> @ 1440fd950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::__l2::<lambda_1>,1,0> @ 1440fd970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::__l2::<lambda_1>,1,0> @ 1440fd990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::__l2::<lambda_1>,1,0> @ 1440fd9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SyncParticles_External_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::__l2::<lambda_1>,1,1> @ 1440fd9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::UpdateFilterData_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>,1,1> @ 1440fd9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::`2'::<lambda_1>,1,1>
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

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::__l5::<lambda_1>,1,1> @ 1440fda10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetWorldTransform_External_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::__l12::<lambda_1>,1,1> @ 1440fda30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::<lambda_1>,1,1> @ 1440fda50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::<lambda_1>,1,1> @ 1440fda70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::__l12::<lambda_1>,1,1> @ 1440fda90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::__l12::<lambda_1>,1,1> @ 1440fdab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyForceAt_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::__l12::<lambda_1>,1,1> @ 1440fdad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::__l12::<lambda_1>,1,1> @ 1440fdaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::__l12::<lambda_1>,1,1> @ 1440fdb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::__l12::<lambda_1>,1,0> @ 1440fdb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::__l12::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::BreakActiveClusters_External_::__l12::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::__l12::<lambda_1>,1,1> @ 1440fdb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::BreakClusters_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
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

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::__l12::<lambda_1>,1,1> @ 1440fdb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::BufferFieldCommand_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0xd8) = 0;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 0x90));
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::__l12::<lambda_1>,1,1> @ 1440fdbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::DisableParticles_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
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

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::__l12::<lambda_1>,1,0> @ 1440fdc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::__l12::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External_::__l12::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::__l12::<lambda_1>,1,1> @ 1440fdc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::__l12::<lambda_1>,1,1> @ 1440fdc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::__l12::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External_::__l12::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// operator() @ 1440fe420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`ComputeMassPropertiesAndTriMeshes'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FImplicitObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStackY_e8 [32];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  lVar10 = *(longlong *)this;
  lVar9 = (longlong)param_1;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar10 + 0x18)) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar6 = *(uint *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 4);
  if ((((int)uVar6 < 0) || (*(int *)(lVar1 + 0x28) <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar10 = *(longlong *)(lVar1 + 0x20);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar10 = lVar1 + 0x10;
  }
  if ((*(uint *)(lVar10 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
       (uVar6 & 0x1f) & 1) != 0) {
    plVar2 = *(longlong **)((longlong)this + 0x30);
    uVar7 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar10 = *plVar2;
    plVar2 = *(longlong **)((longlong)this + 0x28);
    uVar8 = 0;
    uVar7 = uVar8;
    if (param_1 < (int)plVar2[1]) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar1 = *plVar2;
    plVar2 = *(longlong **)((longlong)this + 0x20);
    uVar7 = uVar8;
    if (param_1 < (int)plVar2[1]) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ComputeMassPropertyFromMesh
              (param_1,*(FGeometryCollection **)((longlong)this + 0x10),
               *(FSharedSimulationParameters **)((longlong)this + 0x18),
               (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> *)
               (*plVar2 + lVar9 * 8),(FMassProperties *)(lVar1 + lVar9 * 0xd0),
               (bool *)(lVar10 + lVar9));
    if (((*(byte *)(*(longlong *)((longlong)this + 0x18) + 0x30) & 2) != 0) &&
       (lVar10 = **(longlong **)((longlong)this + 0x38), lVar10 != 0)) {
      uVar7 = uVar8;
      if ((int)uVar6 < *(int *)(lVar10 + 0x18)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar6 * 8) != 0) {
        lVar10 = **(longlong **)((longlong)this + 0x38);
        if ((int)uVar6 < *(int *)(lVar10 + 0x18)) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)((longlong)this + 0x28);
        pFVar3 = *(FImplicitObject **)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar6 * 8);
        local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        uVar6 = 0;
        if (param_1 < (int)plVar2[1]) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        Chaos::CalculateMassPropertiesOfImplicitType
                  ((FMassProperties *)(lVar9 * 0xd0 + *plVar2),(TRigidTransform<double,3> *)local_a8
                   ,pFVar3,__real_3ff0000000000000);
        plVar2 = *(longlong **)((longlong)this + 0x30);
        uVar6 = 0;
        if (param_1 < (int)plVar2[1]) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)(lVar9 + *plVar2) = 0;
      }
    }
  }
  return;
}

// operator() @ 1440fe820

void __thiscall
`GenerateInnerAndOuterRadiiIfNeeded'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)this;
  lVar10 = (longlong)param_1;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar2 + 0x3f8)) {
    uVar8 = uVar9;
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
  if (*(float *)(*(longlong *)(lVar2 + 0x3f0) + lVar10 * 4) != 0.0) {
    lVar2 = *(longlong *)this;
    uVar8 = 0;
    if (param_1 < *(int *)(lVar2 + 0x418)) {
      uVar8 = uVar9;
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
    if (*(float *)(*(longlong *)(lVar2 + 0x410) + lVar10 * 4) != 0.0) {
      return;
    }
  }
  lVar2 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar2 + 0x418)) {
    uVar8 = uVar9;
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
  lVar2 = *(longlong *)(lVar2 + 0x410);
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar3 + 0x3f8)) {
    uVar8 = uVar9;
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
  lVar3 = *(longlong *)(lVar3 + 0x3f0);
  lVar4 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar4 + 0x458)) {
    uVar8 = uVar9;
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
  lVar5 = *(longlong *)this;
  iVar1 = *(int *)(*(longlong *)(lVar4 + 0x450) + lVar10 * 4);
  uVar8 = 0;
  if (param_1 < *(int *)(lVar5 + 0x438)) {
    uVar8 = uVar9;
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
  GeometryCollection::ComputeInnerAndOuterRadiiFromGeometryVertices
            (*(TManagedArray<UE::Math::TVector<float>_> **)((longlong)this + 8),
             *(int *)(*(longlong *)(lVar5 + 0x430) + lVar10 * 4),iVar1,(float *)(lVar3 + lVar10 * 4)
             ,(float *)(lVar2 + lVar10 * 4));
  return;
}

// operator() @ 1440ff4f0

void __thiscall
``FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::<lambda_1>::
operator()'::__l5::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  bool *pbVar1;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_58,
             *(int *)&param_1->field_0x8);
  local_30 = *(double *)((longlong)this + 0x10) + local_48;
  local_40 = *(double *)this + local_58;
  local_38 = *(double *)((longlong)this + 8) + local_50;
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
             (TVector<double,3> *)&local_40);
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_40,
             *(int *)&param_1->field_0x8);
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_40 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_30 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pbVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (*pbVar1 == false) {
      Chaos::FPBDRigidsEvolutionBase::WakeParticle
                (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 0x18) + 0xbd0),
                 (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    }
  }
  return;
}

// operator() @ 1440ff5e0

void __thiscall
``FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::<lambda_1>::
operator()'::__l5::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  bool *pbVar1;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_58,
             *(int *)&param_1->field_0x8);
  local_30 = *(double *)((longlong)this + 0x10) + local_48;
  local_40 = *(double *)this + local_58;
  local_38 = *(double *)((longlong)this + 8) + local_50;
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8,
             (TVector<double,3> *)&local_40);
  Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_40,
             *(int *)&param_1->field_0x8);
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_40 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_30 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pbVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (*pbVar1 == false) {
      Chaos::FPBDRigidsEvolutionBase::WakeParticle
                (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)this + 0x18) + 0xbd0),
                 (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    }
  }
  return;
}

// operator() @ 1440ffe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::BuildFieldSamplePoints<FGeometryCollectionPhysicsProxy>'::__l9::<lambda_1>::operator()
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

// `scalar_deleting_destructor' @ 144104c00

void * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::_scalar_deleting_destructor_
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this,uint param_1)

{
  FGeometryCollectionResults *pFVar1;
  longlong lVar2;
  ResourceTypeWrapper *pRVar3;
  
  pRVar3 = (ResourceTypeWrapper *)&this->ProducerThreadBuffer;
  lVar2 = 3;
  do {
    pFVar1 = pRVar3[-1].Value.Ptr;
    pRVar3 = pRVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FGeometryCollectionResults *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  } while (lVar2 != 0);
  this->_padding_ = (longlong)&___7__IBufferResource_VFGeometryCollectionResults___Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104c90

void * __thiscall
Chaos::IBufferResource<FGeometryCollectionResults>::_scalar_deleting_destructor_
          (IBufferResource<FGeometryCollectionResults> *this,uint param_1)

{
  *this = (IBufferResource<FGeometryCollectionResults>)
          &___7__IBufferResource_VFGeometryCollectionResults___Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144104fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441050a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441050e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441051b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441051f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441052b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441052f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::__l12::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441053b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0xd8) = 0;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 0x90));
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441054e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::__l12::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::__l12::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::`12'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441055a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryCollectionProxyTimestamp,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGeometryCollectionProxyTimestamp,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441055e0

void * __thiscall
TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
::_scalar_deleting_destructor_
          (TPhysicsProxy<FGeometryCollectionPhysicsProxy,FStubGeometryCollectionData,FGeometryCollectionProxyTimestamp>
           *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TPhysicsProxy_VFGeometryCollectionPhysicsProxy__VFStubGeometryCollectionData__UFGeometryCollectionProxyTimestamp____6B_
  ;
  IPhysicsProxyBase::~IPhysicsProxyBase((IPhysicsProxyBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105630

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105670

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441056b0

void * __thiscall
FFieldSystemMetaDataProcessingResolution::_scalar_deleting_destructor_
          (FFieldSystemMetaDataProcessingResolution *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FFieldSystemMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441056f0

void * __thiscall
FGeometryCollectionPhysicsProxy::_scalar_deleting_destructor_
          (FGeometryCollectionPhysicsProxy *this,uint param_1)

{
  ~FGeometryCollectionPhysicsProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x870);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144105730

void * __thiscall
FGeometryCollectionResults::_scalar_deleting_destructor_
          (FGeometryCollectionResults *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  pFVar1 = (this->Velocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Positions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ModifiedTransformIndices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// AreaFromBoundingBoxOverlap @ 144106ec0

float __cdecl AreaFromBoundingBoxOverlap(TAABB<double,3> *param_1,TAABB<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  dVar16 = *(double *)&(param_2->MMin).field_0x10;
  dVar15 = *(double *)&(param_1->MMin).field_0x10;
  dVar1 = *(double *)&(param_2->MMin).field_0x8;
  dVar2 = *(double *)&(param_1->MMin).field_0x8;
  dVar12 = *(double *)&param_2->MMin;
  if (*(double *)&param_2->MMin <= *(double *)&param_1->MMin) {
    dVar12 = *(double *)&param_1->MMin;
  }
  dVar3 = *(double *)&(param_2->MMax).field_0x10;
  dVar4 = *(double *)&(param_2->MMax).field_0x8;
  dVar5 = *(double *)&param_2->MMax;
  dVar6 = *(double *)&(param_1->MMax).field_0x8;
  uVar19 = SUB84(dVar6,0);
  uVar20 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar7 = *(double *)&(param_1->MMax).field_0x10;
  uVar21 = SUB84(dVar7,0);
  uVar22 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = *(double *)&param_1->MMax;
  uVar17 = SUB84(dVar8,0);
  uVar18 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (dVar5 <= dVar8) {
    uVar17 = SUB84(dVar5,0);
    uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  if (dVar4 <= dVar6) {
    uVar19 = SUB84(dVar4,0);
    uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  if (dVar3 <= dVar7) {
    uVar21 = SUB84(dVar3,0);
    uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar12 = (double)CONCAT44(uVar18,uVar17) - dVar12;
  dVar13 = dVar1;
  if (dVar1 <= dVar2) {
    dVar13 = dVar2;
  }
  dVar13 = (double)CONCAT44(uVar20,uVar19) - dVar13;
  dVar14 = dVar16;
  if (dVar16 <= dVar15) {
    dVar14 = dVar15;
  }
  dVar14 = (double)CONCAT44(uVar22,uVar21) - dVar14;
  dVar1 = ((dVar6 - dVar2) * __real_3fe0000000000000 + dVar2) -
          ((dVar4 - dVar1) * __real_3fe0000000000000 + dVar1);
  dVar2 = ((dVar8 - *(double *)&param_1->MMin) * __real_3fe0000000000000 + *(double *)&param_1->MMin
          ) - ((dVar5 - *(double *)&param_2->MMin) * __real_3fe0000000000000 +
              *(double *)&param_2->MMin);
  dVar16 = ((dVar7 - dVar15) * __real_3fe0000000000000 + dVar15) -
           ((dVar3 - dVar16) * __real_3fe0000000000000 + dVar16);
  dVar15 = dVar1 * dVar1 + dVar2 * dVar2 + dVar16 * dVar16;
  uVar9 = dVar1;
  uVar10 = dVar2;
  uVar11 = dVar16;
  if ((dVar15 != __real_3ff0000000000000) &&
     (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar15)) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    uVar9 = dVar1 * dVar15;
    uVar10 = dVar15 * dVar2;
    uVar11 = dVar16 * dVar15;
  }
  dVar16 = dVar13 * dVar14;
  dVar14 = dVar12 * dVar14;
  dVar12 = dVar12 * dVar13;
  dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           (double)uVar10 +
           (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           (double)uVar9 +
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           (double)uVar11;
  return (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// BuildGeometryForChildrenOnGT @ 14410a970

bool __cdecl
GeometryCollectionPhysicsProxy::Private::BuildGeometryForChildrenOnGT
          (FSimulationParameters *param_1)

{
  if ((bBuildGeometryForChildrenOnGT) && (!param_1->bOptimizeForRuntimeMemory)) {
    return true;
  }
  return false;
}

// BuildGeometryForChildrenOnPT @ 14410a990

bool __cdecl
GeometryCollectionPhysicsProxy::Private::BuildGeometryForChildrenOnPT
          (FSimulationParameters *param_1)

{
  if ((bBuildGeometryForChildrenOnPT) && (!param_1->bOptimizeForRuntimeMemory)) {
    return true;
  }
  return false;
}

// BuildSimulationData @ 14410b9a0

void __cdecl
BuildSimulationData(FErrorReporter *param_1,FGeometryCollection *param_2,
                   FSharedSimulationParameters *param_3)

{
  IdentifySimulatableElements(param_1,param_2);
  FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures(param_1,param_2,param_3);
  return;
}

// ComputeGeometryVolumeAndCenterOfMass @ 14410dda0

void __cdecl
ComputeGeometryVolumeAndCenterOfMass
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          FTriangleMesh *param_2,TBox<double> *param_3,FSharedSimulationParameters *param_4,
          double *param_5,double *param_6,TVector<double,3> *param_7,bool *param_8)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  TVector<double,3> *pTVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  TVector<float>_u_0 local_48 [5];
  
  pTVar8 = param_7;
  pdVar7 = param_6;
  pdVar6 = param_5;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3fe0000000000000;
  fVar11 = param_4->MinimumBoundingExtentClamp;
  fVar11 = fVar11 * fVar11 * fVar11;
  fVar15 = param_4->MaximumBoundingExtentClamp;
  *param_5 = 0.0;
  if (fVar11 <= __real_322bcc77) {
    fVar11 = __real_322bcc77;
  }
  *param_6 = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (double)fVar11;
  fVar15 = fVar15 * fVar15 * fVar15;
  if (fVar15 <= fVar11) {
    fVar15 = fVar11;
  }
  *(double *)param_7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_7->field_0x8 = uVar5;
  *(double *)&param_7->field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar14 = ((param_3->Max).field0_0x0._s_0.X - (param_3->Min).field0_0x0._s_0.X) * dVar2;
  dVar13 = ((param_3->Max).field0_0x0._s_0.Y - (param_3->Min).field0_0x0._s_0.Y) * dVar2;
  dVar12 = ((param_3->Max).field0_0x0._s_0.Z - (param_3->Min).field0_0x0._s_0.Z) * dVar2;
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar4,SUB84(dVar14,0) & uVar3);
  uVar9 = SUB84(dVar13,0) & uVar3;
  uVar10 = (uint)((ulonglong)dVar13 >> 0x20) & uVar4;
  if ((double)CONCAT44(uVar10,uVar9) <= dVar14) {
    dVar14 = (double)CONCAT44(uVar10,uVar9);
  }
  dVar13 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3);
  if (dVar13 <= dVar14) {
    dVar14 = dVar13;
  }
  *param_8 = dVar14 < dVar1;
  if (dVar14 >= dVar1) {
    Chaos::
    CalculateVolumeAndCenterOfMass<float,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
              (param_1,&param_2->MElements,(float *)&param_5,(TVector<float> *)&local_48[0]._s_0);
    *pdVar7 = (double)param_5._0_4_;
    *pdVar6 = (double)param_5._0_4_;
    *(double *)pTVar8 = (double)(float)local_48[0]._0_4_;
    *(double *)&pTVar8->field_0x8 = (double)(float)local_48[0]._4_4_;
    *(double *)&pTVar8->field_0x10 = (double)(float)local_48[0]._8_4_;
    if (*pdVar6 == 0.0) {
      Chaos::CalculateVolumeAndCenterOfMass(param_3,pdVar7,(TVector<double> *)pTVar8);
    }
    if (dVar1 <= *pdVar6) {
      if (*pdVar6 <= (double)fVar15) {
        return;
      }
      *pdVar7 = (double)fVar15;
    }
    else {
      *pdVar7 = dVar1;
    }
    dVar1 = (param_3->Min).field0_0x0._s_0.Y;
    dVar14 = (param_3->Min).field0_0x0._s_0.Z;
    dVar13 = (param_3->Max).field0_0x0._s_0.Y;
    dVar12 = (param_3->Max).field0_0x0._s_0.Z;
    *(double *)pTVar8 =
         ((param_3->Min).field0_0x0._s_0.X + (param_3->Max).field0_0x0._s_0.X) * dVar2;
    *(double *)&pTVar8->field_0x8 = (dVar1 + dVar13) * dVar2;
    *(double *)&pTVar8->field_0x10 = (dVar14 + dVar12) * dVar2;
  }
  return;
}

// ComputeMassPropertiesAndTriMeshes @ 14410df90

void __cdecl
ComputeMassPropertiesAndTriMeshes
          (FGeometryCollection *param_1,FSharedSimulationParameters *param_2,
          TArray<TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>,TSizedDefaultAllocator<32>_>
          *param_3,TArray<Chaos::FMassProperties,TSizedDefaultAllocator<32>_> *param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *local_res8;
  FName local_98;
  FName local_90;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  TManagedArray<int> **local_70;
  TManagedArray<int> *local_68;
  longlong local_60;
  FGeometryCollection *local_58;
  FSharedSimulationParameters *local_50;
  TArray<TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>,TSizedDefaultAllocator<32>_>
  *local_48;
  TArray<Chaos::FMassProperties,TSizedDefaultAllocator<32>_> *local_40;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_38;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> **local_30;
  
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FGeometryCollection::GeometryGroup);
  FVar4 = FTransformCollection::TransformGroup;
  FVar3 = FGeometryCollection::SimulatableParticlesAttribute;
  bVar5 = FManagedArrayCollection::HasAttribute
                    ((FManagedArrayCollection *)param_1,
                     FGeometryCollection::SimulatableParticlesAttribute,
                     FTransformCollection::TransformGroup);
  if (!bVar5) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x185,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98 = FVar3;
  local_90 = FVar4;
  pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_98);
  if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar7->field_0x10 != '\x06') {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x303,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&pTVar7->field_0x30;
  if (lVar1 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = FManagedArrayCollection::FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
                         ((FManagedArrayCollection *)param_1,
                          FGeometryCollection::ExternalCollisionsAttribute,
                          FTransformCollection::TransformGroup);
  local_68 = &param_1->TransformIndex;
  local_88.DataPtr = (void **)0x0;
  local_38 = param_5;
  local_30 = &local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`ComputeMassPropertiesAndTriMeshes'::__l2::<lambda_1>,void,int>::
             Call;
  local_70 = &local_68;
  local_88.ArrayNum = 0;
  local_60 = lVar1;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar6,1,(TFunctionRef<void___cdecl(int)> *)&local_78,param_5._0_1_,
             None,&local_88);
  return;
}

// ComputeMassPropertyFromMesh @ 14410e1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ComputeMassPropertyFromMesh
          (int param_1,FGeometryCollection *param_2,FSharedSimulationParameters *param_3,
          TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> *param_4,
          FMassProperties *param_5,bool *param_6)

{
  double *pdVar1;
  FTriangleMesh *this;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> TVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_268 [32];
  TVector<float>_u_0 local_228;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_218;
  TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> *local_210;
  double local_208;
  bool *local_200;
  undefined1 local_1f8 [8];
  undefined8 uStack_1f0;
  FTriangleMesh *local_1e8;
  FSharedSimulationParameters *local_1e0;
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar19 = (longlong)param_1;
  local_200 = param_6;
  uVar20 = (uint)~param_1 >> 0x1f;
  uVar16 = 0;
  if (param_1 < *(int *)&(param_2->FaceCount).field_0x18) {
    uVar16 = uVar20;
  }
  local_210 = param_4;
  local_1e0 = param_3;
  if (uVar16 == 0) {
    bVar15 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_218 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_218._4_4_,
                       *(undefined4 *)(*(longlong *)&(param_2->FaceCount).field_0x10 + lVar19 * 4));
  uVar16 = 0;
  if (param_1 < *(int *)&(param_2->FaceStart).field_0x18) {
    uVar16 = uVar20;
  }
  if (uVar16 == 0) {
    bVar15 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar18 = CreateTriangleMesh((int)&local_1e8,
                              *(int *)(*(longlong *)&(param_2->FaceStart).field_0x10 + lVar19 * 4),
                              (TManagedArray<bool> *)((ulonglong)local_218 & 0xffffffff),
                              (TManagedArray<UE::Math::TIntVector3<int>_> *)&param_2->Visible,
                              (bool)((char)param_2 + -0x20));
  if ((FTriangleMesh *)param_4 != TVar18.Ptr) {
    this = param_4->Ptr;
    local_210->Ptr = (FTriangleMesh *)((TVar18.Ptr)->MElements).AllocatorInstance.Data;
    ((TVar18.Ptr)->MElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (this != (FTriangleMesh *)0x0) {
      Chaos::FTriangleMesh::~FTriangleMesh(this);
      operator_delete(this,0x148);
    }
  }
  if (local_1e8 != (FTriangleMesh *)0x0) {
    Chaos::FTriangleMesh::~FTriangleMesh(local_1e8);
    operator_delete(local_1e8,0x148);
  }
  local_208 = 0.0;
  *local_200 = false;
  uVar17 = 0;
  uVar16 = uVar17;
  if (param_1 < *(int *)&(param_2->BoundingBox).field_0x18) {
    uVar16 = uVar20;
  }
  if (uVar16 == 0) {
    bVar15 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_218 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              &(param_2->Vertex).field_0x10;
  lVar19 = lVar19 * 0x38;
  ComputeGeometryVolumeAndCenterOfMass
            (local_218,local_210->Ptr,
             (TBox<double> *)(*(longlong *)&(param_2->BoundingBox).field_0x10 + lVar19),local_1e0,
             &local_208,&param_5->Volume,&param_5->CenterOfMass,local_200);
  if (local_208 == 0.0) {
    uVar16 = uVar17;
    if (param_1 < *(int *)&(param_2->BoundingBox).field_0x18) {
      uVar16 = uVar20;
    }
    if (uVar16 == 0) {
      bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)&(param_2->BoundingBox).field_0x10;
    pdVar1 = (double *)(lVar19 + 8 + lVar2);
    dVar12 = *pdVar1;
    dVar7 = pdVar1[1];
    pdVar1 = (double *)(lVar19 + 0x20 + lVar2);
    dVar13 = *pdVar1;
    dVar14 = pdVar1[1];
    *(double *)&param_5->CenterOfMass =
         (*(double *)(lVar19 + 0x18 + lVar2) + *(double *)(lVar19 + lVar2)) *
         __real_3fe0000000000000;
    dVar7 = (dVar7 + dVar14) * _UNK_150689678;
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = (dVar12 + dVar13) * ___xmm_3fe00000000000003fe0000000000000;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(param_5->CenterOfMass).field_0x8 = auVar5;
    if (param_1 < *(int *)&(param_2->BoundingBox).field_0x18) {
      uVar17 = uVar20;
    }
    if (uVar17 == 0) {
      bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    Chaos::CalculateInertiaAndRotationOfMass
              ((TBox<double> *)(*(longlong *)&(param_2->BoundingBox).field_0x10 + lVar19),
               __real_3ff0000000000000,&param_5->InertiaTensor,&param_5->RotationOfMass);
  }
  else {
    local_228._s_0.X = (float)*(double *)&param_5->CenterOfMass;
    local_228._s_0.Z = (float)*(double *)&(param_5->CenterOfMass).field_0x10;
    local_228._s_0.Y = (float)*(double *)&(param_5->CenterOfMass).field_0x8;
    local_1f8 = (undefined1  [8])0x0;
    uStack_1f0 = 0;
    local_1d8 = (undefined1  [8])0x0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    Chaos::
    CalculateInertiaAndRotationOfMass<float,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
              (local_218,&local_210->Ptr->MElements,__real_3f800000,
               (TVector<float> *)&local_228._s_0,(PMatrix<float,3,3> *)local_1d8,
               (TRotation<float,3> *)local_1f8);
    *(double *)&param_5->CenterOfMass = (double)local_228._s_0.X;
    *(double *)&(param_5->CenterOfMass).field_0x8 = (double)local_228._s_0.Y;
    *(double *)&(param_5->CenterOfMass).field_0x10 = (double)local_228._s_0.Z;
    auVar4._8_4_ = SUB84((double)(float)local_1d8._4_4_,0);
    auVar4._0_8_ = (double)(float)local_1d8._0_4_;
    auVar4._12_4_ = (int)((ulonglong)(double)(float)local_1d8._4_4_ >> 0x20);
    *(undefined1 (*) [16])&param_5->InertiaTensor = auVar4;
    auVar11._8_4_ = SUB84((double)uStack_1d0._4_4_,0);
    auVar11._0_8_ = (double)(float)uStack_1d0;
    auVar11._12_4_ = (int)((ulonglong)(double)uStack_1d0._4_4_ >> 0x20);
    *(undefined1 (*) [16])&(param_5->InertiaTensor).field_0x10 = auVar11;
    auVar10._8_4_ = SUB84((double)local_1c8._4_4_,0);
    auVar10._0_8_ = (double)(float)local_1c8;
    auVar10._12_4_ = (int)((ulonglong)(double)local_1c8._4_4_ >> 0x20);
    *(undefined1 (*) [16])&(param_5->InertiaTensor).field_0x20 = auVar10;
    auVar9._8_4_ = SUB84((double)uStack_1c0._4_4_,0);
    auVar9._0_8_ = (double)(float)uStack_1c0;
    auVar9._12_4_ = (int)((ulonglong)(double)uStack_1c0._4_4_ >> 0x20);
    *(undefined1 (*) [16])&(param_5->InertiaTensor).field_0x30 = auVar9;
    *(double *)&(param_5->InertiaTensor).field_0x40 = (double)(float)local_1b8;
    *(double *)&(param_5->InertiaTensor).field_0x48 = (double)local_1b8._4_4_;
    *(double *)&(param_5->InertiaTensor).field_0x50 = (double)(float)uStack_1b0;
    *(double *)&(param_5->InertiaTensor).field_0x58 = (double)uStack_1b0._4_4_;
    auVar8._8_4_ = SUB84((double)local_1a8._4_4_,0);
    auVar8._0_8_ = (double)(float)local_1a8;
    auVar8._12_4_ = (int)((ulonglong)(double)local_1a8._4_4_ >> 0x20);
    *(undefined1 (*) [16])&(param_5->InertiaTensor).field_0x60 = auVar8;
    auVar6._8_4_ = SUB84((double)uStack_1a0._4_4_,0);
    auVar6._0_8_ = (double)(float)uStack_1a0;
    auVar6._12_4_ = (int)((ulonglong)(double)uStack_1a0._4_4_ >> 0x20);
    *(undefined1 (*) [16])&(param_5->InertiaTensor).field_0x70 = auVar6;
    *(double *)&param_5->RotationOfMass = (double)(float)local_1f8._0_4_;
    *(double *)&(param_5->RotationOfMass).field_0x8 = (double)(float)local_1f8._4_4_;
    *(double *)&(param_5->RotationOfMass).field_0x10 = (double)(float)uStack_1f0;
    *(double *)&(param_5->RotationOfMass).field_0x18 = (double)uStack_1f0._4_4_;
    if (param_5->Volume != local_208) {
      local_198.M[0][0] = param_5->Volume / local_208;
      local_198.M[0][1] = 0.0;
      local_198.M[2][0] = 0.0;
      local_198.M[2][1] = 0.0;
      local_198.M[1][0] = 0.0;
      local_198.M[2][3] = 0.0;
      local_198.M[0][2] = 0.0;
      local_198.M[0][3] = 0.0;
      local_198.M[1][2] = 0.0;
      local_198.M[1][3] = 0.0;
      local_198.M[3][0] = 0.0;
      local_198.M[3][1] = 0.0;
      local_198.M[3][2] = ___xmm_3ff00000000000000000000000000000;
      local_198.M[3][3] = _UNK_15061cbc8;
      local_198.M[1][1] = local_198.M[0][0];
      local_198.M[2][2] = local_198.M[0][0];
      VectorMatrixMultiply(&local_118,&local_198,(TMatrix<double> *)&param_5->InertiaTensor);
      *(double *)&param_5->InertiaTensor = local_118.M[0][0];
      *(double *)&(param_5->InertiaTensor).field_0x8 = local_118.M[0][1];
      *(double *)&(param_5->InertiaTensor).field_0x10 = local_118.M[0][2];
      *(double *)&(param_5->InertiaTensor).field_0x18 = local_118.M[0][3];
      *(double *)&(param_5->InertiaTensor).field_0x20 = local_118.M[1][0];
      *(double *)&(param_5->InertiaTensor).field_0x28 = local_118.M[1][1];
      *(double *)&(param_5->InertiaTensor).field_0x30 = local_118.M[1][2];
      *(double *)&(param_5->InertiaTensor).field_0x38 = local_118.M[1][3];
      *(double *)&(param_5->InertiaTensor).field_0x40 = local_118.M[2][0];
      *(double *)&(param_5->InertiaTensor).field_0x48 = local_118.M[2][1];
      *(double *)&(param_5->InertiaTensor).field_0x50 = local_118.M[2][2];
      *(double *)&(param_5->InertiaTensor).field_0x58 = local_118.M[2][3];
      *(double *)&(param_5->InertiaTensor).field_0x60 = local_118.M[3][0];
      *(double *)&(param_5->InertiaTensor).field_0x68 = local_118.M[3][1];
      *(double *)&(param_5->InertiaTensor).field_0x70 = local_118.M[3][2];
      *(double *)&(param_5->InertiaTensor).field_0x78 = local_118.M[3][3];
    }
  }
  return;
}

// ComputeTransformToGeometryMap @ 14410eaf0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
ComputeTransformToGeometryMap
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryCollection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar4 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FGeometryCollection::GeometryGroup);
  __return_storage_ptr__->ArrayMax = 0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar4,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  uVar9 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&(param_1->TransformIndex).field_0x18) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      uVar6 = *(uint *)(*(longlong *)&(param_1->TransformIndex).field_0x10 + lVar10 * 4);
      uVar7 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      lVar10 = lVar10 + 1;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = uVar9
      ;
      uVar9 = uVar9 + 1;
    } while (lVar10 < iVar5);
  }
  return __return_storage_ptr__;
}

// CreateGTParticleForChildren @ 14410faf0

bool __cdecl
GeometryCollectionPhysicsProxy::Private::CreateGTParticleForChildren(FSimulationParameters *param_1)

{
  if ((bCreateGTParticleForChildren) && (!param_1->bOptimizeForRuntimeMemory)) {
    return true;
  }
  return false;
}

// CreateImplicitGeometry @ 1441125b0

TRefCountPtr<Chaos::FImplicitObject> __cdecl
CreateImplicitGeometry
          (FSharedSimulationSizeSpecificData *param_1,int param_2,FGeometryCollection *param_3,
          TParticles<double,3> *param_4,FTriangleMesh *param_5,TBox<double> *param_6,double param_7,
          FErrorReporter *param_8,TVector<double,3> *param_9)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ECollisionTypeEnum EVar6;
  ECollisionTypeEnum *pEVar7;
  FImplicitObject *pFVar8;
  code *pcVar9;
  FName FVar10;
  bool bVar11;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar12;
  FName *pFVar13;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar14;
  TRefCountPtr<Chaos::FImplicitObject> TVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  FImplicitObject *pFVar17;
  undefined8 *puVar18;
  undefined4 in_register_00000014;
  longlong lVar19;
  FSharedSimulationSizeSpecificData *pFVar20;
  char *pcVar21;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *pTVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong lVar25;
  double dVar26;
  uint uVar27;
  double dVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  double dVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  FName local_res10;
  double *in_stack_00000050;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FErrorReporter local_b8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_70 [3];
  
  lVar19 = CONCAT44(in_register_00000014,param_2);
  uVar35 = (uint)param_3;
  param_1->MaxSize = 0.0;
  param_1->DamageThreshold = 0.0;
  if (*(int *)(lVar19 + 0x10) == 0) {
    return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
  }
  pTVar12 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<double>_>
                      ((FManagedArrayCollection *)param_4,MassToLocalAttributeName,
                       FTransformCollection::TransformGroup);
  FVar10 = FTransformCollection::TransformGroup;
  pFVar13 = FName::FName(&local_res10,"TransformToConvexIndices");
  local_d0 = FVar10;
  local_d8 = *pFVar13;
  pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_4->_padding_,(TTuple<FName,FName> *)&local_d8);
  pcVar21 = &pTVar14->field_0x10;
  if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar21 = (char *)0x0;
  }
  if (pcVar21 == (char *)0x0) {
    lVar25 = 0;
  }
  else {
    if ((*pcVar21 != '\x0e') &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x303,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
    lVar25 = *(longlong *)(pcVar21 + 0x20);
    if ((lVar25 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x306,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
  }
  local_c8 = FTransformCollection::ConvexHullAttribute;
  local_c0 = FTransformCollection::ConvexGroup;
  pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_4->_padding_,(TTuple<FName,FName> *)&local_c8);
  pcVar21 = &pTVar14->field_0x10;
  if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar21 = (char *)0x0;
  }
  if (pcVar21 == (char *)0x0) {
    pTVar22 = (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0;
  }
  else {
    if ((*pcVar21 != '+') &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x303,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
    pTVar22 = *(TManagedArray<TRefCountPtr<Chaos::FConvex>_> **)(pcVar21 + 0x20);
    if ((pTVar22 == (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x306,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
  }
  if ((*(int *)(lVar19 + 0x10) < 1) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    TVar15.Reference = (FImplicitObject *)(*pcVar9)();
    return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
  }
  pEVar7 = *(ECollisionTypeEnum **)(lVar19 + 8);
  switch(pEVar7[1]) {
  case Chaos_Volumetric:
    pFVar17 = FCollisionStructureManager::NewImplicitBox
                        ((TBox<double> *)param_7,*(float *)(pEVar7 + 0x1c),*pEVar7);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    pFVar20 = (FSharedSimulationSizeSpecificData *)local_90;
    break;
  case Chaos_Surface_Volumetric:
    pFVar17 = FCollisionStructureManager::NewImplicitSphere
                        ((double)param_8,*(float *)(pEVar7 + 0x1c),*pEVar7);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    pFVar20 = (FSharedSimulationSizeSpecificData *)(local_90 + 8);
    break;
  case Chaos_Max:
    pFVar17 = FCollisionStructureManager::NewImplicitCapsule
                        ((TBox<double> *)param_7,*(float *)(pEVar7 + 0x1c),*pEVar7);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    pFVar20 = (FSharedSimulationSizeSpecificData *)(local_80 + 8);
    break;
  case Chaos_Max|Chaos_Surface_Volumetric:
    uVar23 = *(undefined4 *)(pEVar7 + 4);
    uVar24 = *(undefined4 *)(pEVar7 + 8);
    if (in_stack_00000050 != (double *)0x0) {
      dVar30 = (*(double *)((longlong)param_7 + 0x18) - *(double *)param_7) / *in_stack_00000050;
      dVar28 = (*(double *)((longlong)param_7 + 0x20) - *(double *)((longlong)param_7 + 8)) /
               in_stack_00000050[1];
      dVar33 = (*(double *)((longlong)param_7 + 0x28) - *(double *)((longlong)param_7 + 0x10)) /
               in_stack_00000050[2];
      uVar35 = SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar36 = (uint)((ulonglong)dVar30 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar27 = SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = (uint)((ulonglong)dVar28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar28 = (double)CONCAT44(uVar29,uVar27);
      uVar32 = SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar34 = (uint)((ulonglong)dVar33 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar33 = (double)CONCAT44(uVar34,uVar32);
      dVar30 = (double)CONCAT44(uVar36,uVar35);
      if (dVar28 <= (double)CONCAT44(uVar36,uVar35)) {
        dVar30 = dVar28;
      }
      if ((double)CONCAT44(uVar36,uVar35) <= dVar28) {
        uVar35 = uVar27;
        uVar36 = uVar29;
      }
      if (dVar33 <= dVar30) {
        dVar30 = dVar33;
      }
      dVar28 = (double)(int)uVar23;
      if ((double)CONCAT44(uVar36,uVar35) <= dVar33) {
        uVar35 = uVar32;
        uVar36 = uVar34;
      }
      dVar26 = (double)(int)uVar24;
      dVar33 = (double)CONCAT44(uVar36,uVar35) * dVar26;
      dVar31 = dVar30 * dVar28;
      if ((double)(int)*(undefined4 *)(pEVar7 + 0xc) <= dVar30 * dVar28) {
        dVar31 = (double)(int)*(undefined4 *)(pEVar7 + 0xc);
      }
      if (dVar31 <= dVar28) {
        dVar31 = dVar28;
      }
      if ((double)(int)*(undefined4 *)(pEVar7 + 0x10) <= dVar33) {
        dVar33 = (double)(int)*(undefined4 *)(pEVar7 + 0x10);
      }
      if (dVar33 <= dVar26) {
        dVar33 = dVar26;
      }
      uVar23 = (int)ROUND((dVar31 + dVar31) - __real_3fe0000000000000) >> 1;
      uVar24 = (int)ROUND((dVar33 + dVar33) - __real_3fe0000000000000) >> 1;
    }
    EVar6 = *pEVar7;
    fVar3 = *(float *)(pEVar7 + 0x1c);
    local_b8.bEncountedErrors = *(bool *)param_9;
    local_b8.bUnhandledErrors = (bool)param_9->field_0x1;
    FString::FString(&local_b8.Prefix,(FString *)&param_9->field_0x8);
    pFVar17 = FCollisionStructureManager::NewImplicitLevelset
                        (&local_b8,(TParticles<double,3> *)param_5,(FTriangleMesh *)param_6,
                         (TBox<double> *)param_7,uVar23,uVar24,fVar3,EVar6);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    if (param_1 == (FSharedSimulationSizeSpecificData *)local_a0) {
      if (pFVar17 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar17->_padding_;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar19 == 1) && (*(int *)((longlong)&pFVar17->_padding_ + 4) == 0)) {
          puVar18 = (undefined8 *)pFVar17->_padding_;
          goto LAB_144112937;
        }
      }
    }
    else {
      pFVar8 = *(FImplicitObject **)param_1;
      *(FImplicitObject **)param_1 = pFVar17;
      if (pFVar8 != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar8->_padding_;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar19 == 1) && (*(int *)((longlong)&pFVar8->_padding_ + 4) == 0)) {
          puVar18 = (undefined8 *)pFVar8->_padding_;
          pFVar17 = pFVar8;
LAB_144112937:
          (*(code *)*puVar18)(pFVar17,1);
        }
      }
    }
    lVar19._0_4_ = param_1->MaxSize;
    lVar19._4_4_ = param_1->DamageThreshold;
    if (lVar19 != 0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    pFVar17 = FCollisionStructureManager::NewImplicitSphere
                        ((double)param_8,*(float *)(pEVar7 + 0x1c),*pEVar7);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    if (param_1 == (FSharedSimulationSizeSpecificData *)(local_a0 + 8)) {
      if (pFVar17 == (FImplicitObject *)0x0) {
        return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
      }
      LOCK();
      plVar1 = &pFVar17->_padding_;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 != 1) {
        return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
      }
      if (*(int *)((longlong)&pFVar17->_padding_ + 4) != 0) {
        return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
      }
      (**(code **)pFVar17->_padding_)(pFVar17,1);
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    puVar18 = *(undefined8 **)param_1;
    *(FImplicitObject **)param_1 = pFVar17;
    if (puVar18 == (undefined8 *)0x0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    goto LAB_144112bfb;
  case 4:
    goto switchD_1441127a6_caseD_4;
  case 5:
    if (pTVar22 == (TManagedArray<TRefCountPtr<Chaos::FConvex>_> *)0x0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    if (lVar25 == 0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    fVar3 = *(float *)(pEVar7 + 0x1c);
    fVar4 = *(float *)(pEVar7 + 0x20);
    uVar36 = 0;
    if ((int)uVar35 < *(int *)&pTVar12->field_0x18) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
    lVar19 = *(longlong *)&pTVar12->field_0x10;
    EVar6 = *pEVar7;
    uVar36 = 0;
    if ((int)uVar35 < *(int *)(lVar25 + 0x18)) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
    pTVar16 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         ((longlong)(int)uVar35 * 0x50 + *(longlong *)(lVar25 + 0x10)),local_70);
    pFVar17 = FCollisionStructureManager::NewImplicitConvex
                        (pTVar16,pTVar22,EVar6,
                         (TTransform<double> *)((longlong)(int)uVar35 * 0x60 + lVar19),(double)fVar4
                         ,fVar3);
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    if (param_1 == (FSharedSimulationSizeSpecificData *)local_80) {
      if (pFVar17 == (FImplicitObject *)0x0) goto LAB_144112ba1;
      LOCK();
      plVar1 = &pFVar17->_padding_;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 != 1) || (*(int *)((longlong)&pFVar17->_padding_ + 4) != 0))
      goto LAB_144112ba1;
      puVar18 = (undefined8 *)pFVar17->_padding_;
    }
    else {
      pFVar8 = *(FImplicitObject **)param_1;
      *(FImplicitObject **)param_1 = pFVar17;
      if (pFVar8 == (FImplicitObject *)0x0) goto LAB_144112ba1;
      LOCK();
      plVar1 = &pFVar8->_padding_;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 != 1) || (*(int *)((longlong)&pFVar8->_padding_ + 4) != 0))
      goto LAB_144112ba1;
      puVar18 = (undefined8 *)pFVar8->_padding_;
      pFVar17 = pFVar8;
    }
    (*(code *)*puVar18)(pFVar17,1);
LAB_144112ba1:
    if (local_70[0].AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
    FMemory::Free(local_70[0].AllocatorInstance.Data);
    return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
  default:
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4439241659858807957>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                        ,0x136b,"false");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      TVar15.Reference = (FImplicitObject *)(*pcVar9)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar15.Reference;
    }
    goto switchD_1441127a6_caseD_4;
  }
  if (param_1 == pFVar20) {
    if (pFVar17 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar17->_padding_;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 == 1) && (*(int *)((longlong)&pFVar17->_padding_ + 4) == 0)) {
        (**(code **)pFVar17->_padding_)(pFVar17,1);
      }
    }
  }
  else {
    puVar18 = *(undefined8 **)param_1;
    *(FImplicitObject **)param_1 = pFVar17;
    if (puVar18 != (undefined8 *)0x0) {
LAB_144112bfb:
      LOCK();
      piVar2 = (int *)(puVar18 + 1);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (*(int *)((longlong)puVar18 + 0xc) == 0)) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
  }
switchD_1441127a6_caseD_4:
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CreateTriangleMesh @ 144113710

TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> __cdecl
CreateTriangleMesh(int param_1,int param_2,TManagedArray<bool> *param_3,
                  TManagedArray<UE::Math::TIntVector3<int>_> *param_4,bool param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_> TVar6;
  FTriangleMesh *this;
  FTriangleMesh *pFVar7;
  undefined4 in_register_0000000c;
  undefined1 *puVar8;
  undefined4 *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined7 in_stack_00000029;
  char in_stack_00000030;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_40;
  
  pFVar7 = (FTriangleMesh *)0x0;
  iVar15 = (int)param_3;
  uVar12 = (ulonglong)param_2;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3 & 0xffffffff);
  }
  if (0 < iVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar15,&local_40.AllocatorInstance,0,&local_40.ArrayMax);
  }
  if ((longlong)uVar12 < (longlong)(param_2 + iVar15)) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar14 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar13 = uVar12 * 0xc;
    lVar16 = (longlong)(param_2 + iVar15) - uVar12;
    do {
      uVar11 = (uint)uVar12;
      if ((((int)uVar11 < 0) || (*(int *)&param_4[1].field_0x8 <= (int)uVar11)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        TVar6.Ptr = (FTriangleMesh *)(*pcVar1)();
        return (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>)TVar6.Ptr;
      }
      puVar8 = &param_4->field_0x10;
      if (*(undefined1 **)(param_4 + 1) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(param_4 + 1);
      }
      uVar4 = uVar11;
      if ((int)uVar11 < 0) {
        uVar4 = uVar11 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)((int)uVar4 >> 5) * 4) & uVar14) != 0) {
        uVar4 = 0;
        if ((int)uVar11 < *(int *)(CONCAT71(in_stack_00000029,param_5) + 0x18)) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          TVar6.Ptr = (FTriangleMesh *)(*pcVar1)();
          return (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>)TVar6.Ptr;
        }
        puVar9 = (undefined4 *)(*(longlong *)(CONCAT71(in_stack_00000029,param_5) + 0x10) + lVar13);
        if (in_stack_00000030 == '\0') {
          local_4c = *puVar9;
          uStack_48 = puVar9[1];
          local_44 = puVar9[2];
          if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4c) &&
              ((FScriptContainerElement *)&local_4c <
               local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 0xc)) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            TVar6.Ptr = (FTriangleMesh *)(*pcVar1)();
            return (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>)TVar6.Ptr
            ;
          }
          if (local_40.ArrayNum == local_40.ArrayMax) {
            local_40.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_40.AllocatorInstance,&local_40.ArrayMax);
          }
          *(ulonglong *)(local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0xc) =
               CONCAT44(uStack_48,local_4c);
          pFVar10 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0xc;
          uVar5 = local_44;
        }
        else {
          local_58 = puVar9[2];
          uStack_54 = puVar9[1];
          local_50 = *puVar9;
          if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 <
               local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 0xc)) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            TVar6.Ptr = (FTriangleMesh *)(*pcVar1)();
            return (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>)TVar6.Ptr
            ;
          }
          if (local_40.ArrayNum == local_40.ArrayMax) {
            local_40.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_40.AllocatorInstance,&local_40.ArrayMax);
          }
          *(ulonglong *)(local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0xc) =
               CONCAT44(uStack_54,local_58);
          pFVar10 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0xc;
          uVar5 = local_50;
        }
        local_40.ArrayNum = local_40.ArrayNum + 1;
        *(undefined4 *)(pFVar10 + 8) = uVar5;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      lVar13 = lVar13 + 0xc;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  this = operator_new(0x148);
  if (this != (FTriangleMesh *)0x0) {
    pFVar7 = Chaos::FTriangleMesh::FTriangleMesh(this,&local_40,0,-1,true);
  }
  (((FTriangleMesh *)CONCAT44(in_register_0000000c,param_1))->MElements).AllocatorInstance.Data =
       (FScriptContainerElement *)pFVar7;
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return (TUniquePtr<Chaos::FTriangleMesh,TDefaultDelete<Chaos::FTriangleMesh>_>)
         (FTriangleMesh *)CONCAT44(in_register_0000000c,param_1);
}

// FieldIntegerParameterUpdate @ 144114be0

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
LAB_144114d73:
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
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144114d73;
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
            if (dVar14 < *pdVar24) goto LAB_144114f7c;
LAB_144114fca:
            bVar13 = 0;
          }
          else {
LAB_144114f7c:
            if (EVar17 == EVar35) goto LAB_144114fca;
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
      goto LAB_144115a90;
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
LAB_14411518c:
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
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14411518c;
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
      goto LAB_144115a90;
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
            goto LAB_144115c63;
          }
        }
        bVar8 = false;
        FVar38 = local_170;
LAB_144115c63:
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
LAB_14411580e:
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
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14411580e;
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
                      goto LAB_144115a59;
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
LAB_144115a59:
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
      goto LAB_144115a90;
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
LAB_1441154ed:
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
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1441154ed;
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
LAB_144115a90:
  if (!bVar18) {
    FThreadStats::AddMessage(local_res10,CycleScopeEnd);
  }
  return;
}

// FieldScalarParameterUpdate @ 1441177a0

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
  FPBDRigidsEvolutionGBF *pFVar5;
  FFieldSystemMetaDataCulling *pFVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  FChaosPhysicsMaterial *pFVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  FName this;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  EObjectStateType EVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill> FVar28;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold> FVar29;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar30;
  TSerializablePtr<Chaos::FChaosPhysicsMaterial> TVar31;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold> FVar32;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain> FVar33;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar34;
  float *pfVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  TGeometryParticleHandleImp<double,3,1> *pTVar38;
  uint uVar39;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  int iVar40;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  float fVar41;
  FColor_u_0 local_res10 [2];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  FName local_188;
  TArray<float,TSizedDefaultAllocator<32>_> *local_180;
  int local_178;
  int local_174;
  FName local_170;
  FColor_u_0 local_168;
  FColor_u_0 local_164;
  FColor_u_0 local_160;
  FColor_u_0 local_15c;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  TArray<float,TSizedDefaultAllocator<32>_> *local_138;
  FName local_128;
  FName local_118;
  FName local_108;
  FName local_f8;
  TFieldArrayView<FFieldContextIndex> local_e8;
  TFieldArrayView<FFieldContextIndex> local_d8;
  TFieldArrayView<FFieldContextIndex> local_c8;
  TFieldArrayView<FFieldContextIndex> local_b8;
  TFieldArrayView<FFieldContextIndex> local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> local_80;
  FName local_78;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> local_70;
  FName local_68 [6];
  
  bVar16 = false;
  bVar23 = false;
  local_180 = param_7;
  iVar40 = 0;
  local_178 = 0;
  local_174 = param_7->ArrayNum;
  EVar3 = param_2->PhysicsType;
  local_res18 = param_3;
  if (EVar3 == Field_ExternalClusterStrain) {
    FVar27 = StatPtr_STAT_ParamUpdateField_ExternalClusterStrain;
    if (StatPtr_STAT_ParamUpdateField_ExternalClusterStrain ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain>)0x0) {
      pFVar26 = ::FName::FName(&local_98,"STAT_ParamUpdateField_ExternalClusterStrain");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_ExternalClusterStrain>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParamUpdateField_ExternalClusterStrain,*pFVar26,
                          L"[Field Update] ExternalClusterStrain","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    param_7 = *(TArray<float,TSizedDefaultAllocator<32>_> **)FVar27;
    bVar23 = false;
    bVar16 = false;
    local_138 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_144117929:
      bVar22 = false;
      param_7 = local_138;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar23 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          local_158.ComparisonIndex.Value = (uint)param_7;
          local_158.Number = SUB84(param_7,4);
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_158,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x1f8);
          bVar23 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144117929;
      FThreadStats::AddMessage((FName)param_7,CycleScopeStart);
      bVar22 = true;
    }
    pFVar4 = (param_2->RootNode).Ptr;
    pFVar5 = (param_1->MEvolution).Ptr;
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
    pTVar19 = local_res18;
    pFVar6 = (param_4->CullingData).Ptr;
    if (pFVar6->bCullingActive == false) {
      local_e8 = param_4->SampleIndices;
      iVar40 = (param_4->SampleIndices).ArrayOffset;
      pTVar34 = local_e8.ElementArray;
      iVar36 = local_e8.ArrayNum;
    }
    else {
      pTVar34 = pFVar6->CullingIndices;
      iVar40 = 0;
      local_e8.ArrayOffset = 0;
      local_e8.ElementArray = pTVar34;
      iVar36 = pTVar34->ArrayNum;
      local_e8.ArrayNum = iVar36;
    }
    pFVar37 = (pTVar34->AllocatorInstance).Data + (longlong)iVar40 * 8;
    pFVar1 = pFVar37 + (longlong)iVar36 * 8;
    for (; pFVar37 != pFVar1; pFVar37 = pFVar37 + 8) {
      uVar39 = *(uint *)(pFVar37 + 4);
      uVar25 = 0;
      if ((int)uVar39 < local_174) {
        uVar25 = ~uVar39 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar20 = local_180;
      uVar39 = uVar39 + local_178;
      uVar25 = 0;
      if ((int)uVar39 < local_180->ArrayNum) {
        uVar25 = ~uVar39 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar2 = *(float *)((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar39 * 4);
      if (0.0 < fVar2) {
        uVar39 = *(uint *)pFVar37;
        uVar25 = 0;
        if ((int)uVar39 < pTVar19->ArrayNum) {
          uVar25 = ~uVar39 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar7 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                  ((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
        this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar7->field_0xc) {
          this_00 = pTVar7;
        }
        if (this_00 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          fVar41 = TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(this_00);
          if (fVar41 <= fVar2) {
            fVar41 = fVar2;
          }
          FRigidClustering::SetExternalStrain(&pFVar5->Clustering,this_00,fVar41);
        }
      }
    }
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar23) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar22 = !bVar22;
  }
  else {
    if (EVar3 != Field_Kill) {
      if (EVar3 == Field_SleepingThreshold) {
        FVar29 = StatPtr_STAT_ParamUpdateField_SleepingThreshold;
        if (StatPtr_STAT_ParamUpdateField_SleepingThreshold ==
            (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold>)0x0) {
          pFVar26 = ::FName::FName(&local_88,"STAT_ParamUpdateField_SleepingThreshold");
          FVar29 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_SleepingThreshold>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ParamUpdateField_SleepingThreshold,*pFVar26,
                              L"[Field Update] SleepingThreshold","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        local_188 = *(FName *)FVar29;
        bVar16 = false;
        bVar18 = false;
        local_118.ComparisonIndex.Value = 0;
        local_118.Number = 0;
        bVar22 = false;
        bVar17 = false;
        if ((local_188.ComparisonIndex.Value.Value == 0) &&
           (bVar23 = bVar16, bVar21 = bVar18, local_188.Number == 0)) {
LAB_144117f8a:
          bVar18 = bVar17;
          bVar16 = bVar22;
          bVar17 = false;
          bVar22 = false;
          local_188 = local_118;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_164.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_164._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
            bVar16 = false;
            bVar18 = true;
            bVar22 = false;
            bVar17 = true;
            if (-1 < CpuChannel->Enabled) {
              local_148.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
              local_148.Number = local_188.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_148,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                         ,0x21b);
              bVar16 = true;
              bVar18 = true;
              bVar22 = true;
              bVar17 = true;
            }
          }
          bVar23 = bVar16;
          bVar21 = bVar18;
          if (FThreadStats::bPrimaryEnable == false) goto LAB_144117f8a;
          FThreadStats::AddMessage(local_188,CycleScopeStart);
          bVar17 = true;
          bVar22 = true;
        }
        pFVar4 = (param_2->RootNode).Ptr;
        (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
        pTVar19 = local_res18;
        pFVar6 = (param_4->CullingData).Ptr;
        if (pFVar6->bCullingActive == false) {
          local_c8 = param_4->SampleIndices;
          iVar40 = (param_4->SampleIndices).ArrayOffset;
          pTVar34 = local_c8.ElementArray;
          iVar36 = local_c8.ArrayNum;
        }
        else {
          pTVar34 = pFVar6->CullingIndices;
          local_c8.ArrayOffset = 0;
          local_c8.ElementArray = pTVar34;
          iVar36 = pTVar34->ArrayNum;
          local_c8.ArrayNum = iVar36;
        }
        pFVar37 = (pTVar34->AllocatorInstance).Data + (longlong)iVar40 * 8;
        pFVar1 = pFVar37 + (longlong)iVar36 * 8;
        for (; param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)local_188, pFVar37 != pFVar1;
            pFVar37 = pFVar37 + 8) {
          uVar39 = *(uint *)pFVar37;
          uVar25 = 0;
          if ((int)uVar39 < pTVar19->ArrayNum) {
            uVar25 = ~uVar39 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                    ((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
          pTVar38 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
            pTVar38 = pTVar8;
          }
          if ((pTVar38 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (0 < local_174)) {
            uVar39 = *(uint *)(pFVar37 + 4);
            uVar25 = 0;
            if ((int)uVar39 < local_174) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar20 = local_180;
            uVar39 = uVar39 + local_178;
            uVar25 = 0;
            if ((int)uVar39 < local_180->ArrayNum) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar15 = (double)*(float *)((pTVar20->AllocatorInstance).Data +
                                       (longlong)(int)uVar39 * 4);
            pTVar30 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38);
            if (pTVar30->Ptr == (FChaosPhysicsMaterial *)0x0) {
              TVar31.Ptr = ::operator_new(0x80);
              if (TVar31.Ptr == (FChaosPhysicsMaterial *)0x0) {
                TVar31.Ptr = (FChaosPhysicsMaterial *)0x0;
              }
              else {
                (TVar31.Ptr)->Density = 1.0;
                (TVar31.Ptr)->StaticFriction = 0.0;
                (TVar31.Ptr)->Friction = 0.5;
                (TVar31.Ptr)->Restitution = 0.10000000149011612;
                (TVar31.Ptr)->LinearEtherDrag = 0.0;
                (TVar31.Ptr)->AngularEtherDrag = 0.0;
                (TVar31.Ptr)->DisabledLinearThreshold = 0.0;
                (TVar31.Ptr)->DisabledAngularThreshold = 0.0;
                (TVar31.Ptr)->SleepCounterThreshold = 0;
                (TVar31.Ptr)->UserData = (void *)0x0;
                (TVar31.Ptr)->BaseFrictionImpulse = 0.0;
                (TVar31.Ptr)->FrictionCombineMode = Avg;
                (TVar31.Ptr)->RestitutionCombineMode = Avg;
                ((TVar31.Ptr)->Strength).TensileStrength = 20000.0;
                ((TVar31.Ptr)->Strength).CompressionStrength = 200000.0;
                ((TVar31.Ptr)->Strength).ShearStrength = 60000.0;
                ((TVar31.Ptr)->DamageModifier).DamageThresholdMultiplier = 1.0;
                (TVar31.Ptr)->SoftCollisionMode = None;
                (TVar31.Ptr)->SoftCollisionThickness = 0.0;
              }
              auVar13._8_4_ = SUB84(dVar15,0);
              auVar13._0_8_ = dVar15;
              auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              (TVar31.Ptr)->SleepingLinearThreshold = dVar15;
              (TVar31.Ptr)->SleepingAngularThreshold = (double)auVar13._8_8_;
              FPBDRigidsEvolutionBase::SetPhysicsMaterial
                        ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38,TVar31);
              pFVar5 = (param_1->MEvolution).Ptr;
              pTVar30 = TGeometryParticleHandleImp<double,3,1>::
                        AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
                                  (pTVar38,(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                                            *)&pFVar5->_padding_);
              if (pTVar30 != &local_80) {
                pFVar9 = pTVar30->Ptr;
                pTVar30->Ptr = TVar31.Ptr;
                TVar31.Ptr = (FChaosPhysicsMaterial *)0x0;
                ::operator_delete(pFVar9,0x80);
              }
              Private::FPBDIslandManager::UpdateParticleMaterial
                        ((FPBDIslandManager *)&pFVar5->_padding_,pTVar38);
              ::operator_delete(TVar31.Ptr,0x80);
            }
            else {
              pTVar30 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                  ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38);
              if (dVar15 != pTVar30->Ptr->DisabledLinearThreshold) {
                pTVar30->Ptr->SleepingLinearThreshold = dVar15;
                pTVar30->Ptr->SleepingAngularThreshold = dVar15;
              }
            }
          }
          bVar23 = bVar16;
          bVar17 = bVar22;
          bVar21 = bVar18;
        }
      }
      else {
        if (EVar3 != Field_DisableThreshold) {
          if (EVar3 != Field_InternalClusterStrain) {
            return;
          }
          FVar33 = StatPtr_STAT_ParamUpdateField_InternalClusterStrain;
          if (StatPtr_STAT_ParamUpdateField_InternalClusterStrain ==
              (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain>)0x0) {
            pFVar26 = ::FName::FName(local_68,"STAT_ParamUpdateField_InternalClusterStrain");
            FVar33 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_InternalClusterStrain>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ParamUpdateField_InternalClusterStrain,*pFVar26,
                                L"[Field Update] InternalClusterStrain","STATGROUP_Chaos",
                                "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          local_188 = *(FName *)FVar33;
          local_f8.ComparisonIndex.Value = 0;
          local_f8.Number = 0;
          bVar22 = false;
          bVar21 = false;
          if ((local_188.ComparisonIndex.Value.Value == 0) &&
             (bVar17 = bVar23, bVar18 = bVar16, local_188.Number == 0)) {
LAB_14411880b:
            bVar16 = bVar22;
            bVar23 = bVar21;
            bVar22 = false;
            bVar21 = false;
            local_188 = local_f8;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_15c.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_15c._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
              bVar16 = false;
              bVar23 = true;
              bVar22 = false;
              bVar21 = true;
              if (-1 < CpuChannel->Enabled) {
                local_140.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
                local_140.Number = local_188.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_140,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                           ,0x23a);
                bVar16 = true;
                bVar23 = true;
                bVar22 = true;
                bVar21 = true;
              }
            }
            bVar17 = bVar23;
            bVar18 = bVar16;
            if (FThreadStats::bPrimaryEnable == false) goto LAB_14411880b;
            FThreadStats::AddMessage(local_188,CycleScopeStart);
            bVar22 = true;
            bVar21 = true;
          }
          pFVar4 = (param_2->RootNode).Ptr;
          local_170 = (FName)&((param_1->MEvolution).Ptr)->Clustering;
          (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
          this = local_170;
          pFVar6 = (param_4->CullingData).Ptr;
          if (pFVar6->bCullingActive == false) {
            local_a8 = param_4->SampleIndices;
            iVar40 = (param_4->SampleIndices).ArrayOffset;
            pTVar34 = local_a8.ElementArray;
            iVar36 = local_a8.ArrayNum;
          }
          else {
            pTVar34 = pFVar6->CullingIndices;
            iVar40 = 0;
            local_a8.ArrayOffset = 0;
            local_a8.ElementArray = pTVar34;
            iVar36 = pTVar34->ArrayNum;
            local_a8.ArrayNum = iVar36;
          }
          pFVar37 = (pTVar34->AllocatorInstance).Data + (longlong)iVar40 * 8;
          pFVar1 = pFVar37 + (longlong)iVar36 * 8;
          for (; pFVar37 != pFVar1; pFVar37 = pFVar37 + 8) {
            uVar39 = *(uint *)pFVar37;
            uVar25 = 0;
            if ((int)uVar39 < param_3->ArrayNum) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                       ((param_3->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
            this_01 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar10->field_0xc) {
              this_01 = pTVar10;
            }
            if ((this_01 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
               (EVar24 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_01),
               EVar24 == Dynamic)) {
              uVar39 = *(uint *)(pFVar37 + 4);
              uVar25 = 0;
              if ((int)uVar39 < local_174) {
                uVar25 = ~uVar39 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                      ,0x50,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar22)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar20 = local_180;
              uVar39 = uVar39 + local_178;
              uVar25 = 0;
              if ((int)uVar39 < local_180->ArrayNum) {
                uVar25 = ~uVar39 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar11 = (pTVar20->AllocatorInstance).Data;
              pfVar35 = TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                                  ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_01);
              FRigidClustering::SetInternalStrain
                        ((FRigidClustering *)this,
                         (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_01,
                         *pfVar35 + *(float *)(pFVar11 + (longlong)(int)uVar39 * 4));
              param_3 = local_res18;
            }
            bVar17 = bVar23;
            bVar18 = bVar16;
            bVar22 = bVar21;
          }
          if (bVar17) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          bVar22 = !bVar22;
          param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)local_188;
          goto LAB_144118a0f;
        }
        FVar32 = StatPtr_STAT_ParamUpdateField_DisableThreshold;
        if (StatPtr_STAT_ParamUpdateField_DisableThreshold ==
            (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold>)0x0) {
          pFVar26 = ::FName::FName(&local_78,"STAT_ParamUpdateField_DisableThreshold");
          FVar32 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_DisableThreshold>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_ParamUpdateField_DisableThreshold,*pFVar26,
                              L"[Field Update] DisableThreshold","STATGROUP_Chaos",
                              "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
        local_188 = *(FName *)FVar32;
        bVar23 = false;
        bVar21 = false;
        local_108.ComparisonIndex.Value = 0;
        local_108.Number = 0;
        bVar16 = false;
        bVar22 = false;
        if ((local_188.ComparisonIndex.Value.Value == 0) && (local_188.Number == 0)) {
LAB_1441183db:
          bVar18 = false;
          bVar17 = false;
          local_188 = local_108;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_160.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
            bVar23 = false;
            bVar21 = true;
            bVar16 = false;
            bVar22 = true;
            if (-1 < CpuChannel->Enabled) {
              local_170 = local_188;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_170,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                         ,0x22a);
              bVar23 = true;
              bVar21 = true;
              bVar16 = true;
              bVar22 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1441183db;
          FThreadStats::AddMessage(local_188,CycleScopeStart);
          bVar17 = true;
          bVar18 = true;
          bVar16 = bVar23;
          bVar22 = bVar21;
        }
        pFVar4 = (param_2->RootNode).Ptr;
        (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
        pTVar19 = local_res18;
        pFVar6 = (param_4->CullingData).Ptr;
        if (pFVar6->bCullingActive == false) {
          local_b8 = param_4->SampleIndices;
          iVar40 = (param_4->SampleIndices).ArrayOffset;
          pTVar34 = local_b8.ElementArray;
          iVar36 = local_b8.ArrayNum;
        }
        else {
          pTVar34 = pFVar6->CullingIndices;
          local_b8.ArrayOffset = 0;
          local_b8.ElementArray = pTVar34;
          iVar36 = pTVar34->ArrayNum;
          local_b8.ArrayNum = iVar36;
        }
        pFVar37 = (pTVar34->AllocatorInstance).Data + (longlong)iVar40 * 8;
        pFVar1 = pFVar37 + (longlong)iVar36 * 8;
        for (; param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)local_188, pFVar37 != pFVar1;
            pFVar37 = pFVar37 + 8) {
          uVar39 = *(uint *)pFVar37;
          uVar25 = 0;
          if ((int)uVar39 < pTVar19->ArrayNum) {
            uVar25 = ~uVar39 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                    ((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
          pTVar38 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
            pTVar38 = pTVar8;
          }
          if (((pTVar38 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (EVar24 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar38),
              EVar24 == Dynamic)) && (0 < local_174)) {
            uVar39 = *(uint *)(pFVar37 + 4);
            uVar25 = 0;
            if ((int)uVar39 < local_174) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar20 = local_180;
            uVar39 = uVar39 + local_178;
            uVar25 = 0;
            if ((int)uVar39 < local_180->ArrayNum) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            dVar15 = (double)*(float *)((pTVar20->AllocatorInstance).Data +
                                       (longlong)(int)uVar39 * 4);
            pTVar30 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38);
            if (pTVar30->Ptr == (FChaosPhysicsMaterial *)0x0) {
              TVar31.Ptr = ::operator_new(0x80);
              if (TVar31.Ptr == (FChaosPhysicsMaterial *)0x0) {
                TVar31.Ptr = (FChaosPhysicsMaterial *)0x0;
              }
              else {
                (TVar31.Ptr)->Density = 1.0;
                (TVar31.Ptr)->StaticFriction = 0.0;
                (TVar31.Ptr)->Friction = 0.5;
                (TVar31.Ptr)->Restitution = 0.10000000149011612;
                (TVar31.Ptr)->LinearEtherDrag = 0.0;
                (TVar31.Ptr)->AngularEtherDrag = 0.0;
                (TVar31.Ptr)->SleepingLinearThreshold = 1.0;
                (TVar31.Ptr)->SleepingAngularThreshold = 1.0;
                (TVar31.Ptr)->SleepCounterThreshold = 0;
                (TVar31.Ptr)->UserData = (void *)0x0;
                (TVar31.Ptr)->BaseFrictionImpulse = 0.0;
                (TVar31.Ptr)->FrictionCombineMode = Avg;
                (TVar31.Ptr)->RestitutionCombineMode = Avg;
                ((TVar31.Ptr)->Strength).TensileStrength = 20000.0;
                ((TVar31.Ptr)->Strength).CompressionStrength = 200000.0;
                ((TVar31.Ptr)->Strength).ShearStrength = 60000.0;
                ((TVar31.Ptr)->DamageModifier).DamageThresholdMultiplier = 1.0;
                (TVar31.Ptr)->SoftCollisionMode = None;
                (TVar31.Ptr)->SoftCollisionThickness = 0.0;
              }
              auVar14._8_4_ = SUB84(dVar15,0);
              auVar14._0_8_ = dVar15;
              auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              (TVar31.Ptr)->DisabledLinearThreshold = dVar15;
              (TVar31.Ptr)->DisabledAngularThreshold = (double)auVar14._8_8_;
              FPBDRigidsEvolutionBase::SetPhysicsMaterial
                        ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38,TVar31);
              pFVar5 = (param_1->MEvolution).Ptr;
              pTVar30 = TGeometryParticleHandleImp<double,3,1>::
                        AuxilaryValue<Chaos::TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>_>
                                  (pTVar38,(TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                                            *)&pFVar5->_padding_);
              if (pTVar30 != &local_70) {
                pFVar9 = pTVar30->Ptr;
                pTVar30->Ptr = TVar31.Ptr;
                TVar31.Ptr = (FChaosPhysicsMaterial *)0x0;
                ::operator_delete(pFVar9,0x80);
              }
              Private::FPBDIslandManager::UpdateParticleMaterial
                        ((FPBDIslandManager *)&pFVar5->_padding_,pTVar38);
              ::operator_delete(TVar31.Ptr,0x80);
            }
            else {
              pTVar30 = FPBDRigidsEvolutionBase::GetPerParticlePhysicsMaterial
                                  ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38);
              if (dVar15 != pTVar30->Ptr->DisabledLinearThreshold) {
                pTVar30->Ptr->DisabledLinearThreshold = dVar15;
                pTVar30->Ptr->DisabledAngularThreshold = dVar15;
              }
            }
          }
          bVar23 = bVar16;
          bVar17 = bVar18;
          bVar21 = bVar22;
        }
      }
      if (bVar21) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar17) {
        return;
      }
      goto LAB_144118a14;
    }
    FVar28 = StatPtr_STAT_ParamUpdateField_Kill;
    if (StatPtr_STAT_ParamUpdateField_Kill ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill>)0x0) {
      pFVar26 = ::FName::FName(&local_90,"STAT_ParamUpdateField_Kill");
      FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Kill>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_Kill,*pFVar26,
                          L"[Field Update] Kill","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    local_188 = *(FName *)FVar28;
    bVar23 = false;
    bVar21 = false;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    bVar16 = false;
    bVar22 = false;
    if ((local_188.ComparisonIndex.Value.Value == 0) &&
       (bVar17 = bVar23, bVar18 = bVar21, local_188.Number == 0)) {
LAB_144117c69:
      bVar21 = bVar22;
      bVar23 = bVar16;
      bVar22 = false;
      bVar16 = false;
      local_188 = local_128;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_168.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_168._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
        bVar23 = false;
        bVar21 = true;
        bVar16 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_150.ComparisonIndex.Value = local_188.ComparisonIndex.Value.Value;
          local_150.Number = local_188.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_150,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x20c);
          bVar23 = true;
          bVar21 = true;
          bVar16 = true;
          bVar22 = true;
        }
      }
      bVar17 = bVar23;
      bVar18 = bVar21;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144117c69;
      FThreadStats::AddMessage(local_188,CycleScopeStart);
      bVar22 = true;
      bVar16 = true;
    }
    pFVar4 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,param_4,&local_180);
    pTVar19 = local_res18;
    pFVar6 = (param_4->CullingData).Ptr;
    if (pFVar6->bCullingActive == false) {
      local_d8 = param_4->SampleIndices;
      iVar40 = (param_4->SampleIndices).ArrayOffset;
      pTVar34 = local_d8.ElementArray;
      iVar36 = local_d8.ArrayNum;
    }
    else {
      pTVar34 = pFVar6->CullingIndices;
      local_d8.ArrayOffset = 0;
      local_d8.ElementArray = pTVar34;
      iVar36 = pTVar34->ArrayNum;
      local_d8.ArrayNum = iVar36;
    }
    pFVar37 = (pTVar34->AllocatorInstance).Data + (longlong)iVar40 * 8;
    pFVar1 = pFVar37 + (longlong)iVar36 * 8;
    for (; pFVar37 != pFVar1; pFVar37 = pFVar37 + 8) {
      uVar39 = *(uint *)pFVar37;
      uVar25 = 0;
      if ((int)uVar39 < pTVar19->ArrayNum) {
        uVar25 = ~uVar39 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar8 = *(TGeometryParticleHandleImp<double,3,1> **)
                ((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
      pTVar38 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
        pTVar38 = pTVar8;
      }
      if (pTVar38 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar39 = *(uint *)(pFVar37 + 4);
        uVar25 = 0;
        if ((int)uVar39 < local_174) {
          uVar25 = ~uVar39 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar22)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar20 = local_180;
        uVar39 = uVar39 + local_178;
        uVar25 = 0;
        if ((int)uVar39 < local_180->ArrayNum) {
          uVar25 = ~uVar39 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (0.0 < *(float *)((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar39 * 4)) {
          FPBDRigidsEvolutionBase::DisableParticle
                    ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,pTVar38);
        }
      }
      bVar17 = bVar23;
      bVar22 = bVar16;
      bVar18 = bVar21;
    }
    if (bVar18) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar22 = !bVar22;
    param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)local_188;
  }
LAB_144118a0f:
  if (bVar22) {
    return;
  }
LAB_144118a14:
  FThreadStats::AddMessage((FName)param_7,CycleScopeEnd);
  return;
}

// FieldVectorForceUpdate @ 144118a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::FieldVectorForceUpdate
          (FPBDRigidsSolver *param_1,FFieldSystemCommand *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,FFieldContext *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FFieldNodeBase *pFVar3;
  FFieldSystemMetaDataCulling *pFVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  bool bVar13;
  EObjectStateType EVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce> FVar17;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque> FVar18;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar19;
  int iVar20;
  int iVar21;
  FColor_u_0 FVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar26;
  uint uVar27;
  FColor_u_0 local_res10;
  uint uStackX_14;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_d8;
  int local_d0;
  int local_cc;
  FColor_u_0 local_c8;
  uint local_c4;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  TFieldArrayView<FFieldContextIndex> local_98;
  TFieldArrayView<FFieldContextIndex> local_88;
  FName local_78;
  FName local_70;
  TVector<double,3> local_68;
  TVector<double,3> local_50;
  
  local_d8 = param_5;
  pFVar3 = (param_2->RootNode).Ptr;
  local_d0 = 0;
  local_cc = param_5->ArrayNum;
  local_res18 = param_3;
  (**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,param_4,&local_d8);
  if (param_2->PhysicsType != Field_LinearForce) {
    if (param_2->PhysicsType != Field_AngularTorque) {
      return;
    }
    FVar18 = StatPtr_STAT_ForceUpdateField_AngularTorque;
    if (StatPtr_STAT_ForceUpdateField_AngularTorque ==
        (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque>)0x0) {
      pFVar16 = ::FName::FName(&local_70,"STAT_ForceUpdateField_AngularTorque");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_AngularTorque>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_AngularTorque,
                          *pFVar16,L"[Field Update] AngularTorque","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar18;
    bVar9 = false;
    bVar12 = false;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    FVar23 = FVar24.ComparisonIndex.Value;
    uVar27 = FVar24.Number;
    if ((FVar23.Value == 0) && (uVar27 == 0)) {
LAB_144118f2a:
      bVar10 = false;
      FVar24 = local_a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar9 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c0.ComparisonIndex.Value = FVar23.Value;
          local_c0.Number = uVar27;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x2c8);
          bVar9 = true;
          bVar12 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144118f2a;
      param_5._0_4_ = FVar23.Value;
      param_5._4_4_ = uVar27;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar10 = true;
    }
    pFVar4 = (param_4->CullingData).Ptr;
    if (pFVar4->bCullingActive == false) {
      local_88 = param_4->SampleIndices;
      iVar20 = (param_4->SampleIndices).ArrayOffset;
      pTVar19 = local_88.ElementArray;
      iVar21 = local_88.ArrayNum;
    }
    else {
      pTVar19 = pFVar4->CullingIndices;
      iVar20 = 0;
      local_88.ArrayOffset = 0;
      local_88.ElementArray = pTVar19;
      iVar21 = pTVar19->ArrayNum;
      local_88.ArrayNum = iVar21;
    }
    pFVar25 = (pTVar19->AllocatorInstance).Data + (longlong)iVar20 * 8;
    pFVar1 = pFVar25 + (longlong)iVar21 * 8;
    for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 8) {
      uVar27 = *(uint *)pFVar25;
      uVar15 = 0;
      if ((int)uVar27 < param_3->ArrayNum) {
        uVar15 = ~uVar27 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar27 * 8);
      pTVar26 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar5->field_0xc) {
        pTVar26 = pTVar5;
      }
      if (pTVar26 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar26);
        if (EVar14 != Dynamic) {
          EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar26);
          if (EVar14 != Sleeping) goto LAB_1441190ea;
        }
        bVar13 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping(pTVar26);
        if (bVar13) {
          TPBDRigidParticles<double,3>::SetObjectState
                    (*(TPBDRigidParticles<double,3> **)pTVar26,*(int *)&pTVar26->field_0x8,Dynamic);
        }
        uVar27 = *(uint *)(pFVar25 + 4);
        uVar15 = 0;
        if ((int)uVar27 < local_cc) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pTVar11 = local_d8;
        uVar27 = uVar27 + local_d0;
        uVar15 = 0;
        if ((int)uVar27 < local_d8->ArrayNum) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar7 = (pTVar11->AllocatorInstance).Data;
        pFVar2 = pFVar7 + (longlong)(int)uVar27 * 0x18;
        local_50._0_8_ = *(undefined8 *)pFVar2;
        local_50._8_8_ = *(undefined8 *)(pFVar2 + 8);
        local_50._16_8_ = *(undefined8 *)(pFVar7 + (longlong)(int)uVar27 * 0x18 + 0x10);
        TPBDRigidParticleHandleImp<double,3,1>::AddTorque(pTVar26,&local_50,true);
        param_3 = local_res18;
      }
LAB_1441190ea:
    }
    goto LAB_1441190f7;
  }
  FVar17 = StatPtr_STAT_ForceUpdateField_LinearForce;
  pTVar11 = param_5;
  if (StatPtr_STAT_ForceUpdateField_LinearForce ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)0x0) {
    pFVar16 = ::FName::FName(&local_78,"STAT_ForceUpdateField_LinearForce");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearForce>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_LinearForce,
                        *pFVar16,L"[Field Update] LinearForce","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    pTVar11 = param_5;
  }
  param_5._4_4_ = (uint)((ulonglong)pTVar11 >> 0x20);
  FVar24 = *(FName *)FVar17;
  bVar9 = false;
  bVar12 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar22.Bits = (uint)FVar24.ComparisonIndex.Value;
  uVar27 = FVar24.Number;
  if ((FVar22.Bits == 0) && (uVar27 == 0)) {
LAB_144118bc8:
    bVar10 = false;
    FVar24 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      param_5._0_4_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&param_5,(char *)*(FName *)((longlong)FVar17 + 0x10));
      pTVar11 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                CONCAT44(param_5._4_4_,param_5._0_4_);
      bVar9 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar22.Bits;
        local_c4 = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                   ,0x2b6);
        pTVar11 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(param_5._4_4_,param_5._0_4_);
        bVar9 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144118bc8;
    local_res10.Bits = FVar22.Bits;
    uStackX_14 = uVar27;
    param_5 = pTVar11;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
    pTVar11 = param_5;
  }
  pFVar4 = (param_4->CullingData).Ptr;
  if (pFVar4->bCullingActive == false) {
    local_98 = param_4->SampleIndices;
    iVar20 = (param_4->SampleIndices).ArrayOffset;
    pTVar19 = local_98.ElementArray;
    iVar21 = local_98.ArrayNum;
  }
  else {
    pTVar19 = pFVar4->CullingIndices;
    iVar20 = 0;
    local_98.ArrayOffset = 0;
    local_98.ElementArray = pTVar19;
    iVar21 = pTVar19->ArrayNum;
    local_98.ArrayNum = iVar21;
  }
  pFVar25 = (pTVar19->AllocatorInstance).Data + (longlong)iVar20 * 8;
  pFVar1 = pFVar25 + (longlong)iVar21 * 8;
  param_5 = pTVar11;
  for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 8) {
    uVar27 = *(uint *)pFVar25;
    uVar15 = 0;
    if ((int)uVar27 < param_3->ArrayNum) {
      uVar15 = ~uVar27 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              ((param_3->AllocatorInstance).Data + (longlong)(int)uVar27 * 8);
    pTVar26 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)pTVar5->field_0xc) {
      pTVar26 = pTVar5;
    }
    if (pTVar26 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      uVar27 = *(uint *)&pTVar26->field_0x8;
      lVar6 = *(longlong *)pTVar26;
      uVar15 = 0;
      if ((int)uVar27 < *(int *)(lVar6 + 0x2e0)) {
        uVar15 = ~uVar27 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      param_3 = local_res18;
      if (*(char *)(*(longlong *)(lVar6 + 0x2d8) + 0xd + (longlong)(int)uVar27 * 0x10) == '\0') {
        EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar26);
        if (EVar14 != Dynamic) {
          EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar26);
          param_3 = local_res18;
          if (EVar14 != Sleeping) goto LAB_144118df2;
        }
        bVar13 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping(pTVar26);
        if (bVar13) {
          TPBDRigidParticles<double,3>::SetObjectState
                    (*(TPBDRigidParticles<double,3> **)pTVar26,*(int *)&pTVar26->field_0x8,Dynamic);
        }
        uVar27 = *(uint *)(pFVar25 + 4);
        uVar15 = 0;
        if ((int)uVar27 < local_cc) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pTVar11 = local_d8;
        uVar27 = uVar27 + local_d0;
        uVar15 = 0;
        if ((int)uVar27 < local_d8->ArrayNum) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar7 = (pTVar11->AllocatorInstance).Data;
        pFVar2 = pFVar7 + (longlong)(int)uVar27 * 0x18;
        local_68._0_8_ = *(undefined8 *)pFVar2;
        local_68._8_8_ = *(undefined8 *)(pFVar2 + 8);
        local_68._16_8_ = *(undefined8 *)(pFVar7 + (longlong)(int)uVar27 * 0x18 + 0x10);
        TPBDRigidParticleHandleImp<double,3,1>::AddForce(pTVar26,&local_68,true);
        param_3 = local_res18;
      }
    }
LAB_144118df2:
  }
LAB_1441190f7:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// FieldVectorParameterUpdate @ 144119150

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
  uint uVar23;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_LinearVelocity> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_LinearImpulse> FVar27;
  TVector<double,3> *pTVar28;
  longlong lVar29;
  double *pdVar30;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity> FVar31;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget> FVar32;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar33;
  uint *puVar34;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated> FVar35;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar36;
  undefined1 *puVar37;
  FName FVar38;
  FScriptContainerElement *pFVar39;
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
  
  pTVar42 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  local_288 = param_7;
  FVar41.Value = 0;
  local_280 = 0;
  local_27c = param_7->ArrayNum;
  EVar5 = param_2->PhysicsType;
  uVar22 = 0;
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
    FVar38 = *(FName *)FVar26;
    bVar17 = false;
    bVar16 = false;
    local_1f0.ComparisonIndex.Value = 0;
    local_1f0.Number = 0;
    bVar20 = false;
    bVar18 = false;
    if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar17 = false;
        bVar16 = true;
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_240.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
          local_240.Number = FVar38.Number;
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
        local_278 = FVar38;
        FThreadStats::AddMessage(FVar38,CycleScopeStart);
        bVar18 = true;
        goto LAB_1441192f4;
      }
    }
    bVar17 = bVar20;
    bVar16 = bVar18;
    bVar18 = false;
    local_278 = local_1f0;
    FVar38 = local_1f0;
LAB_1441192f4:
    pFVar6 = (param_2->RootNode).Ptr;
    (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4,&local_288);
    pFVar7 = (param_4->CullingData).Ptr;
    if (pFVar7->bCullingActive == false) {
      local_1c8 = param_4->SampleIndices;
      FVar41.Value = (param_4->SampleIndices).ArrayOffset;
      pTVar33 = local_1c8.ElementArray;
      iVar36 = local_1c8.ArrayNum;
    }
    else {
      pTVar33 = pFVar7->CullingIndices;
      local_1c8.ArrayOffset = 0;
      local_1c8.ElementArray = pTVar33;
      iVar36 = pTVar33->ArrayNum;
      local_1c8.ArrayNum = iVar36;
    }
    pFVar39 = (pTVar33->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
    pFVar10 = pFVar39 + (longlong)iVar36 * 8;
    while( true ) {
      if (pFVar39 == pFVar10) {
        if (bVar16) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar18) {
          FThreadStats::AddMessage(FVar38,CycleScopeEnd);
        }
        return;
      }
      uVar43 = *(uint *)pFVar39;
      uVar23 = uVar22;
      if ((int)uVar43 < param_3->ArrayNum) {
        uVar23 = ~uVar43 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) break;
      pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                ((param_3->AllocatorInstance).Data + (longlong)(int)uVar43 * 8);
      pTVar40 = pTVar42;
      if (1 < (byte)pTVar8->field_0xc) {
        pTVar40 = pTVar8;
      }
      if (pTVar40 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        uVar43 = *(uint *)&pTVar40->field_0x8;
        lVar29 = *(longlong *)pTVar40;
        uVar23 = uVar22;
        if ((int)uVar43 < *(int *)(lVar29 + 0x2e0)) {
          uVar23 = ~uVar43 >> 0x1f;
        }
        if ((uVar23 == 0) &&
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
        if (*(char *)(*(longlong *)(lVar29 + 0x2d8) + 0xb + (longlong)(int)uVar43 * 0x10) == '\x04')
        {
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar40,
                     (TVector<double,3> *)&local_168,*(int *)&pTVar40->field_0x8);
          uVar43 = *(uint *)(pFVar39 + 4);
          uVar23 = uVar22;
          if ((int)uVar43 < local_27c) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
          uVar23 = uVar22;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
      pFVar39 = pFVar39 + 8;
      FVar38 = local_278;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
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
LAB_1441196f8:
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
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1441196f8;
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
      pTVar33 = local_1b8.ElementArray;
      iVar36 = local_1b8.ArrayNum;
    }
    else {
      pTVar33 = pFVar7->CullingIndices;
      local_1b8.ArrayOffset = 0;
      local_1b8.ElementArray = pTVar33;
      iVar36 = pTVar33->ArrayNum;
      local_1b8.ArrayNum = iVar36;
    }
    pFVar39 = (pTVar33->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
    pFVar10 = pFVar39 + (longlong)iVar36 * 8;
    for (; pFVar39 != pFVar10; pFVar39 = pFVar39 + 8) {
      uVar43 = *(uint *)pFVar39;
      uVar23 = uVar22;
      if ((int)uVar43 < param_3->ArrayNum) {
        uVar23 = ~uVar43 >> 0x1f;
      }
      if ((uVar23 == 0) &&
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
        pTVar28 = TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(pTVar40);
        uVar43 = *(uint *)(pFVar39 + 4);
        local_88 = *(double *)&pTVar28->field_0x10;
        dVar12 = *(double *)pTVar28;
        dVar13 = *(double *)&pTVar28->field_0x8;
        uVar23 = uVar22;
        if ((int)uVar43 < local_27c) {
          uVar23 = ~uVar43 >> 0x1f;
        }
        if ((uVar23 == 0) &&
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
        uVar23 = uVar22;
        if ((int)uVar43 < local_288->ArrayNum) {
          uVar23 = ~uVar43 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar29 = (longlong)(int)uVar43;
        pFVar2 = (pTVar19->AllocatorInstance).Data;
        pdVar30 = TPBDRigidParticleHandleImp<double,3,1>::InvM(pTVar40);
        dVar3 = *pdVar30;
        local_138 = dVar3 * *(double *)(pFVar2 + lVar29 * 0x18) + dVar12;
        local_130 = dVar3 * *(double *)(pFVar2 + lVar29 * 0x18 + 8) + dVar13;
        local_128 = dVar3 * *(double *)(pFVar2 + lVar29 * 0x18 + 0x10) + local_88;
        TPBDRigidParticleHandleImp<double,3,1>::SetLinearImpulseVelocity
                  (pTVar40,(TVector<double,3> *)&local_138,false);
        param_3 = local_res18;
      }
      param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_278;
    }
  }
  else {
    if (EVar5 == Field_AngularVelociy) {
      FVar31 = StatPtr_STAT_ParamUpdateField_AngularVelocity;
      if (StatPtr_STAT_ParamUpdateField_AngularVelocity ==
          (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)0x0) {
        pFVar25 = ::FName::FName(&local_e0,"STAT_ParamUpdateField_AngularVelocity");
        FVar31 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_AngularVelocity>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ParamUpdateField_AngularVelocity,*pFVar25,
                            L"[Field Update] AngularVelocity","STATGROUP_Chaos","STATCAT_Advanced",
                            L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      param_7 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)FVar31;
      bVar16 = false;
      bVar17 = false;
      local_210 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_144119a4f:
        bVar18 = false;
        param_7 = local_210;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_264.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_264._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
          bVar16 = false;
          bVar17 = true;
          if (-1 < CpuChannel->Enabled) {
            local_230.ComparisonIndex.Value = (uint)param_7;
            local_230.Number = SUB84(param_7,4);
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_230,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                       ,0x27c);
            bVar16 = true;
            bVar17 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_144119a4f;
        FThreadStats::AddMessage((FName)param_7,CycleScopeStart);
        bVar18 = true;
      }
      pFVar6 = (param_2->RootNode).Ptr;
      (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,param_4,&local_288);
      pFVar7 = (param_4->CullingData).Ptr;
      if (pFVar7->bCullingActive == false) {
        local_1a8 = param_4->SampleIndices;
        FVar41.Value = (param_4->SampleIndices).ArrayOffset;
        pTVar33 = local_1a8.ElementArray;
        iVar36 = local_1a8.ArrayNum;
      }
      else {
        pTVar33 = pFVar7->CullingIndices;
        local_1a8.ArrayOffset = 0;
        local_1a8.ElementArray = pTVar33;
        iVar36 = pTVar33->ArrayNum;
        local_1a8.ArrayNum = iVar36;
      }
      pFVar39 = (pTVar33->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
      pFVar10 = pFVar39 + (longlong)iVar36 * 8;
      pTVar44 = local_res18;
      for (; pFVar39 != pFVar10; pFVar39 = pFVar39 + 8) {
        uVar43 = *(uint *)pFVar39;
        uVar23 = uVar22;
        if ((int)uVar43 < pTVar44->ArrayNum) {
          uVar23 = ~uVar43 >> 0x1f;
        }
        if ((uVar23 == 0) &&
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
          uVar43 = *(uint *)(pFVar39 + 4);
          uVar23 = uVar22;
          if ((int)uVar43 < local_27c) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
          uVar23 = uVar22;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
      goto LAB_14411a14c;
    }
    if (EVar5 != Field_PositionTarget) {
      if (EVar5 != Field_PositionAnimated) {
        return;
      }
      FVar35 = StatPtr_STAT_ParamUpdateField_PositionAnimated;
      if (StatPtr_STAT_ParamUpdateField_PositionAnimated ==
          (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated>)0x0) {
        pFVar25 = ::FName::FName(&local_d0,"STAT_ParamUpdateField_PositionAnimated");
        FVar35 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionAnimated>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ParamUpdateField_PositionAnimated,*pFVar25,
                            L"[Field Update] PositionAnimated","STATGROUP_Chaos","STATCAT_Advanced",
                            L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar38 = *(FName *)FVar35;
      bVar16 = false;
      bVar18 = false;
      local_250.ComparisonIndex.Value = 0;
      local_250.Number = 0;
      if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_258[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
          bVar16 = false;
          bVar18 = true;
          if (-1 < CpuChannel->Enabled) {
            local_270.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
            local_270.Number = FVar38.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_270,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                       ,0x2a5);
            bVar16 = true;
            bVar18 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_250 = FVar38;
          FThreadStats::AddMessage(FVar38,CycleScopeStart);
          bVar17 = true;
          FVar41.Value = local_250.ComparisonIndex.Value;
          goto LAB_14411a3c5;
        }
      }
      bVar17 = false;
      FVar38 = local_250;
LAB_14411a3c5:
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
      local_188.NameAndInfo.Number = FVar38.Number & 0xffff6fff | 0x6000;
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
    FVar32 = StatPtr_STAT_ParamUpdateField_PositionTarget;
    if (StatPtr_STAT_ParamUpdateField_PositionTarget ==
        (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget>)0x0) {
      pFVar25 = ::FName::FName(&local_d8,"STAT_ParamUpdateField_PositionTarget");
      FVar32 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_PositionTarget>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_PositionTarget
                          ,*pFVar25,L"[Field Update] PositionTarget","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    param_7 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)FVar32;
    bVar17 = false;
    bVar16 = false;
    local_200.ComparisonIndex.Value = 0;
    local_200.Number = 0;
    bVar20 = false;
    bVar18 = false;
    if (((uint)param_7 == 0) && (SUB84(param_7,4) == 0)) {
LAB_144119dec:
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
                  ((FColor *)&local_260._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
        bVar17 = false;
        bVar16 = true;
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_228.ComparisonIndex.Value = (uint)param_7;
          local_228.Number = SUB84(param_7,4);
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_228,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\FieldSystemProxyHelper.h"
                     ,0x28c);
          bVar17 = true;
          bVar16 = true;
          bVar20 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144119dec;
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
      pTVar33 = local_198.ElementArray;
      iVar36 = local_198.ArrayNum;
    }
    else {
      pTVar33 = pFVar7->CullingIndices;
      local_198.ArrayOffset = 0;
      local_198.ElementArray = pTVar33;
      iVar36 = pTVar33->ArrayNum;
      local_198.ArrayNum = iVar36;
    }
    pFVar39 = (pTVar33->AllocatorInstance).Data + (longlong)(int)FVar41.Value * 8;
    local_1e0.Value = (int *)(pFVar39 + (longlong)iVar36 * 8);
    pTVar44 = local_res18;
    if (pFVar39 != (FScriptContainerElement *)local_1e0.Value) {
      do {
        uVar43 = *(uint *)pFVar39;
        uVar23 = uVar22;
        if ((int)uVar43 < pTVar44->ArrayNum) {
          uVar23 = ~uVar43 >> 0x1f;
        }
        if ((uVar23 == 0) &&
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
          uVar43 = *(uint *)(pFVar39 + 4);
          uVar23 = uVar22;
          if ((int)uVar43 < local_27c) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
          uVar23 = uVar22;
          if ((int)uVar43 < local_288->ArrayNum) {
            uVar23 = ~uVar43 >> 0x1f;
          }
          if ((uVar23 == 0) &&
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
          lVar29 = (longlong)(int)uVar43;
          pFVar10 = (pTVar19->AllocatorInstance).Data;
          if (((dVar12 != *(double *)(pFVar10 + lVar29 * 0x18)) ||
              (dVar12 != *(double *)(pFVar10 + lVar29 * 0x18 + 8))) ||
             (pTVar44 = local_res18, dVar12 != *(double *)(pFVar10 + lVar29 * 0x18 + 0x10))) {
            uVar43 = *(uint *)pFVar39;
            if (*(int *)&param_6->field_0x8 != *(int *)&param_6->field_0x34) {
              puVar37 = &param_6->field_0x38;
              if (*(undefined1 **)&param_6->field_0x40 != (undefined1 *)0x0) {
                puVar37 = *(undefined1 **)&param_6->field_0x40;
              }
              iVar36 = *(int *)(puVar37 +
                               (ulonglong)(*(int *)&param_6->field_0x48 - 1U & uVar43) * 4);
              if (iVar36 != -1) {
                do {
                  if (*(uint *)(*(longlong *)param_6 + (longlong)iVar36 * 0x10) == uVar43) {
                    if (iVar36 != -1) {
                      puVar34 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        ::FindChecked((
                                                  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                  *)param_6,uVar43);
                      uVar43 = *(uint *)(pFVar39 + 4);
                      uVar23 = *puVar34;
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
                      if ((int)uVar23 < (param_5->Targets).ArrayNum) {
                        uVar43 = ~uVar23 >> 0x1f;
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
                      pFVar10 = pFVar2 + (longlong)(int)uVar23 * 0x18;
                      *(undefined8 *)pFVar10 = uVar14;
                      *(undefined8 *)(pFVar10 + 8) = uVar15;
                      *(undefined8 *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 0x10) = uVar4;
                      pTVar44 = local_res18;
                      goto LAB_14411a107;
                    }
                    break;
                  }
                  iVar36 = *(int *)(*(longlong *)param_6 + 8 + (longlong)iVar36 * 0x10);
                } while (iVar36 != -1);
              }
            }
            uVar43 = *(uint *)(pFVar39 + 4);
            local_25c = (param_5->ConstrainedParticles).ArrayNum;
            uVar23 = uVar22;
            if ((int)uVar43 < local_27c) {
              uVar23 = ~uVar43 >> 0x1f;
            }
            if ((uVar23 == 0) &&
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
            uVar23 = uVar22;
            if ((int)uVar43 < local_288->ArrayNum) {
              uVar23 = ~uVar43 >> 0x1f;
            }
            if ((uVar23 == 0) &&
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
            local_178 = pFVar39;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)param_6,&local_1e0,(bool *)&local_178);
            pTVar44 = local_res18;
          }
        }
LAB_14411a107:
        pFVar39 = pFVar39 + 8;
        param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_278;
      } while (pFVar39 != (FScriptContainerElement *)local_1e0.Value);
    }
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14411a14c:
  if (!bVar18) {
    return;
  }
  FThreadStats::AddMessage((FName)param_7,CycleScopeEnd);
  return;
}

// GetSizeSpecificData @ 14411c4a0

FSharedSimulationSizeSpecificData * __cdecl
GetSizeSpecificData(TArray<FSharedSimulationSizeSpecificData,TSizedDefaultAllocator<32>_> *param_1,
                   FGeometryCollection *param_2,int param_3,TBox<double> *param_4)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar6;
  TManagedArray<float> *pTVar7;
  FSharedSimulationSizeSpecificData *pFVar8;
  FValueType *this;
  uint uVar9;
  FName local_res8;
  FName local_28;
  FName local_20;
  
  FVar2 = FTransformCollection::TransformGroup;
  pFVar5 = FName::FName(&local_res8,"Size");
  local_20 = FVar2;
  local_28 = *pFVar5;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_2->_padding_,(TTuple<FName,FName> *)&local_28);
  this = (FValueType *)&pTVar6->field_0x10;
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this = (FValueType *)0x0;
  }
  if (this != (FValueType *)0x0) {
    pTVar7 = FManagedArrayCollection::FValueType::GetTypedPtr<float>(this);
    if (pTVar7 != (TManagedArray<float> *)0x0) {
      uVar4 = 0;
      if (param_3 < *(int *)&pTVar7->field_0x18) {
        uVar4 = (uint)~param_3 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FSharedSimulationSizeSpecificData *)(*pcVar1)();
          return pFVar8;
        }
      }
      uVar4 = GeometryCollection::SizeSpecific::FindIndexForVolume
                        (param_1,(double)*(float *)(*(longlong *)&pTVar7->field_0x10 +
                                                   (longlong)param_3 * 4));
      goto LAB_14411c577;
    }
  }
  uVar4 = GeometryCollection::SizeSpecific::FindIndexForVolume(param_1,param_4);
LAB_14411c577:
  uVar9 = 0;
  if ((int)uVar4 < param_1->ArrayNum) {
    uVar9 = ~uVar4 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FSharedSimulationSizeSpecificData *)(*pcVar1)();
      return pFVar8;
    }
  }
  return (FSharedSimulationSizeSpecificData *)
         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x18);
}

// IdentifySimulatableElements @ 14411c7a0

void __cdecl IdentifySimulatableElements(FErrorReporter *param_1,FGeometryCollection *param_2)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TManagedArray<bool> *pTVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool local_res18 [8];
  int local_res20;
  undefined2 local_88;
  undefined2 uStack_86;
  FConstructionParameters local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> local_68 [2];
  
  iVar8 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_2,FTransformCollection::TransformGroup);
  iVar9 = (**(code **)(*(longlong *)&param_2->TransformIndex + 0x60))(&param_2->TransformIndex);
  local_res18[0] = true;
  local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].ArrayNum = 0;
  local_68[0].ArrayMax = 0;
  pTVar1 = &param_2->Indices;
  local_res20 = iVar9;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(local_68,local_res18,iVar8);
  uVar18 = 0xffffffff;
  bVar7 = true;
  uVar15 = 0;
  iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  if (0 < iVar8) {
    uVar17 = 1;
    lVar20 = 0;
    do {
      if ((((int)uVar15 < 0) || (*(int *)&(param_2->Visible).field_0x28 <= (int)uVar15)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar19 = *(undefined1 **)&(param_2->Visible).field_0x20;
      puVar14 = &(param_2->Visible).field_0x10;
      if (puVar19 != (undefined1 *)0x0) {
        puVar14 = puVar19;
      }
      uVar10 = uVar15;
      if ((int)uVar15 < 0) {
        uVar10 = uVar15 + 0x1f;
      }
      if ((*(uint *)(puVar14 + (longlong)((int)uVar10 >> 5) * 4) & uVar17) != 0) {
        uVar10 = 0;
        if ((int)uVar15 < *(int *)&(param_2->Indices).field_0x18) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = *(uint *)(lVar20 + *(longlong *)&(param_2->Indices).field_0x10);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)&(param_2->BoneMap).field_0x18) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = *(uint *)(*(longlong *)&(param_2->BoneMap).field_0x10 + (longlong)(int)uVar10 * 4);
        uVar11 = 0;
        if ((int)uVar10 < local_68[0].ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68[0].AllocatorInstance.Data[(int)uVar10] = (FScriptContainerElement)0x0;
        bVar6 = (int)uVar10 < (int)uVar18;
        uVar18 = uVar10;
        if (bVar6) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4439241659858807180>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                             ,0x1674,"ObjIdx >= PrevObject");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar7 = false;
        }
      }
      uVar15 = uVar15 + 1;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      lVar20 = lVar20 + 0xc;
      iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    } while ((int)uVar15 < iVar8);
    if (!bVar7) {
      Chaos::FErrorReporter::ReportError
                (param_1,
                 L"Objects are not contiguous. This breaks assumptions later in the pipeline");
      param_1->bUnhandledErrors = false;
    }
  }
  FVar5 = FTransformCollection::TransformGroup;
  FVar4 = FGeometryCollection::SimulatableParticlesAttribute;
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_86;
  bVar7 = FManagedArrayCollection::HasAttribute
                    ((FManagedArrayCollection *)param_2,
                     FGeometryCollection::SimulatableParticlesAttribute,
                     FTransformCollection::TransformGroup);
  if (!bVar7) {
    FManagedArrayCollection::AddNewAttributeImpl<bool>
              ((FManagedArrayCollection *)param_2,FVar4,FVar5,&local_78);
  }
  pTVar13 = FManagedArrayCollection::ModifyAttribute<bool>
                      ((FManagedArrayCollection *)param_2,FVar4,FVar5);
  if (0 < *(int *)&pTVar13->field_0x28) {
    iVar8 = 0;
    do {
      if (((iVar8 < 0) || (*(int *)&pTVar13->field_0x28 <= iVar8)) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar19 = &pTVar13->field_0x10;
      if (*(undefined1 **)&pTVar13->field_0x20 != (undefined1 *)0x0) {
        puVar19 = *(undefined1 **)&pTVar13->field_0x20;
      }
      iVar12 = iVar8;
      if (iVar8 < 0) {
        iVar12 = iVar8 + 0x1f;
      }
      iVar16 = iVar8 + 1;
      *(uint *)(puVar19 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar19 + (longlong)(iVar12 >> 5) * 4) & ~(1 << ((byte)iVar8 & 0x1f));
      iVar8 = iVar16;
    } while (iVar16 < *(int *)&pTVar13->field_0x28);
  }
  uVar18 = 0;
  if (0 < iVar9) {
    lVar21 = 0;
    lVar20 = 0;
    do {
      uVar17 = ~uVar18 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar18 < *(int *)&(param_2->TransformIndex).field_0x18) {
        uVar15 = uVar17;
      }
      if ((uVar15 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = *(uint *)(*(longlong *)&(param_2->TransformIndex).field_0x10 + lVar21 * 4);
      uVar10 = 0;
      if ((int)uVar15 < *(int *)&(param_2->TransformToGeometryIndex).field_0x18) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)&(param_2->TransformToGeometryIndex).field_0x10 +
                  (longlong)(int)uVar15 * 4) != -1) {
        uVar10 = 0;
        if ((int)uVar18 < *(int *)&(param_2->VertexCount).field_0x18) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&(param_2->VertexCount).field_0x10 + lVar21 * 4) != 0) {
          uVar10 = 0;
          if ((int)uVar18 < *(int *)&(param_2->BoundingBox).field_0x18) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(param_2->BoundingBox).field_0x10;
          dVar24 = *(double *)(lVar20 + 0x20 + lVar2) - *(double *)(lVar20 + 8 + lVar2);
          dVar23 = *(double *)(lVar20 + 0x18 + lVar2) - *(double *)(lVar20 + lVar2);
          dVar22 = *(double *)(lVar20 + 0x28 + lVar2) - *(double *)(lVar20 + 0x10 + lVar2);
          if (0.0 < dVar24 * dVar24 + dVar23 * dVar23 + dVar22 * dVar22) {
            uVar17 = 0;
            if ((int)uVar15 < local_68[0].ArrayNum) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_68[0].AllocatorInstance.Data[(int)uVar15] == (FScriptContainerElement)0x0) {
              if ((((int)uVar15 < 0) || (*(int *)&pTVar13->field_0x28 <= (int)uVar15)) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              puVar19 = &pTVar13->field_0x10;
              if (*(undefined1 **)&pTVar13->field_0x20 != (undefined1 *)0x0) {
                puVar19 = *(undefined1 **)&pTVar13->field_0x20;
              }
              uVar17 = uVar15;
              if ((int)uVar15 < 0) {
                uVar17 = uVar15 + 0x1f;
              }
              *(uint *)(puVar19 + (longlong)((int)uVar17 >> 5) * 4) =
                   *(uint *)(puVar19 + (longlong)((int)uVar17 >> 5) * 4) |
                   1 << ((byte)uVar15 & 0x1f);
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x38;
    } while (lVar21 < local_res20);
  }
  if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  return;
}

// InitActivateDisabledResults @ 14411cf20

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

// InitDynamicStateResults @ 14411d0f0

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
LAB_14411d1f3:
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
      if (EVar7 != Uninitialized) goto LAB_14411d1f3;
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

// MakeTransformImplicitObject @ 1441257b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<Chaos::FImplicitObject> __cdecl
MakeTransformImplicitObject(FImplicitObject *param_1,TRigidTransform<double,3> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  TRefCountPtr<Chaos::FImplicitObject> TVar10;
  FImplicitObjectUnion *this;
  TImplicitObjectTransformed<double,3,1> *pTVar11;
  undefined8 *puVar12;
  TImplicitObjectTransformed<double,3,1> *pTVar13;
  TTransform<double> *in_R8;
  undefined1 auStack_1b8 [32];
  FImplicitObject *local_198;
  FImplicitObject *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_164 [4];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_160;
  TRefCountPtr<Chaos::FImplicitObject> local_150;
  TRefCountPtr<Chaos::FImplicitObject> local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TTransform<double> local_108;
  double local_a8;
  double dStack_a0;
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
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pTVar11 = (TImplicitObjectTransformed<double,3,1> *)0x0;
  param_1->_padding_ = 0;
  local_150.Reference = (FImplicitObject *)in_R8;
  local_140._16_8_ = param_1;
  bVar7 = Chaos::FImplicitObject::IsUnderlyingUnion((FImplicitObject *)param_2);
  if (!bVar7) {
    uVar8 = Chaos::FImplicitObject::GetType((FImplicitObject *)param_2);
    if (uVar8 != '\x04') {
      (**(code **)(*(longlong *)param_2 + 0x48))(param_2,&local_150);
      pTVar13 = operator_new(0xc0);
      if ((pTVar13 != (TImplicitObjectTransformed<double,3,1> *)0x0) &&
         (pTVar11 = Chaos::TImplicitObjectTransformed<double,3,1>::
                    TImplicitObjectTransformed<double,3,1>
                              (pTVar13,&local_150,(TRigidTransform<double,3> *)in_R8),
         pTVar11 != (TImplicitObjectTransformed<double,3,1> *)0x0)) {
        LOCK();
        *(int *)&pTVar11->_padding_ = (int)pTVar11->_padding_ + 1;
        UNLOCK();
      }
      if (param_1 == (FImplicitObject *)local_118) {
        if (pTVar11 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_144125c08;
        LOCK();
        plVar2 = &pTVar11->_padding_;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar11->_padding_ + 4) != 0))
        goto LAB_144125c08;
        puVar12 = (undefined8 *)pTVar11->_padding_;
      }
      else {
        pTVar13 = (TImplicitObjectTransformed<double,3,1> *)param_1->_padding_;
        param_1->_padding_ = (longlong)pTVar11;
        if (pTVar13 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_144125c08;
        LOCK();
        plVar2 = &pTVar13->_padding_;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar13->_padding_ + 4) != 0))
        goto LAB_144125c08;
        puVar12 = (undefined8 *)pTVar13->_padding_;
        pTVar11 = pTVar13;
      }
      (*(code *)*puVar12)(pTVar11,1);
LAB_144125c08:
      if ((TTransform<double> *)local_150.Reference == (TTransform<double> *)0x0) {
        return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
      }
      LOCK();
      plVar2 = &(local_150.Reference)->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
      }
      if (*(int *)((longlong)&(local_150.Reference)->_padding_ + 4) != 0) {
        return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
      }
      (**(code **)(((VectorRegister4Double *)&(local_150.Reference)->_padding_)->XY).m128d_f64[0])
                (local_150.Reference,1);
      return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
    }
    (**(code **)(**(longlong **)&param_2->field_0x20 + 0x48))
              (*(longlong **)&param_2->field_0x20,&local_148);
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,(TTransform<double> *)&param_2->field_0x30,in_R8);
    local_a8 = local_108.Rotation.XY.m128d_f64[0];
    dStack_a0 = local_108.Rotation.XY.m128d_f64[1];
    local_98 = local_108.Rotation.ZW.m128d_f64[0];
    dStack_90 = local_108.Rotation.ZW.m128d_f64[1];
    local_88 = local_108.Translation.XY.m128d_f64[0];
    dStack_80 = local_108.Translation.XY.m128d_f64[1];
    local_78 = local_108.Translation.ZW.m128d_f64[0];
    dStack_70 = local_108.Translation.ZW.m128d_f64[1];
    local_68 = local_108.Scale3D.XY.m128d_f64[0];
    dStack_60 = local_108.Scale3D.XY.m128d_f64[1];
    local_58 = local_108.Scale3D.ZW.m128d_f64[0];
    dStack_50 = local_108.Scale3D.ZW.m128d_f64[1];
    pTVar13 = operator_new(0xc0);
    if ((pTVar13 != (TImplicitObjectTransformed<double,3,1> *)0x0) &&
       (pTVar11 = Chaos::TImplicitObjectTransformed<double,3,1>::
                  TImplicitObjectTransformed<double,3,1>
                            (pTVar13,&local_148,(TRigidTransform<double,3> *)&local_a8),
       pTVar11 != (TImplicitObjectTransformed<double,3,1> *)0x0)) {
      LOCK();
      *(int *)&pTVar11->_padding_ = (int)pTVar11->_padding_ + 1;
      UNLOCK();
    }
    if (param_1 == (FImplicitObject *)(local_128 + 8)) {
      if (pTVar11 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_144125b3a;
      LOCK();
      plVar2 = &pTVar11->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar11->_padding_ + 4) != 0))
      goto LAB_144125b3a;
      puVar12 = (undefined8 *)pTVar11->_padding_;
    }
    else {
      pTVar13 = (TImplicitObjectTransformed<double,3,1> *)param_1->_padding_;
      param_1->_padding_ = (longlong)pTVar11;
      if (pTVar13 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_144125b3a;
      LOCK();
      plVar2 = &pTVar13->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar13->_padding_ + 4) != 0))
      goto LAB_144125b3a;
      puVar12 = (undefined8 *)pTVar13->_padding_;
      pTVar11 = pTVar13;
    }
    (*(code *)*puVar12)(pTVar11,1);
LAB_144125b3a:
    if (local_148.Reference == (FImplicitObject *)0x0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
    }
    LOCK();
    plVar2 = &(local_148.Reference)->_padding_;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
    }
    if (*(int *)((longlong)&(local_148.Reference)->_padding_ + 4) != 0) {
      return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
    }
    (**(code **)(local_148.Reference)->_padding_)(local_148.Reference,1);
    return (TRefCountPtr<Chaos::FImplicitObject>)param_1;
  }
  iVar3 = *(int *)&param_2->field_0x28;
  puVar12 = *(undefined8 **)&param_2->field_0x20;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  local_140._8_8_ = puVar12 + iVar3;
  while( true ) {
    uVar6 = local_140._8_8_;
    if (*(int *)&param_2->field_0x28 != iVar3) {
      local_164[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_164);
    }
    if (puVar12 == (undefined8 *)uVar6) break;
    TVar10 = MakeTransformImplicitObject
                       ((FImplicitObject *)local_140,(TRigidTransform<double,3> *)*puVar12);
    if (local_160.AllocatorInstance.Data <= TVar10.Reference) {
      if (TVar10.Reference <
          (FImplicitObject *)(local_160.AllocatorInstance.Data + (longlong)local_160.ArrayMax * 8))
      {
        local_180 = (longlong)local_160.ArrayNum;
        local_178 = 8;
        local_190 = (FImplicitObject *)local_160.AllocatorInstance.Data;
        local_198 = TVar10.Reference;
        local_188 = (longlong)local_160.ArrayMax;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          TVar10.Reference = (FImplicitObject *)(*pcVar4)();
          return (TRefCountPtr<Chaos::FImplicitObject>)TVar10.Reference;
        }
      }
    }
    iVar9 = local_160.ArrayNum;
    if (local_160.ArrayNum == local_160.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_160.AllocatorInstance,&local_160.ArrayMax);
    }
    local_160.ArrayNum = iVar9 + 1;
    *(longlong *)(local_160.AllocatorInstance.Data + (longlong)iVar9 * 8) = 0;
    *(longlong *)(local_160.AllocatorInstance.Data + (longlong)iVar9 * 8) =
         (TVar10.Reference)->_padding_;
    (TVar10.Reference)->_padding_ = 0;
    if ((undefined8 *)local_140._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_140._0_8_ + 8);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar9 == 1) && (*(int *)(local_140._0_8_ + 0xc) == 0)) {
        (*(code *)**(undefined8 **)local_140._0_8_)(local_140._0_8_,1);
      }
    }
    puVar12 = puVar12 + 1;
  }
  this = operator_new(0x70);
  if ((this != (FImplicitObjectUnion *)0x0) &&
     (pTVar11 = (TImplicitObjectTransformed<double,3,1> *)
                Chaos::FImplicitObjectUnion::FImplicitObjectUnion(this,&local_160),
     pTVar11 != (TImplicitObjectTransformed<double,3,1> *)0x0)) {
    LOCK();
    *(int *)&pTVar11->_padding_ = (int)pTVar11->_padding_ + 1;
    UNLOCK();
  }
  uVar6 = local_140._16_8_;
  if ((FImplicitObject *)local_140._16_8_ == (FImplicitObject *)local_128) {
    if (pTVar11 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_1441259df;
    LOCK();
    plVar2 = &pTVar11->_padding_;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar11->_padding_ + 4) != 0)) goto LAB_1441259df;
    puVar12 = (undefined8 *)pTVar11->_padding_;
  }
  else {
    pTVar13 = (TImplicitObjectTransformed<double,3,1> *)*(longlong *)local_140._16_8_;
    *(longlong *)local_140._16_8_ = (longlong)pTVar11;
    if (pTVar13 == (TImplicitObjectTransformed<double,3,1> *)0x0) goto LAB_1441259df;
    LOCK();
    plVar2 = &pTVar13->_padding_;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar5 != 1) || (*(int *)((longlong)&pTVar13->_padding_ + 4) != 0)) goto LAB_1441259df;
    puVar12 = (undefined8 *)pTVar13->_padding_;
    pTVar11 = pTVar13;
  }
  (*(code *)*puVar12)(pTVar11,1);
LAB_1441259df:
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_160.AllocatorInstance.Data,
             local_160.ArrayNum);
  if ((FImplicitObject *)local_160.AllocatorInstance.Data != (FImplicitObject *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)uVar6;
}

// PopulateSimulatedParticle @ 144126d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PopulateSimulatedParticle
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,FSharedSimulationParameters *param_2,
          FBVHParticles *param_3,TRefCountPtr<Chaos::FImplicitObject> param_4,
          FCollisionFilterData *param_5,FCollisionFilterData *param_6,double param_7,
          TVector<float,3> *param_8,TTransform<double> *param_9,uchar param_10,short param_11,
          float param_12)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TVector<float,3> *pTVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  FImplicitObject *pFVar22;
  TVector<float,3> *pTVar23;
  bool bVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_PopulateSimulatedParticle> FVar27;
  TVector<double,3> *pTVar28;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar29;
  FName FVar30;
  EObjectStateType EVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar42;
  uint uVar43;
  FName local_res10;
  FBVHParticles *local_res18;
  FImplicitObject *local_res20;
  TVector<float,3> local_168;
  TVector<float,3> local_15c;
  longlong local_150;
  longlong local_148;
  LARGE_INTEGER local_140;
  FStatMessage local_138;
  FName local_128;
  double local_120;
  FCollisionFilterData local_118;
  FCollisionFilterData local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  pTVar23 = param_8;
  FVar27 = StatPtr_STAT_PopulateSimulatedParticle;
  local_res18 = param_3;
  local_res20 = param_4.Reference;
  pTVar18 = param_8;
  if (StatPtr_STAT_PopulateSimulatedParticle ==
      (FThreadSafeStaticStat<FStat_STAT_PopulateSimulatedParticle>)0x0) {
    pFVar26 = FName::FName(&local_128,"STAT_PopulateSimulatedParticle");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_PopulateSimulatedParticle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PopulateSimulatedParticle,
                        *pFVar26,L"FGeometryCollectionPhysicsProxy::PopulateSimulatedParticle",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
    pTVar18 = param_8;
  }
  param_8._4_4_ = (undefined4)((ulonglong)pTVar18 >> 0x20);
  FVar30 = *(FName *)FVar27;
  bVar19 = false;
  bVar21 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_144126ec7:
    bVar20 = false;
    FVar30.ComparisonIndex.Value = 0;
    FVar30.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      param_8._0_4_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&param_8,(char *)*(FName *)((longlong)FVar27 + 0x10));
      pTVar18 = (TVector<float,3> *)CONCAT44(param_8._4_4_,param_8._0_4_);
      bVar19 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_res10.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                   ,0x1a2);
        pTVar18 = (TVector<float,3> *)CONCAT44(param_8._4_4_,param_8._0_4_);
        bVar19 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144126ec7;
    param_8 = pTVar18;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar20 = true;
    pTVar18 = param_8;
  }
  lVar8 = *(longlong *)param_1;
  uVar42 = *(uint *)&param_1->field_0x8;
  uVar29 = 0;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(lVar8 + 0x2e0)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  param_8 = pTVar18;
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(undefined1 *)(*(longlong *)(lVar8 + 0x2d8) + 0xd + (longlong)(int)uVar42 * 0x10) = 0;
  uVar42 = *(uint *)&param_1->field_0x8;
  local_e8 = (param_9->Translation).ZW.m128d_f64[0];
  dVar37 = (param_9->Translation).XY.m128d_f64[0];
  dVar36 = (param_9->Translation).XY.m128d_f64[1];
  lVar8 = *(longlong *)param_1;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(lVar8 + 0x30)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  local_f8 = dVar37;
  dStack_f0 = dVar36;
  local_d0 = local_e8;
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_168._0_8_ = 0;
  local_168._8_4_ = 0;
  lVar8 = *(longlong *)(lVar8 + 0x28);
  pdVar2 = (double *)(lVar8 + (longlong)(int)uVar42 * 0x18);
  *pdVar2 = dVar37;
  pdVar2[1] = dVar36;
  *(double *)(lVar8 + 0x10 + (longlong)(int)uVar42 * 0x18) = local_d0;
  Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
            ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,&local_168,false);
  local_120 = __real_3e45798ee0000000;
  dVar10 = (param_9->Rotation).XY.m128d_f64[0];
  dVar15 = (param_9->Rotation).XY.m128d_f64[1];
  dVar16 = (param_9->Rotation).ZW.m128d_f64[0];
  dVar17 = (param_9->Rotation).ZW.m128d_f64[1];
  dVar36 = dVar16 * dVar16 + dVar10 * dVar10;
  dVar39 = dVar17 * dVar17 + dVar15 * dVar15;
  dVar37 = dVar39 + dVar36;
  dVar36 = dVar36 + dVar39;
  auVar40._8_4_ = SUB84(dVar36,0);
  auVar40._0_8_ = dVar37;
  auVar40._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar40 = sqrtpd(in_XMM4,auVar40);
  uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= dVar37);
  uVar34 = -(ulonglong)(__real_3e45798ee0000000 <= dVar36);
  uVar42 = (uint)(uVar33 >> 0x20);
  uVar43 = (uint)(uVar34 >> 0x20);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
  local_c8._0_8_ = uVar33 & (ulonglong)(auVar41._0_8_ * dVar10);
  uVar14 = uVar34 & (ulonglong)(auVar41._8_8_ * dVar15);
  local_c8._8_4_ = (undefined4)uVar14;
  local_c8._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar41._0_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar41._4_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar41._8_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar41._12_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c8 = local_c8 | auVar41;
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
  local_b8._0_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  local_b8._4_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  local_b8._8_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8._12_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar38._0_8_ = (ulonglong)(auVar40._0_8_ * dVar16) & uVar33;
  uVar34 = (ulonglong)(auVar40._8_8_ * dVar17) & uVar34;
  auVar38._8_4_ = (undefined4)uVar34;
  auVar38._12_4_ = (undefined4)(uVar34 >> 0x20);
  local_b8 = local_b8 | auVar38;
  local_a8 = local_c8;
  local_98 = local_b8;
  Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,(TRotation<double,3> *)local_c8,false
            );
  local_15c._0_8_ = 0;
  local_15c._8_4_ = 0;
  Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
            ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,&local_15c,false);
  pTVar28 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP(param_1,pTVar28);
  uVar42 = *(uint *)&param_1->field_0x8;
  local_150 = *(longlong *)param_1;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(local_150 + 0x50)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar43 = *(uint *)&param_1->field_0x8;
  puVar3 = (undefined8 *)(*(longlong *)(local_150 + 0x48) + (longlong)(int)uVar42 * 0x10);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  lVar8 = *(longlong *)param_1;
  uVar42 = uVar29;
  if ((int)uVar43 < *(int *)(lVar8 + 0x568)) {
    uVar42 = ~uVar43 >> 0x1f;
  }
  if (uVar42 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar3 = (undefined8 *)(*(longlong *)(lVar8 + 0x560) + (longlong)(int)uVar43 * 0x10);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  lVar8 = *(longlong *)param_1;
  uVar42 = *(uint *)&param_1->field_0x8;
  lVar32 = (longlong)(int)uVar42;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(lVar8 + 0x400)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  dVar37 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  dVar36 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  dVar10 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x3f8);
  *(double *)(lVar8 + lVar32 * 0x18) = dVar37;
  *(double *)(lVar8 + 8 + lVar32 * 0x18) = dVar36;
  *(double *)(lVar8 + 0x10 + lVar32 * 0x18) = dVar10;
  dVar15 = UE::Math::TQuat<double>::Identity.W;
  dVar10 = UE::Math::TQuat<double>::Identity.Z;
  dVar36 = UE::Math::TQuat<double>::Identity.Y;
  dVar37 = UE::Math::TQuat<double>::Identity.X;
  lVar8 = *(longlong *)param_1;
  uVar42 = *(uint *)&param_1->field_0x8;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(lVar8 + 0x418)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x410);
  pdVar2 = (double *)((longlong)(int)uVar42 * 0x20 + lVar8);
  *pdVar2 = dVar37;
  pdVar2[1] = dVar36;
  pdVar2 = (double *)((longlong)(int)uVar42 * 0x20 + 0x10 + lVar8);
  *pdVar2 = dVar10;
  pdVar2[1] = dVar15;
  Chaos::TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,Uninitialized);
  dVar37 = (double)param_2->MinimumMassClamp;
  if ((param_7 < dVar37) || ((double)param_2->MaximumMassClamp < param_7)) {
    dVar36 = (double)param_2->MaximumMassClamp;
    if (param_7 <= (double)param_2->MaximumMassClamp) {
      dVar36 = param_7;
    }
    param_7 = dVar36;
    if (dVar36 <= dVar37) {
      param_7 = dVar37;
    }
  }
  fVar35 = *(float *)pTVar23;
  iVar25 = _isnan((double)fVar35);
  if (iVar25 == 0) {
    fVar4 = *(float *)&pTVar23->field_0x4;
    iVar25 = _isnan((double)fVar4);
    if (iVar25 == 0) {
      fVar5 = *(float *)&pTVar23->field_0x8;
      iVar25 = _isnan((double)fVar5);
      if (iVar25 == 0) {
        fVar6 = param_2->MinimumInertiaTensorDiagonalClamp;
        if ((((fVar35 < fVar6) ||
             (fVar7 = param_2->MaximumInertiaTensorDiagonalClamp, fVar7 < fVar35)) ||
            (fVar4 < fVar6)) || (((fVar7 < fVar4 || (fVar5 < fVar6)) || (fVar7 < fVar5)))) {
          fVar5 = param_2->MaximumInertiaTensorDiagonalClamp;
          if (fVar5 <= fVar35) {
            fVar35 = fVar5;
          }
          if (fVar35 <= fVar6) {
            fVar35 = fVar6;
          }
          if (fVar5 <= fVar4) {
            fVar4 = fVar5;
          }
          *(float *)pTVar23 = fVar35;
          if (fVar4 <= fVar6) {
            fVar4 = fVar6;
          }
          *(float *)&pTVar23->field_0x4 = fVar4;
          fVar35 = *(float *)&pTVar23->field_0x8;
          if (fVar5 <= fVar35) {
            fVar35 = fVar5;
          }
          if (fVar35 <= fVar6) {
            fVar35 = fVar6;
          }
          *(float *)&pTVar23->field_0x8 = fVar35;
        }
        goto LAB_1441273e7;
      }
    }
  }
  *(undefined4 *)pTVar23 = 0x3f800000;
  *(undefined4 *)&pTVar23->field_0x4 = 0x3f800000;
  *(undefined4 *)&pTVar23->field_0x8 = 0x3f800000;
LAB_1441273e7:
  lVar8 = *(longlong *)param_1;
  uVar42 = *(uint *)&param_1->field_0x8;
  uVar43 = uVar29;
  if ((int)uVar42 < *(int *)(lVar8 + 0x3d0)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar8 + 0x3c8) + (longlong)(int)uVar42 * 8) = param_7;
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI(param_1,pTVar23);
  if (param_7 <= 0.0) {
    dVar37 = 0.0;
    local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar37 = __real_3ff0000000000000 / param_7;
    uVar11 = __real_47eff933c0000000;
    if ((double)*(float *)pTVar23 != 0.0) {
      uVar11 = __real_3ff0000000000000 / (double)*(float *)pTVar23;
    }
    uVar12 = __real_47eff933c0000000;
    if ((double)*(float *)&pTVar23->field_0x4 != 0.0) {
      uVar12 = __real_3ff0000000000000 / (double)*(float *)&pTVar23->field_0x4;
    }
    uVar13 = __real_47eff933c0000000;
    if ((double)*(float *)&pTVar23->field_0x8 != 0.0) {
      uVar13 = __real_3ff0000000000000 / (double)*(float *)&pTVar23->field_0x8;
    }
  }
  uVar42 = *(uint *)&param_1->field_0x8;
  lVar8 = *(longlong *)param_1;
  if ((int)uVar42 < *(int *)(lVar8 + 1000)) {
    uVar29 = ~uVar42 >> 0x1f;
  }
  if (uVar29 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar8 + 0x3e0) + (longlong)(int)uVar42 * 8) = dVar37;
  uVar42 = *(uint *)&param_1->field_0x8;
  lVar32 = (longlong)(int)uVar42;
  lVar8 = *(longlong *)param_1;
  uVar43 = 0;
  if ((int)uVar42 < *(int *)(lVar8 + 0x3a0)) {
    uVar43 = ~uVar42 >> 0x1f;
  }
  if (uVar43 == 0) {
    bVar24 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x398);
  *(float *)(lVar8 + lVar32 * 0xc) = (float)(double)uVar11;
  *(float *)(lVar8 + 4 + lVar32 * 0xc) = (float)(double)uVar12;
  *(float *)(lVar8 + 8 + lVar32 * 0xc) = (float)(double)uVar13;
  Chaos::TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,Dynamic);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup(param_1,(int)param_11);
  pFVar22 = local_res20;
  local_148 = local_res20->_padding_;
  if (local_148 != 0) {
    LOCK();
    *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
    UNLOCK();
  }
  local_118.Word0 = param_6->Word0;
  local_118.Word1 = param_6->Word1;
  local_118.Word2 = param_6->Word2;
  local_118.Word3 = param_6->Word3;
  local_108.Word0 = param_5->Word0;
  local_108.Word1 = param_5->Word1;
  local_108.Word2 = param_5->Word2;
  local_108.Word3 = param_5->Word3;
  SetImplicitToPTParticles
            (param_1,param_2,local_res18,(FImplicitObject *)&local_148,&local_108,&local_118,param_9
             ,param_12);
  EVar31 = param_10;
  if ((param_10 != '\x01') && (param_10 != '\x02')) {
    EVar31 = (param_10 != '\x03') + Static;
  }
  Chaos::TPBDRigidParticles<double,3>::SetObjectState
            (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8,EVar31);
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar20) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_138.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_138);
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
  puVar3 = (undefined8 *)pFVar22->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar25 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar25 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// RemoveImplicitsInDynamicCollections @ 14412b5c0

bool __cdecl
GeometryCollectionPhysicsProxy::Private::RemoveImplicitsInDynamicCollections
          (FSimulationParameters *param_1)

{
  if ((!bRemoveImplicitsInDynamicCollections) && (!param_1->bOptimizeForRuntimeMemory)) {
    return false;
  }
  return true;
}

// ReportDynamicStateResult @ 14412b5e0

bool __cdecl
Chaos::ReportDynamicStateResult
          (FPBDRigidsSolver *param_1,EObjectStateType param_2,
          TPBDRigidParticleHandleImp<double,3,1> *param_3,bool param_4,TVector<double,3> *param_5,
          bool param_6,TVector<double,3> *param_7)

{
  EObjectStateType EVar1;
  double *pdVar2;
  TVector<float,3> local_18;
  
  EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_3);
  if (((param_2 != Dynamic) ||
      (pdVar2 = TPBDRigidParticleHandleImp<double,3,1>::M(param_3),
      __real_3e80000000000000 < *pdVar2)) && (EVar1 != param_2)) {
    SetParticleDynamicState(param_1,param_2,param_3);
    if (1 < (byte)(param_2 - Kinematic)) {
      if (param_2 == Dynamic) {
        if (param_4) {
          TKinematicGeometryParticlesImp<double,3,0>::SetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)param_3,
                     *(int *)&param_3->field_0x8,param_5);
        }
        if (param_6) {
          TKinematicGeometryParticlesImp<double,3,0>::SetW
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)param_3,
                     *(int *)&param_3->field_0x8,param_7);
        }
      }
      return true;
    }
    local_18._0_8_ = 0;
    local_18._8_4_ = 0;
    TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
              ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_3,&local_18,false);
    local_18._0_8_ = 0;
    local_18._8_4_ = 0;
    TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
              ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_3,&local_18,false);
    return true;
  }
  return false;
}

// SetImplicitToPTParticles @ 14412d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SetImplicitToPTParticles
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,FSharedSimulationParameters *param_2,
          FBVHParticles *param_3,TRefCountPtr<Chaos::FImplicitObject> param_4,
          FCollisionFilterData *param_5,FCollisionFilterData *param_6,TTransform<double> *param_7,
          float param_8)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  IPhysicsProxyBase *pIVar15;
  FShapeInstanceProxy *pFVar16;
  code *pcVar17;
  double dVar18;
  bool bVar19;
  uchar uVar20;
  undefined8 *puVar21;
  TAABB<double,3> *pTVar22;
  bool *pbVar23;
  TVector<double,3> *pTVar24;
  FBVHParticles *pFVar25;
  FBVHParticles *pFVar26;
  double *pdVar27;
  longlong lVar28;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar29;
  longlong lVar30;
  TArrayCollection *pTVar31;
  ECollisionTypeEnum EVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  FBVHParticles *pFVar36;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStackY_308 [32];
  FImplicitObject *local_2d8;
  undefined1 local_2d0;
  undefined1 local_2cf [7];
  undefined1 local_2c8 [16];
  double local_2b8;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_2b0;
  FImplicitObject *local_2a8;
  FCollisionFilterData local_2a0;
  FCollisionFilterData local_288;
  double local_278 [6];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  FCollisionFilterData local_218;
  FCollisionFilterData local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  TVector<double,3> local_1e0;
  TVector<double,3> local_1c8;
  undefined1 local_1b0 [48];
  undefined1 local_180 [48];
  undefined1 local_150 [56];
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
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  iVar9 = (param_2->SizeSpecificData).ArrayNum;
  local_248 = CONCAT31(local_248._1_3_,1);
  local_2b0 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )param_1;
  local_2a8 = param_4.Reference;
  uVar42 = 1;
  if (iVar9 != 0) {
    if ((iVar9 < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    if (*(int *)((param_2->SizeSpecificData).AllocatorInstance.Data + 0x10) != 0) {
      if (((param_2->SizeSpecificData).ArrayNum < 1) &&
         (bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar10 = (param_2->SizeSpecificData).AllocatorInstance.Data;
      if ((*(int *)(pFVar10 + 0x10) < 1) &&
         (bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      puVar11 = *(undefined4 **)(pFVar10 + 8);
      local_248 = *puVar11;
      uStack_244 = puVar11[1];
      uStack_240 = puVar11[2];
      uStack_23c = puVar11[3];
      local_238 = *(undefined8 *)(puVar11 + 4);
      uStack_230 = *(undefined8 *)(puVar11 + 6);
      local_228 = puVar11[8];
      uVar42 = local_248;
    }
  }
  auVar8 = *(undefined1 (*) [16])(param_7->Scale3D).XY.m128d_f64;
  uVar44 = auVar8._0_4_;
  uVar45 = auVar8._4_4_;
  uVar46 = auVar8._8_4_;
  uVar47 = auVar8._12_4_;
  dVar6 = (param_7->Scale3D).ZW.m128d_f64[0];
  EVar32 = (ECollisionTypeEnum)uVar42;
  dVar38 = auVar8._0_8_;
  dVar40 = auVar8._8_8_;
  local_2c8 = auVar8;
  local_2b8 = dVar6;
  if ((FImplicitObject *)(param_4.Reference)->_padding_ != (FImplicitObject *)0x0) {
    uVar20 = Chaos::FImplicitObject::GetType((FImplicitObject *)(param_4.Reference)->_padding_);
    dVar18 = __real_3f1a36e2e0000000;
    uVar42 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
    uVar43 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
    uVar41 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((EVar32 == Chaos_Surface_Volumetric) || (uVar20 == '\x06')) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)
                                 (dVar38 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X)
                                >> 0x20) & uVar33,
                          SUB84(dVar38 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) &
                          uVar41))) ||
       ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)
                                 (dVar40 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y)
                                >> 0x20) & uVar33,
                          SUB84(dVar40 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) &
                          uVar41) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)
                                 (local_2b8 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
                                 ) >> 0x20) & uVar33,
                          SUB84(local_2b8 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0
                               ) & uVar41))))) {
      plVar13 = (longlong *)(param_4.Reference)->_padding_;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        uVar42 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
        uVar43 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
      }
      dVar39 = dVar38 - (double)CONCAT44(uVar43,uVar42);
      if (((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar33,
                                      SUB84(dVar39,0) & uVar41)) ||
          (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                            (dVar40 - UE::Math::TVector<double>::OneVector.
                                                      field0_0x0._s_0.Y) >> 0x20) & uVar33,
                                     SUB84(dVar40 - UE::Math::TVector<double>::OneVector.field0_0x0.
                                                    _s_0.Y,0) & uVar41))) ||
         (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                           (local_2b8 -
                                           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z)
                                          >> 0x20) & uVar33,
                                    SUB84(local_2b8 -
                                          UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0)
                                    & uVar41))) {
        local_1f8 = auVar8;
        local_1e8 = dVar6;
        (**(code **)(*plVar13 + 0x50))(plVar13,&local_2d8,local_1f8);
      }
      else {
        (**(code **)(*plVar13 + 0x48))(plVar13,&local_2d8);
      }
      LOCK();
      plVar1 = plVar13 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (*(int *)((longlong)plVar13 + 0xc) == 0)) {
        (**(code **)*plVar13)(plVar13,1);
      }
      FCollisionStructureManager::UpdateImplicitFlags(local_2d8,EVar32);
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)&param_1->field_0x8,&local_2d8);
      puVar21 = (undefined8 *)(**(code **)(local_2d8->_padding_ + 0x90))(local_2d8,local_180);
      pTVar22 = Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
                          (*(TGeometryParticlesImp<double,3,0> **)param_1,
                           *(int *)&param_1->field_0x8);
      uVar7 = puVar21[1];
      *(undefined8 *)&pTVar22->MMin = *puVar21;
      *(undefined8 *)&(pTVar22->MMin).field_0x8 = uVar7;
      *(undefined8 *)&(pTVar22->MMin).field_0x10 = puVar21[2];
      uVar7 = puVar21[4];
      *(undefined8 *)&pTVar22->MMax = puVar21[3];
      *(undefined8 *)&(pTVar22->MMax).field_0x8 = uVar7;
      *(undefined8 *)&(pTVar22->MMax).field_0x10 = puVar21[5];
      if (local_2d8 != (FImplicitObject *)0x0) {
        LOCK();
        plVar13 = &local_2d8->_padding_;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if (((int)lVar12 == 1) && (*(int *)((longlong)&local_2d8->_padding_ + 4) == 0)) {
          (**(code **)local_2d8->_padding_)(local_2d8,1);
        }
      }
    }
    else {
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)&param_1->field_0x8,param_4.Reference);
      puVar21 = (undefined8 *)
                (**(code **)(*(longlong *)(param_4.Reference)->_padding_ + 0x90))
                          ((longlong *)(param_4.Reference)->_padding_,local_1b0);
      pTVar22 = Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
                          (*(TGeometryParticlesImp<double,3,0> **)param_1,
                           *(int *)&param_1->field_0x8);
      uVar7 = puVar21[1];
      *(undefined8 *)&pTVar22->MMin = *puVar21;
      *(undefined8 *)&(pTVar22->MMin).field_0x8 = uVar7;
      *(undefined8 *)&(pTVar22->MMin).field_0x10 = puVar21[2];
      uVar7 = puVar21[4];
      *(undefined8 *)&pTVar22->MMax = puVar21[3];
      *(undefined8 *)&(pTVar22->MMax).field_0x8 = uVar7;
      *(undefined8 *)&(pTVar22->MMax).field_0x10 = puVar21[5];
    }
    puVar35 = &param_1->field_0x8;
    pbVar23 = Chaos::TGeometryParticlesImp<double,3,0>::HasBounds
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)puVar35);
    *pbVar23 = true;
    uVar41 = *(uint *)puVar35;
    lVar30 = (longlong)(int)uVar41;
    lVar12 = *(longlong *)param_1;
    uVar33 = 0;
    if ((int)uVar41 < *(int *)(lVar12 + 0x50)) {
      uVar33 = ~uVar41 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    lVar12 = *(longlong *)(lVar12 + 0x48);
    fVar5 = *(float *)(lVar12 + lVar30 * 0x10);
    uVar7 = *(undefined8 *)(lVar12 + 8 + lVar30 * 0x10);
    dVar6 = (double)(float)((ulonglong)uVar7 >> 0x20);
    dVar18 = (double)*(float *)(lVar12 + 4 + lVar30 * 0x10);
    pTVar24 = Chaos::TParticles<double,3>::GetX(*(TParticles<double,3> **)param_1,*(int *)puVar35);
    local_108._8_4_ = SUB84(dVar6,0);
    local_108._0_8_ = (double)(float)uVar7;
    local_108._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_118._8_4_ = SUB84(dVar18,0);
    local_118._0_8_ = (double)fVar5;
    local_118._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_f8 = *(undefined8 *)pTVar24;
    uStack_f0 = *(undefined8 *)&pTVar24->field_0x8;
    local_e8 = *(undefined8 *)&pTVar24->field_0x10;
    local_d8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_d0 = _UNK_150689688;
    local_c8 = ___xmm_00000000000000003ff0000000000000;
    uStack_c0 = _UNK_150689518;
    local_1e0._16_8_ = 0;
    uStack_e0 = 0;
    local_1e0._0_8_ = 0;
    local_1e0._8_8_ = 0;
    Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
              (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)puVar35,
               (TRigidTransform<double,3> *)local_118,&local_1e0);
    param_4.Reference = local_2a8;
  }
  if ((param_3 != (FBVHParticles *)0x0) && (EVar32 == Chaos_Surface_Volumetric)) {
    Chaos::TRigidParticles<double,3>::CollisionParticlesInitIfNeeded
              (*(TRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar41 = *(uint *)&param_1->field_0x8;
    lVar30 = (longlong)(int)uVar41;
    pFVar36 = (FBVHParticles *)0x0;
    lVar12 = *(longlong *)param_1;
    uVar33 = 0;
    if ((int)uVar41 < *(int *)(lVar12 + 0x4c0)) {
      uVar33 = ~uVar41 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    lVar12 = *(longlong *)(lVar12 + 0x4b8);
    pFVar25 = operator_new(0x48);
    pFVar26 = pFVar36;
    if (pFVar25 != (FBVHParticles *)0x0) {
      pFVar26 = Chaos::FBVHParticles::FBVHParticles(pFVar25,param_3);
    }
    pFVar25 = *(FBVHParticles **)(lVar12 + lVar30 * 8);
    if ((pFVar25 != pFVar26) &&
       (*(FBVHParticles **)(lVar12 + lVar30 * 8) = pFVar26, pFVar25 != (FBVHParticles *)0x0)) {
      Chaos::FBVHParticles::~FBVHParticles(pFVar25);
      operator_delete(pFVar25,0x48);
    }
    pTVar31 = *(TArrayCollection **)(lVar12 + lVar30 * 8);
    uVar41 = pTVar31->MSize;
    if ((int)((float)(int)uVar41 * param_8) < (int)uVar41) {
      uVar41 = (int)((float)(int)uVar41 * param_8);
    }
    if ((int)uVar41 < 0) {
      uVar41 = 0;
    }
    Chaos::TArrayCollection::ResizeHelper(pTVar31,uVar41);
    local_278[1] = _UNK_1508ffb58;
    local_278[0] = ___xmm_ffefffffffffffffffefffffffffffff;
    *(int *)&pTVar31[1].field_0x1c = *(int *)&pTVar31[1].field_0x1c + 1;
    local_278[4] = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_278[5] = _UNK_150a9e648;
    local_278[2] = ___xmm_7fefffffffffffffffefffffffffffff;
    local_278[3] = _UNK_1506896f8;
    if ((((FImplicitObject *)(param_4.Reference)->_padding_ != (FImplicitObject *)0x0) &&
        (uVar20 = Chaos::FImplicitObject::GetType((FImplicitObject *)(param_4.Reference)->_padding_)
        , uVar20 == '\x06')) &&
       (plVar13 = (longlong *)(param_4.Reference)->_padding_,
       *(char *)((longlong)plVar13 + 0x16) != '\0')) {
      pdVar27 = (double *)(**(code **)(*plVar13 + 0x90))(plVar13,local_150);
      local_278[0] = *pdVar27 * dVar38;
      local_278[2] = pdVar27[2] * local_2b8;
      local_278[3] = pdVar27[3] * dVar38;
      local_278[5] = pdVar27[5] * local_2b8;
      local_278[1] = pdVar27[1] * dVar40;
      local_278[4] = pdVar27[4] * dVar40;
    }
    pTVar31 = *(TArrayCollection **)(lVar12 + lVar30 * 8);
    if (0 < (int)pTVar31->MSize) {
      lVar37 = 0;
      do {
        uVar34 = (uint)pFVar36;
        uVar33 = ~uVar34 >> 0x1f;
        uVar41 = 0;
        if ((int)uVar34 < pTVar31[1].MArrays.ArrayNum) {
          uVar41 = uVar33;
        }
        if ((uVar41 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar10 = pTVar31[1].MArrays.AllocatorInstance.Data;
        dVar40 = local_2b8 * *(double *)(pFVar10 + lVar37 + 0x10);
        dVar6 = *(double *)(pFVar10 + lVar37 + 8);
        dVar38 = *(double *)(pFVar10 + lVar37);
        uVar41 = 0;
        if ((int)uVar34 < pTVar31[1].MArrays.ArrayNum) {
          uVar41 = uVar33;
        }
        if ((uVar41 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar10 = pTVar31[1].MArrays.AllocatorInstance.Data;
        *(double *)(pFVar10 + lVar37) = (double)CONCAT44(uVar45,uVar44) * dVar38;
        *(double *)(pFVar10 + lVar37 + 8) = (double)CONCAT44(uVar47,uVar46) * dVar6;
        *(double *)(pFVar10 + lVar37 + 0x10) = dVar40;
        lVar14 = *(longlong *)(lVar12 + lVar30 * 8);
        uVar41 = 0;
        if ((int)uVar34 < *(int *)(lVar14 + 0x30)) {
          uVar41 = uVar33;
        }
        if ((uVar41 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pdVar27 = (double *)(*(longlong *)(lVar14 + 0x28) + lVar37);
        lVar28 = 0;
        lVar14 = -(longlong)pdVar27;
        do {
          dVar6 = *pdVar27;
          if ((dVar6 < *(double *)((longlong)local_278 + lVar14 + (longlong)pdVar27)) ||
             (pdVar3 = (double *)((longlong)local_278 + lVar14 + 0x18 + (longlong)pdVar27),
             *pdVar3 <= dVar6 && dVar6 != *pdVar3)) {
            bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4439241659858812563>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                                ,0x16d,
                                "ImplicitShapeDomain.Contains(CollisionParticles->GetX(ParticleIndex))"
                               );
            if (bVar19) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            break;
          }
          lVar28 = lVar28 + 1;
          pdVar27 = pdVar27 + 1;
        } while (lVar28 < 3);
        pTVar31 = *(TArrayCollection **)(lVar12 + lVar30 * 8);
        pFVar36 = (FBVHParticles *)(ulonglong)(uVar34 + 1);
        lVar37 = lVar37 + 0x18;
        if ((int)pTVar31->MSize <= (int)(uVar34 + 1)) break;
        uVar46 = local_2c8._8_4_;
        uVar47 = local_2c8._12_4_;
        uVar44 = local_2c8._0_4_;
        uVar45 = local_2c8._4_4_;
      } while( true );
    }
    if (pTVar31->MSize == 0) {
      Chaos::TArrayCollection::ResizeHelper(pTVar31,1);
      *(int *)&pTVar31[1].field_0x1c = *(int *)&pTVar31[1].field_0x1c + 1;
      local_1c8._16_8_ = 0;
      local_1c8._0_8_ = 0;
      local_1c8._8_8_ = 0;
      Chaos::TParticles<double,3>::SetX
                (*(TParticles<double,3> **)(lVar12 + lVar30 * 8),0,&local_1c8);
    }
    Chaos::FBVHParticles::UpdateAccelerationStructures(*(FBVHParticles **)(lVar12 + lVar30 * 8));
    param_1 = (TPBDRigidParticleHandleImp<double,3,1> *)local_2b0;
  }
  if (GeometryCollectionCollideAll == false) {
    FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                         (*(TGeometryParticlesImp<double,3,0> **)param_1,
                          *(int *)((longlong)param_1 + 8));
    iVar9 = *(int *)((longlong)FVar29 + 0x10);
    local_2d8 = (FImplicitObject *)((longlong)FVar29 + 0x10);
    if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
         ((longlong)FVar29 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0
       ) {
      FVar29 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *)((longlong)FVar29 + 8);
    }
    local_2b0 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar29 + (longlong)iVar9 * 8);
    while( true ) {
      FVar4 = local_2b0;
      if ((int)local_2d8->_padding_ != iVar9) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_2cf);
      }
      if (FVar29 == FVar4) break;
      pFVar16 = *(FShapeInstanceProxy **)FVar29;
      if ((pFVar16->_padding_ & 3) == 0) {
        Chaos::FShapeInstanceProxy::SetSimData(pFVar16,param_5);
      }
      else {
        Chaos::FCollisionData::SetSimData((FCollisionData *)&pFVar16->Proxy,param_5);
      }
      lVar12 = *(longlong *)FVar29;
      uVar41 = *(uint *)(lVar12 + 8);
      if ((uVar41 & 3) == 0) {
        local_208.Word0 = param_6->Word0;
        local_208.Word1 = param_6->Word1;
        local_208.Word2 = param_6->Word2;
        local_208.Word3 = param_6->Word3;
        pIVar15 = *(IPhysicsProxyBase **)&((FCollisionData *)(lVar12 + 0x48))->QueryData;
        Chaos::FCollisionData::SetQueryData((FCollisionData *)(lVar12 + 0x50),&local_208);
        uVar33 = *(uint *)(lVar12 + 0xc);
        *(uint *)(lVar12 + 0xc) = uVar33 | 1;
        if (((uVar33 != 0) || (pIVar15 == (IPhysicsProxyBase *)0x0)) ||
           (pIVar15->Solver == (FPhysicsSolverBase *)0x0)) goto LAB_14412e30a;
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar15->Solver,pIVar15,uVar41 >> 3);
        FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar29 + 8);
      }
      else {
        Chaos::FCollisionData::SetQueryData((FCollisionData *)(lVar12 + 0x48),param_6);
LAB_14412e30a:
        FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar29 + 8);
      }
    }
  }
  else {
    local_2a0.Word1 = 0xffff;
    local_2a0.Word2 = 0;
    local_2a0.Word0 = 0;
    local_2a0.Word3 = 0xffff;
    FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )Chaos::TGeometryParticlesImp<double,3,0>::ShapesArray
                         (*(TGeometryParticlesImp<double,3,0> **)param_1,
                          *(int *)((longlong)param_1 + 8));
    iVar9 = *(int *)((longlong)FVar29 + 0x10);
    piVar2 = (int *)((longlong)FVar29 + 0x10);
    if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
         ((longlong)FVar29 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0
       ) {
      FVar29 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *)((longlong)FVar29 + 8);
    }
    FVar4 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar29 + (longlong)iVar9 * 8);
    while( true ) {
      if (*piVar2 != iVar9) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_2d0);
      }
      if (FVar29 == FVar4) break;
      lVar12 = *(longlong *)FVar29;
      if ((*(uint *)(lVar12 + 8) & 3) == 0) {
        pIVar15 = *(IPhysicsProxyBase **)(lVar12 + 0x48);
        *(byte *)(lVar12 + 0x79) = *(byte *)(lVar12 + 0x79) | 1;
        uVar41 = *(uint *)(lVar12 + 0xc);
        *(uint *)(lVar12 + 0xc) = uVar41 | 1;
        if (((uVar41 == 0) && (pIVar15 != (IPhysicsProxyBase *)0x0)) &&
           (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
          Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                    (pIVar15->Solver,pIVar15,*(uint *)(lVar12 + 8) >> 3);
        }
      }
      else {
        *(byte *)(lVar12 + 0x71) = *(byte *)(lVar12 + 0x71) | 1;
      }
      lVar12 = *(longlong *)FVar29;
      if ((*(uint *)(lVar12 + 8) & 3) == 0) {
        pIVar15 = *(IPhysicsProxyBase **)(lVar12 + 0x48);
        *(undefined1 *)(lVar12 + 0x78) = 0;
        uVar41 = *(uint *)(lVar12 + 0xc);
        *(uint *)(lVar12 + 0xc) = uVar41 | 1;
        if (((uVar41 == 0) && (pIVar15 != (IPhysicsProxyBase *)0x0)) &&
           (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
          Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                    (pIVar15->Solver,pIVar15,*(uint *)(lVar12 + 8) >> 3);
        }
      }
      else {
        *(undefined1 *)(lVar12 + 0x70) = 0;
      }
      pFVar16 = *(FShapeInstanceProxy **)FVar29;
      if ((pFVar16->_padding_ & 3) == 0) {
        Chaos::FShapeInstanceProxy::SetSimData(pFVar16,&local_2a0);
      }
      else {
        Chaos::FCollisionData::SetSimData((FCollisionData *)&pFVar16->Proxy,&local_2a0);
      }
      lVar12 = *(longlong *)FVar29;
      local_288.Word2 = 0;
      local_288.Word3 = 0;
      local_288.Word0 = 0;
      local_288.Word1 = 0;
      uVar41 = *(uint *)(lVar12 + 8);
      if ((uVar41 & 3) == 0) {
        pIVar15 = *(IPhysicsProxyBase **)&((FCollisionData *)(lVar12 + 0x48))->QueryData;
        local_218.Word0 = 0;
        local_218.Word1 = 0;
        local_218.Word2 = 0;
        local_218.Word3 = 0;
        Chaos::FCollisionData::SetQueryData((FCollisionData *)(lVar12 + 0x50),&local_218);
        uVar33 = *(uint *)(lVar12 + 0xc);
        *(uint *)(lVar12 + 0xc) = uVar33 | 1;
        if (((uVar33 != 0) || (pIVar15 == (IPhysicsProxyBase *)0x0)) ||
           (pIVar15->Solver == (FPhysicsSolverBase *)0x0)) goto LAB_14412e217;
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar15->Solver,pIVar15,uVar41 >> 3);
        FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar29 + 8);
      }
      else {
        Chaos::FCollisionData::SetQueryData((FCollisionData *)(lVar12 + 0x48),&local_288);
LAB_14412e217:
        FVar29 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )((longlong)FVar29 + 8);
      }
    }
  }
  puVar21 = (undefined8 *)local_2a8->_padding_;
  if (puVar21 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar21 + 1);
    iVar9 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar9 == 1) && (*(int *)((longlong)puVar21 + 0xc) == 0)) {
      (**(code **)*puVar21)(puVar21,1);
    }
  }
  return;
}

// SetParticleDynamicState @ 14412f960

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
      if ((pFVar1->Bits & 1) == 0) goto LAB_14412f9b8;
    }
    FPBDRigidsEvolutionBase::SetParticleObjectState
              ((FPBDRigidsEvolutionBase *)(param_1->MEvolution).Ptr,param_3,param_2);
    return;
  }
LAB_14412f9b8:
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

// UpdateGTParticleXR @ 144133800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UpdateGTParticleXR(TPBDRigidParticle<double,3> *param_1,TVector<double,3> *param_2,
                  TRotation<double,3> *param_3,bool param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar14 = _UNK_15061cc8c;
  uVar13 = _UNK_15061cc88;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((((param_4) ||
       (dVar4 = *(double *)param_2 - *(double *)&param_1->field_0x20,
       dVar22 = (double)GeometryCollectionPositionUpdateTolerance,
       uVar18 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar19 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar22 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar22)) ||
      (dVar4 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x28,
      uVar18 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar19 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      dVar22 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar22)) ||
     (dVar4 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x30,
     uVar18 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar19 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     bVar16 = false,
     dVar22 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar22)) {
    uVar9 = *(undefined8 *)&param_2->field_0x8;
    bVar16 = true;
    *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)param_2;
    *(undefined8 *)&param_1->field_0x28 = uVar9;
    *(undefined8 *)&param_1->field_0x30 = *(undefined8 *)&param_2->field_0x10;
  }
  dVar4 = (double)(float)*(undefined8 *)&param_1->field_0x48;
  dVar22 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field_0x48 >> 0x20);
  if (param_4) {
LAB_144133921:
    bVar10 = true;
    dVar4 = *(double *)&param_3->field_0x8;
    dVar22 = *(double *)&param_3->field_0x10;
    dVar5 = *(double *)&param_3->field_0x18;
    *(float *)&param_1->field_0x40 = (float)*(double *)param_3;
    *(float *)&param_1->field_0x44 = (float)dVar4;
    *(float *)&param_1->field_0x48 = (float)dVar22;
    *(float *)&param_1->field_0x4c = (float)dVar5;
  }
  else {
    dVar20 = *(double *)&param_3->field_0x10 - dVar4;
    dVar21 = *(double *)&param_3->field_0x18 - dVar22;
    dVar4 = *(double *)&param_3->field_0x10 + dVar4;
    dVar22 = *(double *)&param_3->field_0x18 + dVar22;
    dVar8 = (double)GeometryCollectionRotationUpdateTolerance;
    dVar5 = *(double *)param_3 - (double)*(float *)&param_1->field_0x40;
    dVar6 = *(double *)&param_3->field_0x8 - (double)*(float *)&param_1->field_0x44;
    lVar17 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar14,
                                        SUB84(dVar21,0) & uVar13));
    auVar1._8_4_ = (int)lVar17;
    auVar1._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar12,
                                              SUB84(dVar20,0) & uVar11));
    auVar1._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar15 = movmskpd((int)param_1,auVar1);
    lVar17 = -(ulonglong)
              (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar14,
                                        SUB84(dVar6,0) & uVar13));
    dVar6 = *(double *)param_3 + (double)*(float *)&param_1->field_0x40;
    dVar20 = *(double *)&param_3->field_0x8 + (double)*(float *)&param_1->field_0x44;
    auVar2._8_4_ = (int)lVar17;
    auVar2._0_8_ = -(ulonglong)
                    (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar12,
                                              SUB84(dVar5,0) & uVar11));
    auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar18 = movmskpd(0,auVar2);
    uVar19 = iVar15 << 2 | uVar18;
    if (uVar19 != 0) {
      lVar17 = -(ulonglong)
                (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar14,
                                          SUB84(dVar22,0) & uVar13));
      auVar3._8_4_ = (int)lVar17;
      auVar3._0_8_ = -(ulonglong)
                      (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar12,
                                                SUB84(dVar4,0) & uVar11));
      auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar19 = movmskpd(uVar19,auVar3);
      lVar17 = -(ulonglong)
                (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar14,
                                          SUB84(dVar20,0) & uVar13));
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)
                      (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,
                                                SUB84(dVar6,0) & uVar11));
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      iVar15 = movmskpd(uVar18,auVar7);
      if ((uVar19 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_144133921;
    }
    bVar10 = false;
  }
  if ((!bVar16) && (!bVar10)) {
    return false;
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapeBounds((TGeometryParticle<double,3> *)param_1);
  return true;
}

// UpdateParticleHandleTransform @ 1441339a0

void __cdecl
UpdateParticleHandleTransform
          (FPBDRigidsSolver *param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,
          TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double,3> local_70;
  undefined8 local_48;
  TRotation<double,3> local_38;
  
  uVar2 = *(uint *)&param_2->field_0x8;
  local_48 = *(undefined8 *)&param_3->field_0x30;
  lVar3 = *(longlong *)param_2;
  uVar5 = *(undefined8 *)&param_3->field_0x20;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x30)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x28);
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18) = local_48;
  local_38._0_8_ = *(undefined8 *)param_3;
  local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_3->field_0x10;
  local_38._24_8_ = *(undefined8 *)&param_3->field_0x18;
  Chaos::TGeometryParticleHandleImp<double,3,1>::SetR
            ((TGeometryParticleHandleImp<double,3,1> *)param_2,&local_38,false);
  local_70._16_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            (*(TGeometryParticlesImp<double,3,0> **)param_2,*(int *)&param_2->field_0x8,param_3,
             &local_70);
  return;
}

// UpdateSolverParticlesState @ 144133df0

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
        goto LAB_144133ff0;
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
LAB_144133ff0:
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
        goto LAB_144134110;
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
LAB_144134110:
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

// `dynamic_atexit_destructor_for_'CVarCollisionParticlesPerObjectFractionDefault'' @ 150368c40

void __cdecl _dynamic_atexit_destructor_for__CVarCollisionParticlesPerObjectFractionDefault__(void)

{
  CVarCollisionParticlesPerObjectFractionDefault._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCollisionParticlesPerObjectFractionDefault);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCreateGTParticleForChildren'' @ 150368c60

void __cdecl _dynamic_atexit_destructor_for__CVarCreateGTParticleForChildren__(void)

{
  CVarCreateGTParticleForChildren._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCreateGTParticleForChildren);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEmptyUniqueIndicesOnGT'' @ 150368c80

void __cdecl _dynamic_atexit_destructor_for__CVarEmptyUniqueIndicesOnGT__(void)

{
  CVarEmptyUniqueIndicesOnGT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEmptyUniqueIndicesOnGT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnabledNestedChildTransformUpdates'' @ 150368ca0

void __cdecl _dynamic_atexit_destructor_for__CVarEnabledNestedChildTransformUpdates__(void)

{
  CVarEnabledNestedChildTransformUpdates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnabledNestedChildTransformUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceOverrideGCCollisionSetupForTraces'' @ 150368cc0

void __cdecl _dynamic_atexit_destructor_for__CVarForceOverrideGCCollisionSetupForTraces__(void)

{
  CVarForceOverrideGCCollisionSetupForTraces._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceOverrideGCCollisionSetupForTraces);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionAlwaysGenerateConnectionGraph'' @ 150368ce0

void __cdecl
_dynamic_atexit_destructor_for__CVarGeometryCollectionAlwaysGenerateConnectionGraph__(void)

{
  CVarGeometryCollectionAlwaysGenerateConnectionGraph._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionAlwaysGenerateConnectionGraph);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters'' @ 150368d00

void __cdecl
_dynamic_atexit_destructor_for__CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters__(void)

{
  CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionAlwaysGenerateGTCollisionForClusters);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionAreaBasedDamageThresholdMode'' @ 150368d20

void __cdecl
_dynamic_atexit_destructor_for__CVarGeometryCollectionAreaBasedDamageThresholdMode__(void)

{
  CVarGeometryCollectionAreaBasedDamageThresholdMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionAreaBasedDamageThresholdMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionCollideAll'' @ 150368d40

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionCollideAll__(void)

{
  CVarGeometryCollectionCollideAll._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGeometryCollectionCollideAll);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionDisableGravity'' @ 150368d60

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionDisableGravity__(void)

{
  CVarGeometryCollectionDisableGravity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionDisableGravity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms'' @ 150368d80

void __cdecl
_dynamic_atexit_destructor_for__CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms__(void)

{
  CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionLocalInertiaDropOffDiagonalTerms);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionPositionUpdateTolerance'' @ 150368da0

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionPositionUpdateTolerance__(void)

{
  CVarGeometryCollectionPositionUpdateTolerance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionPositionUpdateTolerance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionRotationUpdateTolerance'' @ 150368dc0

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionRotationUpdateTolerance__(void)

{
  CVarGeometryCollectionRotationUpdateTolerance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionRotationUpdateTolerance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionScaleClusterGeometry'' @ 150368de0

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionScaleClusterGeometry__(void)

{
  CVarGeometryCollectionScaleClusterGeometry._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionScaleClusterGeometry);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionTransformTolerance'' @ 150368e00

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionTransformTolerance__(void)

{
  CVarGeometryCollectionTransformTolerance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionTransformTolerance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCollectionUseRootBrokenFlag'' @ 150368e20

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCollectionUseRootBrokenFlag__(void)

{
  CVarGeometryCollectionUseRootBrokenFlag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGeometryCollectionUseRootBrokenFlag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalMaxSimulatedLevel'' @ 150368e40

void __cdecl _dynamic_atexit_destructor_for__CVarGlobalMaxSimulatedLevel__(void)

{
  CVarGlobalMaxSimulatedLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGlobalMaxSimulatedLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPropagateInternalClusterDisableFlagToChildren'' @ 150368e60

void __cdecl
_dynamic_atexit_destructor_for__CVarPropagateInternalClusterDisableFlagToChildren__(void)

{
  CVarPropagateInternalClusterDisableFlagToChildren._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPropagateInternalClusterDisableFlagToChildren);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReportHighParticleFraction'' @ 150368e80

void __cdecl _dynamic_atexit_destructor_for__CVarReportHighParticleFraction__(void)

{
  CVarReportHighParticleFraction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReportHighParticleFraction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReportNoLevelsetCluster'' @ 150368ea0

void __cdecl _dynamic_atexit_destructor_for__CVarReportNoLevelsetCluster__(void)

{
  CVarReportNoLevelsetCluster._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReportNoLevelsetCluster);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReportTooManyChildrenNum'' @ 150368ec0

void __cdecl _dynamic_atexit_destructor_for__CVarReportTooManyChildrenNum__(void)

{
  CVarReportTooManyChildrenNum._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReportTooManyChildrenNum);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbBuildGeometryForChildrenOnGT'' @ 150368ee0

void __cdecl _dynamic_atexit_destructor_for__CVarbBuildGeometryForChildrenOnGT__(void)

{
  CVarbBuildGeometryForChildrenOnGT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbBuildGeometryForChildrenOnGT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbBuildGeometryForChildrenOnPT'' @ 150368f00

void __cdecl _dynamic_atexit_destructor_for__CVarbBuildGeometryForChildrenOnPT__(void)

{
  CVarbBuildGeometryForChildrenOnPT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbBuildGeometryForChildrenOnPT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbRemoveImplicitsInDynamicCollections'' @ 150368f20

void __cdecl _dynamic_atexit_destructor_for__CVarbRemoveImplicitsInDynamicCollections__(void)

{
  CVarbRemoveImplicitsInDynamicCollections._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarbRemoveImplicitsInDynamicCollections);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 150368f40

void __cdecl
`FRuntimeDataCollector::GetInstance'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  ::Instance.Collectors._72_4_ = 0;
  if (::Instance.Collectors._64_8_ != 0) {
    FMemory::Free((void *)::Instance.Collectors._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDamageCollector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDamageCollector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDamageCollector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'UGCC_LOG'' @ 150368f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__UGCC_LOG__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&UGCC_LOG);
  return;
}

// operator() @ 1504aece0

bool __thiscall
``FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_2>::
operator()'::__l30::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4439241659858807510>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4439241659858807510>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504aed60

bool __thiscall
``FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_2>::
operator()'::__l36::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4439241659858807497>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4439241659858807497>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

