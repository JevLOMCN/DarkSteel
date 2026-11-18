// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 188

// `dynamic_initializer_for_'CVarChaosConstraintGraphValidate'' @ 140f643a0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosConstraintGraphValidate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosConstraintGraphValidate,L"p.Chaos.ConstraintGraph.Validate",
             &bChaosConstraintGraphValidate,
             L"Enable per-tick ConstraintGraph validation checks/assertions",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosConstraintGraphValidate__);
  return;
}

// `dynamic_initializer_for_'CVarChaosImplicitBVHOptimizedCountLeafObjects'' @ 140f643f0

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosImplicitBVHOptimizedCountLeafObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosImplicitBVHOptimizedCountLeafObjects,
             L"p.Chaos.Collision.UnionBVH.UseOptimizedCountLeafObjects",
             &bChaosImplicitBVHOptimizedCountLeafObjects,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosImplicitBVHOptimizedCountLeafObjects__);
  return;
}

// `dynamic_initializer_for_'CVarChaosRandomizeConstraintOrder'' @ 140f64440

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosRandomizeConstraintOrder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosRandomizeConstraintOrder,L"p.Chaos.Solver.RandomizeConstraintOrder",
             &bChaosRandomizeConstraintOrder,L"Randomize constraint order for testing",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosRandomizeConstraintOrder__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverAngularWakeThresholdMultiplier'' @ 140f64490

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverAngularWakeThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverAngularWakeThresholdMultiplier,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.AngularWakeThresholdMultiplier",
             &AngularPartialWakeThresholdMultiplier,
             L"[EXPERIMENTAL] A multiplier applied to AngularSleepThreshold for particle waking.[def:10]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverAngularWakeThresholdMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverCollisionAngularSleepThresholdSize'' @ 140f644e0

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverCollisionAngularSleepThresholdSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverCollisionAngularSleepThresholdSize,
             L"p.Chaos.Solver.Sleep.AngularSleepThresholdSize",
             &ChaosSolverCollisionAngularSleepThresholdSize,
             L"Scales the angular threshold based on size (0 to disable size based scaling)",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverCollisionAngularSleepThresholdSize__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverCollisionDefaultAngularSleepThreshold'' @ 140f64530

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverCollisionDefaultAngularSleepThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverCollisionDefaultAngularSleepThreshold,
             L"p.Chaos.Solver.Sleep.Defaults.AngularSleepThreshold",
             &ChaosSolverCollisionDefaultAngularSleepThreshold,
             L"Default angular threshold for sleeping.[def:0.0087]",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultAngularSleepThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverCollisionDefaultLinearSleepThreshold'' @ 140f64580

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverCollisionDefaultLinearSleepThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverCollisionDefaultLinearSleepThreshold,
             L"p.Chaos.Solver.Sleep.Defaults.LinearSleepThreshold",
             &ChaosSolverCollisionDefaultLinearSleepThreshold,
             L"Default linear threshold for sleeping.[def:0.001]",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultLinearSleepThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverCollisionDefaultSleepCounterThreshold'' @ 140f645d0

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverCollisionDefaultSleepCounterThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverCollisionDefaultSleepCounterThreshold,
             L"p.Chaos.Solver.Sleep.Defaults.SleepCounterThreshold",
             &ChaosSolverCollisionDefaultSleepCounterThreshold,
             L"Default counter threshold for sleeping.[def:20]",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultSleepCounterThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverComputeIterationSettingsEnabled'' @ 140f64620

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverComputeIterationSettingsEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverComputeIterationSettingsEnabled,
             L"p.Chaos.Solver.ComputeIterationSettings.Enabled",
             &bChaosSolverComputeIterationSettings,
             L"Recompute iteration settings every time an island is changed",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverComputeIterationSettingsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverForcePartialIslandWake'' @ 140f64670

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverForcePartialIslandWake__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverForcePartialIslandWake,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.ForcePartialIslandWake",
             &bChaosSolverForcePartialIslandWake,
             L"[EXPERIMENTAL] Safeguard only: We force partial wake events even if all particles in the island are already awake to guarantee resetting the particle sleep counter.[def:false]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverForcePartialIslandWake__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier'' @ 140f646c0

void __cdecl
Chaos::CVars::
_dynamic_initializer_for__CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier,
             L"p.Chaos.Solver.Sleep.IsolatedParticle.AngularMultiplier",
             &IsolatedParticleSleepAngularThresholdMultiplier,
             L"A multiplier applied to SleepAngularThreshold for floating particles",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier__
        );
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier'' @ 140f64710

void __cdecl
Chaos::CVars::
_dynamic_initializer_for__CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier,
             L"p.Chaos.Solver.Sleep.IsolatedParticle.CounterMultiplier",
             &IsolatedParticleSleepCounterThresholdMultiplier,
             L"A multiplier applied to SleepCounterThreshold for floating particles",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier__
        );
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier'' @ 140f64760

void __cdecl
Chaos::CVars::
_dynamic_initializer_for__CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier,
             L"p.Chaos.Solver.Sleep.IsolatedParticle.LinearMultiplier",
             &IsolatedParticleSleepLinearThresholdMultiplier,
             L"A multiplier applied to SleepLinearThreshold for floating particles",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier__
        );
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverLinearWakeThresholdMultiplier'' @ 140f647b0

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverLinearWakeThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverLinearWakeThresholdMultiplier,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.LinearWakeThresholdMultiplier",
             &LinearPartialWakeThresholdMultiplier,
             L"[EXPERIMENTAL] A multiplier applied to LinearSleepThreshold for particle waking.[def:10]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverLinearWakeThresholdMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverMinMotionlessRatio'' @ 140f64800

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverMinMotionlessRatio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverMinMotionlessRatio,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.MinimumMotionlessRatio",
             &ChaosSolverMinMotionlessRatio,
             L"[EXPERIMENTAL] Ratio of the particles which need to be motionless in an island for partial island sleep to become active (0 to always activate partial island sleep).[def:0.1]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverMinMotionlessRatio__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverMomentumPropagation'' @ 140f64850

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverMomentumPropagation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverMomentumPropagation,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.MomentumPropagation",
             &ChaosSolverMomentumPropagation,
             L"[EXPERIMENTAL] Ratio of the impact momentum transferred from one sleeping particle to another through a constraint during partial wake event (0 to disable, 1 to propagate without dissipation).[def:0.3]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverMomentumPropagation__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverPartialIslandSleep'' @ 140f648a0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverPartialIslandSleep__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverPartialIslandSleep,L"p.Chaos.Solver.Sleep.PartialIslandSleep",
             &bChaosSolverPartialIslandSleep,
             L"[EXPERIMENTAL] Single non-moving particles in islands will be deactivated even if they are connected to moving particles."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverPartialIslandSleep__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverPartialIslandWake'' @ 140f648f0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverPartialIslandWake__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverPartialIslandWake,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.PartialIslandWake",
             &bChaosSolverPartialIslandWake,
             L"[EXPERIMENTAL] Safeguard only: New constraints and particle state changes will trigger partial wake events instead of waking up the entire island.[def:true]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverPartialIslandWake__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverPartialSleepCollisionConstraintsOnly'' @ 140f64940

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverPartialSleepCollisionConstraintsOnly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverPartialSleepCollisionConstraintsOnly,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.CollisionConstraintsOnly",
             &bChaosSolverPartialSleepCollisionConstraintsOnly,
             L"[EXPERIMENTAL] Safeguard only: Only collision constraints permit partial sleep, i.e. the sleep state of particles connect by other constraint types must match.[def:true]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverPartialSleepCollisionConstraintsOnly__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverPartialWakePreIntegration'' @ 140f64990

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverPartialWakePreIntegration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverPartialWakePreIntegration,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.PartialWakePreIntegration",
             &bChaosSolverPartialWakePreIntegration,
             L"[EXPERIMENTAL] Safeguard only: Partial wake events also happen pre-integration when the user explicilty sets a particle transform or applies external impulses or forces.[def:true]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverPartialWakePreIntegration__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverPostStepWakeThreshold'' @ 140f649e0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverPostStepWakeThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverPostStepWakeThreshold,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.PostStepWakeThreshold",
             &ChaosSolverPostStepWakeThreshold,
             L"[EXPERIMENTAL] Post-solver waking of sleeping particles: Minimum squared change of velocity induced by the velocity-based collision solver (VBD, 0 to disable).[def:20]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverPostStepWakeThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverSleepEnabled'' @ 140f64a30

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverSleepEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverSleepEnabled,L"p.Chaos.Solver.Sleep.Enabled",&bChaosSolverSleepEnabled,
             L"Islands of non - moving particles will be deactivated.",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverSleepEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverSleepModeSwitchThreshold'' @ 140f64a80

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverSleepModeSwitchThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverSleepModeSwitchThreshold,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.SleepModeSwitchCounterThreshold",
             &ChaosSolverSleepModeSwitchThreshold,
             L"[EXPERIMENTAL] Safeguard only: Number of steps MinimumMotionlessRatio needs to be satisfied before switching the between full and partial island sleep.[def:10]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverSleepModeSwitchThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverWakeOnMovingOnly'' @ 140f64ad0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverWakeOnMovingOnly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverWakeOnMovingOnly,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.WakeOnMovingOnly",
             &bChaosSolverWakeOnMovingOnly,
             L"[EXPERIMENTAL] Safeguard only: Only newly detected constraints connected to a moving particle will trigger wake-up event.[def:true]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverWakeOnMovingOnly__);
  return;
}

// `dynamic_initializer_for_'CVarChaosSolverWakeOnParticleStateChanged'' @ 140f64b20

void __cdecl
Chaos::CVars::_dynamic_initializer_for__CVarChaosSolverWakeOnParticleStateChanged__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosSolverWakeOnParticleStateChanged,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.WakeOnParticleStateChanged",
             &bChaosSolverWakeOnParticleStateChanged,
             L"[EXPERIMENTAL] Safeguard only: State changes of a particle will trigger the island to wake up entirely.[def:false]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosSolverWakeOnParticleStateChanged__);
  return;
}

// `dynamic_initializer_for_'CVarChaosUnionBVHEnabled'' @ 140f64b70

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosUnionBVHEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosUnionBVHEnabled,L"p.Chaos.Collision.UnionBVH.Enabled",&bChaosUnionBVHEnabled,
             L"Set to false to disable use of BVH during collision detection (without affecting creations and serialization)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosUnionBVHEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosUnionBVHMaxDepth'' @ 140f64bc0

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosUnionBVHMaxDepth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosUnionBVHMaxDepth,L"p.Chaos.Collision.UnionBVH.MaxDepth",
             &ChaosUnionBVHMaxDepth,
             L"The allowed depth of the BVH when used to wrap a shape hiererchy",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosUnionBVHMaxDepth__);
  return;
}

// `dynamic_initializer_for_'CVarChaosUnionBVHMinShapes'' @ 140f64c10

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosUnionBVHMinShapes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosUnionBVHMinShapes,L"p.Chaos.Collision.UnionBVH.NumShapes",
             &ChaosUnionBVHMinShapes,
             L"If a geometry hierarchy has this many shapes, wrap it in a BVH for collision detection (negative to disable BVH)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosUnionBVHMinShapes__);
  return;
}

// `dynamic_initializer_for_'CVarChaosUnionBVHSplitBias'' @ 140f64c60

void __cdecl Chaos::CVars::_dynamic_initializer_for__CVarChaosUnionBVHSplitBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosUnionBVHSplitBias,L"p.Chaos.Collision.UnionBVH.SplitBias",
             &ChaosUnionBVHSplitBias,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosUnionBVHSplitBias__);
  return;
}

// `dynamic_initializer_for_'CVarClosestIntersectionStepSizeMultiplier'' @ 140f64cb0

void __cdecl Chaos::_dynamic_initializer_for__CVarClosestIntersectionStepSizeMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClosestIntersectionStepSizeMultiplier,L"p.ClosestIntersectionStepSizeMultiplier",
             &ClosestIntersectionStepSizeMultiplier,
             L"When raycasting we use this multiplier to substep the travel distance along the ray. Smaller number gives better accuracy at higher cost"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClosestIntersectionStepSizeMultiplier__);
  return;
}

// `dynamic_initializer_for_'ChaosSolverValidateConstraintSleepState'' @ 140f64d00

void __cdecl Chaos::CVars::_dynamic_initializer_for__ChaosSolverValidateConstraintSleepState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&ChaosSolverValidateConstraintSleepState,
             L"p.Chaos.Solver.Sleep.PartialIslandSleep.ValidateConstraintSleepState",
             &bChaosSolverValidateConstraintSleepState,
             L"[EXPERIMENTAL] Debugging only: Enable constraint sleep state validation checks/assertions at the end of the tick.[def:false]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__ChaosSolverValidateConstraintSleepState__);
  return;
}

// `dynamic_initializer_for_'GCVarIslandGroupsMaxWorkers'' @ 140f64d50

void __cdecl Chaos::CVars::_dynamic_initializer_for__GCVarIslandGroupsMaxWorkers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarIslandGroupsMaxWorkers,L"p.Chaos.Solver.IslandGroups.MaxWorkers",
             &GIslandGroupsMaxWorkers,
             L"The maximum number of worker threads to use (0 means unlimited)",0);
  atexit(_dynamic_atexit_destructor_for__GCVarIslandGroupsMaxWorkers__);
  return;
}

// `dynamic_initializer_for_'GCVarIslandGroupsMinBodiesPerWorker'' @ 140f64da0

void __cdecl Chaos::CVars::_dynamic_initializer_for__GCVarIslandGroupsMinBodiesPerWorker__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarIslandGroupsMinBodiesPerWorker,L"p.Chaos.Solver.IslandGroups.MinBodiesPerWorker",
             &GIslandGroupsMinBodiesPerWorker,
             L"The minimum number of bodies we want per worker thread",0);
  atexit(_dynamic_atexit_destructor_for__GCVarIslandGroupsMinBodiesPerWorker__);
  return;
}

// `dynamic_initializer_for_'GCVarIslandGroupsMinConstraintsPerWorker'' @ 140f64df0

void __cdecl
Chaos::CVars::_dynamic_initializer_for__GCVarIslandGroupsMinConstraintsPerWorker__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarIslandGroupsMinConstraintsPerWorker,
             L"p.Chaos.Solver.IslandGroups.MinConstraintsPerWorker",
             &GIslandGroupsMinConstraintsPerWorker,
             L"The minimum number of constraints we want per worker thread",0);
  atexit(_dynamic_atexit_destructor_for__GCVarIslandGroupsMinConstraintsPerWorker__);
  return;
}

// `dynamic_initializer_for_'GCVarIslandGroupsParallelMode'' @ 140f64e40

void __cdecl Chaos::CVars::_dynamic_initializer_for__GCVarIslandGroupsParallelMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarIslandGroupsParallelMode,L"p.Chaos.Solver.IslandGroups.ParallelMode",
             &GIslandGroupsParallelMode,L"0: Single-Threaded; 1: Parallel-For; 2: Tasks",0);
  atexit(_dynamic_atexit_destructor_for__GCVarIslandGroupsParallelMode__);
  return;
}

// `dynamic_initializer_for_'GCVarIslandGroupsWorkerThreadMultiplier'' @ 140f64e90

