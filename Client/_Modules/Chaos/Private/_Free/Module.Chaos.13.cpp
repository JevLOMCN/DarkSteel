// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 197

// ClothCollisionThicknessName'' @ 140f6a0d0

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
ClothCollisionThicknessName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
                  ClothCollisionThicknessName,L"ClothCollisionThickness");
  return;
}

// CollisionThicknessName'' @ 140f6a0f0

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
CollisionThicknessName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::CollisionThicknessName,
                 L"CollisionThickness");
  return;
}

// EnableSkinnedTriangleMeshCollisionsName'' @ 140f6a110

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
EnableSkinnedTriangleMeshCollisionsName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
                  EnableSkinnedTriangleMeshCollisionsName,L"EnableSkinnedTriangleMeshCollisions");
  return;
}

// FrictionCoefficientName'' @ 140f6a130

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
FrictionCoefficientName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::FrictionCoefficientName
                 ,L"FrictionCoefficient");
  return;
}

// TetherScaleName'' @ 140f6a150

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDLongRangeConstraints::TetherScaleName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDLongRangeConstraints::TetherScaleName,L"TetherScale");
  return;
}

// TetherStiffnessName'' @ 140f6a170

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDLongRangeConstraints::TetherStiffnessName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDLongRangeConstraints::TetherStiffnessName,L"TetherStiffness");
  return;
}

// UseSelfCollisionSubstepsForSkinnedTriangleMeshesName'' @ 140f6a190

void __cdecl
`dynamic_initializer_for_'Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
UseSelfCollisionSubstepsForSkinnedTriangleMeshesName__(void)

{
  ::FName::FName(&Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints::
                  UseSelfCollisionSubstepsForSkinnedTriangleMeshesName,
                 L"UseSelfCollisionSubstepsForSkinnedTriangleMeshes");
  return;
}

// `dynamic_initializer_for_'CVarBoundingBoxMarginForConnectionGraphFiltering'' @ 140f6a1b0

void __cdecl
Chaos::_dynamic_initializer_for__CVarBoundingBoxMarginForConnectionGraphFiltering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBoundingBoxMarginForConnectionGraphFiltering,
             L"p.BoundingBoxMarginForConnectionGraphFiltering",
             &BoundingBoxMarginForConnectionGraphFiltering,
             L"when UseBoundingBoxForConnectionGraphFiltering is on, the margin to use for the oevrlap test [def: 0]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBoundingBoxMarginForConnectionGraphFiltering__);
  return;
}

// `dynamic_initializer_for_'CVarBreakMode'' @ 140f6a200

void __cdecl Chaos::_dynamic_initializer_for__CVarBreakMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBreakMode,L"p.chaos.clustering.breakonlystrained",&GClusterBreakOnlyStrained,
             L"If enabled we only process strained clusters for breaks, if disabled all clusters are traversed and checked"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBreakMode__);
  return;
}

// `dynamic_initializer_for_'CVarChaosExcludeFreeJointInertiaConditioning'' @ 140f6a250

void __cdecl Chaos::_dynamic_initializer_for__CVarChaosExcludeFreeJointInertiaConditioning__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosExcludeFreeJointInertiaConditioning,
             L"p.Chaos.ExcludeFreeJointForInertiaConditioning",&bExcludeFreeJointInertiaConditioning
             ,L"Exclude the effects from free joints when computing inertia conditioning",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosExcludeFreeJointInertiaConditioning__);
  return;
}

// `dynamic_initializer_for_'CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier'' @ 140f6a2a0

void __cdecl
_dynamic_initializer_for__CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier,
             L"p.Chaos.KinematicTriangleMeshCollisions.FalloffMultiplier",
             &KinematicColliderFalloffMultiplier,
             L"Tangential distance away from a triangle (scaled by thickness) beyond which a point isn\'t considered to be kinematically colliding"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier__
        );
  return;
}

// `dynamic_initializer_for_'CVarChaosKinematicTriangleMeshCollisionsISPCEnabled'' @ 140f6a2f0

void __cdecl _dynamic_initializer_for__CVarChaosKinematicTriangleMeshCollisionsISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosKinematicTriangleMeshCollisionsISPCEnabled,
             L"p.Chaos.KinematicTriangleMeshCollisions.ISPC",
             &bChaos_KinematicTriangleMesh_ISPC_Enabled,
             L"Whether to use ISPC optimizations in kinematic triangle mesh collision constraints",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosKinematicTriangleMeshCollisionsMaxTimer'' @ 140f6a340

void __cdecl _dynamic_initializer_for__CVarChaosKinematicTriangleMeshCollisionsMaxTimer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosKinematicTriangleMeshCollisionsMaxTimer,
             L"p.Chaos.KinematicTriangleMeshCollisions.MaxTimer",&KinematicColliderMaxTimer,
             L"Amount of time (in seconds) to remember a kinematic collision connection after it has moved more than Thickness away. Increasing this can reduce jitter at the cost of more computation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsMaxTimer__);
  return;
}

// `dynamic_initializer_for_'CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier'' @ 140f6a390

void __cdecl
_dynamic_initializer_for__CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier,
             L"p.Chaos.KinematicTriangleMeshCollisions.MaxDepthMultiplier",
             &KinematicColliderMaxDepthMultiplier,
             L"Penetration depth beyond which we ignore the kinematic collision (so you don\'t push through the wrong side)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier__
        );
  return;
}

// `dynamic_initializer_for_'CVarChaosLongRangeISPCEnabled'' @ 140f6a3e0

void __cdecl _dynamic_initializer_for__CVarChaosLongRangeISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosLongRangeISPCEnabled,L"p.Chaos.LongRange.ISPC",&bChaos_LongRange_ISPC_Enabled
             ,L"Whether to use ISPC optimizations in long range constraints",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosLongRangeISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosPBDLongRangeConstraintsMinParallelBatchSize'' @ 140f6a430

void __cdecl _dynamic_initializer_for__CVarChaosPBDLongRangeConstraintsMinParallelBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosPBDLongRangeConstraintsMinParallelBatchSize,
             L"p.Chaos.PBDLongRangeConstraints.MinParallelBatchSize",
             &ChaosPBDLongRangeConstraintsMinParallelBatchSize,
             L"The minimum number of long range tethers in a batch to process in parallel.",1);
  atexit(_dynamic_atexit_destructor_for__CVarChaosPBDLongRangeConstraintsMinParallelBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarChaosPlanarISPCEnabled'' @ 140f6a480

void __cdecl _dynamic_initializer_for__CVarChaosPlanarISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosPlanarISPCEnabled,L"p.Chaos.Planar.ISPC",&bChaos_Planar_ISPC_Enabled,
             L"Whether to use ISPC optimizations in Planar constraints",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosPlanarISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosPlanarParallelConstraintCount'' @ 140f6a4d0

void __cdecl Chaos::Softs::_dynamic_initializer_for__CVarChaosPlanarParallelConstraintCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosPlanarParallelConstraintCount,L"p.Chaos.Planar.ParallelConstraintCount",
             &Chaos_Planar_ParallelConstraintCount,
             L"If we have more constraints than this, use parallel-for in Apply.",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosPlanarParallelConstraintCount__);
  return;
}

// `dynamic_initializer_for_'CVarCheckForInterclusterEdgesOnRelease'' @ 140f6a520

void __cdecl Chaos::_dynamic_initializer_for__CVarCheckForInterclusterEdgesOnRelease__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCheckForInterclusterEdgesOnRelease,L"p.Chaos.CheckForInterclusterEdgesOnRelease",
             &bCheckForInterclusterEdgesOnRelease,
             L"Whether to check for intercluster edges when removing a child from its parent cluster so that we can add the particle back into a cluster union."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCheckForInterclusterEdgesOnRelease__);
  return;
}

// `dynamic_initializer_for_'CVarClusterDistance'' @ 140f6a570

void __cdecl Chaos::_dynamic_initializer_for__CVarClusterDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClusterDistance,L"p.ClusterDistanceThreshold",&ClusterDistanceThreshold,
             L"How close a cluster child must be to a contact to break off",0);
  atexit(_dynamic_atexit_destructor_for__CVarClusterDistance__);
  return;
}

// `dynamic_initializer_for_'CVarClusterSnapDistance2'' @ 140f6a5c0

void __cdecl Chaos::_dynamic_initializer_for__CVarClusterSnapDistance2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClusterSnapDistance2,L"p.ClusterSnapDistance",&ClusterSnapDistance,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarClusterSnapDistance2__);
  return;
}

// `dynamic_initializer_for_'CVarClusteringParticleReleaseThrottlingMaxCount'' @ 140f6a610

void __cdecl
Chaos::_dynamic_initializer_for__CVarClusteringParticleReleaseThrottlingMaxCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClusteringParticleReleaseThrottlingMaxCount,
             L"p.Clustering.ParticleReleaseThrottlingMaxCount",
             &ClusteringParticleReleaseThrottlingMaxCount,
             L"Maximum number of active geometry collection to reach before all released clustering disable all released particle instantly"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClusteringParticleReleaseThrottlingMaxCount__);
  return;
}

// `dynamic_initializer_for_'CVarClusteringParticleReleaseThrottlingMinCount'' @ 140f6a660

void __cdecl
Chaos::_dynamic_initializer_for__CVarClusteringParticleReleaseThrottlingMinCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClusteringParticleReleaseThrottlingMinCount,
             L"p.Clustering.ParticleReleaseThrottlingMinCount",
             &ClusteringParticleReleaseThrottlingMinCount,
             L"Minimum number of active geometry collection to reach before clustering start to disable a percentage of the released particle per cluster"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClusteringParticleReleaseThrottlingMinCount__);
  return;
}

// `dynamic_initializer_for_'CVarComputeClusterCollisionStrains'' @ 140f6a6b0

void __cdecl Chaos::_dynamic_initializer_for__CVarComputeClusterCollisionStrains__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarComputeClusterCollisionStrains,L"p.ComputeClusterCollisionStrains",
             &ComputeClusterCollisionStrains,
             L"Whether to use collision constraints when processing clustering.",0);
  atexit(_dynamic_atexit_destructor_for__CVarComputeClusterCollisionStrains__);
  return;
}

// `dynamic_initializer_for_'CVarDeactivateClusterChildren'' @ 140f6a700

void __cdecl Chaos::_dynamic_initializer_for__CVarDeactivateClusterChildren__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeactivateClusterChildren,L"p.DeactivateClusterChildren",
             &DeactivateClusterChildren,
             L"If children should be decativated when broken and put into another cluster.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDeactivateClusterChildren__);
  return;
}

// `dynamic_initializer_for_'CVarDumpClusterAndReleaseStats'' @ 140f6a750

void __cdecl Chaos::_dynamic_initializer_for__CVarDumpClusterAndReleaseStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpClusterAndReleaseStats,L"p.Chaos.Clustering.DumpClusterAndReleaseStats",
             &GDumpClusterAndReleaseStats,
             L"Report the number of cluster processes and released particles per frame, on/off 1/0",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpClusterAndReleaseStats__);
  return;
}

// `dynamic_initializer_for_'CVarGraphPropagationBasedCollisionFactor'' @ 140f6a7a0

void __cdecl Chaos::_dynamic_initializer_for__CVarGraphPropagationBasedCollisionFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGraphPropagationBasedCollisionFactor,L"p.GraphPropagationBasedCollisionFactor",
             &GraphPropagationBasedCollisionFactor,
             L"when p.GraphPropagationBasedCollisionImpulseProcessing is on, the percentage [0-1] of remaining damage that is distributed to the connected pieces"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGraphPropagationBasedCollisionFactor__);
  return;
}

// `dynamic_initializer_for_'CVarGraphPropagationBasedCollisionImpulseProcessing'' @ 140f6a7f0

void __cdecl
Chaos::_dynamic_initializer_for__CVarGraphPropagationBasedCollisionImpulseProcessing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGraphPropagationBasedCollisionImpulseProcessing,
             L"p.GraphPropagationBasedCollisionImpulseProcessing",
             &GraphPropagationBasedCollisionImpulseProcessing,
             L"when processing collision impulse toc ompute strain, pick the closest child from the impact point and propagate using the connection graph [def: 0]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGraphPropagationBasedCollisionImpulseProcessing__);
  return;
}

// `dynamic_initializer_for_'CVarLevelSetResolution2'' @ 140f6a840

void __cdecl Chaos::_dynamic_initializer_for__CVarLevelSetResolution2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelSetResolution2,L"p.MinLevelsetSize",&MinLevelsetSize,
             L"The minimum size on the smallest axis to use a level set",0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelSetResolution2__);
  return;
}

// `dynamic_initializer_for_'CVarLevelsetGhostCells2'' @ 140f6a890

void __cdecl Chaos::_dynamic_initializer_for__CVarLevelsetGhostCells2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLevelsetGhostCells2,L"p.LevelsetGhostCells",&LevelsetGhostCells,
             L"Increase the level set grid by this many ghost cells",0);
  atexit(_dynamic_atexit_destructor_for__CVarLevelsetGhostCells2__);
  return;
}

// `dynamic_initializer_for_'CVarMaxLevelsetDimension2'' @ 140f6a8e0

void __cdecl Chaos::_dynamic_initializer_for__CVarMaxLevelsetDimension2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxLevelsetDimension2,L"p.MaxLevelsetDimension",&MaxLevelsetDimension,
             L"The maximum number of cells on a single level set axis",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxLevelsetDimension2__);
  return;
}

// `dynamic_initializer_for_'CVarMinCleanedPointsBeforeRemovingInternals2'' @ 140f6a930

void __cdecl Chaos::_dynamic_initializer_for__CVarMinCleanedPointsBeforeRemovingInternals2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinCleanedPointsBeforeRemovingInternals2,
             L"p.MinCleanedPointsBeforeRemovingInternals",&MinCleanedPointsBeforeRemovingInternals,
             L"If we only have this many clean points, don\'t bother removing internal points as the object is likely very small"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinCleanedPointsBeforeRemovingInternals2__);
  return;
}

// `dynamic_initializer_for_'CVarMinContactSpeedForStrainEval'' @ 140f6a980

void __cdecl Chaos::_dynamic_initializer_for__CVarMinContactSpeedForStrainEval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinContactSpeedForStrainEval,L"p.chaos.MinContactSpeedForStrainEval",
             &MinContactSpeedForStrainEval,
             L"Minimum speed at the contact before accumulating for strain eval ",0);
  atexit(_dynamic_atexit_destructor_for__CVarMinContactSpeedForStrainEval__);
  return;
}

// `dynamic_initializer_for_'CVarMinImpulseForStrainEval'' @ 140f6a9d0

void __cdecl Chaos::_dynamic_initializer_for__CVarMinImpulseForStrainEval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinImpulseForStrainEval,L"p.chaos.MinImpulseForStrainEval",
             &MinImpulseForStrainEval,
             L"Minimum accumulated impulse before accumulating for strain eval ",0);
  atexit(_dynamic_atexit_destructor_for__CVarMinImpulseForStrainEval__);
  return;
}

// `dynamic_initializer_for_'CVarMinLevelsetDimension2'' @ 140f6aa20

void __cdecl Chaos::_dynamic_initializer_for__CVarMinLevelsetDimension2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinLevelsetDimension2,L"p.MinLevelsetDimension",&MinLevelsetDimension,
             L"The minimum number of cells on a single level set axis",0);
  atexit(_dynamic_atexit_destructor_for__CVarMinLevelsetDimension2__);
  return;
}

// `dynamic_initializer_for_'CVarOnlyUseInterclusterEdgesAttachedToMainParticles'' @ 140f6aa70

void __cdecl
Chaos::_dynamic_initializer_for__CVarOnlyUseInterclusterEdgesAttachedToMainParticles__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnlyUseInterclusterEdgesAttachedToMainParticles,
             L"p.Chaos.OnlyUseInterclusterEdgesAttachedToMainParticles",
             &bOnlyUseInterclusterEdgesAttachedToMainParticles,
             L"If true, an intercluster edge must be directly attached to a main particle for the particle to remain a part of the cluster union."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOnlyUseInterclusterEdgesAttachedToMainParticles__);
  return;
}

// `dynamic_initializer_for_'CVarPerAdvanceBreaksAllowed'' @ 140f6aac0

void __cdecl Chaos::_dynamic_initializer_for__CVarPerAdvanceBreaksAllowed__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerAdvanceBreaksAllowed,L"p.Chaos.Clustering.PerAdvanceBreaksAllowed",
             &GPerAdvanceBreaksAllowed,
             L"Number of breaks allowed to occur for each invocation of AdvanceClustering",0);
  atexit(_dynamic_atexit_destructor_for__CVarPerAdvanceBreaksAllowed__);
  return;
}

// `dynamic_initializer_for_'CVarPerAdvanceBreaksRescheduleLimit'' @ 140f6ab10

void __cdecl Chaos::_dynamic_initializer_for__CVarPerAdvanceBreaksRescheduleLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerAdvanceBreaksRescheduleLimit,
             L"p.Chaos.Clustering.PerAdvanceBreaksRescheduleLimit",&GPerAdvanceBreaksRescheduleLimit
             ,L"Number of breaks allowed to be rescheduled for next frame if any ",0);
  atexit(_dynamic_atexit_destructor_for__CVarPerAdvanceBreaksRescheduleLimit__);
  return;
}

// `dynamic_initializer_for_'CVarRestoreBreakingMomentumPercent'' @ 140f6ab60

void __cdecl Chaos::_dynamic_initializer_for__CVarRestoreBreakingMomentumPercent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRestoreBreakingMomentumPercent,L"p.RestoreBreakingMomentumPercent",
             &RestoreBreakingMomentumPercent,
             L"When a rigid cluster is broken, objects that its in contact with will receive an impulse to restore this percent of their momentum prior to the break."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRestoreBreakingMomentumPercent__);
  return;
}

// `dynamic_initializer_for_'CVarUnionsHaveCollisionParticles'' @ 140f6abb0

void __cdecl Chaos::_dynamic_initializer_for__CVarUnionsHaveCollisionParticles__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUnionsHaveCollisionParticles,L"p.UnionsHaveCollisionParticles",
             &UnionsHaveCollisionParticles,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarUnionsHaveCollisionParticles__);
  return;
}

// `dynamic_initializer_for_'CVarUseBoundingBoxForConnectionGraphFiltering'' @ 140f6ac00

void __cdecl Chaos::_dynamic_initializer_for__CVarUseBoundingBoxForConnectionGraphFiltering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseBoundingBoxForConnectionGraphFiltering,
             L"p.UseBoundingBoxForConnectionGraphFiltering",
             &UseBoundingBoxForConnectionGraphFiltering,
             L"when on, use bounding box overlaps to filter connection during the connection graph generation [def: 0]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseBoundingBoxForConnectionGraphFiltering__);
  return;
}

// `dynamic_initializer_for_'CVarUseConnectivity'' @ 140f6ac50

void __cdecl Chaos::_dynamic_initializer_for__CVarUseConnectivity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseConnectivity,L"p.UseConnectivity",&UseConnectivity,
             L"Whether to use connectivity graph when breaking up clusters",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseConnectivity__);
  return;
}

// `dynamic_initializer_for_'CVarUseContactSpeedForStrainEval'' @ 140f6aca0

void __cdecl Chaos::_dynamic_initializer_for__CVarUseContactSpeedForStrainEval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseContactSpeedForStrainEval,L"p.chaos.UseContactSpeedForStrainEval",
             &bUseContactSpeedForStrainThreshold,
             L"Whether to use contact speed to discard contacts when updating cluster strain (true: use speed, false: use impulse)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseContactSpeedForStrainEval__);
  return;
}

// `dynamic_initializer_for_'CVarUseLevelsetCollision2'' @ 140f6acf0

void __cdecl Chaos::_dynamic_initializer_for__CVarUseLevelsetCollision2__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseLevelsetCollision2,L"p.UseLevelsetCollision",&UseLevelsetCollision,
             L"Whether unioned objects use levelsets",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseLevelsetCollision2__);
  return;
}

// `dynamic_initializer_for_'StatPtr_HandleConnectivityOnReleaseClusterParticle'' @ 140f6ad40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_HandleConnectivityOnReleaseClusterParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_HandleConnectivityOnReleaseClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_HandleConnectivityOnReleaseClusterParticle>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"HandleConnectivityOnReleaseClusterParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_HandleConnectivityOnReleaseClusterParticle,
               *pFVar1,L"TPBDRigidClustering<>::HandleConnectivityOnReleaseClusterParticle",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_ReleaseChildrenParticleAndParents'' @ 140f6add0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_ReleaseChildrenParticleAndParents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_ReleaseChildrenParticleAndParents ==
      (FThreadSafeStaticStat<Chaos::FStat_ReleaseChildrenParticleAndParents>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"ReleaseChildrenParticleAndParents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_ReleaseChildrenParticleAndParents,*pFVar1,
               L"TPBDRigidClustering<>::ReleaseChildrenParticleAndParents","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f6ae60

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f6aef0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f6af80

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f6b010

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

// `dynamic_initializer_for_'StatPtr_STAT_AddParticlesToCluster'' @ 140f6b0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AddParticlesToCluster__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AddParticlesToCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AddParticlesToCluster>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AddParticlesToCluster");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddParticlesToCluster,*pFVar1,
               L"TPBDRigidClustering<>::AddParticlesToCluster","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AdvanceClustering'' @ 140f6b130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AdvanceClustering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AdvanceClustering ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AdvanceClustering>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AdvanceClustering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AdvanceClustering,*pFVar1,
               L"TPBDRigidClustering<>::AdvanceClustering","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f6b1c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f6b250

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f6b2e0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f6b370

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f6b400

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f6b490

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

// `dynamic_initializer_for_'StatPtr_STAT_BreakingModel'' @ 140f6b520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_BreakingModel__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BreakingModel == (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_BreakingModel");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakingModel,*pFVar1,L"BreakingModel",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BreakingModel_AllParticles'' @ 140f6b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_BreakingModel_AllParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BreakingModel_AllParticles ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel_AllParticles>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_BreakingModel_AllParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakingModel_AllParticles,*pFVar1,
               L"BreakingModel_AllParticles","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosClothComputeGeodesicConstraints'' @ 140f6b640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosClothComputeGeodesicConstraints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosClothComputeGeodesicConstraints ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothComputeGeodesicConstraints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosClothComputeGeodesicConstraints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothComputeGeodesicConstraints,
               *pFVar1,L"Chaos Cloth Compute Geodesic Constraints","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CleanupInternalClustersForProxy'' @ 140f6b6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_CleanupInternalClustersForProxy__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CleanupInternalClustersForProxy ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CleanupInternalClustersForProxy>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_CleanupInternalClustersForProxy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanupInternalClustersForProxy,*pFVar1,
               L"FRigidClustering::CleanupInternalClustersForProxy","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClearConnectionGraph'' @ 140f6b760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ClearConnectionGraph__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClearConnectionGraph ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClearConnectionGraph>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClearConnectionGraph");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearConnectionGraph,*pFVar1,
               L"TPBDRigidClustering<>::ClearConnectionGraph","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClusterVisitor'' @ 140f6b7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ClusterVisitor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClusterVisitor == (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterVisitor>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ClusterVisitor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClusterVisitor,*pFVar1,
               L"FRigidClustering::Visitor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ComputeStrainFromCollision'' @ 140f6b880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ComputeStrainFromCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ComputeStrainFromCollision ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeStrainFromCollision>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ComputeStrainFromCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComputeStrainFromCollision,*pFVar1,
               L"ComputeStrainFromCollision","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateClusterParticle'' @ 140f6b910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_CreateClusterParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateClusterParticle>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_CreateClusterParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateClusterParticle,*pFVar1,
               L"TPBDRigidClustering<>::CreateClusterParticle","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateClusterParticleFromClusterChildren'' @ 140f6b9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_CreateClusterParticleFromClusterChildren__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateClusterParticleFromClusterChildren ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateClusterParticleFromClusterChildren>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_CreateClusterParticleFromClusterChildren");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateClusterParticleFromClusterChildren,
               *pFVar1,L"TPBDRigidClustering<>::CreateClusterParticleFromClusterChildren",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeactivateClusterParticle'' @ 140f6ba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_DeactivateClusterParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeactivateClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_DeactivateClusterParticle>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_DeactivateClusterParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeactivateClusterParticle,*pFVar1,
               L"TPBDRigidClustering<>::DeactivateClusterParticle","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation'' @ 140f6bac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_FixConnectivityGraphUsingDelaunayTriangulation>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"STAT_FixConnectivityGraphUsingDelaunayTriangulation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation,*pFVar1,
               L"TPBDRigidClustering<>::FixConnectivityGraphUsingDelaunayTriangulation",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GenerateConnectionGraph'' @ 140f6bb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_GenerateConnectionGraph__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GenerateConnectionGraph ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateConnectionGraph>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_GenerateConnectionGraph");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateConnectionGraph,*pFVar1,
               L"TPBDRigidClustering<>::GenerateConnectionGraph","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GetActiveClusterIndex'' @ 140f6bbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_GetActiveClusterIndex__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GetActiveClusterIndex ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GetActiveClusterIndex>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_GetActiveClusterIndex");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetActiveClusterIndex,*pFVar1,
               L"TPBDRigidClustering<>::GetActiveClusterIndex","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f6bc70

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

// `dynamic_initializer_for_'StatPtr_STAT_PBD_LongRange'' @ 140f6bd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_LongRange__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_LongRange == (FThreadSafeStaticStat<FStat_STAT_PBD_LongRange>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_LongRange");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_LongRange,*pFVar1,
               L"Chaos PBD Long Range Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 140f6bd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_StiffnessApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_StiffnessApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar1,
               L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 140f6be20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_WeightMapApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_WeightMapApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_WeightMapApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_WeightMapApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_WeightMapApplyValues,*pFVar1,
               L"Chaos PBD WeightMap Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f6beb0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f6bf40

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f6bfd0

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

// `dynamic_initializer_for_'StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster'' @ 140f6c060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticlesNoInternalCluster>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ReleaseClusterParticlesNoInternalCluster");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster,
               *pFVar1,L"TPBDRigidClustering<>::ReleaseClusterParticlesNoInternalCluster",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReleaseClusterParticles_LIST'' @ 140f6c0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ReleaseClusterParticles_LIST__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReleaseClusterParticles_LIST ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_LIST>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ReleaseClusterParticles_LIST");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseClusterParticles_LIST,*pFVar1,
               L"TPBDRigidClustering<>::ReleaseClusterParticles(LIST)","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReleaseClusterParticles_STRAIN'' @ 140f6c180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ReleaseClusterParticles_STRAIN__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReleaseClusterParticles_STRAIN ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_STRAIN>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ReleaseClusterParticles_STRAIN");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseClusterParticles_STRAIN,*pFVar1,
               L"TPBDRigidClustering<>::ReleaseClusterParticles(STRAIN)","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RemoveNodeConnections'' @ 140f6c210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_RemoveNodeConnections__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RemoveNodeConnections ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveNodeConnections>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_RemoveNodeConnections");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveNodeConnections,*pFVar1,
               L"TPBDRigidClustering<>::RemoveNodeConnections","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RemoveParticlesFromCluster'' @ 140f6c2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_RemoveParticlesFromCluster__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RemoveParticlesFromCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveParticlesFromCluster>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_RemoveParticlesFromCluster");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveParticlesFromCluster,*pFVar1,
               L"TPBDRigidClustering<>::RemoveParticlesFromCluster","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResetCollisionImpulseArray'' @ 140f6c330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_ResetCollisionImpulseArray__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResetCollisionImpulseArray ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ResetCollisionImpulseArray>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_ResetCollisionImpulseArray");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetCollisionImpulseArray,*pFVar1,
               L"ResetCollisionImpulseArray","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UnionClusterGroups'' @ 140f6c3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UnionClusterGroups__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UnionClusterGroups ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UnionClusterGroups>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UnionClusterGroups");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnionClusterGroups,*pFVar1,
               L"TPBDRigidClustering<>::UnionClusterGroups","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateClusterMassProperties'' @ 140f6c450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateClusterMassProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateClusterMassProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterMassProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateClusterMassProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateClusterMassProperties,*pFVar1,
               L"TPBDRigidClustering<>::UpdateClusterMassProperties()","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren'' @ 140f6c4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterParticlePropertiesFromChildren>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateClusterParticlePropertiesFromChildren");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren,*pFVar1,
               L"TPBDRigidClustering<>::UpdateClusterParticlePropertiesFromChildren",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation'' @ 140f6c570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation>)
      0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateConnectivityGraphUsingDelaunayTriangulation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation,*pFVar1,
               L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingDelaunayTriangulation",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps'' @ 140f6c600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::
_dynamic_initializer_for__StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps>
       )0x0) {
    pFVar1 = ::FName::FName(local_res8,
                            "STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps"
                           );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps,
               *pFVar1,
               L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps"
               ,"STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit'' @ 140f6c690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingPointImplicit>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateConnectivityGraphUsingPointImplicit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit,
               *pFVar1,L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingPointImplicit",
               "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateDirtyImpulses'' @ 140f6c720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateDirtyImpulses__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateDirtyImpulses ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateDirtyImpulses");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDirtyImpulses,*pFVar1,
               L"TPBDRigidClustering<>::Update Dirty Impulses","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometry'' @ 140f6c7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateGeometry__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometry == (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateGeometry");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry,*pFVar1,
               L"TPBDRigidClustering<>::UpdateGeometry","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometry_CopyPoints'' @ 140f6c840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateGeometry_CopyPoints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometry_CopyPoints ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_CopyPoints>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateGeometry_CopyPoints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_CopyPoints,*pFVar1,
               L"TPBDRigidClustering<>::UpdateGeometry_CopyPoints","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometry_GatherObjects'' @ 140f6c8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateGeometry_GatherObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometry_GatherObjects ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_GatherObjects>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateGeometry_GatherObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_GatherObjects,*pFVar1,
               L"TPBDRigidClustering<>::UpdateGeometry_GatherObjects","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometry_GatherPoints'' @ 140f6c960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateGeometry_GatherPoints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometry_GatherPoints ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_GatherPoints>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateGeometry_GatherPoints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_GatherPoints,*pFVar1,
               L"TPBDRigidClustering<>::UpdateGeometry_GatherPoints","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateGeometry_PointsBVH'' @ 140f6c9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateGeometry_PointsBVH__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateGeometry_PointsBVH ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_PointsBVH>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateGeometry_PointsBVH");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_PointsBVH,*pFVar1,
               L"TPBDRigidClustering<>::UpdateGeometry_PointsBVH","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateImpulseStrain'' @ 140f6ca80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateImpulseStrain__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateImpulseStrain ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateImpulseStrain>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateImpulseStrain");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateImpulseStrain,*pFVar1,
               L"TPBDRigidClustering<>::Update Impulse from Strain","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateKinematicProperties'' @ 140f6cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UpdateKinematicProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateKinematicProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateKinematicProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UpdateKinematicProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateKinematicProperties,*pFVar1,
               L"TPBDRigidClustering<>::UpdateKinematicProperties()","STATGROUP_Chaos",
               "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// ConstructItems<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> @ 143c80420