void __cdecl Chaos::CVars::_dynamic_initializer_for__GCVarIslandGroupsWorkerThreadMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarIslandGroupsWorkerThreadMultiplier,
             L"p.Chaos.Solver.IslandGroups.WorkerMultiplier",&GIslandGroupsWorkerMultiplier,
             L"Total number of island groups in the solver will be NumWorkerThreads * WorkerThreadMultiplier. [def:1]"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarIslandGroupsWorkerThreadMultiplier__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f64ee0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f64f70

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f65000

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f65090

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f65120

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f651b0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f65240

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f652d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f65360

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f653f0

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

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_ApplyConstraintsPhase1'' @ 140f65480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_ApplyConstraintsPhase1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase1 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase1>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_ApplyConstraintsPhase1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase1,*pFVar1,
               L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase1","STATGROUP_ChaosConstraintSolver",
               "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_ApplyConstraintsPhase2'' @ 140f65510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_ApplyConstraintsPhase2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase2 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase2>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_ApplyConstraintsPhase2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase2,*pFVar1,
               L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase2","STATGROUP_ChaosConstraintSolver",
               "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_ApplyConstraintsPhase3'' @ 140f655a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_ApplyConstraintsPhase3__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase3 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase3>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_ApplyConstraintsPhase3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase3,*pFVar1,
               L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase3","STATGROUP_ChaosConstraintSolver",
               "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Gather'' @ 140f65630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Gather__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Gather == (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Gather");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Gather","STATGROUP_ChaosConstraintSolver",
               "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Gather_Bodies'' @ 140f656c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Gather_Bodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Gather_Bodies ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Gather_Bodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Bodies,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Gather::Bodies","STATGROUP_ChaosConstraintDetails",
               "STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Gather_Constraints'' @ 140f65750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Gather_Constraints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Gather_Constraints ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Gather_Constraints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Constraints,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Gather::Constraints","STATGROUP_ChaosConstraintDetails",
               "STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Gather_Prepare'' @ 140f657e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Gather_Prepare__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Gather_Prepare ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Prepare>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Gather_Prepare");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Prepare,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Gather::Prepare","STATGROUP_ChaosConstraintDetails",
               "STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Scatter'' @ 140f65870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Scatter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Scatter == (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Scatter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Scatter","STATGROUP_ChaosConstraintSolver",
               "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Scatter_Bodies'' @ 140f65900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Scatter_Bodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Scatter_Bodies ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Bodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Scatter_Bodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter_Bodies,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Scatter::Bodies","STATGROUP_ChaosConstraintDetails",
               "STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Evolution_Scatter_Constraints'' @ 140f65990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Evolution_Scatter_Constraints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Evolution_Scatter_Constraints ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Evolution_Scatter_Constraints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter_Constraints,*pFVar1,
               L"FPBDRigidsEvolutionGBF::Scatter::Constraints","STATGROUP_ChaosConstraintDetails",
               "STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HandleViewParallelForImp'' @ 140f65a20

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

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_AssignLevels'' @ 140f65ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_AssignLevels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_AssignLevels ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_AssignLevels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_AssignLevels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_AssignLevels,*pFVar1,
               L"IslandManager::Levels","STATGROUP_ChaosIslands","STATCAT_Advanced",L"ChaosIslands",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_ComputeIterationSettings'' @ 140f65b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_ComputeIterationSettings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_ComputeIterationSettings ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_ComputeIterationSettings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_ComputeIterationSettings,
               *pFVar1,L"IslandManager::ComputeIterationSettings","STATGROUP_ChaosIslands",
               "STATCAT_Advanced",L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_Finalize'' @ 140f65bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_Finalize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_Finalize ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_Finalize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_Finalize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_Finalize,*pFVar1,
               L"IslandManager::Finalize","STATGROUP_ChaosIslands","STATCAT_Advanced",
               L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_MergeIslands'' @ 140f65c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_MergeIslands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_MergeIslands ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_MergeIslands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_MergeIslands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_MergeIslands,*pFVar1,
               L"IslandManager::Merge","STATGROUP_ChaosIslands","STATCAT_Advanced",L"ChaosIslands",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_SplitIslands'' @ 140f65cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_SplitIslands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_SplitIslands ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_SplitIslands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_SplitIslands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_SplitIslands,*pFVar1,
               L"IslandManager::Split","STATGROUP_ChaosIslands","STATCAT_Advanced",L"ChaosIslands",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_UpdateParticles'' @ 140f65d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_UpdateParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_UpdateParticles ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_UpdateParticles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_UpdateParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_UpdateParticles,*pFVar1,
               L"IslandManager::UpdateParticles","STATGROUP_ChaosIslands","STATCAT_Advanced",
               L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IslandManager_Validate'' @ 140f65e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IslandManager_Validate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IslandManager_Validate ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_Validate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IslandManager_Validate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_Validate,*pFVar1,
               L"IslandManager::Validate","STATGROUP_ChaosIslands","STATCAT_Advanced",
               L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 140f65ea0

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 140f65f30

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

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 140f65fc0

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

// `dynamic_initializer_for_'StatPtr_STAT_SolveConstraints'' @ 140f66050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SolveConstraints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SolveConstraints == (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SolveConstraints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SolveConstraints,*pFVar1,
               L"Chaos::SolveConstraints","STATGROUP_ChaosConstraintSolver","STATCAT_Advanced",
               L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// operator<<<double,3,0> @ 143b50180

FChaosArchive * __cdecl
Chaos::operator<<<double,3,0>(FChaosArchive *param_1,TGeometryParticlesImp<double,3,0> *param_2)

{
  (**(code **)(param_2->_padding_ + 8))(param_2,param_1);
  return param_1;
}

// FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3> @ 143b501b0

FArchive * __cdecl
Chaos::operator<<<TArray<Chaos::Private::
FImplicitBVHObject_TSizedDefaultAllocator<32>_>_TArray<int,TSizedDefaultAllocator<32>_>_double_3>
          (FArchive *param_1,
          TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
          *param_2)

{
  TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::Serialize(param_2,param_1);
  return param_1;
}

// TArrayND<double,3>,double,3> @ 143b501e0

FArchive * __cdecl
Chaos::operator<<<Chaos::TArrayND<double,3>_double_3>
          (FArchive *param_1,TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  operator<<<int,3>(param_1,&param_2->MCounts);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar1 < 8) {
    TArrayPrivateFriend::Serialize<double,TSizedDefaultAllocator<32>_>(param_1,&param_2->MArray);
    return param_1;
  }
  TryBulkSerializeArrayNDBaseForDoubles<double,float>(param_1,&param_2->MArray);
  return param_1;
}

// TVector<double,3>,3> @ 143b50260

FArchive * __cdecl
Chaos::operator<<<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>_3>
          (FArchive *param_1,
          TArrayNDBase<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>,3>
          *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  operator<<<int,3>(param_1,&param_2->MCounts);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar1 < 8) {
    TArrayPrivateFriend::Serialize<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->MArray);
    return param_1;
  }
  TryBulkSerializeArrayNDBaseForDoubles<Chaos::TVector<double,3>,Chaos::TVector<float,3>_>
            (param_1,&param_2->MArray);
  return param_1;
}

// TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3> @ 143b502e0

FArchive * __cdecl
Chaos::operator<<<Chaos::
TGeometryParticlesImp<double,3,0>_TArray<int,TSizedDefaultAllocator<32>_>_double_3>
          (FArchive *param_1,
          TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
          *param_2)

{
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::Serialize(param_2,param_1);
  return param_1;
}

// FImplicitBVHObject,TSizedDefaultAllocator<32>_> @ 143b50310

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::Private::FImplicitBVHObject_TSizedDefaultAllocator<32>_>
          (FChaosArchive *param_1,
          TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FChaosArchive *pFVar8;
  uint uVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  (**(code **)(param_1->_padding_ + 0x10))
            (param_1,(longlong)*piVar2 * 0x48,(longlong)param_2->ArrayMax * 0x48);
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = *piVar2;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar10 = (ulong64)local_res8[0];
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (*piVar1 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,local_res8[0],&param_2->AllocatorInstance,*piVar2,piVar1);
    uVar10 = (ulong64)local_res8[0];
  }
  iVar7 = *piVar2;
  uVar11 = (uint)uVar10;
  if (iVar7 < (int)uVar11) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,uVar11 - iVar7,&param_2->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<Chaos::Private::FImplicitBVHObject,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48,uVar11 - iVar7);
    uVar9 = local_res8[0];
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    uVar9 = uVar11;
    if ((int)uVar11 < iVar7) {
      uVar12 = iVar7 - uVar11;
      if (((int)(uVar12 | uVar11) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), uVar9 = local_res8[0], bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar4)();
        return pFVar8;
      }
      if (uVar12 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x48;
        iVar7 = (*piVar2 - uVar12) - uVar11;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0x48,(longlong)iVar7 * 0x48);
        }
        *piVar2 = *piVar2 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&param_2->AllocatorInstance,*piVar2,piVar1);
        uVar9 = local_res8[0];
      }
    }
  }
  uVar11 = 0;
  if (0 < (int)uVar9) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < *piVar2) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FChaosArchive *)(*pcVar4)();
        return pFVar8;
      }
      Chaos::Private::FImplicitBVHObject::Serialize
                ((FImplicitBVHObject *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x48),param_1);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_res8[0]);
  }
  return param_1;
}

// FPerShapeData> @ 143b50570

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::FPerShapeData>
          (FChaosArchive *param_1,TSerializablePtr<Chaos::FPerShapeData> *param_2)

{
  FChaosArchive::SerializePtr<Chaos::FPerShapeData>(param_1,param_2);
  return param_1;
}

// FTriangleMeshImplicitObject> @ 143b50590

FChaosArchive * __cdecl
Chaos::operator<<<Chaos::FTriangleMeshImplicitObject>
          (FChaosArchive *param_1,TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *param_2)

{
  longlong *plVar1;
  FChaosArchiveContext *pFVar2;
  FTriangleMeshImplicitObject *pFVar3;
  FTriangleMeshImplicitObject *pFVar4;
  longlong lVar5;
  void **ppvVar6;
  TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *pTVar7;
  undefined8 *puVar8;
  TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&> local_res8;
  undefined8 *local_res18 [2];
  FRefCountPtrHolder ***local_38;
  undefined8 **local_30;
  
  local_res8.Key = (void **)param_2->Reference;
  FChaosArchive::SerializePtr<Chaos::FTriangleMeshImplicitObject>
            (param_1,(TSerializablePtr<Chaos::FTriangleMeshImplicitObject> *)&local_res8);
  ppvVar6 = local_res8.Key;
  if ((param_1->_padding_ & 1) != 0) {
    pFVar2 = (param_1->Context).Ptr;
    pTVar7 = TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->ObjToRefCountPtrHolder,local_res8.Key);
    if ((pTVar7 == (TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*> *)0x0) ||
       (puVar8 = *(undefined8 **)&pTVar7->field_0x8, puVar8 == (undefined8 *)0x0)) {
      puVar8 = ::operator_new(0x10);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = &
                  ___7__TRefCountPtrHolder_VFTriangleMeshImplicitObject_Chaos___FChaosArchiveContext_Chaos__6B_
        ;
        puVar8[1] = ppvVar6;
        if ((FTriangleMeshImplicitObject *)ppvVar6 != (FTriangleMeshImplicitObject *)0x0) {
          LOCK();
          *(int *)((longlong)ppvVar6 + 8) = (int)*(longlong *)((longlong)ppvVar6 + 8) + 1;
          UNLOCK();
        }
      }
      local_38 = &local_res8.Value;
      local_30 = local_res18;
      local_res8.Value = ppvVar6;
      local_res18[0] = puVar8;
      TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<void_*_&&,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*_&&>_>
                ((TSet<TTuple<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::FChaosArchiveContext::FRefCountPtrHolder_*,0>,FDefaultSetAllocator>
                  *)&pFVar2->ObjToRefCountPtrHolder,&local_res8,(bool *)&local_38);
    }
    pFVar3 = (FTriangleMeshImplicitObject *)puVar8[1];
    pFVar4 = param_2->Reference;
    if (pFVar4 != pFVar3) {
      param_2->Reference = pFVar3;
      if (pFVar3 != (FTriangleMeshImplicitObject *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FTriangleMeshImplicitObject *)0x0) {
        LOCK();
        plVar1 = &pFVar4->_padding_;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  return param_1;
}

// AsAlwaysSerializable<Chaos::FPerShapeData> @ 143b51550

TSerializablePtr<Chaos::FPerShapeData> * __cdecl
Chaos::AsAlwaysSerializable<Chaos::FPerShapeData>(FPerShapeData **param_1)

{
  return (TSerializablePtr<Chaos::FPerShapeData> *)param_1;
}

// DefaultConstructItems<Chaos::FIslandGroupStats,int> @ 143b516f0

void __cdecl DefaultConstructItems<Chaos::FIslandGroupStats,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 <= (void *)((longlong)param_1 + 0x28U)) {
      memset(param_1,0,0x28);
    }
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return;
}

// DefaultConstructItems<Chaos::Private::FImplicitBVHObject,int> @ 143b51750

void __cdecl
DefaultConstructItems<Chaos::Private::FImplicitBVHObject,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-1] = 0x7f7fffff;
      *puVar1 = 0x7f7fffff;
      puVar1[1] = 0x7f7fffff;
      puVar1[2] = 0xff7fffff;
      puVar1[3] = 0xff7fffff;
      puVar1[4] = 0xff7fffff;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIsland>::FBlock,int> @ 143b517a0

void __cdecl
DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIsland>::FBlock,int>
          (FBlock *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->Begin == (TItem<Chaos::Private::FPBDIsland,void> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Begin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x14d,L""), bVar2)) break;
    FMemory::Free(param_1->Begin);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::FBlock,int> @ 143b51810

void __cdecl
DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::FBlock,int>
          (FBlock *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->Begin == (TItem<Chaos::Private::FPBDIslandConstraint,void> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Begin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x14d,L""), bVar2)) break;
    FMemory::Free(param_1->Begin);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::FBlock,int> @ 143b51880

void __cdecl
DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::FBlock,int>
          (FBlock *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->Begin == (TItem<Chaos::Private::FPBDIslandMergeSet,void> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Begin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x14d,L""), bVar2)) break;
    FMemory::Free(param_1->Begin);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::FBlock,int> @ 143b518f0

void __cdecl
DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::FBlock,int>
          (FBlock *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->Begin == (TItem<Chaos::Private::FPBDIslandParticle,void> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Begin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                           ,0x14d,L""), bVar2)) break;
    FMemory::Free(param_1->Begin);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int> @ 143b51960

void __cdecl
DestructItems<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

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

// DestructItems<TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>,int> @ 143b519a0

void __cdecl
DestructItems<TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>,int>
          (TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>
           *param_1,int param_2)

{
  FPBDIslandConstraintGroupSolver *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPBDIslandConstraintGroupSolver *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DownCast<`Chaos::FPerShapeData::UpdateLeafWorldTransform'::__l2::<lambda_1>_> @ 143b519e0

void __thiscall
Chaos::FPerShapeData::DownCast<_Chaos::FPerShapeData::UpdateLeafWorldTransform_::__l2::<lambda_1>_>
          (FPerShapeData *this,<lambda_1> *param_1)

{
  if (this->Type != 0) {
    FShapeInstance::UpdateLeafWorldTransform
              ((FShapeInstance *)this,*(TGeometryParticleHandleImp<double,3,1> **)param_1);
    return;
  }
  return;
}

// HeapSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,`Chaos::Private::FPBDIslandGroupManager::BuildGroups'::__l34::<lambda_1>_> @ 143b51c40

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,_Chaos::Private::FPBDIslandGroupManager::BuildGroups_::__l34::<lambda_1>_>
          (FPBDIsland **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FPBDIsland *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
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
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_143b51d3a:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[iVar4]->NumEdges < param_1[(longlong)iVar9 + 2]->NumEdges) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (pFVar1->NumEdges <= param_1[iVar4]->NumEdges) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar6]->NumEdges < param_1[(longlong)iVar5 + 2]->NumEdges) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (pFVar1->NumEdges <= param_1[iVar6]->NumEdges) goto LAB_143b51d3a;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,`Chaos::Private::FPBDIslandManager::SortIslandEdges'::__l4::<lambda_1>_>_> @ 143b51e10

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_Chaos::Private::FPBDIslandManager::SortIslandEdges_::__l4::<lambda_1>_>_>
          (FPBDIslandConstraint **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_private:_void___cdecl_Chaos::Private::FPBDIslandManager::SortIslandEdges(Chaos::Private::FPBDIsland_*)_::_4_::<lambda_1>_>
          param_4)

{
  FPBDIslandConstraint *pFVar1;
  FPBDIslandConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_143b51f47:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar8 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar5 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  if (CONCAT44(param_1[(longlong)iVar7 + 2]->Level,
                               param_1[(longlong)iVar7 + 2]->LevelSortKey) <
                      CONCAT44(param_1[iVar5]->Level,param_1[iVar5]->LevelSortKey)) {
                    iVar5 = iVar7;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1[iVar5];
                pFVar2 = param_1[iVar9];
                if (CONCAT44(pFVar1->Level,pFVar1->LevelSortKey) <=
                    CONCAT44(pFVar2->Level,pFVar2->LevelSortKey)) break;
                param_1[iVar9] = pFVar1;
                param_1[iVar5] = pFVar2;
                iVar9 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar10 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (CONCAT44(param_1[(longlong)iVar6 + 2]->Level,param_1[(longlong)iVar6 + 2]->LevelSortKey) <
          CONCAT44(param_1[iVar10]->Level,param_1[iVar10]->LevelSortKey)) {
        iVar10 = iVar6;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1[iVar10];
    pFVar2 = param_1[iVar5];
    if (CONCAT44(pFVar1->Level,pFVar1->LevelSortKey) <= CONCAT44(pFVar2->Level,pFVar2->LevelSortKey)
       ) goto LAB_143b51f47;
    param_1[iVar5] = pFVar1;
    iVar6 = iVar10 * 2 + 1;
    param_1[iVar10] = pFVar2;
    iVar5 = iVar10;
  } while( true );
}

// HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::FCylinder::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 143b52050

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::FCylinder::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_private:_virtual_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::FCylinder::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  Pair<double,Chaos::TVector<double,3>_> *pPVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_143b5215d:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pPVar16 = param_1 + lVar13;
          do {
            uVar5 = *(undefined8 *)&pPVar16->Second;
            dVar4 = param_1->First;
            uVar6 = *(undefined8 *)&param_1->Second;
            uVar7 = *(undefined8 *)&(param_1->Second).field_0x8;
            uVar8 = *(undefined8 *)&(param_1->Second).field_0x10;
            param_1->First = pPVar16->First;
            *(undefined8 *)&param_1->Second = uVar5;
            uVar5 = *(undefined8 *)&(pPVar16->Second).field_0x10;
            *(undefined8 *)&(param_1->Second).field_0x8 =
                 *(undefined8 *)&(pPVar16->Second).field_0x8;
            *(undefined8 *)&(param_1->Second).field_0x10 = uVar5;
            pPVar16->First = dVar4;
            *(undefined8 *)&pPVar16->Second = uVar6;
            *(undefined8 *)&(pPVar16->Second).field_0x8 = uVar7;
            *(undefined8 *)&(pPVar16->Second).field_0x10 = uVar8;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].First <= param_1[iVar10].First &&
                      param_1[iVar10].First != param_1[(longlong)iVar15 + 2].First) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].First < param_1[iVar14].First ||
                    param_1[iVar10].First == param_1[iVar14].First) break;
                dVar4 = param_1[iVar14].First;
                uVar5 = *(undefined8 *)&param_1[iVar14].Second;
                puVar1 = &param_1[iVar14].Second.field_0x8;
                uVar6 = *(undefined8 *)puVar1;
                uVar7 = *(undefined8 *)(puVar1 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar10].Second;
                param_1[iVar14].First = param_1[iVar10].First;
                *(undefined8 *)&param_1[iVar14].Second = uVar8;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                uVar8 = *(undefined8 *)(puVar1 + 8);
                puVar2 = &param_1[iVar14].Second.field_0x8;
                *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
                *(undefined8 *)(puVar2 + 8) = uVar8;
                param_1[iVar10].First = dVar4;
                *(undefined8 *)&param_1[iVar10].Second = uVar5;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                *(undefined8 *)puVar1 = uVar6;
                *(undefined8 *)(puVar1 + 8) = uVar7;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pPVar16 = pPVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].First <= param_1[iVar12].First &&
          param_1[iVar12].First != param_1[(longlong)iVar11 + 2].First) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].First < param_1[iVar10].First ||
        param_1[iVar12].First == param_1[iVar10].First) goto LAB_143b5215d;
    dVar4 = param_1[iVar10].First;
    uVar5 = *(undefined8 *)&param_1[iVar10].Second;
    puVar1 = &param_1[iVar10].Second.field_0x8;
    uVar6 = *(undefined8 *)puVar1;
    uVar7 = *(undefined8 *)(puVar1 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar12].Second;
    param_1[iVar10].First = param_1[iVar12].First;
    *(undefined8 *)&param_1[iVar10].Second = uVar8;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    uVar8 = *(undefined8 *)(puVar1 + 8);
    puVar2 = &param_1[iVar10].Second.field_0x8;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar2 + 8) = uVar8;
    iVar11 = iVar12 * 2 + 1;
    param_1[iVar12].First = dVar4;
    *(undefined8 *)&param_1[iVar12].Second = uVar5;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    *(undefined8 *)puVar1 = uVar6;
    *(undefined8 *)(puVar1 + 8) = uVar7;
    iVar10 = iVar12;
  } while( true );
}

// InitParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,0>_> @ 143b52270

void __cdecl
Chaos::Private::InitParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,0>_>
          (TPBDRigidParticleHandleImp<double,3,0> *param_1,double param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> local_58;
  TVector<double,3> local_40 [2];
  
  if (__real_3e45798ee0000000 < param_2) {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_58,
               *(int *)&param_1->field_0x8);
    uVar2 = *(uint *)&param_1->field_0x8;
    lVar3 = *(longlong *)param_1;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x2f8)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x2f0);
    puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x18);
    *puVar1 = local_58._0_8_;
    puVar1[1] = local_58._8_8_;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18) = local_58._16_8_;
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,local_40,
               *(int *)&param_1->field_0x8);
    uVar2 = *(uint *)&param_1->field_0x8;
    lVar3 = *(longlong *)param_1;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x310)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x308);
    puVar1 = (undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0x18);
    *puVar1 = local_40[0]._0_8_;
    puVar1[1] = local_40[0]._8_8_;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18) = local_40[0]._16_8_;
  }
  return;
}

// IntroSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,`Chaos::Private::FPBDIslandGroupManager::BuildGroups'::__l34::<lambda_1>_> @ 143b523e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,_Chaos::Private::FPBDIslandGroupManager::BuildGroups_::__l34::<lambda_1>_>
          (FPBDIsland **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FPBDIsland **ppFVar1;
  FPBDIsland *pFVar2;
  int iVar3;
  FPBDIsland ***pppFVar4;
  FPBDIsland **ppFVar5;
  FPBDIsland **ppFVar6;
  FPBDIsland **ppFVar7;
  FPBDIsland **ppFVar8;
  FPBDIsland **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FPBDIsland **local_338;
  FPBDIsland **local_328;
  FPBDIsland **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_143b52490:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_143b524c0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000143b524c9;
          goto LAB_143b524e0;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar6)->NumEdges <= (*ppFVar1)->NumEdges) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_143b525a3;
      }
LAB_143b52591:
      local_338 = ppFVar1;
      HeapSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,_Chaos::Private::FPBDIslandGroupManager::BuildGroups_::__l34::<lambda_1>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_143b525a3:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x000143b524c9:
  if ((*ppFVar8)->NumEdges <= (*ppFVar5)->NumEdges) goto LAB_143b524c0;
LAB_143b524e0:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar6)->NumEdges <= (*ppFVar8)->NumEdges);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_143b524c0;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_143b525a3;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_143b525a3;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_143b52591;
  goto LAB_143b52490;
}

// IntroSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,`Chaos::Private::FPBDIslandManager::SortIslandEdges'::__l4::<lambda_1>_>_> @ 143b52650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_Chaos::Private::FPBDIslandManager::SortIslandEdges_::__l4::<lambda_1>_>_>
          (FPBDIslandConstraint **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_private:_void___cdecl_Chaos::Private::FPBDIslandManager::SortIslandEdges(Chaos::Private::FPBDIsland_*)_::_4_::<lambda_1>_>
          param_4)

{
  FPBDIslandConstraint **ppFVar1;
  FPBDIslandConstraint *pFVar2;
  int iVar3;
  FPBDIslandConstraint **ppFVar4;
  FPBDIslandConstraint **ppFVar5;
  FPBDIslandConstraint **ppFVar6;
  FPBDIslandConstraint **ppFVar7;
  FPBDIslandConstraint **ppFVar8;
  FPBDIslandConstraint ***pppFVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  FPBDIslandConstraint **local_348;
  FPBDIslandConstraint **local_338;
  FPBDIslandConstraint **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    pppFVar9 = &local_338;
    do {
      ppFVar4 = pppFVar9[1];
      ppFVar5 = *pppFVar9;
      ppFVar1 = pppFVar9[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_348 != 0) {
LAB_143b52700:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar4 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_143b52730:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x000143b52739;
          goto LAB_143b52760;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar4) {
            ppFVar5 = ppFVar1;
            if (CONCAT44((*ppFVar1)->Level,(*ppFVar1)->LevelSortKey) <=
                CONCAT44((*ppFVar6)->Level,(*ppFVar6)->LevelSortKey)) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar4;
          *ppFVar4 = pFVar2;
        }
        goto LAB_143b52837;
      }
LAB_143b52826:
      local_348 = ppFVar1;
      HeapSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_Chaos::Private::FPBDIslandManager::SortIslandEdges_::__l4::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_143b52837:
      pppFVar9 = pppFVar9 + -3;
    } while (&local_338 <= pppFVar9);
  }
  return;
code_r0x000143b52739:
  if (CONCAT44((*ppFVar5)->Level,(*ppFVar5)->LevelSortKey) <=
      CONCAT44((*ppFVar8)->Level,(*ppFVar8)->LevelSortKey)) goto LAB_143b52730;
LAB_143b52760:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while (CONCAT44((*ppFVar8)->Level,(*ppFVar8)->LevelSortKey) <=
           CONCAT44((*ppFVar6)->Level,(*ppFVar6)->LevelSortKey));
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_143b52730;
  }
  pFVar2 = *ppFVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar9 = ppFVar5;
      pppFVar9[1] = ppFVar4;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_143b52837;
    ppFVar4 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar9 = ppFVar8;
      pppFVar9[1] = ppFVar7 + -2;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_143b52837;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_348 == 0) goto LAB_143b52826;
  goto LAB_143b52700;
}

// IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::FCylinder::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 143b528f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::FCylinder::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_private:_virtual_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::FCylinder::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  Pair<double,Chaos::TVector<double,3>_> *pPVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  Pair<double,Chaos::TVector<double,3>_> *pPVar8;
  Pair<double,Chaos::TVector<double,3>_> *pPVar9;
  Pair<double,Chaos::TVector<double,3>_> *pPVar10;
  Pair<double,Chaos::TVector<double,3>_> **ppPVar11;
  Pair<double,Chaos::TVector<double,3>_> *pPVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  Pair<double,Chaos::TVector<double,3>_> *pPVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  Pair<double,Chaos::TVector<double,3>_> *local_338;
  Pair<double,Chaos::TVector<double,3>_> *local_328;
  Pair<double,Chaos::TVector<double,3>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppPVar11 = &local_328;
    do {
      pPVar13 = ppPVar11[1];
      pPVar8 = *ppPVar11;
      pPVar1 = ppPVar11[2];
      iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
      local_338._0_4_ = (int)pPVar1;
      pPVar14 = pPVar8;
      if ((int)local_338 != 0) {
LAB_143b529a0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)&pPVar14->Second;
          pPVar10 = pPVar13 + 1;
          pPVar8 = pPVar14 + iVar7 / 2;
          dVar2 = pPVar8->First;
          uVar4 = *(undefined8 *)&pPVar8->Second;
          uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x8;
          uVar6 = *(undefined8 *)&(pPVar8->Second).field_0x10;
          pPVar8->First = pPVar14->First;
          *(undefined8 *)&pPVar8->Second = uVar3;
          uVar3 = *(undefined8 *)&(pPVar14->Second).field_0x10;
          *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar14->Second).field_0x8;
          *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar3;
          pPVar14->First = dVar2;
          *(undefined8 *)&pPVar14->Second = uVar4;
          *(undefined8 *)&(pPVar14->Second).field_0x8 = uVar5;
          *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar6;
          pPVar8 = pPVar14;
LAB_143b529e0:
          pPVar9 = pPVar8;
          pPVar8 = pPVar9 + 1;
          if (pPVar8 <= pPVar13) goto code_r0x000143b529e9;
          goto LAB_143b529f4;
        }
        if (pPVar14 < pPVar13) {
          pPVar1 = pPVar14 + 1;
          do {
            pPVar8 = pPVar14;
            if (pPVar1 <= pPVar13) {
              pPVar10 = pPVar1;
              if (0x7f < ((longlong)pPVar13 + (0x20 - (longlong)pPVar1) & 0xffffffffffffffe0U)) {
                do {
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10->First) {
                    pPVar8 = pPVar10;
                    dVar2 = pPVar10->First;
                  }
                  if (dVar2 < pPVar10[1].First) {
                    pPVar8 = pPVar10 + 1;
                  }
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10[2].First) {
                    pPVar8 = pPVar10 + 2;
                    dVar2 = pPVar10[2].First;
                  }
                  if (dVar2 < pPVar10[3].First) {
                    pPVar8 = pPVar10 + 3;
                  }
                  pPVar10 = pPVar10 + 4;
                } while (pPVar10 <= pPVar13 + -3);
              }
              for (; pPVar10 <= pPVar13; pPVar10 = pPVar10 + 1) {
                if (pPVar8->First < pPVar10->First) {
                  pPVar8 = pPVar10;
                }
              }
            }
            dVar2 = pPVar8->First;
            uVar3 = *(undefined8 *)&pPVar8->Second;
            pPVar10 = pPVar13 + -1;
            uVar4 = *(undefined8 *)&(pPVar8->Second).field_0x8;
            uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x10;
            uVar6 = *(undefined8 *)&pPVar13->Second;
            pPVar8->First = pPVar13->First;
            *(undefined8 *)&pPVar8->Second = uVar6;
            uVar6 = *(undefined8 *)&(pPVar13->Second).field_0x10;
            *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar13->Second).field_0x8
            ;
            *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar6;
            pPVar13->First = dVar2;
            *(undefined8 *)&pPVar13->Second = uVar3;
            *(undefined8 *)&(pPVar13->Second).field_0x8 = uVar4;
            *(undefined8 *)&(pPVar13->Second).field_0x10 = uVar5;
            pPVar13 = pPVar10;
          } while (pPVar14 < pPVar10);
        }
        goto LAB_143b52add;
      }