void __cdecl
ConstructItems<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>
          (void *param_1,TPBDRigidParticleHandleImp<double,3,1> **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::TConnectivityEdge<double>,int> @ 143c80930

void __cdecl DefaultConstructItems<Chaos::TConnectivityEdge<double>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<Chaos::FBreakingData,int> @ 143c80960

void __cdecl DefaultConstructItems<Chaos::FBreakingData,int>(void *param_1,int param_2)

{
  double dVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x98);
    do {
      puVar2[-0x11] = 0;
      puVar2[-0x10] = 0;
      puVar2[-0xf] = 0;
      *(undefined4 *)(puVar2 + -0x13) = 1;
      puVar2[-0x12] = 0;
      dVar1 = UE::Math::TQuat<double>::Identity.Y;
      puVar2[-0xd] = UE::Math::TQuat<double>::Identity.X;
      puVar2[-0xc] = dVar1;
      dVar1 = UE::Math::TQuat<double>::Identity.W;
      puVar2[-0xb] = UE::Math::TQuat<double>::Identity.Z;
      puVar2[-10] = dVar1;
      puVar2[-9] = 0;
      puVar2[-8] = 0;
      puVar2[-7] = 0;
      puVar2[-6] = 0;
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0xffffffff;
      *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Chaos::FCrumblingData,int> @ 143c80a30

void __cdecl DefaultConstructItems<Chaos::FCrumblingData,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x98);
    do {
      *(undefined4 *)(puVar3 + -0x13) = 1;
      puVar3[-0x12] = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar3[-0x11] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar3[-0x10] = uVar1;
      puVar3[-0xf] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TQuat<double>::Identity.Y;
      puVar3[-0xd] = UE::Math::TQuat<double>::Identity.X;
      puVar3[-0xc] = dVar2;
      dVar2 = UE::Math::TQuat<double>::Identity.W;
      puVar3[-0xb] = UE::Math::TQuat<double>::Identity.Z;
      puVar3[-10] = dVar2;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar3[-9] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar3[-8] = uVar1;
      puVar3[-7] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar3[-6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar3[-5] = uVar1;
      puVar3[-4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0x1a;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Chaos::FCrumblingData,int> @ 143c80b50

void __cdecl DestructItems<Chaos::FCrumblingData,int>(FCrumblingData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Children;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int> @ 143c80ba0

void __cdecl
DestructItems<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

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

// DestructItems<TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>,int> @ 143c80be0

void __cdecl
DestructItems<TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>,int>
          (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
           *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Hash).SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo_&&>_> @ 143c81c10

FSetElementId __thiscall
TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo_&&>_>
          (void *this,
          TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::UnionFindInfo_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar10 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar4 = *(int *)((longlong)this + 8);
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar4 - *(int *)((longlong)this + 0x34) != 1) && (iVar4 != *(int *)((longlong)this + 0x34)))
  {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)this) == uVar6) {
          bVar10 = iVar4 != -1;
          if (bVar10) {
            memmove((void *)((longlong)iVar4 * 0x20 + *(longlong *)this),local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)this);
      } while (iVar4 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar5 = *(int *)((longlong)this + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindClosestPointAndBaryOnTriangle<float,3> @ 143c82860

TVector<float,3> * __cdecl
Chaos::FindClosestPointAndBaryOnTriangle<float,3>
          (TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          TVector<float,3> *param_2,TVector<float,3> *param_3,TVector<float,3> *param_4,
          TVector<float,3> *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TVector<float,3> *local_c8;
  TVector<float,3> *local_c0;
  TVector<float,3> *local_b8;
  TVector<float,3> *local_b0;
  
  fVar5 = __real_3f800000;
  fVar11 = *(float *)param_1;
  fVar12 = *(float *)&param_1->field_0x4;
  fVar9 = *(float *)&param_1->field_0x8;
  local_c8 = param_5;
  fVar7 = *(float *)param_2 - fVar11;
  fVar13 = *(float *)&param_3->field_0x8 - fVar9;
  fVar10 = *(float *)&param_3->field_0x8 - *(float *)&param_2->field_0x8;
  fVar17 = *(float *)&param_2->field_0x4 - fVar12;
  fVar15 = *(float *)param_3 - *(float *)param_2;
  fVar14 = *(float *)param_3 - fVar11;
  fVar16 = *(float *)&param_2->field_0x8 - fVar9;
  fVar3 = *(float *)&param_4->field_0x4 - fVar12;
  fVar9 = *(float *)&param_4->field_0x8 - fVar9;
  fVar8 = *(float *)&param_3->field_0x4 - *(float *)&param_2->field_0x4;
  fVar12 = *(float *)&param_3->field_0x4 - fVar12;
  fVar4 = fVar7 * fVar7 + fVar17 * fVar17 + fVar16 * fVar16;
  fVar2 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar6 = (*(float *)param_4 - fVar11) * fVar7 + fVar3 * fVar17 + fVar9 * fVar16;
  fVar11 = (*(float *)param_4 - fVar11) * fVar14 + fVar3 * fVar12 + fVar9 * fVar13;
  local_b0 = param_4;
  if (__real_322bcc77 <= fVar4) {
    if (fVar2 < __real_322bcc77) {
      *(undefined4 *)&param_5->field_0x8 = 0;
      fVar12 = __real_3f800000;
      fVar9 = fVar6 / fVar4;
      if (__real_3f800000 <= fVar6 / fVar4) {
        fVar9 = __real_3f800000;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      *(float *)&param_5->field_0x4 = fVar9;
      fVar12 = fVar12 - fVar9;
      *(float *)param_5 = fVar12;
      fVar5 = *(float *)param_1;
      fVar2 = *(float *)param_2;
      fVar11 = *(float *)&param_1->field_0x8;
      fVar3 = *(float *)&param_2->field_0x8;
      *(float *)&__return_storage_ptr__->field_0x4 =
           fVar9 * *(float *)&param_2->field_0x4 + fVar12 * *(float *)&param_1->field_0x4;
      fVar11 = fVar12 * fVar11 + fVar9 * fVar3;
      *(float *)__return_storage_ptr__ = fVar12 * fVar5 + fVar9 * fVar2;
      goto LAB_143c82f93;
    }
    fVar9 = fVar12 * fVar17 + fVar14 * fVar7 + fVar13 * fVar16;
    fVar12 = fVar2 * fVar4 - fVar9 * fVar9;
    if (__real_322bcc77 <= fVar12) {
      fVar7 = fVar12 * __real_b8d1b717;
      fVar3 = fVar11 * fVar4 - fVar9 * fVar6;
      fVar9 = fVar6 * fVar2 - fVar9 * fVar11;
      if (fVar12 * __real_3f800347 < fVar3 + fVar9) {
        if (fVar9 < fVar7) {
          if (fVar11 < fVar2) {
            *(undefined4 *)&param_5->field_0x4 = 0;
            fVar12 = fVar11 / fVar2;
            if (fVar5 <= fVar11 / fVar2) {
              fVar12 = fVar5;
            }
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
            *(float *)&param_5->field_0x8 = fVar12;
            fVar5 = fVar5 - fVar12;
            *(float *)param_5 = fVar5;
            fVar11 = *(float *)&param_1->field_0x8;
            fVar9 = *(float *)&param_3->field_0x8;
            fVar2 = *(float *)param_3;
            fVar3 = *(float *)param_1;
            *(float *)&__return_storage_ptr__->field_0x4 =
                 fVar12 * *(float *)&param_3->field_0x4 + fVar5 * *(float *)&param_1->field_0x4;
            *(float *)&__return_storage_ptr__->field_0x8 = fVar12 * fVar9 + fVar5 * fVar11;
            *(float *)__return_storage_ptr__ = fVar12 * fVar2 + fVar5 * fVar3;
            return __return_storage_ptr__;
          }
LAB_143c82d92:
          local_c0 = param_2;
          local_b8 = param_3;
          `Chaos::FindClosestPointAndBaryOnTriangle<float,3>'::__l2::<lambda_3>::operator()
                    (&local_c8,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        if ((fVar7 <= fVar3) || (fVar4 <= fVar6)) goto LAB_143c82d92;
        *(undefined4 *)&param_5->field_0x8 = 0;
        fVar11 = __real_3f800000;
        fVar12 = fVar6 / fVar4;
        if (__real_3f800000 <= fVar6 / fVar4) {
          fVar12 = __real_3f800000;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *(float *)&param_5->field_0x4 = fVar12;
        fVar11 = fVar11 - fVar12;
        *(float *)param_5 = fVar11;
        fVar9 = *(float *)&param_1->field_0x4;
        fVar5 = *(float *)&param_1->field_0x8;
        fVar2 = *(float *)&param_2->field_0x4;
        fVar3 = *(float *)&param_2->field_0x8;
        *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_2 + fVar11 * *(float *)param_1;
        fVar2 = fVar11 * fVar9 + fVar12 * fVar2;
        fVar11 = fVar11 * fVar5 + fVar12 * fVar3;
      }
      else if (fVar7 <= fVar9) {
        if (fVar3 < fVar7) {
          *(undefined4 *)&param_5->field_0x8 = 0;
          fVar11 = __real_3f800000;
          fVar12 = fVar6 / fVar4;
          if (__real_3f800000 <= fVar6 / fVar4) {
            fVar12 = __real_3f800000;
          }
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          *(float *)&param_5->field_0x4 = fVar12;
          fVar11 = fVar11 - fVar12;
          *(float *)param_5 = fVar11;
          fVar9 = *(float *)&param_1->field_0x8;
          fVar5 = *(float *)&param_2->field_0x8;
          fVar2 = *(float *)param_2;
          fVar3 = *(float *)param_1;
          *(float *)&__return_storage_ptr__->field_0x4 =
               fVar11 * *(float *)&param_1->field_0x4 + fVar12 * *(float *)&param_2->field_0x4;
          *(float *)&__return_storage_ptr__->field_0x8 = fVar12 * fVar5 + fVar11 * fVar9;
          *(float *)__return_storage_ptr__ = fVar12 * fVar2 + fVar11 * fVar3;
          return __return_storage_ptr__;
        }
        fVar3 = (__real_3f800000 / fVar12) * fVar3;
        fVar9 = (__real_3f800000 / fVar12) * fVar9;
        *(float *)&param_5->field_0x8 = fVar3;
        *(float *)&param_5->field_0x4 = fVar9;
        fVar12 = (fVar5 - fVar9) - fVar3;
        *(float *)param_5 = fVar12;
        fVar11 = fVar12 * *(float *)&param_1->field_0x8 + fVar9 * *(float *)&param_2->field_0x8 +
                 fVar3 * *(float *)&param_3->field_0x8;
        fVar2 = fVar12 * *(float *)&param_1->field_0x4 + fVar9 * *(float *)&param_2->field_0x4 +
                fVar3 * *(float *)&param_3->field_0x4;
        *(float *)__return_storage_ptr__ =
             fVar12 * *(float *)param_1 + fVar9 * *(float *)param_2 + fVar3 * *(float *)param_3;
      }
      else {
        if ((fVar3 < fVar7) && (0.0 < fVar6)) {
          *(undefined4 *)&param_5->field_0x8 = 0;
          fVar11 = __real_3f800000;
          fVar12 = fVar6 / fVar4;
          if (__real_3f800000 <= fVar6 / fVar4) {
            fVar12 = __real_3f800000;
          }
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          *(float *)&param_5->field_0x4 = fVar12;
          fVar11 = fVar11 - fVar12;
          *(float *)param_5 = fVar11;
          fVar3 = fVar11 * *(float *)&param_1->field_0x4;
          fVar4 = fVar11 * *(float *)&param_1->field_0x8;
          fVar9 = fVar12 * *(float *)&param_2->field_0x4;
          fVar2 = fVar12 * *(float *)&param_2->field_0x8;
          *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_2 + fVar11 * *(float *)param_1
          ;
          goto LAB_143c82bc7;
        }
        *(undefined4 *)&param_5->field_0x4 = 0;
        fVar12 = fVar11 / fVar2;
        if (fVar5 <= fVar11 / fVar2) {
          fVar12 = fVar5;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *(float *)&param_5->field_0x8 = fVar12;
        fVar5 = fVar5 - fVar12;
        *(float *)param_5 = fVar5;
        fVar11 = *(float *)&param_1->field_0x4;
        fVar9 = *(float *)&param_1->field_0x8;
        fVar2 = *(float *)&param_3->field_0x4;
        fVar3 = *(float *)&param_3->field_0x8;
        *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_3 + fVar5 * *(float *)param_1;
        fVar2 = fVar5 * fVar11 + fVar12 * fVar2;
        fVar11 = fVar5 * fVar9 + fVar12 * fVar3;
      }
    }
    else {
      if (fVar2 < fVar15 * fVar15 + fVar8 * fVar8 + fVar10 * fVar10) goto LAB_143c82d92;
      if (fVar4 < fVar2) {
        *(undefined4 *)&param_5->field_0x4 = 0;
        fVar12 = fVar11 / fVar2;
        if (fVar5 <= fVar11 / fVar2) {
          fVar12 = fVar5;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *(float *)&param_5->field_0x8 = fVar12;
        fVar5 = fVar5 - fVar12;
        *(float *)param_5 = fVar5;
        fVar3 = fVar5 * *(float *)&param_1->field_0x4;
        fVar4 = fVar5 * *(float *)&param_1->field_0x8;
        fVar9 = fVar12 * *(float *)&param_3->field_0x4;
        fVar2 = fVar12 * *(float *)&param_3->field_0x8;
        *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_3 + fVar5 * *(float *)param_1;
LAB_143c82bc7:
        *(float *)&__return_storage_ptr__->field_0x4 = fVar9 + fVar3;
        *(float *)&__return_storage_ptr__->field_0x8 = fVar2 + fVar4;
        return __return_storage_ptr__;
      }
      *(undefined4 *)&param_5->field_0x8 = 0;
      fVar11 = __real_3f800000;
      fVar12 = fVar6 / fVar4;
      if (__real_3f800000 <= fVar6 / fVar4) {
        fVar12 = __real_3f800000;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      *(float *)&param_5->field_0x4 = fVar12;
      fVar11 = fVar11 - fVar12;
      *(float *)param_5 = fVar11;
      fVar9 = *(float *)&param_1->field_0x4;
      fVar5 = *(float *)&param_1->field_0x8;
      fVar2 = *(float *)&param_2->field_0x4;
      fVar3 = *(float *)&param_2->field_0x8;
      *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_2 + fVar11 * *(float *)param_1;
      fVar2 = fVar11 * fVar9 + fVar12 * fVar2;
      fVar11 = fVar11 * fVar5 + fVar12 * fVar3;
    }
  }
  else {
    bVar1 = fVar2 < __real_322bcc77;
    *(undefined4 *)&param_5->field_0x4 = 0;
    fVar12 = __real_3f800000;
    if (bVar1) {
      *(undefined4 *)param_5 = 0x3f800000;
      *(undefined4 *)&param_5->field_0x8 = 0;
      *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&param_1->field_0x8;
      return __return_storage_ptr__;
    }
    fVar9 = fVar11 / fVar2;
    if (__real_3f800000 <= fVar11 / fVar2) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(float *)&param_5->field_0x8 = fVar9;
    fVar12 = fVar12 - fVar9;
    *(float *)param_5 = fVar12;
    fVar11 = *(float *)&param_1->field_0x4;
    fVar5 = *(float *)&param_1->field_0x8;
    fVar2 = *(float *)&param_3->field_0x4;
    fVar3 = *(float *)&param_3->field_0x8;
    *(float *)__return_storage_ptr__ = fVar12 * *(float *)param_1 + fVar9 * *(float *)param_3;
    fVar2 = fVar12 * fVar11 + fVar9 * fVar2;
    fVar11 = fVar12 * fVar5 + fVar9 * fVar3;
  }
  *(float *)&__return_storage_ptr__->field_0x4 = fVar2;
LAB_143c82f93:
  *(float *)&__return_storage_ptr__->field_0x8 = fVar11;
  return __return_storage_ptr__;
}

// GenericThrottleReleasedParticlesIfNecessary<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_> @ 143c83150

void __cdecl
Chaos::`anonymous_namespace'::
GenericThrottleReleasedParticlesIfNecessary<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,FRigidClustering *param_2)

{
  FScriptContainerElement *_Dst;
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  FPBDRigidsSOAs *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  float fVar10;
  int local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res20;
  
  if ((-1 < (param_2->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount) &&
     (-1 < (param_2->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount)) {
    fVar10 = GetRatioOfReleasedParticlesToDisable(param_2->MEvolution);
    iVar4 = (int)(fVar10 * (float)param_1->ArrayNum);
    if (0 < iVar4) {
      iVar6 = 0;
      local_res10 = 0;
      for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < param_1->ArrayNum)); uVar8 = uVar8 + 1) {
        if (((int)uVar8 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = local_res10, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
        if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          iVar6 = iVar6 + 1;
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                    *)&param_2->MomentumRestoringDataByParticle,
                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar1);
          FPBDRigidsEvolutionBase::DisableParticle
                    ((FPBDRigidsEvolutionBase *)param_2->MEvolution,pTVar1);
          pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
            pTVar9 = pTVar1;
          }
          if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ::Remove(&param_2->TopLevelClusterParents,
                     (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar9);
            local_res20 = pTVar9;
            if (*(int *)&(param_2->TopLevelClusterParentsStrained).field_0x8 !=
                *(int *)&(param_2->TopLevelClusterParentsStrained).field_0x34) {
              uVar5 = ((uint)((ulonglong)pTVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar9 >> 4))
                      * -0x7a143595;
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
              ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                        ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                          *)&param_2->TopLevelClusterParentsStrained,uVar5 >> 0x10 ^ uVar5,
                         (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_res20);
            }
            TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::Remove((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                      *)&param_2->MChildren,
                     (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar9);
          }
          pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
            pTVar9 = pTVar1;
          }
          this = (FPBDRigidsSOAs *)param_2->MEvolution->_padding_;
          if (((pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                 (&this->ActiveParticlesMapArray,
                                  (TPBDRigidParticleHandleImp<double,3,1> *)pTVar9), !bVar3)) &&
             (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                (&this->MovingKinematicsMapArray,
                                 (TPBDRigidParticleHandleImp<double,3,1> *)pTVar9), !bVar3)) {
            FPBDRigidsSOAs::
            AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                      (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar9,
                       &this->TransientDirtyMapArray);
            if (CVars::bChaosSolverCheckParticleViews != false) {
              FPBDRigidsSOAs::CheckParticleViewMaskImpl(this,pTVar1);
            }
            FPBDRigidsSOAs::UpdateViews(this);
          }
          uVar5 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
          iVar7 = param_1->ArrayNum + ~uVar8;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
          }
          param_1->ArrayNum = param_1->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          uVar8 = uVar8 - 1;
          local_res10 = iVar6;
        }
        if (iVar4 <= iVar6) {
          return;
        }
      }
    }
  }
  return;
}

// GenericThrottleReleasedParticlesIfNecessary<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_> @ 143c83410

void __cdecl
Chaos::`anonymous_namespace'::
GenericThrottleReleasedParticlesIfNecessary<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
          (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
           *param_1,FRigidClustering *param_2)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  FPBDRigidsSOAs *this;
  int iVar2;
  bool bVar3;
  uint uVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_30;
  
  if ((-1 < (param_2->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount) &&
     (-1 < (param_2->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount)) {
    fVar8 = GetRatioOfReleasedParticlesToDisable(param_2->MEvolution);
    iVar6 = (int)(fVar8 * (float)(*(int *)&(param_1->Elements).field_0x8 -
                                 *(int *)&(param_1->Elements).field_0x34));
    if (0 < iVar6) {
      iVar7 = 0;
      TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_58,param_1);
      if (local_3c < *(int *)(local_48 + 0x18)) {
        do {
          iVar2 = local_3c;
          pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)
                    (*(longlong *)local_58._0_8_ + (longlong)local_3c * 0x10);
          if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            iVar7 = iVar7 + 1;
            TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                      *)&param_2->MomentumRestoringDataByParticle,
                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar1);
            FPBDRigidsEvolutionBase::DisableParticle
                      ((FPBDRigidsEvolutionBase *)param_2->MEvolution,pTVar1);
            pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (2 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
              pTVar5 = pTVar1;
            }
            if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::Remove(&param_2->TopLevelClusterParents,
                       (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5);
              local_res10 = pTVar5;
              if (*(int *)&(param_2->TopLevelClusterParentsStrained).field_0x8 !=
                  *(int *)&(param_2->TopLevelClusterParentsStrained).field_0x34) {
                uVar4 = ((uint)((ulonglong)pTVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar5 >> 4)
                        ) * -0x7a143595;
                uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                          ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                            *)&param_2->TopLevelClusterParentsStrained,uVar4 >> 0x10 ^ uVar4,
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_res10);
              }
              TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
              ::Remove((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&param_2->MChildren,
                       (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5);
            }
            pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
              pTVar5 = pTVar1;
            }
            this = (FPBDRigidsSOAs *)param_2->MEvolution->_padding_;
            if (((pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                   (&this->ActiveParticlesMapArray,
                                    (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5), !bVar3)) &&
               (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                                  (&this->MovingKinematicsMapArray,
                                   (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5), !bVar3)) {
              FPBDRigidsSOAs::
              AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,
                         &this->TransientDirtyMapArray);
              if (CVars::bChaosSolverCheckParticleViews != false) {
                FPBDRigidsSOAs::CheckParticleViewMaskImpl(this,pTVar1);
              }
              FPBDRigidsSOAs::UpdateViews(this);
            }
            TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_30,iVar2);
          }
          if (iVar6 <= iVar7) {
            return;
          }
          local_40 = local_40 & ~local_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
        } while (local_3c < *(int *)(local_48 + 0x18));
      }
    }
  }
  return;
}

// GetConcreteProxy<Chaos::FClusterUnionPhysicsProxy> @ 143c83640

FClusterUnionPhysicsProxy * __cdecl
Chaos::GetConcreteProxy<Chaos::FClusterUnionPhysicsProxy>
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  FClusterUnionPhysicsProxy *pFVar1;
  FClusterUnionPhysicsProxy *pFVar2;
  
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = (FClusterUnionPhysicsProxy *)
             TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                       ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    if (pFVar1 != (FClusterUnionPhysicsProxy *)0x0) {
      pFVar2 = (FClusterUnionPhysicsProxy *)0x0;
      if (*(EPhysicsProxyType *)((longlong)&pFVar1->_padding_ + 4) == ClusterUnionProxy) {
        pFVar2 = pFVar1;
      }
      return pFVar2;
    }
  }
  return (FClusterUnionPhysicsProxy *)0x0;
}

// GetConcreteProxy<FGeometryCollectionPhysicsProxy> @ 143c83680

FGeometryCollectionPhysicsProxy * __cdecl
Chaos::GetConcreteProxy<FGeometryCollectionPhysicsProxy>
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = (FGeometryCollectionPhysicsProxy *)
             TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                       ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    if (pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0) {
      pFVar2 = (FGeometryCollectionPhysicsProxy *)0x0;
      if (*(EPhysicsProxyType *)&pFVar1->field_0x1c == GeometryCollectionType) {
        pFVar2 = pFVar1;
      }
      return pFVar2;
    }
  }
  return (FGeometryCollectionPhysicsProxy *)0x0;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l24::<lambda_3>_>_>_>_> @ 143c839d0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>_>_>
          param_4)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_143c83ac3:
      if (iVar15 == 0) {
        iVar9 = param_2 + -1;
        lVar10 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar16 = param_1 + lVar10;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
            iVar14 = 0;
            TVar4 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar16->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            pTVar16->_s_1 = TVar4;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar6;
            if (1 < iVar9) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar9) {
                  fVar2 = *(float *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
                  pfVar1 = (float *)((longlong)param_1 + (longlong)iVar15 * 0x10 + 0x24);
                  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                lVar12 = (longlong)iVar8;
                lVar11 = (longlong)iVar14;
                fVar2 = *(float *)((longlong)param_1 + lVar12 * 0x10 + 4);
                pfVar1 = (float *)((longlong)param_1 + lVar11 * 0x10 + 4);
                if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
                TVar4 = param_1[lVar11]._s_1;
                uVar5 = *(undefined8 *)(param_1[lVar11].ElementData.Pad + 8);
                uVar6 = *(undefined8 *)(param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar11]._s_1 = param_1[lVar12]._s_1;
                *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar6;
                param_1[lVar12]._s_1 = TVar4;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar5;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar10 = lVar10 + -1;
            pTVar16 = pTVar16 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar15 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      fVar2 = *(float *)((longlong)param_1 + (longlong)iVar13 * 0x10 + 4);
      pfVar1 = (float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 0x24);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar13;
    lVar10 = (longlong)iVar8;
    fVar2 = *(float *)((longlong)param_1 + lVar11 * 0x10 + 4);
    pfVar1 = (float *)((longlong)param_1 + lVar10 * 0x10 + 4);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto LAB_143c83ac3;
    TVar4 = param_1[lVar10]._s_1;
    uVar5 = *(undefined8 *)(param_1[lVar10].ElementData.Pad + 8);
    uVar6 = *(undefined8 *)(param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar10]._s_1 = param_1[lVar11]._s_1;
    *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar6;
    iVar9 = iVar13 * 2 + 1;
    param_1[lVar11]._s_1 = TVar4;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar5;
    iVar8 = iVar13;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<`Chaos::FRigidClustering::AdvanceClustering'::__l53::<lambda_2>_>_>_>_> @ 143c83ba0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_143c83cb0:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
            pTVar14->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) = uVar2;
            iVar15 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar15 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(longlong *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x38) <
                      *(longlong *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 8)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar12 = (longlong)iVar15;
                pTVar1 = param_1 + iVar10;
                if (*(longlong *)((pTVar1->ElementData).Pad + 8) <=
                    *(longlong *)((longlong)param_1 + lVar12 * 0x18 + 8)) break;
                uVar4 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10);
                TVar5 = param_1[lVar12]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar12]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar4;
                *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar2;
                iVar15 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(longlong *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x38) <
          *(longlong *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8)) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar8;
    pTVar14 = param_1 + iVar13;
    if (*(longlong *)((pTVar14->ElementData).Pad + 8) <=
        *(longlong *)((longlong)param_1 + lVar11 * 0x18 + 8)) goto LAB_143c83cb0;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar9 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10);
    TVar5 = param_1[lVar11]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar11]._s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    pTVar14->_s_1 = TVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// HeapSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>_>_> @ 143c83dc0

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
          (TTriangleCollisionPoint<float> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_17_::<lambda_2>_>
          param_4)

{
  TTriangleCollisionPoint<float> *pTVar1;
  TTriangleCollisionPoint<float> *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined3 uVar13;
  int iVar14;
  EContactType EVar15;
  undefined3 uVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  TTriangleCollisionPoint<float> *pTVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar18) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
LAB_143c83f01:
      if (iVar25 == 0) {
        iVar20 = param_2 + -1;
        lVar21 = (longlong)iVar20;
        if (0 < iVar20) {
          pTVar22 = param_1 + lVar21;
          do {
            uVar13 = *(undefined3 *)&pTVar22->field_0x1;
            iVar24 = pTVar22->Indices[0];
            uVar7 = *(undefined8 *)(pTVar22->Indices + 1);
            uVar5 = *(undefined8 *)&(param_1->Normal).field_0x8;
            EVar15 = param_1->ContactType;
            uVar16 = *(undefined3 *)&param_1->field_0x1;
            iVar19 = param_1->Indices[0];
            uVar8 = *(undefined8 *)(param_1->Indices + 1);
            uVar9 = *(undefined8 *)((param_1->Bary).V + 1);
            uVar10 = *(undefined8 *)((param_1->Bary).V + 3);
            uVar11 = *(undefined8 *)&(param_1->Location).field_0x4;
            uVar12 = *(undefined8 *)&param_1->Normal;
            param_1->ContactType = pTVar22->ContactType;
            *(undefined3 *)&param_1->field_0x1 = uVar13;
            param_1->Indices[0] = iVar24;
            *(undefined8 *)(param_1->Indices + 1) = uVar7;
            uVar7 = *(undefined8 *)((pTVar22->Bary).V + 3);
            *(undefined8 *)((param_1->Bary).V + 1) = *(undefined8 *)((pTVar22->Bary).V + 1);
            *(undefined8 *)((param_1->Bary).V + 3) = uVar7;
            uVar7 = *(undefined8 *)&pTVar22->Normal;
            *(undefined8 *)&(param_1->Location).field_0x4 =
                 *(undefined8 *)&(pTVar22->Location).field_0x4;
            *(undefined8 *)&param_1->Normal = uVar7;
            *(undefined8 *)&(param_1->Normal).field_0x8 =
                 *(undefined8 *)&(pTVar22->Normal).field_0x8;
            pTVar22->ContactType = EVar15;
            *(undefined3 *)&pTVar22->field_0x1 = uVar16;
            pTVar22->Indices[0] = iVar19;
            *(undefined8 *)(pTVar22->Indices + 1) = uVar8;
            *(undefined8 *)((pTVar22->Bary).V + 1) = uVar9;
            *(undefined8 *)((pTVar22->Bary).V + 3) = uVar10;
            *(undefined8 *)&(pTVar22->Location).field_0x4 = uVar11;
            *(undefined8 *)&pTVar22->Normal = uVar12;
            *(undefined8 *)&(pTVar22->Normal).field_0x8 = uVar5;
            iVar24 = 0;
            if (1 < iVar20) {
              do {
                iVar25 = iVar24 * 2;
                iVar19 = iVar25 + 1;
                if (iVar25 + 2 < iVar20) {
                  if (param_1[(longlong)iVar25 + 2].Phi <= param_1[iVar19].Phi &&
                      param_1[iVar19].Phi != param_1[(longlong)iVar25 + 2].Phi) {
                    iVar19 = iVar25;
                  }
                  iVar19 = iVar19 + 1;
                }
                if (param_1[iVar19].Phi < param_1[iVar24].Phi ||
                    param_1[iVar19].Phi == param_1[iVar24].Phi) break;
                pTVar1 = param_1 + iVar19;
                uVar13 = *(undefined3 *)&pTVar1->field_0x1;
                iVar25 = pTVar1->Indices[0];
                uVar7 = *(undefined8 *)(pTVar1->Indices + 1);
                uVar5 = *(undefined8 *)&param_1[iVar24].Normal.field_0x8;
                pTVar2 = param_1 + iVar24;
                EVar15 = pTVar2->ContactType;
                uVar16 = *(undefined3 *)&pTVar2->field_0x1;
                iVar23 = pTVar2->Indices[0];
                uVar8 = *(undefined8 *)(pTVar2->Indices + 1);
                uVar9 = *(undefined8 *)(param_1[iVar24].Bary.V + 1);
                uVar10 = *(undefined8 *)(param_1[iVar24].Bary.V + 3);
                puVar3 = &param_1[iVar24].Location.field_0x4;
                uVar11 = *(undefined8 *)puVar3;
                uVar12 = *(undefined8 *)(puVar3 + 8);
                pTVar2 = param_1 + iVar24;
                pTVar2->ContactType = pTVar1->ContactType;
                *(undefined3 *)&pTVar2->field_0x1 = uVar13;
                pTVar2->Indices[0] = iVar25;
                *(undefined8 *)(pTVar2->Indices + 1) = uVar7;
                uVar7 = *(undefined8 *)(param_1[iVar19].Bary.V + 3);
                *(undefined8 *)(param_1[iVar24].Bary.V + 1) =
                     *(undefined8 *)(param_1[iVar19].Bary.V + 1);
                *(undefined8 *)(param_1[iVar24].Bary.V + 3) = uVar7;
                puVar3 = &param_1[iVar19].Location.field_0x4;
                uVar7 = *(undefined8 *)(puVar3 + 8);
                puVar4 = &param_1[iVar24].Location.field_0x4;
                *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
                *(undefined8 *)(puVar4 + 8) = uVar7;
                *(undefined8 *)&param_1[iVar24].Normal.field_0x8 =
                     *(undefined8 *)&param_1[iVar19].Normal.field_0x8;
                pTVar1 = param_1 + iVar19;
                pTVar1->ContactType = EVar15;
                *(undefined3 *)&pTVar1->field_0x1 = uVar16;
                pTVar1->Indices[0] = iVar23;
                *(undefined8 *)(pTVar1->Indices + 1) = uVar8;
                *(undefined8 *)(param_1[iVar19].Bary.V + 1) = uVar9;
                *(undefined8 *)(param_1[iVar19].Bary.V + 3) = uVar10;
                puVar3 = &param_1[iVar19].Location.field_0x4;
                *(undefined8 *)puVar3 = uVar11;
                *(undefined8 *)(puVar3 + 8) = uVar12;
                *(undefined8 *)&param_1[iVar19].Normal.field_0x8 = uVar5;
                iVar24 = iVar19;
              } while (iVar19 * 2 + 1 < iVar20);
            }
            iVar20 = iVar20 + -1;
            lVar21 = lVar21 + -1;
            pTVar22 = pTVar22 + -1;
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
      if (param_1[(longlong)iVar20 + 2].Phi <= param_1[iVar23].Phi &&
          param_1[iVar23].Phi != param_1[(longlong)iVar20 + 2].Phi) {
        iVar23 = iVar20;
      }
      iVar23 = iVar23 + 1;
    }
    if (param_1[iVar23].Phi < param_1[iVar19].Phi || param_1[iVar23].Phi == param_1[iVar19].Phi)
    goto LAB_143c83f01;
    pTVar22 = param_1 + iVar23;
    uVar13 = *(undefined3 *)&pTVar22->field_0x1;
    iVar14 = pTVar22->Indices[0];
    uVar7 = *(undefined8 *)(pTVar22->Indices + 1);
    iVar20 = iVar23 * 2 + 1;
    uVar5 = *(undefined8 *)&param_1[iVar19].Normal.field_0x8;
    pTVar1 = param_1 + iVar19;
    EVar15 = pTVar1->ContactType;
    uVar16 = *(undefined3 *)&pTVar1->field_0x1;
    iVar17 = pTVar1->Indices[0];
    uVar8 = *(undefined8 *)(pTVar1->Indices + 1);
    uVar9 = *(undefined8 *)(param_1[iVar19].Bary.V + 1);
    uVar10 = *(undefined8 *)(param_1[iVar19].Bary.V + 3);
    puVar3 = &param_1[iVar19].Location.field_0x4;
    uVar11 = *(undefined8 *)puVar3;
    uVar12 = *(undefined8 *)(puVar3 + 8);
    pTVar1 = param_1 + iVar19;
    pTVar1->ContactType = pTVar22->ContactType;
    *(undefined3 *)&pTVar1->field_0x1 = uVar13;
    pTVar1->Indices[0] = iVar14;
    *(undefined8 *)(pTVar1->Indices + 1) = uVar7;
    uVar7 = *(undefined8 *)(param_1[iVar23].Bary.V + 3);
    *(undefined8 *)(param_1[iVar19].Bary.V + 1) = *(undefined8 *)(param_1[iVar23].Bary.V + 1);
    *(undefined8 *)(param_1[iVar19].Bary.V + 3) = uVar7;
    puVar3 = &param_1[iVar23].Location.field_0x4;
    uVar7 = *(undefined8 *)(puVar3 + 8);
    puVar4 = &param_1[iVar19].Location.field_0x4;
    *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar4 + 8) = uVar7;
    *(undefined8 *)&param_1[iVar19].Normal.field_0x8 =
         *(undefined8 *)&param_1[iVar23].Normal.field_0x8;
    pTVar22 = param_1 + iVar23;
    pTVar22->ContactType = EVar15;
    *(undefined3 *)&pTVar22->field_0x1 = uVar16;
    pTVar22->Indices[0] = iVar17;
    *(undefined8 *)(pTVar22->Indices + 1) = uVar8;
    *(undefined8 *)(param_1[iVar23].Bary.V + 1) = uVar9;
    *(undefined8 *)(param_1[iVar23].Bary.V + 3) = uVar10;
    puVar3 = &param_1[iVar23].Location.field_0x4;
    *(undefined8 *)puVar3 = uVar11;
    *(undefined8 *)(puVar3 + 8) = uVar12;
    *(undefined8 *)&param_1[iVar23].Normal.field_0x8 = uVar5;
    iVar19 = iVar23;
  } while( true );
}

// HeapSortInternal<`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_3>_>_> @ 143c84060

void __cdecl
AlgoImpl::
HeapSortInternal<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::<lambda_3>_>_>
          (LinkCandidate *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::LinkCandidate,_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::<lambda_3>_>
          param_4)