LAB_143b52acc:
      local_338 = pPVar1;
      HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::FCylinder::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
                (pPVar8,iVar7,param_3,param_4);
LAB_143b52add:
      ppPVar11 = ppPVar11 + -3;
    } while (&local_328 <= ppPVar11);
  }
  return;
code_r0x000143b529e9:
  if (pPVar8->First < pPVar14->First || pPVar8->First == pPVar14->First) goto LAB_143b529e0;
LAB_143b529f4:
  do {
    pPVar12 = pPVar10;
    pPVar10 = pPVar12 + -1;
    if (pPVar10 <= pPVar14) break;
  } while (pPVar14->First < pPVar10->First || pPVar14->First == pPVar10->First);
  uVar3 = *(undefined8 *)&pPVar12[-1].Second;
  if (pPVar8 <= pPVar10) {
    dVar2 = pPVar8->First;
    uVar4 = *(undefined8 *)&pPVar9[1].Second;
    uVar5 = *(undefined8 *)&pPVar9[1].Second.field_0x8;
    uVar6 = *(undefined8 *)&pPVar9[1].Second.field_0x10;
    pPVar8->First = pPVar10->First;
    *(undefined8 *)&pPVar9[1].Second = uVar3;
    uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
    *(undefined8 *)&pPVar9[1].Second.field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
    *(undefined8 *)&pPVar9[1].Second.field_0x10 = uVar3;
    pPVar10->First = dVar2;
    *(undefined8 *)&pPVar12[-1].Second = uVar4;
    *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
    *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
    goto LAB_143b529e0;
  }
  dVar2 = pPVar14->First;
  uVar4 = *(undefined8 *)&pPVar14->Second;
  uVar5 = *(undefined8 *)&(pPVar14->Second).field_0x8;
  uVar6 = *(undefined8 *)&(pPVar14->Second).field_0x10;
  pPVar14->First = pPVar10->First;
  *(undefined8 *)&pPVar14->Second = uVar3;
  local_338._0_4_ = (int)local_338 + -1;
  uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
  *(undefined8 *)&(pPVar14->Second).field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
  *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar3;
  pPVar10->First = dVar2;
  *(undefined8 *)&pPVar12[-1].Second = uVar4;
  *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
  *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
  if ((longlong)((longlong)pPVar10 + (-0x20 - (longlong)pPVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pPVar13 - (longlong)pPVar8 & 0xffffffffffffffe0U)) {
    if (pPVar8 < pPVar13) {
      *ppPVar11 = pPVar8;
      ppPVar11[1] = pPVar13;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar10 <= pPVar14 + 1) goto LAB_143b52add;
    pPVar13 = pPVar12 + -2;
    pPVar8 = pPVar14;
  }
  else {
    if (pPVar14 + 1 < pPVar10) {
      *ppPVar11 = pPVar14;
      ppPVar11[1] = pPVar12 + -2;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar13 <= pPVar8) goto LAB_143b52add;
  }
  iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
  pPVar14 = pPVar8;
  if ((int)local_338 == 0) goto LAB_143b52acc;
  goto LAB_143b529a0;
}

// MakeSerializable<Chaos::FTriangleMeshImplicitObject> @ 143b52c00

TSerializablePtr<Chaos::FTriangleMeshImplicitObject> __cdecl
Chaos::MakeSerializable<Chaos::FTriangleMeshImplicitObject>
          (TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *param_1)

{
  undefined8 *in_RDX;
  
  param_1->Reference = (FTriangleMeshImplicitObject *)*in_RDX;
  return (TSerializablePtr<Chaos::FTriangleMeshImplicitObject>)
         (FTriangleMeshImplicitObject *)param_1;
}

// MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_> @ 143b52c10

void __cdecl
Chaos::MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
          (TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  if ((param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownShift >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0xe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 - param_4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeginIndex - DownShift >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0xf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3 < param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex >= BeginIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0x10,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->ArrayNum < param_3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndIndex <= Items.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ArrayAlgorithm.h"
                         ,0x11,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((0 < param_4) && (param_2 < param_3)) {
    lVar11 = uVar9 * 8;
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar10 = (param_1->AllocatorInstance).Data + lVar11;
      uVar6 = 0;
      if ((int)(uVar8 - param_4) < param_1->ArrayNum) {
        uVar6 = ~(uVar8 - param_4) >> 0x1f;
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
      pFVar7 = (param_1->AllocatorInstance).Data + lVar11 + (longlong)param_4 * -8;
      if (pFVar7 != pFVar10) {
        puVar3 = *(undefined8 **)pFVar7;
        *(longlong *)pFVar7 = *(longlong *)pFVar10;
        *(longlong *)pFVar10 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 8;
    } while ((int)(uVar8 + 1) < param_3);
  }
  return;
}

// RemoveArrayItemsAtSortedIndices<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_> @ 143b53180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::
RemoveArrayItemsAtSortedIndices<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
          (TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2->ArrayNum != 0) {
    iVar7 = 1;
    piVar4 = TArrayView<int_const_,int>::operator[](param_2,0);
    iVar5 = param_2->ArrayNum;
    uVar6 = 1;
    iVar9 = *piVar4;
    if (1 < iVar5) {
      lVar8 = 4;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
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
        iVar5 = *(int *)(lVar8 + (longlong)param_2->DataPtr);
        if (iVar5 != iVar9) {
          MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
                    (param_1,iVar9 + 1,iVar5,iVar7);
          iVar7 = iVar7 + 1;
          iVar9 = iVar5;
        }
        iVar5 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 4;
      } while ((int)uVar6 < iVar5);
    }
    MoveArrayItemsDown<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_>
              (param_1,iVar9 + 1,param_1->ArrayNum,iVar7);
    TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>::SetNum
              (param_1,param_1->ArrayNum - iVar7,No);
  }
  return;
}

// TryBulkSerializeArrayNDBaseForDoubles<double,float> @ 143b53e70

void __cdecl
Chaos::TryBulkSerializeArrayNDBaseForDoubles<double,float>
          (FArchive *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  float fVar2;
  double dVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<float,TSizedDefaultAllocator<32>_> local_38 [2];
  
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    uVar11 = param_2->ArrayNum;
    if ((int)uVar11 < 1) {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&local_38[0].AllocatorInstance,&local_38[0].ArrayNum,
                 &local_38[0].ArrayMax);
    }
    iVar8 = param_2->ArrayNum;
    uVar11 = 0;
    if (0 < iVar8) {
      lVar12 = 0;
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar8) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar3 = *(double *)((param_2->AllocatorInstance).Data + lVar13);
        uVar7 = 0;
        if ((int)uVar11 < local_38[0].ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 8;
        *(float *)(local_38[0].AllocatorInstance.Data + lVar12) = (float)dVar3;
        lVar12 = lVar12 + 4;
        iVar8 = param_2->ArrayNum;
      } while ((int)uVar11 < iVar8);
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize(local_38,param_1,false);
  if ((param_1->field_0x28 & 1) == 0) goto LAB_143b54177;
  iVar5 = local_38[0].ArrayNum;
  uVar9 = (ulonglong)local_38[0].ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  if (iVar8 < local_38[0].ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_38[0].ArrayNum - iVar8,&param_2->AllocatorInstance,piVar1,
               &param_2->ArrayMax);
LAB_143b540a9:
    uVar10 = local_38[0]._8_8_ & 0xffffffff;
  }
  else {
    if (local_38[0].ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_38[0]._8_8_ & 0xffffffff);
    }
    uVar10 = uVar9;
    if (local_38[0].ArrayNum < iVar8) {
      uVar11 = iVar8 - local_38[0].ArrayNum;
      if ((int)(uVar11 | local_38[0].ArrayNum) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = local_38[0]._8_8_ & 0xffffffff;
      }
      if (uVar11 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + uVar9 * 8;
        iVar8 = (*piVar1 - iVar5) - uVar11;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 8,(longlong)iVar8 << 3);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        goto LAB_143b540a9;
      }
    }
  }
  uVar11 = 0;
  if (0 < (int)uVar10) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (int)uVar10) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = *(float *)(local_38[0].AllocatorInstance.Data + lVar12);
      uVar7 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
      *(double *)((param_2->AllocatorInstance).Data + lVar13) = (double)fVar2;
      lVar13 = lVar13 + 8;
      uVar10 = local_38[0]._8_8_ & 0xffffffff;
    } while ((int)uVar11 < local_38[0].ArrayNum);
  }
LAB_143b54177:
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  return;
}

// TryBulkSerializeArrayNDBaseForDoubles<Chaos::TVector<double,3>,Chaos::TVector<float,3>_> @ 143b541c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::TryBulkSerializeArrayNDBaseForDoubles<Chaos::TVector<double,3>,Chaos::TVector<float,3>_>
          (FArchive *param_1,TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_58 [4];
  
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (local_58,param_2->ArrayNum,Default);
    iVar11 = param_2->ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar11) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar5 + lVar13;
        dVar7 = *(double *)pFVar1;
        dVar8 = *(double *)(pFVar1 + 8);
        dVar3 = *(double *)(pFVar5 + lVar13 + 0x10);
        uVar10 = 0;
        if ((int)uVar12 < local_58[0].ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x18;
        *(float *)(local_58[0].AllocatorInstance.Data + lVar14) = (float)dVar7;
        *(float *)(local_58[0].AllocatorInstance.Data + lVar14 + 4) = (float)dVar8;
        *(float *)(local_58[0].AllocatorInstance.Data + lVar14 + 8) = (float)dVar3;
        lVar14 = lVar14 + 0xc;
        iVar11 = param_2->ArrayNum;
      } while ((int)uVar12 < iVar11);
    }
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::BulkSerialize(local_58,param_1,false)
  ;
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2,local_58[0].ArrayNum,Default);
    uVar12 = 0;
    if (0 < local_58[0].ArrayNum) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < local_58[0].ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar4 = *(undefined8 *)(local_58[0].AllocatorInstance.Data + lVar13);
        fVar2 = *(float *)(local_58[0].AllocatorInstance.Data + lVar13 + 8);
        uVar10 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0xc;
        *(double *)(pFVar1 + lVar14) = (double)(float)uVar4;
        *(double *)(pFVar1 + lVar14 + 8) = (double)(float)((ulonglong)uVar4 >> 0x20);
        *(double *)(pFVar1 + lVar14 + 0x10) = (double)fVar2;
        lVar14 = lVar14 + 0x18;
      } while ((int)uVar12 < local_58[0].ArrayNum);
    }
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return;
}

// UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 143b544a0

void __cdecl
Chaos::Private::UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (TPBDRigidParticleHandleImp<double,3,1> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double,3> *pTVar20;
  TVector<double,3> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  undefined1 local_68 [16];
  
  if (__real_3e45798ee0000000 < param_2) {
    fVar24 = CVars::SmoothedPositionLerpRate;
    if (__real_3f800000 <= CVars::SmoothedPositionLerpRate) {
      fVar24 = __real_3f800000;
    }
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    dVar15 = (double)fVar24;
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::GetP(param_1);
    pTVar21 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar7 = *(uint *)&param_1->field_0x8;
    lVar23 = (longlong)(int)uVar7;
    dVar1 = *(double *)pTVar20;
    dVar2 = *(double *)pTVar21;
    dVar5 = *(double *)&pTVar21->field_0x8;
    dVar14 = *(double *)&pTVar21->field_0x10;
    lVar8 = *(longlong *)param_1;
    dVar6 = *(double *)&pTVar20->field_0x8;
    dVar16 = *(double *)&pTVar20->field_0x10;
    dVar11 = __real_3ff0000000000000 / param_2;
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar8 + 0x568)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x560);
    uVar7 = *(uint *)&param_1->field_0x8;
    lVar22 = (longlong)(int)uVar7;
    lVar9 = *(longlong *)param_1;
    uVar3 = *(undefined8 *)(lVar8 + 8 + lVar23 * 0x10);
    local_90 = (double)*(float *)(lVar8 + 4 + lVar23 * 0x10);
    local_98 = (double)*(float *)(lVar8 + lVar23 * 0x10);
    dVar12 = (double)(float)((ulonglong)uVar3 >> 0x20);
    local_88._8_4_ = SUB84(dVar12,0);
    local_88._0_8_ = (double)(float)uVar3;
    local_88._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar9 + 0x50)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar3 = *(undefined8 *)(lVar8 + 8 + lVar22 * 0x10);
    local_70 = (double)*(float *)(lVar8 + 4 + lVar22 * 0x10);
    local_78 = (double)*(float *)(lVar8 + lVar22 * 0x10);
    dVar12 = (double)(float)((ulonglong)uVar3 >> 0x20);
    local_68._8_4_ = SUB84(dVar12,0);
    local_68._0_8_ = (double)(float)uVar3;
    local_68._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    TRotation<double,3>::CalculateAngularVelocity1
              ((TVector<double,3> *)&local_b8,(TRotation<double,3> *)&local_78,
               (TRotation<double,3> *)&local_98,param_2);
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth(param_1);
    uVar7 = *(uint *)&param_1->field_0x8;
    lVar8 = *(longlong *)param_1;
    dVar17 = *(double *)&pTVar20->field_0x8;
    dVar12 = *(double *)pTVar20;
    dVar4 = *(double *)pTVar20;
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar8 + 0x2f8)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    dVar14 = ((dVar16 - dVar14) * dVar11 - *(double *)&pTVar20->field_0x10) * dVar15 +
             *(double *)&pTVar20->field_0x10;
    if (uVar19 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x2f0);
    *(double *)(lVar8 + (longlong)(int)uVar7 * 0x18) =
         ((dVar1 - dVar2) * dVar11 - dVar12) * dVar15 + dVar4;
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = ((dVar6 - dVar5) * dVar11 - dVar17) * dVar15 + dVar17;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar7 * 0x18) = auVar13;
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth(param_1);
    uVar7 = *(uint *)&param_1->field_0x8;
    lVar23 = (longlong)(int)uVar7;
    dVar1 = *(double *)&pTVar20->field_0x10;
    dVar2 = *(double *)&pTVar20->field_0x8;
    dVar11 = *(double *)pTVar20;
    lVar8 = *(longlong *)param_1;
    dVar5 = *(double *)&pTVar20->field_0x10;
    dVar14 = *(double *)&pTVar20->field_0x8;
    dVar6 = *(double *)pTVar20;
    uVar19 = 0;
    if ((int)uVar7 < *(int *)(lVar8 + 0x310)) {
      uVar19 = ~uVar7 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x308);
    *(double *)(lVar8 + lVar23 * 0x18) = (local_b8 - dVar11) * dVar15 + dVar6;
    *(double *)(lVar8 + 8 + lVar23 * 0x18) = (local_b0 - dVar2) * dVar15 + dVar14;
    *(double *)(lVar8 + 0x10 + lVar23 * 0x18) = (local_a8 - dVar1) * dVar15 + dVar5;
  }
  return;
}

// UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,0>_> @ 143b54810

void __cdecl
Chaos::Private::UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,0>_>
          (TPBDRigidParticleHandleImp<double,3,0> *param_1,double param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  TVector<double,3> *pTVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  
  if (__real_3e45798ee0000000 < param_2) {
    fVar24 = CVars::SmoothedPositionLerpRate;
    if (__real_3f800000 <= CVars::SmoothedPositionLerpRate) {
      fVar24 = __real_3f800000;
    }
    uVar18 = *(uint *)&param_1->field_0x8;
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    lVar8 = *(longlong *)param_1;
    dVar14 = (double)fVar24;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar8 + 0x550)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x548);
    pTVar20 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar19 = *(uint *)&param_1->field_0x8;
    lVar23 = (longlong)(int)uVar19;
    lVar22 = *(longlong *)param_1;
    dVar6 = *(double *)&pTVar20->field_0x8;
    dVar13 = *(double *)&pTVar20->field_0x10;
    dVar2 = *(double *)(lVar8 + (longlong)(int)uVar18 * 0x18);
    dVar3 = *(double *)pTVar20;
    pdVar1 = (double *)(lVar8 + 8 + (longlong)(int)uVar18 * 0x18);
    dVar7 = *pdVar1;
    dVar15 = pdVar1[1];
    dVar10 = __real_3ff0000000000000 / param_2;
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar22 + 0x568)) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar22 + 0x560);
    uVar18 = *(uint *)&param_1->field_0x8;
    lVar21 = (longlong)(int)uVar18;
    lVar22 = *(longlong *)param_1;
    uVar4 = *(undefined8 *)(lVar8 + 8 + lVar23 * 0x10);
    local_a0 = (double)*(float *)(lVar8 + 4 + lVar23 * 0x10);
    local_a8 = (double)*(float *)(lVar8 + lVar23 * 0x10);
    dVar11 = (double)(float)((ulonglong)uVar4 >> 0x20);
    local_98._8_4_ = SUB84(dVar11,0);
    local_98._0_8_ = (double)(float)uVar4;
    local_98._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar22 + 0x50)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar22 + 0x48);
    uVar4 = *(undefined8 *)(lVar8 + 8 + lVar21 * 0x10);
    local_80 = (double)*(float *)(lVar8 + 4 + lVar21 * 0x10);
    local_88 = (double)*(float *)(lVar8 + lVar21 * 0x10);
    dVar11 = (double)(float)((ulonglong)uVar4 >> 0x20);
    local_78._8_4_ = SUB84(dVar11,0);
    local_78._0_8_ = (double)(float)uVar4;
    local_78._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    TRotation<double,3>::CalculateAngularVelocity1
              ((TVector<double,3> *)&local_c8,(TRotation<double,3> *)&local_88,
               (TRotation<double,3> *)&local_a8,param_2);
    pTVar20 = TPBDRigidParticleHandleImp<double,3,0>::VSmooth(param_1);
    uVar18 = *(uint *)&param_1->field_0x8;
    lVar8 = *(longlong *)param_1;
    dVar16 = *(double *)&pTVar20->field_0x8;
    dVar11 = *(double *)pTVar20;
    dVar5 = *(double *)pTVar20;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar8 + 0x2f8)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    dVar13 = ((dVar15 - dVar13) * dVar10 - *(double *)&pTVar20->field_0x10) * dVar14 +
             *(double *)&pTVar20->field_0x10;
    if (uVar19 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x2f0);
    *(double *)(lVar8 + (longlong)(int)uVar18 * 0x18) =
         ((dVar2 - dVar3) * dVar10 - dVar11) * dVar14 + dVar5;
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ = ((dVar7 - dVar6) * dVar10 - dVar16) * dVar14 + dVar16;
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar18 * 0x18) = auVar12;
    pTVar20 = TPBDRigidParticleHandleImp<double,3,0>::WSmooth(param_1);
    uVar18 = *(uint *)&param_1->field_0x8;
    lVar22 = (longlong)(int)uVar18;
    dVar2 = *(double *)&pTVar20->field_0x10;
    dVar3 = *(double *)&pTVar20->field_0x8;
    dVar10 = *(double *)pTVar20;
    lVar8 = *(longlong *)param_1;
    dVar6 = *(double *)&pTVar20->field_0x10;
    dVar13 = *(double *)&pTVar20->field_0x8;
    dVar7 = *(double *)pTVar20;
    uVar19 = 0;
    if ((int)uVar18 < *(int *)(lVar8 + 0x310)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x308);
    *(double *)(lVar8 + lVar22 * 0x18) = (local_c8 - dVar10) * dVar14 + dVar7;
    *(double *)(lVar8 + 8 + lVar22 * 0x18) = (local_c0 - dVar3) * dVar14 + dVar13;
    *(double *)(lVar8 + 0x10 + lVar22 * 0x18) = (local_b8 - dVar2) * dVar14 + dVar6;
  }
  return;
}

// VisitNodeObjects<``Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 143b54bf0

void __thiscall
Chaos::Private::FImplicitBVH::
VisitNodeObjects<__Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (FImplicitBVH *this,int param_1,<lambda_1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar11 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->Nodes).AllocatorInstance.Data;
  uVar13 = (ulonglong)*(int *)(pFVar3 + lVar11 * 0x28 + 0x18);
  if (*(int *)(pFVar3 + lVar11 * 0x28 + 0x18) < *(int *)(pFVar3 + lVar11 * 0x28 + 0x1c)) {
    lVar14 = uVar13 * 4;
    do {
      uVar12 = (uint)uVar13;
      uVar10 = 0;
      if ((int)uVar12 < (this->NodeObjectIndices).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar14);
      uVar8 = 0;
      if ((int)uVar10 < (this->Objects).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
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
      uVar10 = *(uint *)((this->Objects).AllocatorInstance.Data +
                        (longlong)(int)uVar10 * 0x48 + 0x40);
      if (((int)uVar10 < 0) || (lVar4 = *(longlong *)param_2, *(int *)(lVar4 + 0x78) <= (int)uVar10)
         ) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7376392192400555452>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectUnion.cpp"
                           ,0x244,"MOriginalParticleLookupHack.IsValidIndex(LeafObjectIndex)");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pFVar5 = *(ForAnyElementType **)(param_2 + 8);
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar4 + 0x78)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = (FScriptContainerElement *)
                 (*(longlong *)(lVar4 + 0x70) + (longlong)(int)uVar10 * 8);
        if (((pFVar5->Data <= pFVar2) &&
            (pFVar2 < pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *(int *)&pFVar5[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar5,piVar1);
        }
        *(int *)&pFVar5[1].Data = iVar9 + 1;
        *(undefined8 *)(pFVar5->Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar2;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      lVar14 = lVar14 + 4;
    } while ((int)(uVar12 + 1) < *(int *)(pFVar3 + lVar11 * 0x28 + 0x1c));
  }
  return;
}

// VisitNodeObjects<``Chaos::FImplicitObjectUnion::FindAllIntersectingObjects'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 143b54e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FImplicitBVH::
VisitNodeObjects<__Chaos::FImplicitObjectUnion::FindAllIntersectingObjects_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (FImplicitBVH *this,int param_1,<lambda_1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_178;
  puVar17 = (undefined8 *)(longlong)param_1;
  iVar14 = (this->Nodes).ArrayNum;
  uVar15 = 0;
  if (param_1 < iVar14) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (local_158 = puVar17, local_150 = (FScriptContainerElement *)(longlong)iVar14,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = _UNK_150689688;
  uVar10 = ___xmm_3ff00000000000003ff0000000000000;
  uVar9 = _UNK_150689518;
  uVar8 = ___xmm_00000000000000003ff0000000000000;
  pFVar4 = (this->Nodes).AllocatorInstance.Data;
  uVar20 = (ulonglong)*(int *)(pFVar4 + (longlong)puVar17 * 0x28 + 0x18);
  if (*(int *)(pFVar4 + (longlong)puVar17 * 0x28 + 0x18) <
      *(int *)(pFVar4 + (longlong)puVar17 * 0x28 + 0x1c)) {
    lVar21 = uVar20 * 4;
    do {
      iVar14 = (this->NodeObjectIndices).ArrayNum;
      uVar19 = (uint)uVar20;
      uVar15 = 0;
      if ((int)uVar19 < iVar14) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_158 = (undefined8 *)(longlong)(int)uVar19;
        local_150 = (FScriptContainerElement *)(longlong)iVar14;
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
      iVar14 = (this->Objects).ArrayNum;
      uVar15 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar21);
      puVar18 = (undefined8 *)(longlong)(int)uVar15;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_158 = puVar18, local_150 = (FScriptContainerElement *)(longlong)iVar14,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Objects).AllocatorInstance.Data;
      pFVar6 = *(ForAnyElementType **)param_2;
      local_b8 = uVar10;
      uStack_b0 = uVar11;
      local_a8 = uVar8;
      uStack_a0 = uVar9;
      pFVar2 = pFVar5 + (longlong)puVar18 * 0x48;
      local_118 = *(float *)pFVar2;
      fStack_114 = *(float *)(pFVar2 + 4);
      fStack_110 = *(float *)(pFVar2 + 8);
      fStack_10c = *(float *)(pFVar2 + 0xc);
      local_120 = *(float *)(pFVar5 + (longlong)puVar18 * 0x48 + 0x18);
      uVar3 = *(undefined8 *)(pFVar5 + (longlong)puVar18 * 0x48 + 0x10);
      local_108 = *(undefined8 *)(pFVar5 + (longlong)puVar18 * 0x48 + 0x38);
      local_128._0_4_ = (float)uVar3;
      local_128._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_c8 = (double)local_120;
      uStack_c0 = 0;
      local_f8._8_4_ = SUB84((double)fStack_114,0);
      local_f8._0_8_ = (double)local_118;
      local_f8._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
      local_e8._8_4_ = SUB84((double)fStack_10c,0);
      local_e8._0_8_ = (double)fStack_110;
      local_e8._12_4_ = (int)((ulonglong)(double)fStack_10c >> 0x20);
      local_d8._8_4_ = SUB84((double)local_128._4_4_,0);
      local_d8._0_8_ = (double)(float)local_128;
      local_d8._12_4_ = (int)((ulonglong)(double)local_128._4_4_ >> 0x20);
      pFVar2 = pFVar6->Data;
      local_128 = uVar3;
      if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
         (lVar16 = (longlong)*(int *)((longlong)&pFVar6[1].Data + 4),
         (FScriptContainerElement *)&local_108 < pFVar2 + lVar16 * 0x70)) {
        local_140 = (longlong)*(int *)&pFVar6[1].Data;
        local_138 = 0x70;
        local_158 = &local_108;
        local_150 = pFVar2;
        local_148 = lVar16;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar14 = *(int *)&pFVar6[1].Data;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,pFVar6,piVar1);
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      *(int *)&pFVar6[1].Data = iVar14 + 1;
      lVar21 = lVar21 + 4;
      lVar16 = (longlong)iVar14 * 0x70;
      pFVar2 = pFVar6->Data;
      *(undefined8 *)(pFVar2 + lVar16) = local_108;
      *(undefined8 *)(pFVar2 + lVar16 + 8) = uStack_100;
      *(undefined8 *)(pFVar2 + lVar16 + 0x10) = local_f8._0_8_;
      *(undefined8 *)(pFVar2 + lVar16 + 0x10 + 8) = local_f8._8_8_;
      *(undefined8 *)(pFVar2 + lVar16 + 0x20) = local_e8._0_8_;
      *(undefined8 *)(pFVar2 + lVar16 + 0x20 + 8) = local_e8._8_8_;
      *(undefined8 *)(pFVar2 + lVar16 + 0x30) = local_d8._0_8_;
      *(undefined8 *)(pFVar2 + lVar16 + 0x30 + 8) = local_d8._8_8_;
      *(double *)(pFVar2 + lVar16 + 0x40) = local_c8;
      *(undefined8 *)(pFVar2 + lVar16 + 0x40 + 8) = uStack_c0;
      *(undefined8 *)(pFVar2 + lVar16 + 0x50) = local_b8;
      *(undefined8 *)(pFVar2 + lVar16 + 0x50 + 8) = uStack_b0;
      *(undefined8 *)(pFVar2 + lVar16 + 0x60) = local_a8;
      *(undefined8 *)(pFVar2 + lVar16 + 0x60 + 8) = uStack_a0;
    } while ((int)(uVar19 + 1) < *(int *)(pFVar4 + (longlong)puVar17 * 0x28 + 0x1c));
  }
  return;
}

// VisitNodeObjects<`Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl'::__l5::<lambda_1>_> @ 143b55220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FImplicitBVH::
VisitNodeObjects<_Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl_::__l5::<lambda_1>_>
          (FImplicitBVH *this,int param_1,<lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_248 [32];
  int *local_228;
  undefined4 *local_220;
  undefined4 local_218 [2];
  int local_210 [2];
  undefined4 local_208 [2];
  undefined8 local_200;
  float local_1f8;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  <lambda_1> *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  FScriptContainerElement *local_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_248;
  piVar17 = (int *)(longlong)param_1;
  iVar3 = (this->Nodes).ArrayNum;
  uVar16 = 0;
  if (param_1 < iVar3) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  local_1d8 = param_2;
  if ((uVar16 == 0) &&
     (local_228 = piVar17, local_220 = (undefined4 *)(longlong)iVar3,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar13 = _UNK_150689688;
  dVar12 = ___xmm_3ff00000000000003ff0000000000000;
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  local_1c0 = (this->Nodes).AllocatorInstance.Data;
  local_1c8 = (longlong)piVar17 * 5;
  uVar20 = (ulonglong)*(int *)(local_1c0 + (longlong)piVar17 * 0x28 + 0x18);
  if (*(int *)(local_1c0 + (longlong)piVar17 * 0x28 + 0x18) <
      *(int *)(local_1c0 + (longlong)piVar17 * 0x28 + 0x1c)) {
    lVar18 = uVar20 * 4;
    do {
      iVar3 = (this->NodeObjectIndices).ArrayNum;
      uVar19 = (uint)uVar20;
      uVar16 = 0;
      if ((int)uVar19 < iVar3) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_228 = (int *)(longlong)(int)uVar19;
        local_220 = (undefined4 *)(longlong)iVar3;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar3 = (this->Objects).ArrayNum;
      uVar16 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar18);
      piVar17 = (int *)(longlong)(int)uVar16;
      uVar15 = 0;
      if ((int)uVar16 < iVar3) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_228 = piVar17, local_220 = (undefined4 *)(longlong)iVar3,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->Objects).AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)piVar17 * 0x48;
      local_1e8 = *(float *)pFVar1;
      fStack_1e4 = *(float *)(pFVar1 + 4);
      fStack_1e0 = *(float *)(pFVar1 + 8);
      fStack_1dc = *(float *)(pFVar1 + 0xc);
      uVar4 = *(undefined4 *)(pFVar6 + (longlong)piVar17 * 0x48 + 0x40);
      local_1f8 = *(float *)(pFVar6 + (longlong)piVar17 * 0x48 + 0x18);
      uVar2 = *(undefined8 *)(pFVar6 + (longlong)piVar17 * 0x48 + 0x10);
      uVar5 = *(undefined4 *)(pFVar6 + (longlong)piVar17 * 0x48 + 0x34);
      uVar7 = *(undefined8 *)(pFVar6 + (longlong)piVar17 * 0x48 + 0x38);
      pTVar8 = local_1d8->VisitorFunc;
      local_210[0] = *local_1d8->ObjectIndex;
      *local_1d8->ObjectIndex = local_210[0] + 1;
      local_200._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_200._0_4_ = (float)uVar2;
      local_158.Translation.ZW.m128d_f64[0] = (double)local_1f8;
      local_158.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)local_200._4_4_,0);
      local_158.Translation.XY.m128d_f64[0] = (double)(float)local_200;
      local_158.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)local_200._4_4_ >> 0x20);
      local_158.Translation.ZW.m128d_f64[1] = 0.0;
      local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_1dc,0);
      local_158.Rotation.ZW.m128d_f64[0] = (double)fStack_1e0;
      local_158.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_1dc >> 0x20);
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fStack_1e4,0);
      local_158.Rotation.XY.m128d_f64[0] = (double)local_1e8;
      local_158.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_1e4 >> 0x20);
      local_158.Scale3D.XY.m128d_f64[0] = dVar12;
      local_158.Scale3D.XY.m128d_f64[1] = dVar13;
      local_158.Scale3D.ZW.m128d_f64[0] = dVar10;
      local_158.Scale3D.ZW.m128d_f64[1] = dVar11;
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_200 = uVar2;
      UE::Math::TTransform<double>::Multiply
                (&local_1b8,&local_158,(TTransform<double> *)local_1d8->ObjectTransform);
      local_f8 = local_1b8.Rotation.XY.m128d_f64[0];
      dStack_f0 = local_1b8.Rotation.XY.m128d_f64[1];
      local_d8 = local_1b8.Translation.XY.m128d_f64[0];
      dStack_d0 = local_1b8.Translation.XY.m128d_f64[1];
      local_e8 = local_1b8.Rotation.ZW.m128d_f64[0];
      dStack_e0 = local_1b8.Rotation.ZW.m128d_f64[1];
      local_b8 = local_1b8.Scale3D.XY.m128d_f64[0]._0_4_;
      uStack_b4 = local_1b8.Scale3D.XY.m128d_f64[0]._4_4_;
      uStack_b0 = local_1b8.Scale3D.XY.m128d_f64[1]._0_4_;
      uStack_ac = local_1b8.Scale3D.XY.m128d_f64[1]._4_4_;
      local_c8 = local_1b8.Translation.ZW.m128d_f64[0];
      dStack_c0 = local_1b8.Translation.ZW.m128d_f64[1];
      local_220 = local_218;
      local_a8 = local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_;
      uStack_a4 = local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_;
      uStack_a0 = local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_;
      uStack_9c = local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_228 = local_210;
      local_218[0] = uVar4;
      local_208[0] = uVar5;
      local_1d0 = uVar7;
      (**(code **)pTVar8)(*(undefined8 *)&pTVar8->field_0x8,&local_1d0,&local_f8,local_208);
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar18 = lVar18 + 4;
    } while ((int)(uVar19 + 1) < *(int *)(local_1c0 + local_1c8 * 8 + 0x1c));
  }
  return;
}