{
  double dVar1;
  code *pcVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  LinkCandidate *pLVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar13 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_143c84178:
      if (iVar13 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          pLVar9 = param_1 + lVar10;
          do {
            pTVar3 = pLVar9->B;
            dVar1 = param_1->DistSq;
            pTVar4 = param_1->A;
            pTVar5 = param_1->B;
            param_1->A = pLVar9->A;
            param_1->B = pTVar3;
            param_1->DistSq = pLVar9->DistSq;
            pLVar9->A = pTVar4;
            pLVar9->B = pTVar5;
            pLVar9->DistSq = dVar1;
            iVar12 = 0;
            if (1 < iVar8) {
              do {
                iVar13 = iVar12 * 2;
                iVar7 = iVar13 + 1;
                if (iVar13 + 2 < iVar8) {
                  if (param_1[(longlong)iVar13 + 2].DistSq <= param_1[iVar7].DistSq &&
                      param_1[iVar7].DistSq != param_1[(longlong)iVar13 + 2].DistSq) {
                    iVar7 = iVar13;
                  }
                  iVar7 = iVar7 + 1;
                }
                if (param_1[iVar7].DistSq < param_1[iVar12].DistSq ||
                    param_1[iVar7].DistSq == param_1[iVar12].DistSq) break;
                pTVar3 = param_1[iVar7].B;
                dVar1 = param_1[iVar12].DistSq;
                pTVar4 = param_1[iVar12].A;
                pTVar5 = param_1[iVar12].B;
                param_1[iVar12].A = param_1[iVar7].A;
                param_1[iVar12].B = pTVar3;
                param_1[iVar12].DistSq = param_1[iVar7].DistSq;
                param_1[iVar7].A = pTVar4;
                param_1[iVar7].B = pTVar5;
                param_1[iVar7].DistSq = dVar1;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar10 = lVar10 + -1;
            pLVar9 = pLVar9 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar7 = iVar13 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar13 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (param_1[(longlong)iVar8 + 2].DistSq <= param_1[iVar11].DistSq &&
          param_1[iVar11].DistSq != param_1[(longlong)iVar8 + 2].DistSq) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    if (param_1[iVar11].DistSq < param_1[iVar7].DistSq ||
        param_1[iVar11].DistSq == param_1[iVar7].DistSq) goto LAB_143c84178;
    pTVar3 = param_1[iVar11].B;
    iVar8 = iVar11 * 2 + 1;
    dVar1 = param_1[iVar7].DistSq;
    pTVar4 = param_1[iVar7].A;
    pTVar5 = param_1[iVar7].B;
    param_1[iVar7].A = param_1[iVar11].A;
    param_1[iVar7].B = pTVar3;
    param_1[iVar7].DistSq = param_1[iVar11].DistSq;
    param_1[iVar11].A = pTVar4;
    param_1[iVar11].B = pTVar5;
    param_1[iVar11].DistSq = dVar1;
    iVar7 = iVar11;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l24::<lambda_3>_>_>_>_> @ 143c84680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar11 = ppTVar9[1];
      pTVar8 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar11 - (longlong)pTVar8 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar12 = pTVar8;
      if ((int)local_338 != 0) {
LAB_143c84730:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar6 = pTVar11 + 1;
          TVar3 = pTVar12[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar12[iVar5 / 2].ElementData.Pad + 8);
          pTVar12[iVar5 / 2]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar8 = pTVar12;
LAB_143c84760:
          pTVar7 = pTVar8;
          pTVar8 = pTVar7 + 1;
          if (pTVar8 <= pTVar11) goto code_r0x000143c84769;
          goto LAB_143c84775;
        }
        if (pTVar12 < pTVar11) {
          pTVar1 = pTVar12 + 1;
          do {
            pTVar8 = pTVar12;
            if (pTVar1 <= pTVar11) {
              pTVar6 = pTVar1;
              if (0x3f < ((longlong)pTVar11 + (0x10 - (longlong)pTVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (*(float *)((pTVar8->ElementData).Pad + 4) <
                      *(float *)((pTVar6->ElementData).Pad + 4)) {
                    pTVar8 = pTVar6;
                  }
                  if (*(float *)((pTVar8->ElementData).Pad + 4) <=
                      *(float *)((longlong)pTVar6 + 0x14) &&
                      *(float *)((longlong)pTVar6 + 0x14) !=
                      *(float *)((pTVar8->ElementData).Pad + 4)) {
                    pTVar8 = pTVar6 + 1;
                  }
                  if (*(float *)((pTVar8->ElementData).Pad + 4) <=
                      *(float *)((longlong)pTVar6 + 0x24) &&
                      *(float *)((longlong)pTVar6 + 0x24) !=
                      *(float *)((pTVar8->ElementData).Pad + 4)) {
                    pTVar8 = pTVar6 + 2;
                  }
                  if (*(float *)((pTVar8->ElementData).Pad + 4) <=
                      *(float *)((longlong)pTVar6 + 0x34) &&
                      *(float *)((longlong)pTVar6 + 0x34) !=
                      *(float *)((pTVar8->ElementData).Pad + 4)) {
                    pTVar8 = pTVar6 + 3;
                  }
                  pTVar6 = pTVar6 + 4;
                } while (pTVar6 <= pTVar11 + -3);
              }
              for (; pTVar6 <= pTVar11; pTVar6 = pTVar6 + 1) {
                if (*(float *)((pTVar8->ElementData).Pad + 4) <
                    *(float *)((pTVar6->ElementData).Pad + 4)) {
                  pTVar8 = pTVar6;
                }
              }
            }
            TVar3 = pTVar8->_s_1;
            uVar2 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
            pTVar6 = pTVar11 + -1;
            uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
            pTVar8->_s_1 = pTVar11->_s_1;
            *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar4;
            pTVar11->_s_1 = TVar3;
            *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
            pTVar11 = pTVar6;
          } while (pTVar12 < pTVar6);
        }
        goto LAB_143c84839;
      }
LAB_143c84828:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>_>_>
                (pTVar8,iVar5,param_3,param_4);
LAB_143c84839:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000143c84769:
  if (*(float *)((longlong)pTVar7 + 0x14) < *(float *)((pTVar12->ElementData).Pad + 4) ||
      *(float *)((longlong)pTVar7 + 0x14) == *(float *)((pTVar12->ElementData).Pad + 4))
  goto LAB_143c84760;
LAB_143c84775:
  do {
    pTVar10 = pTVar6;
    pTVar6 = pTVar10 + -1;
    if (pTVar6 <= pTVar12) break;
  } while (*(float *)((pTVar12->ElementData).Pad + 4) < *(float *)((longlong)pTVar10 + -0xc) ||
           *(float *)((pTVar12->ElementData).Pad + 4) == *(float *)((longlong)pTVar10 + -0xc));
  uVar2 = *(undefined8 *)((longlong)pTVar10 + -8);
  if (pTVar8 <= pTVar6) {
    TVar3 = pTVar8->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar7 + 0x18);
    pTVar8->_s_1 = pTVar6->_s_1;
    *(undefined8 *)((longlong)pTVar7 + 0x18) = uVar2;
    pTVar6->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar10 + -8) = uVar4;
    goto LAB_143c84760;
  }
  TVar3 = pTVar12->_s_1;
  uVar4 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar12->_s_1 = pTVar6->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  pTVar6->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar10 + -8) = uVar4;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar11 - (longlong)pTVar8 & 0xfffffffffffffff0U)) {
    if (pTVar8 < pTVar11) {
      *ppTVar9 = pTVar8;
      ppTVar9[1] = pTVar11;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar12 + 1) goto LAB_143c84839;
    pTVar11 = pTVar10 + -2;
    pTVar8 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar6) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar10 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar11 <= pTVar8) goto LAB_143c84839;
  }
  iVar5 = (int)((longlong)pTVar11 - (longlong)pTVar8 >> 4) + 1;
  pTVar12 = pTVar8;
  if ((int)local_338 == 0) goto LAB_143c84828;
  goto LAB_143c84730;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<`Chaos::FRigidClustering::AdvanceClustering'::__l53::<lambda_2>_>_>_>_> @ 143c84930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_143c84a00:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_143c84a50:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000143c84a59;
          goto LAB_143c84a63;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(longlong *)((pTVar13->ElementData).Pad + 8) <
                *(longlong *)((pTVar1->ElementData).Pad + 8)) {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_143c84b85;
      }
LAB_143c84b76:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_143c84b85:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000143c84a59:
  if (*(longlong *)((longlong)pTVar9 + 0x20) <= *(longlong *)((pTVar12->ElementData).Pad + 8))
  goto LAB_143c84a50;
LAB_143c84a63:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(longlong *)((pTVar12->ElementData).Pad + 8) <= *(longlong *)((longlong)pTVar11 + -0x10)
          );
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_143c84a50;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_143c84b85;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_143c84b85;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_143c84b76;
  goto LAB_143c84a00;
}

// IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>_>_> @ 143c84c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
          (TTriangleCollisionPoint<float> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_17_::<lambda_2>_>
          param_4)

{
  TTriangleCollisionPoint<float> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined3 uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  int iVar13;
  EContactType EVar14;
  undefined3 uVar15;
  TTriangleCollisionPoint<float> *pTVar16;
  int iVar17;
  TTriangleCollisionPoint<float> *pTVar18;
  TTriangleCollisionPoint<float> *pTVar19;
  TTriangleCollisionPoint<float> *pTVar20;
  TTriangleCollisionPoint<float> *pTVar21;
  TTriangleCollisionPoint<float> *pTVar22;
  TTriangleCollisionPoint<float> **ppTVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  TTriangleCollisionPoint<float> *local_348;
  TTriangleCollisionPoint<float> *local_338;
  TTriangleCollisionPoint<float> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppTVar23 = &local_338;
    do {
      pTVar19 = ppTVar23[1];
      pTVar18 = *ppTVar23;
      pTVar1 = ppTVar23[2];
      local_348._0_4_ = (int)pTVar1;
      iVar17 = (int)(((longlong)pTVar19 - (longlong)pTVar18) / 0x38) + 1;
      pTVar22 = pTVar18;
      if ((int)local_348 != 0) {
LAB_143c84d10:
        if (8 < iVar17) {
          uVar12 = *(undefined3 *)&pTVar22->field_0x1;
          iVar13 = pTVar22->Indices[0];
          uVar3 = *(undefined8 *)(pTVar22->Indices + 1);
          pTVar16 = pTVar19 + 1;
          pTVar18 = pTVar22 + iVar17 / 2;
          EVar14 = pTVar18->ContactType;
          uVar15 = *(undefined3 *)&pTVar18->field_0x1;
          iVar17 = pTVar18->Indices[0];
          uVar4 = *(undefined8 *)(pTVar18->Indices + 1);
          uVar5 = *(undefined8 *)((pTVar18->Bary).V + 1);
          uVar6 = *(undefined8 *)((pTVar18->Bary).V + 3);
          uVar7 = *(undefined8 *)&(pTVar18->Location).field_0x4;
          uVar8 = *(undefined8 *)&pTVar18->Normal;
          uVar2 = *(undefined8 *)&(pTVar18->Normal).field_0x8;
          pTVar18->ContactType = pTVar22->ContactType;
          *(undefined3 *)&pTVar18->field_0x1 = uVar12;
          pTVar18->Indices[0] = iVar13;
          *(undefined8 *)(pTVar18->Indices + 1) = uVar3;
          uVar3 = *(undefined8 *)((pTVar22->Bary).V + 3);
          *(undefined8 *)((pTVar18->Bary).V + 1) = *(undefined8 *)((pTVar22->Bary).V + 1);
          *(undefined8 *)((pTVar18->Bary).V + 3) = uVar3;
          uVar3 = *(undefined8 *)&pTVar22->Normal;
          *(undefined8 *)&(pTVar18->Location).field_0x4 =
               *(undefined8 *)&(pTVar22->Location).field_0x4;
          *(undefined8 *)&pTVar18->Normal = uVar3;
          *(undefined8 *)&(pTVar18->Normal).field_0x8 = *(undefined8 *)&(pTVar22->Normal).field_0x8;
          pTVar22->ContactType = EVar14;
          *(undefined3 *)&pTVar22->field_0x1 = uVar15;
          pTVar22->Indices[0] = iVar17;
          *(undefined8 *)(pTVar22->Indices + 1) = uVar4;
          *(undefined8 *)((pTVar22->Bary).V + 1) = uVar5;
          *(undefined8 *)((pTVar22->Bary).V + 3) = uVar6;
          *(undefined8 *)&(pTVar22->Location).field_0x4 = uVar7;
          *(undefined8 *)&pTVar22->Normal = uVar8;
          *(undefined8 *)&(pTVar22->Normal).field_0x8 = uVar2;
          pTVar18 = pTVar22;
LAB_143c84d80:
          pTVar20 = pTVar18;
          pTVar18 = pTVar20 + 1;
          if (pTVar18 <= pTVar19) goto code_r0x000143c84d89;
          goto LAB_143c84d96;
        }
        if (pTVar22 < pTVar19) {
          pTVar1 = pTVar22 + 1;
          do {
            pTVar18 = pTVar22;
            if (pTVar1 <= pTVar19) {
              pTVar16 = pTVar1;
              if (0xdf < (ulonglong)((longlong)pTVar19 + (0x38 - (longlong)pTVar1))) {
                do {
                  if (pTVar18->Phi < pTVar16->Phi) {
                    pTVar18 = pTVar16;
                  }
                  if (pTVar18->Phi <= pTVar16[1].Phi && pTVar16[1].Phi != pTVar18->Phi) {
                    pTVar18 = pTVar16 + 1;
                  }
                  if (pTVar18->Phi <= pTVar16[2].Phi && pTVar16[2].Phi != pTVar18->Phi) {
                    pTVar18 = pTVar16 + 2;
                  }
                  if (pTVar18->Phi <= pTVar16[3].Phi && pTVar16[3].Phi != pTVar18->Phi) {
                    pTVar18 = pTVar16 + 3;
                  }
                  pTVar16 = pTVar16 + 4;
                } while (pTVar16 <= pTVar19 + -3);
              }
              for (; pTVar16 <= pTVar19; pTVar16 = pTVar16 + 1) {
                if (pTVar18->Phi < pTVar16->Phi) {
                  pTVar18 = pTVar16;
                }
              }
            }
            EVar14 = pTVar18->ContactType;
            uVar15 = *(undefined3 *)&pTVar18->field_0x1;
            iVar13 = pTVar18->Indices[0];
            uVar3 = *(undefined8 *)(pTVar18->Indices + 1);
            pTVar16 = pTVar19 + -1;
            uVar2 = *(undefined8 *)&(pTVar18->Normal).field_0x8;
            uVar4 = *(undefined8 *)((pTVar18->Bary).V + 1);
            uVar5 = *(undefined8 *)((pTVar18->Bary).V + 3);
            uVar12 = *(undefined3 *)&pTVar19->field_0x1;
            iVar17 = pTVar19->Indices[0];
            uVar6 = *(undefined8 *)(pTVar19->Indices + 1);
            uVar7 = *(undefined8 *)&(pTVar18->Location).field_0x4;
            uVar8 = *(undefined8 *)&pTVar18->Normal;
            pTVar18->ContactType = pTVar19->ContactType;
            *(undefined3 *)&pTVar18->field_0x1 = uVar12;
            pTVar18->Indices[0] = iVar17;
            *(undefined8 *)(pTVar18->Indices + 1) = uVar6;
            uVar6 = *(undefined8 *)((pTVar19->Bary).V + 3);
            *(undefined8 *)((pTVar18->Bary).V + 1) = *(undefined8 *)((pTVar19->Bary).V + 1);
            *(undefined8 *)((pTVar18->Bary).V + 3) = uVar6;
            uVar6 = *(undefined8 *)&pTVar19->Normal;
            *(undefined8 *)&(pTVar18->Location).field_0x4 =
                 *(undefined8 *)&(pTVar19->Location).field_0x4;
            *(undefined8 *)&pTVar18->Normal = uVar6;
            *(undefined8 *)&(pTVar18->Normal).field_0x8 =
                 *(undefined8 *)&(pTVar19->Normal).field_0x8;
            pTVar19->ContactType = EVar14;
            *(undefined3 *)&pTVar19->field_0x1 = uVar15;
            pTVar19->Indices[0] = iVar13;
            *(undefined8 *)(pTVar19->Indices + 1) = uVar3;
            *(undefined8 *)((pTVar19->Bary).V + 1) = uVar4;
            *(undefined8 *)((pTVar19->Bary).V + 3) = uVar5;
            *(undefined8 *)&(pTVar19->Location).field_0x4 = uVar7;
            *(undefined8 *)&pTVar19->Normal = uVar8;
            *(undefined8 *)&(pTVar19->Normal).field_0x8 = uVar2;
            pTVar19 = pTVar16;
          } while (pTVar22 < pTVar16);
        }
        goto LAB_143c84f0e;
      }
LAB_143c84eff:
      local_348 = pTVar1;
      HeapSortInternal<Chaos::TTriangleCollisionPoint<float>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::TTriangleCollisionPoint<float>,__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
                (pTVar18,iVar17,param_3,param_4);
LAB_143c84f0e:
      ppTVar23 = ppTVar23 + -3;
    } while (&local_338 <= ppTVar23);
  }
  return;
code_r0x000143c84d89:
  if (pTVar20[1].Phi < pTVar22->Phi || pTVar20[1].Phi == pTVar22->Phi) goto LAB_143c84d80;
LAB_143c84d96:
  do {
    pTVar21 = pTVar16;
    pTVar16 = pTVar21 + -1;
    if (pTVar16 <= pTVar22) break;
  } while (pTVar22->Phi < pTVar21[-1].Phi || pTVar22->Phi == pTVar21[-1].Phi);
  uVar9 = pTVar16->ContactType;
  uVar10 = *(undefined3 *)&pTVar16->field_0x1;
  uVar11 = pTVar16->Indices[0];
  uVar2 = *(undefined8 *)(pTVar21[-1].Indices + 1);
  if (pTVar18 <= pTVar16) {
    EVar14 = pTVar18->ContactType;
    uVar12 = *(undefined3 *)&pTVar18->field_0x1;
    iVar17 = pTVar18->Indices[0];
    uVar4 = *(undefined8 *)(pTVar20[1].Indices + 1);
    uVar5 = *(undefined8 *)(pTVar20[1].Bary.V + 1);
    uVar6 = *(undefined8 *)(pTVar20[1].Bary.V + 3);
    uVar7 = *(undefined8 *)&pTVar20[1].Location.field_0x4;
    uVar8 = *(undefined8 *)&pTVar20[1].Normal;
    uVar3 = *(undefined8 *)&pTVar20[1].Normal.field_0x8;
    pTVar18->ContactType = uVar9;
    *(undefined3 *)&pTVar18->field_0x1 = uVar10;
    pTVar18->Indices[0] = uVar11;
    *(undefined8 *)(pTVar20[1].Indices + 1) = uVar2;
    uVar2 = *(undefined8 *)(pTVar21[-1].Bary.V + 3);
    *(undefined8 *)(pTVar20[1].Bary.V + 1) = *(undefined8 *)(pTVar21[-1].Bary.V + 1);
    *(undefined8 *)(pTVar20[1].Bary.V + 3) = uVar2;
    uVar2 = *(undefined8 *)&pTVar21[-1].Normal;
    *(undefined8 *)&pTVar20[1].Location.field_0x4 = *(undefined8 *)&pTVar21[-1].Location.field_0x4;
    *(undefined8 *)&pTVar20[1].Normal = uVar2;
    *(undefined8 *)&pTVar20[1].Normal.field_0x8 = *(undefined8 *)&pTVar21[-1].Normal.field_0x8;
    pTVar16->ContactType = EVar14;
    *(undefined3 *)&pTVar16->field_0x1 = uVar12;
    pTVar16->Indices[0] = iVar17;
    *(undefined8 *)(pTVar21[-1].Indices + 1) = uVar4;
    *(undefined8 *)(pTVar21[-1].Bary.V + 1) = uVar5;
    *(undefined8 *)(pTVar21[-1].Bary.V + 3) = uVar6;
    *(undefined8 *)&pTVar21[-1].Location.field_0x4 = uVar7;
    *(undefined8 *)&pTVar21[-1].Normal = uVar8;
    *(undefined8 *)&pTVar21[-1].Normal.field_0x8 = uVar3;
    goto LAB_143c84d80;
  }
  EVar14 = pTVar22->ContactType;
  uVar12 = *(undefined3 *)&pTVar22->field_0x1;
  iVar17 = pTVar22->Indices[0];
  uVar4 = *(undefined8 *)(pTVar22->Indices + 1);
  uVar5 = *(undefined8 *)((pTVar22->Bary).V + 1);
  uVar6 = *(undefined8 *)((pTVar22->Bary).V + 3);
  local_348._0_4_ = (int)local_348 + -1;
  uVar7 = *(undefined8 *)&(pTVar22->Location).field_0x4;
  uVar8 = *(undefined8 *)&pTVar22->Normal;
  uVar3 = *(undefined8 *)&(pTVar22->Normal).field_0x8;
  pTVar22->ContactType = uVar9;
  *(undefined3 *)&pTVar22->field_0x1 = uVar10;
  pTVar22->Indices[0] = uVar11;
  *(undefined8 *)(pTVar22->Indices + 1) = uVar2;
  uVar2 = *(undefined8 *)(pTVar21[-1].Bary.V + 3);
  *(undefined8 *)((pTVar22->Bary).V + 1) = *(undefined8 *)(pTVar21[-1].Bary.V + 1);
  *(undefined8 *)((pTVar22->Bary).V + 3) = uVar2;
  uVar2 = *(undefined8 *)&pTVar21[-1].Normal;
  *(undefined8 *)&(pTVar22->Location).field_0x4 = *(undefined8 *)&pTVar21[-1].Location.field_0x4;
  *(undefined8 *)&pTVar22->Normal = uVar2;
  *(undefined8 *)&(pTVar22->Normal).field_0x8 = *(undefined8 *)&pTVar21[-1].Normal.field_0x8;
  pTVar16->ContactType = EVar14;
  *(undefined3 *)&pTVar16->field_0x1 = uVar12;
  pTVar16->Indices[0] = iVar17;
  *(undefined8 *)(pTVar21[-1].Indices + 1) = uVar4;
  *(undefined8 *)(pTVar21[-1].Bary.V + 1) = uVar5;
  *(undefined8 *)(pTVar21[-1].Bary.V + 3) = uVar6;
  *(undefined8 *)&pTVar21[-1].Location.field_0x4 = uVar7;
  *(undefined8 *)&pTVar21[-1].Normal = uVar8;
  *(undefined8 *)&pTVar21[-1].Normal.field_0x8 = uVar3;
  if (((longlong)pTVar16 + (-0x38 - (longlong)pTVar22)) / 0x38 <
      ((longlong)pTVar19 - (longlong)pTVar18) / 0x38) {
    if (pTVar18 < pTVar19) {
      *ppTVar23 = pTVar18;
      ppTVar23[1] = pTVar19;
      *(int *)(ppTVar23 + 2) = (int)local_348;
      ppTVar23 = ppTVar23 + 3;
    }
    if (pTVar16 <= pTVar22 + 1) goto LAB_143c84f0e;
    pTVar19 = pTVar21 + -2;
    pTVar18 = pTVar22;
  }
  else {
    if (pTVar22 + 1 < pTVar16) {
      *ppTVar23 = pTVar22;
      ppTVar23[1] = pTVar21 + -2;
      *(int *)(ppTVar23 + 2) = (int)local_348;
      ppTVar23 = ppTVar23 + 3;
    }
    if (pTVar19 <= pTVar18) goto LAB_143c84f0e;
  }
  iVar17 = (int)(((longlong)pTVar19 - (longlong)pTVar18) / 0x38) + 1;
  pTVar22 = pTVar18;
  if ((int)local_348 == 0) goto LAB_143c84eff;
  goto LAB_143c84d10;
}

// IntroSortInternal<`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_3>_>_> @ 143c85060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::<lambda_3>_>_>
          (LinkCandidate *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::LinkCandidate,_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::<lambda_3>_>
          param_4)

{
  LinkCandidate *pLVar1;
  double dVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  LinkCandidate *pLVar7;
  int iVar8;
  LinkCandidate *pLVar9;
  LinkCandidate *pLVar10;
  LinkCandidate *pLVar11;
  LinkCandidate *pLVar12;
  LinkCandidate *pLVar13;
  LinkCandidate **ppLVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  LinkCandidate *local_348;
  LinkCandidate *local_338;
  LinkCandidate *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppLVar14 = &local_338;
    do {
      pLVar10 = ppLVar14[1];
      pLVar9 = *ppLVar14;
      pLVar1 = ppLVar14[2];
      local_348._0_4_ = (int)pLVar1;
      iVar8 = (int)(((longlong)pLVar10 - (longlong)pLVar9) / 0x18) + 1;
      pLVar13 = pLVar9;
      if ((int)local_348 != 0) {
LAB_143c85130:
        if (8 < iVar8) {
          pTVar3 = pLVar13->B;
          pLVar7 = pLVar10 + 1;
          iVar8 = iVar8 / 2;
          pTVar4 = pLVar13[iVar8].A;
          pTVar5 = pLVar13[iVar8].B;
          dVar2 = pLVar13[iVar8].DistSq;
          pLVar13[iVar8].A = pLVar13->A;
          pLVar13[iVar8].B = pTVar3;
          pLVar13[iVar8].DistSq = pLVar13->DistSq;
          pLVar13->A = pTVar4;
          pLVar13->B = pTVar5;
          pLVar13->DistSq = dVar2;
          pLVar9 = pLVar13;
LAB_143c85180:
          pLVar11 = pLVar9;
          pLVar9 = pLVar11 + 1;
          if (pLVar9 <= pLVar10) goto code_r0x000143c85189;
          goto LAB_143c85197;
        }
        if (pLVar13 < pLVar10) {
          pLVar1 = pLVar13 + 1;
          do {
            pLVar9 = pLVar13;
            if (pLVar1 <= pLVar10) {
              pLVar7 = pLVar1;
              if (0x5f < (ulonglong)((longlong)pLVar10 + (0x18 - (longlong)pLVar1))) {
                do {
                  if (pLVar9->DistSq < pLVar7->DistSq) {
                    pLVar9 = pLVar7;
                  }
                  if (pLVar9->DistSq <= pLVar7[1].DistSq && pLVar7[1].DistSq != pLVar9->DistSq) {
                    pLVar9 = pLVar7 + 1;
                  }
                  if (pLVar9->DistSq <= pLVar7[2].DistSq && pLVar7[2].DistSq != pLVar9->DistSq) {
                    pLVar9 = pLVar7 + 2;
                  }
                  if (pLVar9->DistSq <= pLVar7[3].DistSq && pLVar7[3].DistSq != pLVar9->DistSq) {
                    pLVar9 = pLVar7 + 3;
                  }
                  pLVar7 = pLVar7 + 4;
                } while (pLVar7 <= pLVar10 + -3);
              }
              for (; pLVar7 <= pLVar10; pLVar7 = pLVar7 + 1) {
                if (pLVar9->DistSq < pLVar7->DistSq) {
                  pLVar9 = pLVar7;
                }
              }
            }
            pTVar3 = pLVar9->A;
            pTVar4 = pLVar9->B;
            pLVar7 = pLVar10 + -1;
            dVar2 = pLVar9->DistSq;
            pTVar5 = pLVar10->B;
            pLVar9->A = pLVar10->A;
            pLVar9->B = pTVar5;
            pLVar9->DistSq = pLVar10->DistSq;
            pLVar10->A = pTVar3;
            pLVar10->B = pTVar4;
            pLVar10->DistSq = dVar2;
            pLVar10 = pLVar7;
          } while (pLVar13 < pLVar7);
        }
        goto LAB_143c852bd;
      }
LAB_143c852ae:
      local_348 = pLVar1;
      HeapSortInternal<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::<lambda_3>_>_>
                (pLVar9,iVar8,param_3,param_4);
LAB_143c852bd:
      ppLVar14 = ppLVar14 + -3;
    } while (&local_338 <= ppLVar14);
  }
  return;
code_r0x000143c85189:
  if (pLVar11[1].DistSq < pLVar13->DistSq || pLVar11[1].DistSq == pLVar13->DistSq)
  goto LAB_143c85180;
LAB_143c85197:
  do {
    pLVar12 = pLVar7;
    pLVar7 = pLVar12 + -1;
    if (pLVar7 <= pLVar13) break;
  } while (pLVar13->DistSq < pLVar12[-1].DistSq || pLVar13->DistSq == pLVar12[-1].DistSq);
  pTVar3 = pLVar12[-1].B;
  if (pLVar9 <= pLVar7) {
    pTVar4 = pLVar9->A;
    pTVar5 = pLVar11[1].B;
    dVar2 = pLVar11[1].DistSq;
    pLVar9->A = pLVar7->A;
    pLVar11[1].B = pTVar3;
    pLVar11[1].DistSq = pLVar12[-1].DistSq;
    pLVar7->A = pTVar4;
    pLVar12[-1].B = pTVar5;
    pLVar12[-1].DistSq = dVar2;
    goto LAB_143c85180;
  }
  pTVar4 = pLVar13->A;
  pTVar5 = pLVar13->B;
  dVar2 = pLVar13->DistSq;
  lVar6 = (longlong)pLVar7 + (-0x18 - (longlong)pLVar13);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pLVar13->A = pLVar7->A;
  pLVar13->B = pTVar3;
  pLVar13->DistSq = pLVar12[-1].DistSq;
  pLVar7->A = pTVar4;
  pLVar12[-1].B = pTVar5;
  pLVar12[-1].DistSq = dVar2;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pLVar10 - (longlong)pLVar9) / 0x18) {
    if (pLVar9 < pLVar10) {
      *ppLVar14 = pLVar9;
      ppLVar14[1] = pLVar10;
      *(int *)(ppLVar14 + 2) = (int)local_348;
      ppLVar14 = ppLVar14 + 3;
    }
    if (pLVar7 <= pLVar13 + 1) goto LAB_143c852bd;
    pLVar10 = pLVar12 + -2;
    pLVar9 = pLVar13;
  }
  else {
    if (pLVar13 + 1 < pLVar7) {
      *ppLVar14 = pLVar13;
      ppLVar14[1] = pLVar12 + -2;
      *(int *)(ppLVar14 + 2) = (int)local_348;
      ppLVar14 = ppLVar14 + 3;
    }
    if (pLVar10 <= pLVar9) goto LAB_143c852bd;
  }
  iVar8 = (int)(((longlong)pLVar10 - (longlong)pLVar9) / 0x18) + 1;
  pLVar13 = pLVar9;
  if ((int)local_348 == 0) goto LAB_143c852ae;
  goto LAB_143c85130;
}

// MakeParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> @ 143c853e0

TParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> * __cdecl
Chaos::MakeParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>
          (TParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *__return_storage_ptr__,
          TArray<Chaos::TSOAView<Chaos::TPBDRigidClusteredParticles<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
             __return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// MakeSerializable<Chaos::TPBDRigidClusteredParticles<double,3>_> @ 143c85400

TSerializablePtr<Chaos::TPBDRigidClusteredParticles<double,3>_> __cdecl
Chaos::MakeSerializable<Chaos::TPBDRigidClusteredParticles<double,3>_>
          (TUniquePtr<Chaos::TPBDRigidClusteredParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidClusteredParticles<double,3>_>_>
           *param_1)

{
  undefined8 *in_RDX;
  
  param_1->Ptr = (TPBDRigidClusteredParticles<double,3> *)*in_RDX;
  return (TSerializablePtr<Chaos::TPBDRigidClusteredParticles<double,3>_>)
         (TPBDRigidClusteredParticles<double,3> *)param_1;
}

// PBDRigidClusteredParticleDefaultConstruct<double,3,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 143c85510

void __cdecl
Chaos::
PBDRigidClusteredParticleDefaultConstruct<double,3,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FPBDRigidParticleParameters *param_2)

{
  return;
}

// RemoveAllSwap<`Chaos::FPBDRigidsSOAs::DestroyParticle'::__l11::<lambda_1>_> @ 143c85520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Chaos::FPBDRigidsSOAs::DestroyParticle_::__l11::<lambda_1>_>
          (TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1
          ,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(TGeometryParticleHandleImp<double,3,1> **)((this->AllocatorInstance).Data + lVar9) ==
          param_1->Particle) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 0x10,
                  pFVar1 + (longlong)(this->ArrayNum - iVar7) * 0x10,(longlong)iVar7 << 4);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// Sort<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<`Chaos::FRigidClustering::AdvanceClustering'::__l53::<lambda_2>_>_> @ 143c86040