// VisitOverlappingNodesStack<`Chaos::Private::FImplicitBVH::VisitAllIntersections<`Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl'::__l5::<lambda_1>_>'::__l2::<lambda_1>_> @ 143b555e0

void __thiscall
Chaos::Private::FImplicitBVH::
VisitOverlappingNodesStack<_Chaos::Private::FImplicitBVH::VisitAllIntersections<_Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
          (FImplicitBVH *this,TAABB<float,3> *param_1,<lambda_1> *param_2)

{
  TVector<float,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  TVector<float,3> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  ForElementType<int> local_78;
  uint local_70;
  int local_6c;
  code *local_68;
  undefined1 *local_60;
  FMemMark local_58;
  
  if ((this->Nodes).ArrayNum == 0) {
    return;
  }
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_60 = local_res8;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar4);
  uVar13 = 0;
  local_78.Data = (int *)0x0;
  local_70 = 0;
  local_58.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_6c = 0;
  local_58.Top = (local_58.Mem)->Top;
  local_58.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_58.bPopped = false;
  local_58.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_58;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  uVar11 = this->TreeDepth;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  uVar7 = uVar13;
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar11,&local_78,0,&local_6c);
    uVar7 = (ulonglong)local_70;
  }
  pTVar1 = &param_1->MMax;
  uVar10 = uVar13;
  do {
    iVar8 = (int)uVar7;
    uVar9 = (uint)uVar10;
    uVar11 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->Nodes).AllocatorInstance.Data;
    pTVar6 = pTVar1;
    uVar7 = uVar13;
    do {
      if ((*(float *)pTVar6 <=
           *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + (longlong)pTVar6)
           && *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) +
                        (longlong)pTVar6) != *(float *)pTVar6) ||
         (*(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + 0xc +
                    (longlong)pTVar6) < *(float *)&((TAABB<float,3> *)(pTVar6 + -1))->MMin))
      goto LAB_143b55783;
      uVar7 = uVar7 + 1;
      pTVar6 = (TVector<float,3> *)&pTVar6->field_0x4;
    } while ((longlong)uVar7 < 3);
    if (*(int *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20) == -1) {
      bVar3 = NodeIsLeaf(*(FImplicitBVH **)param_2,uVar9);
      if (bVar3) {
        VisitNodeObjects<_Chaos::FImplicitObjectUnion::VisitOverlappingLeafObjectsImpl_::__l5::<lambda_1>_>
                  (*(FImplicitBVH **)param_2,uVar9,*(<lambda_1> **)(param_2 + 8));
      }
LAB_143b55783:
      if (iVar8 == 0) {
        if (local_58.bPopped != false) {
          return;
        }
        if (((local_58.Mem)->TopMark != &local_58) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_58.bPopped = true;
        (local_58.Mem)->NumMarks = (local_58.Mem)->NumMarks + -1;
        if (local_58.SavedChunk != (local_58.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_58.Mem,local_58.SavedChunk);
        }
        (local_58.Mem)->Top = local_58.Top;
        (local_58.Mem)->TopMark = local_58.NextTopmostMark;
        return;
      }
      if ((iVar8 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = iVar8 - 1;
      uVar10 = (ulonglong)*(uint *)(local_78.Data + (int)uVar11);
      iVar8 = (iVar8 - uVar11) + -1;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_78.Data + (int)uVar11),
                (FScriptContainerElement *)(local_78.Data + (int)uVar11) + 4,(longlong)iVar8 << 2);
      }
      uVar7 = (ulonglong)uVar11;
      local_70 = uVar11;
    }
    else {
      if ((this->TreeDepth <= iVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeStack.Num() < GetDepth()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectBVH.h"
                             ,0x105,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (ulonglong)*(uint *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20);
      pFVar12 = pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x24;
      if (((local_78.Data <= pFVar12) &&
          (pFVar12 < (FScriptContainerElement *)(local_78.Data + local_6c))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar8 == local_6c) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&local_78,&local_6c);
      }
      local_70 = iVar8 + 1;
      uVar7 = (ulonglong)local_70;
      *(undefined4 *)(local_78.Data + iVar8) = *(undefined4 *)pFVar12;
    }
  } while( true );
}

// VisitOverlappingNodesStack<`Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren'::__l5::<lambda_1>_> @ 143b55970

void __thiscall
Chaos::Private::FImplicitBVH::
VisitOverlappingNodesStack<_Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren_::__l5::<lambda_1>_>
          (FImplicitBVH *this,TAABB<float,3> *param_1,<lambda_1> *param_2)

{
  TVector<float,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  TVector<float,3> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  ForElementType<int> local_88;
  uint local_80;
  int local_7c;
  code *local_78;
  undefined1 *local_70;
  FImplicitObjectUnionClustered *local_68;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_60;
  FMemMark local_58;
  
  if ((this->Nodes).ArrayNum == 0) {
    return;
  }
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar4);
  uVar13 = 0;
  local_88.Data = (int *)0x0;
  local_80 = 0;
  local_58.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_7c = 0;
  local_58.Top = (local_58.Mem)->Top;
  local_58.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_58.bPopped = false;
  local_58.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_58;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  uVar11 = this->TreeDepth;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  uVar7 = uVar13;
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar11,&local_88,0,&local_7c);
    uVar7 = (ulonglong)local_80;
  }
  pTVar1 = &param_1->MMax;
  uVar10 = uVar13;
  do {
    iVar8 = (int)uVar7;
    uVar9 = (uint)uVar10;
    uVar11 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->Nodes).AllocatorInstance.Data;
    pTVar6 = pTVar1;
    uVar7 = uVar13;
    do {
      if ((*(float *)pTVar6 <=
           *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + (longlong)pTVar6)
           && *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) +
                        (longlong)pTVar6) != *(float *)pTVar6) ||
         (*(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + 0xc +
                    (longlong)pTVar6) < *(float *)&((TAABB<float,3> *)(pTVar6 + -1))->MMin))
      goto LAB_143b55b27;
      uVar7 = uVar7 + 1;
      pTVar6 = (TVector<float,3> *)&pTVar6->field_0x4;
    } while ((longlong)uVar7 < 3);
    if (*(int *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20) == -1) {
      bVar3 = NodeIsLeaf((FImplicitBVH *)param_2->__this->_padding_,uVar9);
      if (bVar3) {
        local_68 = param_2->__this;
        local_60 = param_2->IntersectingChildren;
        VisitNodeObjects<__Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
                  ((FImplicitBVH *)local_68->_padding_,uVar9,(<lambda_1> *)&local_68);
      }
LAB_143b55b27:
      if (iVar8 == 0) {
        if (local_58.bPopped != false) {
          return;
        }
        if (((local_58.Mem)->TopMark != &local_58) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_58.bPopped = true;
        (local_58.Mem)->NumMarks = (local_58.Mem)->NumMarks + -1;
        if (local_58.SavedChunk != (local_58.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_58.Mem,local_58.SavedChunk);
        }
        (local_58.Mem)->Top = local_58.Top;
        (local_58.Mem)->TopMark = local_58.NextTopmostMark;
        return;
      }
      if ((iVar8 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = iVar8 - 1;
      uVar10 = (ulonglong)*(uint *)(local_88.Data + (int)uVar11);
      iVar8 = (iVar8 - uVar11) + -1;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_88.Data + (int)uVar11),
                (FScriptContainerElement *)(local_88.Data + (int)uVar11) + 4,(longlong)iVar8 << 2);
      }
      uVar7 = (ulonglong)uVar11;
      local_80 = uVar11;
    }
    else {
      if ((this->TreeDepth <= iVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeStack.Num() < GetDepth()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectBVH.h"
                             ,0x105,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (ulonglong)*(uint *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20);
      pFVar12 = pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x24;
      if (((local_88.Data <= pFVar12) &&
          (pFVar12 < (FScriptContainerElement *)(local_88.Data + local_7c))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar8 == local_7c) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&local_88,&local_7c);
      }
      local_80 = iVar8 + 1;
      uVar7 = (ulonglong)local_80;
      *(undefined4 *)(local_88.Data + iVar8) = *(undefined4 *)pFVar12;
    }
  } while( true );
}

// VisitOverlappingNodesStack<`Chaos::FImplicitObjectUnion::FindAllIntersectingObjects'::__l5::<lambda_1>_> @ 143b55d10

void __thiscall
Chaos::Private::FImplicitBVH::
VisitOverlappingNodesStack<_Chaos::FImplicitObjectUnion::FindAllIntersectingObjects_::__l5::<lambda_1>_>
          (FImplicitBVH *this,TAABB<float,3> *param_1,<lambda_1> *param_2)

{
  TVector<float,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  TVector<float,3> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
  *local_res20;
  ForElementType<int> local_88;
  uint local_80;
  int local_7c;
  code *local_78;
  undefined1 *local_70;
  FMemMark local_68;
  
  if ((this->Nodes).ArrayNum == 0) {
    return;
  }
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar4);
  uVar13 = 0;
  local_88.Data = (int *)0x0;
  local_80 = 0;
  local_68.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_7c = 0;
  local_68.Top = (local_68.Mem)->Top;
  local_68.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_68.bPopped = false;
  local_68.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_68;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  uVar11 = this->TreeDepth;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  uVar7 = uVar13;
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar11,&local_88,0,&local_7c);
    uVar7 = (ulonglong)local_80;
  }
  pTVar1 = &param_1->MMax;
  uVar10 = uVar13;
  do {
    iVar8 = (int)uVar7;
    uVar9 = (uint)uVar10;
    uVar11 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->Nodes).AllocatorInstance.Data;
    pTVar6 = pTVar1;
    uVar7 = uVar13;
    do {
      if ((*(float *)pTVar6 <=
           *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + (longlong)pTVar6)
           && *(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) +
                        (longlong)pTVar6) != *(float *)pTVar6) ||
         (*(float *)(pFVar12 + ((longlong)(int)uVar9 * 0x28 - (longlong)pTVar1) + 0xc +
                    (longlong)pTVar6) < *(float *)&((TAABB<float,3> *)(pTVar6 + -1))->MMin))
      goto LAB_143b55ec3;
      uVar7 = uVar7 + 1;
      pTVar6 = (TVector<float,3> *)&pTVar6->field_0x4;
    } while ((longlong)uVar7 < 3);
    if (*(int *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20) == -1) {
      bVar3 = NodeIsLeaf((param_2->__this->BVH).Ptr,uVar9);
      if (bVar3) {
        local_res20 = param_2->Out;
        VisitNodeObjects<__Chaos::FImplicitObjectUnion::FindAllIntersectingObjects_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
                  ((param_2->__this->BVH).Ptr,uVar9,(<lambda_1> *)&local_res20);
      }
LAB_143b55ec3:
      if (iVar8 == 0) {
        if (local_68.bPopped != false) {
          return;
        }
        if (((local_68.Mem)->TopMark != &local_68) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_68.bPopped = true;
        (local_68.Mem)->NumMarks = (local_68.Mem)->NumMarks + -1;
        if (local_68.SavedChunk != (local_68.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_68.Mem,local_68.SavedChunk);
        }
        (local_68.Mem)->Top = local_68.Top;
        (local_68.Mem)->TopMark = local_68.NextTopmostMark;
        return;
      }
      if ((iVar8 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = iVar8 - 1;
      uVar10 = (ulonglong)*(uint *)(local_88.Data + (int)uVar11);
      iVar8 = (iVar8 - uVar11) + -1;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_88.Data + (int)uVar11),
                (FScriptContainerElement *)(local_88.Data + (int)uVar11) + 4,(longlong)iVar8 << 2);
      }
      uVar7 = (ulonglong)uVar11;
      local_80 = uVar11;
    }
    else {
      if ((this->TreeDepth <= iVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeStack.Num() < GetDepth()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectBVH.h"
                             ,0x105,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (ulonglong)*(uint *)(pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x20);
      pFVar12 = pFVar12 + (longlong)(int)uVar9 * 0x28 + 0x24;
      if (((local_88.Data <= pFVar12) &&
          (pFVar12 < (FScriptContainerElement *)(local_88.Data + local_7c))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar8 == local_7c) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                          (0x404,&local_88,&local_7c);
      }
      local_80 = iVar8 + 1;
      uVar7 = (ulonglong)local_80;
      *(undefined4 *)(local_88.Data + iVar8) = *(undefined4 *)pFVar12;
    }
  } while( true );
}

// ~TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>,1,1> @ 143b57a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::<lambda_1>,1,1> @ 143b57a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>::operator()_::__l6::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::<lambda_2>,1,1> @ 143b57a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::<lambda_2>,1,1>
::
~TFunction_OwnedObject<__Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>::operator()_::__l9::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`9'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,1,1> @ 143b57aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,1,1>
::
~TFunction_OwnedObject<__Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>::operator()_::__l2::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`2'::<lambda_3>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12::<lambda_4>,1,1> @ 143b57ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12::<lambda_4>,1,1>
::
~TFunction_OwnedObject<__Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>::operator()_::__l12::<lambda_4>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`12'::<lambda_4>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15::<lambda_5>,1,1> @ 143b57ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15::<lambda_5>,1,1>
::
~TFunction_OwnedObject<__Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks_::__l4::<lambda_1>::operator()_::__l15::<lambda_5>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`15'::<lambda_5>,1,1>
        ::_vftable_;
  return;
}

// operator<< @ 143b58420

FChaosArchive * __cdecl Chaos::Private::operator<<(FChaosArchive *param_1,FImplicitBVH *param_2)

{
  FChaosArchive *pFVar1;
  
  pFVar1 = FImplicitBVH::Serialize(param_2,param_1);
  return pFVar1;
}

// operator<< @ 143b58440

FChaosArchive * __cdecl
Chaos::Private::operator<<(FChaosArchive *param_1,FImplicitBVHObject *param_2)

{
  FChaosArchive *pFVar1;
  
  pFVar1 = FImplicitBVHObject::Serialize(param_2,param_1);
  return pFVar1;
}

// operator() @ 143b5a110

void __thiscall
``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::
<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat445) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat445 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Gather");
  Chaos::Private::FPBDConstraintGroupSolver::GatherBodies
            (*(FPBDConstraintGroupSolver **)this,*(double *)((longlong)this + 0x10),
             *(int *)((longlong)this + 8),*(int *)((longlong)this + 0xc));
  FCsvProfiler::EndStat("StepSolver_Gather",uVar1);
  return;
}

// operator() @ 143b5a820

void __thiscall
``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::
<lambda_2>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat467) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat467 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Gather");
  Chaos::Private::FPBDConstraintGroupSolver::GatherConstraints
            (*(FPBDConstraintGroupSolver **)((longlong)this + 8),*(double *)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14));
  FCsvProfiler::EndStat("StepSolver_Gather",uVar1);
  return;
}

// operator() @ 143b5b010

void __thiscall
``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12
::<lambda_4>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat503) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat503 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Scatter");
  Chaos::Private::FPBDConstraintGroupSolver::ScatterConstraints
            (*(FPBDConstraintGroupSolver **)((longlong)this + 8),*(double *)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14));
  FCsvProfiler::EndStat("StepSolver_Scatter",uVar1);
  return;
}

// operator() @ 143b5b7b0

void __thiscall
``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15
::<lambda_5>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat521) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat521 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Scatter");
  Chaos::Private::FPBDConstraintGroupSolver::ScatterBodies
            (*(FPBDConstraintGroupSolver **)((longlong)this + 8),*(double *)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14));
  FCsvProfiler::EndStat("StepSolver_Scatter",uVar1);
  return;
}

// `scalar_deleting_destructor' @ 143b5bb60

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles'::__l20::<lambda_2>_>
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

// `scalar_deleting_destructor' @ 143b5bbd0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles'::__l20::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`9'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`2'::<lambda_3>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12::<lambda_4>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`12'::<lambda_4>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15::<lambda_5>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`15'::<lambda_5>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bd90

void * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::_scalar_deleting_destructor_
          (TImplicitObjectInstanced<Chaos::FConvex> *this,uint param_1)

{
  longlong *plVar1;
  FConvex *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 != (FConvex *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5be00

void * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::_scalar_deleting_destructor_
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,uint param_1)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5be70

void * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FImplicitObject,1>::_scalar_deleting_destructor_
          (TImplicitObjectScaled<Chaos::FImplicitObject,1> *this,uint param_1)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFImplicitObject_Chaos___00_Chaos__6B_;
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bef0

void * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::_scalar_deleting_destructor_
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *this,uint param_1)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  longlong lVar3;
  
  this->_padding_ =
       (longlong)&___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___00_Chaos__6B_;
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bf70

void * __thiscall
Chaos::FChaosArchiveContext::TRefCountPtrHolder<Chaos::FTriangleMeshImplicitObject>::
_scalar_deleting_destructor_
          (TRefCountPtrHolder<Chaos::FTriangleMeshImplicitObject> *this,uint param_1)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->RCP).Reference;
  if (pFVar2 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this->_padding_ = (longlong)&___7FRefCountPtrHolder_FChaosArchiveContext_Chaos__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5bfe0

void * __thiscall
Chaos::FChaosRefCountedObject::_scalar_deleting_destructor_
          (FChaosRefCountedObject *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FChaosRefCountedObject_Chaos__6B_;
  if ((this->NumRefs != (atomic<int>)0x0) && (this->NumRefs != (atomic<int>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RefCountedObject.h"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c060

void * __thiscall Chaos::FCylinder::_scalar_deleting_destructor_(FCylinder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCylinder_Chaos__6B_;
  (this->MPlane2)._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)&this->MPlane2);
  (this->MPlane1)._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)&this->MPlane1);
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c0d0

void * __thiscall
Chaos::FImplicitObject::_scalar_deleting_destructor_(FImplicitObject *this,uint param_1)

{
  ~FImplicitObject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c110

void * __thiscall
Chaos::FImplicitObjectInstanced::_scalar_deleting_destructor_
          (FImplicitObjectInstanced *this,uint param_1)

{
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c150

void * __thiscall
Chaos::FImplicitObjectUnion::_scalar_deleting_destructor_(FImplicitObjectUnion *this,uint param_1)

{
  ~FImplicitObjectUnion(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c190

void * __thiscall
Chaos::FImplicitObjectUnionClustered::_scalar_deleting_destructor_
          (FImplicitObjectUnionClustered *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MCollisionParticleLookupHack).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MCollisionParticleLookupHack).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FImplicitObject_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MCollisionParticleLookupHack);
  pFVar2 = (this->MOriginalParticleLookupHack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FImplicitObjectUnion::~FImplicitObjectUnion((FImplicitObjectUnion *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c210

void * __thiscall Chaos::FLevelSet::_scalar_deleting_destructor_(FLevelSet *this,uint param_1)

{
  ~FLevelSet(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c250

void * __thiscall
Chaos::Private::FPBDIslandConstraintGroupSolver::_scalar_deleting_destructor_
          (FPBDIslandConstraintGroupSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<int> FVar2;
  
  pFVar1 = (this->Islands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->NumContainerConstraints).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FPBDConstraintGroupSolver::~FPBDConstraintGroupSolver((FPBDConstraintGroupSolver *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c2b0

void * __thiscall
Chaos::FTaperedCapsule::_scalar_deleting_destructor_(FTaperedCapsule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTaperedCapsule_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c300

void * __thiscall
Chaos::FTaperedCylinder::_scalar_deleting_destructor_(FTaperedCylinder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTaperedCylinder_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143b5c350

void * __thiscall
Chaos::FTriangleMeshImplicitObject::_scalar_deleting_destructor_
          (FTriangleMeshImplicitObject *this,uint param_1)

{
  ~FTriangleMeshImplicitObject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// CalculateObjectsBounds @ 143b5fae0

TAABB<double,3> * __cdecl
Chaos::CalculateObjectsBounds
          (TAABB<double,3> *__return_storage_ptr__,
          TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int> *param_1)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar6;
  TAABB<double,3> *pTVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined1 local_38 [48];
  
  if (param_1->ArrayNum == 0) {
    *(undefined8 *)&__return_storage_ptr__->MMin = 0;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->MMax = 0;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = 0;
  }
  else {
    pTVar6 = TArrayView<TRefCountPtr<Chaos::FImplicitObject>,int>::operator[](param_1,0);
    (**(code **)(pTVar6->Reference->_padding_ + 0x90))(pTVar6->Reference,&local_68);
    iVar9 = param_1->ArrayNum;
    uVar10 = 1;
    if (1 < iVar9) {
      lVar11 = 8;
      do {
        uVar5 = 0;
        if ((int)uVar10 < iVar9) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAABB<double,3> *)(*pcVar3)();
          return pTVar7;
        }
        plVar2 = *(longlong **)((longlong)&param_1->DataPtr->Reference + lVar11);
        pdVar8 = (double *)(**(code **)(*plVar2 + 0x90))(plVar2,local_38);
        iVar9 = param_1->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
        dVar16 = *pdVar8;
        uVar12 = SUB84(dVar16,0);
        uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar14 = pdVar8[1];
        if (dStack_60 <= pdVar8[1]) {
          dVar14 = dStack_60;
        }
        if (local_68 <= dVar16) {
          uVar12 = SUB84(local_68,0);
          uVar13 = (undefined4)((ulonglong)local_68 >> 0x20);
        }
        dVar16 = pdVar8[2];
        if (local_58 <= pdVar8[2]) {
          dVar16 = local_58;
        }
        local_68 = (double)CONCAT44(uVar13,uVar12);
        dVar1 = pdVar8[3];
        uVar12 = SUB84(dVar1,0);
        uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar17 = pdVar8[5];
        if (pdVar8[5] <= local_40) {
          dVar17 = local_40;
        }
        dVar15 = pdVar8[4];
        if (pdVar8[4] <= dStack_48) {
          dVar15 = dStack_48;
        }
        if (dVar1 <= local_50) {
          uVar12 = SUB84(local_50,0);
          uVar13 = (undefined4)((ulonglong)local_50 >> 0x20);
        }
        local_50 = (double)CONCAT44(uVar13,uVar12);
        dStack_60 = dVar14;
        local_58 = dVar16;
        dStack_48 = dVar15;
        local_40 = dVar17;
      } while ((int)uVar10 < iVar9);
    }
    *(double *)&__return_storage_ptr__->MMin = local_68;
    *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dStack_60;
    *(double *)&(__return_storage_ptr__->MMin).field_0x10 = local_58;
    *(double *)&__return_storage_ptr__->MMax = local_50;
    *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dStack_48;
    *(double *)&(__return_storage_ptr__->MMax).field_0x10 = local_40;
  }
  return __return_storage_ptr__;
}

// GetIslandParticleSleepThresholds @ 143b679e0

bool __cdecl
Chaos::Private::GetIslandParticleSleepThresholds
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *param_2,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_3,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_4,float *param_5,
          float *param_6,int *param_7,float *param_8,float *param_9)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  ESleepType EVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FChaosPhysicsMaterial *pFVar9;
  bool *pbVar10;
  uint uVar11;
  TGeometryParticleHandleImp<double,3,1> *this;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  *param_5 = 0.0;
  *param_6 = 0.0;
  *param_7 = 0x7fffffff;
  this = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this = param_1;
  }
  if ((this == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
     (EVar5 = TPBDRigidParticleHandleImp<double,3,1>::SleepType
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this), EVar5 == NeverSleep)) {
    return false;
  }
  lVar3 = this->_padding_;
  uVar2 = (uint)this->_padding_;
  uVar11 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x4a8)) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  fVar1 = *(float *)(*(longlong *)(lVar3 + 0x4a0) + (longlong)(int)uVar2 * 4);
  pFVar9 = GetFirstPhysicsMaterial(this,param_2,param_3,param_4);
  if (pFVar9 == (FChaosPhysicsMaterial *)0x0) {
    *param_5 = fVar1 * CVars::ChaosSolverCollisionDefaultLinearSleepThreshold;
    *param_6 = fVar1 * CVars::ChaosSolverCollisionDefaultAngularSleepThreshold;
    iVar8 = CVars::ChaosSolverCollisionDefaultSleepCounterThreshold;
  }
  else {
    *param_5 = (float)pFVar9->SleepingLinearThreshold * fVar1;
    *param_6 = (float)pFVar9->SleepingAngularThreshold * fVar1;
    iVar8 = pFVar9->SleepCounterThreshold;
  }
  *param_7 = iVar8;
  fVar1 = CVars::ChaosSolverCollisionAngularSleepThresholdSize;
  if ((0.0 < CVars::ChaosSolverCollisionAngularSleepThresholdSize) &&
     (pbVar10 = TGeometryParticlesImp<double,3,0>::HasBounds
                          ((TGeometryParticlesImp<double,3,0> *)this->_padding_,(int)this->_padding_
                          ), *pbVar10 != false)) {
    uVar2 = (uint)this->_padding_;
    lVar12 = (longlong)(int)uVar2;
    lVar3 = this->_padding_;
    uVar11 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x118)) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    lVar3 = *(longlong *)(lVar3 + 0x110);
    dVar15 = *(double *)(lVar3 + 0x20 + lVar12 * 0x30) - *(double *)(lVar3 + 8 + lVar12 * 0x30);
    dVar13 = *(double *)(lVar3 + 0x18 + lVar12 * 0x30) - *(double *)(lVar3 + lVar12 * 0x30);
    dVar14 = *(double *)(lVar3 + 0x28 + lVar12 * 0x30) - *(double *)(lVar3 + 0x10 + lVar12 * 0x30);
    if (dVar15 <= dVar13) {
      dVar15 = dVar13;
    }
    if (dVar15 <= dVar14) {
      dVar15 = dVar14;
    }
    if (fVar1 < (float)dVar15) {
      *param_6 = (fVar1 / (float)dVar15) * *param_6;
    }
  }
  *param_8 = CVars::LinearPartialWakeThresholdMultiplier * *param_5;
  *param_9 = CVars::AngularPartialWakeThresholdMultiplier * *param_6;
  return true;
}

// GetIsolatedParticleSleepThresholds @ 143b67c60

bool __cdecl
Chaos::Private::GetIsolatedParticleSleepThresholds
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *param_2,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_3,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_4,float *param_5,
          float *param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float local_18;
  float local_14 [3];
  
  bVar1 = GetIslandParticleSleepThresholds
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,local_14,&local_18);
  if (bVar1) {
    iVar2 = CVars::IsolatedParticleSleepCounterThresholdMultiplier;
    if (CVars::IsolatedParticleSleepCounterThresholdMultiplier < 1) {
      iVar2 = 1;
    }
    *param_7 = iVar2 * *param_7;
    fVar3 = CVars::IsolatedParticleSleepLinearThresholdMultiplier;
    if (CVars::IsolatedParticleSleepLinearThresholdMultiplier <= 0.0) {
      fVar3 = 0.0;
    }
    *param_5 = fVar3 * *param_5;
    fVar3 = CVars::IsolatedParticleSleepAngularThresholdMultiplier;
    if (CVars::IsolatedParticleSleepAngularThresholdMultiplier <= 0.0) {
      fVar3 = 0.0;
    }
    *param_6 = fVar3 * *param_6;
    return true;
  }
  return false;
}

// GetParticleDisableThresholds @ 143b68440

bool __cdecl
Chaos::Private::GetParticleDisableThresholds
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *param_2,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_3,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_4,float *param_5,
          float *param_6)

{
  ESleepType EVar1;
  FChaosPhysicsMaterial *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *this;
  
  *param_5 = 0.0;
  *param_6 = 0.0;
  this = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this = param_1;
  }
  if (((this != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (EVar1 = TPBDRigidParticleHandleImp<double,3,1>::SleepType
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this), EVar1 != NeverSleep)) &&
     (pFVar2 = GetFirstPhysicsMaterial(this,param_2,param_3,param_4),
     pFVar2 != (FChaosPhysicsMaterial *)0x0)) {
    *param_5 = (float)pFVar2->DisabledLinearThreshold;
    *param_6 = (float)pFVar2->DisabledAngularThreshold;
    return true;
  }
  return false;
}

// IsParticleDynamic @ 143b6a0d0

bool __cdecl Chaos::Private::IsParticleDynamic(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar2 = this_00;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar2 = param_1;
    }
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this = this_00;
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
      if (EVar1 == Dynamic) {
        return true;
      }
    }
    pTVar2 = this_00;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar2 = param_1;
    }
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        this_00 = pTVar2;
      }
      if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar1 = Kinematic;
      }
      else {
        EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      }
      if (EVar1 == Sleeping) {
        return true;
      }
    }
  }
  return false;
}