void __thiscall
TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>
          (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Sort<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l24::<lambda_3>_>_> @ 143c860d0

void __thiscall
TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
Sort<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>
          (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<__Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init_::__l2::<lambda_1>::operator()_::__l24::<lambda_3>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FValueComparisonClass<_public:___cdecl__public:_void___cdecl_Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init(Chaos::Softs::FSolverParticlesRange_const_&,float)_::_2_::<lambda_1>::operator()(int)const_::_24_::<lambda_3>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<bool_(__cdecl*)(Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*)> @ 143c86160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::
UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<bool_(__cdecl*)(Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*)>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,
          _func___cdecl_bool_TPBDRigidParticleHandleImp<double,3,1>_ptr_TPBDRigidParticleHandleImp<double,3,1>_ptr
          *param_2,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_3,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  bool bVar12;
  TVector<double,3> *pTVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar17;
  ForElementType<FSetElementId> FVar18;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_178 [32];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  int local_130 [2];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [16];
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_f8;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_f0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e8;
  TPBDRigidParticleHandleImp<double,3,1> *local_d8;
  TPBDRigidParticleHandleImp<double,3,1> *local_d0;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar20 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_128 = param_1;
  local_108._8_8_ = param_2;
  local_f8 = param_4;
  local_f0 = param_3;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1->ArrayNum,&local_138,local_130,local_130 + 1);
  pTVar10 = local_128;
  iVar14 = param_1->ArrayNum;
  uVar21 = uVar20;
  uVar24 = uVar20;
  if (0 < iVar14) {
    do {
      uVar22 = (uint)uVar20;
      uVar25 = 0;
      if ((int)uVar22 < iVar14) {
        uVar25 = ~uVar22 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar3 = *(undefined8 **)((pTVar10->AllocatorInstance).Data + uVar24);
      pTVar13 = TParticles<double,3>::GetX((TParticles<double,3> *)*puVar3,*(int *)(puVar3 + 1));
      uVar7 = *(undefined8 *)pTVar13;
      uVar8 = *(undefined8 *)&pTVar13->field_0x8;
      uVar2 = *(undefined8 *)&pTVar13->field_0x10;
      uVar25 = 0;
      if ((int)uVar22 < local_130[0]) {
        uVar25 = ~uVar22 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (ulonglong)(uVar22 + 1);
      *(undefined8 *)(local_138.Data + uVar21) = uVar7;
      *(undefined8 *)(local_138.Data + uVar21 + 8) = uVar8;
      *(undefined8 *)(local_138.Data + uVar21 + 0x10) = uVar2;
      iVar14 = pTVar10->ArrayNum;
      uVar21 = uVar21 + 0x18;
      param_1 = pTVar10;
      uVar24 = uVar24 + 8;
    } while ((int)(uVar22 + 1) < iVar14);
  }
  iVar14 = local_130[0];
  local_e8.DataPtr = (TVector<double> *)local_138.Data;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  if ((local_130[0] < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_e8.ArrayNum = iVar14;
  VoronoiNeighbors(&local_e8,&local_148,true,__real_3f1a36e2e0000000);
  uVar25 = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  if (0 < local_148.ArrayNum) {
    local_110 = 0;
    local_118 = 0;
    do {
      uVar22 = 0;
      local_120 = 0;
      uVar23 = ~uVar25 >> 0x1f;
      while( true ) {
        lVar11 = local_110;
        lVar1 = local_118;
        uVar15 = 0;
        if ((int)uVar25 < local_148.ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)(local_148.AllocatorInstance.Data + lVar1 + 8) <= (int)uVar22) break;
        uVar15 = 0;
        if ((int)uVar25 < param_1->ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + lVar11);
        uVar15 = 0;
        if ((int)uVar25 < local_148.ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar9.Data = local_148.AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar22 <
            *(int *)(local_148.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10 + 8)) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        param_1 = local_128;
        uVar15 = *(uint *)(local_120 +
                          *(longlong *)&FVar9.Data[(longlong)(int)uVar25 * 0x10].field_0x0);
        uVar16 = 0;
        if ((int)uVar15 < local_128->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
        local_d0 = pTVar4;
        local_d8 = pTVar5;
        if (pTVar4 < pTVar5) {
          local_d0 = pTVar5;
          local_d8 = pTVar4;
        }
        uVar15 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        uVar16 = ((uint)((ulonglong)local_d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d0 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_c8.Hash.SecondaryData;
          }
          iVar14 = *(int *)((longlong)FVar18 +
                           (ulonglong)
                           (local_c8.HashSize - 1U &
                           ((uVar15 >> 2) + 0x9e3779b9 + (uVar16 >> 0x10 ^ uVar16) + uVar15 * 0x40 ^
                           uVar15)) * 4);
          while (iVar14 != -1) {
            lVar1 = local_c8.Elements._0_8_ + (longlong)iVar14 * 0x18;
            if ((*(TPBDRigidParticleHandleImp<double,3,1> **)
                  (local_c8.Elements._0_8_ + (longlong)iVar14 * 0x18) == local_d8) &&
               (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 8) == local_d0)) {
              if ((iVar14 != -1) && (lVar1 != 0)) goto LAB_143c866b1;
              break;
            }
            iVar14 = *(int *)(lVar1 + 0x10);
          }
        }
        bVar12 = (*(code *)local_108._8_8_)(pTVar4,pTVar5);
        if (bVar12) {
          if ((pTVar4 == pTVar5) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Child1 != Child2",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                  ,0xa92,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar5->field_0xc) {
            pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5;
          }
          pTVar17 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar4->field_0xc) {
            pTVar17 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar4;
          }
          ConnectClusteredNodes(pTVar17,pTVar19,local_f0,local_f8);
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
          ::
          Emplace<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_const_&>
                    (&local_c8,
                     (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                      *)local_108,(bool *)&local_d8);
        }
LAB_143c866b1:
        uVar22 = uVar22 + 1;
        local_120 = local_120 + 4;
      }
      local_118 = lVar1 + 0x10;
      local_110 = lVar11 + 8;
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < local_148.ArrayNum);
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_148.AllocatorInstance.Data,
             local_148.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_148.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<`Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps'::__l2::<lambda_1>_> @ 143c86790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::
UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<_Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps_::__l2::<lambda_1>_>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  TVector<double,3> *pTVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar16;
  ForElementType<FSetElementId> FVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_168 [32];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_138;
  ForAnyElementType local_128;
  int local_120 [2];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_e8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e0;
  TPBDRigidParticleHandleImp<double,3,1> *local_d0;
  TPBDRigidParticleHandleImp<double,3,1> *local_c8;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar20 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120[0] = 0;
  local_120[1] = 0;
  local_118 = param_1;
  local_f8._8_8_ = param_4;
  local_e8 = param_3;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1->ArrayNum,&local_128,local_120,local_120 + 1);
  pTVar10 = local_118;
  iVar13 = param_1->ArrayNum;
  uVar23 = uVar20;
  uVar24 = uVar20;
  if (0 < iVar13) {
    do {
      uVar19 = (uint)uVar20;
      uVar21 = 0;
      if ((int)uVar19 < iVar13) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar3 = *(undefined8 **)((pTVar10->AllocatorInstance).Data + uVar24);
      pTVar12 = TParticles<double,3>::GetX((TParticles<double,3> *)*puVar3,*(int *)(puVar3 + 1));
      uVar7 = *(undefined8 *)pTVar12;
      uVar8 = *(undefined8 *)&pTVar12->field_0x8;
      uVar2 = *(undefined8 *)&pTVar12->field_0x10;
      uVar21 = 0;
      if ((int)uVar19 < local_120[0]) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      *(undefined8 *)(local_128.Data + uVar23) = uVar7;
      *(undefined8 *)(local_128.Data + uVar23 + 8) = uVar8;
      *(undefined8 *)(local_128.Data + uVar23 + 0x10) = uVar2;
      iVar13 = pTVar10->ArrayNum;
      param_1 = pTVar10;
      uVar23 = uVar23 + 0x18;
      uVar24 = uVar24 + 8;
    } while ((int)(uVar19 + 1) < iVar13);
  }
  iVar13 = local_120[0];
  local_e0.DataPtr = (TVector<double> *)local_128.Data;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  if ((local_120[0] < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_e0.ArrayNum = iVar13;
  VoronoiNeighbors(&local_e0,&local_138,true,__real_3f1a36e2e0000000);
  uVar21 = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  if (0 < local_138.ArrayNum) {
    local_108 = 0;
    local_100 = 0;
    do {
      uVar19 = 0;
      local_110 = 0;
      uVar22 = ~uVar21 >> 0x1f;
      while( true ) {
        lVar1 = local_100;
        uVar14 = 0;
        if ((int)uVar21 < local_138.ArrayNum) {
          uVar14 = uVar22;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)(local_138.AllocatorInstance.Data + lVar1 + 8) <= (int)uVar19) break;
        uVar14 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar14 = uVar22;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + local_108);
        uVar14 = 0;
        if ((int)uVar21 < local_138.ArrayNum) {
          uVar14 = uVar22;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar9.Data = local_138.AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar19 <
            *(int *)(local_138.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8)) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        param_1 = local_118;
        uVar14 = *(uint *)(local_110 +
                          *(longlong *)&FVar9.Data[(longlong)(int)uVar21 * 0x10].field_0x0);
        uVar15 = 0;
        if ((int)uVar14 < local_118->ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 8);
        local_c8 = pTVar4;
        local_d0 = pTVar5;
        if (pTVar4 < pTVar5) {
          local_c8 = pTVar5;
          local_d0 = pTVar4;
        }
        uVar14 = ((uint)((ulonglong)local_d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d0 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        uVar15 = ((uint)((ulonglong)local_c8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_c8 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
          FVar17 = (ForElementType<FSetElementId>)&local_b8.Hash;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_b8.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar17 +
                           (ulonglong)
                           (local_b8.HashSize - 1U &
                           ((uVar14 >> 2) + 0x9e3779b9 + (uVar15 >> 0x10 ^ uVar15) + uVar14 * 0x40 ^
                           uVar14)) * 4);
          while (iVar13 != -1) {
            lVar1 = local_b8.Elements._0_8_ + (longlong)iVar13 * 0x18;
            if ((*(TPBDRigidParticleHandleImp<double,3,1> **)
                  (local_b8.Elements._0_8_ + (longlong)iVar13 * 0x18) == local_d0) &&
               (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 8) == local_c8)) {
              if ((iVar13 != -1) && (lVar1 != 0)) goto LAB_143c86cd9;
              break;
            }
            iVar13 = *(int *)(lVar1 + 0x10);
          }
        }
        bVar11 = IsOverlappingConnection
                           (pTVar4,pTVar5,(param_2.Parameters)->ConnectionGraphBoundsFilteringMargin
                           );
        if (bVar11) {
          if ((pTVar4 == pTVar5) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Child1 != Child2",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                  ,0xa92,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar18 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar5->field_0xc) {
            pTVar18 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5;
          }
          pTVar16 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar4->field_0xc) {
            pTVar16 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar4;
          }
          ConnectClusteredNodes
                    (pTVar16,pTVar18,local_e8,
                     (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)local_f8._8_8_);
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
          ::
          Emplace<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_const_&>
                    (&local_b8,
                     (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                      *)local_f8,(bool *)&local_d0);
        }
LAB_143c86cd9:
        uVar19 = uVar19 + 1;
        local_110 = local_110 + 4;
      }
      local_108 = local_108 + 8;
      local_100 = lVar1 + 0x10;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < local_138.ArrayNum);
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data,
             local_138.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<`Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulation'::__l5::<lambda_1>_> @ 143c86db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::
UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<_Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulation_::__l5::<lambda_1>_>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  bool bVar12;
  TVector<double,3> *pTVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar17;
  ForElementType<FSetElementId> FVar18;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_168 [32];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_138;
  ForAnyElementType local_128;
  int local_120 [2];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_e8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e0;
  TPBDRigidParticleHandleImp<double,3,1> *local_d0;
  TPBDRigidParticleHandleImp<double,3,1> *local_c8;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar20 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120[0] = 0;
  local_120[1] = 0;
  local_118 = param_1;
  local_f8._8_8_ = param_4;
  local_e8 = param_3;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1->ArrayNum,&local_128,local_120,local_120 + 1);
  pTVar10 = local_118;
  iVar14 = param_1->ArrayNum;
  uVar21 = uVar20;
  uVar24 = uVar20;
  if (0 < iVar14) {
    do {
      uVar22 = (uint)uVar20;
      uVar25 = 0;
      if ((int)uVar22 < iVar14) {
        uVar25 = ~uVar22 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar3 = *(undefined8 **)((pTVar10->AllocatorInstance).Data + uVar24);
      pTVar13 = TParticles<double,3>::GetX((TParticles<double,3> *)*puVar3,*(int *)(puVar3 + 1));
      uVar7 = *(undefined8 *)pTVar13;
      uVar8 = *(undefined8 *)&pTVar13->field_0x8;
      uVar2 = *(undefined8 *)&pTVar13->field_0x10;
      uVar25 = 0;
      if ((int)uVar22 < local_120[0]) {
        uVar25 = ~uVar22 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (ulonglong)(uVar22 + 1);
      *(undefined8 *)(local_128.Data + uVar21) = uVar7;
      *(undefined8 *)(local_128.Data + uVar21 + 8) = uVar8;
      *(undefined8 *)(local_128.Data + uVar21 + 0x10) = uVar2;
      iVar14 = pTVar10->ArrayNum;
      uVar21 = uVar21 + 0x18;
      param_1 = pTVar10;
      uVar24 = uVar24 + 8;
    } while ((int)(uVar22 + 1) < iVar14);
  }
  iVar14 = local_120[0];
  local_e0.DataPtr = (TVector<double> *)local_128.Data;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  if ((local_120[0] < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_e0.ArrayNum = iVar14;
  VoronoiNeighbors(&local_e0,&local_138,true,__real_3f1a36e2e0000000);
  uVar25 = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  if (0 < local_138.ArrayNum) {
    local_100 = 0;
    local_108 = 0;
    do {
      uVar22 = 0;
      local_110 = 0;
      uVar23 = ~uVar25 >> 0x1f;
      while( true ) {
        lVar11 = local_100;
        lVar1 = local_108;
        uVar15 = 0;
        if ((int)uVar25 < local_138.ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)(local_138.AllocatorInstance.Data + lVar1 + 8) <= (int)uVar22) break;
        uVar15 = 0;
        if ((int)uVar25 < param_1->ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + lVar11);
        uVar15 = 0;
        if ((int)uVar25 < local_138.ArrayNum) {
          uVar15 = uVar23;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar9.Data = local_138.AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar22 <
            *(int *)(local_138.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10 + 8)) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        param_1 = local_118;
        uVar15 = *(uint *)(local_110 +
                          *(longlong *)&FVar9.Data[(longlong)(int)uVar25 * 0x10].field_0x0);
        uVar16 = 0;
        if ((int)uVar15 < local_118->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
        local_c8 = pTVar4;
        local_d0 = pTVar5;
        if (pTVar4 < pTVar5) {
          local_c8 = pTVar5;
          local_d0 = pTVar4;
        }
        uVar15 = ((uint)((ulonglong)local_d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d0 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = uVar15 >> 0x10 ^ uVar15;
        uVar16 = ((uint)((ulonglong)local_c8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_c8 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_b8.Hash;
          if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_b8.Hash.SecondaryData;
          }
          iVar14 = *(int *)((longlong)FVar18 +
                           (ulonglong)
                           (local_b8.HashSize - 1U &
                           ((uVar15 >> 2) + 0x9e3779b9 + (uVar16 >> 0x10 ^ uVar16) + uVar15 * 0x40 ^
                           uVar15)) * 4);
          while (iVar14 != -1) {
            lVar1 = local_b8.Elements._0_8_ + (longlong)iVar14 * 0x18;
            if ((*(TPBDRigidParticleHandleImp<double,3,1> **)
                  (local_b8.Elements._0_8_ + (longlong)iVar14 * 0x18) == local_d0) &&
               (*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 8) == local_c8)) {
              if ((iVar14 != -1) && (lVar1 != 0)) goto LAB_143c8730e;
              break;
            }
            iVar14 = *(int *)(lVar1 + 0x10);
          }
        }
        bVar12 = IsOverlappingConnection
                           (pTVar4,pTVar5,(double)BoundingBoxMarginForConnectionGraphFiltering);
        if (bVar12) {
          if ((pTVar4 == pTVar5) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Child1 != Child2",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                  ,0xa92,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar5->field_0xc) {
            pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar5;
          }
          pTVar17 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar4->field_0xc) {
            pTVar17 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar4;
          }
          ConnectClusteredNodes
                    (pTVar17,pTVar19,local_e8,
                     (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)local_f8._8_8_);
          TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
          ::
          Emplace<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_const_&>
                    (&local_b8,
                     (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                      *)local_f8,(bool *)&local_d0);
        }
LAB_143c8730e:
        uVar22 = uVar22 + 1;
        local_110 = local_110 + 4;
      }
      local_108 = lVar1 + 0x10;
      local_100 = lVar11 + 8;
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < local_138.ArrayNum);
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data,
             local_138.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_138.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return;
}

// VisitCollisions<`Chaos::FRigidClustering::TrackBreakingCollision'::__l5::<lambda_1>_> @ 143c873f0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

ECollisionVisitorResult __thiscall
Chaos::FParticlePairMidPhase::
VisitCollisions<_Chaos::FRigidClustering::TrackBreakingCollision_::__l5::<lambda_1>_>
          (FParticlePairMidPhase *this,<lambda_1> *param_1,ECollisionVisitorFlags param_2)

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
            if (bVar6 == 0) goto LAB_143c874a1;
          }
          else {
            if (bVar6 == 0) goto LAB_143c874ad;
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_143c8749c;
          }
        }
        else {
LAB_143c8749c:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_143c874a1:
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_143c874d0;
          }
LAB_143c874ad:
          if ((((param_2 & VisitExpired) != VisitActiveAwake) ||
              ((*(byte *)&pFVar4->Flags & 1) != 0)) &&
             (EVar8 = `Chaos::FRigidClustering::TrackBreakingCollision'::__l5::<lambda_1>::
                      operator()(param_1,(FPBDCollisionConstraint *)pFVar11->Particle0),
             EVar8 == Stop)) {
            return Stop;
          }
        }
      }
LAB_143c874d0:
      pFVar11 = (FParticlePairMidPhase *)&pFVar11[1].Particle1;
    }
  }
  if (this->MidPhaseType == Generic) {
    iVar12 = *(int *)&this[1].ParticlePairKey.Key;
    local_90 = &this[1].Particle0;
    pFVar11 = this + 1;
    iStack_98 = 0;
    local_80 = 0;
    uStack_94 = 1;
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
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_143c87572;
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
LAB_143c87572:
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
        goto LAB_143c87670;
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
LAB_143c87670:
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
            if (bVar6 == 0) goto LAB_143c876ec;
          }
          else {
            if (bVar6 == 0) goto LAB_143c876f8;
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_143c876e7;
          }
        }
        else {
LAB_143c876e7:
          if ((param_2 & VisitDefault) == VisitActiveAwake) {
LAB_143c876ec:
            bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
            if (bVar7) goto LAB_143c87717;
          }
LAB_143c876f8:
          if ((((param_2 & VisitExpired) != VisitActiveAwake) ||
              ((*(byte *)&pFVar4->Flags & 1) != 0)) &&
             (EVar8 = `Chaos::FRigidClustering::TrackBreakingCollision'::__l5::<lambda_1>::
                      operator()(param_1,*(FPBDCollisionConstraint **)(lVar9 + 0x10)), EVar8 == Stop
             )) {
            return Stop;
          }
        }
      }
LAB_143c87717:
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
      if (bVar6 == 0) goto LAB_143c877a4;
      bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
      if (!bVar7) {
        return Continue;
      }
      goto LAB_143c87793;
    }
    if (bVar6 != 0) {
      return Continue;
    }
  }
  else {
LAB_143c87793:
    if ((param_2 & VisitDefault) != VisitActiveAwake) goto LAB_143c877a4;
  }
  bVar7 = FPBDCollisionConstraint::IsSleeping(pFVar4);
  if (bVar7) {
    return Continue;
  }
LAB_143c877a4:
  if (((param_2 & VisitExpired) == VisitActiveAwake) && ((*(byte *)&pFVar4->Flags & 1) == 0)) {
    return Continue;
  }
  EVar8 = `Chaos::FRigidClustering::TrackBreakingCollision'::__l5::<lambda_1>::operator()
                    (param_1,pFVar4);
  return (uint)(EVar8 != Stop);
}

// ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143c89060

void __thiscall
TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 143c8bb70

TVector<float,3> * __thiscall
`Chaos::FindClosestPointAndBaryOnTriangle<float,3>'::__l2::<lambda_3>::operator()
          (void *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar4 = *(float **)((longlong)this + 8);
  pfVar5 = *(float **)((longlong)this + 0x10);
  puVar6 = *(undefined4 **)this;
  fVar9 = *pfVar5 - *pfVar4;
  fVar8 = pfVar5[1] - pfVar4[1];
  pfVar7 = *(float **)((longlong)this + 0x18);
  fVar10 = pfVar5[2] - pfVar4[2];
  *puVar6 = 0;
  fVar1 = __real_3f800000;
  fVar8 = ((pfVar7[1] - pfVar4[1]) * fVar8 + (*pfVar7 - *pfVar4) * fVar9 +
          (pfVar7[2] - pfVar4[2]) * fVar10) / (fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  puVar6[2] = fVar8;
  *(float *)(*(longlong *)this + 4) = fVar1 - *(float *)(*(longlong *)this + 8);
  pfVar4 = *(float **)((longlong)this + 8);
  pfVar5 = *(float **)((longlong)this + 0x10);
  fVar1 = *(float *)(*(longlong *)this + 4);
  fVar8 = *(float *)(*(longlong *)this + 8);
  fVar9 = pfVar4[1];
  fVar10 = pfVar4[2];
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  *(float *)__return_storage_ptr__ = fVar8 * *pfVar5 + fVar1 * *pfVar4;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1 * fVar9 + fVar8 * fVar2;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar1 * fVar10 + fVar8 * fVar3;
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 143c8c0b0

void * __thiscall
Chaos::TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints>::_scalar_deleting_destructor_
          (TIndexedConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ConstraintIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143c8c100

void * __thiscall
Chaos::TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints>::_scalar_deleting_destructor_
          (TIndexedContainerConstraintHandle<Chaos::FPBDNullConstraints> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 143c8c170

void * __thiscall
Chaos::TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints>::_scalar_deleting_destructor_
          (TPBDIndexedConstraintContainer<Chaos::FPBDNullConstraints> *this,uint param_1)

{
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143c8c1b0

void * __thiscall
Chaos::TSimpleConstraintContainerSolver<Chaos::FPBDNullConstraints>::_scalar_deleting_destructor_
          (TSimpleConstraintContainerSolver<Chaos::FPBDNullConstraints> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143c8c1f0

void * __thiscall
Chaos::FPBDIndexedConstraintContainer::_scalar_deleting_destructor_
          (FPBDIndexedConstraintContainer *this,uint param_1)

{
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143c8c230

void * __thiscall
Chaos::Softs::FPBDLongRangeConstraintsBase::_scalar_deleting_destructor_
          (FPBDLongRangeConstraintsBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  pFVar1 = (this->TetherScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TetherScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143c8c2b0

void * __thiscall
Chaos::FPBDNullConstraintHandle::_scalar_deleting_destructor_
          (FPBDNullConstraintHandle *this,uint param_1)

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

// `scalar_deleting_destructor' @ 143c8c320

void * __thiscall
Chaos::FPBDNullConstraints::_scalar_deleting_destructor_(FPBDNullConstraints *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Handles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// AdjustClusterInertia @ 143c8de60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::AdjustClusterInertia
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,EInertiaOperations param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TVector<float,3> *pTVar13;
  TRotation<double,3> *pTVar14;
  longlong lVar15;
  uint uVar16;
  double local_138 [6];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8 [5];
  double local_90;
  double local_68;
  
  if ((param_2 & LocalInertiaDropOffDiagonalTerms) != None) {
    pTVar13 = TPBDRigidParticleHandleImp<double,3,1>::I
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    fVar2 = *(float *)pTVar13;
    fVar3 = *(float *)&pTVar13->field_0x4;
    fVar4 = *(float *)&pTVar13->field_0x8;
    pTVar14 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    local_138[4] = 0.0;
    local_f8 = 0;
    local_138[1] = 0.0;
    local_f0 = 0;
    local_138[2] = 0.0;
    local_108 = 0;
    local_138[3] = 0.0;
    local_100 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = ___xmm_3ff00000000000000000000000000000;
    uStack_c0 = _UNK_15061cbc8;
    local_138[0] = (double)fVar2;
    local_138[5] = (double)fVar3;
    local_e8 = (double)fVar4;
    Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)local_b8,pTVar14,(PMatrix<double,3,3> *)local_138);
    uVar5 = *(uint *)&param_1->field_0x8;
    lVar15 = (longlong)(int)uVar5;
    lVar6 = *(longlong *)param_1;
    uVar16 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x388)) {
      uVar16 = ~uVar5 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x380);
    *(float *)(lVar6 + lVar15 * 0xc) = (float)local_b8[0];
    *(float *)(lVar6 + 4 + lVar15 * 0xc) = (float)local_90;
    *(float *)(lVar6 + 8 + lVar15 * 0xc) = (float)local_68;
    dVar11 = UE::Math::TQuat<double>::Identity.W;
    dVar10 = UE::Math::TQuat<double>::Identity.Z;
    dVar9 = UE::Math::TQuat<double>::Identity.Y;
    dVar8 = UE::Math::TQuat<double>::Identity.X;
    uVar5 = *(uint *)&param_1->field_0x8;
    lVar6 = *(longlong *)param_1;
    uVar16 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x418)) {
      uVar16 = ~uVar5 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x410);
    pdVar1 = (double *)((longlong)(int)uVar5 * 0x20 + lVar6);
    *pdVar1 = dVar8;
    pdVar1[1] = dVar9;
    pdVar1 = (double *)((longlong)(int)uVar5 * 0x20 + 0x10 + lVar6);
    *pdVar1 = dVar10;
    pdVar1[1] = dVar11;
  }
  return;
}

// BuildScaledGeometry @ 143c92430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::BuildScaledGeometry
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2,TVector<double> *param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *local_res20;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
     (param_2->Reference != (FImplicitObject *)0x0)) {
    uVar4 = FImplicitObject::GetType(param_2->Reference);
    uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((uVar4 != '\x06') &&
       (((dVar3 = (param_3->field0_0x0)._s_0.X -
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,
         uVar5 = SUB84(dVar3,0) & uVar6, uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8,
         (double)CONCAT44(uVar7,uVar5) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar7,uVar5) == __real_3f1a36e2e0000000 &&
         (dVar3 = (param_3->field0_0x0)._s_0.Y -
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,
         uVar5 = SUB84(dVar3,0) & uVar6, uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8,
         (double)CONCAT44(uVar7,uVar5) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar7,uVar5) == __real_3f1a36e2e0000000)) &&
        (dVar3 = (param_3->field0_0x0)._s_0.Z -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
        uVar5 = SUB84(dVar3,0) & uVar6, uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8,
        (double)CONCAT44(uVar7,uVar5) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar7,uVar5) == __real_3f1a36e2e0000000)))) {
                    /* WARNING: Could not recover jumptable at 0x000143c924de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)&param_1->field_0x8,param_2);
      return;
    }
    dVar3 = (param_3->field0_0x0)._s_0.X - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    uVar5 = SUB84(dVar3,0) & uVar6;
    uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar5) &&
          (double)CONCAT44(uVar7,uVar5) != __real_3f1a36e2e0000000) ||
        (dVar3 = (param_3->field0_0x0)._s_0.Y -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,
        uVar5 = SUB84(dVar3,0) & uVar6, uVar7 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar5) &&
        (double)CONCAT44(uVar7,uVar5) != __real_3f1a36e2e0000000)) ||
       (dVar3 = (param_3->field0_0x0)._s_0.Z -
                UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
       uVar6 = SUB84(dVar3,0) & uVar6, uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar6) &&
       (double)CONCAT44(uVar8,uVar6) != __real_3f1a36e2e0000000)) {
      local_28 = *(undefined4 *)&param_3->field0_0x0;
      uStack_24 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
      uStack_20 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
      uStack_1c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
      local_18 = (param_3->field0_0x0)._s_0.Z;
      (**(code **)(param_2->Reference->_padding_ + 0x50))(param_2->Reference,&local_res20,&local_28)
      ;
    }
    else {
      (**(code **)(param_2->Reference->_padding_ + 0x48))(param_2->Reference,&local_res20);
    }
    (**(code **)(**(longlong **)param_1 + 0x10))
              (*(longlong **)param_1,*(undefined4 *)&param_1->field_0x8,&local_res20);
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res20 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)((longlong)local_res20 + 0xc) == 0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
  return;
}

// CleanCollisionParticles @ 143c92690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::CleanCollisionParticles
          (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 local_res10 [8];
  TAABB<double,3> local_b8 [3];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pFVar5 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
    uVar10 = (undefined4)_UNK_150a9e648;
    uVar11 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
    uVar12 = (undefined4)_UNK_150a9e6d8;
    uVar14 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
    uVar7 = (undefined4)___xmm_ffefffffffffffff7fefffffffffffff;
    uVar9 = (undefined4)((ulonglong)___xmm_ffefffffffffffff7fefffffffffffff >> 0x20);
    uVar18 = (undefined4)_UNK_1508ffb58;
    uVar20 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
    uVar15 = (undefined4)___xmm_ffefffffffffffffffefffffffffffff;
    uVar17 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
    uVar6 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
    uVar8 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar1) break;
      dVar13 = *(double *)pFVar5;
      dVar19 = *(double *)(pFVar5 + 0x10);
      dVar16 = *(double *)(pFVar5 + 8);
      dVar3 = dVar13;
      if ((double)CONCAT44(uVar8,uVar6) <= dVar13) {
        dVar3 = (double)CONCAT44(uVar8,uVar6);
      }
      if (dVar13 <= (double)CONCAT44(uVar14,uVar12)) {
        dVar13 = (double)CONCAT44(uVar14,uVar12);
      }
      dVar4 = dVar16;
      if ((double)CONCAT44(uVar11,uVar10) <= dVar16) {
        dVar4 = (double)CONCAT44(uVar11,uVar10);
      }
      pFVar5 = pFVar5 + 0x18;
      if (dVar16 <= (double)CONCAT44(uVar17,uVar15)) {
        dVar16 = (double)CONCAT44(uVar17,uVar15);
      }
      uVar6 = SUB84(dVar3,0);
      uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar3 = dVar19;
      if ((double)CONCAT44(uVar9,uVar7) <= dVar19) {
        dVar3 = (double)CONCAT44(uVar9,uVar7);
      }
      uVar12 = SUB84(dVar13,0);
      uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (dVar19 <= (double)CONCAT44(uVar20,uVar18)) {
        dVar19 = (double)CONCAT44(uVar20,uVar18);
      }
      uVar10 = SUB84(dVar4,0);
      uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar15 = SUB84(dVar16,0);
      uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar7 = SUB84(dVar3,0);
      uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar18 = SUB84(dVar19,0);
      uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
    local_b8[0].MMin._12_4_ = uVar11;
    local_b8[0].MMin._8_4_ = uVar10;
    local_b8[0].MMin._4_4_ = uVar8;
    local_b8[0].MMin._0_4_ = uVar6;
    local_b8[0].MMin._20_4_ = uVar9;
    local_b8[0].MMin._16_4_ = uVar7;
    local_b8[0].MMax._12_4_ = uVar17;
    local_b8[0].MMax._8_4_ = uVar15;
    local_b8[0].MMax._4_4_ = uVar14;
    local_b8[0].MMax._0_4_ = uVar12;
    local_b8[0].MMax._20_4_ = uVar20;
    local_b8[0].MMax._16_4_ = uVar18;
    CleanCollisionParticles(__return_storage_ptr__,param_1,local_b8,param_2);
  }
  return __return_storage_ptr__;
}

// CleanCollisionParticles @ 143c92890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143c92ff7) */
/* WARNING: Removing unreachable block (ram,0x000143c93006) */
/* WARNING: Removing unreachable block (ram,0x000143c93019) */
/* WARNING: Removing unreachable block (ram,0x000143c93065) */
/* WARNING: Removing unreachable block (ram,0x000143c93066) */
/* WARNING: Removing unreachable block (ram,0x000143c9306b) */
/* WARNING: Removing unreachable block (ram,0x000143c93075) */
/* WARNING: Removing unreachable block (ram,0x000143c9308e) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::CleanCollisionParticles
          (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1,
          TAABB<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar20;
  ulonglong uVar21;
  int iVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ForElementType<unsigned_int> FVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined8 in_XMM3_Qb;
  double dVar38;
  undefined1 auStackY_218 [32];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_1b0;
  uint local_1a0;
  uint local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  int local_174;
  long64 local_170;
  longlong local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar18 = param_1->ArrayNum;
  if ((int)uVar18 < 2) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar22 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar22;
    if (iVar22 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar22,0,&__return_storage_ptr__->AllocatorInstance,iVar22,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,(longlong)iVar22 * 0x18);
    return __return_storage_ptr__;
  }
  dVar1 = *(double *)&(param_2->MMin).field_0x8;
  dVar36 = *(double *)&(param_2->MMax).field_0x8 - dVar1;
  dVar2 = *(double *)&(param_2->MMin).field_0x10;
  dVar32 = *(double *)&param_2->MMax - *(double *)&param_2->MMin;
  dVar10 = *(double *)&(param_2->MMax).field_0x10 - dVar2;
  if (((dVar32 <= dVar36) || (dVar32 <= dVar10)) && (dVar32 = dVar10, dVar10 <= dVar36)) {
    dVar32 = dVar36;
  }
  if (dVar32 < param_3) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    if ((pFVar3 == (FScriptContainerElement *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar20 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar20;
    }
    __return_storage_ptr__->ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
               &__return_storage_ptr__->ArrayMax);
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    uVar5 = *(undefined8 *)(pFVar3 + 8);
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)(pFVar4 + 8) = uVar5;
    *(undefined8 *)(pFVar4 + 0x10) = *(undefined8 *)(pFVar3 + 0x10);
    return __return_storage_ptr__;
  }
  dVar10 = param_3 * __real_3fb999999999999a;
  if (param_3 * __real_3fb999999999999a <= __real_3f50624dcc000000) {
    dVar10 = __real_3f50624dcc000000;
  }
  dVar36 = dVar10 + *(double *)&param_2->MMax;
  *(double *)&param_2->MMin = *(double *)&param_2->MMin - dVar10;
  *(double *)&(param_2->MMin).field_0x8 = dVar1 - dVar10;
  *(double *)&(param_2->MMin).field_0x10 = dVar2 - dVar10;
  dVar14 = dVar10 + *(double *)&(param_2->MMax).field_0x8;
  dVar10 = dVar10 + *(double *)&(param_2->MMax).field_0x10;
  *(double *)&param_2->MMax = dVar36;
  *(double *)&(param_2->MMax).field_0x8 = dVar14;
  *(double *)&(param_2->MMax).field_0x10 = dVar10;
  dVar16 = __real_3fe0000000000000;
  dVar1 = *(double *)&(param_2->MMin).field_0x8;
  dVar2 = *(double *)&param_2->MMin;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = dVar2;
  dVar14 = dVar14 - dVar1;
  dVar32 = *(double *)&(param_2->MMin).field_0x10;
  dVar36 = dVar36 - dVar2;
  dVar10 = dVar10 - dVar32;
  if (((dVar36 <= dVar14) || (dVar13 = dVar36, dVar36 <= dVar10)) &&
     (dVar13 = dVar10, dVar10 <= dVar14)) {
    dVar13 = dVar14;
  }
  uVar26 = 0;
  iVar22 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  dVar36 = dVar36 * __real_3fe0000000000000;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar14 = dVar14 * __real_3fe0000000000000;
  local_1b0.ArrayNum = iVar22;
  dVar10 = dVar10 * __real_3fe0000000000000;
  if (iVar22 == 0) {
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar22,0,&local_1b0.AllocatorInstance,iVar22,&local_1b0.ArrayMax);
    memcpy(local_1b0.AllocatorInstance.Data,pFVar3,(longlong)iVar22 * 0x18);
  }
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_138,uVar18);
  uVar25 = 1;
  if (3 < uVar18) {
    uVar28 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_178 = (undefined4)lVar24;
    uVar25 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_f0 != 0) && ((int)uVar25 <= (int)local_f0)) goto LAB_143c92da7;
  local_f0 = uVar25;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar25 != 0) {
    uVar27 = uVar25;
    if (uVar25 < 2) {
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        uVar27 = 0;
        goto LAB_143c92c18;
      }
    }
    else {
LAB_143c92c18:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar27,4);
    }
    if (0 < (int)uVar25) {
      uVar29 = (ulonglong)uVar25;
      uVar28 = uVar26;
      do {
        FVar23.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_f8.Data;
        }
        uVar21 = uVar28 & (longlong)(int)uVar25 - 1U;
        uVar28 = uVar28 + 1;
        *(undefined4 *)(FVar23.Data + uVar21 * 4) = 0xffffffff;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  if (local_f0 != 0) {
    pTStack_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_198 = 0;
    uStack_194 = 1;
    uStack_184 = 0;
    uStack_180 = 0;
    uVar28 = uVar26;
    if (local_110 != 0) {
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_118;
      }
      uVar25 = *(uint *)FVar30;
      uVar29 = uVar26;
      while (uVar25 == 0) {
        uStack_180 = (int)uVar29 + 0x20;
        uVar29 = (ulonglong)uStack_180;
        iVar22 = (int)uVar28;
        local_198 = iVar22 + 1;
        uVar28 = (ulonglong)local_198;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_198)
        goto LAB_143c92d0e;
        uVar25 = ((uint *)((longlong)FVar30 + 4))[iVar22];
      }
      uStack_194 = -uVar25 & uVar25;
      uVar28 = (ulonglong)uStack_194 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_174 = (int)lVar24;
      uStack_184 = local_174 + -1 + uStack_180;
      uVar28 = (ulonglong)uStack_184;
      if ((int)local_110 < (int)uStack_184) {
LAB_143c92d0e:
        uVar28 = (ulonglong)local_110;
        uStack_184 = local_110;
      }
    }
    local_188 = 0xffffffff;
    local_160 = (longlong *)local_138;
    local_158._padding_ = CONCAT44(uStack_194,local_198);
    local_158.CurrentBitIndex = uStack_184;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_17c;
    local_158.BaseBitIndex = uStack_180;
    local_158.Array = pTStack_190;
    if ((int)uVar28 < (int)local_110) {
      do {
        lVar24 = *local_160;
        lVar31 = (longlong)(int)uVar28;
        uVar5 = *(undefined8 *)(lVar24 + lVar31 * 0x10);
        uVar25 = (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5 & local_f0 - 1;
        *(uint *)(lVar24 + 0xc + lVar31 * 0x10) = uVar25;
        FVar23.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_f8.Data;
        }
        uVar29 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar25;
        *(undefined4 *)(lVar24 + 8 + lVar31 * 0x10) = *(undefined4 *)(FVar23.Data + uVar29 * 4);
        *(int *)(FVar23.Data + uVar29 * 4) = (int)uVar28;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        uVar28 = (ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
LAB_143c92da7:
  local_1b8 = 0;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar18,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
  dVar15 = __real_3ff0000000000000;
  if (param_3 <= __real_3f1a36e2e0000000) {
    param_3 = __real_3f1a36e2e0000000;
  }
  auVar35._8_4_ = (int)in_XMM3_Qb;
  auVar35._0_8_ = dVar13;
  auVar35._12_4_ = (int)((ulonglong)in_XMM3_Qb >> 0x20);
  auVar34._8_8_ = auVar35._8_8_;
  auVar34._0_8_ = dVar13 / param_3;
  lVar24 = (longlong)auVar34._0_8_;
  if ((lVar24 != -0x8000000000000000) && ((double)lVar24 != auVar34._0_8_)) {
    auVar33._8_8_ = auVar34._0_8_;
    auVar33._0_8_ = auVar34._0_8_;
    uVar18 = movmskpd(0,auVar33);
    auVar34._0_8_ = (double)(longlong)(lVar24 - (ulonglong)(uVar18 & 1));
    auVar34._8_8_ = 0;
  }
  lVar24 = (longlong)auVar34._0_8_;
  dVar13 = dVar13 / (double)lVar24;
  uVar28 = uVar26;
  iVar22 = local_1b0.ArrayNum;
  do {
    uVar29 = local_1b8;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    uVar21 = uVar26;
    if ((longlong)uVar29 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
      uVar21 = local_1b8 & 0xffffffff;
      auVar34 = extraout_XMM0;
      iVar22 = local_1b0.ArrayNum;
    }
    if (local_138._8_4_ != local_104) {
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_138);
      uVar5 = local_138._8_8_;
      local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
      auVar34 = extraout_XMM0_00;
      if ((longlong)uVar5 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        auVar34 = extraout_XMM0_01;
      }
      uVar21 = local_1b8 & 0xffffffff;
      local_108 = -1;
      local_104 = 0;
      local_110 = 0;
      iVar22 = local_1b0.ArrayNum;
    }
    local_1a0 = 0;
    dVar38 = (double)(int)uVar28 * dVar13 * dVar16;
    if (0 < iVar22) {
      dVar11 = (double)lVar24 * dVar16;
      dVar12 = dVar15 / dVar13;
      uVar29 = uVar26;
      do {
        uVar25 = (uint)uVar29;
        uVar18 = 0;
        if ((int)uVar25 < iVar22) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), auVar34 = extraout_XMM0_02, bVar17)) {
          pcVar6 = (code *)swi(3);
          pTVar20 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar20;
        }
        lVar31 = (longlong)(int)uVar25;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = ((*(double *)(local_1b0.AllocatorInstance.Data + lVar31 * 0x18 + 8) -
                        (dVar14 + dVar1)) + dVar38) * dVar12 + dVar11;
        auVar37 = roundpd(auVar37,auVar7,1);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = ((*(double *)(local_1b0.AllocatorInstance.Data + lVar31 * 0x18) -
                        (dVar36 + dVar2)) + dVar38) * dVar12 + dVar11;
        auVar34 = roundpd(auVar34,auVar8,1);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = ((*(double *)(local_1b0.AllocatorInstance.Data + lVar31 * 0x18 + 0x10) -
                        (dVar10 + dVar32)) + dVar38) * dVar12 + dVar11;
        auVar35 = roundpd(auVar34,auVar9,1);
        local_168 = ((longlong)auVar34._0_8_ * lVar24 + (longlong)auVar37._0_8_) * lVar24 +
                    (longlong)auVar35._0_8_;
        TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                  ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_138,
                   &local_170,(bool *)&local_168);
        local_1a0 = local_1a0 + 1;
        uVar29 = (ulonglong)local_1a0;
        auVar34 = extraout_XMM0_03;
        iVar22 = local_1b0.ArrayNum;
      } while ((int)local_1a0 < local_1b0.ArrayNum);
      uVar21 = local_1b8 & 0xffffffff;
    }
    uVar29 = (ulonglong)(int)uVar21;
    if ((int)uVar21 != 0) {
      lVar31 = uVar29 << 2;
      while( true ) {
        iVar19 = (int)uVar29;
        lVar31 = lVar31 + -4;
        uVar25 = iVar19 - 1;
        uVar29 = (ulonglong)uVar25;
        uVar18 = 0;
        if ((int)uVar25 < (int)uVar21) {
          uVar18 = (uint)-iVar19 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            pTVar20 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar20;
          }
          iVar22 = local_1b0.ArrayNum;
        }
        uVar18 = *(uint *)(local_1c0.Data + lVar31);
        uVar27 = 0;
        if ((int)uVar18 < iVar22) {
          uVar27 = ~uVar18 >> 0x1f;
        }
        if (uVar27 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            pTVar20 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar20;
          }
          iVar22 = local_1b0.ArrayNum;
        }
        iVar19 = (iVar22 - uVar18) + -1;
        if (iVar19 != 0) {
          memmove(local_1b0.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18,
                  local_1b0.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18 + 0x18,
                  (longlong)iVar19 * 0x18);
          iVar22 = local_1b0.ArrayNum;
        }
        local_1b0.ArrayNum = iVar22 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&local_1b0.AllocatorInstance,iVar22 + -1,&local_1b0.ArrayMax);
        auVar34 = extraout_XMM0_04;
        iVar22 = local_1b0.ArrayNum;
        if (uVar25 == 0) break;
        uVar21 = local_1b8 & 0xffffffff;
      }
    }
    uVar18 = (int)uVar28 + 1;
    uVar28 = (ulonglong)uVar18;
  } while ((int)uVar18 < 2);
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum(&local_1b0,iVar22,Default);
  (__return_storage_ptr__->AllocatorInstance).Data = local_1b0.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_1b0.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_1b0.ArrayMax;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConnectClusteredNodes @ 143c945c0

void __cdecl
Chaos::ConnectClusteredNodes
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  ForElementType<FSetElementId> *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  float fVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_48;
  float local_40;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_38;
  float local_30;
  
  if (((param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) ||
      (param_2 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusteredChild1 && ClusteredChild2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                         ,0xa6f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  if ((param_3 !=
       (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        *)0x0) &&
     (param_4 !=
      (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
       *)0x0)) {
    pFVar1 = &(param_3->Hash).SecondaryData;
    iVar6 = *(int *)&(param_3->Elements).field_0x8;
    uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar12 = uVar12 >> 0x10 ^ uVar12;
    iVar2 = *(int *)&(param_3->Elements).field_0x34;
    if (iVar6 != iVar2) {
      FVar15 = *pFVar1;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar16 = *(int *)((longlong)FVar15 + (ulonglong)(param_3->HashSize - 1U & uVar12) * 4);
      if (iVar16 != -1) {
        do {
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar16 * 0x10) == param_1) {
            if (iVar16 != -1) goto LAB_143c94a40;
            break;
          }
          iVar16 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar16 * 0x10);
        } while (iVar16 != -1);
      }
    }
    uVar13 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    if (iVar6 != iVar2) {
      FVar15 = *pFVar1;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar6 = *(int *)((longlong)FVar15 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
      if (iVar6 != -1) {
        do {
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               (*(longlong *)&param_3->Elements + (longlong)iVar6 * 0x10) == param_2) {
            if (iVar6 != -1) goto LAB_143c94a40;
            break;
          }
          iVar6 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    bVar5 = false;
    goto LAB_143c9473e;
  }
  goto LAB_143c9481b;
LAB_143c94a40:
  bVar5 = true;
LAB_143c9473e:
  if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
    FVar15 = (param_4->Hash).SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&param_4->Hash;
    }
    iVar6 = *(int *)((longlong)FVar15 + (ulonglong)(param_4->HashSize - 1U & uVar12) * 4);
    if (iVar6 != -1) {
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
             (*(longlong *)&param_4->Elements + (longlong)iVar6 * 0x10) == param_1)
        goto LAB_143c94a48;
        iVar6 = *(int *)(*(longlong *)&param_4->Elements + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar12 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
    FVar15 = (param_4->Hash).SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&param_4->Hash;
    }
    iVar6 = *(int *)((longlong)FVar15 +
                    (ulonglong)(param_4->HashSize - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
             (*(longlong *)&param_4->Elements + (longlong)iVar6 * 0x10) == param_2)
        goto LAB_143c94a48;
        iVar6 = *(int *)(*(longlong *)&param_4->Elements + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = false;
  goto LAB_143c9480a;
LAB_143c94a48:
  bVar4 = true;
LAB_143c9480a:
  if ((bVar5) && (bVar4)) {
LAB_143c9481b:
    pfVar7 = TPBDRigidClusteredParticles<double,3>::Strains
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    pfVar8 = TPBDRigidClusteredParticles<double,3>::Strains
                       (*(TPBDRigidClusteredParticles<double,3> **)param_2,
                        *(int *)&param_2->field_0x8);
    fVar17 = (*pfVar8 + *pfVar7) * __real_3f000000;
    pTVar9 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1);
    pTVar10 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_2);
    pFVar14 = (pTVar9->AllocatorInstance).Data;
    pFVar11 = pFVar14 + (longlong)pTVar9->ArrayNum * 0x10;
    for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 0x10) {
      if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar14 == param_2)
      goto LAB_143c9493f;
    }
    pFVar14 = (pTVar9->AllocatorInstance).Data;
    local_48 = param_2;
    local_40 = fVar17;
    if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar14 + (longlong)pTVar9->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = pTVar9->ArrayNum;
    if (iVar6 == pTVar9->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar6 + 1;
    pFVar14 = (pTVar9->AllocatorInstance).Data;
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(pFVar14 + (longlong)iVar6 * 0x10) =
         local_48;
    *(float *)(pFVar14 + (longlong)iVar6 * 0x10 + 8) = local_40;
LAB_143c9493f:
    pFVar14 = (pTVar10->AllocatorInstance).Data;
    pFVar11 = pFVar14 + (longlong)pTVar10->ArrayNum * 0x10;
    for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 0x10) {
      if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar14 == param_1) {
        return;
      }
    }
    pFVar14 = (pTVar10->AllocatorInstance).Data;
    local_38 = param_1;
    local_30 = fVar17;
    if (((pFVar14 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar14 + (longlong)pTVar10->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = pTVar10->ArrayNum;
    if (iVar6 == pTVar10->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    pTVar10->ArrayNum = iVar6 + 1;
    pFVar14 = (pTVar10->AllocatorInstance).Data;
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(pFVar14 + (longlong)iVar6 * 0x10) =
         local_38;
    *(float *)(pFVar14 + (longlong)iVar6 * 0x10 + 8) = local_30;
  }
  return;
}

// GetEllipticalAxisError @ 143c9e970

bool __cdecl
Chaos::GetEllipticalAxisError
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar4 = __real_3e45798ee0000000;
  dVar9 = *(double *)&param_1->field_0x10;
  dVar7 = *(double *)&param_1->field_0x8;
  dVar1 = *(double *)param_1;
  dVar10 = *(double *)&param_2->field_0x10;
  dVar11 = dVar7 * dVar7 + dVar1 * dVar1 + dVar9 * dVar9;
  dVar3 = __real_3ff0000000000000 - dVar11;
  dVar6 = __real_3ff0000000000000 / (dVar11 + __real_3ff0000000000000);
  dVar2 = dVar6 * dVar6;
  dVar8 = (dVar3 + dVar3) * dVar2;
  dVar1 = dVar1 * *(double *)param_2 + *(double *)&param_2->field_0x8 * dVar7 + dVar10 * dVar9;
  dVar5 = dVar3 * __real_c010000000000000 * dVar2;
  dVar11 = dVar2 * dVar6 * (__real_4008000000000000 - dVar11) * dVar1 * __real_c010000000000000;
  dVar2 = (dVar9 + dVar9) * dVar8;
  dVar6 = dVar8 * dVar3 - __real_3ff0000000000000;
  dVar3 = dVar3 * dVar11 + dVar5 * dVar1;
  dVar1 = dVar7 * __real_c000000000000000 * dVar8;
  dVar9 = (dVar10 + dVar10) * dVar8 + (dVar9 + dVar9) * dVar11;
  dVar10 = *(double *)&param_2->field_0x8 * dVar5 + dVar7 * __real_c000000000000000 * dVar11;
  dVar7 = dVar3 * dVar3 + dVar9 * dVar9 + dVar10 * dVar10;
  if (__real_3e45798ee0000000 < dVar7) {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar7);
    dVar8 = dVar1 * dVar3 * dVar5 - dVar5 * dVar10 * dVar6;
    dVar10 = dVar5 * dVar10 * dVar2 - dVar5 * dVar9 * dVar1;
    dVar9 = dVar5 * dVar9 * dVar6 - dVar3 * dVar5 * dVar2;
    *(double *)param_4 = dVar10;
    *(double *)&param_4->field_0x8 = dVar8;
    *(double *)&param_4->field_0x10 = dVar9;
    *param_5 = (dVar6 * dVar9 - dVar1 * dVar10) * *(double *)&param_3->field_0x8 +
               (dVar1 * dVar8 - dVar2 * dVar9) * *(double *)param_3 +
               (dVar2 * dVar10 - dVar6 * dVar8) * *(double *)&param_3->field_0x10;
  }
  return dVar4 < dVar7;
}

// GetRatioOfReleasedParticlesToDisable @ 143c9ff40

float __cdecl
Chaos::`anonymous_namespace'::GetRatioOfReleasedParticlesToDisable(FPBDRigidsEvolutionGBF *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = (param_1->Clustering).DestructionSettings.ClusteringParticleReleaseThrottlingMinCount;
  iVar2 = (param_1->Clustering).DestructionSettings.ClusteringParticleReleaseThrottlingMaxCount -
          iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar1 = (*(int *)(param_1->_padding_ + 0x1d8) + *(int *)(param_1->_padding_ + 0x170)) - iVar1;
  if (0 < iVar2) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    fVar3 = (float)iVar1 / (float)iVar2;
    if (__real_3f800000 <= (float)iVar1 / (float)iVar2) {
      fVar3 = __real_3f800000;
    }
    return fVar3;
  }
  return __real_3f800000;
}

// GetSwingAngleY @ 143ca06c0

double __cdecl Chaos::GetSwingAngleY(TRotation<double,3> *param_1)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Atan2
                    (*(double *)&param_1->field_0x8,
                     *(double *)&param_1->field_0x18 + __real_3ff0000000000000);
  return dVar1 * __real_4010000000000000;
}

// GetSwingAngleZ @ 143ca06f0

double __cdecl Chaos::GetSwingAngleZ(TRotation<double,3> *param_1)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Atan2
                    (*(double *)&param_1->field_0x10,
                     *(double *)&param_1->field_0x18 + __real_3ff0000000000000);
  return dVar1 * __real_4010000000000000;
}

// IsAlwaysValidConnection @ 143ca3210

bool __cdecl
Chaos::IsAlwaysValidConnection
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  return true;
}

// IsOverlappingConnection @ 143ca3270

bool __cdecl
Chaos::IsOverlappingConnection
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2,double param_3)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  TAABB<double,3> *pTVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  double local_48 [8];
  
  if ((param_1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
     (param_2 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5292282805487668123>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                       ,0xb9b,"Child1 != nullptr && Child2 != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    pTVar6 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                       ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    local_48[2] = *(double *)&(pTVar6->MMin).field_0x10 - param_3;
    local_48[0] = *(double *)&pTVar6->MMin - param_3;
    local_48[3] = *(double *)&pTVar6->MMax + param_3;
    local_48[5] = *(double *)&(pTVar6->MMax).field_0x10 + param_3;
    local_48[1] = *(double *)&(pTVar6->MMin).field_0x8 - param_3;
    local_48[4] = *(double *)&(pTVar6->MMax).field_0x8 + param_3;
    pTVar6 = TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds
                       ((TGeometryParticleHandleImp<double,3,1> *)param_2);
    pTVar7 = &pTVar6->MMax;
    lVar9 = (longlong)local_48 - (longlong)pTVar7;
    lVar8 = 0;
    lVar3 = 0x18 - (longlong)pTVar7;
    while ((dVar1 = *(double *)((longlong)pTVar7 + lVar9),
           dVar1 < *(double *)pTVar7 || dVar1 == *(double *)pTVar7 &&
           (*(double *)&((TAABB<double,3> *)(pTVar7 + -1))->MMin <=
            *(double *)((longlong)local_48 + lVar3 + (longlong)pTVar7)))) {
      lVar8 = lVar8 + 1;
      pTVar7 = (TVector<double,3> *)&pTVar7->field_0x8;
      if (2 < lVar8) {
        return true;
      }
    }
  }
  return false;
}

// MoveClusterToMassOffset @ 143ca33c0

TRigidTransform<double,3> * __cdecl
Chaos::MoveClusterToMassOffset
          (TRigidTransform<double,3> *__return_storage_ptr__,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,EMassOffsetType param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  TVector<double,3> *pTVar20;
  TRigidTransform<double,3> *pTVar21;
  TRotation<double,3> *pTVar22;
  TVector<double,3> local_88;
  TRotation<double,3> local_68 [2];
  
  _Var16.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  puVar1 = &param_1->field_0x8;
  dVar10 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x0 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var15 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar10;
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] = _Var16.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] = _Var16.m128d_f64[1];
  dVar10 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW = _Var15;
  _Var15 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var16 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *(double *)&__return_storage_ptr__->field_0x18 = dVar10;
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] = _Var14.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] = _Var14.m128d_f64[1];
  dVar10 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY = _Var16;
  _Var14 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var16 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar10;
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] = _Var15.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] = _Var15.m128d_f64[1];
  dVar10 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW = _Var16;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *(double *)&__return_storage_ptr__->field_0x38 = dVar10;
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] = _Var14.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] = _Var14.m128d_f64[1];
  dVar10 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY = _Var16;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar10;
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] = _Var15.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] = _Var15.m128d_f64[1];
  dVar10 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW = _Var16;
  *(double *)&__return_storage_ptr__->field_0x58 = dVar10;
  if ((param_2 & Position) != None) {
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    uVar8 = *(undefined8 *)&pTVar20->field_0x8;
    uVar4 = *(undefined8 *)&pTVar20->field_0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar20;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar8;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    TPBDRigidParticles<double,3>::XCom
              (*(TPBDRigidParticles<double,3> **)param_1,&local_88,*(int *)puVar1);
    uVar19 = *(uint *)puVar1;
    lVar5 = *(longlong *)param_1;
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar5 + 0x30)) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TRigidTransform<double,3> *)(*pcVar7)();
        return pTVar21;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x28);
    puVar2 = (undefined8 *)(lVar5 + (longlong)(int)uVar19 * 0x18);
    *puVar2 = local_88._0_8_;
    puVar2[1] = local_88._8_8_;
    *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar19 * 0x18) = local_88._16_8_;
    pTVar20 = TParticles<double,3>::GetX(*(TParticles<double,3> **)param_1,*(int *)puVar1);
    TPBDRigidParticleHandleImp<double,3,1>::SetP
              ((TPBDRigidParticleHandleImp<double,3,1> *)param_1,pTVar20);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar19 = *(uint *)puVar1;
    lVar5 = *(longlong *)param_1;
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar5 + 0x400)) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TRigidTransform<double,3> *)(*pcVar7)();
        return pTVar21;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x3f8);
    pdVar3 = (double *)(lVar5 + (longlong)(int)uVar19 * 0x18);
    *pdVar3 = (double)uVar4;
    pdVar3[1] = (double)uVar8;
    *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar19 * 0x18) = uVar9;
  }
  if ((param_2 & Rotation) != None) {
    pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    uVar4 = *(undefined8 *)&pTVar22->field_0x8;
    uVar8 = *(undefined8 *)&pTVar22->field_0x10;
    uVar9 = *(undefined8 *)&pTVar22->field_0x18;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar22;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar8;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar9;
    TPBDRigidParticles<double,3>::RCom
              (*(TPBDRigidParticles<double,3> **)param_1,local_68,*(int *)puVar1);
    TGeometryParticleHandleImp<double,3,1>::SetR
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,local_68,false);
    uVar19 = *(uint *)puVar1;
    lVar5 = *(longlong *)param_1;
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar5 + 0x50)) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TRigidTransform<double,3> *)(*pcVar7)();
        return pTVar21;
      }
    }
    uVar18 = *(uint *)puVar1;
    lVar6 = *(longlong *)param_1;
    puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x48) + (longlong)(int)uVar19 * 0x10);
    uVar4 = *puVar2;
    uVar8 = puVar2[1];
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar6 + 0x568)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TRigidTransform<double,3> *)(*pcVar7)();
        return pTVar21;
      }
    }
    puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x560) + (longlong)(int)uVar18 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar8;
    dVar13 = UE::Math::TQuat<double>::Identity.W;
    dVar12 = UE::Math::TQuat<double>::Identity.Z;
    dVar11 = UE::Math::TQuat<double>::Identity.Y;
    dVar10 = UE::Math::TQuat<double>::Identity.X;
    uVar19 = *(uint *)puVar1;
    lVar5 = *(longlong *)param_1;
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar5 + 0x418)) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TRigidTransform<double,3> *)(*pcVar7)();
        return pTVar21;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x410);
    pdVar3 = (double *)((longlong)(int)uVar19 * 0x20 + lVar5);
    *pdVar3 = dVar10;
    pdVar3[1] = dVar11;
    pdVar3 = (double *)((longlong)(int)uVar19 * 0x20 + 0x10 + lVar5);
    *pdVar3 = dVar12;
    pdVar3[1] = dVar13;
  }
  return __return_storage_ptr__;
}

// NearPointOnEllipse @ 143ca3730

TVector<double,2> * __cdecl
Chaos::NearPointOnEllipse
          (TVector<double,2> *__return_storage_ptr__,TVector<double,2> *param_1,
          TVector<double,2> *param_2,int param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  double local_res10;
  
  dVar1 = *(double *)param_1;
  dVar14 = *(double *)&param_1->field_0x8;
  dVar8 = *(double *)param_2;
  dVar9 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar12 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar11 = *(double *)&param_2->field_0x8;
  uVar15 = SUB84(dVar11,0);
  uVar16 = (uint)((ulonglong)dVar11 >> 0x20);
  if (dVar8 < dVar11) {
    if (dVar9 < __real_3eb0c6f7a0000000) {
      if (dVar14 <= 0.0) {
        uVar15 = uVar15 ^ (uint)__xmm_80000000000000008000000000000000;
        uVar16 = uVar16 ^ __xmm_80000000000000008000000000000000._4_4_;
      }
      *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar16,uVar15);
      *(undefined8 *)__return_storage_ptr__ = 0;
      return __return_storage_ptr__;
    }
  }
  else if (dVar12 < __real_3eb0c6f7a0000000) {
    if (dVar1 <= 0.0) {
      dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    *(double *)__return_storage_ptr__ = dVar8;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  iVar5 = 0;
  dVar9 = dVar8 * dVar9;
  dVar12 = dVar11 * dVar12;
  dVar3 = dVar11 * dVar11;
  dVar4 = dVar8 * dVar8;
  dVar6 = dVar12 - dVar3;
  dVar2 = dVar9 - dVar4;
  if (dVar2 <= dVar6) {
    dVar2 = dVar6;
  }
  dVar6 = local_res10;
  if (0 < param_3) {
    do {
      local_res10 = __real_3ff0000000000000 / (dVar4 + dVar2);
      dVar6 = __real_3ff0000000000000 / (dVar3 + dVar2);
      dVar7 = local_res10 * dVar9;
      dVar10 = dVar12 * dVar6;
      dVar7 = dVar7 * dVar7;
      dVar10 = dVar10 * dVar10;
      dVar13 = (dVar7 + dVar10) - __real_3ff0000000000000;
      if (dVar13 < param_4) {
        *(double *)__return_storage_ptr__ = dVar1 * dVar4 * local_res10;
        *(double *)&__return_storage_ptr__->field_0x8 = dVar14 * dVar3 * dVar6;
        return __return_storage_ptr__;
      }
      iVar5 = iVar5 + 1;
      dVar2 = dVar2 + dVar13 / (dVar7 * local_res10 * __real_4000000000000000 +
                               dVar10 * __real_4000000000000000 * dVar6);
    } while (iVar5 < param_3);
  }
  dVar6 = dVar14 * dVar3 * dVar6;
  dVar14 = dVar1 * dVar4 * local_res10;
  dVar11 = dVar6 / dVar11;
  dVar8 = dVar14 / dVar8;
  dVar1 = __real_3ff0000000000000 / SQRT(dVar8 * dVar8 + dVar11 * dVar11);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1 * dVar6;
  *(double *)__return_storage_ptr__ = dVar1 * dVar14;
  return __return_storage_ptr__;
}

// ToInternalConnectionMethod @ 143caafb0

EConnectionMethod __cdecl Chaos::ToInternalConnectionMethod(EClusterUnionMethod param_1)

{
  if (param_1 == PointImplicit) {
    return PointImplicit;
  }
  if (param_1 == DelaunayTriangulation) {
    return DelaunayTriangulation;
  }
  if (param_1 == MinimalSpanningSubsetDelaunayTriangulation) {
    return MinimalSpanningSubsetDelaunayTriangulation;
  }
  if (param_1 != PointImplicitAugmentedWithMinimalDelaunay) {
    if (param_1 != BoundsOverlapFilteredDelaunayTriangulation) {
      return None;
    }
    return BoundsOverlapFilteredDelaunayTriangulation;
  }
  return PointImplicitAugmentedWithMinimalDelaunay;
}

// UpdateClusterFilterDataFromChildren @ 143cac190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::UpdateClusterFilterDataFromChildren
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  uint uVar4;
  IPhysicsProxyBase *pIVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_GCUpdateFilterData> FVar9;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar10;
  FCollisionFilterData *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FColor_u_0 FVar16;
  undefined1 uVar17;
  FScriptContainerElement *pFVar18;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res10;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  FName local_90;
  FScriptContainerElement *local_88 [2];
  FName local_78;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  undefined8 uStack_50;
  
  FVar9 = StatPtr_STAT_GCUpdateFilterData;
  local_res10 = param_2;
  if (StatPtr_STAT_GCUpdateFilterData == (FThreadSafeStaticStat<FStat_STAT_GCUpdateFilterData>)0x0)
  {
    pFVar8 = ::FName::FName(&local_res20,"STAT_GCUpdateFilterData");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_GCUpdateFilterData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCUpdateFilterData,*pFVar8,
                       L"Geoemtry Collection Update Filter Data","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_90 = *(FName *)FVar9;
  uVar17 = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  local_res18.Bits = local_res18.Bits & 0xffffff00;
  FVar16.Bits = (uint)local_90.ComparisonIndex.Value;
  uVar12 = local_90.Number;
  if ((FVar16.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      uVar17 = 1;
      local_res18._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar16.Bits;
        uStackX_1c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                   ,0x1d9);
        uVar17 = 3;
        local_res18._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar16.Bits;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(local_90,CycleScopeStart);
      local_res18.Bits = CONCAT31(local_res18.Bits._1_3_,uVar17) | 4;
      goto LAB_143cac2e8;
    }
  }
  local_90 = local_78;
LAB_143cac2e8:
  uVar12 = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)uVar12;
  bVar6 = false;
  pFVar18 = (param_2->AllocatorInstance).Data;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  local_58 = (FScriptContainerElement *)0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_88[0] = pFVar18 + uVar13 * 8;
  local_68 = (FScriptContainerElement *)0x0;
  while( true ) {
    pFVar7 = local_88[0];
    if (param_2->ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (pFVar18 == pFVar7) goto LAB_143cac54f;
    FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )TGeometryParticlesImp<double,3,0>::ShapesArray
                         ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)pFVar18,
                          *(int *)(*(undefined8 **)pFVar18 + 1));
    iVar3 = *(int *)((longlong)FVar10 + 0x10);
    piVar1 = (int *)((longlong)FVar10 + 0x10);
    if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
         ((longlong)FVar10 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0
       ) {
      FVar10 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 *)((longlong)FVar10 + 8);
    }
    FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )((longlong)FVar10 + (longlong)iVar3 * 8);
    while( true ) {
      if (*piVar1 != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
      }
      if (FVar10 == FVar2) break;
      lVar15 = *(longlong *)FVar10;
      if (lVar15 != 0) {
        lVar14 = 0x50;
        if ((*(byte *)(lVar15 + 8) & 3) != 0) {
          lVar14 = 0x48;
        }
        pFVar11 = FCollisionData::GetSimData((FCollisionData *)(lVar14 + lVar15));
        local_58 = *(FScriptContainerElement **)pFVar11;
        uStack_50._0_4_ = pFVar11->Word2;
        uStack_50._4_4_ = pFVar11->Word3;
        if ((((pFVar11->Word0 == 0) && (pFVar11->Word1 == 0)) && (pFVar11->Word2 == 0)) &&
           (pFVar11->Word3 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar15 = 0x50;
        if ((*(byte *)(*(longlong *)FVar10 + 8) & 3) != 0) {
          lVar15 = 0x48;
        }
        pFVar11 = FCollisionData::GetQueryData((FCollisionData *)(lVar15 + *(longlong *)FVar10));
        local_68 = *(FScriptContainerElement **)pFVar11;
        uStack_60._0_4_ = pFVar11->Word2;
        uStack_60._4_4_ = pFVar11->Word3;
        if (bVar6) goto LAB_143cac42d;
      }
      FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )((longlong)FVar10 + 8);
    }
    if (bVar6) break;
    pFVar18 = pFVar18 + 8;
    uVar13 = (ulonglong)uVar12;
    param_2 = local_res10;
  }
LAB_143cac42d:
  FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
           TGeometryParticlesImp<double,3,0>::ShapesArray
                     (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8);
  iVar3 = *(int *)((longlong)FVar10 + 0x10);
  piVar1 = (int *)((longlong)FVar10 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> *)
       ((longlong)FVar10 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar10 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               *)((longlong)FVar10 + 8);
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar10 + (longlong)iVar3 * 8);
LAB_143cac461:
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (FVar10 == FVar2) {
LAB_143cac54f:
      FVar16 = local_res18;
      if ((local_res18.Bits & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((FVar16.Bits & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((FVar16.Bits & 4) != 0) {
        FThreadStats::AddMessage(local_90,CycleScopeEnd);
      }
      return;
    }
    lVar15 = *(longlong *)FVar10;
    uVar12 = *(uint *)(lVar15 + 8);
    if ((uVar12 & 3) == 0) {
      pIVar5 = *(IPhysicsProxyBase **)&((FCollisionData *)(lVar15 + 0x48))->QueryData;
      local_88[0] = local_68;
      local_88[1] = (FScriptContainerElement *)uStack_60;
      FCollisionData::SetQueryData
                ((FCollisionData *)(lVar15 + 0x50),(FCollisionFilterData *)local_88);
      uVar4 = *(uint *)(lVar15 + 0xc);
      *(uint *)(lVar15 + 0xc) = uVar4 | 1;
      if (((uVar4 == 0) && (pIVar5 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,uVar12 >> 3);
      }
    }
    else {
      FCollisionData::SetQueryData
                ((FCollisionData *)(lVar15 + 0x48),(FCollisionFilterData *)&local_68);
    }
    lVar15 = *(longlong *)FVar10;
    uVar12 = *(uint *)(lVar15 + 8);
    if ((uVar12 & 3) != 0) {
      FCollisionData::SetSimData
                ((FCollisionData *)(lVar15 + 0x48),(FCollisionFilterData *)&local_58);
LAB_143cac542:
      FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )((longlong)FVar10 + 8);
      goto LAB_143cac461;
    }
    pIVar5 = *(IPhysicsProxyBase **)&((FCollisionData *)(lVar15 + 0x48))->QueryData;
    local_88[0] = local_58;
    local_88[1] = (FScriptContainerElement *)uStack_50;
    FCollisionData::SetSimData((FCollisionData *)(lVar15 + 0x50),(FCollisionFilterData *)local_88);
    uVar4 = *(uint *)(lVar15 + 0xc);
    *(uint *)(lVar15 + 0xc) = uVar4 | 1;
    if (((uVar4 != 0) || (pIVar5 == (IPhysicsProxyBase *)0x0)) ||
       (pIVar5->Solver == (FPhysicsSolverBase *)0x0)) goto LAB_143cac542;
    FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,uVar12 >> 3);
    FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )((longlong)FVar10 + 8);
  } while( true );
}

// UpdateClusterMassProperties @ 143cac5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::UpdateClusterMassProperties
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar20;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  bool bVar31;
  bool bVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterMassProperties> FVar34;
  TVector<double,3> *pTVar35;
  TTransform<double> *pTVar36;
  FMassProperties *pFVar37;
  TVector<float,3> *pTVar38;
  longlong lVar39;
  FScriptContainerElement *pFVar40;
  FNameEntryId FVar41;
  FName FVar42;
  int iVar43;
  uint uVar44;
  undefined1 *puVar45;
  uint *puVar46;
  TBitArray<FDefaultBitArrayAllocator> *pTVar47;
  uint uVar48;
  longlong lVar49;
  double *pdVar50;
  uint uVar51;
  uint uVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auStackY_7c8 [32];
  undefined1 local_767 [7];
  TArray<Chaos::FMassProperties,TSizedDefaultAllocator<32>_> local_760;
  FColor_u_0 local_750 [2];
  uint local_748;
  uint uStack_744;
  FName local_740;
  FName local_738;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_730;
  FName local_728;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_718;
  uint uStack_710;
  uint uStack_70c;
  undefined1 *local_708;
  undefined4 uStack_700;
  uint uStack_6fc;
  uint local_6f8;
  uint uStack_6f4;
  int iStack_6f0;
  undefined4 uStack_6ec;
  int local_6e8;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_6e0;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_6d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6d0;
  undefined8 uStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  longlong lStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  double local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  double dStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  double local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  FName local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  undefined1 local_5a0 [16];
  double local_590;
  double local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  double dStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  double local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined8 uStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  double dStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  double local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  FMassProperties local_198;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  FVar34 = StatPtr_STAT_UpdateClusterMassProperties;
  local_730 = param_1;
  local_6e0 = param_2;
  if (StatPtr_STAT_UpdateClusterMassProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterMassProperties>)0x0) {
    pFVar33 = ::FName::FName(&local_5d8,"STAT_UpdateClusterMassProperties");
    FVar34 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterMassProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateClusterMassProperties,
                        *pFVar33,L"TPBDRigidClustering<>::UpdateClusterMassProperties()",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar42 = *(FName *)FVar34;
  bVar14 = false;
  bVar15 = false;
  local_728.ComparisonIndex.Value = 0;
  local_728.Number = 0;
  bVar31 = false;
  bVar32 = false;
  FVar41 = FVar42.ComparisonIndex.Value;
  uVar44 = FVar42.Number;
  if ((FVar41.Value != 0) || (uVar44 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_750[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_750[0]._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar14 = false;
      bVar15 = true;
      bVar31 = false;
      bVar32 = true;
      if (-1 < CpuChannel->Enabled) {
        local_740.ComparisonIndex.Value = FVar41.Value;
        local_740.Number = uVar44;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_740,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                   ,0x2c);
        bVar14 = true;
        bVar15 = true;
        bVar31 = true;
        bVar32 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_748 = FVar41.Value;
      uStack_744 = uVar44;
      local_738 = FVar42;
      FThreadStats::AddMessage(FVar42,CycleScopeStart);
      bVar31 = true;
      goto LAB_143cac723;
    }
  }
  bVar15 = bVar32;
  bVar14 = bVar31;
  bVar31 = false;
  local_738 = local_728;
  FVar42 = local_728;
LAB_143cac723:
  uVar18 = _UNK_15061cbc8;
  uVar13 = ___xmm_3ff00000000000000000000000000000;
  dVar11 = 0.0;
  local_688 = 0;
  local_6a8 = 0.0;
  dStack_6a0 = 0.0;
  local_698 = 0;
  uStack_690 = 0;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = ___xmm_3ff00000000000000000000000000000;
  uStack_660 = _UNK_15061cbc8;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = ___xmm_3ff00000000000000000000000000000;
  uStack_5e0 = _UNK_15061cbc8;
  local_658 = 0.0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  dStack_630 = 0.0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_608 = 0.0;
  uStack_600 = 0;
  if (0 < *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34) {
    TGeometryParticleHandleImp<double,3,1>::GetTransformXR
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (TRigidTransform<double,3> *)&local_258);
    uVar44 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    local_760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_760.ArrayNum = 0;
    local_760.ArrayMax = 0;
    if ((int)uVar44 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar44);
    }
    if (0 < (int)uVar44) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,uVar44,&local_760.AllocatorInstance,0,&local_760.ArrayMax);
    }
    uVar44 = *(uint *)&(param_2->Elements).field_0x28;
    pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uVar52 = 0;
    uStack_70c = 1;
    uStack_6fc = uVar52;
    uStack_710 = uVar52;
    local_6f8 = uVar52;
    if (uVar44 != 0) {
      puVar46 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar46 == (uint *)0x0) {
        puVar46 = (uint *)pTVar47;
      }
      uVar48 = *puVar46;
      local_6f8 = 0;
      uStack_710 = 0;
      while (uVar48 == 0) {
        lVar39 = (longlong)(int)uStack_710;
        local_6f8 = local_6f8 + 0x20;
        uStack_710 = uStack_710 + 1;
        uStack_6fc = uVar44;
        if ((int)((uVar44 - 1) + ((int)(uVar44 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_710)
        goto LAB_143cac90f;
        uVar48 = puVar46[lVar39 + 1];
      }
      uStack_70c = -uVar48 & uVar48;
      uVar2 = (ulonglong)uStack_70c * 2 + 1;
      lVar39 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_6e8 = (int)lVar39;
      uStack_6fc = (local_6f8 - 1) + local_6e8;
      if ((int)uVar44 < (int)uStack_6fc) {
        uStack_6fc = uVar44;
      }
    }
LAB_143cac90f:
    iStack_6f0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    uVar48 = *(uint *)&(param_2->Elements).field_0x28;
    uStack_700 = 0xffffffff;
    TStack_6d0._padding_ = CONCAT44(uStack_70c,uStack_710);
    uVar51 = uVar48 & 0xffffffe0;
    TStack_6d0.CurrentBitIndex = uStack_6fc;
    TStack_6d0.UnvisitedBitMask = 0xffffffff;
    iVar43 = (int)uVar48 >> 5;
    TStack_6d0._28_4_ = uStack_6fc;
    TStack_6d0.BaseBitIndex = local_6f8;
    uStack_6b0 = CONCAT44(uStack_6ec,iStack_6f0);
    local_718 = param_2;
    local_708 = (undefined1 *)pTVar47;
    uStack_6f4 = uStack_6fc;
    local_6d8 = param_2;
    TStack_6d0.Array = pTVar47;
    if ((((int)uVar48 < 0) || ((int)uVar44 < (int)uVar48)) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar32)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar20 = local_6e0;
    dVar17 = _UNK_150689688;
    dVar19 = ___xmm_3ff00000000000003ff0000000000000;
    dVar53 = _UNK_150689518;
    dVar8 = ___xmm_00000000000000003ff0000000000000;
    uVar44 = *(uint *)&(param_2->Elements).field_0x28;
    if (uVar48 != uVar44) {
      puVar45 = *(undefined1 **)&(param_2->Elements).field_0x20;
      if (puVar45 == (undefined1 *)0x0) {
        puVar45 = (undefined1 *)pTVar47;
      }
      uVar48 = -1 << ((byte)uVar48 & 0x1f) & *(uint *)(puVar45 + (longlong)iVar43 * 4);
      while (uVar48 == 0) {
        lVar39 = (longlong)iVar43;
        uVar51 = uVar51 + 0x20;
        iVar43 = iVar43 + 1;
        uVar48 = uVar44;
        if ((int)((uVar44 - 1) + ((int)(uVar44 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar43)
        goto LAB_143caca30;
        uVar48 = *(uint *)(puVar45 + lVar39 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar48 & uVar48) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_748 = (uint)lVar39;
      uVar48 = (local_748 - 1) + uVar51;
      if ((int)uVar44 < (int)uVar48) {
        uVar48 = uVar44;
      }
    }
LAB_143caca30:
    while( true ) {
      pTVar21 = local_6d8;
      if (*(int *)&(local_6d8->Elements).field_0x8 - *(int *)&(local_6d8->Elements).field_0x34 !=
          (int)uStack_6b0) {
        local_767[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_767);
      }
      if (((TStack_6d0.CurrentBitIndex == uVar48) && (TStack_6d0.Array == pTVar47)) &&
         (pTVar21 == pTVar20)) break;
      plVar5 = *(longlong **)
                (*(longlong *)&pTVar21->Elements + (longlong)TStack_6d0.CurrentBitIndex * 0x10);
      uVar44 = *(uint *)(plVar5 + 1);
      lVar49 = (longlong)(int)uVar44;
      lVar39 = *plVar5;
      uVar51 = uVar52;
      if ((int)uVar44 < *(int *)(lVar39 + 0x50)) {
        uVar51 = ~uVar44 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar39 = *(longlong *)(lVar39 + 0x48);
      fVar3 = *(float *)(lVar39 + lVar49 * 0x10);
      uVar4 = *(undefined8 *)(lVar39 + 8 + lVar49 * 0x10);
      dVar9 = (double)(float)((ulonglong)uVar4 >> 0x20);
      dVar10 = (double)*(float *)(lVar39 + 4 + lVar49 * 0x10);
      pTVar35 = TParticles<double,3>::GetX((TParticles<double,3> *)*plVar5,(int)plVar5[1]);
      local_378.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
      local_378.Rotation.ZW.m128d_f64[0] = (double)(float)uVar4;
      local_378.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_378.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_378.Rotation.XY.m128d_f64[0] = (double)fVar3;
      local_378.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_378.Translation.ZW.m128d_f64[0] = *(double *)&pTVar35->field_0x10;
      local_378.Translation.XY.m128d_f64[0] = *(double *)pTVar35;
      local_378.Translation.XY.m128d_f64[1] = *(double *)&pTVar35->field_0x8;
      local_378.Translation.ZW.m128d_f64[1] = 0.0;
      local_378.Scale3D.XY.m128d_f64[0] = dVar19;
      local_378.Scale3D.XY.m128d_f64[1] = dVar17;
      local_378.Scale3D.ZW.m128d_f64[0] = dVar8;
      local_378.Scale3D.ZW.m128d_f64[1] = dVar53;
      pTVar36 = UE::Math::TTransform<double>::GetRelativeTransform(&local_378,&local_1f8,&local_258)
      ;
      uVar44 = *(uint *)(plVar5 + 1);
      lVar39 = *plVar5;
      local_318.Rotation.XY.m128d_f64[0] = (pTVar36->Rotation).XY.m128d_f64[0];
      local_318.Rotation.XY.m128d_f64[1] = (pTVar36->Rotation).XY.m128d_f64[1];
      local_318.Rotation.ZW.m128d_f64[0] = (pTVar36->Rotation).ZW.m128d_f64[0];
      local_318.Rotation.ZW.m128d_f64[1] = (pTVar36->Rotation).ZW.m128d_f64[1];
      local_318.Translation.XY.m128d_f64[0] = (pTVar36->Translation).XY.m128d_f64[0];
      local_318.Translation.XY.m128d_f64[1] = (pTVar36->Translation).XY.m128d_f64[1];
      local_318.Translation.ZW.m128d_f64[0] = (pTVar36->Translation).ZW.m128d_f64[0];
      local_318.Translation.ZW.m128d_f64[1] = (pTVar36->Translation).ZW.m128d_f64[1];
      local_318.Scale3D.XY.m128d_f64[0] = (pTVar36->Scale3D).XY.m128d_f64[0];
      local_318.Scale3D.XY.m128d_f64[1] = (pTVar36->Scale3D).XY.m128d_f64[1];
      local_318.Scale3D.ZW.m128d_f64[0] = (pTVar36->Scale3D).ZW.m128d_f64[0];
      local_318.Scale3D.ZW.m128d_f64[1] = (pTVar36->Scale3D).ZW.m128d_f64[1];
      uVar51 = uVar52;
      if ((int)uVar44 < *(int *)(lVar39 + 0x418)) {
        uVar51 = ~uVar44 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar49 = *plVar5;
      pdVar50 = (double *)((longlong)(int)uVar44 * 0x20 + *(longlong *)(lVar39 + 0x410));
      uVar44 = *(uint *)(plVar5 + 1);
      uVar51 = uVar52;
      if ((int)uVar44 < *(int *)(lVar49 + 0x400)) {
        uVar51 = ~uVar44 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar39 = *(longlong *)(lVar49 + 0x3f8);
      local_2b8.Rotation.ZW.m128d_f64[0] = pdVar50[2];
      local_2b8.Rotation.ZW.m128d_f64[1] = pdVar50[3];
      local_2b8.Rotation.XY.m128d_f64[0] = *pdVar50;
      local_2b8.Rotation.XY.m128d_f64[1] = pdVar50[1];
      pdVar50 = (double *)(lVar39 + (longlong)(int)uVar44 * 0x18);
      local_2b8.Translation.XY.m128d_f64[0] = *pdVar50;
      local_2b8.Translation.XY.m128d_f64[1] = pdVar50[1];
      local_2b8.Translation.ZW.m128d_f64[0] =
           *(double *)(lVar39 + 0x10 + (longlong)(int)uVar44 * 0x18);
      local_3d8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_3d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_3d8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
      local_3d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_3d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_3d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_3d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_3d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_3d8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_3d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_3d8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2b8.Scale3D.XY.m128d_f64[0] = dVar19;
      local_2b8.Scale3D.XY.m128d_f64[1] = dVar17;
      local_3d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_3d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_3d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_2b8.Scale3D.ZW.m128d_f64[0] = dVar8;
      local_2b8.Scale3D.ZW.m128d_f64[1] = dVar53;
      UE::Math::TTransform<double>::Multiply(&local_3d8,&local_2b8,&local_318);
      dVar29 = local_3d8.Translation.XY.m128d_f64[1];
      dVar28 = local_3d8.Translation.XY.m128d_f64[0];
      uVar44 = *(uint *)(plVar5 + 1);
      lVar39 = *plVar5;
      dVar9 = local_3d8.Rotation.XY.m128d_f64[0];
      dVar10 = local_3d8.Rotation.XY.m128d_f64[1];
      dVar26 = local_3d8.Rotation.ZW.m128d_f64[0];
      dVar27 = local_3d8.Rotation.ZW.m128d_f64[1];
      dVar30 = local_3d8.Translation.ZW.m128d_f64[0];
      local_4c8 = local_3d8.Scale3D.XY.m128d_f64[0];
      dStack_4c0 = local_3d8.Scale3D.XY.m128d_f64[1];
      local_4b8 = local_3d8.Scale3D.ZW.m128d_f64[0];
      dStack_4b0 = local_3d8.Scale3D.ZW.m128d_f64[1];
      local_458 = 0.0;
      local_438 = 0;
      local_418 = 0;
      uStack_450 = 0;
      dStack_430 = 0.0;
      uStack_410 = 0;
      local_448 = 0;
      local_428 = 0;
      local_408 = 0.0;
      uStack_440 = 0;
      uStack_420 = 0;
      uStack_400 = 0;
      local_488 = 0.0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0.0;
      dStack_490 = 0.0;
      local_478 = 0.0;
      dStack_470 = 0.0;
      local_468 = (double)uVar13;
      dStack_460 = (double)uVar18;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = uVar13;
      uStack_3e0 = uVar18;
      uVar51 = uVar52;
      if ((int)uVar44 < *(int *)(lVar39 + 0x3d0)) {
        uVar51 = ~uVar44 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4a8 = *(undefined8 *)(*(longlong *)(lVar39 + 0x3c8) + (longlong)(int)uVar44 * 8);
      uVar44 = *(uint *)(plVar5 + 1);
      lVar49 = (longlong)(int)uVar44;
      lVar39 = *plVar5;
      uVar51 = uVar52;
      if ((int)uVar44 < *(int *)(lVar39 + 0x388)) {
        uVar51 = ~uVar44 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar39 = *(longlong *)(lVar39 + 0x380);
      local_528 = 0;
      uStack_520 = 0;
      local_578 = 0;
      uStack_570 = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_558 = 0;
      uStack_550 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_518 = uVar13;
      uStack_510 = uVar18;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = uVar13;
      uStack_3e0 = uVar18;
      local_498 = dVar28;
      dStack_490 = dVar29;
      local_478 = dVar9;
      dStack_470 = dVar10;
      local_468 = dVar26;
      dStack_460 = dVar27;
      local_588 = (double)*(float *)(lVar39 + lVar49 * 0xc);
      dStack_560 = (double)*(float *)(lVar39 + 4 + lVar49 * 0xc);
      uStack_580 = 0;
      uStack_450 = 0;
      local_568 = 0;
      local_438 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_5a8 = dVar30;
      local_488 = dVar30;
      local_538 = (double)*(float *)(lVar39 + 8 + lVar49 * 0xc);
      local_5b8 = dVar28;
      dStack_5b0 = dVar29;
      uStack_530 = 0;
      uStack_400 = 0;
      local_458 = local_588;
      dStack_430 = dStack_560;
      local_408 = local_538;
      if (((local_760.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a8) &&
          ((FScriptContainerElement *)&local_4a8 <
           local_760.AllocatorInstance.Data + (longlong)local_760.ArrayMax * 0xd0)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar32)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar43 = local_760.ArrayNum;
      if (local_760.ArrayNum == local_760.ArrayMax) {
        iVar43 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10d0,&local_760.AllocatorInstance,&local_760.ArrayMax);
      }
      local_760.ArrayNum = iVar43 + 1;
      pFVar40 = local_760.AllocatorInstance.Data + (longlong)iVar43 * 0xd0;
      *(undefined8 *)pFVar40 = local_4a8;
      *(undefined8 *)(pFVar40 + 8) = uStack_4a0;
      *(double *)(pFVar40 + 0x10) = local_498;
      *(double *)(pFVar40 + 0x18) = dStack_490;
      *(double *)(pFVar40 + 0x20) = local_488;
      *(undefined8 *)(pFVar40 + 0x28) = uStack_480;
      *(double *)(pFVar40 + 0x30) = local_478;
      *(double *)(pFVar40 + 0x38) = dStack_470;
      *(double *)(pFVar40 + 0x40) = local_468;
      *(double *)(pFVar40 + 0x48) = dStack_460;
      *(double *)(pFVar40 + 0x50) = local_458;
      *(undefined8 *)(pFVar40 + 0x58) = uStack_450;
      *(undefined8 *)(pFVar40 + 0x60) = local_448;
      *(undefined8 *)(pFVar40 + 0x68) = uStack_440;
      *(undefined8 *)(pFVar40 + 0x70) = local_438;
      *(double *)(pFVar40 + 0x78) = dStack_430;
      *(undefined8 *)(pFVar40 + 0x80) = local_428;
      *(undefined8 *)(pFVar40 + 0x88) = uStack_420;
      *(undefined8 *)(pFVar40 + 0x90) = local_418;
      *(undefined8 *)(pFVar40 + 0x98) = uStack_410;
      *(double *)(pFVar40 + 0xa0) = local_408;
      *(undefined8 *)(pFVar40 + 0xa8) = uStack_400;
      *(undefined8 *)(pFVar40 + 0xb0) = local_3f8;
      *(undefined8 *)(pFVar40 + 0xb8) = uStack_3f0;
      TStack_6d0.UnvisitedBitMask = TStack_6d0.UnvisitedBitMask & ~TStack_6d0._padding_._4_4_;
      *(undefined8 *)(pFVar40 + 0xc0) = local_3e8;
      *(undefined8 *)(pFVar40 + 200) = uStack_3e0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6d0);
      pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar20->Elements).field_0x10;
    }
    pFVar37 = Combine(&local_198,&local_760);
    FVar42 = local_738;
    local_6a8 = pFVar37->Mass;
    dStack_6a0 = pFVar37->Volume;
    local_698 = *(undefined8 *)&pFVar37->CenterOfMass;
    uStack_690 = *(undefined8 *)&(pFVar37->CenterOfMass).field_0x8;
    local_688 = *(undefined8 *)&(pFVar37->CenterOfMass).field_0x10;
    lStack_680 = pFVar37->_padding_;
    local_678 = *(undefined8 *)&pFVar37->RotationOfMass;
    uStack_670 = *(undefined8 *)&(pFVar37->RotationOfMass).field_0x8;
    local_668 = *(undefined8 *)&(pFVar37->RotationOfMass).field_0x10;
    uStack_660 = *(undefined8 *)&(pFVar37->RotationOfMass).field_0x18;
    local_658 = *(double *)&pFVar37->InertiaTensor;
    uStack_650 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x8;
    local_648 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x10;
    uStack_640 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x18;
    local_638 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x20;
    dStack_630 = *(double *)&(pFVar37->InertiaTensor).field_0x28;
    local_628 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x30;
    uStack_620 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x38;
    local_618 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x40;
    uStack_610 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x48;
    local_608 = *(double *)&(pFVar37->InertiaTensor).field_0x50;
    uStack_600 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x58;
    local_5f8 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x60;
    uStack_5f0 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x68;
    local_5e8 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x70;
    uStack_5e0 = *(undefined8 *)&(pFVar37->InertiaTensor).field_0x78;
    param_1 = local_730;
    if (local_760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_760.AllocatorInstance.Data);
      param_1 = local_730;
    }
  }
  dVar19 = local_608;
  dVar53 = dStack_630;
  dVar8 = local_658;
  uVar4 = local_688;
  uVar18 = uStack_690;
  uVar13 = local_698;
  uVar44 = *(uint *)&((TPBDRigidParticleHandleImp<double,3,1> *)param_1)->field_0x8;
  lVar39 = *(longlong *)param_1;
  uVar48 = SUB84(dStack_630,0);
  uVar2 = (ulonglong)dStack_630 >> 0x20;
  uVar51 = SUB84(local_608,0);
  uVar16 = (ulonglong)local_608 >> 0x20;
  uVar52 = 0;
  if ((int)uVar44 < *(int *)(lVar39 + 0x400)) {
    uVar52 = ~uVar44 >> 0x1f;
  }
  if ((uVar52 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar25 = uStack_660;
  uVar24 = local_668;
  uVar23 = uStack_670;
  uVar22 = local_678;
  lVar39 = *(longlong *)(lVar39 + 0x3f8);
  puVar1 = (undefined8 *)(lVar39 + (longlong)(int)uVar44 * 0x18);
  *puVar1 = uVar13;
  puVar1[1] = uVar18;
  *(undefined8 *)(lVar39 + 0x10 + (longlong)(int)uVar44 * 0x18) = uVar4;
  uVar44 = *(uint *)&((TPBDRigidParticleHandleImp<double,3,1> *)param_1)->field_0x8;
  lVar39 = *(longlong *)param_1;
  uVar52 = 0;
  if ((int)uVar44 < *(int *)(lVar39 + 0x418)) {
    uVar52 = ~uVar44 >> 0x1f;
  }
  if ((uVar52 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar39 = *(longlong *)(lVar39 + 0x410);
  puVar1 = (undefined8 *)((longlong)(int)uVar44 * 0x20 + lVar39);
  *puVar1 = uVar22;
  puVar1[1] = uVar23;
  puVar1 = (undefined8 *)((longlong)(int)uVar44 * 0x20 + 0x10 + lVar39);
  *puVar1 = uVar24;
  puVar1[1] = uVar25;
  pdVar50 = TPBDRigidParticleHandleImp<double,3,1>::M
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  dVar9 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  uVar44 = SUB84(local_6a8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar52 = (uint)((ulonglong)local_6a8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar32 = (double)CONCAT44(uVar52,uVar44) != __real_3e45798ee2308c3a;
  bVar6 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar52,uVar44);
  *pdVar50 = local_6a8;
  if (bVar6 && bVar32) {
    dVar11 = dVar17 / local_6a8;
  }
  pdVar50 = TPBDRigidParticleHandleImp<double,3,1>::InvM
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  *pdVar50 = dVar11;
  pTVar38 = TPBDRigidParticleHandleImp<double,3,1>::I
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  *(float *)pTVar38 = (float)dVar8;
  *(float *)&pTVar38->field_0x4 = (float)dVar53;
  *(float *)&pTVar38->field_0x8 = (float)dVar19;
  uVar44 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar52 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar52,uVar44) < dVar9 || (double)CONCAT44(uVar52,uVar44) == dVar9) ||
      (uVar48 = uVar48 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar44 = (uint)uVar2 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar44,uVar48) < dVar9 || (double)CONCAT44(uVar44,uVar48) == dVar9)) ||
     (uVar51 = uVar51 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar44 = (uint)uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar44,uVar51) < dVar9 || (double)CONCAT44(uVar44,uVar51) == dVar9)) {
    dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    auVar12._4_8_ = _UNK_15061cc88;
    auVar12._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    auVar54._0_8_ = auVar12._0_8_ << 0x20;
    auVar54._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar54._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_590 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar53 = auVar54._8_8_;
    local_5a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar8 = dVar17 / dVar8;
    dVar53 = dVar17 / dVar53;
    local_5c0 = dVar17 / dVar19;
    uVar13 = local_5c0;
    local_5d0 = dVar8;
    local_5c8 = dVar53;
  }
  uVar44 = *(uint *)&((TPBDRigidParticleHandleImp<double,3,1> *)param_1)->field_0x8;
  lVar49 = (longlong)(int)uVar44;
  lVar39 = *(longlong *)param_1;
  uVar52 = 0;
  if ((int)uVar44 < *(int *)(lVar39 + 0x3a0)) {
    uVar52 = ~uVar44 >> 0x1f;
  }
  if ((uVar52 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar39 = *(longlong *)(lVar39 + 0x398);
  *(float *)(lVar39 + lVar49 * 0xc) = (float)dVar8;
  *(float *)(lVar39 + 4 + lVar49 * 0xc) = (float)dVar53;
  *(float *)(lVar39 + 8 + lVar49 * 0xc) = (float)(double)uVar13;
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar31) {
    FThreadStats::AddMessage(FVar42,CycleScopeEnd);
  }
  return;
}

// UpdateCollisionFlags @ 143cad9e0

void __cdecl
Chaos::UpdateCollisionFlags(TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,bool param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  FImplicitObjectUnion *this;
  bool *pbVar5;
  undefined8 *puVar6;
  TAABB<double,3> *pTVar7;
  undefined1 local_38 [48];
  
  this = (FImplicitObjectUnion *)
         TGeometryParticleHandleImp<double,3,1>::GetGeometry
                   ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if (this != (FImplicitObjectUnion *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
    if (param_2) {
      *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    }
    pbVar5 = TGeometryParticlesImp<double,3,0>::HasBounds
                       (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8);
    *pbVar5 = true;
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x90))(this,local_38);
    pTVar7 = TGeometryParticlesImp<double,3,0>::LocalBounds
                       (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8);
    uVar3 = puVar6[1];
    *(undefined8 *)&pTVar7->MMin = *puVar6;
    *(undefined8 *)&(pTVar7->MMin).field_0x8 = uVar3;
    *(undefined8 *)&(pTVar7->MMin).field_0x10 = puVar6[2];
    uVar3 = puVar6[4];
    *(undefined8 *)&pTVar7->MMax = puVar6[3];
    *(undefined8 *)&(pTVar7->MMax).field_0x8 = uVar3;
    *(undefined8 *)&(pTVar7->MMax).field_0x10 = puVar6[5];
    cVar2 = (char)this->_padding_;
    if (((cVar2 == '\x05') || (cVar2 == '\x0f')) && (((this->Flags).Bits & 1) == 0)) {
      FImplicitObjectUnion::CheckNotLocked(this);
      (this->Flags).Bits = (this->Flags).Bits | 1;
      FImplicitObjectUnion::RebuildBVH(this);
    }
    LOCK();
    plVar1 = &this->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// UpdateGeometry @ 143cae8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::UpdateGeometry
          (TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_2,TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                   *param_3,TRefCountPtr<Chaos::FImplicitObject> *param_4,
          FClusterCreationParameters *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  FImplicitObject *pFVar9;
  TAtomic<FMinimalName> TVar10;
  FScriptContainerElement *pFVar11;
  FBVHParticles *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [12];
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  bool bVar26;
  ulonglong uVar27;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar28;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar29;
  double adVar30 [2];
  double dVar31;
  double dVar32;
  bool bVar33;
  uchar uVar34;
  bool bVar35;
  int iVar36;
  TStatId TVar37;
  TRotation<double,3> *pTVar38;
  TVector<double,3> *pTVar39;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar40;
  FRigidClusteredFlags_u_0 *pFVar41;
  TTransform<double> *pTVar42;
  TImplicitObjectTransformed<double,3,1> *pTVar43;
  FLevelSet *pFVar44;
  ClusterId *pCVar45;
  TRigidTransform<double,3> *pTVar46;
  FName *pFVar47;
  TRefCountPtr<Chaos::FImplicitObjectUnionClustered> *pTVar48;
  FImplicitObjectUnionClustered *pFVar49;
  FLevelSet *pFVar50;
  FThreadStats *pFVar51;
  FThreadStatsPool *pFVar52;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar53;
  FString *pFVar54;
  TSphere<double,3> *this;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar55;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_PointsBVH> FVar56;
  FImplicitObjectUnion *this_00;
  bool *pbVar57;
  undefined8 *puVar58;
  TAABB<double,3> *pTVar59;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar60;
  uint uVar61;
  uint uVar62;
  longlong lVar63;
  FLevelSet *pFVar64;
  FName FVar65;
  FNameEntryId FVar66;
  uint uVar67;
  int iVar68;
  uint uVar69;
  longlong lVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  double dVar88;
  double unaff_XMM6 [2];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auStackY_9c8 [32];
  FLevelSet *local_960;
  undefined1 local_958;
  undefined1 local_957 [7];
  uint local_950;
  uint uStack_94c;
  uint local_948;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_940;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_930;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_920;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_910;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_900;
  uint local_8f0;
  FName local_8e8;
  FCycleCounter local_8e0;
  FLevelSet *local_8d0;
  TRefCountPtr<Chaos::FImplicitObject> local_8c8;
  FCycleCounter local_8c0;
  FCycleCounter local_8b0;
  FCycleCounter local_8a0;
  FCycleCounter local_890;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_880;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_878;
  undefined8 local_858;
  FColor_u_0 local_850 [2];
  FImplicitObjectUnionClustered *local_848;
  FColor_u_0 local_840 [2];
  TSphere<double,3> *local_838;
  FImplicitObjectUnionClustered *local_830;
  TRefCountPtr<Chaos::FImplicitObject> local_828;
  TRefCountPtr<Chaos::FImplicitObject> local_820;
  FName local_818;
  FImplicitObjectUnionClustered *local_810;
  FLevelSet *local_808;
  FName local_800;
  FName local_7f8;
  FName local_7e8;
  TVector<int,3>_u_0 local_7d8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_7c8;
  undefined1 local_7b8 [24];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_780;
  FStatMessage local_760;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_750;
  FStatMessage local_740;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_730;
  LARGE_INTEGER local_728;
  TRefCountPtr<Chaos::FImplicitObject> *local_720;
  LARGE_INTEGER local_718;
  undefined1 local_710 [12];
  uint uStack_704;
  TBitArray<FDefaultBitArrayAllocator> *local_700;
  undefined8 uStack_6f8;
  longlong local_6f0;
  int iStack_6e8;
  undefined4 uStack_6e4;
  FErrorReporter local_6e0;
  FSourceLocation local_6c8;
  FSourceLocation local_6a8;
  FSourceLocation local_688;
  FSourceLocation local_668;
  FSourceLocation local_648;
  undefined1 local_628 [40];
  int local_600;
  undefined4 uStack_5fc;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_5f8;
  longlong lStack_5f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  int local_5d0;
  undefined4 uStack_5cc;
  TRefCountPtr<Chaos::FImplicitObjectUnionClustered> local_5b8 [2];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  TVector<double,3> local_590;
  TVector<double,3> local_578;
  FName local_560 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_550 [2];
  FName local_530;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_528;
  longlong lStack_520;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined1 local_4e0 [16];
  double local_4d0;
  TRangedForConstIterator local_4c8;
  undefined1 local_498 [16];
  double local_488;
  FString local_480;
  undefined1 local_468 [72];
  double local_420;
  double local_418;
  TRotation<double,3> local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e8;
  undefined1 local_3c8 [48];
  double local_398 [2];
  double local_388 [2];
  double local_378 [2];
  double local_368 [2];
  double local_358 [2];
  double local_348 [2];
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [88];
  double local_1c0;
  ForAnyElementType local_1a8;
  TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_198;
  void *local_158;
  undefined4 local_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_9c8;
  pFVar64 = (FLevelSet *)0x0;
  uVar69 = 0;
  local_948 = 0;
  local_8e8 = (FName)param_1;
  local_730 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)param_3;
  local_720 = param_4;
  TVar37 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry,1> *)
                      &StatPtr_STAT_UpdateGeometry);
  local_688.Impl._Line = 0x10f;
  local_688.Impl._Column = 3;
  local_688.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
  ;
  local_890.StatId.ComparisonIndex.Value = 0;
  local_890.StatId.Number = 0;
  local_688.Impl._Function =
       "void __cdecl Chaos::UpdateGeometry(class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class TSet<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,struct DefaultKeyFuncs<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,0>,class FDefaultSetAllocator> &,const class TMap<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,0> > &,const class TRefCountPtr<class Chaos::FImplicitObject> &,const struct Chaos::FClusterCreationParameters &)"
  ;
  local_890.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_890,*(TStatIdData **)&(TVar37.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_688);
  uVar67 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_930.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_930.ArrayNum = 0;
  local_930.ArrayMax = 0;
  local_920.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_920.ArrayNum = 0;
  local_920.ArrayMax = 0;
  if ((int)uVar67 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar67);
  }
  if (0 < (int)uVar67) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar67,&local_930.AllocatorInstance,0,&local_930.ArrayMax);
  }
  uVar67 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if ((int)uVar67 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar67);
  }
  if (local_920.ArrayMax < (int)uVar67) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar67,&local_920.AllocatorInstance,local_920.ArrayNum,&local_920.ArrayMax);
  }
  pTVar38 = TGeometryParticleHandleImp<double,3,1>::GetR
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1,&local_408);
  pTVar39 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  dVar76 = _UNK_150689688;
  dVar88 = ___xmm_3ff00000000000003ff0000000000000;
  dVar82 = _UNK_150689518;
  dVar71 = ___xmm_00000000000000003ff0000000000000;
  local_338.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar38->field_0x10;
  local_338.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar38->field_0x18;
  local_338.Rotation.XY.m128d_f64[0] = *(double *)pTVar38;
  local_338.Rotation.XY.m128d_f64[1] = *(double *)&pTVar38->field_0x8;
  uVar67 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_338.Translation.XY.m128d_f64[0] = *(double *)pTVar39;
  local_338.Translation.XY.m128d_f64[1] = *(double *)&pTVar39->field_0x8;
  local_338.Translation.ZW.m128d_f64[1] = 0.0;
  local_338.Translation.ZW.m128d_f64[0] = (double)*(ulonglong *)&pTVar39->field_0x10;
  local_338.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_338.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_338.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_338.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_910.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_910.ArrayNum = 0;
  local_910.ArrayMax = 0;
  local_900.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_900.ArrayNum = 0;
  local_900.ArrayMax = 0;
  if ((int)uVar67 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar67);
  }
  if (0 < (int)uVar67) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar67,&local_900.AllocatorInstance,0,&local_900.ArrayMax);
  }
  if (((param_4->Reference == (FImplicitObject *)0x0) && (param_5->bCopyCollisionParticles == false)
      ) || (param_5->CollisionParticles != (FBVHParticles *)0x0)) {
    bVar35 = false;
  }
  else {
    bVar35 = true;
  }
  local_8f0 = (uint)param_5 & 0xffffff00;
  TVar37 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherObjects,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherObjects,1>
                       *)&StatPtr_STAT_UpdateGeometry_GatherObjects);
  local_668.Impl._Line = 0x120;
  local_668.Impl._Column = 4;
  local_668.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
  ;
  local_668.Impl._Function =
       "void __cdecl Chaos::UpdateGeometry(class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class TSet<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,struct DefaultKeyFuncs<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,0>,class FDefaultSetAllocator> &,const class TMap<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,0> > &,const class TRefCountPtr<class Chaos::FImplicitObject> &,const struct Chaos::FClusterCreationParameters &)"
  ;
  local_8e0.StatId.ComparisonIndex.Value = 0;
  local_8e0.StatId.Number = 0;
  local_8e0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_8e0,*(TStatIdData **)&(TVar37.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_668);
  uVar67 = 0;
  if (bVar35) {
    puVar1 = &(param_2->Elements).field_0x10;
    local_7a0._padding_._0_4_ = 0;
    local_7a0._padding_._4_4_ = 1;
    local_7a0.UnvisitedBitMask = 0xffffffff;
    local_7a0.CurrentBitIndex = 0;
    local_7a0.BaseBitIndex = 0;
    local_7a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(param_2->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7a0);
    }
    TStack_878._padding_ = CONCAT44(local_7a0._padding_._4_4_,(undefined4)local_7a0._padding_);
    TStack_878._16_8_ = CONCAT44(local_7a0.CurrentBitIndex,local_7a0.UnvisitedBitMask);
    TStack_878._24_8_ = CONCAT44(local_7a0._28_4_,local_7a0.BaseBitIndex);
    iStack_6e8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    TStack_878.Array = local_7a0.Array;
    local_858._0_4_ = iStack_6e8;
    local_700 = local_7a0.Array;
    uStack_6e4 = local_858._4_4_;
    local_880 = param_2;
    local_710._0_8_ = param_2;
    unique0x1000376f = TStack_878._padding_;
    uStack_6f8 = TStack_878._16_8_;
    local_6f0 = TStack_878._24_8_;
    pTVar40 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_3e8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(param_2->Elements).field_0x28);
    TStack_878._padding_ = pTVar40->_padding_;
    TStack_878.Array = pTVar40->Array;
    TStack_878.UnvisitedBitMask = pTVar40->UnvisitedBitMask;
    TStack_878.CurrentBitIndex = pTVar40->CurrentBitIndex;
    TStack_878._24_8_ = *(undefined8 *)&pTVar40->BaseBitIndex;
    local_4c8.InitialNum =
         *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
    local_858._0_4_ = local_4c8.InitialNum;
    local_4c8._44_4_ = local_858._4_4_;
    local_880 = param_2;
    local_4c8._padding_ = (longlong)param_2;
    local_4c8._padding_ = TStack_878._padding_;
    local_4c8._padding_ = (longlong)TStack_878.Array;
    local_4c8._padding_ = TStack_878._16_8_;
    local_4c8._padding_ = TStack_878._24_8_;
    bVar33 = TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_710,&local_4c8);
    pFVar50 = pFVar64;
    if (bVar33) {
      do {
        plVar8 = *(longlong **)
                  (*(longlong *)
                    (TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_710._0_8_ + (longlong)uStack_6f8._4_4_ * 0x10);
        uVar62 = *(uint *)(plVar8 + 1);
        lVar70 = *plVar8;
        uVar69 = uVar67;
        if ((int)uVar62 < *(int *)(lVar70 + 0x4c0)) {
          uVar69 = ~uVar62 >> 0x1f;
        }
        if ((uVar69 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar69 = uVar67;
        if (*(longlong *)(*(longlong *)(lVar70 + 0x4b8) + (longlong)(int)uVar62 * 8) != 0) {
          if ((int)uVar62 < *(int *)(lVar70 + 0x4c0)) {
            uVar69 = ~uVar62 >> 0x1f;
          }
          if ((uVar69 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar69 = *(uint *)(*(longlong *)
                              (*(longlong *)(lVar70 + 0x4b8) + (longlong)(int)uVar62 * 8) + 0x18);
        }
        uVar69 = (int)pFVar50 + uVar69;
        pFVar50 = (FLevelSet *)(ulonglong)uVar69;
        uStack_6f8 = CONCAT44(uStack_6f8._4_4_,(uint)uStack_6f8 & ~uStack_704);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_710 + 8));
        bVar33 = TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_710,&local_4c8);
      } while (bVar33);
      if ((int)uVar69 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulong64)pFVar50);
      }
    }
    param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_8e8;
    if (local_910.ArrayMax < (int)uVar69) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar69,&local_910.AllocatorInstance,local_910.ArrayNum,&local_910.ArrayMax);
      param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_8e8;
    }
  }
  puVar1 = &(param_2->Elements).field_0x10;
  local_780._padding_._0_4_ = 0;
  local_780._padding_._4_4_ = 1;
  local_780.UnvisitedBitMask = 0xffffffff;
  local_780.CurrentBitIndex = 0;
  local_780.BaseBitIndex = 0;
  local_780.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_2->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_780);
  }
  TStack_878._padding_ = CONCAT44(local_780._padding_._4_4_,(undefined4)local_780._padding_);
  TStack_878.CurrentBitIndex = local_780.CurrentBitIndex;
  TStack_878.UnvisitedBitMask = local_780.UnvisitedBitMask;
  TStack_878._28_4_ = local_780._28_4_;
  TStack_878.BaseBitIndex = local_780.BaseBitIndex;
  local_600 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_628._16_8_ = local_780.Array;
  local_858 = CONCAT44(uStack_5fc,local_600);
  TStack_878.Array = local_780.Array;
  local_880 = param_2;
  local_628._0_8_ = param_2;
  local_628._8_8_ = TStack_878._padding_;
  local_628._24_8_ = TStack_878._16_8_;
  local_628._32_8_ = TStack_878._24_8_;
  pTVar40 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_628,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->Elements).field_0x28);
  lStack_5f0 = pTVar40->_padding_;
  pTStack_5e8 = pTVar40->Array;
  uStack_5e0._0_4_ = pTVar40->UnvisitedBitMask;
  uStack_5e0._4_4_ = pTVar40->CurrentBitIndex;
  local_518._0_8_ = pTVar40->Array;
  local_518._8_4_ = pTVar40->UnvisitedBitMask;
  local_518._12_4_ = pTVar40->CurrentBitIndex;
  uStack_5d8 = *(undefined8 *)&pTVar40->BaseBitIndex;
  local_5d0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_500 = CONCAT44(uStack_5cc,local_5d0);
  pFVar50 = pFVar64;
  local_5f8 = param_2;
  local_528 = param_2;
  lStack_520 = lStack_5f0;
  local_508 = uStack_5d8;
  while( true ) {
    pTVar28 = local_880;
    if (*(int *)&(local_880->Elements).field_0x8 - *(int *)&(local_880->Elements).field_0x34 !=
        (int)local_858) {
      local_958 = 0;
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_958);
    }
    uVar69 = (uint)pFVar50;
    if (((TStack_878.CurrentBitIndex == local_518._12_4_) &&
        (TStack_878.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_518._0_8_)) &&
       (pTVar28 == local_528)) break;
    local_398[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_398[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_960 = *(FLevelSet **)
                 (*(longlong *)&pTVar28->Elements + (longlong)TStack_878.CurrentBitIndex * 0x10);
    local_388[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_388[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_378[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_378[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_368[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_368[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_358[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_358[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_348[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_348[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    pFVar44 = pFVar64;
    if (2 < *(byte *)((longlong)&local_960->_padding_ + 4)) {
      pFVar44 = local_960;
    }
    if ((pFVar44 == (FLevelSet *)0x0) ||
       (pFVar41 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)pFVar44->_padding_,
                              (int)pFVar44->_padding_)->field0_0x0, (pFVar41->Bits & 8) == 0)) {
      uVar62 = (uint)local_960->_padding_;
      lVar63 = (longlong)(int)uVar62;
      lVar70 = local_960->_padding_;
      uVar61 = uVar67;
      if ((int)uVar62 < *(int *)(lVar70 + 0x50)) {
        uVar61 = ~uVar62 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar70 = *(longlong *)(lVar70 + 0x48);
      fVar4 = *(float *)(lVar70 + lVar63 * 0x10);
      fVar5 = *(float *)(lVar70 + 4 + lVar63 * 0x10);
      uVar6 = *(undefined8 *)(lVar70 + 8 + lVar63 * 0x10);
      pTVar39 = TParticles<double,3>::GetX
                          ((TParticles<double,3> *)local_960->_padding_,(int)local_960->_padding_);
      local_2d8.Translation.XY.m128d_f64[0] = *(double *)pTVar39;
      local_2d8.Translation.XY.m128d_f64[1] = *(double *)&pTVar39->field_0x8;
      local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
      local_2d8.Translation.ZW.m128d_f64[0] = (double)*(ulonglong *)&pTVar39->field_0x10;
      local_2d8.Scale3D.XY.m128d_f64[0] = dVar88;
      local_2d8.Scale3D.XY.m128d_f64[1] = dVar76;
      local_2d8.Scale3D.ZW.m128d_f64[0] = dVar71;
      local_2d8.Scale3D.ZW.m128d_f64[1] = dVar82;
      local_2d8.Rotation.XY.m128d_f64[0] = (double)fVar4;
      local_2d8.Rotation.XY.m128d_f64[1] = (double)fVar5;
      local_2d8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar6;
      local_2d8.Rotation.ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
      pTVar42 = UE::Math::TTransform<double>::GetRelativeTransform(&local_2d8,&local_148,&local_338)
      ;
    }
    else {
      pTVar42 = (TTransform<double> *)
                TPBDRigidClusteredParticles<double,3>::ChildToParent
                          ((TPBDRigidClusteredParticles<double,3> *)pFVar44->_padding_,
                           (int)pFVar44->_padding_);
    }
    local_398 = *&(pTVar42->Rotation).XY.m128d_f64;
    local_388 = *&(pTVar42->Rotation).ZW.m128d_f64;
    local_378 = *&(pTVar42->Translation).XY.m128d_f64;
    local_368 = *&(pTVar42->Translation).ZW.m128d_f64;
    local_358 = *&(pTVar42->Scale3D).XY.m128d_f64;
    local_348 = *&(pTVar42->Scale3D).ZW.m128d_f64;
    uVar62 = (uint)local_960->_padding_;
    lVar70 = local_960->_padding_;
    uVar61 = uVar67;
    if ((int)uVar62 < *(int *)(lVar70 + 0x68)) {
      uVar61 = ~uVar62 >> 0x1f;
    }
    if ((uVar61 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar70 + 0x60) + (longlong)(int)uVar62 * 8) != 0) {
      uVar62 = (uint)local_960->_padding_;
      lVar70 = local_960->_padding_;
      uVar61 = uVar67;
      if ((int)uVar62 < *(int *)(lVar70 + 0x68)) {
        uVar61 = ~uVar62 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar9 = *(FImplicitObject **)(*(longlong *)(lVar70 + 0x60) + (longlong)(int)uVar62 * 8);
      pTVar43 = ::operator_new(0xc0);
      pFVar44 = pFVar64;
      if (pTVar43 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        if (pFVar9 != (FImplicitObject *)0x0) {
          LOCK();
          *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
          UNLOCK();
        }
        local_948 = uVar69 | 8;
        pFVar50 = (FLevelSet *)(ulonglong)local_948;
        local_828.Reference = pFVar9;
        pFVar44 = (FLevelSet *)
                  TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                            (pTVar43,&local_828,(TRigidTransform<double,3> *)local_398);
      }
      if (pFVar44 != (FLevelSet *)0x0) {
        LOCK();
        *(int *)&pFVar44->_padding_ = (int)pFVar44->_padding_ + 1;
        UNLOCK();
      }
      local_8d0 = pFVar44;
      if (((ulonglong)pFVar50 & 8) != 0) {
        local_948 = (uint)pFVar50 & 0xfffffff7;
        pFVar50 = (FLevelSet *)(ulonglong)local_948;
        if (local_828.Reference != (FImplicitObject *)0x0) {
          LOCK();
          plVar8 = &(local_828.Reference)->_padding_;
          lVar70 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar70 == 1) && (*(int *)((longlong)&(local_828.Reference)->_padding_ + 4) == 0)
             ) {
            (**(code **)(local_828.Reference)->_padding_)(local_828.Reference,1);
          }
        }
      }
      if (((local_930.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8d0) &&
          ((FScriptContainerElement *)&local_8d0 <
           local_930.AllocatorInstance.Data + (longlong)local_930.ArrayMax * 8)) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar36 = local_930.ArrayNum;
      if (local_930.ArrayNum == local_930.ArrayMax) {
        iVar36 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_930.AllocatorInstance,&local_930.ArrayMax);
      }
      local_930.ArrayNum = iVar36 + 1;
      *(undefined8 *)(local_930.AllocatorInstance.Data + (longlong)iVar36 * 8) = 0;
      *(FLevelSet **)(local_930.AllocatorInstance.Data + (longlong)iVar36 * 8) = local_8d0;
      local_8d0 = (FLevelSet *)0x0;
      uVar69 = (uint)local_960->_padding_;
      lVar70 = local_960->_padding_;
      uVar62 = uVar67;
      if ((int)uVar69 < *(int *)(lVar70 + 0x68)) {
        uVar62 = ~uVar69 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar9 = *(FImplicitObject **)(*(longlong *)(lVar70 + 0x60) + (longlong)(int)uVar69 * 8);
      pTVar43 = ::operator_new(0xc0);
      pFVar44 = pFVar64;
      if (pTVar43 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        if (pFVar9 != (FImplicitObject *)0x0) {
          LOCK();
          *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
          UNLOCK();
        }
        local_948 = (uint)pFVar50 | 4;
        pFVar50 = (FLevelSet *)(ulonglong)local_948;
        local_820.Reference = pFVar9;
        pFVar44 = (FLevelSet *)
                  TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                            (pTVar43,&local_820,(TRigidTransform<double,3> *)local_398);
      }
      if (pFVar44 != (FLevelSet *)0x0) {
        LOCK();
        *(int *)&pFVar44->_padding_ = (int)pFVar44->_padding_ + 1;
        UNLOCK();
      }
      local_8c8.Reference = (FImplicitObject *)pFVar44;
      if ((((ulonglong)pFVar50 & 4) != 0) &&
         (local_948 = (uint)pFVar50 & 0xfffffffb, local_820.Reference != (FImplicitObject *)0x0)) {
        LOCK();
        plVar8 = &(local_820.Reference)->_padding_;
        lVar70 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if (((int)lVar70 == 1) && (*(int *)((longlong)&(local_820.Reference)->_padding_ + 4) == 0))
        {
          (**(code **)(local_820.Reference)->_padding_)(local_820.Reference,1);
        }
      }
      if (((local_920.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8c8) &&
          ((FScriptContainerElement *)&local_8c8 <
           local_920.AllocatorInstance.Data + (longlong)local_920.ArrayMax * 8)) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (local_920.ArrayNum == local_920.ArrayMax) {
        local_920.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_920.AllocatorInstance,&local_920.ArrayMax);
      }
      iVar36 = local_920.ArrayNum + 1;
      *(undefined8 *)(local_920.AllocatorInstance.Data + (longlong)local_920.ArrayNum * 8) = 0;
      *(FImplicitObject **)(local_920.AllocatorInstance.Data + (longlong)local_920.ArrayNum * 8) =
           local_8c8.Reference;
      local_8c8.Reference = (FImplicitObject *)0x0;
      local_920.ArrayNum = iVar36;
      if (((local_900.AllocatorInstance.Data <= (FScriptContainerElement *)&local_960) &&
          ((FScriptContainerElement *)&local_960 <
           local_900.AllocatorInstance.Data + (longlong)local_900.ArrayMax * 8)) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar36 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar36 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      local_900.ArrayNum = iVar36 + 1;
      *(FLevelSet **)(local_900.AllocatorInstance.Data + (longlong)iVar36 * 8) = local_960;
    }
    uVar69 = (uint)local_960->_padding_;
    lVar70 = local_960->_padding_;
    uVar62 = uVar67;
    if ((int)uVar69 < *(int *)(lVar70 + 0x2e0)) {
      uVar62 = ~uVar69 >> 0x1f;
    }
    if ((uVar62 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((*(char *)(*(longlong *)(lVar70 + 0x2d8) + 0xd + (longlong)(int)uVar69 * 0x10) != '\x01') &&
       (bVar33 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4281520195777855810>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                            ,0x142,"Child->Disabled() == true"), bVar33)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar50 = pFVar64;
    if (2 < *(byte *)((longlong)&local_960->_padding_ + 4)) {
      pFVar50 = local_960;
    }
    pCVar45 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pFVar50->_padding_,
                         (int)pFVar50->_padding_);
    if ((pCVar45->Id != (TPBDRigidParticleHandleImp<double,3,1> *)param_1) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("Child->CastToClustered()->ClusterIds().Id == Parent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                            ,0x143,L""), bVar33)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    unaff_XMM6 = local_398;
    dVar21 = local_388[0];
    dVar14 = local_388[1];
    dVar15 = local_378[0];
    dVar16 = local_378[1];
    dVar17 = local_368[0];
    dVar18 = local_368[1];
    dVar20 = local_358[0];
    dVar85 = local_358[1];
    pFVar50 = pFVar64;
    if (2 < *(byte *)((longlong)&local_960->_padding_ + 4)) {
      pFVar50 = local_960;
    }
    dVar31 = local_348[0];
    dVar32 = local_348[1];
    pTVar46 = TPBDRigidClusteredParticles<double,3>::ChildToParent
                        ((TPBDRigidClusteredParticles<double,3> *)pFVar50->_padding_,
                         (int)pFVar50->_padding_);
    adVar30 = local_398;
    local_398[0] = unaff_XMM6[0];
    local_398[1] = unaff_XMM6[1];
    *(double *)&pTVar46->field_0x0 = local_398[0];
    *(double *)&pTVar46->field_0x8 = local_398[1];
    *(double *)&pTVar46->field_0x10 = dVar21;
    *(double *)&pTVar46->field_0x18 = dVar14;
    *(double *)&pTVar46->field_0x20 = dVar15;
    *(double *)&pTVar46->field_0x28 = dVar16;
    *(double *)&pTVar46->field_0x30 = dVar17;
    *(double *)&pTVar46->field_0x38 = dVar18;
    *(double *)&pTVar46->field_0x40 = dVar20;
    *(double *)&pTVar46->field_0x48 = dVar85;
    *(double *)&pTVar46->field_0x50 = dVar31;
    *(double *)&pTVar46->field_0x58 = dVar32;
    local_398 = adVar30;
    if (bVar35) {
      TVar37.StatIdPtr = (TStatIdData *)StatPtr_STAT_UpdateGeometry_GatherPoints;
      if (StatPtr_STAT_UpdateGeometry_GatherPoints ==
          (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_GatherPoints>)0x0) {
        pFVar47 = ::FName::FName(&local_530,"STAT_UpdateGeometry_GatherPoints");
        TVar37.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_GatherPoints,
                        *pFVar47,L"TPBDRigidClustering<>::UpdateGeometry_GatherPoints",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_8a0.StatId.ComparisonIndex.Value = 0;
      local_8a0.StatId.Number = 0;
      local_648.Impl._Function =
           "void __cdecl Chaos::UpdateGeometry(class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class TSet<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,struct DefaultKeyFuncs<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,0>,class FDefaultSetAllocator> &,const class TMap<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,0> > &,const class TRefCountPtr<class Chaos::FImplicitObject> &,const struct Chaos::FClusterCreationParameters &)"
      ;
      local_8a0.EmittedEvent = 0;
      local_648.Impl._Line = 0x149;
      local_648.Impl._Column = 6;
      local_648.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
      ;
      FCycleCounter::Start(&local_8a0,TVar37,CycleStat|ClearEveryFrame,false,&local_648);
      uVar69 = (uint)local_960->_padding_;
      lVar70 = local_960->_padding_;
      uVar62 = uVar67;
      if ((int)uVar69 < *(int *)(lVar70 + 0x4c0)) {
        uVar62 = ~uVar69 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar70 = *(longlong *)(lVar70 + 0x4b8);
      lVar63 = *(longlong *)(lVar70 + (longlong)(int)uVar69 * 8);
      if ((lVar63 != 0) && (pFVar50 = pFVar64, *(int *)(lVar63 + 0x18) != 0)) {
        do {
          uVar61 = (uint)pFVar50;
          uVar62 = uVar67;
          if ((int)uVar61 < *(int *)(lVar63 + 0x30)) {
            uVar62 = ~uVar61 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          dVar85 = local_398[1];
          dVar15 = local_388[0];
          unaff_XMM6 = (double  [2])
                       blendpd((undefined1  [16])local_398,(undefined1  [16])local_388,2);
          auVar72._8_4_ = local_388[0]._0_4_;
          auVar72._0_8_ = dVar85;
          auVar72._12_4_ = local_388[0]._4_4_;
          dVar16 = local_388[1];
          pdVar3 = (double *)(*(longlong *)(lVar63 + 0x28) + (longlong)(int)uVar61 * 0x18);
          dVar17 = *pdVar3 * local_358[0];
          dVar18 = pdVar3[1] * local_358[1];
          uVar86 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar20 = *(double *)(*(longlong *)(lVar63 + 0x28) + 0x10 + (longlong)(int)uVar61 * 0x18) *
                   local_348[0];
          dVar21 = local_348[1] * 0.0;
          auVar89._8_4_ = SUB84(dVar18,0);
          auVar89._0_8_ = dVar17;
          auVar89._12_4_ = uVar86;
          auVar77._8_4_ = SUB84(dVar18,0);
          auVar77._0_8_ = dVar17;
          auVar77._12_4_ = uVar86;
          auVar19._8_4_ = SUB84(dVar21,0);
          auVar19._0_8_ = dVar20;
          auVar19._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          auVar78 = blendpd(auVar77,auVar19,2);
          auVar90._0_8_ = auVar89._8_8_ * local_398[0] - dVar85 * dVar17;
          auVar90._8_8_ = dVar20 * dVar85 - auVar72._8_8_ * dVar18;
          auVar79._0_8_ = auVar78._0_8_ * dVar15 - unaff_XMM6[0] * dVar20;
          auVar79._8_8_ = auVar78._8_8_ * dVar16 - unaff_XMM6[1] * dVar21;
          auVar78 = blendpd(auVar90,auVar79,2);
          dVar21 = auVar90._8_8_ + auVar90._8_8_;
          dVar14 = auVar79._0_8_ + auVar79._0_8_;
          uVar86 = SUB84(dVar14,0);
          uVar87 = (undefined4)((ulonglong)dVar14 >> 0x20);
          auVar91._0_8_ = auVar78._0_8_ + auVar78._0_8_;
          auVar91._8_8_ = auVar78._8_8_ + auVar78._8_8_;
          auVar83._8_4_ = uVar86;
          auVar83._0_8_ = dVar21;
          auVar83._12_4_ = uVar87;
          auVar73._8_4_ = uVar86;
          auVar73._0_8_ = dVar21;
          auVar73._12_4_ = uVar87;
          auVar80._8_4_ = uVar86;
          auVar80._0_8_ = dVar21;
          auVar80._12_4_ = uVar87;
          auVar78 = blendpd(auVar80,auVar91,2);
          auVar84._0_8_ = auVar83._8_8_ * local_398[0] - dVar21 * dVar85;
          auVar84._8_8_ = auVar91._0_8_ * dVar85 - auVar73._8_8_ * dVar15;
          auVar74._8_4_ = SUB84(auVar91._8_8_,0);
          auVar74._0_8_ = auVar91._0_8_;
          auVar74._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
          auVar81._0_8_ = auVar78._0_8_ * dVar15 - auVar91._0_8_ * unaff_XMM6[0];
          auVar81._8_8_ = auVar78._8_8_ * dVar16 - auVar74._8_8_ * unaff_XMM6[1];
          auVar75._8_4_ = SUB84(auVar84._8_8_,0);
          auVar75._0_8_ = auVar84._0_8_;
          auVar75._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
          auVar78 = blendpd(auVar84,auVar81,2);
          dVar21 = dVar21 * dVar16 + dVar17 + auVar75._8_8_ + local_378[0];
          dVar14 = dVar14 * dVar16 + dVar18 + auVar81._0_8_ + local_378[1];
          uVar86 = SUB84(dVar14,0);
          uVar87 = (undefined4)((ulonglong)dVar14 >> 0x20);
          local_498._8_4_ = uVar86;
          local_498._0_8_ = dVar21;
          local_498._12_4_ = uVar87;
          local_7b8._16_8_ = auVar91._0_8_ * dVar16 + dVar20 + auVar78._0_8_ + local_368[0];
          local_7b8._8_4_ = uVar86;
          local_7b8._0_8_ = dVar21;
          local_7b8._12_4_ = uVar87;
          local_488 = (double)local_7b8._16_8_;
          if (((local_910.AllocatorInstance.Data <= (TVector<double,3> *)local_7b8) &&
              ((FScriptContainerElement *)local_7b8 <
               local_910.AllocatorInstance.Data + (longlong)local_910.ArrayMax * 0x18)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar36 = local_910.ArrayNum;
          if (local_910.ArrayNum == local_910.ArrayMax) {
            iVar36 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_910.AllocatorInstance,&local_910.ArrayMax);
          }
          pFVar50 = (FLevelSet *)(ulonglong)(uVar61 + 1);
          local_910.ArrayNum = iVar36 + 1;
          *(undefined8 *)(local_910.AllocatorInstance.Data + (longlong)iVar36 * 0x18) =
               local_7b8._0_8_;
          *(undefined8 *)(local_910.AllocatorInstance.Data + (longlong)iVar36 * 0x18 + 8) =
               local_7b8._8_8_;
          *(undefined8 *)(local_910.AllocatorInstance.Data + (longlong)iVar36 * 0x18 + 0x10) =
               local_7b8._16_8_;
          lVar63 = *(longlong *)(lVar70 + (longlong)(int)uVar69 * 8);
        } while (uVar61 + 1 < *(uint *)(lVar63 + 0x18));
      }
      if ((local_8a0.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_8a0.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_8a0.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_8a0.StatId,CycleScopeEnd);
      }
      local_8a0.EmittedEvent = '\0';
    }
    uVar69 = (uint)local_960->_padding_;
    lVar70 = local_960->_padding_;
    uVar62 = uVar67;
    if ((int)uVar69 < *(int *)(lVar70 + 0x68)) {
      uVar62 = ~uVar69 >> 0x1f;
    }
    if ((uVar62 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar70 + 0x60) + (longlong)(int)uVar69 * 8) != 0) {
      uVar69 = (uint)local_960->_padding_;
      lVar70 = local_960->_padding_;
      uVar62 = uVar67;
      if ((int)uVar69 < *(int *)(lVar70 + 0x68)) {
        uVar62 = ~uVar69 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar34 = FImplicitObject::GetType
                         (*(FImplicitObject **)
                           (*(longlong *)(lVar70 + 0x60) + (longlong)(int)uVar69 * 8));
      local_8f0 = local_8f0 & 0xff;
      if (uVar34 == '\a') {
        local_8f0 = 1;
      }
    }
    TStack_878.UnvisitedBitMask = TStack_878.UnvisitedBitMask & ~TStack_878._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_878);
    pFVar50 = (FLevelSet *)(ulonglong)local_948;
  }
  if ((local_8e0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8e0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8e0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8e0.StatId,CycleScopeEnd);
  }
  local_8e0.EmittedEvent = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    FThreadSafeStaticStatInner<`Chaos::UpdateGeometry'::__l41::FStat_SpatialBVH,1>::GetStatId
              (&StatPtr_SpatialBVH);
    _Init_thread_footer(&::_TSS2);
  }
  TVar37 = FThreadSafeStaticStatInner<`Chaos::UpdateGeometry'::__l41::FStat_SpatialBVH,1>::GetStatId
                     (&StatPtr_SpatialBVH);
  bVar33 = false;
  bVar26 = false;
  local_7e8.ComparisonIndex.Value = 0;
  local_7e8.Number = 0;
  TVar10 = (TVar37.StatIdPtr)->Name;
  FVar65 = *(FName *)TVar10;
  FVar66 = FVar65.ComparisonIndex.Value;
  uVar62 = FVar65.Number;
  if ((FVar66.Value == 0) && (uVar62 == 0)) {
LAB_143cafc0c:
    bVar25 = false;
    FVar65 = local_7e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_850[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_850[0]._s_0,(char *)*(FName *)((longlong)TVar10 + 0x10));
      bVar33 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_818.ComparisonIndex.Value = FVar66.Value;
        local_818.Number = uVar62;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_818,(wchar_t *)*(FName *)((longlong)TVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                   ,0x15a);
        bVar33 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143cafc0c;
    local_950 = FVar66.Value;
    uStack_94c = uVar62;
    FThreadStats::AddMessage(FVar65,CycleScopeStart);
    bVar25 = true;
  }
  pTVar48 = TPBDRigidClusteredParticleHandleImp<double,3,1>::GetChildrenSpatial(param_1);
  if (local_920.ArrayNum == 0) {
    pFVar50 = (FLevelSet *)0x0;
  }
  else {
    pFVar49 = ::operator_new(0xd0);
    pFVar50 = pFVar64;
    if (pFVar49 != (FImplicitObjectUnionClustered *)0x0) {
      pFVar50 = (FLevelSet *)
                FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
                          (pFVar49,&local_920,&local_900);
    }
    if (pFVar50 != (FLevelSet *)0x0) {
      LOCK();
      *(int *)&pFVar50->_padding_ = (int)pFVar50->_padding_ + 1;
      UNLOCK();
    }
  }
  if (pTVar48 == local_5b8) {
    if (pFVar50 != (FLevelSet *)0x0) {
      LOCK();
      plVar8 = &pFVar50->_padding_;
      lVar70 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar70 == 1) && (*(int *)((longlong)&pFVar50->_padding_ + 4) == 0)) {
        puVar58 = (undefined8 *)pFVar50->_padding_;
        goto LAB_143cafcb0;
      }
    }
  }
  else {
    pFVar44 = (FLevelSet *)pTVar48->Reference;
    pTVar48->Reference = (FImplicitObjectUnionClustered *)pFVar50;
    if (pFVar44 != (FLevelSet *)0x0) {
      LOCK();
      plVar8 = &pFVar44->_padding_;
      lVar70 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar70 == 1) && (*(int *)((longlong)&pFVar44->_padding_ + 4) == 0)) {
        puVar58 = (undefined8 *)pFVar44->_padding_;
        pFVar50 = pFVar44;
LAB_143cafcb0:
        (*(code *)*puVar58)(pFVar50,1);
      }
    }
  }
  if (bVar26) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar25) && (FVar65 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar51 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar51 == (FThreadStats *)0x0) {
      pFVar52 = FThreadStatsPool::Get();
      pFVar51 = FThreadStatsPool::GetFromPool(pFVar52);
    }
    if (pFVar51->bWaitForExplicitFlush < pFVar51->ScopeCount) {
      local_760.NameAndInfo.Index = FVar65.ComparisonIndex.Value;
      local_760.NameAndInfo.Number = FVar65.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_718);
      local_760.StatData.Pad[4] = '\0';
      local_760.StatData.Pad[5] = '\0';
      local_760.StatData.Pad[6] = '\0';
      local_760.StatData.Pad[7] = '\0';
      local_760.StatData.Pad[0] = local_718.s.LowPart._0_1_;
      local_760.StatData.Pad[1] = local_718.s.LowPart._1_1_;
      local_760.StatData.Pad[2] = local_718.s.LowPart._2_1_;
      local_760.StatData.Pad[3] = local_718.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar51,&local_760);
      piVar2 = &pFVar51->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar51,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar51,false,false);
      }
    }
  }
  local_940.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_940.ArrayNum = 0;
  local_940.ArrayMax = 0;
  if (param_5->CollisionParticles == (FBVHParticles *)0x0) {
    if (param_5->bCleanCollisionParticles == false) {
      uVar69 = uVar69 | 2;
      local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<Chaos::TVector<double,3>,int>
                (&local_750,(TVector<double,3> *)local_910.AllocatorInstance.Data,local_910.ArrayNum
                 ,0);
      pTVar53 = &local_750;
LAB_143cafe07:
      if (local_940.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_940.AllocatorInstance.Data);
      }
      local_940.AllocatorInstance.Data = (pTVar53->AllocatorInstance).Data;
      (pTVar53->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_940.ArrayNum = pTVar53->ArrayNum;
      local_940.ArrayMax = pTVar53->ArrayMax;
      pTVar53->ArrayNum = 0;
      pTVar53->ArrayMax = 0;
    }
    else {
      uVar69 = uVar69 | 1;
      pTVar53 = CleanCollisionParticles(local_550,&local_910,(double)ClusterSnapDistance);
      if (&local_940 != pTVar53) goto LAB_143cafe07;
    }
    if (((uVar69 & 2) != 0) &&
       (uVar69 = uVar69 & 0xfffffffd,
       local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_750.AllocatorInstance.Data);
    }
    if (((uVar69 & 1) != 0) &&
       (local_550[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_550[0].AllocatorInstance.Data);
    }
  }
  pTVar29 = local_720;
  if (local_720->Reference == (FImplicitObject *)0x0) {
    if (local_930.ArrayNum == 0) {
      local_810 = (FImplicitObjectUnionClustered *)0x0;
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),&local_810);
      local_848 = local_810;
      goto LAB_143cb0514;
    }
    if (UseLevelsetCollision == 0) {
      if (local_930.ArrayNum != 1) {
        pFVar49 = ::operator_new(0xd0);
        if (pFVar49 == (FImplicitObjectUnionClustered *)0x0) {
          local_830 = (FImplicitObjectUnionClustered *)0x0;
        }
        else {
          local_830 = FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
                                (pFVar49,&local_930,&local_900);
          if (local_830 != (FImplicitObjectUnionClustered *)0x0) {
            LOCK();
            *(int *)&local_830->_padding_ = (int)local_830->_padding_ + 1;
            UNLOCK();
          }
        }
        (**(code **)(**(longlong **)param_1 + 0x10))
                  (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),&local_830);
        local_848 = local_830;
        goto LAB_143cb0514;
      }
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),
                 local_930.AllocatorInstance.Data);
    }
    else {
      local_957[0] = 0;
      `Chaos::UpdateGeometry'::__l56::<lambda_1>::operator()(local_957);
      local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c8.ArrayNum = 0;
      local_7c8.ArrayMax = 0;
      FImplicitObjectUnionClustered::FImplicitObjectUnionClustered
                ((FImplicitObjectUnionClustered *)local_218,&local_930,&local_7c8);
      if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c8.AllocatorInstance.Data);
      }
      auVar22._4_8_ = unaff_XMM6[1];
      auVar22._0_4_ = local_218._76_4_;
      auVar78._0_8_ = auVar22._0_8_ << 0x20;
      auVar78._8_4_ = local_218._80_4_;
      auVar78._12_4_ = local_218._84_4_;
      dVar71 = local_1c0 - (double)local_218._64_8_;
      local_4e8 = (double)local_218._64_8_;
      local_4d0 = local_1c0;
      local_4e0 = local_218._72_16_;
      dVar88 = auVar78._8_8_ - (double)local_218._56_8_;
      dVar82 = local_218._72_8_ - (double)local_218._48_8_;
      local_4f8 = (double)local_218._48_8_;
      dStack_4f0 = (double)local_218._56_8_;
      if (((dVar88 <= dVar82) || (dVar76 = dVar82, dVar71 <= dVar82)) &&
         (dVar76 = dVar71, dVar88 <= dVar71)) {
        dVar76 = dVar88;
      }
      if (dVar76 < (double)MinLevelsetSize) {
        local_590._16_8_ = 0;
        local_590._0_8_ = 0;
        local_590._8_8_ = 0;
        this = ::operator_new(0x30);
        if (this == (TSphere<double,3> *)0x0) {
          local_838 = (TSphere<double,3> *)0x0;
        }
        else {
          local_838 = TSphere<double,3>::TSphere<double,3>
                                (this,&local_590,
                                 SQRT(dVar88 * dVar88 + dVar82 * dVar82 + dVar71 * dVar71) *
                                 __real_3fe0000000000000);
          if (local_838 != (TSphere<double,3> *)0x0) {
            LOCK();
            *(int *)&local_838->_padding_ = (int)local_838->_padding_ + 1;
            UNLOCK();
          }
        }
        (**(code **)(**(longlong **)param_1 + 0x10))
                  (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),&local_838);
        if (local_838 != (TSphere<double,3> *)0x0) {
          LOCK();
          plVar8 = &local_838->_padding_;
          lVar70 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar70 == 1) && (*(int *)((longlong)&local_838->_padding_ + 4) == 0)) {
            (**(code **)local_838->_padding_)(local_838,1);
          }
        }
      }
      else {
        dVar76 = __real_3ff0000000000000 / (double)MinLevelsetSize;
        iVar36 = MaxLevelsetDimension;
        if ((int)(dVar82 * dVar76) < MaxLevelsetDimension) {
          iVar36 = (int)(dVar82 * dVar76);
        }
        local_7d8._s_0.X = MinLevelsetDimension;
        if (MinLevelsetDimension < iVar36) {
          local_7d8._s_0.X = iVar36;
        }
        iVar36 = MaxLevelsetDimension;
        if ((int)(dVar88 * dVar76) < MaxLevelsetDimension) {
          iVar36 = (int)(dVar88 * dVar76);
        }
        local_7d8._s_0.Y = MinLevelsetDimension;
        if (MinLevelsetDimension < iVar36) {
          local_7d8._s_0.Y = iVar36;
        }
        iVar36 = MaxLevelsetDimension;
        if ((int)(dVar71 * dVar76) < MaxLevelsetDimension) {
          iVar36 = (int)(dVar71 * dVar76);
        }
        local_7d8._s_0.Z = MinLevelsetDimension;
        if (MinLevelsetDimension < iVar36) {
          local_7d8._s_0.Z = iVar36;
        }
        pFVar54 = ::FString::FString(&local_480,"");
        local_6e0.bEncountedErrors = false;
        local_6e0.bUnhandledErrors = false;
        ::FString::FString(&local_6e0.Prefix,pFVar54);
        pFVar11 = (pFVar54->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        TUniformGridBase<double,3>::TUniformGridBase<double,3>
                  ((TUniformGridBase<double,3> *)local_468,(TVector<double,3> *)&local_4f8,
                   (TVector<double,3> *)local_4e0,(TVector<int,3> *)&local_7d8._s_0,
                   LevelsetGhostCells);
        pFVar44 = ::operator_new(0x120);
        pFVar50 = pFVar64;
        if (pFVar44 != (FLevelSet *)0x0) {
          pFVar50 = FLevelSet::FLevelSet
                              (pFVar44,&local_6e0,(TUniformGrid<double,3> *)local_468,
                               (FImplicitObject *)local_218,0,false);
        }
        if (param_5->CollisionParticles == (FBVHParticles *)0x0) {
          if ((((double)local_468._64_8_ <= local_420) ||
              (dVar71 = (double)local_468._64_8_, (double)local_468._64_8_ <= local_418)) &&
             (dVar71 = local_418, local_418 <= local_420)) {
            dVar71 = local_420;
          }
          uVar69 = local_940.ArrayNum - 1;
          if (-1 < (int)uVar69) {
            uVar62 = (uint)__xmm_80000000000000008000000000000000;
            uVar27 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
            lVar70 = (longlong)(int)uVar69 * 0x18;
            iVar36 = local_940.ArrayNum;
            do {
              if (MinCleanedPointsBeforeRemovingInternals < iVar36) {
                uVar61 = uVar67;
                if ((int)uVar69 < iVar36) {
                  uVar61 = ~uVar69 >> 0x1f;
                }
                if ((uVar61 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                dVar82 = FLevelSet::SignedDistance
                                   (pFVar50,(TVector<double,3> *)
                                            (local_940.AllocatorInstance.Data + lVar70));
                if (dVar82 < (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) ^ (uint)uVar27,
                                              SUB84(dVar71,0) ^ uVar62)) {
                  uVar61 = uVar67;
                  if ((int)uVar69 < local_940.ArrayNum) {
                    uVar61 = ~uVar69 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar33) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  iVar36 = (local_940.ArrayNum - uVar69) + -1;
                  if (1 < iVar36) {
                    iVar36 = 1;
                  }
                  iVar68 = local_940.ArrayNum;
                  if (iVar36 != 0) {
                    memmove(local_940.AllocatorInstance.Data + lVar70,
                            local_940.AllocatorInstance.Data +
                            (longlong)(local_940.ArrayNum - iVar36) * 0x18,(longlong)iVar36 * 0x18);
                    iVar68 = local_940.ArrayNum;
                  }
                  local_940.ArrayNum = iVar68 + -1;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,&local_940.AllocatorInstance,iVar68 + -1,&local_940.ArrayMax);
                }
                iVar36 = local_940.ArrayNum;
              }
              lVar70 = lVar70 + -0x18;
              uVar69 = uVar69 - 1;
              param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_8e8;
            } while (-1 < (int)uVar69);
          }
        }
        if (pFVar50 != (FLevelSet *)0x0) {
          LOCK();
          *(int *)&pFVar50->_padding_ = (int)pFVar50->_padding_ + 1;
          UNLOCK();
        }
        local_808 = pFVar50;
        (**(code **)(**(longlong **)param_1 + 0x10))
                  (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),&local_808);
        if (local_808 != (FLevelSet *)0x0) {
          LOCK();
          plVar8 = &local_808->_padding_;
          lVar70 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar70 == 1) && (*(int *)((longlong)&local_808->_padding_ + 4) == 0)) {
            (**(code **)local_808->_padding_)(local_808,1);
          }
        }
        if (local_6e0.Prefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6e0.Prefix.Data.AllocatorInstance.Data);
        }
      }
      local_150 = 0;
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_198);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      FImplicitObjectUnion::~FImplicitObjectUnion((FImplicitObjectUnion *)local_218);
    }
  }
  else {
    uVar34 = FImplicitObject::GetType(local_720->Reference);
    uVar69 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar67 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((uVar34 != '\x06') &&
         (dVar71 = *(double *)&param_5->Scale -
                   UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,
         (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69) <=
         __real_3f1a36e2e0000000)) &&
        (dVar71 = *(double *)&(param_5->Scale).field_0x8 -
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,
        (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69) <=
        __real_3f1a36e2e0000000)) &&
       (dVar71 = *(double *)&(param_5->Scale).field_0x10 -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
       (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69) <=
       __real_3f1a36e2e0000000)) {
      (**(code **)(**(longlong **)param_1 + 0x10))
                (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),pTVar29);
      goto LAB_143cb0538;
    }
    dVar71 = *(double *)&param_5->Scale - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69)) ||
        (dVar71 = *(double *)&(param_5->Scale).field_0x8 -
                  UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69))) ||
       (dVar71 = *(double *)&(param_5->Scale).field_0x10 -
                 UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar67,SUB84(dVar71,0) & uVar69))) {
      local_5a8 = *(undefined8 *)&param_5->Scale;
      uStack_5a0 = *(undefined8 *)&(param_5->Scale).field_0x8;
      local_598 = *(undefined8 *)&(param_5->Scale).field_0x10;
      (**(code **)(pTVar29->Reference->_padding_ + 0x50))(pTVar29->Reference,&local_848,&local_5a8);
    }
    else {
      (**(code **)(pTVar29->Reference->_padding_ + 0x48))(pTVar29->Reference,&local_848);
    }
    (**(code **)(**(longlong **)param_1 + 0x10))
              (*(longlong **)param_1,*(undefined4 *)((longlong)param_1 + 8),&local_848);
LAB_143cb0514:
    if (local_848 != (FImplicitObjectUnionClustered *)0x0) {
      LOCK();
      plVar8 = &local_848->_padding_;
      lVar70 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar70 == 1) && (*(int *)((longlong)&local_848->_padding_ + 4) == 0)) {
        (**(code **)local_848->_padding_)(local_848,1);
      }
    }
  }
LAB_143cb0538:
  uVar69 = 0;
  if (param_5->CollisionParticles != (FBVHParticles *)0x0) {
    TVar37 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_CopyPoints,1>::GetStatId
                       ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_CopyPoints,1> *
                        )&StatPtr_STAT_UpdateGeometry_CopyPoints);
    local_6c8.Impl._Line = 0x1b7;
    local_6c8.Impl._Column = 4;
    local_6c8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
    ;
    local_6c8.Impl._Function =
         "void __cdecl Chaos::UpdateGeometry(class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class TSet<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,struct DefaultKeyFuncs<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,0>,class FDefaultSetAllocator> &,const class TMap<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,0> > &,const class TRefCountPtr<class Chaos::FImplicitObject> &,const struct Chaos::FClusterCreationParameters &)"
    ;
    local_8c0.StatId.ComparisonIndex.Value = 0;
    local_8c0.StatId.Number = 0;
    local_8c0.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_8c0,*(TStatIdData **)&(TVar37.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_6c8);
    pTVar55 = TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    pFVar12 = pTVar55->Ptr;
    if ((pFVar12 != param_5->CollisionParticles) &&
       (pTVar55->Ptr = param_5->CollisionParticles, pFVar12 != (FBVHParticles *)0x0)) {
      FBVHParticles::~FBVHParticles(pFVar12);
      ::operator_delete(pFVar12,0x48);
    }
    if ((local_8c0.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_8c0.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_8c0.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_8c0.StatId,CycleScopeEnd);
    }
    local_8c0.EmittedEvent = '\0';
    goto LAB_143cb09dc;
  }
  TVar37 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherPoints,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_UpdateGeometry_GatherPoints,1> *
                      )&StatPtr_STAT_UpdateGeometry_GatherPoints);
  local_6a8.Impl._Line = 0x1bd;
  local_6a8.Impl._Column = 5;
  local_6a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
  ;
  local_8b0.StatId.ComparisonIndex.Value = 0;
  local_8b0.StatId.Number = 0;
  local_6a8.Impl._Function =
       "void __cdecl Chaos::UpdateGeometry(class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class TSet<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,struct DefaultKeyFuncs<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,0>,class FDefaultSetAllocator> &,const class TMap<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,class FDefaultSetAllocator,struct TDefaultMapHashableKeyFuncs<class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> >,0> > &,const class TRefCountPtr<class Chaos::FImplicitObject> &,const struct Chaos::FClusterCreationParameters &)"
  ;
  local_8b0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_8b0,*(TStatIdData **)&(TVar37.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_6a8);
  TRigidParticles<double,3>::CollisionParticlesInitIfNeeded
            (*(TRigidParticles<double,3> **)param_1,*(int *)((longlong)param_1 + 8));
  pTVar55 = TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  pFVar12 = pTVar55->Ptr;
  if (local_940.ArrayNum != 0) {
    TArrayCollection::ResizeHelper
              ((TArrayCollection *)pFVar12,*(uint *)&pFVar12->_padding_ + local_940.ArrayNum);
  }
  piVar2 = (int *)((longlong)&pFVar12->_padding_ + 4);
  *piVar2 = *piVar2 + 1;
  pFVar50 = pFVar64;
  if (0 < local_940.ArrayNum) {
    do {
      pFVar12 = pTVar55->Ptr;
      uVar62 = (uint)pFVar64;
      uVar67 = uVar69;
      if ((int)uVar62 < local_940.ArrayNum) {
        uVar67 = ~uVar62 >> 0x1f;
      }
      if ((uVar67 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar23 = *(undefined8 *)(local_940.AllocatorInstance.Data + (longlong)pFVar50);
      uVar24 = *(undefined8 *)(local_940.AllocatorInstance.Data + (longlong)pFVar50 + 8);
      uVar6 = *(undefined8 *)(local_940.AllocatorInstance.Data + 0x10 + (longlong)pFVar50);
      uVar67 = uVar69;
      if ((int)uVar62 < (int)pFVar12->_padding_) {
        uVar67 = ~uVar62 >> 0x1f;
      }
      if ((uVar67 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar70 = pFVar12->_padding_;
      pFVar64 = (FLevelSet *)(ulonglong)(uVar62 + 1);
      puVar58 = (undefined8 *)((longlong)&pFVar50->_padding_ + lVar70);
      *puVar58 = uVar23;
      puVar58[1] = uVar24;
      *(undefined8 *)((longlong)&pFVar50->_padding_ + lVar70) = uVar6;
      pFVar50 = (FLevelSet *)&pFVar50->_padding_;
    } while ((int)(uVar62 + 1) < local_940.ArrayNum);
  }
  if ((local_8b0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8b0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8b0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8b0.StatId,CycleScopeEnd);
  }
  local_8b0.EmittedEvent = '\0';
  if (!bVar35) goto LAB_143cb09dc;
  FVar56 = StatPtr_STAT_UpdateGeometry_PointsBVH;
  if (StatPtr_STAT_UpdateGeometry_PointsBVH ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_PointsBVH>)0x0) {
    pFVar47 = ::FName::FName(local_560,"STAT_UpdateGeometry_PointsBVH");
    FVar56 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateGeometry_PointsBVH>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGeometry_PointsBVH,*pFVar47
                        ,L"TPBDRigidClustering<>::UpdateGeometry_PointsBVH","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar65 = *(FName *)FVar56;
  bVar35 = false;
  bVar33 = false;
  local_7f8.ComparisonIndex.Value = 0;
  local_7f8.Number = 0;
  if ((FVar65.ComparisonIndex.Value.Value == 0) && (FVar65.Number == 0)) {
LAB_143cb08ea:
    bVar26 = false;
    FVar65 = local_7f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_840[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_840[0]._s_0,(char *)*(FName *)((longlong)FVar56 + 0x10));
      bVar35 = false;
      bVar33 = true;
      if (-1 < CpuChannel->Enabled) {
        local_800.ComparisonIndex.Value = FVar65.ComparisonIndex.Value.Value;
        local_800.Number = FVar65.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_800,(wchar_t *)*(FName *)((longlong)FVar56 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                   ,0x1c9);
        bVar35 = true;
        bVar33 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143cb08ea;
    local_8e8 = FVar65;
    FThreadStats::AddMessage(FVar65,CycleScopeStart);
    bVar26 = true;
  }
  pTVar55 = TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  FBVHParticles::UpdateAccelerationStructures(pTVar55->Ptr);
  if (bVar33) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar26) && (FVar65 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar51 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar51 == (FThreadStats *)0x0) {
      pFVar52 = FThreadStatsPool::Get();
      pFVar51 = FThreadStatsPool::GetFromPool(pFVar52);
    }
    if (pFVar51->bWaitForExplicitFlush < pFVar51->ScopeCount) {
      local_740.NameAndInfo.Index = FVar65.ComparisonIndex.Value;
      local_740.NameAndInfo.Number = FVar65.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_728);
      local_740.StatData.Pad[4] = '\0';
      local_740.StatData.Pad[5] = '\0';
      local_740.StatData.Pad[6] = '\0';
      local_740.StatData.Pad[7] = '\0';
      local_740.StatData.Pad[0] = local_728.s.LowPart._0_1_;
      local_740.StatData.Pad[1] = local_728.s.LowPart._1_1_;
      local_740.StatData.Pad[2] = local_728.s.LowPart._2_1_;
      local_740.StatData.Pad[3] = local_728.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar51,&local_740);
      piVar2 = &pFVar51->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar51,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar51,false,false);
      }
    }
  }
LAB_143cb09dc:
  uVar67 = *(uint *)((longlong)param_1 + 8);
  lVar63 = (longlong)(int)uVar67;
  lVar70 = *(longlong *)param_1;
  if ((int)uVar67 < *(int *)(lVar70 + 0x50)) {
    uVar69 = ~uVar67 >> 0x1f;
  }
  if ((uVar69 == 0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar35)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar70 = *(longlong *)(lVar70 + 0x48);
  uVar6 = *(undefined8 *)(lVar70 + 8 + lVar63 * 0x10);
  fVar4 = *(float *)(lVar70 + lVar63 * 0x10);
  dVar71 = (double)*(float *)(lVar70 + 4 + lVar63 * 0x10);
  pTVar39 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)((longlong)param_1 + 8));
  local_278._8_4_ = SUB84(dVar71,0);
  local_278._0_8_ = (double)fVar4;
  local_278._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
  local_248 = *(undefined8 *)&pTVar39->field_0x10;
  local_258 = *(undefined8 *)pTVar39;
  uStack_250 = *(undefined8 *)&pTVar39->field_0x8;
  local_238 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_230 = _UNK_150689688;
  local_228 = ___xmm_00000000000000003ff0000000000000;
  dStack_220 = _UNK_150689518;
  local_578._16_8_ = 0;
  uStack_240 = 0;
  local_578._0_8_ = 0;
  local_578._8_8_ = 0;
  local_268 = (double)(float)uVar6;
  dStack_260 = (double)(float)((ulonglong)uVar6 >> 0x20);
  TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
            (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)((longlong)param_1 + 8),
             (TRigidTransform<double,3> *)local_278,&local_578);
  this_00 = (FImplicitObjectUnion *)
            TGeometryParticleHandleImp<double,3,1>::GetGeometry
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if (this_00 != (FImplicitObjectUnion *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    if ((char)local_8f0 != '\0') {
      *(undefined1 *)((longlong)&this_00->_padding_ + 5) = 0;
    }
    pbVar57 = TGeometryParticlesImp<double,3,0>::HasBounds
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)((longlong)param_1 + 8));
    *pbVar57 = true;
    puVar58 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x90))(this_00,local_3c8);
    pTVar59 = TGeometryParticlesImp<double,3,0>::LocalBounds
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)((longlong)param_1 + 8));
    uVar6 = puVar58[1];
    *(undefined8 *)&pTVar59->MMin = *puVar58;
    *(undefined8 *)&(pTVar59->MMin).field_0x8 = uVar6;
    *(undefined8 *)&(pTVar59->MMin).field_0x10 = puVar58[2];
    uVar6 = puVar58[4];
    *(undefined8 *)&pTVar59->MMax = puVar58[3];
    *(undefined8 *)&(pTVar59->MMax).field_0x8 = uVar6;
    *(undefined8 *)&(pTVar59->MMax).field_0x10 = puVar58[5];
    cVar7 = (char)this_00->_padding_;
    if (((cVar7 == '\x05') || (cVar7 == '\x0f')) && (((this_00->Flags).Bits & 1) == 0)) {
      FImplicitObjectUnion::CheckNotLocked(this_00);
      (this_00->Flags).Bits = (this_00->Flags).Bits | 1;
      FImplicitObjectUnion::RebuildBVH(this_00);
    }
    LOCK();
    plVar8 = &this_00->_padding_;
    lVar70 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if (((int)lVar70 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  pTVar60 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Find(local_730,param_1);
  if ((pTVar60 ==
       (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar35)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  UpdateClusterFilterDataFromChildren
            (param_1,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)&pTVar60->field_0x8);
  if (local_940.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.AllocatorInstance.Data);
  }
  if (local_900.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.AllocatorInstance.Data);
  }
  if ((TVector<double,3> *)local_910.AllocatorInstance.Data != (TVector<double,3> *)0x0) {
    FMemory::Free(local_910.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_920.AllocatorInstance.Data,
             local_920.ArrayNum);
  if (local_920.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_930.AllocatorInstance.Data,
             local_930.ArrayNum);
  if (local_930.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_930.AllocatorInstance.Data);
  }
  if ((local_890.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_890.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_890.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_890.StatId,CycleScopeEnd);
  }
  return;
}

// UpdateKinematicProperties @ 143cb0d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Chaos::UpdateKinematicProperties
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
          *param_2,FPBDRigidsEvolutionGBF *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  EObjectStateType EVar8;
  bool bVar9;
  bool bVar10;
  EObjectStateType EVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateKinematicProperties> FVar14;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  FRigidClusteredFlags_u_0 *pFVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar21;
  FName FVar22;
  undefined8 *puVar23;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  EObjectStateType EVar24;
  EObjectStateType EVar25;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar26;
  TGeometryParticleHandleImp<double,3,1> *pTVar27;
  EObjectStateType local_res8;
  undefined1 local_c8;
  undefined1 local_c7 [3];
  FColor_u_0 local_c4;
  TPBDRigidParticleHandleImp<double,3,1> *local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  undefined8 *local_98;
  TGeometryParticleHandleImp<double,3,1> *local_88;
  FName local_80;
  FKinematicTarget local_78;
  
  FVar14 = StatPtr_STAT_UpdateKinematicProperties;
  if (StatPtr_STAT_UpdateKinematicProperties ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateKinematicProperties>)0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_UpdateKinematicProperties");
    FVar14 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateKinematicProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateKinematicProperties,
                        *pFVar13,L"TPBDRigidClustering<>::UpdateKinematicProperties()",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar22 = *(FName *)FVar14;
  bVar5 = false;
  bVar6 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c4._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_b8.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                   ,0x86);
        bVar5 = true;
        bVar6 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar9 = true;
      goto LAB_143cb0ecf;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  local_b0 = local_a8;
  FVar22 = local_a8;
LAB_143cb0ecf:
  local_res8 = Dynamic;
  if ((param_1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClusteringAlgo.cpp"
                          ,0x8a,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar27 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_1->field_0xc) {
    pTVar27 = (TGeometryParticleHandleImp<double,3,1> *)param_1;
  }
  local_88 = pTVar27;
  if ((pTVar27 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (uVar19 = ((uint)((ulonglong)pTVar27 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar27 >> 4)) *
               -0x7a143595, uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb,
     *(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
    local_c0 = (TPBDRigidParticleHandleImp<double,3,1> *)&param_2->field_0x38;
    puVar20 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)local_c0;
    }
    iVar12 = *(int *)(puVar20 +
                     (ulonglong)(*(int *)&param_2->field_0x48 - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4)
    ;
    if (iVar12 != -1) {
      while (*(TGeometryParticleHandleImp<double,3,1> **)
              ((longlong)iVar12 * 0x20 + *(longlong *)param_2) != pTVar27) {
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)param_2);
        if (iVar12 == -1) goto LAB_143cb134b;
      }
      pTVar15 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)param_2,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar27);
      if ((pTVar15 ==
           (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&pTVar15->field_0x10 == 0) goto LAB_143cb134b;
      pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                           ((TPBDRigidClusteredParticles<double,3> *)pTVar27->_padding_,
                            (int)pTVar27->_padding_)->field0_0x0;
      if ((pFVar16->Bits & 2) != 0) {
        EVar24 = Kinematic;
        goto LAB_143cb12f1;
      }
      puVar17 = ::operator_new(0x10);
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        *puVar17 = 0;
        puVar17[1] = 0;
        *puVar17 = 0;
      }
      local_98 = puVar17;
      pTVar15 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)param_2,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar27);
      if ((pTVar15 ==
           (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar23 = *(undefined8 **)&pTVar15->field_0x8;
      iVar12 = *(int *)&pTVar15->field_0x10;
      puVar2 = puVar23 + iVar12;
      while( true ) {
        if (*(int *)&pTVar15->field_0x10 != iVar12) {
          local_c8 = 0;
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_c8);
        }
        pTVar7 = local_c0;
        EVar24 = Dynamic;
        EVar8 = local_res8;
        if (puVar23 == puVar2) break;
        uVar1 = *puVar23;
        puVar18 = ::operator_new(0x10);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = 0;
          puVar18[1] = uVar1;
          *local_98 = puVar18;
          local_98 = puVar18;
        }
        puVar23 = puVar23 + 1;
      }
      while (local_res8 = EVar8, puVar2 = (undefined8 *)*puVar17, FVar22 = local_b0,
            puVar2 != (undefined8 *)0x0) {
        this = (TPBDRigidParticleHandleImp<double,3,1> *)puVar2[1];
        puVar2[1] = 0;
        local_c0 = this;
        ::operator_delete(puVar17,0x10);
        puVar17 = puVar2;
        FVar22 = local_b0;
        if (EVar24 != Dynamic) break;
        pTVar26 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)this->field_0xc) {
          pTVar26 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this;
        }
        EVar25 = EVar24;
        if (pTVar26 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
LAB_143cb127a:
          EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this);
          EVar24 = EVar11;
          EVar8 = EVar11;
          if ((EVar11 != Kinematic) && (EVar24 = EVar25, EVar8 = local_res8, EVar11 == Static)) {
            EVar24 = EVar11;
            EVar8 = EVar11;
          }
        }
        else {
          uVar19 = ((uint)((ulonglong)pTVar26 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar26 >> 4)) *
                   -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            pTVar3 = *(TPBDRigidParticleHandleImp<double,3,1> **)&pTVar7->field_0x8;
            pTVar21 = pTVar7;
            if (pTVar3 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pTVar21 = pTVar3;
            }
            iVar12 = *(int *)(&pTVar21->field_0x0 +
                             (ulonglong)
                             (*(int *)&param_2->field_0x48 - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
            if (iVar12 != -1) {
LAB_143cb1190:
              if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                   ((longlong)iVar12 * 0x20 + *(longlong *)param_2) != pTVar26)
              goto code_r0x000143cb119c;
              pTVar15 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)param_2,pTVar26);
              if ((pTVar15 ==
                   (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                    *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x27b,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar23 = *(undefined8 **)&pTVar15->field_0x8;
              iVar12 = *(int *)&pTVar15->field_0x10;
              puVar2 = puVar23 + iVar12;
              while( true ) {
                if (*(int *)&pTVar15->field_0x10 != iVar12) {
                  local_c7[0] = 0;
                  `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_c7);
                }
                this = local_c0;
                EVar25 = local_res8;
                if (puVar23 == puVar2) break;
                uVar1 = *puVar23;
                puVar18 = ::operator_new(0x10);
                if (puVar18 != (undefined8 *)0x0) {
                  *puVar18 = 0;
                  puVar18[1] = uVar1;
                  *local_98 = puVar18;
                  local_98 = puVar18;
                }
                puVar23 = puVar23 + 1;
              }
            }
          }
LAB_143cb1259:
          pFVar16 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                               (*(TPBDRigidClusteredParticles<double,3> **)pTVar26,
                                *(int *)&pTVar26->field_0x8)->field0_0x0;
          if ((pFVar16->Bits & 2) == 0) goto LAB_143cb127a;
          local_res8 = Kinematic;
          EVar24 = Kinematic;
          EVar8 = local_res8;
        }
      }
      do {
        puVar2 = (undefined8 *)*puVar17;
        ::operator_delete(puVar17,0x10);
        puVar17 = puVar2;
        pTVar27 = local_88;
      } while (puVar2 != (undefined8 *)0x0);
LAB_143cb12f1:
      FPBDRigidsEvolutionBase::SetParticleObjectState
                ((FPBDRigidsEvolutionBase *)param_3,
                 (TPBDRigidParticleHandleImp<double,3,1> *)pTVar27,EVar24);
      if (EVar24 == Dynamic) {
        local_78.Rotation._0_8_ = ___xmm_3f800000000000000000000000000000;
        local_78.Rotation._8_8_ = _UNK_150689648;
        local_78.Position._16_8_ = 0;
        local_78.Position._0_8_ = 0;
        local_78.Position._8_8_ = 0;
        local_78.Mode = None;
        FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(param_3,pTVar27,&local_78);
      }
    }
  }
LAB_143cb134b:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
code_r0x000143cb119c:
  iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)param_2);
  if (iVar12 == -1) goto LAB_143cb1259;
  goto LAB_143cb1190;
}

// `dynamic_atexit_destructor_for_'CVarBoundingBoxMarginForConnectionGraphFiltering'' @ 1503659c0

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarBoundingBoxMarginForConnectionGraphFiltering__(void)

{
  CVarBoundingBoxMarginForConnectionGraphFiltering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBoundingBoxMarginForConnectionGraphFiltering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBreakMode'' @ 1503659e0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarBreakMode__(void)

{
  CVarBreakMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBreakMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosExcludeFreeJointInertiaConditioning'' @ 150365a00

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarChaosExcludeFreeJointInertiaConditioning__(void)

{
  CVarChaosExcludeFreeJointInertiaConditioning._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosExcludeFreeJointInertiaConditioning);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier'' @ 150365a20

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier__(void)

{
  CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosKinematicTriangleMeshCollisionsFalloffMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosKinematicTriangleMeshCollisionsISPCEnabled'' @ 150365a40

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsISPCEnabled__(void)

{
  CVarChaosKinematicTriangleMeshCollisionsISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosKinematicTriangleMeshCollisionsISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosKinematicTriangleMeshCollisionsMaxTimer'' @ 150365a60

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsMaxTimer__(void)

{
  CVarChaosKinematicTriangleMeshCollisionsMaxTimer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosKinematicTriangleMeshCollisionsMaxTimer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier'' @ 150365a80

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier__(void)

{
  CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosKinematicTriangleMeshCollisionsaxDepthMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosLongRangeISPCEnabled'' @ 150365aa0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosLongRangeISPCEnabled__(void)

{
  CVarChaosLongRangeISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosLongRangeISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosPBDLongRangeConstraintsMinParallelBatchSize'' @ 150365ac0

void __cdecl
_dynamic_atexit_destructor_for__CVarChaosPBDLongRangeConstraintsMinParallelBatchSize__(void)

{
  CVarChaosPBDLongRangeConstraintsMinParallelBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosPBDLongRangeConstraintsMinParallelBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosPlanarISPCEnabled'' @ 150365ae0

void __cdecl _dynamic_atexit_destructor_for__CVarChaosPlanarISPCEnabled__(void)

{
  CVarChaosPlanarISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosPlanarISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosPlanarParallelConstraintCount'' @ 150365b00

void __cdecl
Chaos::Softs::_dynamic_atexit_destructor_for__CVarChaosPlanarParallelConstraintCount__(void)

{
  CVarChaosPlanarParallelConstraintCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosPlanarParallelConstraintCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCheckForInterclusterEdgesOnRelease'' @ 150365b20

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarCheckForInterclusterEdgesOnRelease__(void)

{
  CVarCheckForInterclusterEdgesOnRelease._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCheckForInterclusterEdgesOnRelease);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClusterDistance'' @ 150365b40

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarClusterDistance__(void)

{
  CVarClusterDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClusterDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClusterSnapDistance2'' @ 150365b60

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarClusterSnapDistance2__(void)

{
  CVarClusterSnapDistance2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClusterSnapDistance2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClusteringParticleReleaseThrottlingMaxCount'' @ 150365b80

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarClusteringParticleReleaseThrottlingMaxCount__(void)

{
  CVarClusteringParticleReleaseThrottlingMaxCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClusteringParticleReleaseThrottlingMaxCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClusteringParticleReleaseThrottlingMinCount'' @ 150365ba0

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarClusteringParticleReleaseThrottlingMinCount__(void)

{
  CVarClusteringParticleReleaseThrottlingMinCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClusteringParticleReleaseThrottlingMinCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarComputeClusterCollisionStrains'' @ 150365bc0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarComputeClusterCollisionStrains__(void)

{
  CVarComputeClusterCollisionStrains._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarComputeClusterCollisionStrains)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeactivateClusterChildren'' @ 150365be0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarDeactivateClusterChildren__(void)

{
  CVarDeactivateClusterChildren._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeactivateClusterChildren);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpClusterAndReleaseStats'' @ 150365c00

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarDumpClusterAndReleaseStats__(void)

{
  CVarDumpClusterAndReleaseStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpClusterAndReleaseStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGraphPropagationBasedCollisionFactor'' @ 150365c20

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarGraphPropagationBasedCollisionFactor__(void)

{
  CVarGraphPropagationBasedCollisionFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGraphPropagationBasedCollisionFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGraphPropagationBasedCollisionImpulseProcessing'' @ 150365c40

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarGraphPropagationBasedCollisionImpulseProcessing__(void)

{
  CVarGraphPropagationBasedCollisionImpulseProcessing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGraphPropagationBasedCollisionImpulseProcessing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelSetResolution2'' @ 150365c60

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarLevelSetResolution2__(void)

{
  CVarLevelSetResolution2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLevelSetResolution2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLevelsetGhostCells2'' @ 150365c80

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarLevelsetGhostCells2__(void)

{
  CVarLevelsetGhostCells2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLevelsetGhostCells2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxLevelsetDimension2'' @ 150365ca0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarMaxLevelsetDimension2__(void)

{
  CVarMaxLevelsetDimension2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxLevelsetDimension2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinCleanedPointsBeforeRemovingInternals2'' @ 150365cc0

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarMinCleanedPointsBeforeRemovingInternals2__(void)

{
  CVarMinCleanedPointsBeforeRemovingInternals2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinCleanedPointsBeforeRemovingInternals2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinContactSpeedForStrainEval'' @ 150365ce0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarMinContactSpeedForStrainEval__(void)

{
  CVarMinContactSpeedForStrainEval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinContactSpeedForStrainEval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinImpulseForStrainEval'' @ 150365d00

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarMinImpulseForStrainEval__(void)

{
  CVarMinImpulseForStrainEval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinImpulseForStrainEval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinLevelsetDimension2'' @ 150365d20

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarMinLevelsetDimension2__(void)

{
  CVarMinLevelsetDimension2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinLevelsetDimension2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnlyUseInterclusterEdgesAttachedToMainParticles'' @ 150365d40

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarOnlyUseInterclusterEdgesAttachedToMainParticles__(void)

{
  CVarOnlyUseInterclusterEdgesAttachedToMainParticles._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOnlyUseInterclusterEdgesAttachedToMainParticles);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerAdvanceBreaksAllowed'' @ 150365d60

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarPerAdvanceBreaksAllowed__(void)

{
  CVarPerAdvanceBreaksAllowed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerAdvanceBreaksAllowed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerAdvanceBreaksRescheduleLimit'' @ 150365d80

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarPerAdvanceBreaksRescheduleLimit__(void)

{
  CVarPerAdvanceBreaksRescheduleLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPerAdvanceBreaksRescheduleLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRestoreBreakingMomentumPercent'' @ 150365da0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarRestoreBreakingMomentumPercent__(void)

{
  CVarRestoreBreakingMomentumPercent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRestoreBreakingMomentumPercent)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnionsHaveCollisionParticles'' @ 150365dc0

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarUnionsHaveCollisionParticles__(void)

{
  CVarUnionsHaveCollisionParticles._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUnionsHaveCollisionParticles);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBoundingBoxForConnectionGraphFiltering'' @ 150365de0

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarUseBoundingBoxForConnectionGraphFiltering__(void)

{
  CVarUseBoundingBoxForConnectionGraphFiltering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseBoundingBoxForConnectionGraphFiltering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseConnectivity'' @ 150365e00

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarUseConnectivity__(void)

{
  CVarUseConnectivity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseConnectivity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseContactSpeedForStrainEval'' @ 150365e20

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarUseContactSpeedForStrainEval__(void)

{
  CVarUseContactSpeedForStrainEval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseContactSpeedForStrainEval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLevelsetCollision2'' @ 150365e40

void __cdecl Chaos::_dynamic_atexit_destructor_for__CVarUseLevelsetCollision2__(void)

{
  CVarUseLevelsetCollision2._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseLevelsetCollision2);
  return;
}

// operator() @ 1504a6bb0

bool __thiscall
``Chaos::FRigidClustering::AdvanceClustering'::__l47::<lambda_1>::operator()'::__l21::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5292282805487666900>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5292282805487666900>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6bf0

bool __thiscall `Chaos::UpdateGeometry'::__l56::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4281520195777855869>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4281520195777855869>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