// IsParticleMoving @ 143b6a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl Chaos::Private::IsParticleMoving(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  EObjectStateType EVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  FKinematicTarget *pFVar11;
  TVector<double,3> *pTVar12;
  TRotation<float,3> *pTVar13;
  TRotation<float,3> *pTVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  TGeometryParticleHandleImp<double,3,1> *this;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  TRotation<float,3> local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  undefined7 extraout_var;
  
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  cVar9 = *(char *)((longlong)&param_1->_padding_ + 4);
  this = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar15 = this;
  if (cVar9 != '\0') {
    pTVar15 = param_1;
  }
  if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar16 = this;
    if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar16 = pTVar15;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
      cVar9 = *(char *)((longlong)&param_1->_padding_ + 4);
    }
    if (EVar6 == Kinematic) {
      if (cVar9 != '\0') {
        this = param_1;
      }
      pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                          ((TKinematicGeometryParticlesImp<double,3,0> *)this->_padding_,
                           (int)this->_padding_);
      if (pFVar11->Mode != Position) {
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)this->_padding_,
                   (TVector<double,3> *)&local_68,(int)this->_padding_);
        if (((((local_68 == 0.0) && (local_60 == 0.0)) && (local_58 == 0.0)) &&
            ((TKinematicGeometryParticlesImp<double,3,0>::GetW
                        ((TKinematicGeometryParticlesImp<double,3,0> *)this->_padding_,
                         (TVector<double,3> *)&local_50,(int)this->_padding_), local_50 == 0.0 &&
             (local_48 == 0.0)))) && (local_40 == 0.0)) {
          return false;
        }
        return true;
      }
      pTVar12 = TParticles<double,3>::GetX
                          ((TParticles<double,3> *)this->_padding_,(int)this->_padding_);
      if ((pFVar11->Mode != Position) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mode == EKinematicTargetMode::Position",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                             ,0x4c,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      local_38 = *(double *)&pFVar11->Position;
      dStack_30 = *(double *)&(pFVar11->Position).field_0x8;
      local_28 = *(double *)&(pFVar11->Position).field_0x10;
      if (*(double *)pTVar12 - local_38 != 0.0) {
        return true;
      }
      if (*(double *)&pTVar12->field_0x8 - dStack_30 == 0.0) {
        if (*(double *)&pTVar12->field_0x10 - local_28 != 0.0) {
          return true;
        }
        pTVar13 = TGeometryParticleHandleImp<double,3,1>::GetRf(this,&local_78);
        pTVar14 = pTVar13;
        if (pFVar11->Mode != Position) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mode == EKinematicTargetMode::Position",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                             ,0x4f,L"");
          pTVar14 = (TRotation<float,3> *)CONCAT71(extraout_var,bVar7);
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
        }
        fVar25 = *(float *)pTVar13;
        fVar3 = *(float *)&pTVar13->field_0x4;
        fVar4 = *(float *)&pTVar13->field_0x8;
        fVar5 = *(float *)&pTVar13->field_0xc;
        fVar17 = *(float *)&pFVar11->Rotation * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
        fVar19 = *(float *)&(pFVar11->Rotation).field_0x4 *
                 GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
        fVar20 = *(float *)&(pFVar11->Rotation).field_0x8 *
                 GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
        fVar21 = *(float *)&(pFVar11->Rotation).field_0xc *
                 GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
        fVar22 = fVar25 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                 fVar5 * fVar17 +
                 fVar3 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                 fVar4 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        fVar23 = fVar25 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                 fVar5 * fVar19 +
                 fVar3 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                 fVar4 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar24 = fVar25 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                 fVar5 * fVar20 +
                 fVar3 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                 fVar4 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar25 = fVar25 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                 fVar5 * fVar21 +
                 fVar3 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                 fVar4 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        auVar2._4_4_ = -(uint)(_UNK_1506895d4 <
                              (float)((uint)(fVar23 - UE::Math::TQuat<float>::Identity.Y) &
                                     _UNK_15061cc74));
        auVar2._0_4_ = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                              (float)((uint)(fVar22 - UE::Math::TQuat<float>::Identity.X) &
                                     __xmm_7fffffff7fffffff7fffffff7fffffff));
        auVar2._8_4_ = -(uint)(_UNK_1506895d8 <
                              (float)((uint)(fVar24 - UE::Math::TQuat<float>::Identity.Z) &
                                     _UNK_15061cc78));
        auVar2._12_4_ =
             -(uint)(_UNK_1506895dc <
                    (float)((uint)(fVar25 - UE::Math::TQuat<float>::Identity.W) & _UNK_15061cc7c));
        iVar10 = movmskps((int)pTVar14,auVar2);
        if (iVar10 == 0) {
          return false;
        }
        auVar18._4_4_ =
             -(uint)(_UNK_1506895d4 <
                    (float)((uint)(fVar23 + UE::Math::TQuat<float>::Identity.Y) & _UNK_15061cc74));
        auVar18._0_4_ =
             -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                    (float)((uint)(fVar22 + UE::Math::TQuat<float>::Identity.X) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff));
        auVar18._8_4_ =
             -(uint)(_UNK_1506895d8 <
                    (float)((uint)(fVar24 + UE::Math::TQuat<float>::Identity.Z) & _UNK_15061cc78));
        auVar18._12_4_ =
             -(uint)(_UNK_1506895dc <
                    (float)((uint)(fVar25 + UE::Math::TQuat<float>::Identity.W) & _UNK_15061cc7c));
        iVar10 = movmskps(iVar10,auVar18);
        if (iVar10 == 0) {
          return false;
        }
        return true;
      }
      return true;
    }
  }
  pTVar15 = this;
  if (cVar9 != '\0') {
    pTVar15 = param_1;
  }
  if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar16 = this;
    if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar16 = pTVar15;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    }
    if (EVar6 != Static) {
      pTVar15 = this;
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        pTVar15 = param_1;
      }
      if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4)) {
          this = pTVar15;
        }
        if (this == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar6 = Kinematic;
        }
        else {
          EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this);
        }
        if (EVar6 == Sleeping) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// IsParticleSleeping @ 143b6a4a0

bool __cdecl Chaos::Private::IsParticleSleeping(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
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
      if (EVar1 == Sleeping) {
        return true;
      }
    }
  }
  return false;
}

// ParticlesIslandNeedsResim @ 143b6adb0

bool __cdecl
Chaos::Private::ParticlesIslandNeedsResim(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  uVar1 = (uint)param_1->_padding_;
  lVar2 = param_1->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 400)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (*(char *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x188)) == '\0') {
    uVar1 = (uint)param_1->_padding_;
    lVar2 = param_1->_padding_;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x208)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x200)) != '\0') {
      return false;
    }
  }
  return true;
}

// WasParticleAsleep @ 143b808d0

bool __cdecl Chaos::Private::WasParticleAsleep(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar6 = param_1;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar6->_padding_;
    lVar2 = pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return *(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xc + (longlong)(int)uVar1 * 0x10) == '\x01';
  }
  return false;
}

// `dynamic_atexit_destructor_for_'CVarChaosConstraintGraphValidate'' @ 150364d40

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosConstraintGraphValidate__(void)

{
  CVarChaosConstraintGraphValidate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosConstraintGraphValidate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosImplicitBVHOptimizedCountLeafObjects'' @ 150364d60

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosImplicitBVHOptimizedCountLeafObjects__(void)

{
  CVarChaosImplicitBVHOptimizedCountLeafObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosImplicitBVHOptimizedCountLeafObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosRandomizeConstraintOrder'' @ 150364d80

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosRandomizeConstraintOrder__(void)

{
  CVarChaosRandomizeConstraintOrder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosRandomizeConstraintOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverAngularWakeThresholdMultiplier'' @ 150364da0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverAngularWakeThresholdMultiplier__(void)

{
  CVarChaosSolverAngularWakeThresholdMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverAngularWakeThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverCollisionAngularSleepThresholdSize'' @ 150364dc0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverCollisionAngularSleepThresholdSize__
          (void)

{
  CVarChaosSolverCollisionAngularSleepThresholdSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverCollisionAngularSleepThresholdSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverCollisionDefaultAngularSleepThreshold'' @ 150364de0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultAngularSleepThreshold__
          (void)

{
  CVarChaosSolverCollisionDefaultAngularSleepThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverCollisionDefaultAngularSleepThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverCollisionDefaultLinearSleepThreshold'' @ 150364e00

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultLinearSleepThreshold__
          (void)

{
  CVarChaosSolverCollisionDefaultLinearSleepThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverCollisionDefaultLinearSleepThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverCollisionDefaultSleepCounterThreshold'' @ 150364e20

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverCollisionDefaultSleepCounterThreshold__
          (void)

{
  CVarChaosSolverCollisionDefaultSleepCounterThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverCollisionDefaultSleepCounterThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverComputeIterationSettingsEnabled'' @ 150364e40

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverComputeIterationSettingsEnabled__(void)

{
  CVarChaosSolverComputeIterationSettingsEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverComputeIterationSettingsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverForcePartialIslandWake'' @ 150364e60

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverForcePartialIslandWake__(void)

{
  CVarChaosSolverForcePartialIslandWake._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverForcePartialIslandWake);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier'' @ 150364e80

void __cdecl
Chaos::CVars::
_dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier__
          (void)

{
  CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverIsolatedParticleSleepAngularThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier'' @ 150364ea0

void __cdecl
Chaos::CVars::
_dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier__
          (void)

{
  CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverIsolatedParticleSleepCounterThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier'' @ 150364ec0

void __cdecl
Chaos::CVars::
_dynamic_atexit_destructor_for__CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier__
          (void)

{
  CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverIsolatedParticleSleepLinearThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverLinearWakeThresholdMultiplier'' @ 150364ee0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverLinearWakeThresholdMultiplier__(void)

{
  CVarChaosSolverLinearWakeThresholdMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverLinearWakeThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverMinMotionlessRatio'' @ 150364f00

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverMinMotionlessRatio__(void)

{
  CVarChaosSolverMinMotionlessRatio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverMinMotionlessRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverMomentumPropagation'' @ 150364f20

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverMomentumPropagation__(void)

{
  CVarChaosSolverMomentumPropagation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverMomentumPropagation)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverPartialIslandSleep'' @ 150364f40

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverPartialIslandSleep__(void)

{
  CVarChaosSolverPartialIslandSleep._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverPartialIslandSleep);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverPartialIslandWake'' @ 150364f60

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverPartialIslandWake__(void)

{
  CVarChaosSolverPartialIslandWake._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverPartialIslandWake);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverPartialSleepCollisionConstraintsOnly'' @ 150364f80

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverPartialSleepCollisionConstraintsOnly__
          (void)

{
  CVarChaosSolverPartialSleepCollisionConstraintsOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverPartialSleepCollisionConstraintsOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverPartialWakePreIntegration'' @ 150364fa0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverPartialWakePreIntegration__(void)

{
  CVarChaosSolverPartialWakePreIntegration._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverPartialWakePreIntegration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverPostStepWakeThreshold'' @ 150364fc0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverPostStepWakeThreshold__(void)

{
  CVarChaosSolverPostStepWakeThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverPostStepWakeThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverSleepEnabled'' @ 150364fe0

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverSleepEnabled__(void)

{
  CVarChaosSolverSleepEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverSleepEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverSleepModeSwitchThreshold'' @ 150365000

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverSleepModeSwitchThreshold__(void)

{
  CVarChaosSolverSleepModeSwitchThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverSleepModeSwitchThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverWakeOnMovingOnly'' @ 150365020

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverWakeOnMovingOnly__(void)

{
  CVarChaosSolverWakeOnMovingOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosSolverWakeOnMovingOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosSolverWakeOnParticleStateChanged'' @ 150365040

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosSolverWakeOnParticleStateChanged__(void)

{
  CVarChaosSolverWakeOnParticleStateChanged._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarChaosSolverWakeOnParticleStateChanged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosUnionBVHEnabled'' @ 150365060

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosUnionBVHEnabled__(void)

{
  CVarChaosUnionBVHEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosUnionBVHEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosUnionBVHMaxDepth'' @ 150365080

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosUnionBVHMaxDepth__(void)

{
  CVarChaosUnionBVHMaxDepth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosUnionBVHMaxDepth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosUnionBVHMinShapes'' @ 1503650a0

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosUnionBVHMinShapes__(void)

{
  CVarChaosUnionBVHMinShapes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosUnionBVHMinShapes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosUnionBVHSplitBias'' @ 1503650c0

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__CVarChaosUnionBVHSplitBias__(void)

{
  CVarChaosUnionBVHSplitBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosUnionBVHSplitBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClosestIntersectionStepSizeMultiplier'' @ 1503650e0

void __cdecl
Chaos::_dynamic_atexit_destructor_for__CVarClosestIntersectionStepSizeMultiplier__(void)

{
  CVarClosestIntersectionStepSizeMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClosestIntersectionStepSizeMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugNetworkPhysicsPrediction'' @ 150365100

void __cdecl
`Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction'::__l2::
_dynamic_atexit_destructor_for__CVarDebugNetworkPhysicsPrediction__(void)

{
  `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'::
  __l2::CVarDebugNetworkPhysicsPrediction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
              ::__l2::CVarDebugNetworkPhysicsPrediction);
  return;
}

// `dynamic_atexit_destructor_for_'ChaosSolverValidateConstraintSleepState'' @ 150365120

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__ChaosSolverValidateConstraintSleepState__(void)

{
  ChaosSolverValidateConstraintSleepState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ChaosSolverValidateConstraintSleepState);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarIslandGroupsMaxWorkers'' @ 150365140

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__GCVarIslandGroupsMaxWorkers__(void)

{
  GCVarIslandGroupsMaxWorkers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarIslandGroupsMaxWorkers);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarIslandGroupsMinBodiesPerWorker'' @ 150365160

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__GCVarIslandGroupsMinBodiesPerWorker__(void)

{
  GCVarIslandGroupsMinBodiesPerWorker._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCVarIslandGroupsMinBodiesPerWorker);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarIslandGroupsMinConstraintsPerWorker'' @ 150365180

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__GCVarIslandGroupsMinConstraintsPerWorker__(void)

{
  GCVarIslandGroupsMinConstraintsPerWorker._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCVarIslandGroupsMinConstraintsPerWorker);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarIslandGroupsParallelMode'' @ 1503651a0

void __cdecl Chaos::CVars::_dynamic_atexit_destructor_for__GCVarIslandGroupsParallelMode__(void)

{
  GCVarIslandGroupsParallelMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarIslandGroupsParallelMode);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarIslandGroupsWorkerThreadMultiplier'' @ 1503651c0

void __cdecl
Chaos::CVars::_dynamic_atexit_destructor_for__GCVarIslandGroupsWorkerThreadMultiplier__(void)

{
  GCVarIslandGroupsWorkerThreadMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCVarIslandGroupsWorkerThreadMultiplier);
  return;
}

